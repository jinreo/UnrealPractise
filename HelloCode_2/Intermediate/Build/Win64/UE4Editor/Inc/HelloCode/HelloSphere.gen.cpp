// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloCode/HelloSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloSphere() {}
// Cross Module References
	HELLOCODE_API UClass* Z_Construct_UClass_AHelloSphere_NoRegister();
	HELLOCODE_API UClass* Z_Construct_UClass_AHelloSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HelloCode();
// End Cross Module References
	void AHelloSphere::StaticRegisterNativesAHelloSphere()
	{
	}
	UClass* Z_Construct_UClass_AHelloSphere_NoRegister()
	{
		return AHelloSphere::StaticClass();
	}
	struct Z_Construct_UClass_AHelloSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelloSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelloSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HelloSphere.h" },
		{ "ModuleRelativePath", "HelloSphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelloSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelloSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelloSphere_Statics::ClassParams = {
		&AHelloSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHelloSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHelloSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelloSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelloSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelloSphere, 230189204);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelloSphere(Z_Construct_UClass_AHelloSphere, &AHelloSphere::StaticClass, TEXT("/Script/HelloCode"), TEXT("AHelloSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
