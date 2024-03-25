// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "Chapter02GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE4XSCRIPTING_API AChapter02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void BeginPlay();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
	TSubclassOf<UUserProfile> UPBlueprintClassName;
};
