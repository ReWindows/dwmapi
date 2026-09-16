// Windissect recovered ABI metadata — DO NOT EDIT.
// Portable across C++17, C++20, C++23, and C++26 draft modes.
#pragma once
#include <cstddef>
#include <cstdint>

namespace windissect_abi {
struct TypeLayout { const char* name; std::uint64_t size; const char* kind; };
struct FieldLayout { const char* owner; const char* name; std::uint32_t type_index; std::uint64_t offset; bool is_static; };
struct FieldObservation { const char* owner; const char* suggested_name; std::uint64_t offset; std::uint32_t width; const char* access; std::uint32_t evidence_rva; const char* evidence_symbol; const char* confidence; };
struct BaseLayout { const char* derived; const char* base; std::int64_t offset; bool is_virtual; const char* evidence; const char* confidence; };
struct VTableLayout { const char* name; std::uint32_t rva; std::uint32_t slots; const char* evidence; const char* confidence; };
struct VTableSlotLayout { std::uint32_t table_rva; std::uint32_t slot; std::uint32_t target_rva; const char* target_id; const char* target_name; bool ambiguous; std::int32_t this_adjustment; };

inline constexpr TypeLayout types[] = {
    {"Microsoft::WRL::RuntimeClass<struct Microsoft::WRL::RuntimeClassFlags<2>, class CInputPaneAnimationCoordinator>", 48ULL, "allocation-size-evidence"},
    {nullptr, 0, nullptr},
};
inline constexpr std::size_t type_count = (sizeof(types) / sizeof(types[0])) - 1;
inline constexpr FieldLayout fields[] = {
    {nullptr, nullptr, 0, 0, false},
};
inline constexpr std::size_t field_count = (sizeof(fields) / sizeof(fields[0])) - 1;
inline constexpr FieldObservation field_observations[] = {
    {nullptr, nullptr, 0, 0, nullptr, 0, nullptr, nullptr},
};
inline constexpr std::size_t field_observation_count = (sizeof(field_observations) / sizeof(field_observations[0])) - 1;
inline constexpr BaseLayout bases[] = {
    {nullptr, nullptr, -1, false, nullptr, nullptr},
};
inline constexpr std::size_t base_count = (sizeof(bases) / sizeof(bases[0])) - 1;
inline constexpr VTableLayout vtables[] = {
    {"const CPortClientRefCounted::`vftable'", 0x1A028U, 1U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::Details::DefaultModule<1>::`vftable'", 0x1A030U, 12U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::Module<1, class Microsoft::WRL::Details::DefaultModule<1> >::`vftable'", 0x1A090U, 12U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const wistd::__function::__base<bool __cdecl (void *, uint64_t, void *, uint64_t, unsigned int)>::`vftable'", 0x1A0F0U, 5U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::`vftable'", 0x1A128U, 5U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CPortClient::`vftable'", 0x1A150U, 1U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::SimpleClassFactory<class CHideInputPaneAnimationCoordinator, 0>::`vftable'", 0x1A158U, 6U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::SimpleClassFactory<class CShowInputPaneAnimationCoordinator, 0>::`vftable'", 0x1A188U, 6U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::`vftable'", 0x1A1B8U, 7U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CHideInputPaneAnimationCoordinator::`vftable'", 0x1A210U, 5U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CInputPaneAnimationCoordinator::`vftable'", 0x1A238U, 4U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::RuntimeClass<struct Microsoft::WRL::RuntimeClassFlags<2>, class CInputPaneAnimationCoordinator>::`vftable'", 0x1A258U, 6U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const Microsoft::WRL::Details::RuntimeClass<struct Microsoft::WRL::Details::InterfaceListHelper<struct IClassFactory, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil>, struct Microsoft::WRL::RuntimeClassFlags<6>, 0, 0, 0>::`vftable'", 0x1A2A8U, 6U, "msvc-??_7-plus-pe-rdata", "likely"},
    {nullptr, 0, 0, nullptr, nullptr},
};
inline constexpr std::size_t vtable_count = (sizeof(vtables) / sizeof(vtables[0])) - 1;
inline constexpr VTableSlotLayout vtable_slots[] = {
    {0x1A028U, 0U, 0x6910U, nullptr, nullptr, true, 0},
    {0x1A030U, 0U, 0x8C70U, nullptr, nullptr, true, 0},
    {0x1A030U, 1U, 0x17050U, nullptr, nullptr, true, 0},
    {0x1A030U, 2U, 0x16E60U, nullptr, nullptr, true, 0},
    {0x1A030U, 3U, 0x8E40U, nullptr, nullptr, true, 0},
    {0x1A030U, 4U, 0x8E50U, nullptr, nullptr, true, 0},
    {0x1A030U, 5U, 0x17040U, nullptr, nullptr, true, 0},
    {0x1A030U, 6U, 0xB140U, nullptr, nullptr, true, 0},
    {0x1A030U, 7U, 0x17030U, nullptr, nullptr, true, 0},
    {0x1A030U, 8U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A030U, 9U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A030U, 10U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A030U, 11U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A090U, 0U, 0x16E20U, nullptr, nullptr, true, 0},
    {0x1A090U, 1U, 0x17050U, "?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ", "public: virtual unsigned long __cdecl Microsoft::WRL::Module<1, class Microsoft::WRL::Details::DefaultModule<1> >::IncrementObjectCount(void)", false, 0},
    {0x1A090U, 2U, 0x16E60U, "?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ", "public: virtual unsigned long __cdecl Microsoft::WRL::Module<1, class Microsoft::WRL::Details::DefaultModule<1> >::DecrementObjectCount(void)", false, 0},
    {0x1A090U, 3U, 0x8E40U, nullptr, nullptr, true, 0},
    {0x1A090U, 4U, 0x8E50U, nullptr, nullptr, true, 0},
    {0x1A090U, 5U, 0x17040U, nullptr, nullptr, true, 0},
    {0x1A090U, 6U, 0xB140U, nullptr, nullptr, true, 0},
    {0x1A090U, 7U, 0x17030U, nullptr, nullptr, true, 0},
    {0x1A090U, 8U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A090U, 9U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A090U, 10U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A090U, 11U, 0x170A0U, nullptr, nullptr, true, 0},
    {0x1A0F0U, 0U, 0xC4C0U, nullptr, nullptr, true, 0},
    {0x1A0F0U, 1U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A0F0U, 2U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A0F0U, 3U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A0F0U, 4U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A128U, 0U, 0xC4C0U, nullptr, nullptr, true, 0},
    {0x1A128U, 1U, 0x10E10U, nullptr, nullptr, true, 0},
    {0x1A128U, 2U, 0x10E10U, nullptr, nullptr, true, 0},
    {0x1A128U, 3U, 0x10EB0U, "?destroy@?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAXXZ", "public: virtual void __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::destroy(void)", false, 0},
    {0x1A128U, 4U, 0xE1E0U, "??R?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z", "public: virtual bool __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::operator()(void * &&, uint64_t &&, void * &&, uint64_t &&, unsigned int &&)", false, 0},
    {0x1A150U, 0U, 0x16970U, nullptr, nullptr, true, 0},
    {0x1A158U, 0U, 0x17BC0U, nullptr, nullptr, true, 0},
    {0x1A158U, 1U, 0x17910U, nullptr, nullptr, true, 0},
    {0x1A158U, 2U, 0x17CA0U, nullptr, nullptr, true, 0},
    {0x1A158U, 3U, 0x179C0U, "?CreateInstance@?$SimpleClassFactory@VCHideInputPaneAnimationCoordinator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl Microsoft::WRL::SimpleClassFactory<class CHideInputPaneAnimationCoordinator, 0>::CreateInstance(struct IUnknown *, struct _GUID const &, void * *)", false, 0},
    {0x1A158U, 4U, 0x17B70U, nullptr, nullptr, true, 0},
    {0x1A158U, 5U, 0x17710U, nullptr, nullptr, true, 0},
    {0x1A188U, 0U, 0x17BC0U, nullptr, nullptr, true, 0},
    {0x1A188U, 1U, 0x17910U, nullptr, nullptr, true, 0},
    {0x1A188U, 2U, 0x17CA0U, nullptr, nullptr, true, 0},
    {0x1A188U, 3U, 0x17A60U, "?CreateInstance@?$SimpleClassFactory@VCShowInputPaneAnimationCoordinator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl Microsoft::WRL::SimpleClassFactory<class CShowInputPaneAnimationCoordinator, 0>::CreateInstance(struct IUnknown *, struct _GUID const &, void * *)", false, 0},
    {0x1A188U, 4U, 0x17B70U, nullptr, nullptr, true, 0},
    {0x1A188U, 5U, 0x17710U, nullptr, nullptr, true, 0},
    {0x1A1B8U, 0U, 0x17BC0U, "?QueryInterface@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::QueryInterface(struct _GUID const &, void * *)", false, 0},
    {0x1A1B8U, 1U, 0x17910U, "?AddRef@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ", "public: virtual unsigned long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::AddRef(void)", false, 0},
    {0x1A1B8U, 2U, 0x17CA0U, "?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ", "public: virtual unsigned long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::Release(void)", false, 0},
    {0x1A1B8U, 3U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A1B8U, 4U, 0x17B70U, "?LockServer@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJH@Z", "public: virtual long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::LockServer(int)", false, 0},
    {0x1A1B8U, 5U, 0x17710U, nullptr, nullptr, true, 0},
    {0x1A1B8U, 6U, 0x17220U, nullptr, nullptr, true, 0},
    {0x1A210U, 0U, 0x17C30U, nullptr, nullptr, true, 0},
    {0x1A210U, 1U, 0x17960U, nullptr, nullptr, true, 0},
    {0x1A210U, 2U, 0x17D20U, nullptr, nullptr, true, 0},
    {0x1A210U, 3U, 0x177D0U, nullptr, nullptr, true, 0},
    {0x1A210U, 4U, 0x17790U, nullptr, nullptr, true, 0},
    {0x1A238U, 0U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A238U, 1U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A238U, 2U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A238U, 3U, 0x177D0U, "?AddAnimation@CInputPaneAnimationCoordinator@@UEAAJPEAUIUnknown@@PEAUIDCompositionAnimation@@@Z", "public: virtual long __cdecl CInputPaneAnimationCoordinator::AddAnimation(struct IUnknown *, struct IDCompositionAnimation *)", false, 0},
    {0x1A258U, 0U, 0x17C30U, nullptr, nullptr, true, 0},
    {0x1A258U, 1U, 0x17960U, nullptr, nullptr, true, 0},
    {0x1A258U, 2U, 0x17D20U, nullptr, nullptr, true, 0},
    {0x1A258U, 3U, 0x177D0U, nullptr, nullptr, true, 0},
    {0x1A258U, 4U, 0x17740U, nullptr, nullptr, true, 0},
    {0x1A258U, 5U, 0x17150U, nullptr, nullptr, true, 0},
    {0x1A2A8U, 0U, 0x17BC0U, nullptr, nullptr, true, 0},
    {0x1A2A8U, 1U, 0x17970U, nullptr, nullptr, true, 0},
    {0x1A2A8U, 2U, 0x17D80U, nullptr, nullptr, true, 0},
    {0x1A2A8U, 3U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A2A8U, 4U, 0xD610U, nullptr, nullptr, true, 0},
    {0x1A2A8U, 5U, 0x17710U, nullptr, nullptr, true, 0},
    {0, 0, 0, nullptr, nullptr, true, 0},
};
inline constexpr std::size_t vtable_slot_count = (sizeof(vtable_slots) / sizeof(vtable_slots[0])) - 1;
}
