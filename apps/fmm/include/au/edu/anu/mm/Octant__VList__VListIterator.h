#ifndef __AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H
#define __AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__VList;
} } } } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class Octant__VList__VListIterator_Strings {
  public:
    static ::x10::lang::String sl__68486;
};

class Octant__VList__VListIterator : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::au::edu::anu::mm::OctantId>::itable< ::au::edu::anu::mm::Octant__VList__VListIterator > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::Octant__VList__VListIterator > _itable_1;
    
    ::au::edu::anu::mm::Octant__VList* FMGL(out__);
    
    x10_ubyte FMGL(x);
    
    x10_ubyte FMGL(y);
    
    x10_ubyte FMGL(z);
    
    void _constructor(::au::edu::anu::mm::Octant__VList* out__);
    
    static ::au::edu::anu::mm::Octant__VList__VListIterator* _make(::au::edu::anu::mm::Octant__VList* out__);
    
    virtual x10_boolean hasNext();
    virtual ::au::edu::anu::mm::OctantId next();
    void moveToNext();
    virtual ::au::edu::anu::mm::Octant__VList__VListIterator* au__edu__anu__mm__Octant__VList__VListIterator____this__au__edu__anu__mm__Octant__VList__VListIterator(
      );
    virtual ::au::edu::anu::mm::Octant__VList* au__edu__anu__mm__Octant__VList__VListIterator____this__au__edu__anu__mm__Octant__VList(
      );
    virtual ::au::edu::anu::mm::Octant* au__edu__anu__mm__Octant__VList__VListIterator____this__au__edu__anu__mm__Octant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_Octant_VList_VListIterator(
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
#endif // AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__VList__VListIterator;
} } } } 

#ifndef AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H_NODEPS
#define AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H_NODEPS
#ifndef AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H_GENERICS
#define AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H_GENERICS
#endif // AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H_GENERICS
#endif // __AU_EDU_ANU_MM_OCTANT__VLIST__VLISTITERATOR_H_NODEPS
