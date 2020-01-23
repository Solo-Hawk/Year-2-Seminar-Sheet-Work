// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InheritenceExp/MyBaseMonster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBaseMonster() {}
// Cross Module References
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AMyBaseMonster_NoRegister();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AMyBaseMonster();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_ABaseMonster();
	UPackage* Z_Construct_UPackage__Script_InheritenceExp();
// End Cross Module References
	void AMyBaseMonster::StaticRegisterNativesAMyBaseMonster()
	{
	}
	UClass* Z_Construct_UClass_AMyBaseMonster_NoRegister()
	{
		return AMyBaseMonster::StaticClass();
	}
	struct Z_Construct_UClass_AMyBaseMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBaseMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_InheritenceExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBaseMonster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBaseMonster.h" },
		{ "ModuleRelativePath", "MyBaseMonster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBaseMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBaseMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBaseMonster_Statics::ClassParams = {
		&AMyBaseMonster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyBaseMonster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyBaseMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyBaseMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyBaseMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyBaseMonster, 3853971826);
	template<> INHERITENCEEXP_API UClass* StaticClass<AMyBaseMonster>()
	{
		return AMyBaseMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyBaseMonster(Z_Construct_UClass_AMyBaseMonster, &AMyBaseMonster::StaticClass, TEXT("/Script/InheritenceExp"), TEXT("AMyBaseMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBaseMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
