// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColoredTexture.h"
#include "EnumName.h"
#include "UserProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UE4XSCRIPTING_API UUserProfile : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float HPMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	FString Name;
	//Displays any UClasses deriving from UObject in a dropdown menu in Bleuprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Unit)
	TSubclassOf<UObject> UClassOfPlayer;
	//Displays string names of UCLASSes that derive from the GameMode C++ base class
	UPROPERTY(EditAnywhere, meta=(MetaClass="GameMode"), Category = Unit)
	FSoftClassPath UClassGameMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FColoredTexture Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
	TEnumAsByte<Status> status;
};
