// Fill out your copyright notice in the Description page of Project Settings.

#include "CBlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Paths.h"
#include "Engine.h"

FString filePath  = FPaths::ConvertRelativePathToFull(FPaths::ConvertRelativePathToFull(FPaths::ProjectDir())) + TEXT("/SimulationLog.txt");

void UCBlueprintFunctionLibrary::AddToLog(FString logInfo, UObject * WorldContextObject)
{
	//dodac czas i actor-a wywolujacego
	FString content = "[" + FTimespan::FromSeconds(UGameplayStatics::GetRealTimeSeconds(WorldContextObject)).ToString() + "]" + logInfo + TEXT("\n");
	FFileHelper::SaveStringToFile(content, *filePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}
