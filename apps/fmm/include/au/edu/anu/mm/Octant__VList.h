#ifndef __AU_EDU_ANU_MM_OCTANT__VLIST_H
#define __AU_EDU_ANU_MM_OCTANT__VLIST_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__VList__VListIterator;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class Octant__VList : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::au::edu::anu::mm::OctantId>::itable< ::au::edu::anu::mm::Octant__VList > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::Octant__VList > _itable_1;
    
    ::au::edu::anu::mm::Octant* FMGL(out__);
    
    x10_int FMGL(ws);
    
    x10_ubyte FMGL(level);
    
    x10_ubyte FMGL(minX);
    
    x10_ubyte FMGL(maxX);
    
    x10_ubyte FMGL(minY);
    
    x10_ubyte FMGL(maxY);
    
    x10_ubyte FMGL(minZ);
    
    x10_ubyte FMGL(maxZ);
    
    void _constructor(::au::edu::anu::mm::Octant* out__, ::au::edu::anu::mm::OctantId id,
                      x10_int ws, x10_ubyte dMax);
    
    static ::au::edu::anu::mm::Octant__VList* _make(::au::edu::anu::mm::Octant* out__,
                                                    ::au::edu::anu::mm::OctantId id,
                                                    x10_int ws,
                                                    x10_ubyte dMax);
    
    x10_boolean wellSeparated(x10_int ws, x10_int x2, x10_int y2,
                              x10_int z2);
    virtual ::x10::lang::Iterator< ::au::edu::anu::mm::OctantId>*
      iterator();
    virtual ::au::edu::anu::mm::Octant__VList* au__edu__anu__mm__Octant__VList____this__au__edu__anu__mm__Octant__VList(
      );
    virtual ::au::edu::anu::mm::Octant* au__edu__anu__mm__Octant__VList____this__au__edu__anu__mm__Octant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_Octant_VList(
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
#endif // AU_EDU_ANU_MM_OCTANT__VLIST_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__VList;
} } } } 

#ifndef AU_EDU_ANU_MM_OCTANT__VLIST_H_NODEPS
#define AU_EDU_ANU_MM_OCTANT__VLIST_H_NODEPS
#ifndef AU_EDU_ANU_MM_OCTANT__VLIST_H_GENERICS
#define AU_EDU_ANU_MM_OCTANT__VLIST_H_GENERICS
#endif // AU_EDU_ANU_MM_OCTANT__VLIST_H_GENERICS
#endif // __AU_EDU_ANU_MM_OCTANT__VLIST_H_NODEPS
