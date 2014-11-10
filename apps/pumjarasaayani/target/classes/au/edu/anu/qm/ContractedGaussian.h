#ifndef __AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H
#define __AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define AU_EDU_ANU_QM_POWER_H_NODEPS
#include <au/edu/anu/qm/Power.h>
#undef AU_EDU_ANU_QM_POWER_H_NODEPS
#define AU_EDU_ANU_QM_POWER_H_NODEPS
#include <au/edu/anu/qm/Power.h>
#undef AU_EDU_ANU_QM_POWER_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
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
class Math;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class MathUtil;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class PrimitiveGaussian;
} } } } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class ContractedGaussian_Strings {
  public:
    static ::x10::lang::String sl__149158;
    static ::x10::lang::String sl__149155;
    static ::x10::lang::String sl__149159;
    static ::x10::lang::String sl__149156;
    static ::x10::lang::String sl__149154;
    static ::x10::lang::String sl__149160;
    static ::x10::lang::String sl__149157;
};

class ContractedGaussian   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::ContractedGaussian* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::ContractedGaussian > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::ContractedGaussian _alloc(){::au::edu::anu::qm::ContractedGaussian t; return t; }
    
    ::x10x::vector::Point3d FMGL(origin);
    
    ::au::edu::anu::qm::Power FMGL(power);
    
    x10_double FMGL(normalization);
    
    ::x10::lang::Rail< x10_double >* FMGL(exponents);
    
    ::x10::lang::Rail< x10_double >* FMGL(coefficients);
    
    x10_int FMGL(intIndex);
    
    void _constructor(::x10x::vector::Point3d origin, ::au::edu::anu::qm::Power pwr,
                      ::x10::lang::Rail< x10_double >* exponents,
                      ::x10::lang::Rail< x10_double >* coefficients,
                      x10_int intIndex, x10_boolean normalize);
    
    static ::au::edu::anu::qm::ContractedGaussian _make(::x10x::vector::Point3d origin,
                                                        ::au::edu::anu::qm::Power pwr,
                                                        ::x10::lang::Rail< x10_double >* exponents,
                                                        ::x10::lang::Rail< x10_double >* coefficients,
                                                        x10_int intIndex,
                                                        x10_boolean normalize);
    
    x10_int getTotalAngularMomentum();
    x10_int getMaximumAngularMomentum();
    x10_int getMaximumDegreeOfContraction();
    x10_double distanceFrom(::au::edu::anu::qm::ContractedGaussian cg);
    x10_double distanceSquaredFrom(::au::edu::anu::qm::ContractedGaussian cg);
    x10_double overlap(::au::edu::anu::qm::ContractedGaussian cg);
    x10_double selfOverlap();
    x10_double kinetic(::au::edu::anu::qm::ContractedGaussian cg);
    x10_double nuclear(::au::edu::anu::qm::ContractedGaussian cg,
                       ::x10x::vector::Point3d centre);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::ContractedGaussian other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(origin),
                                             other->FMGL(origin))) &&
        (::x10aux::struct_equals((*this)->FMGL(power), other->FMGL(power)))) &&
        (::x10aux::struct_equals((*this)->FMGL(normalization),
                                 other->FMGL(normalization)))) &&
        (::x10aux::struct_equals((*this)->FMGL(exponents),
                                 other->FMGL(exponents)))) &&
        (::x10aux::struct_equals((*this)->FMGL(coefficients),
                                 other->FMGL(coefficients)))) &&
        (::x10aux::struct_equals((*this)->FMGL(intIndex),
                                 other->FMGL(intIndex))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::ContractedGaussian other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(origin),
                                             other->FMGL(origin))) &&
        (::x10aux::struct_equals((*this)->FMGL(power), other->FMGL(power)))) &&
        (::x10aux::struct_equals((*this)->FMGL(normalization),
                                 other->FMGL(normalization)))) &&
        (::x10aux::struct_equals((*this)->FMGL(exponents),
                                 other->FMGL(exponents)))) &&
        (::x10aux::struct_equals((*this)->FMGL(coefficients),
                                 other->FMGL(coefficients)))) &&
        (::x10aux::struct_equals((*this)->FMGL(intIndex),
                                 other->FMGL(intIndex))));
        
    }
    ::au::edu::anu::qm::ContractedGaussian au__edu__anu__qm__ContractedGaussian____this__au__edu__anu__qm__ContractedGaussian(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_ContractedGaussian(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::qm::ContractedGaussian this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::ContractedGaussian _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::ContractedGaussian this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H

namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 

#ifndef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#ifndef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_GENERICS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_GENERICS
#endif // AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_GENERICS
#endif // __AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
