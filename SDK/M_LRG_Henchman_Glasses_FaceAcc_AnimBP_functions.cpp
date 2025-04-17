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


// Function M_LRG_Henchman_Glasses_FaceAcc_AnimBP.M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C", "AnimGraph");

	Params::UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function M_LRG_Henchman_Glasses_FaceAcc_AnimBP.M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Henchman_Glasses_FaceAcc_AnimBP.M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C.ExecuteUbergraph_M_LRG_Henchman_Glasses_FaceAcc_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C::ExecuteUbergraph_M_LRG_Henchman_Glasses_FaceAcc_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C", "ExecuteUbergraph_M_LRG_Henchman_Glasses_FaceAcc_AnimBP");

	Params::UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C_ExecuteUbergraph_M_LRG_Henchman_Glasses_FaceAcc_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
