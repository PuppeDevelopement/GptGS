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


// Function ItemPresentationEntry.ItemPresentationEntry_C.PlayIntro
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeBeforeStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::PlayIntro(float TimeBeforeStart, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "PlayIntro");

	Params::UItemPresentationEntry_C_PlayIntro_Params Parms;

	Parms.TimeBeforeStart = TimeBeforeStart;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandelDeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::HandelDeselectedAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "HandelDeselectedAnim");

	Params::UItemPresentationEntry_C_HandelDeselectedAnim_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleSelectedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::HandleSelectedAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "HandleSelectedAnim");

	Params::UItemPresentationEntry_C_HandleSelectedAnim_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::HandleUnhover(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "HandleUnhover");

	Params::UItemPresentationEntry_C_HandleUnhover_Params Parms;

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::HandleHover(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "HandleHover");

	Params::UItemPresentationEntry_C_HandleHover_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnUnhovered");

	Params::UItemPresentationEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.DelayIntroAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::DelayIntroAnimation()
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "DelayIntroAnimation");

	Params::UItemPresentationEntry_C_DelayIntroAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnHovered");

	Params::UItemPresentationEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::Construct()
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "Construct");

	Params::UItemPresentationEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemPresentationEntry_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "OnMouseLeave");

	Params::UItemPresentationEntry_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnSelected");

	Params::UItemPresentationEntry_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnDeselected");

	Params::UItemPresentationEntry_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.ExecuteUbergraph_ItemPresentationEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UItemPresentationEntry_C::ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static auto Func = Class->GetFunction("ItemPresentationEntry_C", "ExecuteUbergraph_ItemPresentationEntry");

	Params::UItemPresentationEntry_C_ExecuteUbergraph_ItemPresentationEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
