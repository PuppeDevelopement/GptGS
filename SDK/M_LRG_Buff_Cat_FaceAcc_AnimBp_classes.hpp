#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB78 (0xF98 - 0x420)
// AnimBlueprintGeneratedClass M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C
class UM_LRG_Buff_Cat_FaceAcc_AnimBp_C : public UCustomCharacterPartAnimInstance_BuffcatFaceAcc
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x598(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5B8(0x20)()
	uint8                                        Pad_715B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x5E0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0xA20(0x440)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE60(0x78)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xED8(0xC0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_LRG_Buff_Cat_FaceAcc_AnimBp_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1();
	void ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
