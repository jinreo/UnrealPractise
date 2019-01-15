// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/BountyDashGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDashGameMode() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashGameMode_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed();
	BOUNTYDASH_API UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed();
// End Cross Module References
	void ABountyDashGameMode::StaticRegisterNativesABountyDashGameMode()
	{
		UClass* Class = ABountyDashGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameLevel", &ABountyDashGameMode::execGetGameLevel },
			{ "GetGameSpeed", &ABountyDashGameMode::execGetGameSpeed },
			{ "GetInvGameSpeed", &ABountyDashGameMode::execGetInvGameSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics
	{
		struct BountyDashGameMode_eventGetGameLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventGetGameLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetGameLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetGameLevel_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics
	{
		struct BountyDashGameMode_eventGetGameSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventGetGameSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetGameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetGameSpeed_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics
	{
		struct BountyDashGameMode_eventGetInvGameSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BountyDashGameMode_eventGetInvGameSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, "GetInvGameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BountyDashGameMode_eventGetInvGameSpeed_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABountyDashGameMode_NoRegister()
	{
		return ABountyDashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numCoinsForSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numCoinsForSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABountyDashGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel, "GetGameLevel" }, // 214421551
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed, "GetGameSpeed" }, // 3080274666
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed, "GetInvGameSpeed" }, // 989465032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BountyDashGameMode.h" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDashGameMode" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease = { UE4CodeGen_Private::EPropertyClass::Float, "gameSpeedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDashGameMode" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease = { UE4CodeGen_Private::EPropertyClass::Int, "numCoinsForSpeedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, numCoinsForSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel = { UE4CodeGen_Private::EPropertyClass::Int, "gameLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameLevel), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "gameSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ABountyDashGameMode, gameSpeed), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDashGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDashGameMode_Statics::ClassParams = {
		&ABountyDashGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDashGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDashGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDashGameMode, 1554750738);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDashGameMode(Z_Construct_UClass_ABountyDashGameMode, &ABountyDashGameMode::StaticClass, TEXT("/Script/BountyDash"), TEXT("ABountyDashGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDashGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
