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


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.SetCATextFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     ()

void UFloatingInteraction_Indicator_Dailies_C::SetCATextFX(class FText CallFunc_GetText_ReturnValue)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "SetCATextFX");

	Params::UFloatingInteraction_Indicator_Dailies_C_SetCATextFX_Params Parms;

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Dailies_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "PreConstruct");

	Params::UFloatingInteraction_Indicator_Dailies_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Dailies_C::OnObjectHoverBegin()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "OnObjectHoverBegin");

	Params::UFloatingInteraction_Indicator_Dailies_C_OnObjectHoverBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Dailies_C::OnObjectHoverEnd()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "OnObjectHoverEnd");

	Params::UFloatingInteraction_Indicator_Dailies_C_OnObjectHoverEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.TriggerLoopingHoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Dailies_C::TriggerLoopingHoverStateAnim()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "TriggerLoopingHoverStateAnim");

	Params::UFloatingInteraction_Indicator_Dailies_C_TriggerLoopingHoverStateAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Dailies_C::Construct()
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "Construct");

	Params::UFloatingInteraction_Indicator_Dailies_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Dailies.FloatingInteraction_Indicator_Dailies_C.ExecuteUbergraph_FloatingInteraction_Indicator_Dailies
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingInteraction_Indicator_Dailies_C::ExecuteUbergraph_FloatingInteraction_Indicator_Dailies(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static auto Func = Class->GetFunction("FloatingInteraction_Indicator_Dailies_C", "ExecuteUbergraph_FloatingInteraction_Indicator_Dailies");

	Params::UFloatingInteraction_Indicator_Dailies_C_ExecuteUbergraph_FloatingInteraction_Indicator_Dailies_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
