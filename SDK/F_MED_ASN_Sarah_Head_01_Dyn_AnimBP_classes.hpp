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

// 0x838 (0xC58 - 0x420)
// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C
class UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x428(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x448(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4B8(0x30)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4E8(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x508(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x5A8(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5D0(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x688(0x28)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x6B0(0x5A0)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
