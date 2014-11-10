#ifndef __AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H
#define __AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H

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
#define AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
#include <au/edu/anu/mm/LennardJonesParameters.h>
#undef AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
#define AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
#include <au/edu/anu/mm/LennardJonesParameters.h>
#undef AU_EDU_ANU_MM_LENNARDJONESPARAMETERS_H_NODEPS
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

namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 

class UffParameters_Strings {
  public:
    static ::x10::lang::String sl__20164;
    static ::x10::lang::String sl__20165;
    static ::x10::lang::String sl__20159;
    static ::x10::lang::String sl__20166;
    static ::x10::lang::String sl__20163;
    static ::x10::lang::String sl__20162;
    static ::x10::lang::String sl__20161;
    static ::x10::lang::String sl__20160;
};

class UffParameters   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::mm::uff::UffParameters* operator->() { return this; }
    
    ::x10::lang::String* FMGL(description);
    
    x10_double FMGL(mass);
    
    x10_double FMGL(bondRadius);
    
    x10_double FMGL(bondAngle);
    
    ::au::edu::anu::mm::LennardJonesParameters FMGL(vdwParams);
    
    x10_double FMGL(effectiveCharge);
    
    x10_double FMGL(electronegativity);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::uff::UffParameters > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::mm::uff::UffParameters _alloc(){::au::edu::anu::mm::uff::UffParameters t; return t; }
    
    void _constructor(::x10::lang::String* description, x10_double mass, x10_double bondRadius,
                      x10_double bondAngle, ::au::edu::anu::mm::LennardJonesParameters vdwParams,
                      x10_double effectiveCharge, x10_double electronegativity);
    
    static ::au::edu::anu::mm::uff::UffParameters _make(::x10::lang::String* description,
                                                        x10_double mass,
                                                        x10_double bondRadius,
                                                        x10_double bondAngle,
                                                        ::au::edu::anu::mm::LennardJonesParameters vdwParams,
                                                        x10_double effectiveCharge,
                                                        x10_double electronegativity);
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::mm::uff::UffParameters other) {
        return (((((((::x10aux::struct_equals((*this)->FMGL(description),
                                              other->FMGL(description))) &&
        (::x10aux::struct_equals((*this)->FMGL(mass), other->FMGL(mass)))) &&
        (::x10aux::struct_equals((*this)->FMGL(bondRadius),
                                 other->FMGL(bondRadius)))) &&
        (::x10aux::struct_equals((*this)->FMGL(bondAngle),
                                 other->FMGL(bondAngle)))) &&
        (::x10aux::struct_equals((*this)->FMGL(vdwParams),
                                 other->FMGL(vdwParams)))) &&
        (::x10aux::struct_equals((*this)->FMGL(effectiveCharge),
                                 other->FMGL(effectiveCharge)))) &&
        (::x10aux::struct_equals((*this)->FMGL(electronegativity),
                                 other->FMGL(electronegativity))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::mm::uff::UffParameters other) {
        return (((((((::x10aux::struct_equals((*this)->FMGL(description),
                                              other->FMGL(description))) &&
        (::x10aux::struct_equals((*this)->FMGL(mass), other->FMGL(mass)))) &&
        (::x10aux::struct_equals((*this)->FMGL(bondRadius),
                                 other->FMGL(bondRadius)))) &&
        (::x10aux::struct_equals((*this)->FMGL(bondAngle),
                                 other->FMGL(bondAngle)))) &&
        (::x10aux::struct_equals((*this)->FMGL(vdwParams),
                                 other->FMGL(vdwParams)))) &&
        (::x10aux::struct_equals((*this)->FMGL(effectiveCharge),
                                 other->FMGL(effectiveCharge)))) &&
        (::x10aux::struct_equals((*this)->FMGL(electronegativity),
                                 other->FMGL(electronegativity))));
        
    }
    ::au::edu::anu::mm::uff::UffParameters au__edu__anu__mm__uff__UffParameters____this__au__edu__anu__mm__uff__UffParameters(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_mm_uff_UffParameters(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::mm::uff::UffParameters this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::mm::uff::UffParameters _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::mm::uff::UffParameters this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } } 
#endif // AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H

namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UffParameters;
} } } } } 

#ifndef AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
#define AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
#ifndef AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_GENERICS
#define AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_GENERICS
#endif // AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_GENERICS
#endif // __AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
