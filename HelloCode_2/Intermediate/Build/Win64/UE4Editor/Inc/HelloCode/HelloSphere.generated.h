// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HELLOCODE_HelloSphere_generated_h
#error "HelloSphere.generated.h already included, missing '#pragma once' in HelloSphere.h"
#endif
#define HELLOCODE_HelloSphere_generated_h

#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnEndOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnBeginOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	}


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnEndOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyOnBeginOverlap(Z_Param_OverlappedActor,Z_Param_otherActor); \
		P_NATIVE_END; \
	}


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHelloSphere(); \
	friend struct Z_Construct_UClass_AHelloSphere_Statics; \
public: \
	DECLARE_CLASS(AHelloSphere, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelloCode"), NO_API) \
	DECLARE_SERIALIZER(AHelloSphere)


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHelloSphere(); \
	friend struct Z_Construct_UClass_AHelloSphere_Statics; \
public: \
	DECLARE_CLASS(AHelloSphere, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelloCode"), NO_API) \
	DECLARE_SERIALIZER(AHelloSphere)


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHelloSphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHelloSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHelloSphere(AHelloSphere&&); \
	NO_API AHelloSphere(const AHelloSphere&); \
public:


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHelloSphere(AHelloSphere&&); \
	NO_API AHelloSphere(const AHelloSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelloSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelloSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHelloSphere)


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_PRIVATE_PROPERTY_OFFSET
#define HelloCode_2_Source_HelloCode_HelloSphere_h_9_PROLOG
#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_RPC_WRAPPERS \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_INCLASS \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HelloCode_2_Source_HelloCode_HelloSphere_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_INCLASS_NO_PURE_DECLS \
	HelloCode_2_Source_HelloCode_HelloSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HelloCode_2_Source_HelloCode_HelloSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
