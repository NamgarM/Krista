// Fill out your copyright notice in the Description page of Project Settings.


#include "PCGameManager.h"

void APCGameManager::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Make sure InputComponent exists
    if (InputComponent)
    {
        InputComponent->BindKey(EKeys::E, IE_Pressed, this, &APCGameManager::OnKeyPressed);
        UE_LOG(LogTemp, Warning, TEXT("Binded 2!"));
    }
}


void APCGameManager::OnKeyPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("F key pressed!"));
}
