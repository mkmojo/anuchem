#ifndef __AU_EDU_ANU_QM_MATHUTIL_H
#define __AU_EDU_ANU_QM_MATHUTIL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class MathUtil : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_double binomialPrefactor(x10_int j, x10_int l, x10_int m, x10_double a,
                                        x10_double b);
    static x10_long binomial(x10_int i, x10_int j);
    static x10_long factorial(x10_int n);
    static x10_long factorial2(x10_int n);
    static x10_double factorialRatioSquared(x10_int a, x10_int b);
    virtual ::au::edu::anu::qm::MathUtil* au__edu__anu__qm__MathUtil____this__au__edu__anu__qm__MathUtil(
      );
    void _constructor();
    
    static ::au::edu::anu::qm::MathUtil* _make();
    
    virtual void __fieldInitializers_au_edu_anu_qm_MathUtil(
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
#endif // AU_EDU_ANU_QM_MATHUTIL_H

namespace au { namespace edu { namespace anu { namespace qm { 
class MathUtil;
} } } } 

#ifndef AU_EDU_ANU_QM_MATHUTIL_H_NODEPS
#define AU_EDU_ANU_QM_MATHUTIL_H_NODEPS
#ifndef AU_EDU_ANU_QM_MATHUTIL_H_GENERICS
#define AU_EDU_ANU_QM_MATHUTIL_H_GENERICS
#endif // AU_EDU_ANU_QM_MATHUTIL_H_GENERICS
#endif // __AU_EDU_ANU_QM_MATHUTIL_H_NODEPS
