// Fill out your copyright notice in the Description page of Project Settings.

#include "TFBaseCharacter.h"


// Sets default values
ATFBaseCharacter::ATFBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATFBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATFBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATFBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

