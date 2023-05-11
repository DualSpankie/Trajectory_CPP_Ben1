// Copyright Epic Games, Inc. All Rights Reserved.

#include "URE_TrajectoryGameMode.h"
#include "URE_TrajectoryHUD.h"
#include "URE_TrajectoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AURE_TrajectoryGameMode::AURE_TrajectoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AURE_TrajectoryHUD::StaticClass();
}
