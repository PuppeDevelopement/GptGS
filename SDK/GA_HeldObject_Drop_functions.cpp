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


// Function GA_HeldObject_Drop.GA_HeldObject_Drop_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HeldObject_Drop_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_HeldObject_Drop_C", "K2_ActivateAbility");

	Params::UGA_HeldObject_Drop_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HeldObject_Drop.GA_HeldObject_Drop_C.ExecuteUbergraph_GA_HeldObject_Drop
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HeldObject_Drop_C::ExecuteUbergraph_GA_HeldObject_Drop(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_HeldObject_Drop_C", "ExecuteUbergraph_GA_HeldObject_Drop");

	Params::UGA_HeldObject_Drop_C_ExecuteUbergraph_GA_HeldObject_Drop_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
