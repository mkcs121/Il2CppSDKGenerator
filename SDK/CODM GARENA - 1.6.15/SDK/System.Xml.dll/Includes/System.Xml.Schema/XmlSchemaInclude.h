#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaInclude
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaInclude"));
	}

	template <typename T = uintptr_t> T& annotation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T set_Annotation(uintptr_t value) {
		return ((T (*)(XmlSchemaInclude*, uintptr_t))(Il2CppBase() + 0x2AD49B4))(this, value);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA8344))(0, reader, h);
	}

};

}