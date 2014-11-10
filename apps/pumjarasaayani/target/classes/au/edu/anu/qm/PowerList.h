#ifndef __AU_EDU_ANU_QM_POWERLIST_H
#define __AU_EDU_ANU_QM_POWERLIST_H

#include <x10rt.h>


#define AU_EDU_ANU_QM_POWER_H_NODEPS
#include <au/edu/anu/qm/Power.h>
#undef AU_EDU_ANU_QM_POWER_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class PowerList_Strings {
  public:
    static ::x10::lang::String sl__149629;
    static ::x10::lang::String sl__149630;
    static ::x10::lang::String sl__149631;
    static ::x10::lang::String sl__149628;
    static ::x10::lang::String sl__149627;
    static ::x10::lang::String sl__149632;
};

class PowerList : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>*
      FMGL(powerList);
    
    void _constructor();
    
    static ::au::edu::anu::qm::PowerList* _make();
    
    virtual ::x10::lang::Rail< ::au::edu::anu::qm::Power >* generatePowerList(
      x10_int maxAngularMomentum);
    /* Static field: FMGL(_theInstance) */
    static ::au::edu::anu::qm::PowerList* FMGL(_theInstance);
    static void FMGL(_theInstance__do_init)();
    static void FMGL(_theInstance__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(_theInstance__status);
    static ::x10::lang::CheckedThrowable* FMGL(_theInstance__exception);
    static ::au::edu::anu::qm::PowerList* FMGL(_theInstance__get)();
    
    static ::au::edu::anu::qm::PowerList* getInstance();
    virtual ::x10::lang::Rail< ::au::edu::anu::qm::Power >* getPowers(
      ::x10::lang::String* orbitalType);
    virtual ::au::edu::anu::qm::PowerList* au__edu__anu__qm__PowerList____this__au__edu__anu__qm__PowerList(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_PowerList(
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
#endif // AU_EDU_ANU_QM_POWERLIST_H

namespace au { namespace edu { namespace anu { namespace qm { 
class PowerList;
} } } } 

#ifndef AU_EDU_ANU_QM_POWERLIST_H_NODEPS
#define AU_EDU_ANU_QM_POWERLIST_H_NODEPS
#include <au/edu/anu/qm/Power.h>
#include <x10/util/HashMap.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_POWERLIST_H_GENERICS
#define AU_EDU_ANU_QM_POWERLIST_H_GENERICS
inline ::au::edu::anu::qm::PowerList* au::edu::anu::qm::PowerList::FMGL(_theInstance__get)() {
    if (FMGL(_theInstance__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(_theInstance__init)();
    }
    return au::edu::anu::qm::PowerList::FMGL(_theInstance);
}

#endif // AU_EDU_ANU_QM_POWERLIST_H_GENERICS
#endif // __AU_EDU_ANU_QM_POWERLIST_H_NODEPS
