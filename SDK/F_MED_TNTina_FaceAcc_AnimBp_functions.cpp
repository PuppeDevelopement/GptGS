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


// Function F_MED_TNTina_FaceAcc_AnimBp.F_MED_TNTina_FaceAcc_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("F_MED_TNTina_FaceAcc_AnimBp_C", "AnimGraph");

	Params::UF_MED_TNTina_FaceAcc_AnimBp_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function F_MED_TNTina_FaceAcc_AnimBp.F_MED_TNTina_FaceAcc_AnimBp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_TNTina_FaceAcc_AnimBp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("F_MED_TNTina_FaceAcc_AnimBp_C", "BlueprintUpdateAnimation");

	Params::UF_MED_TNTina_FaceAcc_AnimBp_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_TNTina_FaceAcc_AnimBp.F_MED_TNTina_FaceAcc_AnimBp_C.ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_TNTina_FaceAcc_AnimBp_C::ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static auto Func = Class->GetFunction("F_MED_TNTina_FaceAcc_AnimBp_C", "ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp");

	Params::UF_MED_TNTina_FaceAcc_AnimBp_C_ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
