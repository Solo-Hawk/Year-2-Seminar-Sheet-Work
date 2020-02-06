// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/ProceduralGenerationGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralGenerationGameModeBase() {}
// Cross Module References
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_AProceduralGenerationGameModeBase_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_AProceduralGenerationGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	void AProceduralGenerationGameModeBase::StaticRegisterNativesAProceduralGenerationGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProceduralGenerationGameModeBase_NoRegister()
	{
		return AProceduralGenerationGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProceduralGenerationGameModeBase.h" },
		{ "ModuleRelativePath", "ProceduralGenerationGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralGenerationGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::ClassParams = {
		&AProceduralGenerationGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralGenerationGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralGenerationGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralGenerationGameModeBase, 3121956571);
	template<> PROCEDURALGENERATION_API UClass* StaticClass<AProceduralGenerationGameModeBase>()
	{
		return AProceduralGenerationGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralGenerationGameModeBase(Z_Construct_UClass_AProceduralGenerationGameModeBase, &AProceduralGenerationGameModeBase::StaticClass, TEXT("/Script/ProceduralGeneration"), TEXT("AProceduralGenerationGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralGenerationGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
