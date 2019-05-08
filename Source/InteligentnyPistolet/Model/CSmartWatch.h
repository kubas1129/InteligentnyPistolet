// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "StructEnum/CStructs.h"

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

	/* Current order request */
	FSmartWatchOrderRequest orderRequest;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void OnOrderRequest(FSmartWatchOrderRequest reuqest);

	UFUNCTION(BlueprintImplementableEvent)
	void SendOrderResponse(FSmartWatchOrderResponse response);

	UFUNCTION(BlueprintCallable)
	void ClearOrder();

	UFUNCTION(BlueprintCallable)
	int32 GetSmartWatchId() const { return smartWatch_id; }

	UFUNCTION(BlueprintCallable)
	FSmartWatchOrderRequest GetOrderRequest() const { return orderRequest; }

};
