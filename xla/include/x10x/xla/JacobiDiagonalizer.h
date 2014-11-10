#ifndef __X10X_XLA_JACOBIDIAGONALIZER_H
#define __X10X_XLA_JACOBIDIAGONALIZER_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10x { namespace vector { 
class Vector;
} } 
namespace x10x { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10x { namespace xla { 

class JacobiDiagonalizer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10x::vector::Vector* FMGL(eigenValuesVec);
    
    ::x10x::matrix::Matrix* FMGL(eigenVectorsMat);
    
    x10_int FMGL(maxIterations);
    
    virtual void diagonalize(::x10x::matrix::Matrix* mat);
    static void doRotate(::x10::array::Array_2<x10_double>* a, x10_long i,
                         x10_long j, x10_long k, x10_long l, x10_double sin,
                         x10_double tau);
    void sortEigenValues();
    virtual ::x10x::vector::Vector* getEigenValues();
    virtual ::x10x::matrix::Matrix* getEigenVectors();
    virtual ::x10x::xla::JacobiDiagonalizer* x10x__xla__JacobiDiagonalizer____this__x10x__xla__JacobiDiagonalizer(
      );
    void _constructor();
    
    static ::x10x::xla::JacobiDiagonalizer* _make();
    
    virtual void __fieldInitializers_x10x_xla_JacobiDiagonalizer(
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


} } 
#endif // X10X_XLA_JACOBIDIAGONALIZER_H

namespace x10x { namespace xla { 
class JacobiDiagonalizer;
} } 

#ifndef X10X_XLA_JACOBIDIAGONALIZER_H_NODEPS
#define X10X_XLA_JACOBIDIAGONALIZER_H_NODEPS
#ifndef X10X_XLA_JACOBIDIAGONALIZER_H_GENERICS
#define X10X_XLA_JACOBIDIAGONALIZER_H_GENERICS
#endif // X10X_XLA_JACOBIDIAGONALIZER_H_GENERICS
#endif // __X10X_XLA_JACOBIDIAGONALIZER_H_NODEPS
