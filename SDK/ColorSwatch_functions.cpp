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


// Function ColorSwatch.ColorSwatch_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UColorSwatch_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "BP_OnEntryReleased");

	Params::UColorSwatch_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UColorSwatch_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "BP_OnItemExpansionChanged");

	Params::UColorSwatch_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UColorSwatch_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "BP_OnItemSelectionChanged");

	Params::UColorSwatch_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorSwatch_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "OnListItemObjectSet");

	Params::UColorSwatch_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UColorSwatch_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "BP_OnHovered");

	Params::UColorSwatch_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UColorSwatch_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "BP_OnUnhovered");

	Params::UColorSwatch_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.OnSwatchColorSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInNullColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UColorSwatch_C::OnSwatchColorSet(bool bInNullColor)
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "OnSwatchColorSet");

	Params::UColorSwatch_C_OnSwatchColorSet_Params Parms;

	Parms.bInNullColor = bInNullColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorSwatch.ColorSwatch_C.ExecuteUbergraph_ColorSwatch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInNullColor                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UColorSwatch_C::ExecuteUbergraph_ColorSwatch(int32 EntryPoint, bool K2Node_Event_bInNullColor, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static auto Func = Class->GetFunction("ColorSwatch_C", "ExecuteUbergraph_ColorSwatch");

	Params::UColorSwatch_C_ExecuteUbergraph_ColorSwatch_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bInNullColor = K2Node_Event_bInNullColor;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
