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


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Play_Swipe_Montage_C::OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static auto Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF");

	Params::UGA_Play_Swipe_Montage_C_OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Play_Swipe_Montage_C::OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static auto Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF");

	Params::UGA_Play_Swipe_Montage_C_OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Play_Swipe_Montage_C::OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static auto Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF");

	Params::UGA_Play_Swipe_Montage_C_OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Play_Swipe_Montage_C::OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static auto Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF");

	Params::UGA_Play_Swipe_Montage_C_OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Play_Swipe_Montage_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "K2_ActivateAbility");

	Params::UGA_Play_Swipe_Montage_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.ExecuteUbergraph_GA_Play_Swipe_Montage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Play_Swipe_Montage_C::ExecuteUbergraph_GA_Play_Swipe_Montage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "ExecuteUbergraph_GA_Play_Swipe_Montage");

	Params::UGA_Play_Swipe_Montage_C_ExecuteUbergraph_GA_Play_Swipe_Montage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
