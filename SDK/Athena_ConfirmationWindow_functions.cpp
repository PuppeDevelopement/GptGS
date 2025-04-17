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


// Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.OnSetButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthena_ConfirmationWindow_C::OnSetButtonText(class UCommonButton* Button, class FText& Text)
{
	static auto Func = Class->GetFunction("Athena_ConfirmationWindow_C", "OnSetButtonText");

	Params::UAthena_ConfirmationWindow_C_OnSetButtonText_Params Parms;

	Parms.Button = Button;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.ExecuteUbergraph_Athena_ConfirmationWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_Button                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// class UAthena_ConfirmationButton_C*K2Node_DynamicCast_AsAthena_Confirmation_Button                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_ConfirmationWindow_C::ExecuteUbergraph_Athena_ConfirmationWindow(int32 EntryPoint, class UCommonButton* K2Node_Event_Button, class FText K2Node_Event_Text, class UAthena_ConfirmationButton_C* K2Node_DynamicCast_AsAthena_Confirmation_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Athena_ConfirmationWindow_C", "ExecuteUbergraph_Athena_ConfirmationWindow");

	Params::UAthena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_DynamicCast_AsAthena_Confirmation_Button = K2Node_DynamicCast_AsAthena_Confirmation_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
