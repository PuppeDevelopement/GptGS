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

// 0x10 (0x2A8 - 0x298)
// Class HoagieUI.FortHoagieVehicleReticle
class UFortHoagieVehicleReticle : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_0[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortHoagieVehicle*                    OwningHoagieVehicle;                               // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieVehicleReticle");
		return Clss;
	}

	void OnSetupComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
