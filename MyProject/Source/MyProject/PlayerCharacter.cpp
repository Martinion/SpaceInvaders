// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraActor.h"
#include "Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InputComponent->BindAxis("MoveY", this, &APlayerCharacter::Move_YAxis);

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Movement(DeltaTime);
}


void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerCharacter::Movement(float DeltaTime)
{
		FVector NewLocation = GetActorLocation().Y + (MoveY * Speed * DeltaTime);
		SetActorLocation(NewLocation);
}


void APlayerCharacter::Shoot()
{

	if (GetTimeSeconds(GetWorld()) > LastShotTimer)
	{
		UWorld* World = GetWorld();	

		if (World)
		{
			FVector Location = GetActorLocation();   //Henter location til player
				
			World->SpawnActor<ABullet>(BulletBlueprint, Location + FVector(0.4f, 0.f, 0.f), GetActorRotation());

			LastShotTimer = GetTimeSeconds(GetWorld()) + ShotDelay;
		}
	}
}

