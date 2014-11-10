#ifndef __AU_EDU_ANU_QM_QMATOM_H
#define __AU_EDU_ANU_QM_QMATOM_H

#include <x10rt.h>


#define AU_EDU_ANU_CHEM_ATOM_H_NODEPS
#include <au/edu/anu/chem/Atom.h>
#undef AU_EDU_ANU_CHEM_ATOM_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#include <au/edu/anu/qm/ContractedGaussian.h>
#undef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class QMAtom : public ::au::edu::anu::chem::Atom   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_boolean FMGL(dummy);
    
    void _constructor(x10_int species, ::x10x::vector::Point3d centre);
    
    static ::au::edu::anu::qm::QMAtom* _make(x10_int species, ::x10x::vector::Point3d centre);
    
    void _constructor(::x10x::vector::Point3d centre);
    
    static ::au::edu::anu::qm::QMAtom* _make(::x10x::vector::Point3d centre);
    
    void _constructor(x10_int species, ::x10x::vector::Point3d centre, x10_boolean dummy);
    
    static ::au::edu::anu::qm::QMAtom* _make(x10_int species, ::x10x::vector::Point3d centre,
                                             x10_boolean dummy);
    
    virtual x10_boolean isDummy();
    ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*
      FMGL(basisFunctions);
    
    virtual void setBasisFunctions(::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bfs);
    virtual ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*
      getBasisFunctions();
    virtual ::au::edu::anu::qm::QMAtom* au__edu__anu__qm__QMAtom____this__au__edu__anu__qm__QMAtom(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_QMAtom(
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
#endif // AU_EDU_ANU_QM_QMATOM_H

namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 

#ifndef AU_EDU_ANU_QM_QMATOM_H_NODEPS
#define AU_EDU_ANU_QM_QMATOM_H_NODEPS
#ifndef AU_EDU_ANU_QM_QMATOM_H_GENERICS
#define AU_EDU_ANU_QM_QMATOM_H_GENERICS
#endif // AU_EDU_ANU_QM_QMATOM_H_GENERICS
#endif // __AU_EDU_ANU_QM_QMATOM_H_NODEPS
