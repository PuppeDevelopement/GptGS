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


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.SetCATextFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     ()

void UFloatingInteraction_Indicator_Armory_C::SetCATextFX(class FText CallFunc_GetText_ReturnValue)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "SetCATextFX");

	Params::UFloatingInteraction_Indicator_Armory_C_SetCATextFX_Params Parms;

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Armory_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "PreConstruct");

	Params::UFloatingInteraction_Indicator_Armory_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::OnObjectHoverBegin()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "OnObjectHoverBegin");

	Params::UFloatingInteraction_Indicator_Armory_C_OnObjectHoverBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::OnObjectHoverEnd()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "OnObjectHoverEnd");

	Params::UFloatingInteraction_Indicator_Armory_C_OnObjectHoverEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.TriggerLoopingHoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::TriggerLoopingHoverStateAnim()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "TriggerLoopingHoverStateAnim");

	Params::UFloatingInteraction_Indicator_Armory_C_TriggerLoopingHoverStateAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.SetBangState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowBang                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Armory_C::SetBangState(bool bShowBang)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "SetBangState");

	Params::UFloatingInteraction_Indicator_Armory_C_SetBangState_Params Parms;

	Parms.bShowBang = bShowBang;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::Construct()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "Construct");

	Params::UFloatingInteraction_Indicator_Armory_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.ExecuteUbergraph_FloatingInteraction_Indicator_Armory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowBang                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingInteraction_Indicator_Armory_C::ExecuteUbergraph_FloatingInteraction_Indicator_Armory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_bShowBang, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "ExecuteUbergraph_FloatingInteraction_Indicator_Armory");

	Params::UFloatingInteraction_Indicator_Armory_C_ExecuteUbergraph_FloatingInteraction_Indicator_Armory_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_bShowBang = K2Node_Event_bShowBang;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_6 = CallFunc_GetDynamicMaterial_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
