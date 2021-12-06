// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCPSocketLANPlugin/Public/TCPSocketActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCPSocketActor() {}
// Cross Module References
	TCPSOCKETLANPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TCPSocketLANPlugin();
	TCPSOCKETLANPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature();
	TCPSOCKETLANPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature();
	TCPSOCKETLANPLUGIN_API UEnum* Z_Construct_UEnum_TCPSocketLANPlugin_SocketConnectionType();
	TCPSOCKETLANPLUGIN_API UEnum* Z_Construct_UEnum_TCPSocketLANPlugin_SocketState();
	TCPSOCKETLANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FipAddress();
	TCPSOCKETLANPLUGIN_API UClass* Z_Construct_UClass_ATCPSocketActor_NoRegister();
	TCPSOCKETLANPLUGIN_API UClass* Z_Construct_UClass_ATCPSocketActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin, nullptr, "TCPDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics
	{
		struct _Script_TCPSocketLANPlugin_eventTCPMSGRECEIVED_Parms
		{
			FString output;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TCPSocketLANPlugin_eventTCPMSGRECEIVED_Parms, output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::NewProp_output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Message callbacks. This follows a 1 to 1 bind function.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Message callbacks. This follows a 1 to 1 bind function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin, nullptr, "TCPMSGRECEIVED__DelegateSignature", nullptr, nullptr, sizeof(_Script_TCPSocketLANPlugin_eventTCPMSGRECEIVED_Parms), Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DELEGATES\n//--------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "DELEGATES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin, nullptr, "TCPMSGCALLBACK__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* SocketConnectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCPSocketLANPlugin_SocketConnectionType, Z_Construct_UPackage__Script_TCPSocketLANPlugin(), TEXT("SocketConnectionType"));
		}
		return Singleton;
	}
	template<> TCPSOCKETLANPLUGIN_API UEnum* StaticEnum<SocketConnectionType>()
	{
		return SocketConnectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SocketConnectionType(SocketConnectionType_StaticEnum, TEXT("/Script/TCPSocketLANPlugin"), TEXT("SocketConnectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCPSocketLANPlugin_SocketConnectionType_Hash() { return 341872618U; }
	UEnum* Z_Construct_UEnum_TCPSocketLANPlugin_SocketConnectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCPSocketLANPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SocketConnectionType"), 0, Get_Z_Construct_UEnum_TCPSocketLANPlugin_SocketConnectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SocketConnectionType::Null", (int64)SocketConnectionType::Null },
				{ "SocketConnectionType::Client", (int64)SocketConnectionType::Client },
				{ "SocketConnectionType::Server", (int64)SocketConnectionType::Server },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Client.DisplayName", "Client" },
				{ "Client.Name", "SocketConnectionType::Client" },
				{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
				{ "Null.DisplayName", "Null" },
				{ "Null.Name", "SocketConnectionType::Null" },
				{ "Server.DisplayName", "Server" },
				{ "Server.Name", "SocketConnectionType::Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin,
				nullptr,
				"SocketConnectionType",
				"SocketConnectionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SocketState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCPSocketLANPlugin_SocketState, Z_Construct_UPackage__Script_TCPSocketLANPlugin(), TEXT("SocketState"));
		}
		return Singleton;
	}
	template<> TCPSOCKETLANPLUGIN_API UEnum* StaticEnum<SocketState>()
	{
		return SocketState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SocketState(SocketState_StaticEnum, TEXT("/Script/TCPSocketLANPlugin"), TEXT("SocketState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCPSocketLANPlugin_SocketState_Hash() { return 1463670321U; }
	UEnum* Z_Construct_UEnum_TCPSocketLANPlugin_SocketState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCPSocketLANPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SocketState"), 0, Get_Z_Construct_UEnum_TCPSocketLANPlugin_SocketState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SocketState::NOSTATE", (int64)SocketState::NOSTATE },
				{ "SocketState::SettingSocket", (int64)SocketState::SettingSocket },
				{ "SocketState::AcceptAndReceiveState", (int64)SocketState::AcceptAndReceiveState },
				{ "SocketState::ConnectingState", (int64)SocketState::ConnectingState },
				{ "SocketState::ReceivingState", (int64)SocketState::ReceivingState },
				{ "SocketState::ClosingState", (int64)SocketState::ClosingState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcceptAndReceiveState.Comment", "//Sets the _mySocket\n" },
				{ "AcceptAndReceiveState.DisplayName", "AcceptAndReceivingState" },
				{ "AcceptAndReceiveState.Name", "SocketState::AcceptAndReceiveState" },
				{ "AcceptAndReceiveState.ToolTip", "Sets the _mySocket" },
				{ "BlueprintType", "true" },
				{ "ClosingState.Comment", "//CLIENT ONLY\n" },
				{ "ClosingState.DisplayName", "ClosingState" },
				{ "ClosingState.Name", "SocketState::ClosingState" },
				{ "ClosingState.ToolTip", "CLIENT ONLY" },
				{ "Comment", "//ENUM\n//--------------------------------------------------------\n" },
				{ "ConnectingState.Comment", "//SERVER ONLY, This functions as a connector and receiver.\n" },
				{ "ConnectingState.DisplayName", "ConnectingState" },
				{ "ConnectingState.Name", "SocketState::ConnectingState" },
				{ "ConnectingState.ToolTip", "SERVER ONLY, This functions as a connector and receiver." },
				{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
				{ "NOSTATE.DisplayName", "NOSTATE" },
				{ "NOSTATE.Name", "SocketState::NOSTATE" },
				{ "ReceivingState.Comment", "//CLIENT ONLY\n" },
				{ "ReceivingState.DisplayName", "ReceivingState" },
				{ "ReceivingState.Name", "SocketState::ReceivingState" },
				{ "ReceivingState.ToolTip", "CLIENT ONLY" },
				{ "SettingSocket.DisplayName", "SettingSocket" },
				{ "SettingSocket.Name", "SocketState::SettingSocket" },
				{ "ToolTip", "ENUM" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin,
				nullptr,
				"SocketState",
				"SocketState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FipAddress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TCPSOCKETLANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FipAddress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FipAddress, Z_Construct_UPackage__Script_TCPSocketLANPlugin(), TEXT("ipAddress"), sizeof(FipAddress), Get_Z_Construct_UScriptStruct_FipAddress_Hash());
	}
	return Singleton;
}
template<> TCPSOCKETLANPLUGIN_API UScriptStruct* StaticStruct<FipAddress>()
{
	return FipAddress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FipAddress(FipAddress::StaticStruct, TEXT("/Script/TCPSocketLANPlugin"), TEXT("ipAddress"), false, nullptr, nullptr);
static struct FScriptStruct_TCPSocketLANPlugin_StaticRegisterNativesFipAddress
{
	FScriptStruct_TCPSocketLANPlugin_StaticRegisterNativesFipAddress()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ipAddress")),new UScriptStruct::TCppStructOps<FipAddress>);
	}
} ScriptStruct_TCPSocketLANPlugin_StaticRegisterNativesFipAddress;
	struct Z_Construct_UScriptStruct_FipAddress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FipAddress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//STRUCTS\n//--------------------------------------------------------\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "STRUCTS" },
	};
#endif
	void* Z_Construct_UScriptStruct_FipAddress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FipAddress>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_A_MetaData[] = {
		{ "Category", "ipAddress" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FipAddress, A), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_B_MetaData[] = {
		{ "Category", "ipAddress" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FipAddress, B), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_C_MetaData[] = {
		{ "Category", "ipAddress" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FipAddress, C), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_D_MetaData[] = {
		{ "Category", "ipAddress" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FipAddress, D), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FipAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FipAddress_Statics::NewProp_D,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FipAddress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin,
		nullptr,
		&NewStructOps,
		"ipAddress",
		sizeof(FipAddress),
		alignof(FipAddress),
		Z_Construct_UScriptStruct_FipAddress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FipAddress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FipAddress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FipAddress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FipAddress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FipAddress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TCPSocketLANPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ipAddress"), sizeof(FipAddress), Get_Z_Construct_UScriptStruct_FipAddress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FipAddress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FipAddress_Hash() { return 728190503U; }
	DEFINE_FUNCTION(ATCPSocketActor::execUnbindAllStringToDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnbindAllStringToDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execUnbindStringToDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToUnbind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnbindStringToDelegate(Z_Param_stringToUnbind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execDoesContainStringToDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesContainStringToDelegate(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execBindStringToDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToBind);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_functionToBind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindStringToDelegate(Z_Param_stringToBind,FTCPMSGCALLBACK(Z_Param_functionToBind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execGetConnectionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(SocketConnectionType*)Z_Param__Result=P_THIS->GetConnectionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execGetNumberOfClientsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfClientsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(SocketState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execGetLocalIPAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FipAddress*)Z_Param__Result=ATCPSocketActor::GetLocalIPAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execSendDataToAllClients)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SendDataToAllClients(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execSendData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_input);
		P_GET_PROPERTY(FIntProperty,Z_Param_clientIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_input,Z_Param_clientIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execResetConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execStopConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPSocketActor::execStartConnection)
	{
		P_GET_UBOOL(Z_Param_runAsServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartConnection(Z_Param_runAsServer);
		P_NATIVE_END;
	}
	void ATCPSocketActor::StaticRegisterNativesATCPSocketActor()
	{
		UClass* Class = ATCPSocketActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindStringToDelegate", &ATCPSocketActor::execBindStringToDelegate },
			{ "DoesContainStringToDelegate", &ATCPSocketActor::execDoesContainStringToDelegate },
			{ "GetConnectionType", &ATCPSocketActor::execGetConnectionType },
			{ "GetLocalIPAddress", &ATCPSocketActor::execGetLocalIPAddress },
			{ "GetNumberOfClientsConnected", &ATCPSocketActor::execGetNumberOfClientsConnected },
			{ "GetState", &ATCPSocketActor::execGetState },
			{ "IsConnected", &ATCPSocketActor::execIsConnected },
			{ "IsRunning", &ATCPSocketActor::execIsRunning },
			{ "ResetConnection", &ATCPSocketActor::execResetConnection },
			{ "SendData", &ATCPSocketActor::execSendData },
			{ "SendDataToAllClients", &ATCPSocketActor::execSendDataToAllClients },
			{ "StartConnection", &ATCPSocketActor::execStartConnection },
			{ "StopConnection", &ATCPSocketActor::execStopConnection },
			{ "UnbindAllStringToDelegate", &ATCPSocketActor::execUnbindAllStringToDelegate },
			{ "UnbindStringToDelegate", &ATCPSocketActor::execUnbindStringToDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics
	{
		struct TCPSocketActor_eventBindStringToDelegate_Parms
		{
			FString stringToBind;
			FScriptDelegate functionToBind;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stringToBind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stringToBind;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_functionToBind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_stringToBind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_stringToBind = { "stringToBind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventBindStringToDelegate_Parms, stringToBind), METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_stringToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_stringToBind_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_functionToBind = { "functionToBind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventBindStringToDelegate_Parms, functionToBind), Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGCALLBACK__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventBindStringToDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventBindStringToDelegate_Parms), &Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_stringToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_functionToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Whenever a message is received, TCPSocketActor will search in its dictionary if such string matches. If there is a string that match, it will call that function bound to it.\n//It will call whenever a message is received from the server or client.\n//Returns false if there is an existing delegate bound to such string. Else string is bound and function returns true.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Whenever a message is received, TCPSocketActor will search in its dictionary if such string matches. If there is a string that match, it will call that function bound to it.\nIt will call whenever a message is received from the server or client.\nReturns false if there is an existing delegate bound to such string. Else string is bound and function returns true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "BindStringToDelegate", nullptr, nullptr, sizeof(TCPSocketActor_eventBindStringToDelegate_Parms), Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics
	{
		struct TCPSocketActor_eventDoesContainStringToDelegate_Parms
		{
			FString ref;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ref_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventDoesContainStringToDelegate_Parms, ref), METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ref_MetaData)) };
	void Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventDoesContainStringToDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventDoesContainStringToDelegate_Parms), &Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "DoesContainStringToDelegate", nullptr, nullptr, sizeof(TCPSocketActor_eventDoesContainStringToDelegate_Parms), Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics
	{
		struct TCPSocketActor_eventGetConnectionType_Parms
		{
			SocketConnectionType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventGetConnectionType_Parms, ReturnValue), Z_Construct_UEnum_TCPSocketLANPlugin_SocketConnectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the type of connection it is running as\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Get the type of connection it is running as" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "GetConnectionType", nullptr, nullptr, sizeof(TCPSocketActor_eventGetConnectionType_Parms), Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_GetConnectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_GetConnectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics
	{
		struct TCPSocketActor_eventGetLocalIPAddress_Parms
		{
			FipAddress ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventGetLocalIPAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FipAddress, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets the first local IPAddress in the computer. If the computer has multiple network cards/ VPNs, this may not return the right one.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Gets the first local IPAddress in the computer. If the computer has multiple network cards/ VPNs, this may not return the right one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "GetLocalIPAddress", nullptr, nullptr, sizeof(TCPSocketActor_eventGetLocalIPAddress_Parms), Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics
	{
		struct TCPSocketActor_eventGetNumberOfClientsConnected_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventGetNumberOfClientsConnected_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//SERVER ONLY. Gets the number of clients connected to the server.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "SERVER ONLY. Gets the number of clients connected to the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "GetNumberOfClientsConnected", nullptr, nullptr, sizeof(TCPSocketActor_eventGetNumberOfClientsConnected_Parms), Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_GetState_Statics
	{
		struct TCPSocketActor_eventGetState_Parms
		{
			SocketState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_TCPSocketLANPlugin_SocketState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets internal running state. Useful when server is running. Does not update when it is not running.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Gets internal running state. Useful when server is running. Does not update when it is not running." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "GetState", nullptr, nullptr, sizeof(TCPSocketActor_eventGetState_Parms), Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics
	{
		struct TCPSocketActor_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventIsConnected_Parms), &Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Is the server/client paired?\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Is the server/client paired?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "IsConnected", nullptr, nullptr, sizeof(TCPSocketActor_eventIsConnected_Parms), Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics
	{
		struct TCPSocketActor_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventIsRunning_Parms), &Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Is the socket running? (This does not check if the actual server socket is created/is listening.)\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Is the socket running? (This does not check if the actual server socket is created/is listening.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "IsRunning", nullptr, nullptr, sizeof(TCPSocketActor_eventIsRunning_Parms), Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_ResetConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_ResetConnection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Resets the connection using the variables in the IPAddress and Port. Does nothing if it is not running.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Resets the connection using the variables in the IPAddress and Port. Does nothing if it is not running." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_ResetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "ResetConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_ResetConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_ResetConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_ResetConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_ResetConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_SendData_Statics
	{
		struct TCPSocketActor_eventSendData_Parms
		{
			FString input;
			int32 clientIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_clientIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventSendData_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_clientIndex = { "clientIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventSendData_Parms, clientIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventSendData_Parms), &Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_clientIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Your main message sender. This delivers a string to the client to parse. Returns true upon successfully sending all the data.\n//Note clientIndex is for SERVER ONLY. It is ignored if it is a client.\n" },
		{ "CPP_Default_clientIndex", "0" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Your main message sender. This delivers a string to the client to parse. Returns true upon successfully sending all the data.\nNote clientIndex is for SERVER ONLY. It is ignored if it is a client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "SendData", nullptr, nullptr, sizeof(TCPSocketActor_eventSendData_Parms), Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics
	{
		struct TCPSocketActor_eventSendDataToAllClients_Parms
		{
			FString input;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventSendDataToAllClients_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventSendDataToAllClients_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//SERVER ONLY. Your main message sender. This delivers a string to all the clients. Returns true upon successfully sending all the data. Returns false function is called as a Client.\n//Returns the number of clients successfully sent the message to.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "SERVER ONLY. Your main message sender. This delivers a string to all the clients. Returns true upon successfully sending all the data. Returns false function is called as a Client.\nReturns the number of clients successfully sent the message to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "SendDataToAllClients", nullptr, nullptr, sizeof(TCPSocketActor_eventSendDataToAllClients_Parms), Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics
	{
		struct TCPSocketActor_eventStartConnection_Parms
		{
			bool runAsServer;
			bool ReturnValue;
		};
		static void NewProp_runAsServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_runAsServer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_runAsServer_SetBit(void* Obj)
	{
		((TCPSocketActor_eventStartConnection_Parms*)Obj)->runAsServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_runAsServer = { "runAsServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventStartConnection_Parms), &Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_runAsServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventStartConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventStartConnection_Parms), &Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_runAsServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//This is called if connectOnStart is true. Cannot call when thread is still running. Make sure you call StopConnection/ResetConnection instead.\n//May return false if server is still in shutdown/closing mode.\n" },
		{ "CPP_Default_runAsServer", "false" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "This is called if connectOnStart is true. Cannot call when thread is still running. Make sure you call StopConnection/ResetConnection instead.\nMay return false if server is still in shutdown/closing mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "StartConnection", nullptr, nullptr, sizeof(TCPSocketActor_eventStartConnection_Parms), Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_StartConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_StartConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics
	{
		struct TCPSocketActor_eventStopConnection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventStopConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventStopConnection_Parms), &Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Stops connection. Returns false if this is called while it is not running.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Stops connection. Returns false if this is called while it is not running." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "StopConnection", nullptr, nullptr, sizeof(TCPSocketActor_eventStopConnection_Parms), Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_StopConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_StopConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics
	{
		struct TCPSocketActor_eventUnbindAllStringToDelegate_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventUnbindAllStringToDelegate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Returns false if there is no an existing delegate bound to such string\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Returns false if there is no an existing delegate bound to such string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "UnbindAllStringToDelegate", nullptr, nullptr, sizeof(TCPSocketActor_eventUnbindAllStringToDelegate_Parms), Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics
	{
		struct TCPSocketActor_eventUnbindStringToDelegate_Parms
		{
			FString stringToUnbind;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stringToUnbind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stringToUnbind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_stringToUnbind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_stringToUnbind = { "stringToUnbind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPSocketActor_eventUnbindStringToDelegate_Parms, stringToUnbind), METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_stringToUnbind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_stringToUnbind_MetaData)) };
	void Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPSocketActor_eventUnbindStringToDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPSocketActor_eventUnbindStringToDelegate_Parms), &Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_stringToUnbind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Returns true if there is an existing delegate bound to such string\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Returns true if there is an existing delegate bound to such string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPSocketActor, nullptr, "UnbindStringToDelegate", nullptr, nullptr, sizeof(TCPSocketActor_eventUnbindStringToDelegate_Parms), Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATCPSocketActor_NoRegister()
	{
		return ATCPSocketActor::StaticClass();
	}
	struct Z_Construct_UClass_ATCPSocketActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ipAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maximumNumberOfClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maximumNumberOfClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waitDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_waitDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flushFunctionsQuickly_MetaData[];
#endif
		static void NewProp_flushFunctionsQuickly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flushFunctionsQuickly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lastParsedMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastParsedMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lastParsedMessages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATCPSocketActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCPSocketLANPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATCPSocketActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATCPSocketActor_BindStringToDelegate, "BindStringToDelegate" }, // 3680662618
		{ &Z_Construct_UFunction_ATCPSocketActor_DoesContainStringToDelegate, "DoesContainStringToDelegate" }, // 1435159794
		{ &Z_Construct_UFunction_ATCPSocketActor_GetConnectionType, "GetConnectionType" }, // 2232004220
		{ &Z_Construct_UFunction_ATCPSocketActor_GetLocalIPAddress, "GetLocalIPAddress" }, // 2015876549
		{ &Z_Construct_UFunction_ATCPSocketActor_GetNumberOfClientsConnected, "GetNumberOfClientsConnected" }, // 2214089852
		{ &Z_Construct_UFunction_ATCPSocketActor_GetState, "GetState" }, // 2846353890
		{ &Z_Construct_UFunction_ATCPSocketActor_IsConnected, "IsConnected" }, // 21886906
		{ &Z_Construct_UFunction_ATCPSocketActor_IsRunning, "IsRunning" }, // 2201238058
		{ &Z_Construct_UFunction_ATCPSocketActor_ResetConnection, "ResetConnection" }, // 3922235544
		{ &Z_Construct_UFunction_ATCPSocketActor_SendData, "SendData" }, // 3986083671
		{ &Z_Construct_UFunction_ATCPSocketActor_SendDataToAllClients, "SendDataToAllClients" }, // 2377057910
		{ &Z_Construct_UFunction_ATCPSocketActor_StartConnection, "StartConnection" }, // 3937987045
		{ &Z_Construct_UFunction_ATCPSocketActor_StopConnection, "StopConnection" }, // 608157713
		{ &Z_Construct_UFunction_ATCPSocketActor_UnbindAllStringToDelegate, "UnbindAllStringToDelegate" }, // 341059480
		{ &Z_Construct_UFunction_ATCPSocketActor_UnbindStringToDelegate, "UnbindStringToDelegate" }, // 3953056312
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//This actor handles the messaging system. Ensure that there is only one and not more at any given time!\n" },
		{ "IncludePath", "TCPSocketActor.h" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "This actor handles the messaging system. Ensure that there is only one and not more at any given time!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_ipAddress_MetaData[] = {
		{ "Category", "TCPSocketActor" },
		{ "Comment", "//--------VARIABLES--------\n//The IPV4 Address to connect to. As a LAN server, both Client and Server should connect to SERVER's machine LOCAL IP Address!\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "--------VARIABLES--------\nThe IPV4 Address to connect to. As a LAN server, both Client and Server should connect to SERVER's machine LOCAL IP Address!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, ipAddress), Z_Construct_UScriptStruct_FipAddress, METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_port_MetaData[] = {
		{ "Category", "TCPSocketActor" },
		{ "Comment", "//The port to connect to. Both Client and Server must have matching port number!\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "The port to connect to. Both Client and Server must have matching port number!" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, port), METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_maximumNumberOfClients_MetaData[] = {
		{ "Category", "TCPSocketActor" },
		{ "Comment", "//SERVER ONLY. This indicates the number of clients the server can accept. If set to 0, it will limitless number of clients as it can (Use at your own risk). If this is changed to a lesser value while there are max clients connected, it will keep the connected clients until they leave.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "SERVER ONLY. This indicates the number of clients the server can accept. If set to 0, it will limitless number of clients as it can (Use at your own risk). If this is changed to a lesser value while there are max clients connected, it will keep the connected clients until they leave." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_maximumNumberOfClients = { "maximumNumberOfClients", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, maximumNumberOfClients), METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_maximumNumberOfClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_maximumNumberOfClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_waitDuration_MetaData[] = {
		{ "Category", "TCPSocketActor" },
		{ "Comment", "//Intervals when polling for messages/ connection.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "Intervals when polling for messages/ connection." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_waitDuration = { "waitDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, waitDuration), METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_waitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_waitDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly_MetaData[] = {
		{ "Category", "TCPSocketActor" },
		{ "Comment", "//When there are multiple messages coming through, it will flush all in one tick. Else, it will call 1 function per tick.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "When there are multiple messages coming through, it will flush all in one tick. Else, it will call 1 function per tick." },
	};
#endif
	void Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly_SetBit(void* Obj)
	{
		((ATCPSocketActor*)Obj)->flushFunctionsQuickly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly = { "flushFunctionsQuickly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATCPSocketActor), &Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "Comment", "//This is called when any arbitrary message is received from the client. AKA. RECV is called and message is parsed successfully.\n//You can use this to create your custom logic/parser just by OnMessageReceived alone.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "This is called when any arbitrary message is received from the client. AKA. RECV is called and message is parsed successfully.\nYou can use this to create your custom logic/parser just by OnMessageReceived alone." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, OnMessageReceived), Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPMSGRECEIVED__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnMessageReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Comment", "//This is called when a client connects.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "This is called when a client connects." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, OnConnected), Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "Comment", "//This is called a client disconnects.\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "This is called a client disconnects." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, OnDisconnected), Z_Construct_UDelegateFunction_TCPSocketLANPlugin_TCPDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnDisconnected_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages_Inner = { "lastParsedMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages_MetaData[] = {
		{ "Category", "TCPSocketActor" },
		{ "Comment", "////TEMP STORAGE WILL SWITCH TO A VARIABLE CONTAINER. Contains all parsed messages. These are separated with a \\n.\n//UPROPERTY(BlueprintReadWrite, EditAnywhere)\n//FString quickieOutput;\n" },
		{ "ModuleRelativePath", "Public/TCPSocketActor.h" },
		{ "ToolTip", "/TEMP STORAGE WILL SWITCH TO A VARIABLE CONTAINER. Contains all parsed messages. These are separated with a \\n.\nUPROPERTY(BlueprintReadWrite, EditAnywhere)\nFString quickieOutput;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages = { "lastParsedMessages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPSocketActor, lastParsedMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATCPSocketActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_ipAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_maximumNumberOfClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_waitDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_flushFunctionsQuickly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_OnDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPSocketActor_Statics::NewProp_lastParsedMessages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATCPSocketActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATCPSocketActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATCPSocketActor_Statics::ClassParams = {
		&ATCPSocketActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATCPSocketActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATCPSocketActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPSocketActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATCPSocketActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATCPSocketActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATCPSocketActor, 1685227400);
	template<> TCPSOCKETLANPLUGIN_API UClass* StaticClass<ATCPSocketActor>()
	{
		return ATCPSocketActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATCPSocketActor(Z_Construct_UClass_ATCPSocketActor, &ATCPSocketActor::StaticClass, TEXT("/Script/TCPSocketLANPlugin"), TEXT("ATCPSocketActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATCPSocketActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
