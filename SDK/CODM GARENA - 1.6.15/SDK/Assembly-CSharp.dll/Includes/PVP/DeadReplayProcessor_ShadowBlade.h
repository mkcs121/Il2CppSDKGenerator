#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorShadowBlade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_ShadowBlade"));
	}

	template <typename T = uintptr_t> T& m_ShadowBladeInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillFrameTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOnReplayWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddProjMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSyncBufferMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3467484))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uint32_t))(Il2CppBase() + 0x346748C))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3467534))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x3467640))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3467DEC))(this);
	}
	template <typename T = bool> T NeedCalculateCamera3P() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3467FB8))(this);
	}
	template <typename T = void> T CalculateCamera3P(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3468068))(this, camera, position, rotation);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3468150))(this, camera, position, rotation);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3468920))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3468D78))(this);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3468F24))(this);
	}
	template <typename T = void> T ProcessOnReplayWeaponChanged() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3469080))(this);
	}
	template <typename T = void> T CheckAddProjMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x346774C))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckSyncBufferMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x3467978))(this, data, index, shootTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3469400))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera3P() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3469408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera3P(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3469410))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3469430))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorShadowBlade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3469450))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3469458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessOnReplayWeaponChanged() {
		return ((T (*)(DeadReplayProcessorShadowBlade*))(Il2CppBase() + 0x3469460))(this);
	}

};

}