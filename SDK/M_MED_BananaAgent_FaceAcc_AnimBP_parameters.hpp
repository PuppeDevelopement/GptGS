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

// 0x10 (0x10 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.AnimGraph
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.BlueprintInitializeAnimation
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_BlueprintInitializeAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnBeginTargeting
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_OnBeginTargeting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnEndTargeting
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_OnEndTargeting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnBeginPlayingEmote
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_OnBeginPlayingEmote_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnEndPlayingEmote
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_OnEndPlayingEmote_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.BlueprintUpdateAnimation
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.ExecuteUbergraph_M_MED_BananaAgent_FaceAcc_AnimBP
struct UM_MED_BananaAgent_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_BananaAgent_FaceAcc_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6751[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6752[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetPartSkeletalMeshComponent_ReturnValue; // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6753[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1; // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue_1; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
