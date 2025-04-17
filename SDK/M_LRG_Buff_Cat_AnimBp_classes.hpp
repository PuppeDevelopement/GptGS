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

// 0xD41 (0x1171 - 0x430)
// AnimBlueprintGeneratedClass M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C
class UM_LRG_Buff_Cat_AnimBp_C : public UCustomCharacterPartAnimInstance_BuffCatBody
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x438(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x468(0x140)(ContainsInstancedReference)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x5A8(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x6B0(0x108)()
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x7B8(0x348)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xB00(0x20)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0xB20(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xC28(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0xD30(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xE38(0x108)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xF40(0xC0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1000(0x20)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x1020(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1068(0x108)()
	bool                                         IsSitting;                                         // 0x1170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_LRG_Buff_Cat_AnimBp_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnNotifyPartsStarted(class FName Context);
	void OnNotifyPartsStopped(class FName Context);
	void ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp(int32 EntryPoint, class FName K2Node_Event_Context_1, class FName K2Node_Event_Context, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
