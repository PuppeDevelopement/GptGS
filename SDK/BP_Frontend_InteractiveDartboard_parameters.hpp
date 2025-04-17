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
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.CanCommitNavigationRequest
struct ABP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.AnimateDart__FinishedFunc
struct ABP_Frontend_InteractiveDartboard_C_AnimateDart__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.AnimateDart__UpdateFunc
struct ABP_Frontend_InteractiveDartboard_C_AnimateDart__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.AnimateDart__DisableFX__EventFunc
struct ABP_Frontend_InteractiveDartboard_C_AnimateDart__DisableFX__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_0__FinishedFunc
struct ABP_Frontend_InteractiveDartboard_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_0__UpdateFunc
struct ABP_Frontend_InteractiveDartboard_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_0__DisableFX__EventFunc
struct ABP_Frontend_InteractiveDartboard_C_Timeline_0__DisableFX__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_1__FinishedFunc
struct ABP_Frontend_InteractiveDartboard_C_Timeline_1__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_1__UpdateFunc
struct ABP_Frontend_InteractiveDartboard_C_Timeline_1__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_1__DisableFX__EventFunc
struct ABP_Frontend_InteractiveDartboard_C_Timeline_1__DisableFX__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ReceiveBeginPlay
struct ABP_Frontend_InteractiveDartboard_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Commit_OnSpecialInteraction
struct ABP_Frontend_InteractiveDartboard_C_Commit_OnSpecialInteraction_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.HandleObjectSpecialInteraction
struct ABP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction_Params
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CameraTag;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ResetAll
struct ABP_Frontend_InteractiveDartboard_C_ResetAll_Params
{
public:
};

// 0x3CC (0x3CC - 0x0)
// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ExecuteUbergraph_BP_Frontend_InteractiveDartboard
struct ABP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_717F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ActionTag;                            // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_CameraTag;                            // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x38(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_7180[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0xDC(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_1;               // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_2;               // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_1;                      // 0x178(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x184(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue_2;                      // 0x210(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_3;  // 0x21C(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_4;  // 0x2A8(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_5;  // 0x334(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7181[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
