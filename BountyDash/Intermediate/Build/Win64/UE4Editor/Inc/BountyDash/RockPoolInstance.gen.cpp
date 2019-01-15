// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/RockPoolInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRockPoolInstance() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_URockPoolInstance_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_URockPoolInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
// End Cross Module References
	void URockPoolInstance::StaticRegisterNativesURockPoolInstance()
	{
	}
	UClass* Z_Construct_UClass_URockPoolInstance_NoRegister()
	{
		return URockPoolInstance::StaticClass();
	}
	struct Z_Construct_UClass_URockPoolInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URockPoolInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URockPoolInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RockPoolInstance.h" },
		{ "ModuleRelativePath", "RockPoolInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URockPoolInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URockPoolInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URockPoolInstance_Statics::ClassParams = {
		&URockPoolInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URockPoolInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URockPoolInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URockPoolInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URockPoolInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URockPoolInstance, 1076478780);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URockPoolInstance(Z_Construct_UClass_URockPoolInstance, &URockPoolInstance::StaticClass, TEXT("/Script/BountyDash"), TEXT("URockPoolInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URockPoolInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
