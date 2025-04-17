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


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UWumba_Gadget_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "AnimGraph");

	Params::UWumba_Gadget_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.UpdateUpgradingVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWumba_Gadget_AnimBP_C::UpdateUpgradingVisuals(bool NewValue)
{
	static auto Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "UpdateUpgradingVisuals");

	Params::UWumba_Gadget_AnimBP_C_UpdateUpgradingVisuals_Params Parms;

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.ExecuteUbergraph_Wumba_Gadget_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWumba_Gadget_AnimBP_C::ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint, bool K2Node_CustomEvent_NewValue)
{
	static auto Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "ExecuteUbergraph_Wumba_Gadget_AnimBP");

	Params::UWumba_Gadget_AnimBP_C_ExecuteUbergraph_Wumba_Gadget_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
