#ifndef __AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H
#define __AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H

#include <x10rt.h>


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
namespace x10 { namespace lang { 
class Math;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class MathUtil;
} } } } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class IntegralsUtils;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class PrimitiveGaussian : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10x::vector::Point3d FMGL(origin);
    
    ::au::edu::anu::qm::Power FMGL(power);
    
    x10_double FMGL(exponent);
    
    x10_double FMGL(coefficient);
    
    x10_double FMGL(normalization);
    
    void _constructor(::x10x::vector::Point3d origin, ::au::edu::anu::qm::Power power,
                      x10_double exponent, x10_double coefficient,
                      x10_boolean normalize);
    
    static ::au::edu::anu::qm::PrimitiveGaussian* _make(::x10x::vector::Point3d origin,
                                                        ::au::edu::anu::qm::Power power,
                                                        x10_double exponent,
                                                        x10_double coefficient,
                                                        x10_boolean normalize);
    
    static x10_double getNormalization(::au::edu::anu::qm::Power power,
                                       x10_double exponent);
    virtual x10_double overlap(::au::edu::anu::qm::PrimitiveGaussian* pg);
    static x10_double overlap(x10_double expI, ::x10x::vector::Point3d originI,
                              ::au::edu::anu::qm::Power powerI,
                              x10_double expJ, ::x10x::vector::Point3d originJ,
                              ::au::edu::anu::qm::Power powerJ);
    virtual ::au::edu::anu::qm::PrimitiveGaussian* mul(::au::edu::anu::qm::PrimitiveGaussian* pg);
    static x10_double overlap1D(x10_int l1, x10_int l2, x10_double pax,
                                x10_double pbx, x10_double gamma);
    virtual x10_double kinetic(::au::edu::anu::qm::PrimitiveGaussian* pg);
    static x10_double kinetic(x10_double expI, ::x10x::vector::Point3d originI,
                              ::au::edu::anu::qm::Power powerI,
                              x10_double normI, x10_double expJ,
                              ::x10x::vector::Point3d originJ,
                              ::au::edu::anu::qm::Power powerJ,
                              x10_double normJ);
    virtual x10_double nuclear(::au::edu::anu::qm::PrimitiveGaussian* pg,
                               ::x10x::vector::Point3d centre);
    void fillAArray(::x10::lang::Rail< x10_double >* a, x10_int l1,
                    x10_int l2, x10_double pa, x10_double pb,
                    x10_double cp, x10_double gamma);
    virtual ::au::edu::anu::qm::PrimitiveGaussian* au__edu__anu__qm__PrimitiveGaussian____this__au__edu__anu__qm__PrimitiveGaussian(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_PrimitiveGaussian(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H

namespace au { namespace edu { namespace anu { namespace qm { 
class PrimitiveGaussian;
} } } } 

#ifndef AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H_NODEPS
#define AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H_NODEPS
#ifndef AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H_GENERICS
#define AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H_GENERICS
#endif // AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H_GENERICS
#endif // __AU_EDU_ANU_QM_PRIMITIVEGAUSSIAN_H_NODEPS
