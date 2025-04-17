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

// 0x28 (0x28 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingDiveJumpingLayer
struct USwimmingAnimBP_C_SwimmingDiveJumpingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingDiveJumping;                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         IsHidingInPropLayer2;                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MainInstanceDiveJumpLayerAlpha;                    // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             SwimmingDiveJumpingLayer;                          // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingFullBodyAdditiveLayer
struct USwimmingAnimBP_C_SwimmingFullBodyAdditiveLayer_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyAdditive;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingFullBodyAdditiveLayer;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingAdditiveLayer
struct USwimmingAnimBP_C_SwimmingAdditiveLayer_Params
{
public:
	struct FPoseLink                             IdleAdditive_Cache;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementAdditiveLayerPose_Cache;                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBody;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        PlayMeleeAttackAOLayer;                            // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableArmsHeadAdditiveCurveAlphaLayer;            // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableIKRootAdditiveCurveAlphaLayer;              // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocomotionAdditiveAlphaLayer;                      // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MainInstanceAdditiveLayerAlpha;                    // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             UpperAndLowerBody_Cache;                           // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SprintingPose_PostMask_Cache;                      // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingAdditiveLayer;                             // 0x68(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLowerBodyLayer
struct USwimmingAnimBP_C_SwimmingLowerBodyLayer_Params
{
public:
	struct FPoseLink                             UpperBody_Cache;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PreUpperBodySlot_Cache;                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PassThroughSwimmingLowerBody;                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingLowerBodyLayer;                            // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseNonTargetingLayer
struct USwimmingAnimBP_C_SwimmingUpperBodyPoseNonTargetingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingUpperBodyPoseNonTargeting;      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingUpperBodyPoseNonTargetingLayer;            // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseTargetingLayer
struct USwimmingAnimBP_C_SwimmingUpperBodyPoseTargetingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingUpperBodyPoseTargeting;         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingUpperBodyPoseTargetingLayer;               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingMovementAdditiveLayerPose
struct USwimmingAnimBP_C_SwimmingMovementAdditiveLayerPose_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingMovementAdditive;               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingMovementAdditiveLayerPose;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingSprintLayer
struct USwimmingAnimBP_C_SwimmingSprintLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingSprint;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         IsHidingInPropLayer;                               // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             SwimmingSprintLayer;                               // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLayer
struct USwimmingAnimBP_C_SwimmingLayer_Params
{
public:
	struct FPoseLink                             MainPlayerAnimBP;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingLayer;                                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
struct USwimmingAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TwoWayBlend_A3561BB7441E2419F698A6B2E1226C55
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TwoWayBlend_A3561BB7441E2419F698A6B2E1226C55_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_BlendListByBool_BC6595924B39D86BBB429B983FEC9301
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_BlendListByBool_BC6595924B39D86BBB429B983FEC9301_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_BlendListByBool_AA47084445E70A3E11A826864AB2B47C
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_BlendListByBool_AA47084445E70A3E11A826864AB2B47C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Exited_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprint_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintSlow_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimStartAdditive_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimMovementAccelAdditive_Exited_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TwoWayBlend_9A20F4564EAD615E503C6F9118FBEE57
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TwoWayBlend_9A20F4564EAD615E503C6F9118FBEE57_Params
{
public:
};

// 0x16 (0x16 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
struct USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRelevantAnimTime_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRelevantAnimTime_ReturnValue_1;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
