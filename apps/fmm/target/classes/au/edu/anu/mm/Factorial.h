#ifndef __AU_EDU_ANU_MM_FACTORIAL_H
#define __AU_EDU_ANU_MM_FACTORIAL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class Factorial : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(factorial) */
    static ::x10::lang::Rail< x10_double >* FMGL(factorial);
    static void FMGL(factorial__do_init)();
    static void FMGL(factorial__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(factorial__status);
    static ::x10::lang::CheckedThrowable* FMGL(factorial__exception);
    static ::x10::lang::Rail< x10_double >* FMGL(factorial__get)();
    
    static ::x10::lang::Rail< x10_double >* calcFact();
    static x10_double getFactorial(x10_long i);
    virtual ::au::edu::anu::mm::Factorial* au__edu__anu__mm__Factorial____this__au__edu__anu__mm__Factorial(
      );
    void _constructor();
    
    static ::au::edu::anu::mm::Factorial* _make();
    
    virtual void __fieldInitializers_au_edu_anu_mm_Factorial();
    
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
#endif // AU_EDU_ANU_MM_FACTORIAL_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Factorial;
} } } } 

#ifndef AU_EDU_ANU_MM_FACTORIAL_H_NODEPS
#define AU_EDU_ANU_MM_FACTORIAL_H_NODEPS
#include <x10/lang/Rail.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>
#ifndef AU_EDU_ANU_MM_FACTORIAL_H_GENERICS
#define AU_EDU_ANU_MM_FACTORIAL_H_GENERICS
inline ::x10::lang::Rail< x10_double >* au::edu::anu::mm::Factorial::FMGL(factorial__get)() {
    if (FMGL(factorial__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(factorial__init)();
    }
    return au::edu::anu::mm::Factorial::FMGL(factorial);
}

#endif // AU_EDU_ANU_MM_FACTORIAL_H_GENERICS
#endif // __AU_EDU_ANU_MM_FACTORIAL_H_NODEPS
