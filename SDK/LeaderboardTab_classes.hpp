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

// 0x20 (0x310 - 0x2F0)
// WidgetBlueprintGeneratedClass LeaderboardTab.LeaderboardTab_C
class ULeaderboardTab_C : public UFortLeaderboardViewTab
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_ContainerBG;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardHeader_C*             EventLeaderboardHeaderDetails;                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_NoLeaderboardEntries;                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardTab_C");
		return Clss;
	}

	void Colorize(const struct FFortTournamentDisplayInfo& Color_Info);
	void Set_Event(const class FString& EventId, const class FString& EventWindowId);
	void ExecuteUbergraph_LeaderboardTab(int32 EntryPoint, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_EventId, const class FString& K2Node_CustomEvent_EventWindowId, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_Color_Info, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper_1, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
