// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UUnrealGameWheelRear::UUnrealGameWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}