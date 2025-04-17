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


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ErrorTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ErrorTimeline__FinishedFunc");

	Params::ABP_UI_ScannerScreen_C_ErrorTimeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ErrorTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ErrorTimeline__UpdateFunc");

	Params::ABP_UI_ScannerScreen_C_ErrorTimeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ReceiveBeginPlay");

	Params::ABP_UI_ScannerScreen_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_ScannerScreen_C::ScreenEventError(bool Reverse)
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventError");

	Params::ABP_UI_ScannerScreen_C_ScreenEventError_Params Parms;

	Parms.Reverse = Reverse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SuccessText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventSuccess(class FText SuccessText)
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventSuccess");

	Params::ABP_UI_ScannerScreen_C_ScreenEventSuccess_Params Parms;

	Parms.SuccessText = SuccessText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FailureText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventFailure(class FText FailureText)
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventFailure");

	Params::ABP_UI_ScannerScreen_C_ScreenEventFailure_Params Parms;

	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ScreenEventScan()
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventScan");

	Params::ABP_UI_ScannerScreen_C_ScreenEventScan_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ScreenEventDismiss()
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventDismiss");

	Params::ABP_UI_ScannerScreen_C_ScreenEventDismiss_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LostText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventTargetLost(class FText LostText)
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventTargetLost");

	Params::ABP_UI_ScannerScreen_C_ScreenEventTargetLost_Params Parms;

	Parms.LostText = LostText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_SuccessText                                   ()
// class UMaterialInstanceDynamic*    CallFunc_GetMaterialInstance_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_FailureText                                   ()
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ScannerScreen_C*         K2Node_DynamicCast_AsUI_Scanner_Screen                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Reverse                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_LostText                                      ()
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_ScannerScreen_C::ExecuteUbergraph_BP_UI_ScannerScreen(int32 EntryPoint, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class FText K2Node_CustomEvent_SuccessText, class UMaterialInstanceDynamic* CallFunc_GetMaterialInstance_ReturnValue, class FText K2Node_CustomEvent_FailureText, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_ScannerScreen_C* K2Node_DynamicCast_AsUI_Scanner_Screen, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Reverse, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText K2Node_CustomEvent_LostText, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ExecuteUbergraph_BP_UI_ScannerScreen");

	Params::ABP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.K2Node_CustomEvent_SuccessText = K2Node_CustomEvent_SuccessText;
	Parms.CallFunc_GetMaterialInstance_ReturnValue = CallFunc_GetMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Scanner_Screen = K2Node_DynamicCast_AsUI_Scanner_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Reverse = K2Node_CustomEvent_Reverse;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_LostText = K2Node_CustomEvent_LostText;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
