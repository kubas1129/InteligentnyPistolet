// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class INTELIGENTNYPISTOLET_API UCBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void AddToLog(FString logInfo, UObject * WorldContextObject);
	
};
