// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructCppExp/StructCppExpGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructCppExpGameModeBase() {}
// Cross Module References
	STRUCTCPPEXP_API UClass* Z_Construct_UClass_AStructCppExpGameModeBase_NoRegister();
	STRUCTCPPEXP_API UClass* Z_Construct_UClass_AStructCppExpGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StructCppExp();
// End Cross Module References
	void AStructCppExpGameModeBase::StaticRegisterNativesAStructCppExpGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStructCppExpGameModeBase_NoRegister()
	{
		return AStructCppExpGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStructCppExpGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStructCppExpGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StructCppExp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStructCppExpGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StructCppExpGameModeBase.h" },
		{ "ModuleRelativePath", "StructCppExpGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStructCppExpGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStructCppExpGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStructCppExpGameModeBase_Statics::ClassParams = {
		&AStructCppExpGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStructCppExpGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStructCppExpGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStructCppExpGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStructCppExpGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStructCppExpGameModeBase, 1683200083);
	template<> STRUCTCPPEXP_API UClass* StaticClass<AStructCppExpGameModeBase>()
	{
		return AStructCppExpGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStructCppExpGameModeBase(Z_Construct_UClass_AStructCppExpGameModeBase, &AStructCppExpGameModeBase::StaticClass, TEXT("/Script/StructCppExp"), TEXT("AStructCppExpGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStructCppExpGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
