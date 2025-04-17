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

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass ItemCostComponent.ItemCostComponent_C
class UItemCostComponent_C : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCostComponent_C");
		return Clss;
	}

	void GetCost(TMap<enum class EFortResourceType, int32>* Cost);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
