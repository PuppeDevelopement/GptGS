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


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchmakingPlayButton_C::SetButtonText(class FText InText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "SetButtonText");

	Params::UAthenaMatchmakingPlayButton_C_SetButtonText_Params Parms;

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayButton_C::ExecuteUbergraph_AthenaMatchmakingPlayButton(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "ExecuteUbergraph_AthenaMatchmakingPlayButton");

	Params::UAthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
