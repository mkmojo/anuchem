#ifndef __AU_EDU_ANU_QM_GMLDIAGONALIZER_H
#define __AU_EDU_ANU_QM_GMLDIAGONALIZER_H

#include <x10rt.h>


namespace x10 { namespace matrix { 
class Vector;
} } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace matrix { namespace lapack { 
class DenseMatrixLAPACK;
} } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class GMLDiagonalizer_Strings {
  public:
    static ::x10::lang::String sl__149676;
};

class GMLDiagonalizer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::matrix::Vector* FMGL(eigenValuesVec);
    
    ::x10::matrix::DenseMatrix* FMGL(eigenVectorsMat);
    
    virtual x10_int diagonalize(::x10::matrix::DenseMatrix* A);
    static ::x10::matrix::DenseMatrix* symmetricOrthogonalization(::x10::matrix::DenseMatrix* A);
    virtual ::x10::matrix::Vector* getEigenValues();
    virtual ::x10::matrix::DenseMatrix* getEigenVectors();
    virtual ::au::edu::anu::qm::GMLDiagonalizer* au__edu__anu__qm__GMLDiagonalizer____this__au__edu__anu__qm__GMLDiagonalizer(
      );
    void _constructor();
    
    static ::au::edu::anu::qm::GMLDiagonalizer* _make();
    
    virtual void __fieldInitializers_au_edu_anu_qm_GMLDiagonalizer(
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
#endif // AU_EDU_ANU_QM_GMLDIAGONALIZER_H

namespace au { namespace edu { namespace anu { namespace qm { 
class GMLDiagonalizer;
} } } } 

#ifndef AU_EDU_ANU_QM_GMLDIAGONALIZER_H_NODEPS
#define AU_EDU_ANU_QM_GMLDIAGONALIZER_H_NODEPS
#ifndef AU_EDU_ANU_QM_GMLDIAGONALIZER_H_GENERICS
#define AU_EDU_ANU_QM_GMLDIAGONALIZER_H_GENERICS
#endif // AU_EDU_ANU_QM_GMLDIAGONALIZER_H_GENERICS
#endif // __AU_EDU_ANU_QM_GMLDIAGONALIZER_H_NODEPS
