// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "project20183043Character.generated.h"

UCLASS(Blueprintable)
class Aproject20183043Character : public ACharacter
{
	GENERATED_BODY()

public:
	Aproject20183043Character();

	virtual void Tick(float DeltaSeconds) override;

};

