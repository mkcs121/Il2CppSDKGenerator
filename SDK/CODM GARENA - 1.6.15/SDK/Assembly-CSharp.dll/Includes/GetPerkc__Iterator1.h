#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPerkcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPerk>c__Iterator1"));
	}

	template <typename T = float> T& putWeaponAnimLen__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& bottle1PAssetID__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& getPerkAnimLen__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetPerkcIterator1*))(Il2CppBase() + 0x461FC38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetPerkcIterator1*))(Il2CppBase() + 0x46207DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetPerkcIterator1*))(Il2CppBase() + 0x46207E4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetPerkcIterator1*))(Il2CppBase() + 0x46207EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetPerkcIterator1*))(Il2CppBase() + 0x4620800))(this);
	}

};

}