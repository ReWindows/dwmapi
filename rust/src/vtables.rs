//! Evidence-labelled vftable metadata and raw slot access.
//! Slot calls remain the consumer's responsibility until a signature is unique.

use core::ffi::c_void;

#[derive(Clone, Copy, Debug)]
pub struct VTableInfo { pub name: &'static str, pub rva: u32, pub first_slot: usize, pub slot_count: usize, pub confidence: &'static str }

#[derive(Clone, Copy, Debug)]
pub struct VTableSlot { pub table_rva: u32, pub slot: u32, pub byte_offset: u32, pub target_rva: u32, pub target_id: Option<&'static str>, pub target_name: Option<&'static str>, pub ambiguous: bool, pub this_adjustment: Option<i32> }

pub static VTABLES: &[VTableInfo] = &[
    VTableInfo { name: "const CPortClientRefCounted::`vftable'", rva: 0x1A028, first_slot: 0, slot_count: 1, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::Details::DefaultModule<1>::`vftable'", rva: 0x1A030, first_slot: 1, slot_count: 12, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::Module<1, class Microsoft::WRL::Details::DefaultModule<1> >::`vftable'", rva: 0x1A090, first_slot: 13, slot_count: 12, confidence: "likely" },
    VTableInfo { name: "const wistd::__function::__base<bool __cdecl (void *, uint64_t, void *, uint64_t, unsigned int)>::`vftable'", rva: 0x1A0F0, first_slot: 25, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::`vftable'", rva: 0x1A128, first_slot: 30, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const CPortClient::`vftable'", rva: 0x1A150, first_slot: 35, slot_count: 1, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::SimpleClassFactory<class CHideInputPaneAnimationCoordinator, 0>::`vftable'", rva: 0x1A158, first_slot: 36, slot_count: 6, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::SimpleClassFactory<class CShowInputPaneAnimationCoordinator, 0>::`vftable'", rva: 0x1A188, first_slot: 42, slot_count: 6, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::`vftable'", rva: 0x1A1B8, first_slot: 48, slot_count: 7, confidence: "likely" },
    VTableInfo { name: "const CHideInputPaneAnimationCoordinator::`vftable'", rva: 0x1A210, first_slot: 55, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const CInputPaneAnimationCoordinator::`vftable'", rva: 0x1A238, first_slot: 60, slot_count: 4, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::RuntimeClass<struct Microsoft::WRL::RuntimeClassFlags<2>, class CInputPaneAnimationCoordinator>::`vftable'", rva: 0x1A258, first_slot: 64, slot_count: 6, confidence: "likely" },
    VTableInfo { name: "const Microsoft::WRL::Details::RuntimeClass<struct Microsoft::WRL::Details::InterfaceListHelper<struct IClassFactory, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil>, struct Microsoft::WRL::RuntimeClassFlags<6>, 0, 0, 0>::`vftable'", rva: 0x1A2A8, first_slot: 70, slot_count: 6, confidence: "likely" },
];

pub static VTABLE_SLOTS: &[VTableSlot] = &[
    VTableSlot { table_rva: 0x1A028, slot: 0, byte_offset: 0, target_rva: 0x6910, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 0, byte_offset: 0, target_rva: 0x8C70, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 1, byte_offset: 8, target_rva: 0x17050, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 2, byte_offset: 16, target_rva: 0x16E60, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 3, byte_offset: 24, target_rva: 0x8E40, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 4, byte_offset: 32, target_rva: 0x8E50, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 5, byte_offset: 40, target_rva: 0x17040, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 6, byte_offset: 48, target_rva: 0xB140, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 7, byte_offset: 56, target_rva: 0x17030, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 8, byte_offset: 64, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 9, byte_offset: 72, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 10, byte_offset: 80, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A030, slot: 11, byte_offset: 88, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 0, byte_offset: 0, target_rva: 0x16E20, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 1, byte_offset: 8, target_rva: 0x17050, target_id: Some("?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ"), target_name: Some("public: virtual unsigned long __cdecl Microsoft::WRL::Module<1, class Microsoft::WRL::Details::DefaultModule<1> >::IncrementObjectCount(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 2, byte_offset: 16, target_rva: 0x16E60, target_id: Some("?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ"), target_name: Some("public: virtual unsigned long __cdecl Microsoft::WRL::Module<1, class Microsoft::WRL::Details::DefaultModule<1> >::DecrementObjectCount(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 3, byte_offset: 24, target_rva: 0x8E40, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 4, byte_offset: 32, target_rva: 0x8E50, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 5, byte_offset: 40, target_rva: 0x17040, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 6, byte_offset: 48, target_rva: 0xB140, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 7, byte_offset: 56, target_rva: 0x17030, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 8, byte_offset: 64, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 9, byte_offset: 72, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 10, byte_offset: 80, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A090, slot: 11, byte_offset: 88, target_rva: 0x170A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A0F0, slot: 0, byte_offset: 0, target_rva: 0xC4C0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A0F0, slot: 1, byte_offset: 8, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A0F0, slot: 2, byte_offset: 16, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A0F0, slot: 3, byte_offset: 24, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A0F0, slot: 4, byte_offset: 32, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A128, slot: 0, byte_offset: 0, target_rva: 0xC4C0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A128, slot: 1, byte_offset: 8, target_rva: 0x10E10, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A128, slot: 2, byte_offset: 16, target_rva: 0x10E10, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A128, slot: 3, byte_offset: 24, target_rva: 0x10EB0, target_id: Some("?destroy@?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::destroy(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A128, slot: 4, byte_offset: 32, target_rva: 0xE1E0, target_id: Some("??R?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z"), target_name: Some("public: virtual bool __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::operator()(void * &&, uint64_t &&, void * &&, uint64_t &&, unsigned int &&)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A150, slot: 0, byte_offset: 0, target_rva: 0x16970, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A158, slot: 0, byte_offset: 0, target_rva: 0x17BC0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A158, slot: 1, byte_offset: 8, target_rva: 0x17910, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A158, slot: 2, byte_offset: 16, target_rva: 0x17CA0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A158, slot: 3, byte_offset: 24, target_rva: 0x179C0, target_id: Some("?CreateInstance@?$SimpleClassFactory@VCHideInputPaneAnimationCoordinator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z"), target_name: Some("public: virtual long __cdecl Microsoft::WRL::SimpleClassFactory<class CHideInputPaneAnimationCoordinator, 0>::CreateInstance(struct IUnknown *, struct _GUID const &, void * *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A158, slot: 4, byte_offset: 32, target_rva: 0x17B70, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A158, slot: 5, byte_offset: 40, target_rva: 0x17710, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A188, slot: 0, byte_offset: 0, target_rva: 0x17BC0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A188, slot: 1, byte_offset: 8, target_rva: 0x17910, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A188, slot: 2, byte_offset: 16, target_rva: 0x17CA0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A188, slot: 3, byte_offset: 24, target_rva: 0x17A60, target_id: Some("?CreateInstance@?$SimpleClassFactory@VCShowInputPaneAnimationCoordinator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z"), target_name: Some("public: virtual long __cdecl Microsoft::WRL::SimpleClassFactory<class CShowInputPaneAnimationCoordinator, 0>::CreateInstance(struct IUnknown *, struct _GUID const &, void * *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A188, slot: 4, byte_offset: 32, target_rva: 0x17B70, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A188, slot: 5, byte_offset: 40, target_rva: 0x17710, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 0, byte_offset: 0, target_rva: 0x17BC0, target_id: Some("?QueryInterface@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z"), target_name: Some("public: virtual long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::QueryInterface(struct _GUID const &, void * *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 1, byte_offset: 8, target_rva: 0x17910, target_id: Some("?AddRef@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ"), target_name: Some("public: virtual unsigned long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::AddRef(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 2, byte_offset: 16, target_rva: 0x17CA0, target_id: Some("?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ"), target_name: Some("public: virtual unsigned long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::Release(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 3, byte_offset: 24, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 4, byte_offset: 32, target_rva: 0x17B70, target_id: Some("?LockServer@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJH@Z"), target_name: Some("public: virtual long __cdecl Microsoft::WRL::ClassFactory<class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, class Microsoft::WRL::Details::Nil, 0>::LockServer(int)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 5, byte_offset: 40, target_rva: 0x17710, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A1B8, slot: 6, byte_offset: 48, target_rva: 0x17220, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A210, slot: 0, byte_offset: 0, target_rva: 0x17C30, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A210, slot: 1, byte_offset: 8, target_rva: 0x17960, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A210, slot: 2, byte_offset: 16, target_rva: 0x17D20, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A210, slot: 3, byte_offset: 24, target_rva: 0x177D0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A210, slot: 4, byte_offset: 32, target_rva: 0x17790, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A238, slot: 0, byte_offset: 0, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A238, slot: 1, byte_offset: 8, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A238, slot: 2, byte_offset: 16, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A238, slot: 3, byte_offset: 24, target_rva: 0x177D0, target_id: Some("?AddAnimation@CInputPaneAnimationCoordinator@@UEAAJPEAUIUnknown@@PEAUIDCompositionAnimation@@@Z"), target_name: Some("public: virtual long __cdecl CInputPaneAnimationCoordinator::AddAnimation(struct IUnknown *, struct IDCompositionAnimation *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x1A258, slot: 0, byte_offset: 0, target_rva: 0x17C30, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A258, slot: 1, byte_offset: 8, target_rva: 0x17960, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A258, slot: 2, byte_offset: 16, target_rva: 0x17D20, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A258, slot: 3, byte_offset: 24, target_rva: 0x177D0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A258, slot: 4, byte_offset: 32, target_rva: 0x17740, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A258, slot: 5, byte_offset: 40, target_rva: 0x17150, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A2A8, slot: 0, byte_offset: 0, target_rva: 0x17BC0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A2A8, slot: 1, byte_offset: 8, target_rva: 0x17970, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A2A8, slot: 2, byte_offset: 16, target_rva: 0x17D80, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A2A8, slot: 3, byte_offset: 24, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A2A8, slot: 4, byte_offset: 32, target_rva: 0xD610, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x1A2A8, slot: 5, byte_offset: 40, target_rva: 0x17710, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
];

/// Reads a raw function pointer from an object's primary vftable.
///
/// # Safety
/// `object` must point to a live object with a readable primary vftable,
/// and `slot` must be valid for that concrete object. This function does
/// not invent or transmute a callable signature.
pub unsafe fn raw_object_slot(object: *const c_void, slot: usize) -> Option<*const ()> {
if object.is_null() { return None; }
let table = unsafe { *(object.cast::<*const *const ()>()) };
if table.is_null() { return None; }
let target = unsafe { *table.add(slot) };
(!target.is_null()).then_some(target)
}
