#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetUpdateMD5Req
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetUpdateMD5Req"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSGetUpdateMD5Req*))(Il2CppBase() + 0x52188A8))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSGetUpdateMD5Req*, int32_t))(Il2CppBase() + 0x52188B0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetUpdateMD5Req*, bool))(Il2CppBase() + 0x52188B8))(this, createIfMissing);
	}

};

}