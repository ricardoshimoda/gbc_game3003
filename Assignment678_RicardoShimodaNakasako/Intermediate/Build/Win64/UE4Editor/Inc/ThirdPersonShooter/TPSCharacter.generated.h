// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef THIRDPERSONSHOOTER_TPSCharacter_generated_h
#error "TPSCharacter.generated.h already included, missing '#pragma once' in TPSCharacter.h"
#endif
#define THIRDPERSONSHOOTER_TPSCharacter_generated_h

#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHealth); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_DeltaHealth,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeCover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeCover(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndZoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartZoom(); \
		P_NATIVE_END; \
	}


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHealth); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_DeltaHealth,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeCover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeCover(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndZoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartZoom(); \
		P_NATIVE_END; \
	}


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public:


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSCharacter)


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(ATPSCharacter, bIsAiming); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ATPSCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponSocketName() { return STRUCT_OFFSET(ATPSCharacter, WeaponSocketName); } \
	FORCEINLINE static uint32 __PPO__overlappingCoverVolume() { return STRUCT_OFFSET(ATPSCharacter, overlappingCoverVolume); } \
	FORCEINLINE static uint32 __PPO__bInCover() { return STRUCT_OFFSET(ATPSCharacter, bInCover); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ATPSCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__bDead() { return STRUCT_OFFSET(ATPSCharacter, bDead); } \
	FORCEINLINE static uint32 __PPO__deathMaterial() { return STRUCT_OFFSET(ATPSCharacter, deathMaterial); }


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_12_PROLOG
#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_RPC_WRAPPERS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_INCLASS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment678_RicardoShimodaNakasako_Source_ThirdPersonShooter_TPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
