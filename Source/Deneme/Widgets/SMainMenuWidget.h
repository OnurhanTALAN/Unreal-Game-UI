#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class DENEME_API SMainMenuWidget : public SCompoundWidget{

public:
	SLATE_BEGIN_ARGS(SMainMenuWidget) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	FReply OnPlayClicked() const;
	FReply OnQuitClicked() const;
	FReply OnAboutClicked() const;
	FReply OnLiveMatchClicked() const;

	virtual bool SupportsKeyboardFocus() const override { return true; };
};
