// Fill out your copyright notice in the Description page of Project Settings.

#include "VehiclePawn.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "WheeledVehicleMovementComponent4W.h"


AVehiclePawn::AVehiclePawn()
{
    UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());
}

