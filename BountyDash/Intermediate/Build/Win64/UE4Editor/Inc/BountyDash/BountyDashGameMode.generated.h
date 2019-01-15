// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_BountyDashGameMode_generated_h
#error "BountyDashGameMode.generated.h already included, missing '#pragma once' in BountyDashGameMode.h"
#endif
#define BOUNTYDASH_BountyDashGameMode_generated_h

#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGameLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGameSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInvGameSpeed(); \
		P_NATIVE_END; \
	}


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGameLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGameSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvGameSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInvGameSpeed(); \
		P_NATIVE_END; \
	}


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashGameMode(); \
	friend struct Z_Construct_UClass_ABountyDashGameMode_Statics; \
public: \
	DECLARE_CLASS(ABountyDashGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashGameMode)


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashGameMode(); \
	friend struct Z_Construct_UClass_ABountyDashGameMode_Statics; \
public: \
	DECLARE_CLASS(ABountyDashGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashGameMode)


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashGameMode(ABountyDashGameMode&&); \
	NO_API ABountyDashGameMode(const ABountyDashGameMode&); \
public:


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashGameMode(ABountyDashGameMode&&); \
	NO_API ABountyDashGameMode(const ABountyDashGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashGameMode)


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__gameSpeed() { return STRUCT_OFFSET(ABountyDashGameMode, gameSpeed); } \
	FORCEINLINE static uint32 __PPO__gameLevel() { return STRUCT_OFFSET(ABountyDashGameMode, gameLevel); } \
	FORCEINLINE static uint32 __PPO__numCoinsForSpeedIncrease() { return STRUCT_OFFSET(ABountyDashGameMode, numCoinsForSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO__gameSpeedIncrease() { return STRUCT_OFFSET(ABountyDashGameMode, gameSpeedIncrease); }


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_12_PROLOG
#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_INCLASS \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Source_BountyDash_BountyDashGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_INCLASS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_BountyDashGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Source_BountyDash_BountyDashGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
