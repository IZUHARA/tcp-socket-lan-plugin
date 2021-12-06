/*

Name:	Muhammad Izha Bin Rahim

Brief:	A server-to-clients LAN connection using TCP. This is the Version 2, where both client and server are combined into one file instead of being separate.

Setup: 	1) Ensure that the [PROJNAME].Build.cs contains "Sockets" and "Networking"
		EG: PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" ,"Sockets", "Networking"});
		2) Rename this class API to your project name equivalent, if this is copied from another project.
		EG: class [PROJECTNAME]_API ATCPSocketActor : public AActor {...}


Usage:	====Connecting====
		Set if you want it to be a Server or a Client using the isServerMode boolean.
		To use TCPSocketActor, place this actor in a scene, and Call the StartConnection() function from the actor.
		When StartConnection() is called, it will use the IPAddress and port number given to ping to the appropriate partner.

		====Sending and Receiving Messages====
		There are two ways to receive a message.
		1) Through the OnMessageReceived() callback. This function is called whenever a message is received. It contains the FString of the message.
		2) Through BindStringToDelegate(). This binds a string to your own function. Whenever a message received matches this string, the function is called.

		There is one way to send a message.
		1) Through SendData().

		There should only be one instance of this actor in the game, so consider placing this actor in a separate level.

Notes:	====About FRunnableThread in Unreal====
		ThreadFn->Kill(false); //This invalidates the thread. Will crash if called twice. Will call Stop() instead of Exit() regardless the thread has finished or not.
		ThreadFn->Kill(true); //This blocks the caller! This invalidates the thread. Will crash if called twice. Will call Exit() when has the Run() has finished.
		Killing a thread is also the same is delete Thread! It will call Stop()
		Threads that have been Exit() can be replaced and do not need to be killed.
		When holding a gameobject pointer in a thread, ENSURE that the thread stops first before the gameobject is destroyed!

		====About FRunnable class in Unreal====
		These act as class wrappers to be able to run in threads. Whenever a FRunnableThread::Create() is called using the same member... (EG calling create three times on the same class):

			_threadConnection = TUniquePtr<FThreadConnection>(new FThreadConnection(this));  <----------------------CTOR is called here
			_currentRunningThread = FRunnableThread::Create(_threadConnection.Get(), TEXT("ThreadConnection"));		<-----Init is called here
			_currentRunningThread = FRunnableThread::Create(_threadConnection.Get(), TEXT("ThreadConnection"));		<-----Init is called here
			_currentRunningThread = FRunnableThread::Create(_threadConnection.Get(), TEXT("ThreadConnection"));		<-----Init is called here

			All three threads will use the same class as reference. This includes their variables.
			A good solution is to keep place variables away from the FRunnable class. (Let the FRunnable class call functions from another class)

		Be warned if they are not exited properly, they can have unforseen consequences. Therefore it is good practice to Stop them by the class that created them.

CHANGELOG:
		2021 11 09
		Server can now have multiple clients.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Sockets.h" 
#include "SocketSubsystem.h" 
#include "Runtime/Networking/Public/Interfaces/IPv4/IPv4Address.h"
//#include "Core/Public/HAL/Runnable.h" //FRunnable
#include "HAL/Runnable.h"
#include "GenericPlatform/GenericPlatformMisc.h" //TFunction
#include "Delegates/Delegate.h"
#include "Containers/Queue.h"
#include "TCPSocketActor.generated.h"		//Must be at the bottom of all the #includes



//DELEGATES
//--------------------------------------------------------
DECLARE_DYNAMIC_DELEGATE(FTCPMSGCALLBACK);					//Message callbacks. This follows a 1 to 1 bind function.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTCPMSGRECEIVED, FString, output);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTCPDelegate); //TCPSocketActorDelegates. 

//ENUM
//--------------------------------------------------------
UENUM(BlueprintType)
enum class SocketState : uint8 {
	NOSTATE					UMETA(DisplayName = "NOSTATE"),	
	SettingSocket			UMETA(DisplayName = "SettingSocket"),			//Sets the _mySocket
	AcceptAndReceiveState   UMETA(DisplayName = "AcceptAndReceivingState"),	//SERVER ONLY, This functions as a connector and receiver.
	ConnectingState			UMETA(DisplayName = "ConnectingState"),			//CLIENT ONLY
	ReceivingState			UMETA(DisplayName = "ReceivingState"),			//CLIENT ONLY
	ClosingState			UMETA(DisplayName = "ClosingState")				//Switch to this to close the server.
};

UENUM(BlueprintType)
enum class SocketConnectionType : uint8 {
	Null					UMETA(DisplayName = "Null"),
	Client					UMETA(DisplayName = "Client"),
	Server					UMETA(DisplayName = "Server")
};

//STRUCTS
//--------------------------------------------------------
USTRUCT(BlueprintType, Blueprintable)
struct FipAddress
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 A = 127;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 B = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 C = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 D = 1;
};

class FRunnableThread;
//This allows TCPSocketActor to create a thread and run its functions asynchronously.
class FThreadRunner : public FRunnable {
public:

	FThreadRunner(ATCPSocketActor* tcpSocketActor);

	ATCPSocketActor* _tcpSocketActor;

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Exit() override;
	virtual void Stop() override;
};

//CLASSES
//--------------------------------------------------------

//This actor handles the messaging system. Ensure that there is only one and not more at any given time!
UCLASS()
class TCPSOCKETLANPLUGIN_API ATCPSocketActor : public AActor
{
	GENERATED_BODY()
	
public:	
	//--------VARIABLES--------


	UPROPERTY(BlueprintReadWrite, EditAnywhere)		//The IPV4 Address to connect to. As a LAN server, both Client and Server should connect to SERVER's machine LOCAL IP Address!
	FipAddress ipAddress;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)		//The port to connect to. Both Client and Server must have matching port number!
	int port = 80;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)		//SERVER ONLY. This indicates the number of clients the server can accept. If set to 0, it will limitless number of clients as it can (Use at your own risk). If this is changed to a lesser value while there are max clients connected, it will keep the connected clients until they leave.
	int maximumNumberOfClients = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)		//Intervals when polling for messages/ connection.
	float waitDuration = 0.7f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)		//When there are multiple messages coming through, it will flush all in one tick. Else, it will call 1 function per tick.
	bool flushFunctionsQuickly = true;
	//--------END VARIABLES--------

	//--------UNREAL ENGINE OVERRIDES--------
public:
	ATCPSocketActor();	//Constructor

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;	// This controls how received messages are called.
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	//--------END UNREAL ENGINE OVERRIDES--------


	//--------MAIN FUNCTIONS--------

	//This is called if connectOnStart is true. Cannot call when thread is still running. Make sure you call StopConnection/ResetConnection instead.
	//May return false if server is still in shutdown/closing mode.
	UFUNCTION(BlueprintCallable)
	bool StartConnection(bool runAsServer = false);

	//Stops connection. Returns false if this is called while it is not running.
	UFUNCTION(BlueprintCallable)
	bool StopConnection();

	//Resets the connection using the variables in the IPAddress and Port. Does nothing if it is not running.
	UFUNCTION(BlueprintCallable)
	void ResetConnection();

	//Your main message sender. This delivers a string to the client to parse. Returns true upon successfully sending all the data.
	//Note clientIndex is for SERVER ONLY. It is ignored if it is a client.
	UFUNCTION(BlueprintCallable)
	bool SendData(FString input, int32 clientIndex = 0);

	//SERVER ONLY. Your main message sender. This delivers a string to all the clients. Returns true upon successfully sending all the data. Returns false function is called as a Client.
	//Returns the number of clients successfully sent the message to.
	UFUNCTION(BlueprintCallable)
	int32 SendDataToAllClients(FString input);

	//Gets the first local IPAddress in the computer. If the computer has multiple network cards/ VPNs, this may not return the right one.
	UFUNCTION(BlueprintCallable)
	static FipAddress GetLocalIPAddress();

	//Gets internal running state. Useful when server is running. Does not update when it is not running.
	UFUNCTION(BlueprintCallable)
	SocketState GetState();

	//SERVER ONLY. Gets the number of clients connected to the server.
	UFUNCTION(BlueprintCallable)
	int32 GetNumberOfClientsConnected();

	//Is the socket running? (This does not check if the actual server socket is created/is listening.)
	UFUNCTION(BlueprintCallable)
	bool IsRunning();

	//Is the server/client paired?
	UFUNCTION(BlueprintCallable)
	bool IsConnected();

	//Get the type of connection it is running as
	UFUNCTION(BlueprintCallable)
	SocketConnectionType GetConnectionType();

	//BINDINGS

	//Whenever a message is received, TCPSocketActor will search in its dictionary if such string matches. If there is a string that match, it will call that function bound to it.
	//It will call whenever a message is received from the server or client.
	//Returns false if there is an existing delegate bound to such string. Else string is bound and function returns true.
	UFUNCTION(BlueprintCallable)
	bool BindStringToDelegate(const FString& stringToBind, FTCPMSGCALLBACK functionToBind); 

	UFUNCTION(BlueprintCallable)
	bool DoesContainStringToDelegate(const FString& ref); //Returns true if there is an existing delegate bound to such string

	UFUNCTION(BlueprintCallable)
	bool UnbindStringToDelegate(const FString& stringToUnbind); //Returns false if there is no an existing delegate bound to such string

	UFUNCTION(BlueprintCallable)
	int UnbindAllStringToDelegate(); //Returns number of strings unbounded.
	//--------END MAIN FUNCTIONS--------

	//--------DELEGATES. These are called in SERVER THREAD. Not GAME THREAD.--------

	//This is called when any arbitrary message is received from the client. AKA. RECV is called and message is parsed successfully.
	//You can use this to create your custom logic/parser just by OnMessageReceived alone.
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FTCPMSGRECEIVED OnMessageReceived;

	//This is called when a client connects.
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FTCPDelegate OnConnected;
	//This is called a client disconnects.
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FTCPDelegate OnDisconnected;

	//--------END DELEGATES--------

	//--------MISC--------

	////TEMP STORAGE WILL SWITCH TO A VARIABLE CONTAINER. Contains all parsed messages. These are separated with a \n.
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//FString quickieOutput;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> lastParsedMessages; //Constructed in constructor, keeps track up to 32 elements.

	//--------END MISC--------



private:
	bool RunClient();
	bool RunServer();
public:
	//FRUNNABLE THREAD FUNCTIONS
	bool Run();					//This blocks to an extent. Best be run in a thread. Returns true when it requires to run. Returns false if it is closing or ending. This basically recieves data.
	//FRUNNABLE THREAD FUNCTIONS
	void Stop();
	//FRUNNABLE THREAD FUNCTIONS
	void OnInitComplete();
	//FRUNNABLE THREAD FUNCTIONS
	void OnCloseComplete(); //Called by StopServer()


private:
	//START_MSG_HEADER and END_MSG_HEADER acts as a first layer of data security. Between it contains the number of chars the parser should read. 
	//This number is capped by the MAX_LENGTHDIGIT, which is the second layer.
	//The third layer is the MSG_FOOTER, where the number of bytes to read should match when the footer is read.
	//The reason these are in HEX is that for frontend, FStrings and readable Chars should not contain ASCII from 0 to 31, and 127.
	static const uint8	START_MSG_HEADER	= 0x01; 
	static const uint8	END_MSG_HEADER		= 0x02;
	static const uint8	MSG_FOOTER			= 0x03;
	static const int	MAX_LENGTHDIGIT		= 5; //Eg: Maximum number of bytes it can parse is 99999

	bool CreateServerListenSocket();				//SERVER
	bool CreateClientSocket();						//CLIENT
	void CloseMySocket();					
	bool CloseOutboundSocket(int index);			//Shutdown, Closes, Deletes then Nulls.
	bool CloseAllOutboundSockets();
	//If Server, it will create a connection at said IP and Port. _outboundSocket becomes the point to SEND and RECV
	//If Client, it will ping for the IP and Port.				  _mySocket becomes the point to SEND and RECV
	SocketConnectionType _connectionType = SocketConnectionType::Null;	


	FUniqueSocket						_mySocket;					//The one that listens to other connections
	TArray<FSocket*>					_outboundSockets;			//SERVER ONLY. This talks to the client. This is added when a client successfully connects to the server.
	FRunnableThread*					_currentRunningThread;		//Thread runner.
	TUniquePtr<FThreadRunner>			_threadConnection;			//A class wrapper to run this class function in threads

	TMap<FString, FTCPMSGCALLBACK>		_bindedFunctions;			//These are functions binded to strings. These are called by the client.
	TQueue<FString>						_mainThreadFunctionQueue;	//This is popped and called whenever stuff is called in the RECV thread.

	bool _isRunning = false;	//Is the socket logic running
	bool _isClientConnected = false;	//Is the client connected to the server? (CLIENT ONLY)

	SocketState _currentSocketState = SocketState::SettingSocket;

	FCriticalSection _criticalSectionFSocket; //A lock for adding/removing outboundSockets. This is for thread safety. 

	//Flags are used to communicate the main thread with the sub thread with thread safety.
	//
	bool _FLAG_STOP = false;
	bool _FLAG_RESET = false;
	bool _FLAG_ONCONNECT = false;
	bool _FLAG_ONDISCONNECT = false;
	void ParseCollectedMessage(const FString& input); //The stream gets parsed and is stripped of its header and footer, showing only the message. OnMessageReceived is called here
	void ParseStream();		//Collects stream from buffer. Note that when multiple SEND is called, they can be combined together. Thus it is important to create a sort of header to determine start and end of message!
	void ResetStreamReader(); //Basic cleanup. Use when restarting or stopping connection

	enum class CaptureMode { startCaptureMode, expectedCaptureMode, readMode };
	CaptureMode captureMode = CaptureMode::startCaptureMode;
	FString		foutput;		//Stream output
	int			bytesRead = 0;
	int			expectedBytes = 0;
	uint8		buffer[1024]; //Receive buffer. Inside can be anything. These are modified then read when ParseStream() is called.

};


