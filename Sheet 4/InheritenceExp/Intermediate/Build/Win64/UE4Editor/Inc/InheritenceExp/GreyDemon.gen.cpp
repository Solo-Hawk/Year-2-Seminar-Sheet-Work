// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InheritenceExp/GreyDemon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreyDemon() {}
// Cross Module References
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AGreyDemon_NoRegister();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AGreyDemon();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ABaseMonster();
	UPackage* Z_Construct_UPackage__Script_InheritenceExp();
// End Cross Module References
	void AGreyDemon::StaticRegisterNativesAGreyDemon()
	{
	}
	UClass* Z_Construct_UClass_AGreyDemon_NoRegister()
	{
		return AGreyDemon::StaticClass();
	}
	struct Z_Construct_UClass_AGreyDemon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreyDemon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_InheritenceExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreyDemon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GreyDemon.h" },
		{ "ModuleRelativePath", "GreyDemon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreyDemon_Statics::NewProp_RangeDamage_MetaData[] = {
		{ "Category", "GreyDemon" },
		{ "ModuleRelativePath", "GreyDemon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGreyDemon_Statics::NewProp_RangeDamage = { "RangeDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGreyDemon, RangeDamage), METADATA_PARAMS(Z_Construct_UClass_AGreyDemon_Statics::NewProp_RangeDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGreyDemon_Statics::NewProp_RangeDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreyDemon_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "GreyDemon" },
		{ "ModuleRelativePath", "GreyDemon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGreyDemon_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGreyDemon, Range), METADATA_PARAMS(Z_Construct_UClass_AGreyDemon_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGreyDemon_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGreyDemon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreyDemon_Statics::NewProp_RangeDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreyDemon_Statics::NewProp_Range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreyDemon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreyDemon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGreyDemon_Statics::ClassParams = {
		&AGreyDemon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGreyDemon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGreyDemon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGreyDemon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGreyDemon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGreyDemon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGreyDemon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGreyDemon, 1171994439);
	template<> INHERITENCEEXP_API UClass* StaticClass<AGreyDemon>()
	{
		return AGreyDemon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGreyDemon(Z_Construct_UClass_AGreyDemon, &AGreyDemon::StaticClass, TEXT("/Script/InheritenceExp"), TEXT("AGreyDemon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGreyDemon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
