// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/RockPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRockPool() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ARockPool_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ARockPool();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
// End Cross Module References
	void ARockPool::StaticRegisterNativesARockPool()
	{
	}
	UClass* Z_Construct_UClass_ARockPool_NoRegister()
	{
		return ARockPool::StaticClass();
	}
	struct Z_Construct_UClass_ARockPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARockPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RockPool.h" },
		{ "ModuleRelativePath", "RockPool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARockPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARockPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARockPool_Statics::ClassParams = {
		&ARockPool::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARockPool_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARockPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARockPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARockPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARockPool, 583025011);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARockPool(Z_Construct_UClass_ARockPool, &ARockPool::StaticClass, TEXT("/Script/BountyDash"), TEXT("ARockPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARockPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
