// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPropeller.h"

UMyPropeller::UMyPropeller()
{
	PrimaryComponentTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Propeller(TEXT("/Script/Engine.StaticMesh'/Game/P38/Meshes/SM_P38_Propeller.SM_P38_Propeller'"));

	if (SM_Propeller.Succeeded())
	{
		SetStaticMesh(SM_Propeller.Object);
	}
}

void UMyPropeller::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AddRelativeRotation(FRotator(0, 0, 7200.0f * DeltaTime));
}
