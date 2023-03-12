// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "project20183043PlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;

UCLASS()
class Aproject20183043PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	Aproject20183043PlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

protected:
	uint32 bMoveToMouseCursor : 1;

	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	void OnSetDestinationPressed();
	void OnSetDestinationReleased();

private:
	bool bInputPressed;
	bool bIsTouch;
	float FollowTime;
	float MovementSpeed;;
};


