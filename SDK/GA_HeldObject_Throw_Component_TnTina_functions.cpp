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


// Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HeldObject_Throw_Component_TnTina_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_HeldObject_Throw_Component_TnTina_C", "K2_ActivateAbility");

	Params::UGA_HeldObject_Throw_Component_TnTina_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HeldObject_Throw_Component_TnTina_C::ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_HeldObject_Throw_Component_TnTina_C", "ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina");

	Params::UGA_HeldObject_Throw_Component_TnTina_C_ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
