// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_AIGameMode.h"
#include "UE_AICharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_AIGameMode::AUE_AIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
