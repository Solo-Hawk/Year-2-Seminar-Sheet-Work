// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructExpCPP/StructCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructCPP() {}
// Cross Module References
	STRUCTEXPCPP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponStruct();
	UPackage* Z_Construct_UPackage__Script_StructExpCPP();
	STRUCTEXPCPP_API UScriptStruct* Z_Construct_UScriptStruct_FContainerStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STRUCTEXPCPP_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStruct();
	STRUCTEXPCPP_API UClass* Z_Construct_UClass_UStructCPP_NoRegister();
	STRUCTEXPCPP_API UClass* Z_Construct_UClass_UStructCPP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FWeaponStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRUCTEXPCPP_API uint32 Get_Z_Construct_UScriptStruct_FWeaponStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponStruct, Z_Construct_UPackage__Script_StructExpCPP(), TEXT("WeaponStruct"), sizeof(FWeaponStruct), Get_Z_Construct_UScriptStruct_FWeaponStruct_Hash());
	}
	return Singleton;
}
template<> STRUCTEXPCPP_API UScriptStruct* StaticStruct<FWeaponStruct>()
{
	return FWeaponStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponStruct(FWeaponStruct::StaticStruct, TEXT("/Script/StructExpCPP"), TEXT("WeaponStruct"), false, nullptr, nullptr);
static struct FScriptStruct_StructExpCPP_StaticRegisterNativesFWeaponStruct
{
	FScriptStruct_StructExpCPP_StaticRegisterNativesFWeaponStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponStruct")),new UScriptStruct::TCppStructOps<FWeaponStruct>);
	}
} ScriptStruct_StructExpCPP_StaticRegisterNativesFWeaponStruct;
	struct Z_Construct_UScriptStruct_FWeaponStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Durability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WeaponID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStruct, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Durability_MetaData[] = {
		{ "Category", "WeaponStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStruct, Durability), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Durability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Durability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_WeaponID_MetaData[] = {
		{ "Category", "WeaponStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStruct, WeaponID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_WeaponID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_WeaponID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "WeaponStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Durability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_WeaponID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStruct_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructExpCPP,
		nullptr,
		&NewStructOps,
		"WeaponStruct",
		sizeof(FWeaponStruct),
		alignof(FWeaponStruct),
		Z_Construct_UScriptStruct_FWeaponStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StructExpCPP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponStruct"), sizeof(FWeaponStruct), Get_Z_Construct_UScriptStruct_FWeaponStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponStruct_Hash() { return 3389232539U; }
class UScriptStruct* FContainerStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRUCTEXPCPP_API uint32 Get_Z_Construct_UScriptStruct_FContainerStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContainerStruct, Z_Construct_UPackage__Script_StructExpCPP(), TEXT("ContainerStruct"), sizeof(FContainerStruct), Get_Z_Construct_UScriptStruct_FContainerStruct_Hash());
	}
	return Singleton;
}
template<> STRUCTEXPCPP_API UScriptStruct* StaticStruct<FContainerStruct>()
{
	return FContainerStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContainerStruct(FContainerStruct::StaticStruct, TEXT("/Script/StructExpCPP"), TEXT("ContainerStruct"), false, nullptr, nullptr);
static struct FScriptStruct_StructExpCPP_StaticRegisterNativesFContainerStruct
{
	FScriptStruct_StructExpCPP_StaticRegisterNativesFContainerStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ContainerStruct")),new UScriptStruct::TCppStructOps<FContainerStruct>);
	}
} ScriptStruct_StructExpCPP_StaticRegisterNativesFContainerStruct;
	struct Z_Construct_UScriptStruct_FContainerStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_is_Open_MetaData[];
#endif
		static void NewProp_is_Open_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_Open;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_is_Locked_MetaData[];
#endif
		static void NewProp_is_Locked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_Locked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContainerStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContainerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContainerStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "ContainerStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContainerStruct, Inventory), METADATA_PARAMS(Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open_MetaData[] = {
		{ "Category", "ContainerStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open_SetBit(void* Obj)
	{
		((FContainerStruct*)Obj)->is_Open = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open = { "is_Open", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FContainerStruct), &Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked_MetaData[] = {
		{ "Category", "ContainerStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked_SetBit(void* Obj)
	{
		((FContainerStruct*)Obj)->is_Locked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked = { "is_Locked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FContainerStruct), &Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContainerStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Open,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerStruct_Statics::NewProp_is_Locked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContainerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructExpCPP,
		nullptr,
		&NewStructOps,
		"ContainerStruct",
		sizeof(FContainerStruct),
		alignof(FContainerStruct),
		Z_Construct_UScriptStruct_FContainerStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContainerStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContainerStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContainerStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StructExpCPP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContainerStruct"), sizeof(FContainerStruct), Get_Z_Construct_UScriptStruct_FContainerStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FContainerStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContainerStruct_Hash() { return 4240576341U; }
class UScriptStruct* FCharacterStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRUCTEXPCPP_API uint32 Get_Z_Construct_UScriptStruct_FCharacterStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStruct, Z_Construct_UPackage__Script_StructExpCPP(), TEXT("CharacterStruct"), sizeof(FCharacterStruct), Get_Z_Construct_UScriptStruct_FCharacterStruct_Hash());
	}
	return Singleton;
}
template<> STRUCTEXPCPP_API UScriptStruct* StaticStruct<FCharacterStruct>()
{
	return FCharacterStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterStruct(FCharacterStruct::StaticStruct, TEXT("/Script/StructExpCPP"), TEXT("CharacterStruct"), false, nullptr, nullptr);
static struct FScriptStruct_StructExpCPP_StaticRegisterNativesFCharacterStruct
{
	FScriptStruct_StructExpCPP_StaticRegisterNativesFCharacterStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterStruct")),new UScriptStruct::TCppStructOps<FCharacterStruct>);
	}
} ScriptStruct_StructExpCPP_StaticRegisterNativesFCharacterStruct;
	struct Z_Construct_UScriptStruct_FCharacterStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_EquippedItem_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStruct, EquippedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_EquippedItem_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_EquippedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStruct, Inventory), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Armour_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Armour = { "Armour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStruct, Armour), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Armour_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Armour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStruct, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStruct, Team), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Team_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_EquippedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Armour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructExpCPP,
		nullptr,
		&NewStructOps,
		"CharacterStruct",
		sizeof(FCharacterStruct),
		alignof(FCharacterStruct),
		Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StructExpCPP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterStruct"), sizeof(FCharacterStruct), Get_Z_Construct_UScriptStruct_FCharacterStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterStruct_Hash() { return 3629260827U; }
	void UStructCPP::StaticRegisterNativesUStructCPP()
	{
	}
	UClass* Z_Construct_UClass_UStructCPP_NoRegister()
	{
		return UStructCPP::StaticClass();
	}
	struct Z_Construct_UClass_UStructCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructExpCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructCPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructCPP.h" },
		{ "ModuleRelativePath", "StructCPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStructCPP_Statics::ClassParams = {
		&UStructCPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStructCPP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStructCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStructCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStructCPP, 2426465682);
	template<> STRUCTEXPCPP_API UClass* StaticClass<UStructCPP>()
	{
		return UStructCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStructCPP(Z_Construct_UClass_UStructCPP, &UStructCPP::StaticClass, TEXT("/Script/StructExpCPP"), TEXT("UStructCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
