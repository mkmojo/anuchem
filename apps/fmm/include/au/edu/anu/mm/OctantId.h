#ifndef __AU_EDU_ANU_MM_OCTANTID_H
#define __AU_EDU_ANU_MM_OCTANTID_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_COMPARABLE_H_NODEPS
#include <x10/lang/Comparable.h>
#undef X10_LANG_COMPARABLE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class OctantId_Strings {
  public:
    static ::x10::lang::String sl__68534;
    static ::x10::lang::String sl__68535;
    static ::x10::lang::String sl__68537;
    static ::x10::lang::String sl__68536;
};

class OctantId   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::mm::OctantId* operator->() { return this; }
    
    x10_ubyte FMGL(x);
    
    x10_ubyte FMGL(y);
    
    x10_ubyte FMGL(z);
    
    x10_ubyte FMGL(level);
    
    static ::x10aux::itable_entry _itables[3];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::OctantId > _itable_0;
    
    static ::x10::lang::Comparable< ::au::edu::anu::mm::OctantId >::itable< ::au::edu::anu::mm::OctantId > _itable_1;
    
    static ::x10aux::itable_entry _iboxitables[3];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::mm::OctantId _alloc(){::au::edu::anu::mm::OctantId t; return t; }
    
    /* Static field: FMGL(LEAF_MASK) */
    static const x10_uint FMGL(LEAF_MASK) = 16777215;
    static x10_uint FMGL(LEAF_MASK__get)();
    
    /* Static field: FMGL(TOP_LEVEL) */
    static const x10_ubyte FMGL(TOP_LEVEL) = 2;
    static x10_ubyte FMGL(TOP_LEVEL__get)();
    
    void _constructor(x10_ubyte x, x10_ubyte y, x10_ubyte z, x10_ubyte level) {
        
        //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        FMGL(x) = x;
        FMGL(y) = y;
        FMGL(z) = z;
        FMGL(level) = level;
        
        //#line 17 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        ::au::edu::anu::mm::OctantId this__67550 = (*this);
        
    }
    static ::au::edu::anu::mm::OctantId _make(x10_ubyte x, x10_ubyte y, x10_ubyte z,
                                              x10_ubyte level) {
        ::au::edu::anu::mm::OctantId this_; 
        this_->_constructor(x, y, z, level);
        return this_;
    }
    
    x10_int compareTo(::au::edu::anu::mm::OctantId b);
    static x10_ubyte _kwd__log2(x10_ubyte p);
    x10_boolean __lt(::au::edu::anu::mm::OctantId x);
    x10_boolean __le(::au::edu::anu::mm::OctantId x);
    x10_boolean __gt(::au::edu::anu::mm::OctantId x);
    x10_boolean __ge(::au::edu::anu::mm::OctantId x);
    ::au::edu::anu::mm::OctantId next();
    x10_uint getMortonId();
    static x10_uint getMortonId(x10_uint x, x10_uint y, x10_uint z,
                                x10_uint level);
    static ::au::edu::anu::mm::OctantId getFromMortonId(x10_uint mortonId);
    x10_uint getLeafMortonId();
    static x10_uint getLeafMortonId(::x10x::vector::Point3d atomCentre,
                                    x10_double invSideLength, x10_double offset);
    ::au::edu::anu::mm::OctantId getParentId();
    ::au::edu::anu::mm::OctantId getAnchor(x10_ubyte dMax);
    x10_int getChildIndex(x10_ubyte dMax, ::au::edu::anu::mm::OctantId childId);
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::mm::OctantId other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(x), other->FMGL(x))) &&
        (::x10aux::struct_equals((*this)->FMGL(y), other->FMGL(y)))) &&
        (::x10aux::struct_equals((*this)->FMGL(z), other->FMGL(z)))) &&
        (::x10aux::struct_equals((*this)->FMGL(level), other->FMGL(level))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::mm::OctantId other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(x), other->FMGL(x))) &&
        (::x10aux::struct_equals((*this)->FMGL(y), other->FMGL(y)))) &&
        (::x10aux::struct_equals((*this)->FMGL(z), other->FMGL(z)))) &&
        (::x10aux::struct_equals((*this)->FMGL(level), other->FMGL(level))));
        
    }
    ::au::edu::anu::mm::OctantId au__edu__anu__mm__OctantId____this__au__edu__anu__mm__OctantId(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_mm_OctantId() {
     
    }
    
    static void _serialize(::au::edu::anu::mm::OctantId this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::mm::OctantId _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::mm::OctantId this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_MM_OCTANTID_H

namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 

#ifndef AU_EDU_ANU_MM_OCTANTID_H_NODEPS
#define AU_EDU_ANU_MM_OCTANTID_H_NODEPS
#ifndef AU_EDU_ANU_MM_OCTANTID_H_GENERICS
#define AU_EDU_ANU_MM_OCTANTID_H_GENERICS
inline x10_uint au::edu::anu::mm::OctantId::FMGL(LEAF_MASK__get)() {
    return au::edu::anu::mm::OctantId::FMGL(LEAF_MASK);
}

inline x10_ubyte au::edu::anu::mm::OctantId::FMGL(TOP_LEVEL__get)() {
    return au::edu::anu::mm::OctantId::FMGL(TOP_LEVEL);
}

#endif // AU_EDU_ANU_MM_OCTANTID_H_GENERICS
#endif // __AU_EDU_ANU_MM_OCTANTID_H_NODEPS
