// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter01GameModeBase.h"

void AChapter01GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));

	int IntVar = 5;
	float FloatVar = 3.2f;
	FString FStringVar = "An FString variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), IntVar, FloatVar, *FStringVar);

	//FString Name = "Tim";
	//int32 Mana = 300;
	//FString String = FString::Printf(TEXT("Name = %s Mana = %d"), *Name, Mana);

	FString Name = "Tim";
	int32 Mana = 300;
	TArray<FStringFormatArg> Args;
	Args.Add(FStringFormatArg(Name));
	Args.Add(FStringFormatArg(Mana));
	FString String = FString::Format(TEXT("Name = {0} Mana = {1}"), Args);
	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *String);
}
