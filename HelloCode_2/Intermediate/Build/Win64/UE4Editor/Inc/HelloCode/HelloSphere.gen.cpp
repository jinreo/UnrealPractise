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
	HELLOCODE_API UFunction* Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HELLOCODE_API UFunction* Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap();
// End Cross Module References
	void AHelloSphere::StaticRegisterNativesAHelloSphere()
	{
		UClass* Class = AHelloSphere::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyOnBeginOverlap", &AHelloSphere::execMyOnBeginOverlap },
			{ "MyOnEndOverlap", &AHelloSphere::execMyOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics
	{
		struct HelloSphere_eventMyOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* otherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HelloSphere_eventMyOnBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HelloSphere_eventMyOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HelloSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelloSphere, "MyOnBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(HelloSphere_eventMyOnBeginOverlap_Parms), Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics
	{
		struct HelloSphere_eventMyOnEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* otherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HelloSphere_eventMyOnEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HelloSphere_eventMyOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HelloSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelloSphere, "MyOnEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(HelloSphere_eventMyOnEndOverlap_Parms), Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHelloSphere_NoRegister()
	{
		return AHelloSphere::StaticClass();
	}
	struct Z_Construct_UClass_AHelloSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AHelloSphere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHelloSphere_MyOnBeginOverlap, "MyOnBeginOverlap" }, // 833874744
		{ &Z_Construct_UFunction_AHelloSphere_MyOnEndOverlap, "MyOnEndOverlap" }, // 1852831755
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
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AHelloSphere, 3702741727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelloSphere(Z_Construct_UClass_AHelloSphere, &AHelloSphere::StaticClass, TEXT("/Script/HelloCode"), TEXT("AHelloSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
