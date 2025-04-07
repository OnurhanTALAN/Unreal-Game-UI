#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Widgets/SMainMenuWidget.h"
#include "DenemeHUD.generated.h"

UCLASS()
class DENEME_API ADenemeHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

private:
	TSharedPtr<class SMainMenuWidget> MainMenuWidget;
	TSharedPtr<class SWidget> MainMenuWidgetContainer;
	
};
