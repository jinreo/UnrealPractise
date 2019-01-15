// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/Floor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloor() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_AFloor_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_AFloor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AFloor::StaticRegisterNativesAFloor()
	{
	}
	UClass* Z_Construct_UClass_AFloor_NoRegister()
	{
		return AFloor::StaticClass();
	}
	struct Z_Construct_UClass_AFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloorMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshScenes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloorMeshScenes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMeshScenes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Floor.h" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Floor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_CollisionBox = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AFloor, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::NewProp_CollisionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes_MetaData[] = {
		{ "Category", "Floor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "FloorMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000000009, 1, nullptr, STRUCT_OFFSET(AFloor, FloorMeshes), METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FloorMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes_MetaData[] = {
		{ "Category", "Floor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes = { UE4CodeGen_Private::EPropertyClass::Array, "FloorMeshScenes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000000009, 1, nullptr, STRUCT_OFFSET(AFloor, FloorMeshScenes), METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FloorMeshScenes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_CollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_FloorMeshScenes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloor_Statics::ClassParams = {
		&AFloor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFloor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloor, 3586119658);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloor(Z_Construct_UClass_AFloor, &AFloor::StaticClass, TEXT("/Script/BountyDash"), TEXT("AFloor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
