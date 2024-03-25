#pragma once

#include "ColoredTexture.generated.h"

USTRUCT(Blueprintable)
struct UE4XSCRIPTING_API FColoredTexture
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	UTexture* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FLinearColor Color;
};