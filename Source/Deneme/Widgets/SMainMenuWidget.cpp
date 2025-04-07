#include "SMainMenuWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

#define LOCTEXT_NAMESPACE "MainMenu"

void SMainMenuWidget::Construct(const FArguments& InArgs){

    bCanSupportFocus = true;

    const FMargin ContentPadding = FMargin(500.f, 300.f);
    const FMargin ButtonPadding = FMargin(10.f);

    const FText TitleText = LOCTEXT("GameTitle", "HADEWER");
    const FText PlayText = LOCTEXT("PlayGame", "Play");
    const FText AboutText = LOCTEXT("About", "About");
    const FText LiveMatchText = LOCTEXT("LiveMatch", "Live Match");
    const FText QuitText = LOCTEXT("QuitGame", "Quit Game");

    FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
    ButtonTextStyle.Size = 40.f;

    FSlateFontInfo TitleTextStyle = ButtonTextStyle;
    TitleTextStyle.Size = 60.f;


    ChildSlot
        [
            SNew(SOverlay)

                + SOverlay::Slot()
                .HAlign(HAlign_Fill)
                .VAlign(VAlign_Fill)
                [
                    SNew(SImage)
                        .ColorAndOpacity(FColor::Black)
                ]

                + SOverlay::Slot()
                .HAlign(HAlign_Fill)
                .VAlign(VAlign_Fill)
                .Padding(ContentPadding)
                [
                    SNew(SVerticalBox)

                        //Title Text
                        + SVerticalBox::Slot()
                        [
                            SNew(STextBlock)
                                .Font(TitleTextStyle)
                                .Text(TitleText)
                                .Justification(ETextJustify::Center)
                        ]

                        //Play Button
                        + SVerticalBox::Slot()
                        .Padding(ButtonPadding)
                        [
                            SNew(SButton)
                                .OnClicked(this, &SMainMenuWidget::OnPlayClicked)
                                [
                                    SNew(STextBlock)
                                        .Font(ButtonTextStyle)
                                        .Text(PlayText)
                                        .Justification(ETextJustify::Center)
                                ]
                        ]

                        //About Button
                        + SVerticalBox::Slot()
                        .Padding(ButtonPadding)
                        [
                            SNew(SButton)
                                .OnClicked(this, &SMainMenuWidget::OnAboutClicked)
                                [
                                    SNew(STextBlock)
                                        .Font(ButtonTextStyle)
                                        .Text(AboutText)
                                        .Justification(ETextJustify::Center)
                                ]
                        ]

                        //Live Match Button
                        + SVerticalBox::Slot()
                        .Padding(ButtonPadding)
                        [
                            SNew(SButton)
                                .OnClicked(this, &SMainMenuWidget::OnLiveMatchClicked)
                                [
                                    SNew(STextBlock)
                                        .Font(ButtonTextStyle)
                                        .Text(LiveMatchText)
                                        .Justification(ETextJustify::Center)
                                ]
                        ]

                        //Quit Button
                        + SVerticalBox::Slot()
                        .Padding(ButtonPadding)
                        [
                            SNew(SButton)
                                .OnClicked(this, &SMainMenuWidget::OnQuitClicked)
                                [
                                    SNew(STextBlock)
                                        .Font(ButtonTextStyle)
                                        .Text(QuitText)
                                        .Justification(ETextJustify::Center)
                                ]
                        ]
                ]
        ];
}

FReply SMainMenuWidget::OnPlayClicked() const{
    return FReply::Handled();
}

FReply SMainMenuWidget::OnQuitClicked() const{

    return FReply::Handled();
}

FReply SMainMenuWidget::OnAboutClicked() const{
    return FReply::Handled();
}

FReply SMainMenuWidget::OnLiveMatchClicked() const{
    return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE

END_SLATE_FUNCTION_BUILD_OPTIMIZATION