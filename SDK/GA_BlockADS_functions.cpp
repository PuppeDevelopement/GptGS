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


// Function GA_BlockADS.GA_BlockADS_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_BlockADS_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_BlockADS_C", "K2_ActivateAbility");

	Params::UGA_BlockADS_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BlockADS.GA_BlockADS_C.ExecuteUbergraph_GA_BlockADS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BlockADS_C::ExecuteUbergraph_GA_BlockADS(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_BlockADS_C", "ExecuteUbergraph_GA_BlockADS");

	Params::UGA_BlockADS_C_ExecuteUbergraph_GA_BlockADS_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
