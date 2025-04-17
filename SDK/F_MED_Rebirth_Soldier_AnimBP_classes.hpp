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

// 0xF10 (0x1330 - 0x420)
// AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C
class UF_MED_Rebirth_Soldier_AnimBP_C : public UCustomCharacterPartAnimInstance_Rebirth_Soldier_F
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_64C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x430(0x5A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x9D0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x9F0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xA10(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xB18(0x108)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xC20(0x5A0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x11C0(0x140)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1300(0x30)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_Rebirth_Soldier_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
