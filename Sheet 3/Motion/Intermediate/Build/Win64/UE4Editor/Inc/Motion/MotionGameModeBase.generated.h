// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTION_MotionGameModeBase_generated_h
#error "MotionGameModeBase.generated.h already included, missing '#pragma once' in MotionGameModeBase.h"
#endif
#define MOTION_MotionGameModeBase_generated_h

#define Motion_Source_Motion_MotionGameModeBase_h_15_RPC_WRAPPERS
#define Motion_Source_Motion_MotionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Motion_Source_Motion_MotionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMotionGameModeBase(); \
	friend struct Z_Construct_UClass_AMotionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMotionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Motion"), NO_API) \
	DECLARE_SERIALIZER(AMotionGameModeBase)


#define Motion_Source_Motion_MotionGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMotionGameModeBase(); \
	friend struct Z_Construct_UClass_AMotionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMotionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Motion"), NO_API) \
	DECLARE_SERIALIZER(AMotionGameModeBase)


#define Motion_Source_Motion_MotionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMotionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMotionGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotionGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMotionGameModeBase(AMotionGameModeBase&&); \
	NO_API AMotionGameModeBase(const AMotionGameModeBase&); \
public:


#define Motion_Source_Motion_MotionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMotionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMotionGameModeBase(AMotionGameModeBase&&); \
	NO_API AMotionGameModeBase(const AMotionGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotionGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMotionGameModeBase)


#define Motion_Source_Motion_MotionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Motion_Source_Motion_MotionGameModeBase_h_12_PROLOG
#define Motion_Source_Motion_MotionGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Motion_Source_Motion_MotionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Motion_Source_Motion_MotionGameModeBase_h_15_RPC_WRAPPERS \
	Motion_Source_Motion_MotionGameModeBase_h_15_INCLASS \
	Motion_Source_Motion_MotionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Motion_Source_Motion_MotionGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Motion_Source_Motion_MotionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Motion_Source_Motion_MotionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Motion_Source_Motion_MotionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Motion_Source_Motion_MotionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTION_API UClass* StaticClass<class AMotionGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Motion_Source_Motion_MotionGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
