#ifndef __AU_EDU_ANU_QM_SHELL_H
#define __AU_EDU_ANU_QM_SHELL_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#include <au/edu/anu/qm/ContractedGaussian.h>
#undef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class Shell : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(angularMomentum);
    
    ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* FMGL(shellPrimitives);
    
    void _constructor(x10_int am);
    
    static ::au::edu::anu::qm::Shell* _make(x10_int am);
    
    virtual x10_int getAngularMomentum();
    virtual ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*
      getShellPrimitives();
    virtual x10_long getNumberOfShellPrimitives();
    virtual ::au::edu::anu::qm::ContractedGaussian getShellPrimitive(x10_int i);
    virtual void addShellPrimitive(::au::edu::anu::qm::ContractedGaussian cg);
    virtual ::au::edu::anu::qm::Shell* au__edu__anu__qm__Shell____this__au__edu__anu__qm__Shell(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_Shell();
    
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
#endif // AU_EDU_ANU_QM_SHELL_H

namespace au { namespace edu { namespace anu { namespace qm { 
class Shell;
} } } } 

#ifndef AU_EDU_ANU_QM_SHELL_H_NODEPS
#define AU_EDU_ANU_QM_SHELL_H_NODEPS
#ifndef AU_EDU_ANU_QM_SHELL_H_GENERICS
#define AU_EDU_ANU_QM_SHELL_H_GENERICS
#endif // AU_EDU_ANU_QM_SHELL_H_GENERICS
#endif // __AU_EDU_ANU_QM_SHELL_H_NODEPS
