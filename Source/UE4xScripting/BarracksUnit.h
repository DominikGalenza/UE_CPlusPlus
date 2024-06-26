// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BarracksUnit.generated.h"

UCLASS()
class UE4XSCRIPTING_API ABarracksUnit : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY()
	UParticleSystemComponent* SpawnPoint;

public:
	// Sets default values for this character's properties
	ABarracksUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
