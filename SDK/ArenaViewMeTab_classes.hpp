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

// 0x8 (0x2E8 - 0x2E0)
// WidgetBlueprintGeneratedClass ArenaViewMeTab.ArenaViewMeTab_C
class UArenaViewMeTab_C : public UFortArenaPersonalViewTab
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ArenaViewMeTab_C");
		return Clss;
	}

	void Colorize(const struct FFortTournamentDisplayInfo& ColorInfo);
	void ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_ColorInfo, class UArenaPersonalView_C* K2Node_DynamicCast_AsArena_Personal_View, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
