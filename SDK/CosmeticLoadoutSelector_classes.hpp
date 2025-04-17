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

// 0x20 (0x2A0 - 0x280)
// WidgetBlueprintGeneratedClass CosmeticLoadoutSelector.CosmeticLoadoutSelector_C
class UCosmeticLoadoutSelector_C : public UFortCosmeticLoadoutSelector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   Left_InputActionDisplay;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   Right_InputActionDisplay;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticLoadoutSelector_C");
		return Clss;
	}

	void OnLoadoutSet(int32 Selection);
	void OnNumLoadoutsFound(int32 NumLoadouts);
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint, int32 K2Node_Event_NumLoadouts, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, int32 K2Node_Event_Selection, float CallFunc_Conv_IntToFloat_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
