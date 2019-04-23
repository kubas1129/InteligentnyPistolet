// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CNavi.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACNavi : public AActor
{
	GENERATED_BODY()
	
public:	
	ACNavi();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
