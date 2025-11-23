// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeechGameInstanceSubsystem.h"

void USpeechGameInstanceSubsystem::NotifyObservers()
{
	UE_LOG(LogTemp, Warning, TEXT("Event triggered"));
	OnEventTriggered.Broadcast();
}
