// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "URE_TrajectoryHUD.generated.h"

UCLASS()
class AURE_TrajectoryHUD : public AHUD
{
	GENERATED_BODY()

public:
	AURE_TrajectoryHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

