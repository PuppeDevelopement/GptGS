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


// Function M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("M_LRG_Buff_Cat_FaceAcc_AnimBp_C", "AnimGraph");

	Params::UM_LRG_Buff_Cat_FaceAcc_AnimBp_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1
// (BlueprintEvent)
// Parameters:

void UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1()
{
	static auto Func = Class->GetFunction("M_LRG_Buff_Cat_FaceAcc_AnimBp_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1");

	Params::UM_LRG_Buff_Cat_FaceAcc_AnimBp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C.ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("M_LRG_Buff_Cat_FaceAcc_AnimBp_C", "ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp");

	Params::UM_LRG_Buff_Cat_FaceAcc_AnimBp_C_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
