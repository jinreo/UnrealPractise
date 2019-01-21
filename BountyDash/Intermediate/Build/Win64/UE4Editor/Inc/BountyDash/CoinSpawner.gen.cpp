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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ARockPool_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoinTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinSetTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoinSetTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSetCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinSetCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSetCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSetCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnTransforms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoinObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RockPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RockPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval = { UE4CodeGen_Private::EPropertyClass::Float, "MovementTimeInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, MovementTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval = { UE4CodeGen_Private::EPropertyClass::Float, "CoinTimeInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, CoinTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval = { UE4CodeGen_Private::EPropertyClass::Float, "CoinSetTimeInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, CoinSetTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins = { UE4CodeGen_Private::EPropertyClass::Int, "MinSetCoins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, MinSetCoins), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSetCoins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, MaxSetCoins), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_MetaData[] = {
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, SpawnTransforms), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject = { UE4CodeGen_Private::EPropertyClass::Class, "CoinObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, CoinObject), Z_Construct_UClass_ACoin_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_RockPool_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_RockPool = { UE4CodeGen_Private::EPropertyClass::Object, "RockPool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACoinSpawner, RockPool), Z_Construct_UClass_ARockPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_RockPool_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_RockPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_RockPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoinSpawner_Statics::ClassParams = {
		&ACoinSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACoinSpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACoinSpawner, 2075889040);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoinSpawner(Z_Construct_UClass_ACoinSpawner, &ACoinSpawner::StaticClass, TEXT("/Script/BountyDash"), TEXT("ACoinSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
