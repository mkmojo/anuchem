#ifndef __AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H
#define __AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant;
} } } } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class LeafOctant__UList__UListIterator_Strings {
  public:
    static ::x10::lang::String sl__48437;
};

class LeafOctant__UList__UListIterator : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator<x10_uint>::itable< ::au::edu::anu::mm::LeafOctant__UList__UListIterator > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::LeafOctant__UList__UListIterator > _itable_1;
    
    ::au::edu::anu::mm::LeafOctant__UList* FMGL(out__);
    
    x10_ubyte FMGL(x);
    
    x10_ubyte FMGL(y);
    
    x10_ubyte FMGL(z);
    
    void _constructor(::au::edu::anu::mm::LeafOctant__UList* out__);
    
    static ::au::edu::anu::mm::LeafOctant__UList__UListIterator* _make(::au::edu::anu::mm::LeafOctant__UList* out__);
    
    virtual x10_boolean hasNext();
    virtual x10_uint next();
    void moveToNext();
    virtual ::au::edu::anu::mm::LeafOctant__UList__UListIterator* au__edu__anu__mm__LeafOctant__UList__UListIterator____this__au__edu__anu__mm__LeafOctant__UList__UListIterator(
      );
    virtual ::au::edu::anu::mm::LeafOctant__UList* au__edu__anu__mm__LeafOctant__UList__UListIterator____this__au__edu__anu__mm__LeafOctant__UList(
      );
    virtual ::au::edu::anu::mm::LeafOctant* au__edu__anu__mm__LeafOctant__UList__UListIterator____this__au__edu__anu__mm__LeafOctant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_LeafOctant_UList_UListIterator(
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
#endif // AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H

namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList__UListIterator;
} } } } 

#ifndef AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H_NODEPS
#define AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H_NODEPS
#ifndef AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H_GENERICS
#define AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H_GENERICS
#endif // AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H_GENERICS
#endif // __AU_EDU_ANU_MM_LEAFOCTANT__ULIST__ULISTITERATOR_H_NODEPS
