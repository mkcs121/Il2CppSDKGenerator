#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDetailEquipBtnClickcAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDetailEquipBtnClick>c__AnonStorey6"));
	}

	template <typename T = bool> T& bMainWeapon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& itemGuid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}