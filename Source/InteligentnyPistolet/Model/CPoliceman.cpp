// Fill out your copyright notice in the Description page of Project Settings.

#include "CPoliceman.h"

// Sets default values
ACPoliceman::ACPoliceman()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPoliceman::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPoliceman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPoliceman::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

