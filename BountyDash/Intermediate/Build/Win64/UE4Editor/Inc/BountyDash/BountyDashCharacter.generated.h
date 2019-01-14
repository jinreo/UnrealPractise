// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOUNTYDASH_BountyDashCharacter_generated_h
#error "BountyDashCharacter.generated.h already included, missing '#pragma once' in BountyDashCharacter.h"
#endif
#define BOUNTYDASH_BountyDashCharacter_generated_h

#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnComponentEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnComponentEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnComponentOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnComponentOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_otherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnComponentEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnComponentEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnComponentOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnComponentOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_otherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashCharacter(); \
	friend struct Z_Construct_UClass_ABountyDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ABountyDashCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashCharacter)


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashCharacter(); \
	friend struct Z_Construct_UClass_ABountyDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ABountyDashCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashCharacter)


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashCharacter(ABountyDashCharacter&&); \
	NO_API ABountyDashCharacter(const ABountyDashCharacter&); \
public:


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashCharacter(ABountyDashCharacter&&); \
	NO_API ABountyDashCharacter(const ABountyDashCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashCharacter)


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABountyDashCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCam() { return STRUCT_OFFSET(ABountyDashCharacter, FollowCam); } \
	FORCEINLINE static uint32 __PPO__Scroe() { return STRUCT_OFFSET(ABountyDashCharacter, Scroe); }


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_10_PROLOG
#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_RPC_WRAPPERS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_INCLASS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_INCLASS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Source_BountyDash_BountyDashCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
