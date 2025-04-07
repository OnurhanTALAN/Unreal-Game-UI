#include "DenemeHUD.h"
#include "Engine/Engine.h"
#include "Widgets/SMainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "SlateBasics.h"
#include "SlateExtras.h"

void ADenemeHUD::BeginPlay(){
	Super::BeginPlay();
	if (GEngine && GEngine->GameViewport) {
		SAssignNew(MainMenuWidget, SMainMenuWidget);
		if (MainMenuWidget.IsValid()) {
			GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MainMenuWidgetContainer, SWeakWidget).PossiblyNullContent(MainMenuWidget.ToSharedRef()));
		}

		// Set the cursor to be visible when the menu is up
		if (APlayerController* PlayerController = GetOwningPlayerController()){
			PlayerController->bShowMouseCursor = true;  // Ensure the mouse cursor is visible
			PlayerController->SetInputMode(FInputModeUIOnly());  // Set input mode to UI-only
		}
	}
}
