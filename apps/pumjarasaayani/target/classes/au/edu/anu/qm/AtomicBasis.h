#ifndef __AU_EDU_ANU_QM_ATOMICBASIS_H
#define __AU_EDU_ANU_QM_ATOMICBASIS_H

#include <x10rt.h>


#define AU_EDU_ANU_QM_ORBITAL_H_NODEPS
#include <au/edu/anu/qm/Orbital.h>
#undef AU_EDU_ANU_QM_ORBITAL_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class AtomicBasis : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* FMGL(orbitals);
    
    void _constructor(::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* orbitals);
    
    static ::au::edu::anu::qm::AtomicBasis* _make(::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* orbitals);
    
    virtual ::au::edu::anu::qm::AtomicBasis* au__edu__anu__qm__AtomicBasis____this__au__edu__anu__qm__AtomicBasis(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_AtomicBasis();
    
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
#endif // AU_EDU_ANU_QM_ATOMICBASIS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class AtomicBasis;
} } } } 

#ifndef AU_EDU_ANU_QM_ATOMICBASIS_H_NODEPS
#define AU_EDU_ANU_QM_ATOMICBASIS_H_NODEPS
#ifndef AU_EDU_ANU_QM_ATOMICBASIS_H_GENERICS
#define AU_EDU_ANU_QM_ATOMICBASIS_H_GENERICS
#endif // AU_EDU_ANU_QM_ATOMICBASIS_H_GENERICS
#endif // __AU_EDU_ANU_QM_ATOMICBASIS_H_NODEPS
