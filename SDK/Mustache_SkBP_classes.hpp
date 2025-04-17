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

// 0x2D0 (0x580 - 0x2B0)
// AnimBlueprintGeneratedClass Mustache_SkBP.Mustache_SkBP_C
class UMustache_SkBP_C : public UFortWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2B8(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2E8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x310(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x338(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3B0(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3E0(0x78)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x458(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4A0(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x4D0(0xB0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mustache_SkBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Mustache_SkBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
