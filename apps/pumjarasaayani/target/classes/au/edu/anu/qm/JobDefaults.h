#ifndef __AU_EDU_ANU_QM_JOBDEFAULTS_H
#define __AU_EDU_ANU_QM_JOBDEFAULTS_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class JobDefaults_Strings {
  public:
    static ::x10::lang::String sl__148999;
    static ::x10::lang::String sl__148996;
    static ::x10::lang::String sl__148998;
    static ::x10::lang::String sl__148997;
};

class JobDefaults : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(SCF_METHOD_DIIS) */
    static ::x10::lang::String* FMGL(SCF_METHOD_DIIS);
    static void FMGL(SCF_METHOD_DIIS__do_init)();
    static void FMGL(SCF_METHOD_DIIS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SCF_METHOD_DIIS__status);
    static ::x10::lang::CheckedThrowable* FMGL(SCF_METHOD_DIIS__exception);
    static ::x10::lang::String* FMGL(SCF_METHOD_DIIS__get)();
    
    /* Static field: FMGL(SCF_METHOD_ROOTHAAN) */
    static ::x10::lang::String* FMGL(SCF_METHOD_ROOTHAAN);
    static void FMGL(SCF_METHOD_ROOTHAAN__do_init)();
    static void FMGL(SCF_METHOD_ROOTHAAN__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SCF_METHOD_ROOTHAAN__status);
    static ::x10::lang::CheckedThrowable* FMGL(SCF_METHOD_ROOTHAAN__exception);
    static ::x10::lang::String* FMGL(SCF_METHOD_ROOTHAAN__get)();
    
    ::x10::lang::String* FMGL(scfMethod);
    
    x10_int FMGL(maxIterations);
    
    x10_double FMGL(energyTolerance);
    
    x10_double FMGL(diisStartThreshold);
    
    x10_double FMGL(diisConvergenceThreshold);
    
    x10_int FMGL(diisSubspaceSize);
    
    x10_int FMGL(gMatrixParallelScheme);
    
    x10_boolean FMGL(useMta);
    
    /* Static field: FMGL(GUESS_CORE) */
    static ::x10::lang::String* FMGL(GUESS_CORE);
    static void FMGL(GUESS_CORE__do_init)();
    static void FMGL(GUESS_CORE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(GUESS_CORE__status);
    static ::x10::lang::CheckedThrowable* FMGL(GUESS_CORE__exception);
    static ::x10::lang::String* FMGL(GUESS_CORE__get)();
    
    /* Static field: FMGL(GUESS_SAD) */
    static ::x10::lang::String* FMGL(GUESS_SAD);
    static void FMGL(GUESS_SAD__do_init)();
    static void FMGL(GUESS_SAD__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(GUESS_SAD__status);
    static ::x10::lang::CheckedThrowable* FMGL(GUESS_SAD__exception);
    static ::x10::lang::String* FMGL(GUESS_SAD__get)();
    
    ::x10::lang::String* FMGL(guess);
    
    x10_int FMGL(roOn);
    
    x10_boolean FMGL(compareRo);
    
    x10_int FMGL(roN);
    
    x10_int FMGL(roNK);
    
    x10_int FMGL(roL);
    
    x10_double FMGL(roZ);
    
    x10_double FMGL(rad);
    
    x10_double FMGL(omega);
    
    x10_double FMGL(thresh);
    
    x10_double FMGL(roThresh);
    
    x10_int FMGL(centering);
    
    void _constructor();
    
    static ::au::edu::anu::qm::JobDefaults* _make();
    
    /* Static field: FMGL(_theInstance) */
    static ::au::edu::anu::qm::JobDefaults* FMGL(_theInstance);
    static void FMGL(_theInstance__do_init)();
    static void FMGL(_theInstance__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(_theInstance__status);
    static ::x10::lang::CheckedThrowable* FMGL(_theInstance__exception);
    static ::au::edu::anu::qm::JobDefaults* FMGL(_theInstance__get)();
    
    static ::au::edu::anu::qm::JobDefaults* getInstance();
    virtual ::au::edu::anu::qm::JobDefaults* au__edu__anu__qm__JobDefaults____this__au__edu__anu__qm__JobDefaults(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_JobDefaults();
    
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
#endif // AU_EDU_ANU_QM_JOBDEFAULTS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 

#ifndef AU_EDU_ANU_QM_JOBDEFAULTS_H_NODEPS
#define AU_EDU_ANU_QM_JOBDEFAULTS_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_JOBDEFAULTS_H_GENERICS
#define AU_EDU_ANU_QM_JOBDEFAULTS_H_GENERICS
inline ::x10::lang::String* au::edu::anu::qm::JobDefaults::FMGL(SCF_METHOD_DIIS__get)() {
    if (FMGL(SCF_METHOD_DIIS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SCF_METHOD_DIIS__init)();
    }
    return au::edu::anu::qm::JobDefaults::FMGL(SCF_METHOD_DIIS);
}

inline ::x10::lang::String* au::edu::anu::qm::JobDefaults::FMGL(SCF_METHOD_ROOTHAAN__get)() {
    if (FMGL(SCF_METHOD_ROOTHAAN__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SCF_METHOD_ROOTHAAN__init)();
    }
    return au::edu::anu::qm::JobDefaults::FMGL(SCF_METHOD_ROOTHAAN);
}

inline ::x10::lang::String* au::edu::anu::qm::JobDefaults::FMGL(GUESS_CORE__get)() {
    if (FMGL(GUESS_CORE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(GUESS_CORE__init)();
    }
    return au::edu::anu::qm::JobDefaults::FMGL(GUESS_CORE);
}

inline ::x10::lang::String* au::edu::anu::qm::JobDefaults::FMGL(GUESS_SAD__get)() {
    if (FMGL(GUESS_SAD__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(GUESS_SAD__init)();
    }
    return au::edu::anu::qm::JobDefaults::FMGL(GUESS_SAD);
}

inline ::au::edu::anu::qm::JobDefaults* au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)() {
    if (FMGL(_theInstance__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(_theInstance__init)();
    }
    return au::edu::anu::qm::JobDefaults::FMGL(_theInstance);
}

#endif // AU_EDU_ANU_QM_JOBDEFAULTS_H_GENERICS
#endif // __AU_EDU_ANU_QM_JOBDEFAULTS_H_NODEPS
