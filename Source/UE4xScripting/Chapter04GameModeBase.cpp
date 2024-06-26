// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter04GameModeBase.h"
#include "InventoryCharacter.h"

AChapter04GameModeBase::AChapter04GameModeBase()
{
	DefaultPawnClass = AInventoryCharacter::StaticClass();
}
