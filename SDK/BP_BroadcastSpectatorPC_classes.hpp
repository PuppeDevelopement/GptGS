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

// 0x0 (0x2D90 - 0x2D90)
// BlueprintGeneratedClass BP_BroadcastSpectatorPC.BP_BroadcastSpectatorPC_C
class ABP_BroadcastSpectatorPC_C : public AFortLiveBroadcastController
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BroadcastSpectatorPC_C");
		return Clss;
	}

	void UserConstructionScript(class UAthenaMarkerComponent* CallFunc_GetMarkerComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
