#ifndef __AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H
#define __AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H

#include <x10rt.h>


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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Fock;
} } } } 
namespace x10 { namespace matrix { 
class Vector;
} } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Overlap;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace matrix { namespace lapack { 
class DenseMatrixLAPACK;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class DIISFockExtrapolator_Strings {
  public:
    static ::x10::lang::String sl__150022;
    static ::x10::lang::String sl__150023;
};

class DIISFockExtrapolator : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(N);
    
    /* Static field: FMGL(MIN_NON_DIIS_STEP) */
    static const x10_int FMGL(MIN_NON_DIIS_STEP) = 0;
    static x10_int FMGL(MIN_NON_DIIS_STEP__get)();
    
    /* Static field: FMGL(MAX_NON_DIIS_STEP) */
    static const x10_int FMGL(MAX_NON_DIIS_STEP) = 2;
    static x10_int FMGL(MAX_NON_DIIS_STEP__get)();
    
    x10_double FMGL(diisStartThreshold);
    
    x10_int FMGL(diisSubspaceSize);
    
    x10_double FMGL(diisMaxError);
    
    ::x10::util::ArrayList< ::au::edu::anu::qm::Fock*>* FMGL(fockMatrixList);
    
    ::x10::util::ArrayList< ::x10::matrix::Vector*>* FMGL(errorVectorList);
    
    ::x10::matrix::DenseMatrix* FMGL(FPS);
    
    ::x10::matrix::DenseMatrix* FMGL(SPF);
    
    ::x10::matrix::DenseMatrix* FMGL(scratch);
    
    x10_int FMGL(diisStep);
    
    x10_int FMGL(nondiisStep);
    
    x10_boolean FMGL(diisStarted);
    
    x10_boolean FMGL(converged);
    
    ::au::edu::anu::qm::Fock* FMGL(oldFock);
    
    void _constructor(x10_long N);
    
    static ::au::edu::anu::qm::DIISFockExtrapolator* _make(x10_long N);
    
    virtual x10_boolean isConverged();
    virtual ::au::edu::anu::qm::Fock* next(::au::edu::anu::qm::Fock* currentFock,
                                           ::au::edu::anu::qm::Overlap* overlap,
                                           ::au::edu::anu::qm::Density* density);
    virtual ::au::edu::anu::qm::DIISFockExtrapolator* au__edu__anu__qm__DIISFockExtrapolator____this__au__edu__anu__qm__DIISFockExtrapolator(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_DIISFockExtrapolator(
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
#endif // AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H

namespace au { namespace edu { namespace anu { namespace qm { 
class DIISFockExtrapolator;
} } } } 

#ifndef AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H_NODEPS
#define AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H_NODEPS
#ifndef AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H_GENERICS
#define AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H_GENERICS
inline x10_int au::edu::anu::qm::DIISFockExtrapolator::FMGL(MIN_NON_DIIS_STEP__get)() {
    return au::edu::anu::qm::DIISFockExtrapolator::FMGL(MIN_NON_DIIS_STEP);
}

inline x10_int au::edu::anu::qm::DIISFockExtrapolator::FMGL(MAX_NON_DIIS_STEP__get)() {
    return au::edu::anu::qm::DIISFockExtrapolator::FMGL(MAX_NON_DIIS_STEP);
}

#endif // AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H_GENERICS
#endif // __AU_EDU_ANU_QM_DIISFOCKEXTRAPOLATOR_H_NODEPS
