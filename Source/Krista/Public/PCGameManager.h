// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PCGameManager.generated.h"

/**
 * 
 */
UCLASS()
class KRISTA_API APCGameManager : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void SetupInputComponent() override;

	// Key handler
UFUNCTION()
	void OnKeyPressed();
};
