// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeechWindow.h"

void USpeechWindow::OnEventTriggeredHandler()
{
	UE_LOG(LogTemp, Warning, TEXT("Observer received notification"));
}

void USpeechWindow::SubscribeOnEvent()
{
	if (Notifyer != nullptr)
		Notifyer->OnEventTriggered.AddDynamic(this, &USpeechWindow::OnEventTriggeredHandler);
}
