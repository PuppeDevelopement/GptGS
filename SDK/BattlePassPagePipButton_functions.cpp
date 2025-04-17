#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPagePipButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "PreConstruct");

	Params::UBattlePassPagePipButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::Construct()
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "Construct");

	Params::UBattlePassPagePipButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnHovered");

	Params::UBattlePassPagePipButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnUnhovered");

	Params::UBattlePassPagePipButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnClicked");

	Params::UBattlePassPagePipButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnSelected");

	Params::UBattlePassPagePipButton_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnDeselected");

	Params::UBattlePassPagePipButton_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.ExecuteUbergraph_BattlePassPagePipButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPagePipButton_C::ExecuteUbergraph_BattlePassPagePipButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassPagePipButton_C", "ExecuteUbergraph_BattlePassPagePipButton");

	Params::UBattlePassPagePipButton_C_ExecuteUbergraph_BattlePassPagePipButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
