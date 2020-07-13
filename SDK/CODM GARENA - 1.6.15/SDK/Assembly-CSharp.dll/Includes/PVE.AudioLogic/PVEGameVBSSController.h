#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.AudioLogic {

class PVEGameVBSSController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.AudioLogic", "PVEGameVBSSController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mCurPawns() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mCurUpdateFrameCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mUpdateFrameCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetPlayersFarFromLP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SplitPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(int32_t iMaxPlayer) {
		return ((T (*)(PVEGameVBSSController*, int32_t))(Il2CppBase() + 0x49BCB18))(this, iMaxPlayer);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(PVEGameVBSSController*))(Il2CppBase() + 0x49BCC00))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(PVEGameVBSSController*))(Il2CppBase() + 0x49BD920))(this);
	}
	template <typename T = void> T _GetPlayersFarFromLP() {
		return ((T (*)(PVEGameVBSSController*))(Il2CppBase() + 0x49BCD24))(this);
	}
	template <typename T = void> T _SplitPlayers() {
		return ((T (*)(PVEGameVBSSController*))(Il2CppBase() + 0x49BD214))(this);
	}

};

}