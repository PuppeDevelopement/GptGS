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


// Function DonutChallengeListEntry.DonutChallengeListEntry_C.BPHasRewardTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               InHasReward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDonutChallengeListEntry_C::BPHasRewardTexture(bool InHasReward)
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_C", "BPHasRewardTexture");

	Params::UDonutChallengeListEntry_C_BPHasRewardTexture_Params Parms;

	Parms.InHasReward = InHasReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DonutChallengeListEntry.DonutChallengeListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDonutChallengeListEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_C", "BP_OnHovered");

	Params::UDonutChallengeListEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DonutChallengeListEntry.DonutChallengeListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDonutChallengeListEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_C", "BP_OnUnhovered");

	Params::UDonutChallengeListEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DonutChallengeListEntry.DonutChallengeListEntry_C.BPIsCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               InCompletion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDonutChallengeListEntry_C::BPIsCompleted(bool InCompletion)
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_C", "BPIsCompleted");

	Params::UDonutChallengeListEntry_C_BPIsCompleted_Params Parms;

	Parms.InCompletion = InCompletion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DonutChallengeListEntry.DonutChallengeListEntry_C.ExecuteUbergraph_DonutChallengeListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InHasReward                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InCompletion                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeListEntry_C::ExecuteUbergraph_DonutChallengeListEntry(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_InHasReward, int32 K2Node_Select_Default, bool K2Node_Event_InCompletion, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_C", "ExecuteUbergraph_DonutChallengeListEntry");

	Params::UDonutChallengeListEntry_C_ExecuteUbergraph_DonutChallengeListEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Event_InHasReward = K2Node_Event_InHasReward;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_InCompletion = K2Node_Event_InCompletion;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
