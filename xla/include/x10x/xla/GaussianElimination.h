#ifndef __X10X_XLA_GAUSSIANELIMINATION_H
#define __X10X_XLA_GAUSSIANELIMINATION_H

#include <x10rt.h>


#define X10X_XLA_LINEAREQUATIONSOLVER_H_NODEPS
#include <x10x/xla/LinearEquationSolver.h>
#undef X10X_XLA_LINEAREQUATIONSOLVER_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10x { namespace matrix { 
class Matrix;
} } 
namespace x10x { namespace vector { 
class Vector;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10x { namespace xla { 

class GaussianElimination_Strings {
  public:
    static ::x10::lang::String sl__14302;
    static ::x10::lang::String sl__14304;
    static ::x10::lang::String sl__14303;
};

class GaussianElimination : public ::x10x::xla::LinearEquationSolver   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_long >* FMGL(row);
    
    ::x10::array::Array_2<x10_double>* FMGL(a);
    
    ::x10::lang::Rail< x10_double >* FMGL(x);
    
    ::x10x::matrix::Matrix* FMGL(matrixA);
    
    x10_long FMGL(n);
    
    x10_long FMGL(n1);
    
    virtual ::x10x::vector::Vector* findSolution(::x10x::matrix::Matrix* matA,
                                                 ::x10x::vector::Vector* vectorB);
    void upperTriangularize(x10_boolean doOneScale);
    virtual void simplePivot(x10_long p);
    void oneScale(x10_long p, x10_boolean scale);
    virtual ::x10x::xla::GaussianElimination* x10x__xla__GaussianElimination____this__x10x__xla__GaussianElimination(
      );
    void _constructor();
    
    static ::x10x::xla::GaussianElimination* _make();
    
    virtual void __fieldInitializers_x10x_xla_GaussianElimination(
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
#endif // X10X_XLA_GAUSSIANELIMINATION_H

namespace x10x { namespace xla { 
class GaussianElimination;
} } 

#ifndef X10X_XLA_GAUSSIANELIMINATION_H_NODEPS
#define X10X_XLA_GAUSSIANELIMINATION_H_NODEPS
#ifndef X10X_XLA_GAUSSIANELIMINATION_H_GENERICS
#define X10X_XLA_GAUSSIANELIMINATION_H_GENERICS
#endif // X10X_XLA_GAUSSIANELIMINATION_H_GENERICS
#endif // __X10X_XLA_GAUSSIANELIMINATION_H_NODEPS
