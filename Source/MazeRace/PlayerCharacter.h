// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoreUObject.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"


UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EnumPlayerColor : uint8
{
	E_Red		UMETA(DisplayName = "red"),
	E_Yellow 	UMETA(DisplayName = "yellow"),
	E_Green		UMETA(DisplayName = "green"),
	E_Blue		UMETA(DisplayName = "blue")
};


UCLASS()
class MAZERACE_API APlayerCharacter : public APawn
{
	GENERATED_BODY() //GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float speed = 3;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	EnumPlayerColor myColor = EnumPlayerColor::E_Red;

	
	
};
