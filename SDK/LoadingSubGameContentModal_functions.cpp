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


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSubGameContentModal_C::OnUpdatedProgress(float Percent)
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnUpdatedProgress");

	Params::ULoadingSubGameContentModal_C_OnUpdatedProgress_Params Parms;

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingSubGameContentModal_C::OnInitialized()
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnInitialized");

	Params::ULoadingSubGameContentModal_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percent                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsPercent_Float_ReturnValue                             ()

void ULoadingSubGameContentModal_C::ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Event_Percent, class FText CallFunc_AsPercent_Float_ReturnValue)
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "ExecuteUbergraph_LoadingSubGameContentModal");

	Params::ULoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Percent = K2Node_Event_Percent;
	Parms.CallFunc_AsPercent_Float_ReturnValue = CallFunc_AsPercent_Float_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
