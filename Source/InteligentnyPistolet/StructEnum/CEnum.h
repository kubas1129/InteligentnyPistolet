// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CEnum.generated.h"

UENUM(BlueprintType)
enum class EOrderPriority : uint8
{
	OP_Normal					UMETA(DisplayName = "Normal"),
	OP_High						UMETA(DisplayName = "High")
};

UENUM(BlueprintType)
enum class EBloodGroup : uint8
{
	BG_A_Rhp					UMETA(DisplayName = "A_Rh_plus"),
	BG_A_Rhm					UMETA(DisplayName = "A_Rh_minus"),
	BG_B_Rhp					UMETA(DisplayName = "B_Rh_plus"),
	BG_B_Rhm					UMETA(DisplayName = "B_Rh_minus"),
	BG_AB_Rhp					UMETA(DisplayName = "AB_Rh_plus"),
	BG_AB_Rhm					UMETA(DisplayName = "AB_Rh_minus"),
	BG_0_Rhp					UMETA(DisplayName = "0_Rh_plus"),
	BG_0_Rhm					UMETA(DisplayName = "0_Rh_minus")
};
