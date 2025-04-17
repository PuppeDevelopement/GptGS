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


// Function SoldierMannequin_Male.SoldierMannequin_Male_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASoldierMannequin_Male_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("SoldierMannequin_Male_C", "ReceiveBeginPlay");

	Params::ASoldierMannequin_Male_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SoldierMannequin_Male.SoldierMannequin_Male_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ASoldierMannequin_Male_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("SoldierMannequin_Male_C", "ReceiveDestroyed");

	Params::ASoldierMannequin_Male_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SoldierMannequin_Male.SoldierMannequin_Male_C.ExecuteUbergraph_SoldierMannequin_Male
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoldierMannequin_Male_C::ExecuteUbergraph_SoldierMannequin_Male(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("SoldierMannequin_Male_C", "ExecuteUbergraph_SoldierMannequin_Male");

	Params::ASoldierMannequin_Male_C_ExecuteUbergraph_SoldierMannequin_Male_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
