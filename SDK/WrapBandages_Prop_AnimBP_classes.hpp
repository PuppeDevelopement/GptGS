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
// AnimBlueprintGeneratedClass WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C
class UWrapBandages_Prop_AnimBP_C : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2A8(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2D8(0x78)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x350(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x398(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x448(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x500(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x528(0x28)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x550(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WrapBandages_Prop_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_WrapBandages_Prop_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
