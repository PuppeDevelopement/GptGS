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


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Donut_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "AnimGraph");

	Params::UM_MED_Donut_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.OnBeginCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Donut_AnimBP_C::OnBeginCrouching()
{
	static auto Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "OnBeginCrouching");

	Params::UM_MED_Donut_AnimBP_C_OnBeginCrouching_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.OnEndCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Donut_AnimBP_C::OnEndCrouching()
{
	static auto Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "OnEndCrouching");

	Params::UM_MED_Donut_AnimBP_C_OnEndCrouching_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.ExecuteUbergraph_M_MED_Donut_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Donut_AnimBP_C::ExecuteUbergraph_M_MED_Donut_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "ExecuteUbergraph_M_MED_Donut_AnimBP");

	Params::UM_MED_Donut_AnimBP_C_ExecuteUbergraph_M_MED_Donut_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
