#ifndef __AU_EDU_ANU_QM_DENSITY_H
#define __AU_EDU_ANU_QM_DENSITY_H

#include <x10rt.h>


#define X10_MATRIX_DENSEMATRIX_H_NODEPS
#include <x10/matrix/DenseMatrix.h>
#undef X10_MATRIX_DENSEMATRIX_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class MolecularOrbitals;
} } } } 
namespace x10 { namespace matrix { namespace blas { 
class DenseMatrixBLAS;
} } } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class Density : public ::x10::matrix::DenseMatrix   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(noOfOccupancies);
    
    void _constructor(x10_long n, x10_long noOfOccupancies);
    
    static ::au::edu::anu::qm::Density* _make(x10_long n, x10_long noOfOccupancies);
    
    void _constructor(x10_long n, x10_long noOfOccupancies, x10_double v);
    
    static ::au::edu::anu::qm::Density* _make(x10_long n, x10_long noOfOccupancies,
                                              x10_double v);
    
    virtual x10_long getNoOfOccupancies();
    virtual void compute(::au::edu::anu::qm::MolecularOrbitals* mos);
    virtual void applyGuess(::x10::matrix::DenseMatrix* SAD);
    virtual ::au::edu::anu::qm::Density* au__edu__anu__qm__Density____this__au__edu__anu__qm__Density(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_Density(
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
#endif // AU_EDU_ANU_QM_DENSITY_H

namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 

#ifndef AU_EDU_ANU_QM_DENSITY_H_NODEPS
#define AU_EDU_ANU_QM_DENSITY_H_NODEPS
#ifndef AU_EDU_ANU_QM_DENSITY_H_GENERICS
#define AU_EDU_ANU_QM_DENSITY_H_GENERICS
#endif // AU_EDU_ANU_QM_DENSITY_H_GENERICS
#endif // __AU_EDU_ANU_QM_DENSITY_H_NODEPS
