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


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDailyChallengeRerollButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnHovered");

	Params::UDailyChallengeRerollButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDailyChallengeRerollButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnUnhovered");

	Params::UDailyChallengeRerollButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDailyChallengeRerollButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnClicked");

	Params::UDailyChallengeRerollButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.ExecuteUbergraph_DailyChallengeRerollButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyChallengeRerollButton_C::ExecuteUbergraph_DailyChallengeRerollButton(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("DailyChallengeRerollButton_C", "ExecuteUbergraph_DailyChallengeRerollButton");

	Params::UDailyChallengeRerollButton_C_ExecuteUbergraph_DailyChallengeRerollButton_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
