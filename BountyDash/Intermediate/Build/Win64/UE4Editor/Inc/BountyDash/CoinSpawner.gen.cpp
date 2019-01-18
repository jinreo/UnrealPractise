// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/CoinSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinSpawner() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ACoinSpawner_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ACoinSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
// End Cross Module References
	void ACoinSpawner::StaticRegisterNativesACoinSpawner()
	{
	}
	UClass* Z_Construct_UClass_ACoinSpawner_NoRegister()
	{
		return ACoinSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACoinSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinSpawner.h" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoinSpawner_Statics::ClassParams = {
		&ACoinSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoinSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoinSpawner, 2748866681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoinSpawner(Z_Construct_UClass_ACoinSpawner, &ACoinSpawner::StaticClass, TEXT("/Script/BountyDash"), TEXT("ACoinSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
