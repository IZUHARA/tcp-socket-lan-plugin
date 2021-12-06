// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class SocketConnectionType : uint8;
enum class SocketState : uint8;
struct FipAddress;
#ifdef TCPSOCKETLANPLUGIN_TCPSocketActor_generated_h
#error "TCPSocketActor.generated.h already included, missing '#pragma once' in TCPSocketActor.h"
#endif
#define TCPSOCKETLANPLUGIN_TCPSocketActor_generated_h

#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FipAddress_Statics; \
	TCPSOCKETLANPLUGIN_API static class UScriptStruct* StaticStruct();


template<> TCPSOCKETLANPLUGIN_API UScriptStruct* StaticStruct<struct FipAddress>();

#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_73_DELEGATE \
static inline void FTCPDelegate_DelegateWrapper(const FMulticastScriptDelegate& TCPDelegate) \
{ \
	TCPDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_72_DELEGATE \
struct _Script_TCPSocketLANPlugin_eventTCPMSGRECEIVED_Parms \
{ \
	FString output; \
}; \
static inline void FTCPMSGRECEIVED_DelegateWrapper(const FMulticastScriptDelegate& TCPMSGRECEIVED, const FString& output) \
{ \
	_Script_TCPSocketLANPlugin_eventTCPMSGRECEIVED_Parms Parms; \
	Parms.output=output; \
	TCPMSGRECEIVED.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_71_DELEGATE \
static inline void FTCPMSGCALLBACK_DelegateWrapper(const FScriptDelegate& TCPMSGCALLBACK) \
{ \
	TCPMSGCALLBACK.ProcessDelegate<UObject>(NULL); \
}


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_SPARSE_DATA
#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnbindAllStringToDelegate); \
	DECLARE_FUNCTION(execUnbindStringToDelegate); \
	DECLARE_FUNCTION(execDoesContainStringToDelegate); \
	DECLARE_FUNCTION(execBindStringToDelegate); \
	DECLARE_FUNCTION(execGetConnectionType); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetNumberOfClientsConnected); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetLocalIPAddress); \
	DECLARE_FUNCTION(execSendDataToAllClients); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execResetConnection); \
	DECLARE_FUNCTION(execStopConnection); \
	DECLARE_FUNCTION(execStartConnection);


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnbindAllStringToDelegate); \
	DECLARE_FUNCTION(execUnbindStringToDelegate); \
	DECLARE_FUNCTION(execDoesContainStringToDelegate); \
	DECLARE_FUNCTION(execBindStringToDelegate); \
	DECLARE_FUNCTION(execGetConnectionType); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetNumberOfClientsConnected); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetLocalIPAddress); \
	DECLARE_FUNCTION(execSendDataToAllClients); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execResetConnection); \
	DECLARE_FUNCTION(execStopConnection); \
	DECLARE_FUNCTION(execStartConnection);


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATCPSocketActor(); \
	friend struct Z_Construct_UClass_ATCPSocketActor_Statics; \
public: \
	DECLARE_CLASS(ATCPSocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPSocketLANPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATCPSocketActor)


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_INCLASS \
private: \
	static void StaticRegisterNativesATCPSocketActor(); \
	friend struct Z_Construct_UClass_ATCPSocketActor_Statics; \
public: \
	DECLARE_CLASS(ATCPSocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPSocketLANPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATCPSocketActor)


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATCPSocketActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATCPSocketActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATCPSocketActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCPSocketActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATCPSocketActor(ATCPSocketActor&&); \
	NO_API ATCPSocketActor(const ATCPSocketActor&); \
public:


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATCPSocketActor(ATCPSocketActor&&); \
	NO_API ATCPSocketActor(const ATCPSocketActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATCPSocketActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCPSocketActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATCPSocketActor)


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_PRIVATE_PROPERTY_OFFSET
#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_129_PROLOG
#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_PRIVATE_PROPERTY_OFFSET \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_SPARSE_DATA \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_RPC_WRAPPERS \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_INCLASS \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_PRIVATE_PROPERTY_OFFSET \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_SPARSE_DATA \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_INCLASS_NO_PURE_DECLS \
	NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPSOCKETLANPLUGIN_API UClass* StaticClass<class ATCPSocketActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMSZone7Client_4_26_Plugins_TCPSocketLANPlugin_Source_TCPSocketLANPlugin_Public_TCPSocketActor_h


#define FOREACH_ENUM_SOCKETCONNECTIONTYPE(op) \
	op(SocketConnectionType::Null) \
	op(SocketConnectionType::Client) \
	op(SocketConnectionType::Server) 

enum class SocketConnectionType : uint8;
template<> TCPSOCKETLANPLUGIN_API UEnum* StaticEnum<SocketConnectionType>();

#define FOREACH_ENUM_SOCKETSTATE(op) \
	op(SocketState::NOSTATE) \
	op(SocketState::SettingSocket) \
	op(SocketState::AcceptAndReceiveState) \
	op(SocketState::ConnectingState) \
	op(SocketState::ReceivingState) \
	op(SocketState::ClosingState) 

enum class SocketState : uint8;
template<> TCPSOCKETLANPLUGIN_API UEnum* StaticEnum<SocketState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
