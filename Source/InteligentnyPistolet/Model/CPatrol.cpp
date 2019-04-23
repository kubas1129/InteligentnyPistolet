// Fill out your copyright notice in the Description page of Project Settings.

#include "CPatrol.h"

// Sets default values
ACPatrol::ACPatrol()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPatrol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPatrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPatrol::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACPatrol::AddPolicemanToPatrol(ACPoliceman * policeman)
{
	policeOfficers.AddUnique(policeman);
}

