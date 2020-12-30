// Fill out your copyright notice in the Description page of Project Settings.

#include "ARINBodyIdleController.h"


// Sets default values
AARINBodyIdleController::AARINBodyIdleController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AARINBodyIdleController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AARINBodyIdleController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

