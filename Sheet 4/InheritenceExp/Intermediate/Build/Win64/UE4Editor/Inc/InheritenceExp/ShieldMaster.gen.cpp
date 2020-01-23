// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InheritenceExp/ShieldMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldMaster() {}
// Cross Module References
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AShieldMaster_NoRegister();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AShieldMaster();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ABaseMonster();
	UPackage* Z_Construct_UPackage__Script_InheritenceExp();
// End Cross Module References
	void AShieldMaster::StaticRegisterNativesAShieldMaster()
	{
	}
	UClass* Z_Construct_UClass_AShieldMaster_NoRegister()
	{
		return AShieldMaster::StaticClass();
	}
	struct Z_Construct_UClass_AShieldMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShieldMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_InheritenceExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldMaster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ShieldMaster.h" },
		{ "ModuleRelativePath", "ShieldMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShieldMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShieldMaster_Statics::ClassParams = {
		&AShieldMaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShieldMaster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AShieldMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShieldMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShieldMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShieldMaster, 2888111472);
	template<> INHERITENCEEXP_API UClass* StaticClass<AShieldMaster>()
	{
		return AShieldMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShieldMaster(Z_Construct_UClass_AShieldMaster, &AShieldMaster::StaticClass, TEXT("/Script/InheritenceExp"), TEXT("AShieldMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
