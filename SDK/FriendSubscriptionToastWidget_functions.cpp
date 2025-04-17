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


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::Construct()
{
	static auto Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "Construct");

	Params::UFriendSubscriptionToastWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendSubscriptionToastWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "PreConstruct");

	Params::UFriendSubscriptionToastWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::Popup_Animation_Finished()
{
	static auto Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "Popup Animation Finished");

	Params::UFriendSubscriptionToastWidget_C_Popup_Animation_Finished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::OnPlayOpenAnimation()
{
	static auto Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "OnPlayOpenAnimation");

	Params::UFriendSubscriptionToastWidget_C_OnPlayOpenAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::OnPlayCloseAnimation()
{
	static auto Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "OnPlayCloseAnimation");

	Params::UFriendSubscriptionToastWidget_C_OnPlayCloseAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.ExecuteUbergraph_FriendSubscriptionToastWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendSubscriptionToastWidget_C::ExecuteUbergraph_FriendSubscriptionToastWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "ExecuteUbergraph_FriendSubscriptionToastWidget");

	Params::UFriendSubscriptionToastWidget_C_ExecuteUbergraph_FriendSubscriptionToastWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
