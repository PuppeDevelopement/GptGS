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


// Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_DangerGrape_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_DangerGrape_C", "K2_ActivateAbility");

	Params::UGA_Athena_DangerGrape_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.ExecuteUbergraph_GA_Athena_DangerGrape
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_DangerGrape_C::ExecuteUbergraph_GA_Athena_DangerGrape(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_DangerGrape_C", "ExecuteUbergraph_GA_Athena_DangerGrape");

	Params::UGA_Athena_DangerGrape_C_ExecuteUbergraph_GA_Athena_DangerGrape_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
