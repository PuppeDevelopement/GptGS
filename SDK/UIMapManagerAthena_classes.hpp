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

// 0x8 (0x6C8 - 0x6C0)
// BlueprintGeneratedClass UIMapManagerAthena.UIMapManagerAthena_C
class AUIMapManagerAthena_C : public AFortInGameMapManagerAthena
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UIMapManagerAthena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
