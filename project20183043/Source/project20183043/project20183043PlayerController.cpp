// Copyright Epic Games, Inc. All Rights Reserved.

#include "project20183043PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "project20183043Character.h"
#include "Engine/World.h"

Aproject20183043PlayerController::Aproject20183043PlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
}

void Aproject20183043PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	MovementSpeed = 1.f;

	if (bInputPressed)
	{
		if (IsInputKeyDown(EKeys::LeftShift)) {
			MovementSpeed = 2.f;
		}
		else if (IsInputKeyDown(EKeys::LeftControl)) {
			MovementSpeed = 0.5f;
		}
		FVector HitLocation = FVector::ZeroVector;
		FHitResult Hit;

		GetHitResultUnderCursor(ECC_Visibility, true, Hit);

		HitLocation = Hit.Location;

		APawn* const MyPawn = GetPawn();
		if (MyPawn)
		{
			FVector WorldDirection = (HitLocation - MyPawn->GetActorLocation()).GetSafeNormal();
			MyPawn->AddMovementInput(WorldDirection, MovementSpeed, false);
		}
	}
}

void Aproject20183043PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &Aproject20183043PlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &Aproject20183043PlayerController::OnSetDestinationReleased);


}

void Aproject20183043PlayerController::OnSetDestinationPressed()
{
	bInputPressed = true;
}

void Aproject20183043PlayerController::OnSetDestinationReleased()
{
	bInputPressed = false;
}
