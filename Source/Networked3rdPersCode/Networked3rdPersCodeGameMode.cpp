// Copyright Epic Games, Inc. All Rights Reserved.

#include "Networked3rdPersCodeGameMode.h"
#include "Networked3rdPersCodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworked3rdPersCodeGameMode::ANetworked3rdPersCodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
