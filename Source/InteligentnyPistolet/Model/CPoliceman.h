// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CPistol.h"
#include "CSmartWatch.h"
#include "StructEnum/CStructs.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPoliceman.generated.h"

UCLASS()
class INTELIGENTNYPISTOLET_API ACPoliceman : public AActor
{
	GENERATED_BODY()

public:

	ACPoliceman();

protected:

	virtual void BeginPlay() override;

	/* Policeman id */
	int32 officerId;

	/* Officer pistol */
	ACPistol* pistol;

	/* Officer smartWatch */
	ACSmartWatch* smartWatch;
	

public:	

	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
	void AssignPistol(ACPistol* pistol) { this->pistol = pistol; }
	
	UFUNCTION(BlueprintCallable)
	void AssignSmartWatch(ACSmartWatch* smart) { this->smartWatch = smart; }


	///GETTERS AND SETTERS

	UFUNCTION(BlueprintCallable)
	ACSmartWatch* GetSmartWatch() const { return smartWatch; }

	UFUNCTION(BlueprintCallable)
	ACPistol* GetPistol() const { return pistol; }

	UFUNCTION(BlueprintCallable)
	int32  GetOfficerId() const { return officerId; }

};	
