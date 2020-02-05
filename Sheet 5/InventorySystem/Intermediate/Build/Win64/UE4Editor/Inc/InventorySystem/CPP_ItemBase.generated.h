// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYSYSTEM_CPP_ItemBase_generated_h
#error "CPP_ItemBase.generated.h already included, missing '#pragma once' in CPP_ItemBase.h"
#endif
#define INVENTORYSYSTEM_CPP_ItemBase_generated_h

#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickupItem(); \
		P_NATIVE_END; \
	}


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickupItem(); \
		P_NATIVE_END; \
	}


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_ItemBase(); \
	friend struct Z_Construct_UClass_ACPP_ItemBase_Statics; \
public: \
	DECLARE_CLASS(ACPP_ItemBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(ACPP_ItemBase)


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPP_ItemBase(); \
	friend struct Z_Construct_UClass_ACPP_ItemBase_Statics; \
public: \
	DECLARE_CLASS(ACPP_ItemBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(ACPP_ItemBase)


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_ItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_ItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_ItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_ItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_ItemBase(ACPP_ItemBase&&); \
	NO_API ACPP_ItemBase(const ACPP_ItemBase&); \
public:


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_ItemBase(ACPP_ItemBase&&); \
	NO_API ACPP_ItemBase(const ACPP_ItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_ItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_ItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_ItemBase)


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_PRIVATE_PROPERTY_OFFSET
#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_9_PROLOG
#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_PRIVATE_PROPERTY_OFFSET \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_RPC_WRAPPERS \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_INCLASS \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_PRIVATE_PROPERTY_OFFSET \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_INCLASS_NO_PURE_DECLS \
	InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class ACPP_ItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InventorySystem_Source_InventorySystem_Public_CPP_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
