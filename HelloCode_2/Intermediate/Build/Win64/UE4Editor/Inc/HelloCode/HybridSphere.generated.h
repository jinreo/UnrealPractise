// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HELLOCODE_HybridSphere_generated_h
#error "HybridSphere.generated.h already included, missing '#pragma once' in HybridSphere.h"
#endif
#define HELLOCODE_HybridSphere_generated_h

#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_RPC_WRAPPERS \
	virtual void MyOnEndOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor); \
	virtual void MyOnBeginOverlap_Implementation(AActor* OverlappedActor, AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnEndOverlap_Implementation(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnBeginOverlap_Implementation(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnEndOverlap_Implementation(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnBeginOverlap_Implementation(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_EVENT_PARMS \
	struct HybridSphere_eventMyOnBeginOverlap_Parms \
	{ \
		AActor* OverlappedActor; \
		AActor* OtherActor; \
	}; \
	struct HybridSphere_eventMyOnEndOverlap_Parms \
	{ \
		AActor* OverlappedActor; \
		AActor* OtherActor; \
	};


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_CALLBACK_WRAPPERS
#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHybridSphere(); \
	friend struct Z_Construct_UClass_AHybridSphere_Statics; \
public: \
	DECLARE_CLASS(AHybridSphere, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelloCode"), NO_API) \
	DECLARE_SERIALIZER(AHybridSphere)


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHybridSphere(); \
	friend struct Z_Construct_UClass_AHybridSphere_Statics; \
public: \
	DECLARE_CLASS(AHybridSphere, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelloCode"), NO_API) \
	DECLARE_SERIALIZER(AHybridSphere)


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHybridSphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHybridSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHybridSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHybridSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHybridSphere(AHybridSphere&&); \
	NO_API AHybridSphere(const AHybridSphere&); \
public:


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHybridSphere(AHybridSphere&&); \
	NO_API AHybridSphere(const AHybridSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHybridSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHybridSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHybridSphere)


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(AHybridSphere, Sphere); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AHybridSphere, Mesh); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AHybridSphere, Text); } \
	FORCEINLINE static uint32 __PPO__Particles() { return STRUCT_OFFSET(AHybridSphere, Particles); }


#define HelloCode_2_Source_HelloCode_HybridSphere_h_9_PROLOG \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_EVENT_PARMS


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_RPC_WRAPPERS \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_CALLBACK_WRAPPERS \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_INCLASS \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HelloCode_2_Source_HelloCode_HybridSphere_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_CALLBACK_WRAPPERS \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_INCLASS_NO_PURE_DECLS \
	HelloCode_2_Source_HelloCode_HybridSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HelloCode_2_Source_HelloCode_HybridSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
