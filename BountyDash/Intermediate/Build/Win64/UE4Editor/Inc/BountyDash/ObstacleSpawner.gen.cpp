// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/ObstacleSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleSpawner() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacleSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
// End Cross Module References
	void AObstacleSpawner::StaticRegisterNativesAObstacleSpawner()
	{
	}
	UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister()
	{
		return AObstacleSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AObstacleSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnTargets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstaclesToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObstaclesToSpawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObstaclesToSpawn_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacleSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstacleSpawner.h" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene = { UE4CodeGen_Private::EPropertyClass::Object, "Scene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AObstacleSpawner, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AObstacleSpawner, SpawnTimer), METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AObstacleSpawner, SpawnTargets), METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn = { UE4CodeGen_Private::EPropertyClass::Array, "ObstaclesToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AObstacleSpawner, ObstaclesToSpawn), METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ObstaclesToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AObstacle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacleSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstacleSpawner_Statics::ClassParams = {
		&AObstacleSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacleSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstacleSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstacleSpawner, 1726957144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstacleSpawner(Z_Construct_UClass_AObstacleSpawner, &AObstacleSpawner::StaticClass, TEXT("/Script/BountyDash"), TEXT("AObstacleSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
