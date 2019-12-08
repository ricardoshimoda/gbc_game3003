// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API ATPSGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	FTimerHandle TimerHandle_BotSpawner;
	FTimerHandle TimerHandle_WaveStarter;
	UPROPERTY(EditDefaultsOnly, Category = "Game Mode")
	float timeBetweenWaves;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int waveNumber = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int score = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int scoreMultiplierForScreen = 1;


	float previousKill = -1.0f;
	float multiplierLimit = 10.0f;
	int* scoreMultiplier = new int[4]{1,2,4,8};
	int currentScoreMultiplier = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString gameResults = "";
	int kills = 0;
	int numberOfBotsToSpawn;
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Mode")
	void SpawnNewBot();
	void SpawnBotTimerElapsed();
	void StartWave();
	void EndWave();
	void PrepareForNextWave();
	void CheckWaveState();
public:
	ATPSGameMode();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float playerHealth;

	virtual void StartPlay() override;
	virtual void Tick(float DeltaTime) override;
	void AddScore(int scoreToAdd);
	UFUNCTION()
	int GetScoreMultiplier();
	void IncreaseScoreMultiplier();
	void ResetScoreMultiplier();
	void SetFinalString();

};
