// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/Obstacle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_AObstacle_CustomOnActorOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_AObstacle_CustomOnActorEndOverlap = FName(TEXT("CustomOnActorEndOverlap"));
	void AObstacle::CustomOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
	{
		Obstacle_eventCustomOnActorEndOverlap_Parms Parms;
		Parms.OverlappedActor=OverlappedActor;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AObstacle_CustomOnActorEndOverlap),&Parms);
	}
	static FName NAME_AObstacle_CustomOnActorOverlap = FName(TEXT("CustomOnActorOverlap"));
	void AObstacle::CustomOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
	{
		Obstacle_eventCustomOnActorOverlap_Parms Parms;
		Parms.OverlappedActor=OverlappedActor;
		Parms.otherActor=otherActor;
		ProcessEvent(FindFunctionChecked(NAME_AObstacle_CustomOnActorOverlap),&Parms);
	}
	void AObstacle::StaticRegisterNativesAObstacle()
	{
		UClass* Class = AObstacle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomOnActorEndOverlap", &AObstacle::execCustomOnActorEndOverlap },
			{ "CustomOnActorOverlap", &AObstacle::execCustomOnActorOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Obstacle_eventCustomOnActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Obstacle_eventCustomOnActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacle, "CustomOnActorEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(Obstacle_eventCustomOnActorEndOverlap_Parms), Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Obstacle_eventCustomOnActorOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Obstacle_eventCustomOnActorOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacle, "CustomOnActorOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(Obstacle_eventCustomOnActorOverlap_Parms), Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObstacle_CustomOnActorOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObstacle_CustomOnActorOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObstacle_NoRegister()
	{
		return AObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObstacle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObstacle_CustomOnActorEndOverlap, "CustomOnActorEndOverlap" }, // 2645229732
		{ &Z_Construct_UFunction_AObstacle_CustomOnActorOverlap, "CustomOnActorOverlap" }, // 148202926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle.h" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AObstacle, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_Collider = { UE4CodeGen_Private::EPropertyClass::Object, "Collider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AObstacle, Collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstacle_Statics::NewProp_Collider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_Collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
		&AObstacle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AObstacle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstacle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstacle, 3192087930);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstacle(Z_Construct_UClass_AObstacle, &AObstacle::StaticClass, TEXT("/Script/BountyDash"), TEXT("AObstacle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
