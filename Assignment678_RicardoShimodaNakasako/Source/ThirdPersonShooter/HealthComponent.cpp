// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"
#include "TPSGameMode.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


float UHealthComponent::GetHealth() const
{
	return Health;
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Health = MaxHealth;

	AActor* myOwner = GetOwner();

	if (myOwner)
	{
		myOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
	}
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bRegenerate) {
		StartRegenerationTimer += DeltaTime;
		if (StartRegenerationTimer >= RegenerationCooldown) {
			RegenerationTimer += DeltaTime;
			if (RegenerationTimer >= RegenerationRate) {
				RegenerationTimer -= RegenerationRate;
				//Health = FMath::Clamp(Health + RegenerationAmount, 0.0f, MaxHealth); 
				GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Regenerating... " + FString::SanitizeFloat(Health));
			}
		}
		Cast<ATPSGameMode>(GetWorld()->GetAuthGameMode())->playerHealth = Health;
	}
	// ...
}

void UHealthComponent::HandleTakeAnyDamage(AActor * DamagedActor, float Damage, 
	const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	if (Damage <= 0.0f)
	{
		return;
	}
	StartRegenerationTimer = 0.0f;
	RegenerationTimer = 0.0f;

	Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);
	if (Health <= 0.0f) {
		bRegenerate = false;
	}
	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Health Changed %f" + FString::SanitizeFloat(Health));
}

