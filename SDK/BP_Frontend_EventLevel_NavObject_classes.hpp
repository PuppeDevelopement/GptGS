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

// 0x8 (0x4D0 - 0x4C8)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject.BP_Frontend_EventLevel_NavObject_C
class ABP_Frontend_EventLevel_NavObject_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
