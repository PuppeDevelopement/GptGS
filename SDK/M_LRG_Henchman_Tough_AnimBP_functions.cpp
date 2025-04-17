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


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Henchman_Tough_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "AnimGraph");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.OnParachuteOpened
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_LRG_Henchman_Tough_AnimBP_C::OnParachuteOpened()
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "OnParachuteOpened");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_OnParachuteOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.OnBeginSkydiving
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_LRG_Henchman_Tough_AnimBP_C::OnBeginSkydiving()
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "OnBeginSkydiving");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_OnBeginSkydiving_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.OnEndSkydiving
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_LRG_Henchman_Tough_AnimBP_C::OnEndSkydiving()
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "OnEndSkydiving");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_OnEndSkydiving_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.OnEndCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_LRG_Henchman_Tough_AnimBP_C::OnEndCrouching()
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "OnEndCrouching");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_OnEndCrouching_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.OnEndJumping
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_LRG_Henchman_Tough_AnimBP_C::OnEndJumping()
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "OnEndJumping");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_OnEndJumping_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C.ExecuteUbergraph_M_LRG_Henchman_Tough_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Henchman_Tough_AnimBP_C::ExecuteUbergraph_M_LRG_Henchman_Tough_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Tough_AnimBP_C", "ExecuteUbergraph_M_LRG_Henchman_Tough_AnimBP");

	Params::UM_LRG_Henchman_Tough_AnimBP_C_ExecuteUbergraph_M_LRG_Henchman_Tough_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
