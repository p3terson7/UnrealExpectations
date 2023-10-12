// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "VehiclePawn.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME_API AVehiclePawn : public AWheeledVehiclePawn
{
	GENERATED_BODY()

	public:
	// Sets default values for this pawn's properties
	AVehiclePawn();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ApplyThrottle(float val);
	void ApplySteering(float val);

	void LookUp(float val);
	void Turn(float val);

	void HandbrakePressed();
	void HandbrakeReleased();

	void UpdateInAirControl(float DeltaTime);

	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;
};



