#ifndef __AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H
#define __AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H

#include <x10rt.h>


#define AU_EDU_ANU_MM_EXPANSION_H_NODEPS
#include <au/edu/anu/mm/Expansion.h>
#undef AU_EDU_ANU_MM_EXPANSION_H_NODEPS
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10x { namespace polar { 
class Polar3d;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class AssociatedLegendrePolynomial;
} } } } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Factorial;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class WignerRotationMatrix;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class MultipoleExpansion : public ::au::edu::anu::mm::Expansion   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::au::edu::anu::mm::Expansion::rotate;
    
    void _constructor(x10_long p);
    
    static ::au::edu::anu::mm::MultipoleExpansion* _make(x10_long p);
    
    void _constructor(::au::edu::anu::mm::MultipoleExpansion* source);
    
    static ::au::edu::anu::mm::MultipoleExpansion* _make(::au::edu::anu::mm::MultipoleExpansion* source);
    
    static ::au::edu::anu::mm::MultipoleExpansion* getOlm(x10_double q, ::x10x::vector::Vector3d v,
                                                          x10_long p);
    virtual void addOlm(x10_double q, ::x10x::vector::Vector3d v,
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* pplm);
    static ::au::edu::anu::mm::MultipoleExpansion* getOlm(::x10x::vector::Vector3d v,
                                                          x10_long p);
    virtual void translateAndAddMultipole(::au::edu::anu::mm::MultipoleExpansion* scratch,
                                          ::x10::lang::Rail< x10_complex >* temp,
                                          ::x10x::vector::Vector3d v,
                                          ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* complexK,
                                          ::au::edu::anu::mm::MultipoleExpansion* source,
                                          ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* wigner);
    virtual void translateAndAddMultipole(::x10x::vector::Vector3d v,
                                          ::au::edu::anu::mm::MultipoleExpansion* source);
    virtual ::au::edu::anu::mm::MultipoleExpansion* rotate(
      x10_double theta, x10_double phi);
    virtual ::au::edu::anu::mm::MultipoleExpansion* getMacroscopicParent(
      );
    virtual ::au::edu::anu::mm::MultipoleExpansion* au__edu__anu__mm__MultipoleExpansion____this__au__edu__anu__mm__MultipoleExpansion(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_MultipoleExpansion(
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
#endif // AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H

namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 

#ifndef AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H_NODEPS
#define AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H_NODEPS
#ifndef AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H_GENERICS
#define AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H_GENERICS
#endif // AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H_GENERICS
#endif // __AU_EDU_ANU_MM_MULTIPOLEEXPANSION_H_NODEPS
