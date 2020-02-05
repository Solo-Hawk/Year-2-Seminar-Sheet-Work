// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/CPP_ItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ItemBase() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_ACPP_ItemBase_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_ACPP_ItemBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UFunction_ACPP_ItemBase_PickupItem();
// End Cross Module References
	void ACPP_ItemBase::StaticRegisterNativesACPP_ItemBase()
	{
		UClass* Class = ACPP_ItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickupItem", &ACPP_ItemBase::execPickupItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_ItemBase_PickupItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ItemBase_PickupItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ItemBase_PickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ItemBase, nullptr, "PickupItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ItemBase_PickupItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACPP_ItemBase_PickupItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_ItemBase_PickupItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_ItemBase_PickupItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPP_ItemBase_NoRegister()
	{
		return ACPP_ItemBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_ItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ItemBase_PickupItem, "PickupItem" }, // 1999351892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ItemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_ItemBase.h" },
		{ "ModuleRelativePath", "Public/CPP_ItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "CPP_ItemBase" },
		{ "ModuleRelativePath", "Public/CPP_ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ItemBase, Description), METADATA_PARAMS(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CPP_ItemBase" },
		{ "ModuleRelativePath", "Public/CPP_ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ItemBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_id_MetaData[] = {
		{ "Category", "CPP_ItemBase" },
		{ "ModuleRelativePath", "Public/CPP_ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ItemBase, id), METADATA_PARAMS(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CPP_ItemBase" },
		{ "ModuleRelativePath", "Public/CPP_ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ItemBase, Name), METADATA_PARAMS(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ItemBase_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ItemBase_Statics::ClassParams = {
		&ACPP_ItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_ItemBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACPP_ItemBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ItemBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPP_ItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_ItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_ItemBase, 1772077514);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<ACPP_ItemBase>()
	{
		return ACPP_ItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_ItemBase(Z_Construct_UClass_ACPP_ItemBase, &ACPP_ItemBase::StaticClass, TEXT("/Script/InventorySystem"), TEXT("ACPP_ItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
