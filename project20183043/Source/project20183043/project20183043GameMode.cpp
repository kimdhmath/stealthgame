// Copyright Epic Games, Inc. All Rights Reserved.

#include "project20183043GameMode.h"
#include "project20183043PlayerController.h"
#include "project20183043Character.h"
#include "UObject/ConstructorHelpers.h"

Aproject20183043GameMode::Aproject20183043GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Aproject20183043PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}