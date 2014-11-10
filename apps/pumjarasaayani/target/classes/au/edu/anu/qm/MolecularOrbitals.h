#ifndef __AU_EDU_ANU_QM_MOLECULARORBITALS_H
#define __AU_EDU_ANU_QM_MOLECULARORBITALS_H

#include <x10rt.h>


#define X10_MATRIX_DENSEMATRIX_H_NODEPS
#include <x10/matrix/DenseMatrix.h>
#undef X10_MATRIX_DENSEMATRIX_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Overlap;
} } } } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class GMLDiagonalizer;
} } } } 
namespace x10 { namespace matrix { 
class Vector;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class MolecularOrbitals_Strings {
  public:
    static ::x10::lang::String sl__150019;
};

class MolecularOrbitals : public ::x10::matrix::DenseMatrix   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_double >* FMGL(orbitalEnergies);
    
    void _constructor(x10_long n);
    
    static ::au::edu::anu::qm::MolecularOrbitals* _make(x10_long n);
    
    virtual ::x10::lang::Rail< x10_double >* getOrbitalEnergies();
    virtual void compute(::x10::matrix::DenseMatrix* theMat, ::au::edu::anu::qm::Overlap* overlap);
    virtual ::au::edu::anu::qm::MolecularOrbitals* au__edu__anu__qm__MolecularOrbitals____this__au__edu__anu__qm__MolecularOrbitals(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_MolecularOrbitals(
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
#endif // AU_EDU_ANU_QM_MOLECULARORBITALS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class MolecularOrbitals;
} } } } 

#ifndef AU_EDU_ANU_QM_MOLECULARORBITALS_H_NODEPS
#define AU_EDU_ANU_QM_MOLECULARORBITALS_H_NODEPS
#ifndef AU_EDU_ANU_QM_MOLECULARORBITALS_H_GENERICS
#define AU_EDU_ANU_QM_MOLECULARORBITALS_H_GENERICS
#endif // AU_EDU_ANU_QM_MOLECULARORBITALS_H_GENERICS
#endif // __AU_EDU_ANU_QM_MOLECULARORBITALS_H_NODEPS
