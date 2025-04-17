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


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UExplosvieBow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "AnimGraph");

	Params::UExplosvieBow_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51
// (BlueprintEvent)
// Parameters:

void UExplosvieBow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51()
{
	static auto Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51");

	Params::UExplosvieBow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93
// (BlueprintEvent)
// Parameters:

void UExplosvieBow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93()
{
	static auto Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93");

	Params::UExplosvieBow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.ExecuteUbergraph_ExplosvieBow_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UExplosvieBow_AnimBP_C::ExecuteUbergraph_ExplosvieBow_AnimBP(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1)
{
	static auto Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "ExecuteUbergraph_ExplosvieBow_AnimBP");

	Params::UExplosvieBow_AnimBP_C_ExecuteUbergraph_ExplosvieBow_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
