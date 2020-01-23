// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InheritenceExp/InheritenceExpGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInheritenceExpGameModeBase() {}
// Cross Module References
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AInheritenceExpGameModeBase_NoRegister();
	INHERITENCEEXP_API UClass* Z_Construct_UClass_AInheritenceExpGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InheritenceExp();
// End Cross Module References
	void AInheritenceExpGameModeBase::StaticRegisterNativesAInheritenceExpGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AInheritenceExpGameModeBase_NoRegister()
	{
		return AInheritenceExpGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AInheritenceExpGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InheritenceExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InheritenceExpGameModeBase.h" },
		{ "ModuleRelativePath", "InheritenceExpGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInheritenceExpGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::ClassParams = {
		&AInheritenceExpGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInheritenceExpGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInheritenceExpGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInheritenceExpGameModeBase, 1623826836);
	template<> INHERITENCEEXP_API UClass* StaticClass<AInheritenceExpGameModeBase>()
	{
		return AInheritenceExpGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInheritenceExpGameModeBase(Z_Construct_UClass_AInheritenceExpGameModeBase, &AInheritenceExpGameModeBase::StaticClass, TEXT("/Script/InheritenceExp"), TEXT("AInheritenceExpGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInheritenceExpGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
