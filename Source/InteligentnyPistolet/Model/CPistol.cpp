// Fill out your copyright notice in the Description page of Project Settings.

#include "CPistol.h"

// Sets default values
ACPistol::ACPistol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

