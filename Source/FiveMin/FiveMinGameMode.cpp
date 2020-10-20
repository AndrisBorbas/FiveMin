// Copyright Epic Games, Inc. All Rights Reserved.

#include "FiveMinGameMode.h"
#include "FiveMinCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFiveMinGameMode::AFiveMinGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
