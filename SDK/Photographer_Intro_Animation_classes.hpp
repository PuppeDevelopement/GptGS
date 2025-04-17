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
// BlueprintGeneratedClass Photographer_Intro_Animation.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequenceDirector_C");
		return Clss;
	}

	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Adventure);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_);
	void Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes__Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_, bool bStreamIn);
	void BP_Battlepass_LightSwitcher_Adventure_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Adventure);
	void BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_, bool K2Node_CustomEvent_bStreamIn, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
