// Fill out your copyright notice in the Description page of Project Settings.


#include "UECookbookGameModeBase.h"
#include "MyFirstActor.h"

void AUECookbookGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor spawining"));

	FTransform SpawnLocation;
	SpawnedActor = GetWorld()->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), SpawnLocation);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AUECookbookGameModeBase::DestroyActorFunction, 10);
}

void AUECookbookGameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor destroyed"));
		SpawnedActor->Destroy();
	}
}
