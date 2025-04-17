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

// 0x1042 (0x1462 - 0x420)
// AnimBlueprintGeneratedClass F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C
class UF_MED_Photographer_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x598(0x348)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x8E0(0x5A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE80(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xEA0(0x20)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xEC0(0x5A0)()
	bool                                         PhotoTraverse;                                     // 0x1460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PhotoTraverseINV;                                  // 0x1461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_Photographer_FaceAcc_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnNotifyPartsStarted(class FName Context);
	void OnNotifyPartsStopped(class FName Context);
	void OnParachuteClosed();
	void ExecuteUbergraph_F_MED_Photographer_FaceAcc_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Montage_IsActive_ReturnValue, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class FName K2Node_Event_Context_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_Event_Context, bool K2Node_SwitchName_CmpSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
