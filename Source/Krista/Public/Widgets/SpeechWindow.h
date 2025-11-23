// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpeechGameInstanceSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "SpeechWindow.generated.h"

/**
 * 
 */
UCLASS()
class KRISTA_API USpeechWindow : public UUserWidget
{
	GENERATED_BODY()

		UFUNCTION()
		void OnEventTriggeredHandler();

private:
	USpeechGameInstanceSubsystem* Notifyer;
	void SubscribeOnEvent();
	
};
