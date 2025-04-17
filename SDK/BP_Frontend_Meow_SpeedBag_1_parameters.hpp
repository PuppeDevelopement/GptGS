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

// 0x1 (0x1 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.CanCommitNavigationRequest
struct ABP_Frontend_Meow_SpeedBag_1_C_CanCommitNavigationRequest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__FinishedFunc
struct ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__UpdateFunc
struct ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__ResetWobbleStrength__EventFunc
struct ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___ResetWobbleStrength__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__Retrigger__EventFunc
struct ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___Retrigger__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Commit_OnSpecialInteraction
struct ABP_Frontend_Meow_SpeedBag_1_C_Commit_OnSpecialInteraction_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.HandleObjectSpecialInteraction
struct ABP_Frontend_Meow_SpeedBag_1_C_HandleObjectSpecialInteraction_Params
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CameraTag;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.ReceiveBeginPlay
struct ABP_Frontend_Meow_SpeedBag_1_C_ReceiveBeginPlay_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.ExecuteUbergraph_BP_Frontend_Meow_SpeedBag_1
struct ABP_Frontend_Meow_SpeedBag_1_C_ExecuteUbergraph_BP_Frontend_Meow_SpeedBag_1_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ActionTag;                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_CameraTag;                            // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
