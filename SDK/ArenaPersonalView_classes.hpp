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

// 0x30 (0x688 - 0x658)
// WidgetBlueprintGeneratedClass ArenaPersonalView.ArenaPersonalView_C
class UArenaPersonalView_C : public UFortArenaPersonalDivisionView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_ContainerBG;                          // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FunTitle;                                          // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_DivisionProgress;                    // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxHype;                                 // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ArenaPersonalView_C");
		return Clss;
	}

	void Colorize(const struct FFortTournamentDisplayInfo& Color_Info);
	void ExecuteUbergraph_ArenaPersonalView(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_Color_Info, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
