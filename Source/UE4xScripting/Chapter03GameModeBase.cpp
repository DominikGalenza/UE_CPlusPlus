// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter03GameModeBase.h"
#include "Action.h"

void AChapter03GameModeBase::BeginPlay()
{
	UAction* action = NewObject<UAction>(GetTransientPackage(), UAction::StaticClass() /* RF_* flags */);
	action->ConditionalBeginDestroy();
	GEngine->ForceGarbageCollection();
}
