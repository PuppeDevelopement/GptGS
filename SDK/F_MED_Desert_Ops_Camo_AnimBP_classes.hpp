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

// 0x6E4 (0xB44 - 0x460)
// AnimBlueprintGeneratedClass F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C
class UF_MED_Desert_Ops_Camo_AnimBP_C : public UCustomCharacterPartAnimInstance_DesertOpsBody
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x468(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x498(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5D8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x5F8(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x700(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x808(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x828(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x930(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0xA38(0x108)()
	float                                        VestAlpha;                                         // 0xB40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_Desert_Ops_Camo_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnCharacterCustomizationLoaded();
	void ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP(int32 EntryPoint, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
