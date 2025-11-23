// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "SpeechGameInstanceSubsystem.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEventTriggered);

UCLASS()
class KRISTA_API USpeechGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnEventTriggered OnEventTriggered;

	void NotifyObservers();
};
