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

// 0x10 (0x4E0 - 0x4D0)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_Mannequin.BP_Frontend_EventLevel_NavObject_Mannequin_C
class ABP_Frontend_EventLevel_NavObject_Mannequin_C : public ABP_Frontend_EventLevel_NavObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  Mannequin;                                         // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_Mannequin_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
