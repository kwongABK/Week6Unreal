// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SlidingDoorComponent.generated.h"


class ATriggerBox;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BLANKPROJECT_API USlidingDoorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USlidingDoorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FRotator StartRotation = FRotator::ZeroRotator;
	FRotator FinalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere);
	float TimeToSlide = 1.0f;

	float CurrentSlideTime = 0.0f;

	UPROPERTY(EditAnywhere);
	ATriggerBox* TriggerBox;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};