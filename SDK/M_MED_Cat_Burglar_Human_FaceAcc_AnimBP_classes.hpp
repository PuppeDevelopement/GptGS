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

// 0x23C0 (0x27E0 - 0x420)
// AnimBlueprintGeneratedClass M_MED_Cat_Burglar_Human_FaceAcc_AnimBP.M_MED_Cat_Burglar_Human_FaceAcc_AnimBP_C
class UM_MED_Cat_Burglar_Human_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	uint8                                        Pad_6C26[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x5A0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0x9E0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0xE20(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x1260(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x16A0(0x440)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1AE0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1B00(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x1B20(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x1F60(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x23A0(0x440)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Cat_Burglar_Human_FaceAcc_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Cat_Burglar_Human_FaceAcc_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
