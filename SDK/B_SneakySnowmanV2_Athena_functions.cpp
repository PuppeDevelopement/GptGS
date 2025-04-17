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


// Function B_SneakySnowmanV2_Athena.B_SneakySnowmanV2_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_SneakySnowmanV2_Athena_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_SneakySnowmanV2_Athena_C", "K2_OnUnEquip");

	Params::AB_SneakySnowmanV2_Athena_C_K2_OnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_SneakySnowmanV2_Athena.B_SneakySnowmanV2_Athena_C.ExecuteUbergraph_B_SneakySnowmanV2_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SneakySnowmanV2_Athena_C::ExecuteUbergraph_B_SneakySnowmanV2_Athena(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_SneakySnowmanV2_Athena_C", "ExecuteUbergraph_B_SneakySnowmanV2_Athena");

	Params::AB_SneakySnowmanV2_Athena_C_ExecuteUbergraph_B_SneakySnowmanV2_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
