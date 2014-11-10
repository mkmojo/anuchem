#ifndef __AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H
#define __AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList__UListIterator;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class LeafOctant__UList : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable<x10_uint>::itable< ::au::edu::anu::mm::LeafOctant__UList > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::LeafOctant__UList > _itable_1;
    
    ::au::edu::anu::mm::LeafOctant* FMGL(out__);
    
    x10_ubyte FMGL(level);
    
    x10_ubyte FMGL(minX);
    
    x10_ubyte FMGL(maxX);
    
    x10_ubyte FMGL(minY);
    
    x10_ubyte FMGL(maxY);
    
    x10_ubyte FMGL(minZ);
    
    x10_ubyte FMGL(maxZ);
    
    void _constructor(::au::edu::anu::mm::LeafOctant* out__, ::au::edu::anu::mm::OctantId id,
                      x10_int ws);
    
    static ::au::edu::anu::mm::LeafOctant__UList* _make(::au::edu::anu::mm::LeafOctant* out__,
                                                        ::au::edu::anu::mm::OctantId id,
                                                        x10_int ws);
    
    virtual ::x10::lang::Iterator<x10_uint>* iterator();
    virtual ::au::edu::anu::mm::LeafOctant__UList* au__edu__anu__mm__LeafOctant__UList____this__au__edu__anu__mm__LeafOctant__UList(
      );
    virtual ::au::edu::anu::mm::LeafOctant* au__edu__anu__mm__LeafOctant__UList____this__au__edu__anu__mm__LeafOctant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_LeafOctant_UList(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H

namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList;
} } } } 

#ifndef AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H_NODEPS
#define AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H_NODEPS
#ifndef AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H_GENERICS
#define AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H_GENERICS
#endif // AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H_GENERICS
#endif // __AU_EDU_ANU_MM_LEAFOCTANT__ULIST_H_NODEPS
