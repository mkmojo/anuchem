#ifndef __AU_EDU_ANU_QM_INTEGRALSUTILS_H
#define __AU_EDU_ANU_QM_INTEGRALSUTILS_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class IntegralsUtils : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_double computeFGamma(x10_int m, x10_double x);
    static x10_double gammaIncomplete(x10_double a, x10_double x);
    static x10_double gammln(x10_double x);
    /* Static field: FMGL(SMALL) */
    static x10_double FMGL(SMALL);
    static x10_double FMGL(SMALL__get)();
    
    /* Static field: FMGL(EPS) */
    static x10_double FMGL(EPS);
    static x10_double FMGL(EPS__get)();
    
    /* Static field: FMGL(FPMIN) */
    static x10_double FMGL(FPMIN);
    static x10_double FMGL(FPMIN__get)();
    
    /* Static field: FMGL(MAX_ITERATION) */
    static const x10_int FMGL(MAX_ITERATION) = 100;
    static x10_int FMGL(MAX_ITERATION__get)();
    
    virtual ::au::edu::anu::qm::IntegralsUtils* au__edu__anu__qm__IntegralsUtils____this__au__edu__anu__qm__IntegralsUtils(
      );
    void _constructor();
    
    static ::au::edu::anu::qm::IntegralsUtils* _make();
    
    virtual void __fieldInitializers_au_edu_anu_qm_IntegralsUtils(
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
#endif // AU_EDU_ANU_QM_INTEGRALSUTILS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class IntegralsUtils;
} } } } 

#ifndef AU_EDU_ANU_QM_INTEGRALSUTILS_H_NODEPS
#define AU_EDU_ANU_QM_INTEGRALSUTILS_H_NODEPS
#ifndef AU_EDU_ANU_QM_INTEGRALSUTILS_H_GENERICS
#define AU_EDU_ANU_QM_INTEGRALSUTILS_H_GENERICS
inline x10_double au::edu::anu::qm::IntegralsUtils::FMGL(SMALL__get)() {
    return au::edu::anu::qm::IntegralsUtils::FMGL(SMALL);
}

inline x10_double au::edu::anu::qm::IntegralsUtils::FMGL(EPS__get)() {
    return au::edu::anu::qm::IntegralsUtils::FMGL(EPS);
}

inline x10_double au::edu::anu::qm::IntegralsUtils::FMGL(FPMIN__get)() {
    return au::edu::anu::qm::IntegralsUtils::FMGL(FPMIN);
}

inline x10_int au::edu::anu::qm::IntegralsUtils::FMGL(MAX_ITERATION__get)() {
    return au::edu::anu::qm::IntegralsUtils::FMGL(MAX_ITERATION);
}

#endif // AU_EDU_ANU_QM_INTEGRALSUTILS_H_GENERICS
#endif // __AU_EDU_ANU_QM_INTEGRALSUTILS_H_NODEPS
