// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "MyThirdPersonChar.generated.h"

UCLASS()
class MYTHIRDPERSON_API AMyThirdPersonChar : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnyWhere, BluePrintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	// Sets default values for this character's properties
	AMyThirdPersonChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
