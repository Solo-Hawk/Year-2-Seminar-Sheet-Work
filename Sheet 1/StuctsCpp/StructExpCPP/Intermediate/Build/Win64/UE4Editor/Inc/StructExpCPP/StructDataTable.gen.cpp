// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructExpCPP/StructDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructDataTable() {}
// Cross Module References
	STRUCTEXPCPP_API UClass* Z_Construct_UClass_UStructDataTable_NoRegister();
	STRUCTEXPCPP_API UClass* Z_Construct_UClass_UStructDataTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StructExpCPP();
// End Cross Module References
	void UStructDataTable::StaticRegisterNativesUStructDataTable()
	{
	}
	UClass* Z_Construct_UClass_UStructDataTable_NoRegister()
	{
		return UStructDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UStructDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructExpCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructDataTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StructDataTable.h" },
		{ "ModuleRelativePath", "StructDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructDataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStructDataTable_Statics::ClassParams = {
		&UStructDataTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStructDataTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStructDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructDataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStructDataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStructDataTable, 2658468565);
	template<> STRUCTEXPCPP_API UClass* StaticClass<UStructDataTable>()
	{
		return UStructDataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStructDataTable(Z_Construct_UClass_UStructDataTable, &UStructDataTable::StaticClass, TEXT("/Script/StructExpCPP"), TEXT("UStructDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructDataTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
