#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class TrophySeasonRewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "TrophySeasonRewardItem"));
	}

	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Item_Num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Item_Prize_Num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Item_Duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}