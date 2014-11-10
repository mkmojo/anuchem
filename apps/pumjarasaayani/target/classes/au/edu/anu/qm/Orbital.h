#ifndef __AU_EDU_ANU_QM_ORBITAL_H
#define __AU_EDU_ANU_QM_ORBITAL_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
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

namespace au { namespace edu { namespace anu { namespace qm { 

class Orbital_Strings {
  public:
    static ::x10::lang::String sl__149655;
    static ::x10::lang::String sl__149649;
    static ::x10::lang::String sl__149654;
    static ::x10::lang::String sl__149650;
    static ::x10::lang::String sl__149651;
    static ::x10::lang::String sl__149656;
    static ::x10::lang::String sl__149648;
    static ::x10::lang::String sl__149647;
    static ::x10::lang::String sl__149653;
    static ::x10::lang::String sl__149652;
    static ::x10::lang::String sl__149657;
    static ::x10::lang::String sl__149658;
};

class Orbital   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::Orbital* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::Orbital > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::Orbital _alloc(){::au::edu::anu::qm::Orbital t; return t; }
    
    ::x10::lang::Rail< x10_double >* FMGL(exponents);
    
    ::x10::lang::Rail< x10_double >* FMGL(coefficients);
    
    ::x10::lang::String* FMGL(shape);
    
    x10_int FMGL(angularMomentum);
    
    void _constructor(::x10::lang::String* shape, ::x10::lang::Rail< x10_double >* exps,
                      ::x10::lang::Rail< x10_double >* coeffs);
    
    static ::au::edu::anu::qm::Orbital _make(::x10::lang::String* shape,
                                             ::x10::lang::Rail< x10_double >* exps,
                                             ::x10::lang::Rail< x10_double >* coeffs);
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::Orbital other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(exponents),
                                           other->FMGL(exponents))) &&
        (::x10aux::struct_equals((*this)->FMGL(coefficients),
                                 other->FMGL(coefficients)))) &&
        (::x10aux::struct_equals((*this)->FMGL(shape), other->FMGL(shape)))) &&
        (::x10aux::struct_equals((*this)->FMGL(angularMomentum),
                                 other->FMGL(angularMomentum))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::Orbital other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(exponents),
                                           other->FMGL(exponents))) &&
        (::x10aux::struct_equals((*this)->FMGL(coefficients),
                                 other->FMGL(coefficients)))) &&
        (::x10aux::struct_equals((*this)->FMGL(shape), other->FMGL(shape)))) &&
        (::x10aux::struct_equals((*this)->FMGL(angularMomentum),
                                 other->FMGL(angularMomentum))));
        
    }
    ::au::edu::anu::qm::Orbital au__edu__anu__qm__Orbital____this__au__edu__anu__qm__Orbital(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_Orbital() {
     
    }
    
    static void _serialize(::au::edu::anu::qm::Orbital this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::Orbital _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::Orbital this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_ORBITAL_H

namespace au { namespace edu { namespace anu { namespace qm { 
class Orbital;
} } } } 

#ifndef AU_EDU_ANU_QM_ORBITAL_H_NODEPS
#define AU_EDU_ANU_QM_ORBITAL_H_NODEPS
#ifndef AU_EDU_ANU_QM_ORBITAL_H_GENERICS
#define AU_EDU_ANU_QM_ORBITAL_H_GENERICS
#endif // AU_EDU_ANU_QM_ORBITAL_H_GENERICS
#endif // __AU_EDU_ANU_QM_ORBITAL_H_NODEPS
