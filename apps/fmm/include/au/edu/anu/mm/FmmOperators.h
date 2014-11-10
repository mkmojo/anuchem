#ifndef __AU_EDU_ANU_MM_FMMOPERATORS_H
#define __AU_EDU_ANU_MM_FMMOPERATORS_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_COMPLEX_H_NODEPS
#include <x10/lang/Complex.h>
#undef X10_LANG_COMPLEX_H_NODEPS
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 
namespace x10x { namespace polar { 
class Polar3d;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class WignerRotationMatrix;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Expansion;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class FmmOperators : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
      FMGL(wignerA);
    
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
      FMGL(wignerB);
    
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
      FMGL(wignerC);
    
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>*
      FMGL(complexK);
    
    void _constructor(x10_int numTerms, x10_int ws);
    
    static ::au::edu::anu::mm::FmmOperators* _make(x10_int numTerms,
                                                   x10_int ws);
    
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
      precomputeWignerA(x10_int numTerms);
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
      precomputeWignerB(x10_int numTerms, x10_int ws);
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
      precomputeWignerC(x10_int numTerms);
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>*
      precomputeComplex(x10_int numTerms, x10_int ws);
    virtual ::au::edu::anu::mm::FmmOperators* au__edu__anu__mm__FmmOperators____this__au__edu__anu__mm__FmmOperators(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_FmmOperators(
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
#endif // AU_EDU_ANU_MM_FMMOPERATORS_H

namespace au { namespace edu { namespace anu { namespace mm { 
class FmmOperators;
} } } } 

#ifndef AU_EDU_ANU_MM_FMMOPERATORS_H_NODEPS
#define AU_EDU_ANU_MM_FMMOPERATORS_H_NODEPS
#ifndef AU_EDU_ANU_MM_FMMOPERATORS_H_GENERICS
#define AU_EDU_ANU_MM_FMMOPERATORS_H_GENERICS
#endif // AU_EDU_ANU_MM_FMMOPERATORS_H_GENERICS
#endif // __AU_EDU_ANU_MM_FMMOPERATORS_H_NODEPS
