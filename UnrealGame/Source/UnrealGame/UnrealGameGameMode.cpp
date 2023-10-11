// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameGameMode.h"
#include "UnrealGamePlayerController.h"

AUnrealGameGameMode::AUnrealGameGameMode()
{
	PlayerControllerClass = AUnrealGamePlayerController::StaticClass();
}
