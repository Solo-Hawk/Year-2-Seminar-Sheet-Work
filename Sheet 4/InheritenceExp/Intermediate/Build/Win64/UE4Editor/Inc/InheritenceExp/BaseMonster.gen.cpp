// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InheritenceExp/BaseMonster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMonster() {}
// Cross Module References
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ABaseMonster_NoRegister();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ABaseMonster();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InheritenceExp();
// End Cross Module References
	void ABaseMonster::StaticRegisterNativesABaseMonster()
	{
	}
	UClass* Z_Construct_UClass_ABaseMonster_NoRegister()
	{
		return ABaseMonster::StaticClass();
	}
	struct Z_Construct_UClass_ABaseMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InheritenceExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseMonster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseMonster.h" },
		{ "ModuleRelativePath", "BaseMonster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseMonster_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "BaseMonster" },
		{ "ModuleRelativePath", "BaseMonster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseMonster_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseMonster, Damage), METADATA_PARAMS(Z_Construct_UClass_ABaseMonster_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseMonster_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseMonster_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "BaseMonster" },
		{ "ModuleRelativePath", "BaseMonster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseMonster_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseMonster, Health), METADATA_PARAMS(Z_Construct_UClass_ABaseMonster_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseMonster_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseMonster_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BaseMonster" },
		{ "ModuleRelativePath", "BaseMonster.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseMonster_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseMonster, Name), METADATA_PARAMS(Z_Construct_UClass_ABaseMonster_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseMonster_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseMonster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseMonster_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseMonster_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseMonster_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseMonster_Statics::ClassParams = {
		&ABaseMonster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseMonster_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABaseMonster_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseMonster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseMonster, 712616150);
	template<> INHERITENCEEXP_API UClass* StaticClass<ABaseMonster>()
	{
		return ABaseMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseMonster(Z_Construct_UClass_ABaseMonster, &ABaseMonster::StaticClass, TEXT("/Script/InheritenceExp"), TEXT("ABaseMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
