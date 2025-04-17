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


// Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnLoadoutSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutSelector_C::OnLoadoutSet(int32 Selection)
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSelector_C", "OnLoadoutSet");

	Params::UCosmeticLoadoutSelector_C_OnLoadoutSet_Params Parms;

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnNumLoadoutsFound
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumLoadouts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutSelector_C::OnNumLoadoutsFound(int32 NumLoadouts)
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSelector_C", "OnNumLoadoutsFound");

	Params::UCosmeticLoadoutSelector_C_OnNumLoadoutsFound_Params Parms;

	Parms.NumLoadouts = NumLoadouts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.ExecuteUbergraph_CosmeticLoadoutSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumLoadouts                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutSelector_C::ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint, int32 K2Node_Event_NumLoadouts, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, int32 K2Node_Event_Selection, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSelector_C", "ExecuteUbergraph_CosmeticLoadoutSelector");

	Params::UCosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NumLoadouts = K2Node_Event_NumLoadouts;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
