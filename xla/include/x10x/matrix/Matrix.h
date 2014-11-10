#ifndef __X10X_MATRIX_MATRIX_H
#define __X10X_MATRIX_MATRIX_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10x { namespace xla { 
class JacobiDiagonalizer;
} } 
namespace x10x { namespace vector { 
class Vector;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10x { namespace matrix { 

class Matrix_Strings {
  public:
    static ::x10::lang::String sl__14220;
    static ::x10::lang::String sl__14221;
    static ::x10::lang::String sl__14222;
};

class Matrix : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::array::Array_2<x10_double>* FMGL(mat);
    
    void _constructor(x10_long siz);
    
    static ::x10x::matrix::Matrix* _make(x10_long siz);
    
    void _constructor(x10_long row, x10_long col);
    
    static ::x10x::matrix::Matrix* _make(x10_long row, x10_long col);
    
    void _constructor(::x10x::matrix::Matrix* source);
    
    static ::x10x::matrix::Matrix* _make(::x10x::matrix::Matrix* source);
    
    virtual ::x10::array::Array_2<x10_double>* getMatrix();
    virtual x10_long getRowCount();
    virtual x10_long getColCount();
    virtual x10_double __apply(x10_long i0, x10_long i1);
    virtual x10_double __set(x10_long i0, x10_long i1, x10_double v);
    virtual ::x10x::matrix::Matrix* symmetricOrthogonalization();
    virtual void makeIdentity();
    virtual void makeZero();
    virtual ::x10x::matrix::Matrix* similarityTransformT(::x10x::matrix::Matrix* x);
    virtual ::x10x::matrix::Matrix* similarityTransform(::x10x::matrix::Matrix* x);
    virtual ::x10x::matrix::Matrix* mul(::x10x::matrix::Matrix* b);
    virtual void mulInPlace(::x10x::matrix::Matrix* a, ::x10x::matrix::Matrix* b);
    virtual ::x10x::matrix::Matrix* mul(x10_double fac);
    virtual ::x10x::matrix::Matrix* add(::x10x::matrix::Matrix* x);
    virtual void addInPlace(::x10x::matrix::Matrix* x);
    virtual void addInPlace(::x10x::matrix::Matrix* x, ::x10x::matrix::Matrix* y);
    virtual ::x10x::matrix::Matrix* sub(::x10x::matrix::Matrix* x);
    virtual ::x10x::matrix::Matrix* transpose();
    virtual x10_double trace();
    virtual x10_double sumOffDiagonal();
    virtual ::x10x::vector::Vector* getRowVector(x10_long rowIdx);
    virtual x10_boolean isUpperTriangular();
    virtual x10_boolean isSingular(x10_long p, ::x10::lang::Rail< x10_long >* row);
    virtual ::x10::lang::String* toString();
    virtual ::x10x::matrix::Matrix* x10x__matrix__Matrix____this__x10x__matrix__Matrix(
      );
    virtual void __fieldInitializers_x10x_matrix_Matrix();
    
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
#endif // X10X_MATRIX_MATRIX_H

namespace x10x { namespace matrix { 
class Matrix;
} } 

#ifndef X10X_MATRIX_MATRIX_H_NODEPS
#define X10X_MATRIX_MATRIX_H_NODEPS
#ifndef X10X_MATRIX_MATRIX_H_GENERICS
#define X10X_MATRIX_MATRIX_H_GENERICS
#endif // X10X_MATRIX_MATRIX_H_GENERICS
#endif // __X10X_MATRIX_MATRIX_H_NODEPS
