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


// Function GA_Athena_Apply_SneakySnowman_Passive.GA_Athena_Apply_SneakySnowman_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowman_Passive_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_Apply_SneakySnowman_Passive_C", "K2_ActivateAbility");

	Params::UGA_Athena_Apply_SneakySnowman_Passive_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowman_Passive.GA_Athena_Apply_SneakySnowman_Passive_C.ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Passive
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowman_Passive_C::ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Passive(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_Athena_Apply_SneakySnowman_Passive_C", "ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Passive");

	Params::UGA_Athena_Apply_SneakySnowman_Passive_C_ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Passive_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
