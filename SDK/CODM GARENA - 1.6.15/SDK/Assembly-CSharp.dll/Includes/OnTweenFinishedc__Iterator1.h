#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnTweenFinishedcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnTweenFinished>c__Iterator1"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnTweenFinishedcIterator1*))(Il2CppBase() + 0x3D9D5C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(OnTweenFinishedcIterator1*))(Il2CppBase() + 0x3D9D6D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnTweenFinishedcIterator1*))(Il2CppBase() + 0x3D9D6DC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(OnTweenFinishedcIterator1*))(Il2CppBase() + 0x3D9D6E4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(OnTweenFinishedcIterator1*))(Il2CppBase() + 0x3D9D6F8))(this);
	}

};

}