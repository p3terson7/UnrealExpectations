// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UnrealGamePawn.h"
#include "UnrealGameSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class UNREALGAME_API AUnrealGameSportsCar : public AUnrealGamePawn
{
	GENERATED_BODY()
	
public:

	AUnrealGameSportsCar();
};
