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


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.NavigateDownFromSearch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::NavigateDownFromSearch(enum class EUINavigation Navigation, class UWidget** NewParam, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "NavigateDownFromSearch");

	Params::UAthenaCustomizationPicker_C_NavigateDownFromSearch_Params Parms;

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ResetTextSearchFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::ResetTextSearchFilter()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "ResetTextSearchFilter");

	Params::UAthenaCustomizationPicker_C_ResetTextSearchFilter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextEntryTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetCurrentText_Text                                     ()
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::HandleTextEntryTimer(class FText CallFunc_GetCurrentText_Text, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleTextEntryTimer");

	Params::UAthenaCustomizationPicker_C_HandleTextEntryTimer_Params Parms;

	Parms.CallFunc_GetCurrentText_Text = CallFunc_GetCurrentText_Text;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleSearchTextFilterChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCurrentText_Text                                     ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::HandleSearchTextFilterChanged(class FText Text, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class FText CallFunc_GetCurrentText_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleSearchTextFilterChanged");

	Params::UAthenaCustomizationPicker_C_HandleSearchTextFilterChanged_Params Parms;

	Parms.Text = Text;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_GetCurrentText_Text = CallFunc_GetCurrentText_Text;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.GetTextFilterSelectedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::GetTextFilterSelectedState(bool* bIsSelected, bool CallFunc_GetSelected_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "GetTextFilterSelectedState");

	Params::UAthenaCustomizationPicker_C_GetTextFilterSelectedState_Params Parms;

	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSelected != nullptr)
		*bIsSelected = Parms.bIsSelected;

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilterSelectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::SetTextFilterSelectedState(bool bIsSelected, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "SetTextFilterSelectedState");

	Params::UAthenaCustomizationPicker_C_SetTextFilterSelectedState_Params Parms;

	Parms.bIsSelected = bIsSelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Clear                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()

void UAthenaCustomizationPicker_C::SetTextFilter(class FText InText, bool Clear, class FText CallFunc_GetEmptyText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "SetTextFilter");

	Params::UAthenaCustomizationPicker_C_SetTextFilter_Params Parms;

	Parms.InText = InText;
	Parms.Clear = Clear;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        EmptyDisplayText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCustomizationPicker_C::OnNoItemsAvailableInFilter(class FText& EmptyDisplayText)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnNoItemsAvailableInFilter");

	Params::UAthenaCustomizationPicker_C_OnNoItemsAvailableInFilter_Params Parms;

	Parms.EmptyDisplayText = EmptyDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnItemsAvailableInFilter()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnItemsAvailableInFilter");

	Params::UAthenaCustomizationPicker_C_OnItemsAvailableInFilter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnSearchEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::OnSearchEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnSearchEnabled");

	Params::UAthenaCustomizationPicker_C_OnSearchEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnInitialized()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnInitialized");

	Params::UAthenaCustomizationPicker_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCustomizationPicker_C::HandleTextChanged(class FText& Text)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleTextChanged");

	Params::UAthenaCustomizationPicker_C_HandleTextChanged_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::HandleDifferentFilterSetBP()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleDifferentFilterSetBP");

	Params::UAthenaCustomizationPicker_C_HandleDifferentFilterSetBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPicker_C::BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.On Text Committed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPicker_C::On_Text_Committed(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "On Text Committed");

	Params::UAthenaCustomizationPicker_C_On_Text_Committed_Params Parms;

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetQualifiedFilterDisplayName_ReturnValue               ()
// class FText                        K2Node_Event_EmptyDisplayText                                    (ConstParm)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text_1                                        (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// enum class ETextCommit             K2Node_CustomEvent_CommitMethod                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPicker_C::ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, class FText K2Node_Event_EmptyDisplayText, bool K2Node_Event_bEnabled, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_CustomEvent_Text_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText K2Node_CustomEvent_Text, enum class ETextCommit K2Node_CustomEvent_CommitMethod)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "ExecuteUbergraph_AthenaCustomizationPicker");

	Params::UAthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetQualifiedFilterDisplayName_ReturnValue = CallFunc_GetQualifiedFilterDisplayName_ReturnValue;
	Parms.K2Node_Event_EmptyDisplayText = K2Node_Event_EmptyDisplayText;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_CommitMethod = K2Node_CustomEvent_CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnTextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaCustomizationPicker_C::OnTextChanged__DelegateSignature(class FText NewText)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnTextChanged__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_OnTextChanged__DelegateSignature_Params Parms;

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnTextSearchSelectedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPicker_C::OnTextSearchSelectedChanged__DelegateSignature(bool bIsSelected)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnTextSearchSelectedChanged__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_OnTextSearchSelectedChanged__DelegateSignature_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnEnableSaveButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnEnableSaveButton__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_OnEnableSaveButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnDisableSaveButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnDisableSaveButton__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_OnDisableSaveButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
