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

// 0x7570 (0x7990 - 0x420)
// AnimBlueprintGeneratedClass M_MED_Cat_Burglar_AnimBP.M_MED_Cat_Burglar_AnimBP_C
class UM_MED_Cat_Burglar_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_4;                        // 0x598(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_3;                        // 0x6A0(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0x7A8(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x8B0(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x9B8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x9D8(0x20)()
	uint8                                        Pad_2DD6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_25;                     // 0xA00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_24;                     // 0xE40(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_23;                     // 0x1280(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_22;                     // 0x16C0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_21;                     // 0x1B00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_20;                     // 0x1F40(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_19;                     // 0x2380(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_18;                     // 0x27C0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_17;                     // 0x2C00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_16;                     // 0x3040(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_15;                     // 0x3480(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_14;                     // 0x38C0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_13;                     // 0x3D00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_12;                     // 0x4140(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_11;                     // 0x4580(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_10;                     // 0x49C0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_9;                      // 0x4E00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8;                      // 0x5240(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x5680(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0x5AC0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0x5F00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x6340(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x6780(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x6BC0(0x440)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x7000(0x108)()
	uint8                                        Pad_2DE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x7110(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x7550(0x440)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Cat_Burglar_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Cat_Burglar_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
