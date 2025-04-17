#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.UserConstructionScript
struct ABP_BP12_TransitionDoor_C_UserConstructionScript_Params
{
public:
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x30(0x30)(IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.Timeline_0__FinishedFunc
struct ABP_BP12_TransitionDoor_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.Timeline_0__UpdateFunc
struct ABP_BP12_TransitionDoor_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ReceiveBeginPlay
struct ABP_BP12_TransitionDoor_C_ReceiveBeginPlay_Params
{
public:
};

// 0xAC (0xAC - 0x0)
// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ExecuteUbergraph_BP_BP12_TransitionDoor
struct ABP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x20(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
