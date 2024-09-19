// Unreal Engine - Gameplay Ability System - Top Down RPG by Stephen Ulibarri


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UAuraWidgetController::BroadCastInitialValue()
{
	
}

void UAuraWidgetController::BindCallbacksToDependencies()
{
	
}
