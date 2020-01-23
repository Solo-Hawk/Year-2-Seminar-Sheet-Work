// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INHERITENCEEXP_BaseMonster_generated_h
#error "BaseMonster.generated.h already included, missing '#pragma once' in BaseMonster.h"
#endif
#define INHERITENCEEXP_BaseMonster_generated_h

#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_RPC_WRAPPERS
#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseMonster(); \
	friend struct Z_Construct_UClass_ABaseMonster_Statics; \
public: \
	DECLARE_CLASS(ABaseMonster, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InheritenceExp"), NO_API) \
	DECLARE_SERIALIZER(ABaseMonster)


#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseMonster(); \
	friend struct Z_Construct_UClass_ABaseMonster_Statics; \
public: \
	DECLARE_CLASS(ABaseMonster, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InheritenceExp"), NO_API) \
	DECLARE_SERIALIZER(ABaseMonster)


#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseMonster(ABaseMonster&&); \
	NO_API ABaseMonster(const ABaseMonster&); \
public:


#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseMonster(ABaseMonster&&); \
	NO_API ABaseMonster(const ABaseMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseMonster)


#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_PRIVATE_PROPERTY_OFFSET
#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_9_PROLOG
#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_PRIVATE_PROPERTY_OFFSET \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_RPC_WRAPPERS \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_INCLASS \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_PRIVATE_PROPERTY_OFFSET \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_INCLASS_NO_PURE_DECLS \
	InheritenceExp_Source_InheritenceExp_BaseMonster_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INHERITENCEEXP_API UClass* StaticClass<class ABaseMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InheritenceExp_Source_InheritenceExp_BaseMonster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
