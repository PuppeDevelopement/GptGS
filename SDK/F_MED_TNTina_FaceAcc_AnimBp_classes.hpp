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

// 0x122C (0x164C - 0x420)
// AnimBlueprintGeneratedClass F_MED_TNTina_FaceAcc_AnimBp.F_MED_TNTina_FaceAcc_AnimBp_C
class UF_MED_TNTina_FaceAcc_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x598(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5B8(0x20)()
	uint8                                        Pad_7167[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x5E0(0x5A0)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xB80(0x5A0)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x1120(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x1228(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1330(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1438(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1540(0x108)()
	float                                        HeadRotBack;                                       // 0x1648(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_TNTina_FaceAcc_AnimBp_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
