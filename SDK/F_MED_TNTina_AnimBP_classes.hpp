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

// 0x26E0 (0x2B00 - 0x420)
// AnimBlueprintGeneratedClass F_MED_TNTina_AnimBP.F_MED_TNTina_AnimBP_C
class UF_MED_TNTina_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	uint8                                        Pad_2C20[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x5A0(0x440)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x9E0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xA00(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0xA20(0x440)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0xE60(0x108)()
	uint8                                        Pad_2C23[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0xF70(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x13B0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x17F0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x1C30(0x440)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x2070(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x2178(0x108)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x2280(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x26C0(0x440)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_TNTina_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_TNTina_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
