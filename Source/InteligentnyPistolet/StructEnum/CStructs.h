// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StructEnum/CEnum.h"
#include "CoreMinimal.h"
#include "CStructs.generated.h"


USTRUCT(BlueprintType)
struct FCoordinates
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float coordX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float coordY;

};

USTRUCT(BlueprintType)
struct FSmartWatchOrderRequest
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 orderId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOrderPriority orderPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCoordinates orderCoord;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool cancelOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan threatTime;
};


USTRUCT(BlueprintType)
struct FSmartWatchOrderResponse
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 orderId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool orderAccept;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool supportRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan expectedArrivalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 victimsNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool deactivateThreat;

};


USTRUCT(BlueprintType)
struct FPistolShotEvent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 pistolId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 policemanId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCoordinates pistolCoordinates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool shotFired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool locked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool dangerActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ammoLeft;

};


USTRUCT(BlueprintType)
struct FAmbulanceRequest
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCoordinates threatCoord;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBloodGroup bloodGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool dangerActivated;

};



USTRUCT(BlueprintType)
struct FAmbulanceResponse
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan expectedArrivalTime;

};


/*
*		INFO WIDGETS
*/


USTRUCT(BlueprintType)
struct FThreatInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 threatId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOrderPriority orderPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString threatName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString threatDetails;

};


