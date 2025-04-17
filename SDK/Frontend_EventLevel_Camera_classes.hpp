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

// 0x8 (0x8C8 - 0x8C0)
// BlueprintGeneratedClass Frontend_EventLevel_Camera.Frontend_EventLevel_Camera_C
class AFrontend_EventLevel_Camera_C : public AFortEventLevelCamera
{
public:
	class UTextRenderComponent*                  TextRender;                                        // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_EventLevel_Camera_C");
		return Clss;
	}

	void UserConstructionScript(const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
