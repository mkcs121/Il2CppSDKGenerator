#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SparrowStickActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SparrowStickActor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(SparrowStickActor*, uintptr_t))(Il2CppBase() + 0x390DA80))(this, inData);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(SparrowStickActor*, uintptr_t))(Il2CppBase() + 0x390DC20))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(SparrowStickActor*, uintptr_t))(Il2CppBase() + 0x390DD54))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(SparrowStickActor*, uintptr_t))(Il2CppBase() + 0x390DD5C))(this, P0);
	}

};

}