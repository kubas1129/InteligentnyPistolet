// Fill out your copyright notice in the Description page of Project Settings.

#include "CSmartWatch.h"

// Sets default values
ACSmartWatch::ACSmartWatch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACSmartWatch::BeginPlay()
{
	Super::BeginPlay();

	smartWatch_id = FMath::RandRange(10000, 99999);
	
}

// Called every frame
void ACSmartWatch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACSmartWatch::OnOrderRequest(FSmartWatchOrderRequest reuqest)
{
	this->orderRequest = reuqest;
}

void ACSmartWatch::ClearOrder()
{
	orderRequest = FSmartWatchOrderRequest();
}

