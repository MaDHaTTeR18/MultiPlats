// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplatsGameMode.h"
#include "MultiplatsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplatsGameMode::AMultiplatsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
