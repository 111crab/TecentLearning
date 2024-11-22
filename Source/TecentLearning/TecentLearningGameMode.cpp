// Copyright Epic Games, Inc. All Rights Reserved.

#include "TecentLearningGameMode.h"
#include "TecentLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATecentLearningGameMode::ATecentLearningGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
