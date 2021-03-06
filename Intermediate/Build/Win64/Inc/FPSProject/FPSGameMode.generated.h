// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef FPSPROJECT_FPSGameMode_generated_h
#error "FPSGameMode.generated.h already included, missing '#pragma once' in FPSGameMode.h"
#endif
#define FPSPROJECT_FPSGameMode_generated_h

#define AFPSGameMode_EVENTPARMS
#define AFPSGameMode_RPC_WRAPPERS
#define AFPSGameMode_CALLBACK_WRAPPERS
#define AFPSGameMode_INCLASS \
	private: \
	static void StaticRegisterNativesAFPSGameMode(); \
	friend FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSGameMode(); \
	public: \
	DECLARE_CLASS(AFPSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, FPSProject, NO_API) \
	DECLARE_SERIALIZER(AFPSGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AFPSGameMode*>(this); }


#define AFPSGameMode_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameMode(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameMode) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFPSGameMode(const AFPSGameMode& InCopy); \
public:


#define AFPSGameMode_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFPSGameMode(const AFPSGameMode& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameMode)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AFPSGameMode


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AFPSGameMode_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AFPSGameMode_RPC_WRAPPERS \
	AFPSGameMode_CALLBACK_WRAPPERS \
	AFPSGameMode_INCLASS \
	AFPSGameMode_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AFPSGameMode_RPC_WRAPPERS \
	AFPSGameMode_CALLBACK_WRAPPERS \
	AFPSGameMode_INCLASS \
	AFPSGameMode_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


