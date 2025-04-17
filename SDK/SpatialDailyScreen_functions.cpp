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


// Function SpatialDailyScreen.SpatialDailyScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpatialDailyScreen_C::Construct()
{
	static auto Func = Class->GetFunction("SpatialDailyScreen_C", "Construct");

	Params::USpatialDailyScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialDailyScreen.SpatialDailyScreen_C.ExecuteUbergraph_SpatialDailyScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialDailyScreen_C::ExecuteUbergraph_SpatialDailyScreen(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SpatialDailyScreen_C", "ExecuteUbergraph_SpatialDailyScreen");

	Params::USpatialDailyScreen_C_ExecuteUbergraph_SpatialDailyScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
