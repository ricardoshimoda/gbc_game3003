// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSWeapon.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TimerManager.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ThirdPersonShooter.h"
#include "TPSCharacter.h"
#include "TPSAI.h"
#include "TPSGameMode.h"
#include "Engine/Engine.h"
#include "TPSPlayer.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"

int32 DebugDrawWeapons = 0;

FAutoConsoleVariableRef CVARDrawWeapons = FAutoConsoleVariableRef(
	TEXT("TPS.DebugDrawWeapons"),
	DebugDrawWeapons,
	TEXT("Draw debug weapon line trace"),
	ECVF_Cheat);

// Sets default values
ATPSWeapon::ATPSWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = (USceneComponent*)MeshComp;
	TrailEffectParam = "BeamEnd";

	FireSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Firing Sound Component"));
	FireSound->SetActive(false);

}

// Called when the game starts or when spawned
void ATPSWeapon::BeginPlay()
{
	Super::BeginPlay();
	//MuzzleSocketName = "Muzzle";
}

// Called every frame
void ATPSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATPSWeapon::StartFire()
{
	GetWorldTimerManager().SetTimer(BulletTimer, this, &ATPSWeapon::Fire, Rate, true, 0.0f);
}

void ATPSWeapon::EndFire()
{
	GetWorldTimerManager().ClearTimer(BulletTimer);
}

void ATPSWeapon::Fire()
{
	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		// Checks if owner is still alive
		ATPSCharacter* characterOwner = Cast<ATPSCharacter>(GetOwner());
		if (characterOwner && characterOwner->IsDead()) {
			// Ceases firing when the owner is deceased
			EndFire();
			return;
		}

		FVector EyeLoc;
		FRotator EyeRot;
		MyOwner->GetActorEyesViewPoint(EyeLoc, EyeRot);

		FVector CorrectAim = EyeRot.Vector();
		/*
		 * Right here we use the precision
		 */
		FVector PerperndicularVector = FVector(CorrectAim.Y, CorrectAim.X, 0);
		FVector FinalShootingVector = (Precision) * CorrectAim + (1-Precision) * PerperndicularVector;

		FVector LineEnd = EyeLoc + Range * FinalShootingVector;
		FVector TrailEnd = LineEnd;

		FireSound->Play();

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = false;
		QueryParams.bReturnPhysicalMaterial = true;

		FHitResult Hit;

		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLoc, LineEnd, WeaponTraceChannel, QueryParams))
		{
			AActor* HitActor = Hit.GetActor();

			EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Cast <UPhysicalMaterial>(Hit.PhysMaterial));

			UParticleSystem* ImpactEffectToPlay = NULL;
			float DamageToApply = BaseDamage;

			switch (SurfaceType)
			{
			case Flash_Default:
				ImpactEffectToPlay = ImpactEffectBlood;
				break;
			case Flash_Vulnerable:
				ImpactEffectToPlay = ImpactEffectBlood;
				DamageToApply *= DamageMultiplier;
				break;
			case Concrete:
				ImpactEffectToPlay = ImpactEffectConcrete;
				break;
			default:
				ImpactEffectToPlay = ImpactEffectBlood;
				break;
			}

			UGameplayStatics::ApplyPointDamage(HitActor, DamageToApply, EyeRot.Vector(), 
				Hit, MyOwner->GetInstigatorController(), this, DamageType);

			ATPSAI* bot = Cast<ATPSAI>(HitActor);
			if (bot) {
				ATPSGameMode* gm = Cast<ATPSGameMode>(GetWorld()->GetAuthGameMode());
				if (bot->IsDead()) {
					if (DamageToApply > BaseDamage) {
						GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Bot Really died Adding 50");
						gm->AddScore(50);
					}
					else {
						GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Bot Really died Adding 10 ");
						gm->AddScore(10);
					}
				}
			}
			else 
			{ 
				ATPSPlayer* player = Cast<ATPSPlayer>(HitActor);
				if (player && player->IsDead()) {
					GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "You're dead!");
					Cast<ATPSGameMode>(GetWorld()->GetAuthGameMode())->SetFinalString();
				}
			}
			TrailEnd = Hit.ImpactPoint;
			if (ImpactEffectToPlay)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffectToPlay, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
			}
		}

		if (MuzzleEffect)
		{
			UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
		}

		FVector MuzzlePosition = MeshComp->GetSocketLocation(MuzzleSocketName);

		if (TrailEffect)
		{
			UParticleSystemComponent* TrailComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TrailEffect, MuzzlePosition);

			if (TrailComp)
			{
				TrailComp->SetVectorParameter(TrailEffectParam, TrailEnd);
			}
		}

		if (DebugDrawWeapons > 0)
		{
			DrawDebugLine(GetWorld(), EyeLoc, LineEnd, FColor::White, false, 1.0f, 0, 1.0f);
		}

		// Camera shake
		APlayerController* PlayerController = Cast<APlayerController>(MyOwner->GetController());
		if (PlayerController)
		{
			PlayerController->ClientPlayCameraShake(FireCameraShake);
		}
	}


}

