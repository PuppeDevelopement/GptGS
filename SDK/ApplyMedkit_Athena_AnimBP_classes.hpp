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

// 0x2F8 (0x598 - 0x2A0)
// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
class UApplyMedkit_Athena_AnimBP_C : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2A8(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2D8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x320(0x78)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x398(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x448(0xB8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x500(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x548(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x570(0x28)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ApplyMedkit_Athena_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
