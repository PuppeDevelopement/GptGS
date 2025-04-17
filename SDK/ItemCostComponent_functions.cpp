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


// Function ItemCostComponent.ItemCostComponent_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<enum class EFortResourceType, int32>Cost                                                             (Parm, OutParm, ZeroConstructor)

void UItemCostComponent_C::GetCost(TMap<enum class EFortResourceType, int32>* Cost)
{
	static auto Func = Class->GetFunction("ItemCostComponent_C", "GetCost");

	Params::UItemCostComponent_C_GetCost_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = Parms.Cost;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
