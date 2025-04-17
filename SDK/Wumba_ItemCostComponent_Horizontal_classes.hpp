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
// BlueprintGeneratedClass Wumba_ItemCostComponent_Horizontal.Wumba_ItemCostComponent_Horizontal_C
class UWumba_ItemCostComponent_Horizontal_C : public UItemCostComponent_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Wumba_ItemCostComponent_Horizontal_C");
		return Clss;
	}

	void GetCost(TMap<enum class EFortResourceType, int32>* Cost, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AB_Athena_Wumba_C* K2Node_DynamicCast_AsB_Athena_Wumba, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TMap<enum class EFortResourceType, int32> K2Node_MakeMap_Map);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
