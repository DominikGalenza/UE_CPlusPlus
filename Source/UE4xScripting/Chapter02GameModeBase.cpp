// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter02GameModeBase.h"

void AChapter02GameModeBase::BeginPlay()
{
	AChapter02GameModeBase* GameMode = Cast<AChapter02GameModeBase>(GetWorld()->GetAuthGameMode());

	if (GameMode)
	{
		UUserProfile* NewObj = NewObject<UUserProfile>((UObject*)GetTransientPackage(), UUserProfile::StaticClass());

		if (NewObj)
		{
			NewObj->ConditionalBeginDestroy();
			NewObj = nullptr;
		}
	}
}
