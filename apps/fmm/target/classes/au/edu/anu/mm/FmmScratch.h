#ifndef __AU_EDU_ANU_MM_FMMSCRATCH_H
#define __AU_EDU_ANU_MM_FMMSCRATCH_H

#include <x10rt.h>


#define X10_LANG_COMPLEX_H_NODEPS
#include <x10/lang/Complex.h>
#undef X10_LANG_COMPLEX_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class AssociatedLegendrePolynomial;
} } } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Runtime__Worker;
} } 
namespace x10 { namespace lang { 
class Thread;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class FmmScratch : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::mm::MultipoleExpansion* FMGL(exp);
    
    ::x10::lang::Rail< x10_complex >* FMGL(array);
    
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* FMGL(plm);
    
    void _constructor(x10_long numTerms);
    
    static ::au::edu::anu::mm::FmmScratch* _make(x10_long numTerms);
    
    /* Static field: FMGL(store) */
    static ::x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >* FMGL(store);
    static void FMGL(store__do_init)();
    static void FMGL(store__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(store__status);
    static ::x10::lang::CheckedThrowable* FMGL(store__exception);
    static ::x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >* FMGL(store__get)();
    
    static ::au::edu::anu::mm::FmmScratch* getWorkerLocal();
    static void setWorkerLocal(::au::edu::anu::mm::FmmScratch* scratch);
    static void init(::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*>* func);
    virtual ::au::edu::anu::mm::FmmScratch* au__edu__anu__mm__FmmScratch____this__au__edu__anu__mm__FmmScratch(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_FmmScratch();
    
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
#endif // AU_EDU_ANU_MM_FMMSCRATCH_H

namespace au { namespace edu { namespace anu { namespace mm { 
class FmmScratch;
} } } } 

#ifndef AU_EDU_ANU_MM_FMMSCRATCH_H_NODEPS
#define AU_EDU_ANU_MM_FMMSCRATCH_H_NODEPS
#include <x10/lang/Complex.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/mm/AssociatedLegendrePolynomial.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Runtime__Worker.h>
#include <x10/lang/Thread.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>
#ifndef AU_EDU_ANU_MM_FMMSCRATCH_H_GENERICS
#define AU_EDU_ANU_MM_FMMSCRATCH_H_GENERICS
inline ::x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >* au::edu::anu::mm::FmmScratch::FMGL(store__get)() {
    if (FMGL(store__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(store__init)();
    }
    return au::edu::anu::mm::FmmScratch::FMGL(store);
}

#endif // AU_EDU_ANU_MM_FMMSCRATCH_H_GENERICS
#endif // __AU_EDU_ANU_MM_FMMSCRATCH_H_NODEPS
