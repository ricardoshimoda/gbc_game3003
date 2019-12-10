// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/TPSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSGameMode() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSGameMode_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_ATPSGameMode_SpawnNewBot();
// End Cross Module References
	static FName NAME_ATPSGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ATPSGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATPSGameMode_SpawnNewBot),NULL);
	}
	void ATPSGameMode::StaticRegisterNativesATPSGameMode()
	{
		UClass* Class = ATPSGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScoreMultiplier", &ATPSGameMode::execGetScoreMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics
	{
		struct TPSGameMode_eventGetScoreMultiplier_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSGameMode_eventGetScoreMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSGameMode, nullptr, "GetScoreMultiplier", sizeof(TPSGameMode_eventGetScoreMultiplier_Parms), Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSGameMode, nullptr, "SpawnNewBot", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSGameMode_SpawnNewBot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATPSGameMode_NoRegister()
	{
		return ATPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreMultiplierForScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scoreMultiplierForScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waveNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_waveNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeBetweenWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeBetweenWaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSGameMode_GetScoreMultiplier, "GetScoreMultiplier" }, // 3946515211
		{ &Z_Construct_UFunction_ATPSGameMode_SpawnNewBot, "SpawnNewBot" }, // 2647042253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TPSGameMode.h" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "TPSGameMode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSGameMode_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSGameMode, playerHealth), METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_playerHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_playerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::NewProp_gameResults_MetaData[] = {
		{ "Category", "TPSGameMode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATPSGameMode_Statics::NewProp_gameResults = { "gameResults", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSGameMode, gameResults), METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_gameResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_gameResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::NewProp_scoreMultiplierForScreen_MetaData[] = {
		{ "Category", "TPSGameMode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATPSGameMode_Statics::NewProp_scoreMultiplierForScreen = { "scoreMultiplierForScreen", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSGameMode, scoreMultiplierForScreen), METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_scoreMultiplierForScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_scoreMultiplierForScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::NewProp_score_MetaData[] = {
		{ "Category", "TPSGameMode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATPSGameMode_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSGameMode, score), METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_score_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::NewProp_waveNumber_MetaData[] = {
		{ "Category", "TPSGameMode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATPSGameMode_Statics::NewProp_waveNumber = { "waveNumber", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSGameMode, waveNumber), METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_waveNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_waveNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::NewProp_timeBetweenWaves_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSGameMode_Statics::NewProp_timeBetweenWaves = { "timeBetweenWaves", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSGameMode, timeBetweenWaves), METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_timeBetweenWaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::NewProp_timeBetweenWaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSGameMode_Statics::NewProp_playerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSGameMode_Statics::NewProp_gameResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSGameMode_Statics::NewProp_scoreMultiplierForScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSGameMode_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSGameMode_Statics::NewProp_waveNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSGameMode_Statics::NewProp_timeBetweenWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSGameMode_Statics::ClassParams = {
		&ATPSGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSGameMode, 4123081411);
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<ATPSGameMode>()
	{
		return ATPSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSGameMode(Z_Construct_UClass_ATPSGameMode, &ATPSGameMode::StaticClass, TEXT("/Script/ThirdPersonShooter"), TEXT("ATPSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
