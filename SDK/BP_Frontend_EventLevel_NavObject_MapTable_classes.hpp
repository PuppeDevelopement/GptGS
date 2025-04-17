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

// 0x8 (0x508 - 0x500)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C
class ABP_Frontend_EventLevel_NavObject_MapTable_C : public AFortNavigationActor_MapTable
{
public:
	class UFortBangCheckComponent_Map*           FortBangCheckComponent_Map;                        // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_MapTable_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
