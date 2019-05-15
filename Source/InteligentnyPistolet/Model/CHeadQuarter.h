// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CPatrol.h"
#include "CAmbulance.h"


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CHeadQuarter.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACHeadQuarter : public AActor
{
	GENERATED_BODY()
	
public:	
	ACHeadQuarter();

protected:
	virtual void BeginPlay() override;

	/* Patrols assign to headquarter (navi) */
	TArray<ACPatrol*> patrols;

	/* Ambulances assign to headquarter */
	TArray<ACAmbulance*> ambulances;

	/* Orders */
	TArray<FThreatInfo> crimeNotifications;


public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AddPatrolToQuarter(ACPatrol* patrol) { this->patrols.AddUnique(patrol); }

	UFUNCTION(BlueprintCallable)
	void AddAmbulanceToQuarter(ACAmbulance* amb) { this->ambulances.AddUnique(amb); }
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnCrimeNotify(FThreatInfo threafInfo);


	///GET SET ETC

	UFUNCTION(BlueprintCallable)
	TArray<FThreatInfo> GetCrimeNotifications() const { return crimeNotifications; }

	UFUNCTION(BlueprintCallable)
	void AddCrimeNotification(FThreatInfo notify) {
		crimeNotifications.Add(notify); 
		OnCrimeNotify(notify);
	}

	UFUNCTION(BlueprintCallable)
	TArray<ACPatrol*> GetCreatedPatrols() const { return patrols; }
};
