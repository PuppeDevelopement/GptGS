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


// Function GSC_C2S2_BattlePass.GSC_C2S2_BattlePass_C.OnNavActorSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_C2S2_BattlePass_C::OnNavActorSelected()
{
	static auto Func = Class->GetFunction("GSC_C2S2_BattlePass_C", "OnNavActorSelected");

	Params::UGSC_C2S2_BattlePass_C_OnNavActorSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GSC_C2S2_BattlePass.GSC_C2S2_BattlePass_C.OnNavActorHovered
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_C2S2_BattlePass_C::OnNavActorHovered()
{
	static auto Func = Class->GetFunction("GSC_C2S2_BattlePass_C", "OnNavActorHovered");

	Params::UGSC_C2S2_BattlePass_C_OnNavActorHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GSC_C2S2_BattlePass.GSC_C2S2_BattlePass_C.ExecuteUbergraph_GSC_C2S2_BattlePass
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGSC_C2S2_BattlePass_C::ExecuteUbergraph_GSC_C2S2_BattlePass(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GSC_C2S2_BattlePass_C", "ExecuteUbergraph_GSC_C2S2_BattlePass");

	Params::UGSC_C2S2_BattlePass_C_ExecuteUbergraph_GSC_C2S2_BattlePass_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
