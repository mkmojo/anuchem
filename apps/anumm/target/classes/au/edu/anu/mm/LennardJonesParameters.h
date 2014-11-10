#ifndef __AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H
#define __AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
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

class LennardJonesParameters_Strings {
  public:
    static ::x10::lang::String sl__20180;
    static ::x10::lang::String sl__20184;
    static ::x10::lang::String sl__20183;
    static ::x10::lang::String sl__20182;
    static ::x10::lang::String sl__20181;
};

class LennardJonesParameters   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::mm::LennardJonesParameters* operator->() { return this; }
    
    ::x10::lang::String* FMGL(description);
    
    x10_double FMGL(scale);
    
    x10_double FMGL(equlibrium);
    
    x10_double FMGL(wellDepth);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::LennardJonesParameters > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::mm::LennardJonesParameters _alloc(){::au::edu::anu::mm::LennardJonesParameters t; return t; }
    
    void _constructor(::x10::lang::String* description, x10_double scale,
                      x10_double bondRadius, x10_double wellDepth);
    
    static ::au::edu::anu::mm::LennardJonesParameters _make(::x10::lang::String* description,
                                                            x10_double scale,
                                                            x10_double bondRadius,
                                                            x10_double wellDepth);
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::mm::LennardJonesParameters other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(description),
                                           other->FMGL(description))) &&
        (::x10aux::struct_equals((*this)->FMGL(scale), other->FMGL(scale)))) &&
        (::x10aux::struct_equals((*this)->FMGL(equlibrium),
                                 other->FMGL(equlibrium)))) &&
        (::x10aux::struct_equals((*this)->FMGL(wellDepth),
                                 other->FMGL(wellDepth))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::mm::LennardJonesParameters other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(description),
                                           other->FMGL(description))) &&
        (::x10aux::struct_equals((*this)->FMGL(scale), other->FMGL(scale)))) &&
        (::x10aux::struct_equals((*this)->FMGL(equlibrium),
                                 other->FMGL(equlibrium)))) &&
        (::x10aux::struct_equals((*this)->FMGL(wellDepth),
                                 other->FMGL(wellDepth))));
        
    }
    ::au::edu::anu::mm::LennardJonesParameters au__edu__anu__mm__LennardJonesParameters____this__au__edu__anu__mm__LennardJonesParameters(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_mm_LennardJonesParameters(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::mm::LennardJonesParameters this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::mm::LennardJonesParameters _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::mm::LennardJonesParameters this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H

namespace au { namespace edu { namespace anu { namespace mm { 
class LennardJonesParameters;
} } } } 

#ifndef AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
#define AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
#ifndef AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_GENERICS
#define AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_GENERICS
#endif // AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_GENERICS
#endif // __AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
