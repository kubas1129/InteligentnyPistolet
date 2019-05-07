// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAmbulance.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACAmbulance : public AActor
{
	GENERATED_BODY()

public:
	ACAmbulance();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;


};
