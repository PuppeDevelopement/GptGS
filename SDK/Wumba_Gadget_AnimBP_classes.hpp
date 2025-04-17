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

// 0x575 (0x7E5 - 0x270)
// AnimBlueprintGeneratedClass Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C
class UWumba_Gadget_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2F0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x318(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x390(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3C0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x438(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x468(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x4E0(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x510(0xB0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x5C0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x688(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x700(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x730(0xB0)()
	float                                        PegBoard_Speed;                                    // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasFinishedUpgrading;                             // 0x7E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Wumba_Gadget_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateUpgradingVisuals(bool NewValue);
	void ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint, bool K2Node_CustomEvent_NewValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
