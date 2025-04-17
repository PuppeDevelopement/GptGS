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


// Function ArenaViewMeTab.ArenaViewMeTab_C.Colorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  ColorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UArenaViewMeTab_C::Colorize(const struct FFortTournamentDisplayInfo& ColorInfo)
{
	static auto Func = Class->GetFunction("ArenaViewMeTab_C", "Colorize");

	Params::UArenaViewMeTab_C_Colorize_Params Parms;

	Parms.ColorInfo = ColorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaViewMeTab.ArenaViewMeTab_C.ExecuteUbergraph_ArenaViewMeTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_ColorInfo                                     ()
// class UArenaPersonalView_C*        K2Node_DynamicCast_AsArena_Personal_View                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArenaViewMeTab_C::ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_ColorInfo, class UArenaPersonalView_C* K2Node_DynamicCast_AsArena_Personal_View, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ArenaViewMeTab_C", "ExecuteUbergraph_ArenaViewMeTab");

	Params::UArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ColorInfo = K2Node_CustomEvent_ColorInfo;
	Parms.K2Node_DynamicCast_AsArena_Personal_View = K2Node_DynamicCast_AsArena_Personal_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
