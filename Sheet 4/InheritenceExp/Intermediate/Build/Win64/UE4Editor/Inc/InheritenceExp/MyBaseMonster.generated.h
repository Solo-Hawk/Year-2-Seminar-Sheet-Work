// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INHERITENCEEXP_MyBaseMonster_generated_h
#error "MyBaseMonster.generated.h already included, missing '#pragma once' in MyBaseMonster.h"
#endif
#define INHERITENCEEXP_MyBaseMonster_generated_h

#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_RPC_WRAPPERS
#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBaseMonster(); \
	friend struct Z_Construct_UClass_AMyBaseMonster_Statics; \
public: \
	DECLARE_CLASS(AMyBaseMonster, ABaseMonster, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InheritenceExp"), NO_API) \
	DECLARE_SERIALIZER(AMyBaseMonster)


#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyBaseMonster(); \
	friend struct Z_Construct_UClass_AMyBaseMonster_Statics; \
public: \
	DECLARE_CLASS(AMyBaseMonster, ABaseMonster, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InheritenceExp"), NO_API) \
	DECLARE_SERIALIZER(AMyBaseMonster)


#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBaseMonster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyBaseMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBaseMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBaseMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBaseMonster(AMyBaseMonster&&); \
	NO_API AMyBaseMonster(const AMyBaseMonster&); \
public:


#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBaseMonster() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBaseMonster(AMyBaseMonster&&); \
	NO_API AMyBaseMonster(const AMyBaseMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBaseMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBaseMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBaseMonster)


#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_PRIVATE_PROPERTY_OFFSET
#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_12_PROLOG
#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_PRIVATE_PROPERTY_OFFSET \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_RPC_WRAPPERS \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_INCLASS \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_PRIVATE_PROPERTY_OFFSET \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_INCLASS_NO_PURE_DECLS \
	InheritenceExp_Source_InheritenceExp_MyBaseMonster_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INHERITENCEEXP_API UClass* StaticClass<class AMyBaseMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InheritenceExp_Source_InheritenceExp_MyBaseMonster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
