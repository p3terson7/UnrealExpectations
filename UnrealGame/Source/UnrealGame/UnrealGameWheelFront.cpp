// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UUnrealGameWheelFront::UUnrealGameWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}