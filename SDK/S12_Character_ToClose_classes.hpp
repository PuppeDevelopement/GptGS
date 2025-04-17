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

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass S12_Character_ToClose.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequenceDirector_C");
		return Clss;
	}

	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void Audio_Camera_Move_Event(class USoundBase* Sound);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_Sound);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
