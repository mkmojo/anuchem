#ifndef __AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H
#define __AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class AssociatedLegendrePolynomial_Strings {
  public:
    static ::x10::lang::String sl__68050;
    static ::x10::lang::String sl__68051;
    static ::x10::lang::String sl__68052;
    static ::x10::lang::String sl__68049;
};

class AssociatedLegendrePolynomial : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_double >* FMGL(terms);
    
    x10_long FMGL(p);
    
    void _constructor(x10_long p);
    
    static ::au::edu::anu::mm::AssociatedLegendrePolynomial* _make(x10_long p);
    
    virtual x10_double __apply(x10_long l, x10_long m);
    virtual x10_double __set(x10_long l, x10_long m, x10_double v);
    static ::au::edu::anu::mm::AssociatedLegendrePolynomial* getPlk(x10_double theta,
                                                                    x10_long p);
    virtual void getPlk(x10_double theta);
    static ::au::edu::anu::mm::AssociatedLegendrePolynomial* getPlm(
      x10_double x, x10_long p);
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::mm::AssociatedLegendrePolynomial* au__edu__anu__mm__AssociatedLegendrePolynomial____this__au__edu__anu__mm__AssociatedLegendrePolynomial(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_AssociatedLegendrePolynomial(
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
#endif // AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H

namespace au { namespace edu { namespace anu { namespace mm { 
class AssociatedLegendrePolynomial;
} } } } 

#ifndef AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H_NODEPS
#define AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H_NODEPS
#ifndef AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H_GENERICS
#define AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H_GENERICS
#endif // AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H_GENERICS
#endif // __AU_EDU_ANU_MM_ASSOCIATEDLEGENDREPOLYNOMIAL_H_NODEPS
