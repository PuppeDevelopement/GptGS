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

// 0x10 (0x5D8 - 0x5C8)
// WidgetBlueprintGeneratedClass ActivatableMovieWidget_Monolithic_Native.ActivatableMovieWidget_Monolithic_Native_C
class UActivatableMovieWidget_Monolithic_Native_C : public UFortActivatableMovieWidget_Monolithic
{
public:
	class USafeZone*                             MainSafeZone;                                      // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SafeZonePadding;                                   // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActivatableMovieWidget_Monolithic_Native_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
