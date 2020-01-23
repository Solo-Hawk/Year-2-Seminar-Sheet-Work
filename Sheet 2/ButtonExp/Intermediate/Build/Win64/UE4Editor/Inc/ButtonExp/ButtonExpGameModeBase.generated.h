// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUTTONEXP_ButtonExpGameModeBase_generated_h
#error "ButtonExpGameModeBase.generated.h already included, missing '#pragma once' in ButtonExpGameModeBase.h"
#endif
#define BUTTONEXP_ButtonExpGameModeBase_generated_h

#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_RPC_WRAPPERS
#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAButtonExpGameModeBase(); \
	friend struct Z_Construct_UClass_AButtonExpGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AButtonExpGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ButtonExp"), NO_API) \
	DECLARE_SERIALIZER(AButtonExpGameModeBase)


#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAButtonExpGameModeBase(); \
	friend struct Z_Construct_UClass_AButtonExpGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AButtonExpGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ButtonExp"), NO_API) \
	DECLARE_SERIALIZER(AButtonExpGameModeBase)


#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AButtonExpGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AButtonExpGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AButtonExpGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AButtonExpGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AButtonExpGameModeBase(AButtonExpGameModeBase&&); \
	NO_API AButtonExpGameModeBase(const AButtonExpGameModeBase&); \
public:


#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AButtonExpGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AButtonExpGameModeBase(AButtonExpGameModeBase&&); \
	NO_API AButtonExpGameModeBase(const AButtonExpGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AButtonExpGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AButtonExpGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AButtonExpGameModeBase)


#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_12_PROLOG
#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_RPC_WRAPPERS \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_INCLASS \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUTTONEXP_API UClass* StaticClass<class AButtonExpGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ButtonExp_Source_ButtonExp_ButtonExpGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
