// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InheritenceExp/RedDemon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedDemon() {}
// Cross Module References
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ARedDemon_NoRegister();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ARedDemon();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ABaseMonster();
	UPackage* Z_Construct_UPackage__Script_InheritenceExp();
// End Cross Module References
	void ARedDemon::StaticRegisterNativesARedDemon()
	{
	}
	UClass* Z_Construct_UClass_ARedDemon_NoRegister()
	{
		return ARedDemon::StaticClass();
	}
	struct Z_Construct_UClass_ARedDemon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARedDemon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_InheritenceExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARedDemon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RedDemon.h" },
		{ "ModuleRelativePath", "RedDemon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARedDemon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedDemon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARedDemon_Statics::ClassParams = {
		&ARedDemon::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARedDemon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARedDemon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARedDemon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARedDemon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedDemon, 3556029045);
	template<> INHERITENCEEXP_API UClass* StaticClass<ARedDemon>()
	{
		return ARedDemon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedDemon(Z_Construct_UClass_ARedDemon, &ARedDemon::StaticClass, TEXT("/Script/InheritenceExp"), TEXT("ARedDemon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedDemon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
