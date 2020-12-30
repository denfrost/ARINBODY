// Fill out your copyright notice in the Description page of Project Settings.

#include "ARINBodyCharacter.h"


// Sets default values
AARINBodyCharacter::AARINBodyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AARINBodyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AARINBodyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AARINBodyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

