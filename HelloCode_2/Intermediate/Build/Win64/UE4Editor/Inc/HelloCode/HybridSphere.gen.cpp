// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloCode/HybridSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHybridSphere() {}
// Cross Module References
	HELLOCODE_API UClass* Z_Construct_UClass_AHybridSphere_NoRegister();
	HELLOCODE_API UClass* Z_Construct_UClass_AHybridSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HelloCode();
	HELLOCODE_API UFunction* Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HELLOCODE_API UFunction* Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_AHybridSphere_MyOnBeginOverlap = FName(TEXT("MyOnBeginOverlap"));
	void AHybridSphere::MyOnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
	{
		HybridSphere_eventMyOnBeginOverlap_Parms Parms;
		Parms.OverlappedActor=OverlappedActor;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AHybridSphere_MyOnBeginOverlap),&Parms);
	}
	static FName NAME_AHybridSphere_MyOnEndOverlap = FName(TEXT("MyOnEndOverlap"));
	void AHybridSphere::MyOnEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
	{
		HybridSphere_eventMyOnEndOverlap_Parms Parms;
		Parms.OverlappedActor=OverlappedActor;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AHybridSphere_MyOnEndOverlap),&Parms);
	}
	void AHybridSphere::StaticRegisterNativesAHybridSphere()
	{
		UClass* Class = AHybridSphere::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyOnBeginOverlap", &AHybridSphere::execMyOnBeginOverlap },
			{ "MyOnEndOverlap", &AHybridSphere::execMyOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HybridSphere_eventMyOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HybridSphere_eventMyOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHybridSphere, "MyOnBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(HybridSphere_eventMyOnBeginOverlap_Parms), Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HybridSphere_eventMyOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HybridSphere_eventMyOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHybridSphere, "MyOnEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(HybridSphere_eventMyOnEndOverlap_Parms), Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHybridSphere_NoRegister()
	{
		return AHybridSphere::StaticClass();
	}
	struct Z_Construct_UClass_AHybridSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHybridSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloCode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHybridSphere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHybridSphere_MyOnBeginOverlap, "MyOnBeginOverlap" }, // 2017093955
		{ &Z_Construct_UFunction_AHybridSphere_MyOnEndOverlap, "MyOnEndOverlap" }, // 1964625751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHybridSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HybridSphere.h" },
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHybridSphere_Statics::NewProp_Particles_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHybridSphere_Statics::NewProp_Particles = { UE4CodeGen_Private::EPropertyClass::Object, "Particles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AHybridSphere, Particles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Particles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Particles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHybridSphere_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHybridSphere_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Object, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008001d, 1, nullptr, STRUCT_OFFSET(AHybridSphere, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHybridSphere_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHybridSphere_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AHybridSphere, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHybridSphere_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HybridSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHybridSphere_Statics::NewProp_Sphere = { UE4CodeGen_Private::EPropertyClass::Object, "Sphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AHybridSphere, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Sphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHybridSphere_Statics::NewProp_Sphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHybridSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHybridSphere_Statics::NewProp_Particles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHybridSphere_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHybridSphere_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHybridSphere_Statics::NewProp_Sphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHybridSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHybridSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHybridSphere_Statics::ClassParams = {
		&AHybridSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AHybridSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHybridSphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHybridSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHybridSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHybridSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHybridSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHybridSphere, 2770844732);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHybridSphere(Z_Construct_UClass_AHybridSphere, &AHybridSphere::StaticClass, TEXT("/Script/HelloCode"), TEXT("AHybridSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHybridSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
