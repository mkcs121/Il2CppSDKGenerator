#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEAITaskInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEAITaskInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Targets() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PathNames() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PVEAITaskInfo*))(Il2CppBase() + 0x406A010))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PVEAITaskInfo*))(Il2CppBase() + 0x406A0A8))(this);
	}

};

}