// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CPoliceman.h"
#include "CNavi.h"
#include "StructEnum/CStructs.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPatrol.generated.h"


/*
*	Patrol consist of 1-4 policeman
*	Each patrol has navigation system
*	Each patrol has unique id
*/


UCLASS()
class INTELIGENTNYPISTOLET_API ACPatrol : public ACharacter
{
	GENERATED_BODY()

public:

	ACPatrol();

protected:

	virtual void BeginPlay() override;

	/* Id of patrol */
	int32 patrolId;

	/* Police officers who belongs to patrol */
	TArray<ACPoliceman*> policeOfficers;

	/* Navigation for patrol */
	ACNavi* navigation;


public:	

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void AddPolicemanToPatrol(ACPoliceman* policeman);

	UFUNCTION(BlueprintCallable)
	void AssignNavigation(ACNavi* navi) { this->navigation = navi; }

	UFUNCTION(BlueprintCallable)
	bool canAcceptOrder() const { return  (policeOfficers[0]->GetSmartWatch()->GetOrderRequest().orderId == 0); }

	UFUNCTION(BlueprintCallable)
	void FinishOrder();

	UFUNCTION(BlueprintCallable)
	int32 GetPatrolId() const { return patrolId; }
	UFUNCTION(BlueprintCallable)
	TArray<ACPoliceman*> GetOfficers() const { return policeOfficers; }
	UFUNCTION(BlueprintCallable)
	ACNavi* GetNavi() const { return navigation; }

};
