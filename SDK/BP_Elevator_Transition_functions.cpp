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


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Transition_C::UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "UserConstructionScript");

	Params::ABP_Elevator_Transition_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_0__FinishedFunc");

	Params::ABP_Elevator_Transition_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_0__UpdateFunc");

	Params::ABP_Elevator_Transition_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_1__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_1__FinishedFunc");

	Params::ABP_Elevator_Transition_C_Timeline_1__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_1__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_1__UpdateFunc");

	Params::ABP_Elevator_Transition_C_Timeline_1__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_2__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_2__FinishedFunc");

	Params::ABP_Elevator_Transition_C_Timeline_2__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_2__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_2__UpdateFunc");

	Params::ABP_Elevator_Transition_C_Timeline_2__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Output Camera Position
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Output_Camera_Position()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Output Camera Position");

	Params::ABP_Elevator_Transition_C_Output_Camera_Position_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Open Doors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Open_Doors()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "Open Doors");

	Params::ABP_Elevator_Transition_C_Open_Doors_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.CloseDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::CloseDoors()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "CloseDoors");

	Params::ABP_Elevator_Transition_C_CloseDoors_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StartMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StartMoveUp()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "StartMoveUp");

	Params::ABP_Elevator_Transition_C_StartMoveUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StopMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StopMoveUp()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "StopMoveUp");

	Params::ABP_Elevator_Transition_C_StopMoveUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StartMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StartMoveDown()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "StartMoveDown");

	Params::ABP_Elevator_Transition_C_StartMoveDown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StopMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StopMoveDown()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "StopMoveDown");

	Params::ABP_Elevator_Transition_C_StopMoveDown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.OpenInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::OpenInstant()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "OpenInstant");

	Params::ABP_Elevator_Transition_C_OpenInstant_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.CloseInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::CloseInstant()
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "CloseInstant");

	Params::ABP_Elevator_Transition_C_CloseInstant_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.ExecuteUbergraph_BP_Elevator_Transition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Transition_C::ExecuteUbergraph_BP_Elevator_Transition(int32 EntryPoint, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_Elevator_Transition_C", "ExecuteUbergraph_BP_Elevator_Transition");

	Params::ABP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
