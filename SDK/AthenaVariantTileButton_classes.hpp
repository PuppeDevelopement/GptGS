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

// 0x8 (0xBF0 - 0xBE8)
// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaVariantTileButton_C");
		return Clss;
	}

	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* K2Node_Event_ListItemObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
