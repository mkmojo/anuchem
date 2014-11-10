#ifndef __X10X_VECTOR_VECTOR_H
#define __X10X_VECTOR_VECTOR_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10x { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace compiler { 
class Inline;
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

namespace x10x { namespace vector { 

class Vector_Strings {
  public:
    static ::x10::lang::String sl__14256;
    static ::x10::lang::String sl__14257;
};

class Vector : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_double >* FMGL(vec);
    
    void _constructor(x10_long siz);
    
    static ::x10x::vector::Vector* _make(x10_long siz);
    
    void _constructor(::x10::lang::Rail< x10_double >* vec);
    
    static ::x10x::vector::Vector* _make(::x10::lang::Rail< x10_double >* vec);
    
    static ::x10x::vector::Vector* makeUnsafe(x10_long size);
    void _constructor(::x10x::matrix::Matrix* mat);
    
    static ::x10x::vector::Vector* _make(::x10x::matrix::Matrix* mat);
    
    virtual x10_long getSize();
    virtual ::x10::lang::Rail< x10_double >* getVector();
    virtual x10_double __apply(x10_long i0);
    virtual x10_double __set(x10_long i0, x10_double v);
    virtual void makeZero();
    virtual x10_double dot(::x10x::vector::Vector* b);
    virtual ::x10x::vector::Vector* add(::x10x::vector::Vector* b);
    virtual ::x10x::vector::Vector* sub(::x10x::vector::Vector* b);
    virtual x10_double magnitude();
    virtual ::x10x::vector::Vector* normalize();
    virtual ::x10x::vector::Vector* negate();
    virtual ::x10x::vector::Vector* mul(x10_double k);
    virtual x10_double maxNorm();
    virtual ::x10::lang::String* toString();
    virtual ::x10x::vector::Vector* x10x__vector__Vector____this__x10x__vector__Vector(
      );
    virtual void __fieldInitializers_x10x_vector_Vector();
    
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
#endif // X10X_VECTOR_VECTOR_H

namespace x10x { namespace vector { 
class Vector;
} } 

#ifndef X10X_VECTOR_VECTOR_H_NODEPS
#define X10X_VECTOR_VECTOR_H_NODEPS
#ifndef X10X_VECTOR_VECTOR_H_GENERICS
#define X10X_VECTOR_VECTOR_H_GENERICS
#endif // X10X_VECTOR_VECTOR_H_GENERICS
#endif // __X10X_VECTOR_VECTOR_H_NODEPS
