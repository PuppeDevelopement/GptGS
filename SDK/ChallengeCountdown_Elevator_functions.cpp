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


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeCountdown_Elevator_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "PreConstruct");

	Params::UChallengeCountdown_Elevator_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeCountdown_Elevator_C::Construct()
{
	static auto Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "Construct");

	Params::UChallengeCountdown_Elevator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.OnChallengeSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTimerDisplayData           DisplayStyle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeCountdown_Elevator_C::OnChallengeSet(struct FTimerDisplayData& DisplayStyle)
{
	static auto Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "OnChallengeSet");

	Params::UChallengeCountdown_Elevator_C_OnChallengeSet_Params Parms;

	Parms.DisplayStyle = DisplayStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.ExecuteUbergraph_ChallengeCountdown_Elevator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerDisplayData           K2Node_Event_DisplayStyle                                        (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeCountdown_Elevator_C::ExecuteUbergraph_ChallengeCountdown_Elevator(int32 EntryPoint, const struct FTimerDisplayData& K2Node_Event_DisplayStyle, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "ExecuteUbergraph_ChallengeCountdown_Elevator");

	Params::UChallengeCountdown_Elevator_C_ExecuteUbergraph_ChallengeCountdown_Elevator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DisplayStyle = K2Node_Event_DisplayStyle;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
