// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ButtonExp/ButtonExpGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonExpGameModeBase() {}
// Cross Module References
	BUTTONEXP_API UClass* Z_Construct_UClass_AButtonExpGameModeBase_NoRegister();
	BUTTONEXP_API UClass* Z_Construct_UClass_AButtonExpGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ButtonExp();
// End Cross Module References
	void AButtonExpGameModeBase::StaticRegisterNativesAButtonExpGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AButtonExpGameModeBase_NoRegister()
	{
		return AButtonExpGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AButtonExpGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AButtonExpGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ButtonExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonExpGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ButtonExpGameModeBase.h" },
		{ "ModuleRelativePath", "ButtonExpGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AButtonExpGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AButtonExpGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AButtonExpGameModeBase_Statics::ClassParams = {
		&AButtonExpGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AButtonExpGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AButtonExpGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AButtonExpGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AButtonExpGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AButtonExpGameModeBase, 2772900910);
	template<> BUTTONEXP_API UClass* StaticClass<AButtonExpGameModeBase>()
	{
		return AButtonExpGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AButtonExpGameModeBase(Z_Construct_UClass_AButtonExpGameModeBase, &AButtonExpGameModeBase::StaticClass, TEXT("/Script/ButtonExp"), TEXT("AButtonExpGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AButtonExpGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
