// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "StructEnum/CStructs.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPistol.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACPistol : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPistol();

	/* Unique pistol id */
	int32 pistol_id;

	/* Number of bullets in chamber */
	int32 bullets;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;



	UFUNCTION(BlueprintImplementableEvent)
	bool Fire(FPistolShotEvent shotEvent);


	UFUNCTION(BlueprintCallable)
	int32 GetPistolId() const { return pistol_id; }

	UFUNCTION(BlueprintCallable)
	int32 GetBullets() const { return bullets; }

};
