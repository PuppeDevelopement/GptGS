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


// Function ArenaPersonalView.ArenaPersonalView_C.Colorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  Color_Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UArenaPersonalView_C::Colorize(const struct FFortTournamentDisplayInfo& Color_Info)
{
	static auto Func = Class->GetFunction("ArenaPersonalView_C", "Colorize");

	Params::UArenaPersonalView_C_Colorize_Params Parms;

	Parms.Color_Info = Color_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaPersonalView.ArenaPersonalView_C.ExecuteUbergraph_ArenaPersonalView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_Color_Info                                    ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaPersonalView_C::ExecuteUbergraph_ArenaPersonalView(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_Color_Info, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("ArenaPersonalView_C", "ExecuteUbergraph_ArenaPersonalView");

	Params::UArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Color_Info = K2Node_CustomEvent_Color_Info;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
