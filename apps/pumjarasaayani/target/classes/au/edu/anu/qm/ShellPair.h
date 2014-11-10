#ifndef __AU_EDU_ANU_QM_SHELLPAIR_H
#define __AU_EDU_ANU_QM_SHELLPAIR_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
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

namespace au { namespace edu { namespace anu { namespace qm { 

class ShellPair_Strings {
  public:
    static ::x10::lang::String sl__149986;
    static ::x10::lang::String sl__150001;
    static ::x10::lang::String sl__149993;
    static ::x10::lang::String sl__149991;
    static ::x10::lang::String sl__149988;
    static ::x10::lang::String sl__149992;
    static ::x10::lang::String sl__149990;
    static ::x10::lang::String sl__149997;
    static ::x10::lang::String sl__150002;
    static ::x10::lang::String sl__149995;
    static ::x10::lang::String sl__149999;
    static ::x10::lang::String sl__149998;
    static ::x10::lang::String sl__149987;
    static ::x10::lang::String sl__150000;
    static ::x10::lang::String sl__149994;
    static ::x10::lang::String sl__150003;
    static ::x10::lang::String sl__149996;
    static ::x10::lang::String sl__149989;
};

class ShellPair   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::ShellPair* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::ShellPair > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::ShellPair _alloc(){::au::edu::anu::qm::ShellPair t; return t; }
    
    x10_int FMGL(aang);
    
    x10_int FMGL(bang);
    
    ::x10x::vector::Point3d FMGL(aPoint);
    
    ::x10x::vector::Point3d FMGL(bPoint);
    
    ::x10::lang::Rail< x10_double >* FMGL(zetaA);
    
    ::x10::lang::Rail< x10_double >* FMGL(zetaB);
    
    ::x10::lang::Rail< x10_double >* FMGL(conA);
    
    ::x10::lang::Rail< x10_double >* FMGL(conB);
    
    x10_long FMGL(mu);
    
    x10_long FMGL(nu);
    
    x10_long FMGL(mu2);
    
    x10_long FMGL(nu2);
    
    x10_int FMGL(maxbraa);
    
    x10_int FMGL(maxbrab);
    
    ::x10::lang::Rail< x10_int >* FMGL(L);
    
    x10_int FMGL(maxL);
    
    x10_double FMGL(contrib);
    
    void _constructor(x10_int a, x10_int b, ::x10x::vector::Point3d A, ::x10x::vector::Point3d B,
                      ::x10::lang::Rail< x10_double >* zetaA, ::x10::lang::Rail< x10_double >* zetaB,
                      ::x10::lang::Rail< x10_double >* conA,
                      ::x10::lang::Rail< x10_double >* conB,
                      x10_long mu, x10_long nu, ::x10::lang::Rail< x10_int >* L,
                      x10_double contrib);
    
    static ::au::edu::anu::qm::ShellPair _make(x10_int a,
                                               x10_int b,
                                               ::x10x::vector::Point3d A,
                                               ::x10x::vector::Point3d B,
                                               ::x10::lang::Rail< x10_double >* zetaA,
                                               ::x10::lang::Rail< x10_double >* zetaB,
                                               ::x10::lang::Rail< x10_double >* conA,
                                               ::x10::lang::Rail< x10_double >* conB,
                                               x10_long mu,
                                               x10_long nu,
                                               ::x10::lang::Rail< x10_int >* L,
                                               x10_double contrib);
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::ShellPair other) {
        return (((((((((((((((((::x10aux::struct_equals((*this)->FMGL(aang),
                                                        other->FMGL(aang))) &&
        (::x10aux::struct_equals((*this)->FMGL(bang), other->FMGL(bang)))) &&
        (::x10aux::struct_equals((*this)->FMGL(aPoint), other->FMGL(aPoint)))) &&
        (::x10aux::struct_equals((*this)->FMGL(bPoint), other->FMGL(bPoint)))) &&
        (::x10aux::struct_equals((*this)->FMGL(zetaA), other->FMGL(zetaA)))) &&
        (::x10aux::struct_equals((*this)->FMGL(zetaB), other->FMGL(zetaB)))) &&
        (::x10aux::struct_equals((*this)->FMGL(conA), other->FMGL(conA)))) &&
        (::x10aux::struct_equals((*this)->FMGL(conB), other->FMGL(conB)))) &&
        (::x10aux::struct_equals((*this)->FMGL(mu), other->FMGL(mu)))) &&
        (::x10aux::struct_equals((*this)->FMGL(nu), other->FMGL(nu)))) &&
        (::x10aux::struct_equals((*this)->FMGL(mu2), other->FMGL(mu2)))) &&
        (::x10aux::struct_equals((*this)->FMGL(nu2), other->FMGL(nu2)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxbraa), other->FMGL(maxbraa)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxbrab), other->FMGL(maxbrab)))) &&
        (::x10aux::struct_equals((*this)->FMGL(L), other->FMGL(L)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxL), other->FMGL(maxL)))) &&
        (::x10aux::struct_equals((*this)->FMGL(contrib), other->FMGL(contrib))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::ShellPair other) {
        return (((((((((((((((((::x10aux::struct_equals((*this)->FMGL(aang),
                                                        other->FMGL(aang))) &&
        (::x10aux::struct_equals((*this)->FMGL(bang), other->FMGL(bang)))) &&
        (::x10aux::struct_equals((*this)->FMGL(aPoint), other->FMGL(aPoint)))) &&
        (::x10aux::struct_equals((*this)->FMGL(bPoint), other->FMGL(bPoint)))) &&
        (::x10aux::struct_equals((*this)->FMGL(zetaA), other->FMGL(zetaA)))) &&
        (::x10aux::struct_equals((*this)->FMGL(zetaB), other->FMGL(zetaB)))) &&
        (::x10aux::struct_equals((*this)->FMGL(conA), other->FMGL(conA)))) &&
        (::x10aux::struct_equals((*this)->FMGL(conB), other->FMGL(conB)))) &&
        (::x10aux::struct_equals((*this)->FMGL(mu), other->FMGL(mu)))) &&
        (::x10aux::struct_equals((*this)->FMGL(nu), other->FMGL(nu)))) &&
        (::x10aux::struct_equals((*this)->FMGL(mu2), other->FMGL(mu2)))) &&
        (::x10aux::struct_equals((*this)->FMGL(nu2), other->FMGL(nu2)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxbraa), other->FMGL(maxbraa)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxbrab), other->FMGL(maxbrab)))) &&
        (::x10aux::struct_equals((*this)->FMGL(L), other->FMGL(L)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxL), other->FMGL(maxL)))) &&
        (::x10aux::struct_equals((*this)->FMGL(contrib), other->FMGL(contrib))));
        
    }
    ::au::edu::anu::qm::ShellPair au__edu__anu__qm__ShellPair____this__au__edu__anu__qm__ShellPair(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_ShellPair() {
     
    }
    
    static void _serialize(::au::edu::anu::qm::ShellPair this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::ShellPair _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::ShellPair this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_SHELLPAIR_H

namespace au { namespace edu { namespace anu { namespace qm { 
class ShellPair;
} } } } 

#ifndef AU_EDU_ANU_QM_SHELLPAIR_H_NODEPS
#define AU_EDU_ANU_QM_SHELLPAIR_H_NODEPS
#ifndef AU_EDU_ANU_QM_SHELLPAIR_H_GENERICS
#define AU_EDU_ANU_QM_SHELLPAIR_H_GENERICS
#endif // AU_EDU_ANU_QM_SHELLPAIR_H_GENERICS
#endif // __AU_EDU_ANU_QM_SHELLPAIR_H_NODEPS
