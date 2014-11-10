#ifndef __X10X_XLA_LINEAREQUATIONSOLVER_H
#define __X10X_XLA_LINEAREQUATIONSOLVER_H

#include <x10rt.h>


namespace x10x { namespace matrix { 
class Matrix;
} } 
namespace x10x { namespace vector { 
class Vector;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10x { namespace xla { 

class LinearEquationSolver : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::x10x::vector::Vector* findSolution(::x10x::matrix::Matrix* matrixA,
                                                 ::x10x::vector::Vector* vectorB) = 0;
    virtual ::x10x::xla::LinearEquationSolver* x10x__xla__LinearEquationSolver____this__x10x__xla__LinearEquationSolver(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10x_xla_LinearEquationSolver(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10X_XLA_LINEAREQUATIONSOLVER_H

namespace x10x { namespace xla { 
class LinearEquationSolver;
} } 

#ifndef X10X_XLA_LINEAREQUATIONSOLVER_H_NODEPS
#define X10X_XLA_LINEAREQUATIONSOLVER_H_NODEPS
#ifndef X10X_XLA_LINEAREQUATIONSOLVER_H_GENERICS
#define X10X_XLA_LINEAREQUATIONSOLVER_H_GENERICS
#endif // X10X_XLA_LINEAREQUATIONSOLVER_H_GENERICS
#endif // __X10X_XLA_LINEAREQUATIONSOLVER_H_NODEPS
