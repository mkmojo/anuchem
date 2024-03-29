#ifndef __AU_EDU_ANU_QM_HCORE_H
#define __AU_EDU_ANU_QM_HCORE_H

#include <x10rt.h>


#define X10_MATRIX_DENSEMATRIX_H_NODEPS
#include <x10/matrix/DenseMatrix.h>
#undef X10_MATRIX_DENSEMATRIX_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class HCore : public ::x10::matrix::DenseMatrix   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_long n);
    
    static ::au::edu::anu::qm::HCore* _make(x10_long n);
    
    virtual ::au::edu::anu::qm::HCore* au__edu__anu__qm__HCore____this__au__edu__anu__qm__HCore(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_HCore();
    
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
#endif // AU_EDU_ANU_QM_HCORE_H

namespace au { namespace edu { namespace anu { namespace qm { 
class HCore;
} } } } 

#ifndef AU_EDU_ANU_QM_HCORE_H_NODEPS
#define AU_EDU_ANU_QM_HCORE_H_NODEPS
#ifndef AU_EDU_ANU_QM_HCORE_H_GENERICS
#define AU_EDU_ANU_QM_HCORE_H_GENERICS
#endif // AU_EDU_ANU_QM_HCORE_H_GENERICS
#endif // __AU_EDU_ANU_QM_HCORE_H_NODEPS
