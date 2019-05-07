// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSmartWatch.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACSmartWatch : public AActor
{
	GENERATED_BODY()
	
public:	
	ACSmartWatch();

protected:
	virtual void BeginPlay() override;

	/* Id of smart watch */
	int32 smartWatch_id;

public:	
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
	int32 GetSmartWatchId() const { return smartWatch_id; }
};
