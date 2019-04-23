// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CAmbulance.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACAmbulance : public APawn
{
	GENERATED_BODY()

public:
	ACAmbulance();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
