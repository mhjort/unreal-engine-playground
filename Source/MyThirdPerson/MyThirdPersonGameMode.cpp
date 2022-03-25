// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyThirdPersonGameMode.h"
#include "MyThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyThirdPersonGameMode::AMyThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
