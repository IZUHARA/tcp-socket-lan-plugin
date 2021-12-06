#include "TCPSocketActor.h"


//TMap<FString, FTCPMSGCALLBACK>	ATCPSocketActor::_bindedFunctions = {};


// Sets default values
ATCPSocketActor::ATCPSocketActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	lastParsedMessages.Init("", 8);
}

// Called when the game starts or when spawned
void ATCPSocketActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATCPSocketActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (flushFunctionsQuickly) {
		while (!_mainThreadFunctionQueue.IsEmpty()) {
			FString callbackString;
			_mainThreadFunctionQueue.Dequeue(callbackString);
			OnMessageReceived.Broadcast(callbackString);	//Can only be called in main thread!


			if (_bindedFunctions.Contains(callbackString)) {

				UE_LOG(LogTemp, Warning, TEXT("Function contain in dictionary! \"%s\"."), *callbackString);
				//UE_LOG(LogTemp, Warning, TEXT("Function ISBOUND: \"%d\"."), _bindedFunctions[input].IsBound());
				_bindedFunctions[callbackString].Execute();
			}
		}
	}
	else {
		if (!_mainThreadFunctionQueue.IsEmpty()) { //Calls 1 function per tick
			FString callbackString;
			_mainThreadFunctionQueue.Dequeue(callbackString);
			OnMessageReceived.Broadcast(callbackString);
			if (_bindedFunctions.Contains(callbackString)) {

				UE_LOG(LogTemp, Warning, TEXT("Function contain in dictionary! \"%s\"."), *callbackString);
				//UE_LOG(LogTemp, Warning, TEXT("Function ISBOUND: \"%d\"."), _bindedFunctions[input].IsBound());
				_bindedFunctions[callbackString].Execute();
			}
		}
	}
	if (_FLAG_ONCONNECT) {
		OnConnected.Broadcast();
		_FLAG_ONCONNECT = false;
	}
	if (_FLAG_ONDISCONNECT) {
		OnDisconnected.Broadcast();
		_FLAG_ONDISCONNECT = false;
	}

}

void ATCPSocketActor::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	if (_currentRunningThread) {
		_currentRunningThread->Suspend(true);
		_currentRunningThread->Kill(false); //This invalidates the thread. Will crash if called twice. Will call Stop instead of Exit() regardless the thread has finished or not.
		_currentRunningThread = nullptr;
	}
	//Cleanup sockets
	CloseAllOutboundSockets();

	if (_mySocket) {
		_mySocket->Shutdown(ESocketShutdownMode::ReadWrite);
		_mySocket->Close();
	}
}

bool ATCPSocketActor::StartConnection(bool runAsServer)
{
	if (runAsServer) {
		UE_LOG(LogTemp, Warning, TEXT("ATCPSocketActor::StartConnection: Starting as Server."));

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("ATCPSocketActor::StartConnection: Starting as Client."));

	}

	if (IsRunning()) {
		UE_LOG(LogTemp, Warning, TEXT("Socket is already running."));
		return false;
	}

	_connectionType = runAsServer? SocketConnectionType::Server : SocketConnectionType::Client;

	if (!_threadConnection.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("_threadConnection is not valid. Creating a new one..."));
		_threadConnection = TUniquePtr<FThreadRunner>(new FThreadRunner(this)); //Creates a singular instance until this actor is destroyed.
	}

	//Cleanup current thread. Does not need to be Killed as they are Exit() called due to the _isServerRunning variable.
	if (_currentRunningThread != nullptr) {
		//_currentRunningThread->Kill(false);
		//delete _currentRunningThread;
		UE_LOG(LogTemp, Warning, TEXT("Nulling _currentRunningThread."));

		_currentRunningThread = nullptr;
	}

	_currentRunningThread = FRunnableThread::Create(_threadConnection.Get(), TEXT("ThreadConnection"));
	if (_currentRunningThread == nullptr) {
		_isRunning = false;
		UE_LOG(LogTemp, Warning, TEXT("ERROR: Thread creation failed."));
	}
	return _currentRunningThread != nullptr;
}

bool ATCPSocketActor::StopConnection()
{
	if (!IsRunning()) {
		UE_LOG(LogTemp, Warning, TEXT("Socket is not running!"));

	}
	else {
		_FLAG_STOP = true;
	}

	return IsRunning();
}

void ATCPSocketActor::ResetConnection()
{
	switch (_connectionType) {
	case SocketConnectionType::Client:
		if (!_isClientConnected) {
			UE_LOG(LogTemp, Warning, TEXT("Cannot reset as there is no connection to server!"));
			return;
		}
		break;
	case SocketConnectionType::Server:
		if (!_isRunning) {
			UE_LOG(LogTemp, Warning, TEXT("Cannot reset as there is no server running!"));
			return;
		}		
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unhandled connectionType!"));
		return;
	}
	_FLAG_RESET = true;
}

bool ATCPSocketActor::SendData(FString input, int32 clientIndex)
{
	FSocket* socketPointer = nullptr; //Setting socketPointer to be the point of entry
	FScopeLock lock(&_criticalSectionFSocket);	//FScopeLock checks and locks safely in a block scope

	switch (_connectionType) {
	case SocketConnectionType::Client:
		socketPointer = _mySocket.Get();
		break;
	case SocketConnectionType::Server:
		if (clientIndex >= _outboundSockets.Num()) {
			UE_LOG(LogTemp, Warning, TEXT("SendData::Out of bounds index!"));
			return false;
		}
		socketPointer = _outboundSockets[clientIndex]; //If there is no connection yet to be made, _outboundSocket will be nulltpr TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO 
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unhandled connectionType!"));
		return false;
	}

	if (!IsRunning()) {
		UE_LOG(LogTemp, Warning, TEXT("Cannot send data as socket is not running!"));
		return false;
	}

	if (socketPointer != nullptr) {

		FString outputChar = TCHAR_TO_ANSI(*input); //Has some inconsistent allocation persistence when using const char* array in android devices.
		auto outputLength = input.Len() * sizeof(char);
		const int headerOpenSize = sizeof(uint8);
		const int headerCloseSize = sizeof(uint8);
		const int messageCloseSize = sizeof(uint8);
		auto expectedBytesStr = FString::FromInt(input.Len() * sizeof(char));
		FString expectedBytesChar = TCHAR_TO_ANSI(*expectedBytesStr);
		auto expectedBytesCharLength = expectedBytesStr.Len() * sizeof(char);

		int totalBytesToSend = headerOpenSize + expectedBytesCharLength + headerCloseSize + outputLength + messageCloseSize;
		uint8* bytesToSend = new uint8[totalBytesToSend]();

		int dataPointer = 0;
		bytesToSend[dataPointer] = START_MSG_HEADER;
		++dataPointer;

		for (int i = 0; i < expectedBytesCharLength; ++i, ++dataPointer) {
			bytesToSend[dataPointer] = (uint8)expectedBytesChar[i];
		}

		bytesToSend[dataPointer] = END_MSG_HEADER;
		++dataPointer;

		for (int i = 0; i < outputLength; ++i, ++dataPointer) {
			//UE_LOG(LogTemp, Warning, TEXT("LOOPCHAR %d: \"%c\""), i,outputChar[i]);
			bytesToSend[dataPointer] = (uint8)outputChar[i];
		}

		//Use null as ender
		bytesToSend[dataPointer] = MSG_FOOTER;

		//SEND HERE
		UE_LOG(LogTemp, Warning, TEXT("Attempt to send data \"%s\" (%d bytes)."), UTF8_TO_TCHAR(bytesToSend), totalBytesToSend);

		//Data
		int pointerDistance = 0;
		int bytesSent = 0;
		bool returnVal = true;
		while (pointerDistance < totalBytesToSend) {
			if (socketPointer->Send(bytesToSend + pointerDistance, totalBytesToSend - pointerDistance, bytesSent)) {
				//If success move pointer distance
				pointerDistance += bytesSent;
				UE_LOG(LogTemp, Warning, TEXT("%d bytes sent."), bytesSent);
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("Failed to call Send, possible there is no connection or poor connection."));
				returnVal = false;
				break;
			}
		}

		delete[] bytesToSend;
		return returnVal;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("There is no connection available to send data!"));
		return false;
	}
}

int32 ATCPSocketActor::SendDataToAllClients(FString input)
{

	if (_connectionType == SocketConnectionType::Client) {
		UE_LOG(LogTemp, Warning, TEXT("Cannot call SendDataToAllClients as you are a client!"));
		return 0;
	}

	if (!IsRunning()) {
		UE_LOG(LogTemp, Warning, TEXT("Cannot send data as socket is not running!"));
		return 0;
	}
	FScopeLock lock(&_criticalSectionFSocket);	//FScopeLock checks and locks safely in a block scope

	int numSent = 0;
	for (int j = 0; j < _outboundSockets.Num(); ++j) {
		FSocket* socketPointer = _outboundSockets[j];
		if (socketPointer != nullptr) {

			FString outputChar = TCHAR_TO_ANSI(*input); //Has some inconsistent allocation persistence when using const char* array in android devices.
			auto outputLength = input.Len() * sizeof(char);
			const int headerOpenSize = sizeof(uint8);
			const int headerCloseSize = sizeof(uint8);
			const int messageCloseSize = sizeof(uint8);
			auto expectedBytesStr = FString::FromInt(input.Len() * sizeof(char));
			FString expectedBytesChar = TCHAR_TO_ANSI(*expectedBytesStr);
			auto expectedBytesCharLength = expectedBytesStr.Len() * sizeof(char);

			int totalBytesToSend = headerOpenSize + expectedBytesCharLength + headerCloseSize + outputLength + messageCloseSize;
			uint8* bytesToSend = new uint8[totalBytesToSend]();

			int dataPointer = 0;
			bytesToSend[dataPointer] = START_MSG_HEADER;
			++dataPointer;

			for (int i = 0; i < expectedBytesCharLength; ++i, ++dataPointer) {
				bytesToSend[dataPointer] = (uint8)expectedBytesChar[i];
			}

			bytesToSend[dataPointer] = END_MSG_HEADER;
			++dataPointer;

			for (int i = 0; i < outputLength; ++i, ++dataPointer) {
				//UE_LOG(LogTemp, Warning, TEXT("LOOPCHAR %d: \"%c\""), i,outputChar[i]);
				bytesToSend[dataPointer] = (uint8)outputChar[i];
			}

			//Use null as ender
			bytesToSend[dataPointer] = MSG_FOOTER;

			//SEND HERE
			UE_LOG(LogTemp, Warning, TEXT("Attempt to send data \"%s\" (%d bytes)."), UTF8_TO_TCHAR(bytesToSend), totalBytesToSend);

			//Data
			int pointerDistance = 0;
			int bytesSent = 0;
			//bool returnVal = true;
			while (pointerDistance < totalBytesToSend) {
				if (socketPointer->Send(bytesToSend + pointerDistance, totalBytesToSend - pointerDistance, bytesSent)) {
					//If success move pointer distance
					pointerDistance += bytesSent;
					UE_LOG(LogTemp, Warning, TEXT("%d bytes sent."), bytesSent);
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("Failed to call Send, possible there is no connection or poor connection."));
					//returnVal = false;
					break;
				}
			}

			delete[] bytesToSend;
			++numSent;
		}
	}
	return numSent;

}

FipAddress ATCPSocketActor::GetLocalIPAddress()
{
	bool canBind;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	FString ipString;
	auto rawIP = localIp->GetRawIp();
	//for (auto i : rawIP) {
	//	ipString.AppendInt(i);
	//	ipString.AppendChar('.');
	//}
	//UE_LOG(LogTemp, Warning, TEXT("GET RAW IP: %s"), *ipString);
	FipAddress returnAddress;
	returnAddress.A = rawIP[0];
	returnAddress.B = rawIP[1];
	returnAddress.C = rawIP[2];
	returnAddress.D = rawIP[3];
	return returnAddress;
}

SocketState ATCPSocketActor::GetState() {
	return _currentSocketState;
}

int ATCPSocketActor::GetNumberOfClientsConnected() {
	return _outboundSockets.Num();
}

bool ATCPSocketActor::IsRunning()
{
	return _isRunning;
}

bool ATCPSocketActor::IsConnected()
{
	switch (_connectionType) {
	case SocketConnectionType::Client:
		return _isClientConnected;
	case SocketConnectionType::Server:
		return _outboundSockets.Num() > 0;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unhandled connectionType!"));
		return false;
	}
}

SocketConnectionType ATCPSocketActor::GetConnectionType()
{
	return _connectionType;
}

bool ATCPSocketActor::BindStringToDelegate(const FString& stringToBind, FTCPMSGCALLBACK functionToBind)
{
	if (_bindedFunctions.Contains(stringToBind)) {
		UE_LOG(LogTemp, Warning, TEXT("_bindedFunctions already bound string \"%s\"."), *stringToBind);

		return false;
	}
	else {
		_bindedFunctions.Add(stringToBind, functionToBind);
		return true;
	}
}

bool ATCPSocketActor::DoesContainStringToDelegate(const FString& ref)
{
	return _bindedFunctions.Contains(ref);
}

bool ATCPSocketActor::UnbindStringToDelegate(const FString& stringToUnbind)
{
	if (_bindedFunctions.Contains(stringToUnbind)) {
		_bindedFunctions.Remove(stringToUnbind);
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("_bindedFunctions found no bound string \"%s\"."), *stringToUnbind);

		return false;
	}
}

int ATCPSocketActor::UnbindAllStringToDelegate()
{
	TArray<FString> output;
	int count = 0;
	count = _bindedFunctions.GetKeys(output);
	if (count) {
		_bindedFunctions.Reset();
		UE_LOG(LogTemp, Warning, TEXT("%d binded functions removed."), count);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No binded functions in map."), count);
	}
	return count;
}

void ATCPSocketActor::ParseCollectedMessage(const FString& input)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, input);

	if (OnMessageReceived.IsBound()) {
		UE_LOG(LogTemp, Warning, TEXT("ATCPSocketActor::ParseCollectedMessage:  OnMessageReceived is bound."));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("ATCPSocketActor::ParseCollectedMessage:  OnMessageReceived is not bound."));
	}

	_mainThreadFunctionQueue.Enqueue(input);
	//Shift messages back
	for (int i = lastParsedMessages.Num() -1 -1; i >= 0; --i) {
		lastParsedMessages[i + 1] = lastParsedMessages[i];
	}
	lastParsedMessages[0] = input;
}

void ATCPSocketActor::ParseStream()
{
	//This block of for loop code parses the stream of data from RECV
	for (int i = 0; i < bytesRead; i += sizeof(char)) {
		UE_LOG(LogTemp, Warning, TEXT("Letter: %c"), buffer[i]);

		switch (captureMode) {
		case CaptureMode::startCaptureMode:
			//UE_LOG(LogTemp, Warning, TEXT("Capture Char MODE!"));

			if (buffer[i] == START_MSG_HEADER) {
				captureMode = CaptureMode::expectedCaptureMode;
				foutput.Reset(); //Reinit
				//UE_LOG(LogTemp, Warning, TEXT("Capture Char found!"));
			}
			break;
		case CaptureMode::expectedCaptureMode:
			//UE_LOG(LogTemp, Warning, TEXT("Expected Capture MODE!"));

			switch (buffer[i]) {
				//----INCORRECT STATES---

			case START_MSG_HEADER:
				UE_LOG(LogTemp, Warning, TEXT("Expected END_MSG_HEADER or normal char. Found START_MSG_HEADER instead. Reinit to expectedCaptureMode."));
				foutput.Reset(); //Reinit
				captureMode = CaptureMode::expectedCaptureMode;
				break;
			case MSG_FOOTER:
				UE_LOG(LogTemp, Warning, TEXT("Expected END_MSG_HEADER or normal char. Found MSG_FOOTER instead. Reinit to startCaptureMode."));
				foutput.Reset(); //Reinit
				captureMode = CaptureMode::startCaptureMode;
				break;
				//----CORRECT STATES---
			case END_MSG_HEADER:
				//UE_LOG(LogTemp, Warning, TEXT("End of Capture Char found!"));
				expectedBytes = FCString::Atoi(*foutput);
				UE_LOG(LogTemp, Warning, TEXT("Expected message length is: %d"), expectedBytes);
				foutput.Reset(); //Reinit for readMode
				captureMode = CaptureMode::readMode;
				break;

			default: //Collect
				foutput.AppendChar((char)buffer[i]);
				//UE_LOG(LogTemp, Warning, TEXT("ATOI CHECK\"%s\""), *foutput);
				if (foutput.Len() > MAX_LENGTHDIGIT) {
					UE_LOG(LogTemp, Warning, TEXT("Expected message is more than 5 digits, cancelling!"));
					captureMode = CaptureMode::startCaptureMode;
				}
				break;

			}

			break;
		case CaptureMode::readMode:
			if (buffer[i] == MSG_FOOTER) { //Parse message
				//UE_LOG(LogTemp, Warning, TEXT("End of Message Char found!"));
				if (foutput.Len() != expectedBytes) {
					UE_LOG(LogTemp, Warning, TEXT("Message length does not match! Dumping."));
				}
				else {
					//DO SOMETHING HERE WITH THE MESSAGE
					ParseCollectedMessage(foutput);
				}
				UE_LOG(LogTemp, Warning, TEXT("Message: \"%s\""), *foutput);
				UE_LOG(LogTemp, Warning, TEXT("Switching back to capture mode"));
				captureMode = CaptureMode::startCaptureMode;
			}
			else { //Keep reading or cancel
				foutput.AppendChar((char)buffer[i]);
				if (foutput.Len() > expectedBytes) {
					UE_LOG(LogTemp, Warning, TEXT("Message length does not match: Too much data than expected! Dumping..."));
					captureMode = CaptureMode::startCaptureMode;
				}
			}
			break;
		}

	}
}

void ATCPSocketActor::ResetStreamReader()
{
	captureMode = CaptureMode::startCaptureMode;
	foutput.Reset();
	bytesRead = 0;
	expectedBytes = 0;
}

bool ATCPSocketActor::CreateServerListenSocket()
{
	if (_mySocket.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("Server is still valid while creating a new one. The old one will be closed."));
		CloseMySocket();
	}

	UE_LOG(LogTemp, Warning, TEXT("Creating new Server Socket."));
	_mySocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateUniqueSocket(NAME_Stream, TEXT("default"), false);
	if (!_mySocket.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("Socket creating failed."));
		return false;
	}

	FIPv4Address ip(ipAddress.A, ipAddress.B, ipAddress.C, ipAddress.D);
	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetPort(port);
	addr->SetIp(ip.Value);
	UE_LOG(LogTemp, Warning, TEXT("Socket binding to IP %d:%d:%d:%d | PORT %d..."), ip.A, ip.B, ip.C, ip.D, port);
	bool retVal = _mySocket->Bind(addr.Get());
	if (retVal)
	{
		UE_LOG(LogTemp, Warning, TEXT("Socket Bind Success."));
		UE_LOG(LogTemp, Warning, TEXT("Setting Socket to listen for incoming connections."));
		TSharedRef<FInternetAddr> addrOut = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		int32 portOut;
		(*addrOut).GetPort(portOut);
		_mySocket->GetAddress(*addrOut);
		UE_LOG(LogTemp, Warning, TEXT("Socket Final Address:IP %d:%d:%d:%d | PORT %d"), (*addrOut).GetRawIp()[0], (*addrOut).GetRawIp()[1], (*addrOut).GetRawIp()[2], (*addrOut).GetRawIp()[3], portOut);

		retVal = _mySocket->Listen(0);
		if (retVal) {
			UE_LOG(LogTemp, Warning, TEXT("Socket Listen Success."));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Socket Listen Failed."));
			CloseMySocket();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Socket Bind Failed."));
		CloseMySocket();
	}

	return retVal;
}

bool ATCPSocketActor::CreateClientSocket()
{
	UE_LOG(LogTemp, Warning, TEXT("Creating local TCPSocket as client."));
	_mySocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateUniqueSocket(NAME_Stream, TEXT("default"), false);
	bool retVal = _mySocket.IsValid();
	if (retVal) {
		UE_LOG(LogTemp, Warning, TEXT("Socket created."));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Socket creation failed!"));
	}
	return retVal;
}

void ATCPSocketActor::CloseMySocket()
{
	if (!_mySocket.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("_mySocket is already null."));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Closing _mySocket."));
	bool isShutdownSuccessful = _mySocket->Shutdown(ESocketShutdownMode::ReadWrite);
	if (isShutdownSuccessful) {
		UE_LOG(LogTemp, Warning, TEXT("_mySocket Shutdown Success."));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("_mySocket Shutdown Failed."));
	}


	bool isSocketClosed = _mySocket->Close();
	if (isSocketClosed) {
		UE_LOG(LogTemp, Warning, TEXT("_mySocket Closed Success."));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("_mySocket Closed Failed."));
	}
	UE_LOG(LogTemp, Warning, TEXT("Nulling _mySocket."));
	_mySocket = nullptr; //Gets autodeleted by UniquePtr
}

bool ATCPSocketActor::CloseOutboundSocket(int index)
{
	bool retVal = false;
	UE_LOG(LogTemp, Warning, TEXT("Closing _outboundSocket."));
	FScopeLock lock(&_criticalSectionFSocket);	//FScopeLock checks and locks safely in a block scope

	if (index >= _outboundSockets.Num()) {
		UE_LOG(LogTemp, Warning, TEXT("CloseOutboundSocket() error. Out of bounds value. INDEX[%d], SIZE[%d]"),index, _outboundSockets.Num());

	}
	else {
		if (_outboundSockets[index] != nullptr) {

			retVal = _outboundSockets[index]->Shutdown(ESocketShutdownMode::ReadWrite) && _outboundSockets[index]->Close();
			if (retVal) {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket Shutdown Success."));
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket Shutdown Failed."));
			}
			delete _outboundSockets[index];

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("_outboundSocket is already closed. INDEX[%d]"), index);
		}
		UE_LOG(LogTemp, Warning, TEXT("Removing _outboundSocket. INDEX[%d]"), index);
		_outboundSockets.RemoveAt(index);
	}
	return retVal;
}

bool ATCPSocketActor::CloseAllOutboundSockets()
{
	UE_LOG(LogTemp, Warning, TEXT("Closing all _outboundSockets."));
	FScopeLock lock(&_criticalSectionFSocket);	//FScopeLock checks and locks safely in a block scope


	for (int index = 0; index < _outboundSockets.Num(); ++index) {
		if (_outboundSockets[index] != nullptr) {
			bool retVal = false;
			bool retVal2 = false;
			retVal = _outboundSockets[index]->Shutdown(ESocketShutdownMode::ReadWrite) && _outboundSockets[index]->Close();
			retVal2 = _outboundSockets[index]->Close();
			if (retVal) {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket Shutdown Success."));
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket Shutdown Failed."));
			}
			if (retVal2) {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket Close Success."));
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket Close Failed."));
			}

			delete _outboundSockets[index];

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("_outboundSocket is already closed. INDEX[%d]"), index);
		}
		UE_LOG(LogTemp, Warning, TEXT("Removing _outboundSocket. INDEX[%d]"), index);
		
	}
	_outboundSockets.Empty();
	return true;
}

bool ATCPSocketActor::RunClient()
{
	if (_FLAG_STOP) {
		_currentSocketState = SocketState::ClosingState;
		_FLAG_STOP = false;
		_FLAG_RESET = false;
		if (IsConnected()) {
			_FLAG_ONDISCONNECT = true; //If client self disconnects, this is called
		}
		UE_LOG(LogTemp, Warning, TEXT("_FLAG_STOP called."));

	}
	else if (_FLAG_RESET) {
		_currentSocketState = SocketState::ConnectingState;
		_FLAG_RESET = false;
		UE_LOG(LogTemp, Warning, TEXT("_FLAG_RESETCLIENT called."));
	}

	switch (_currentSocketState) {
	case SocketState::SettingSocket: {

		if (CreateClientSocket()) {
			_currentSocketState = SocketState::ConnectingState;
			UE_LOG(LogTemp, Warning, TEXT("Now looking for server..."));

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Failed to create socket...Reattempting in %f seconds."), waitDuration);
			FPlatformProcess::Sleep(waitDuration);
		}

		return true;
	}
	case SocketState::ConnectingState: {
		_isClientConnected = false;
		//UE_LOG(LogTemp, Warning, TEXT("Setting up address to connect..."));
		FIPv4Address ip(ipAddress.A, ipAddress.B, ipAddress.C, ipAddress.D);
		TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		addr->SetPort(port);
		addr->SetIp(ip.Value);
		UE_LOG(LogTemp, Warning, TEXT("Connecting to Address %d:%d:%d:%d on port %d..."),
			ipAddress.A, ipAddress.B, ipAddress.C, ipAddress.D, port);

		_isClientConnected = _mySocket->Connect(*addr);
		if (_isClientConnected)
		{
			_FLAG_ONCONNECT = true;
			UE_LOG(LogTemp, Warning, TEXT("Connection successful. Going to receive mode."));
			_currentSocketState = SocketState::ReceivingState;

		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Waiting for connection...Sleep[%f]."), waitDuration);
			FPlatformProcess::Sleep(waitDuration);
		}

		return true;
	}
	case SocketState::ReceivingState: { //For client side, when receiveing, the HasPendingConnection will ping first, followed by HasPendingData. If HasPendingConnection returns true but there is no data, it is a possible disconnection.
		uint32 pendingDataSize = 0;
		bool isPendingConnection = false;
		if (_mySocket->HasPendingConnection(isPendingConnection)) {	//Poll for connection. Returns TRUE if it is pending/ ie client is disconnected
			if (isPendingConnection) {
				if (_mySocket->HasPendingData(pendingDataSize)) {
					//DO DATA RECEIVE AND PARSE HERE
					bool retVal;
					UE_LOG(LogTemp, Warning, TEXT("Receiving Data..."));
					retVal = _mySocket->Recv(buffer, 1024, bytesRead, ESocketReceiveFlags::None); //Will detect when server is closed
					if (retVal) {
						UE_LOG(LogTemp, Warning, TEXT("Message received. Bytes read: %d"), bytesRead);
						ParseStream();


					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("RECV: Socket has closed/Unrecoverable error."));
						UE_LOG(LogTemp, Warning, TEXT("Restarting connection."));
						_FLAG_ONDISCONNECT = true;
						CloseMySocket();
						_currentSocketState = SocketState::SettingSocket;
					}

				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("No pending data while HasPendingConnection. Possible disconnection. Restarting."));
					UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));
					_FLAG_ONDISCONNECT = true;
					CloseMySocket();
					_currentSocketState = SocketState::SettingSocket; //Go back to step
				}
			}
			else {
				//UE_LOG(LogTemp, Warning, TEXT("_outboundSocket->HasPendingConnection returned FALSE. Sleeping 2 seconds."));
				UE_LOG(LogTemp, Warning, TEXT("Waiting for messages...Sleep[%f]."), waitDuration);
				FPlatformProcess::Sleep(waitDuration);
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("_outboundSocket->HasPendingConnection failed."));
			UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));
			_FLAG_ONDISCONNECT = true;
			CloseMySocket();
			_currentSocketState = SocketState::SettingSocket; //Go back to step 1
		}
		return true;
	}
	case SocketState::ClosingState: {


		return false;
	}

	}

	UE_LOG(LogTemp, Warning, TEXT("State reached undefined enum. Exiting..."));
	return false; //catch
}

bool ATCPSocketActor::RunServer()
{
	
	if (_FLAG_STOP) {
		_currentSocketState = SocketState::ClosingState;
		_FLAG_STOP = false;
		_FLAG_RESET = false;
		if (IsConnected()) {
			_FLAG_ONDISCONNECT = true; //If client self disconnects, this is called
		}
		UE_LOG(LogTemp, Warning, TEXT("_FLAG_STOPSERVER called."));

	}
	else if (_FLAG_RESET) {
		_currentSocketState = SocketState::SettingSocket;
		_FLAG_RESET = false;
		UE_LOG(LogTemp, Warning, TEXT("_FLAG_RESETSERVER called."));
	}

	switch (_currentSocketState) {

	case SocketState::SettingSocket: {
		//CloseAllOutboundSockets();
		bool isSuccess = CreateServerListenSocket(); //Will replace old _mySocket if there is one in place.
		if (isSuccess) {
			UE_LOG(LogTemp, Warning, TEXT("Server socket is created."));
			_currentSocketState = SocketState::AcceptAndReceiveState;
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Server socket failed to create. Reattempting in %f second."), waitDuration);
			FPlatformProcess::Sleep(waitDuration);
		}


		return true;
	}
	case SocketState::AcceptAndReceiveState: {

		//------------ACCEPTING CONNECTIONS------------

		//UE_LOG(LogTemp, Warning, TEXT("No outboundSocket set. Now accepting connections..."));
		//UE_LOG(LogTemp, Warning, TEXT("Polling AcceptAndReceiveState..."));
		if (maximumNumberOfClients == 0 || _outboundSockets.Num() < maximumNumberOfClients) {
			bool containsServerSocket = _mySocket.IsValid();

			if (!containsServerSocket) {
				containsServerSocket = CreateServerListenSocket(); //Will replace old _mySocket if there is one in place.
			}
			else {
				bool doesServerHasPendingConnection = false;
				if (_mySocket->HasPendingConnection(doesServerHasPendingConnection)) {
					if (doesServerHasPendingConnection) {
						//Call accept here
						FString outDesc;
						FSocket* newOutboundSocketPtr;
						newOutboundSocketPtr = _mySocket->Accept(outDesc); //This blocks, but can be checked by polling HasPendingConnection to prevent blocking
						if (newOutboundSocketPtr) {
							UE_LOG(LogTemp, Warning, TEXT("_outboundSocket is found and set."));
							//TSharedRef<FInternetAddr> outBoundAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
							//_mySocket->GetAddress(*outBoundAddr);
							//auto peerIP = outBoundAddr->GetRawIp();
							//int peerPort;
							//outBoundAddr->GetPort(peerPort);
							//UE_LOG(LogTemp, Warning, TEXT("PEER: IP %d:%d:%d:%d | PORT: %d"), peerIP[0], peerIP[1], peerIP[2], peerIP[3],peerPort);
							_FLAG_ONCONNECT = true;
							{
								FScopeLock lock(&_criticalSectionFSocket);	//FScopeLock checks and locks safely in a block scope
								_outboundSockets.Add(newOutboundSocketPtr);
							}
							

							UE_LOG(LogTemp, Warning, TEXT("Closing socket in tandem to the client."));

							//_outboundSocket->SetNonBlocking(true);

						}
						else {
							UE_LOG(LogTemp, Warning, TEXT("newOutboundSocketPtr could not Accept incoming connection."));
							//UE_LOG(LogTemp, Warning, TEXT("Reattempting in %f seconds."), connectionWaitDuration);
							//FPlatformProcess::Sleep(connectionWaitDuration);
						}
					}
					else {
						//UE_LOG(LogTemp, Warning, TEXT("No pending connection from client. Waiting...%f seconds."), connectionWaitDuration);
						//FPlatformProcess::Sleep(connectionWaitDuration);
					}
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("Function fail: _mySocket->HasPendingConnection(). Possible that _mySocket is disconnected."));
					UE_LOG(LogTemp, Warning, TEXT("Restarting connection."));
					CloseMySocket();
				}
			}
		}
		else {
			//Max clients reached
			if (_mySocket.IsValid()) {
				UE_LOG(LogTemp, Warning, TEXT("Maximum number of clients connected reached. Closing ServerSocket"));
				CloseMySocket();
			}
		}

		//------------RECEIVING MESSAGES/ DISCONNECTION------------
		int socketIndex = 0;
		while (socketIndex < _outboundSockets.Num()) {




			//UE_LOG(LogTemp, Warning, TEXT("Running RecievingMode..."));
			if (_outboundSockets[socketIndex] == nullptr) {
				UE_LOG(LogTemp, Warning, TEXT("outboundSocket is null... Possible that cliect has disconnected or closed incorrectly."));
				UE_LOG(LogTemp, Warning, TEXT("Removing Client."));
				{
					FScopeLock lock(&_criticalSectionFSocket);	//FScopeLock checks and locks safely in a block scope
					_outboundSockets.RemoveAt(socketIndex); //Remove and redo loop.

				}
				continue;	//Once index has been removed, continue to the next element (Which now has the same index number).
			}

			/*
			auto conState = _outboundSocket->GetConnectionState();
			switch (conState) {
			case ESocketConnectionState::SCS_Connected:
				UE_LOG(LogTemp, Warning, TEXT("outboundSocket is connected..."));
				break;
			case ESocketConnectionState::SCS_ConnectionError:
			case ESocketConnectionState::SCS_NotConnected:
				UE_LOG(LogTemp, Warning, TEXT("outboundSocket is not connected/Has error!"));
				UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));

				CloseOutboundSocket();
				_currentSocketState = SocketState::SettingSocket; //Go back to step 1
				UE_LOG(LogTemp, Warning, TEXT("Restarting connection."));
				return true;
			}
			*/


			uint32 pendingDataSize = 0;
			bool isPendingConnection = false;
			if (_outboundSockets[socketIndex]->HasPendingConnection(isPendingConnection)) {	//Poll for connection. Socket may be disconnected if this returns false.
				if (isPendingConnection) {
					if (_outboundSockets[socketIndex]->HasPendingData(pendingDataSize)) { //Poll for data. Returns TRUE if it is pending a recv

						bool retVal = false;
						retVal = _outboundSockets[socketIndex]->Recv(buffer, 1024, bytesRead, ESocketReceiveFlags::None); //Will detect when client is closed
						if (retVal) {
							UE_LOG(LogTemp, Warning, TEXT("Message received. Bytes read: %d"), bytesRead);

							ParseStream();

						}
						else {
							UE_LOG(LogTemp, Warning, TEXT("RECV: Socket has closed/Unrecoverable error. Restarting."));
							UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));
							_FLAG_ONDISCONNECT = true;
							CloseOutboundSocket(socketIndex);
							continue;
						}
					}
					else {

						//uint8 tempBuffer;
						//bool isStillConnected = false;
						//int tempBytesRead = 0;
						//UE_LOG(LogTemp, Warning, TEXT("Peeking..."));
						//isStillConnected =  _outboundSocket->Recv(&tempBuffer, 1, tempBytesRead, ESocketReceiveFlags::Peek); //Will detect when client is closed
						//if (!isStillConnected) {
						//	UE_LOG(LogTemp, Warning, TEXT("RECV: Socket has closed/Unrecoverable error."));
						//	UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));
						//	CloseOutboundSocket();
						//	_currentSocketState = SocketState::SettingSocket; //Go back to step 1
						//	UE_LOG(LogTemp, Warning, TEXT("Restarting connection."));
						//}


						UE_LOG(LogTemp, Warning, TEXT("No pending data while HasPendingConnection. Possible disconnection."));
						UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));
						_FLAG_ONDISCONNECT = true;
						CloseOutboundSocket(socketIndex);
						continue;
					}
				}
				else {
					//UE_LOG(LogTemp, Warning, TEXT("_outboundSocket->HasPendingConnection returned FALSE. Sleeping 2 seconds."));
					//UE_LOG(LogTemp, Warning, TEXT("Waiting for messages...Sleep[%f]."), messageWaitDuration);
					//FPlatformProcess::Sleep(messageWaitDuration);

				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("_outboundSocket->HasPendingConnection failed. Possible _outboundSocket has failed."));
				UE_LOG(LogTemp, Warning, TEXT("Closing outboundSocket."));
				_FLAG_ONDISCONNECT = true;
				CloseOutboundSocket(socketIndex);
				continue;
			}


			++socketIndex; //Go to next index

		}
		UE_LOG(LogTemp, Warning, TEXT("Sleeping 1 second."));
		FPlatformProcess::Sleep(1);


		return true;
	}
	case SocketState::ClosingState: {
		//This closing statement is called in the threads Stop()
		return false;
	}

	}

	UE_LOG(LogTemp, Warning, TEXT("State reached undefined enum. Exiting..."));
	return false; //Catch
}

bool ATCPSocketActor::Run()
{
	switch (_connectionType) {
	case SocketConnectionType::Client:
		return RunClient();
	case SocketConnectionType::Server:
		return RunServer();
	default:
		//UE_LOG(LogTemp, Warning, TEXT("Unhandled connectionType!"));
		return false;
	}
}

void ATCPSocketActor::Stop()
{
	CloseMySocket();
	CloseAllOutboundSockets();
	OnCloseComplete();
}

void ATCPSocketActor::OnInitComplete()
{
	ResetStreamReader();
	_currentSocketState = SocketState::SettingSocket;
	_FLAG_RESET = false;
	_FLAG_STOP = false;
	_isRunning = true;
}

void ATCPSocketActor::OnCloseComplete()
{
	_currentSocketState = SocketState::SettingSocket;

	_FLAG_RESET = false;
	_FLAG_STOP = false;
	_isClientConnected = false;
	_isRunning = false;
}


FThreadRunner::FThreadRunner(ATCPSocketActor* tcpSocketActor) : _tcpSocketActor(tcpSocketActor)
{
}

bool FThreadRunner::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("FThreadAcceptConnection::Init()"));
	_tcpSocketActor->OnInitComplete();
	return true;
}

uint32 FThreadRunner::Run()
{
	while (_tcpSocketActor->Run());
	return 0;
}

void FThreadRunner::Exit()
{
	UE_LOG(LogTemp, Warning, TEXT("FThreadAcceptConnection::Exit()"));
	_tcpSocketActor->Stop();
}

void FThreadRunner::Stop()
{
	UE_LOG(LogTemp, Warning, TEXT("FThreadAcceptConnection::Stop()"));
	_tcpSocketActor->Stop();
}