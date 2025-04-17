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


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)

void ABP_BP12_TransitionDoor_C::UserConstructionScript(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "UserConstructionScript");

	Params::ABP_BP12_TransitionDoor_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BP12_TransitionDoor_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "Timeline_0__FinishedFunc");

	Params::ABP_BP12_TransitionDoor_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BP12_TransitionDoor_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "Timeline_0__UpdateFunc");

	Params::ABP_BP12_TransitionDoor_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BP12_TransitionDoor_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "ReceiveBeginPlay");

	Params::ABP_BP12_TransitionDoor_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ExecuteUbergraph_BP_BP12_TransitionDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BP12_TransitionDoor_C::ExecuteUbergraph_BP_BP12_TransitionDoor(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "ExecuteUbergraph_BP_BP12_TransitionDoor");

	Params::ABP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
