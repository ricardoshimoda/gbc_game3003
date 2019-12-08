// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_TPSGameMode_generated_h
#error "TPSGameMode.generated.h already included, missing '#pragma once' in TPSGameMode.h"
#endif
#define THIRDPERSONSHOOTER_TPSGameMode_generated_h

#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScoreMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScoreMultiplier(); \
		P_NATIVE_END; \
	}


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScoreMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScoreMultiplier(); \
		P_NATIVE_END; \
	}


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_EVENT_PARMS
#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_CALLBACK_WRAPPERS
#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSGameMode(); \
	friend struct Z_Construct_UClass_ATPSGameMode_Statics; \
public: \
	DECLARE_CLASS(ATPSGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSGameMode)


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATPSGameMode(); \
	friend struct Z_Construct_UClass_ATPSGameMode_Statics; \
public: \
	DECLARE_CLASS(ATPSGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSGameMode)


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSGameMode(ATPSGameMode&&); \
	NO_API ATPSGameMode(const ATPSGameMode&); \
public:


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSGameMode(ATPSGameMode&&); \
	NO_API ATPSGameMode(const ATPSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSGameMode)


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timeBetweenWaves() { return STRUCT_OFFSET(ATPSGameMode, timeBetweenWaves); } \
	FORCEINLINE static uint32 __PPO__waveNumber() { return STRUCT_OFFSET(ATPSGameMode, waveNumber); } \
	FORCEINLINE static uint32 __PPO__score() { return STRUCT_OFFSET(ATPSGameMode, score); } \
	FORCEINLINE static uint32 __PPO__scoreMultiplierForScreen() { return STRUCT_OFFSET(ATPSGameMode, scoreMultiplierForScreen); } \
	FORCEINLINE static uint32 __PPO__gameResults() { return STRUCT_OFFSET(ATPSGameMode, gameResults); }


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_12_PROLOG \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_EVENT_PARMS


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_RPC_WRAPPERS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_CALLBACK_WRAPPERS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_INCLASS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_CALLBACK_WRAPPERS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
