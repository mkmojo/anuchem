#ifndef __X10X_XLA_DIAGONALIZER_H
#define __X10X_XLA_DIAGONALIZER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10x { namespace matrix { 
class Matrix;
} } 
namespace x10x { namespace vector { 
class Vector;
} } 

namespace x10x { namespace xla { 

class Diagonalizer   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*diagonalize) (::x10x::matrix::Matrix*), x10_boolean (Iface::*equals) (::x10::lang::Any*), ::x10x::vector::Vector* (Iface::*getEigenValues) (), ::x10x::matrix::Matrix* (Iface::*getEigenVectors) (), x10_int (Iface::*hashCode) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : diagonalize(diagonalize), equals(equals), getEigenValues(getEigenValues), getEigenVectors(getEigenVectors), hashCode(hashCode), toString(toString), typeName(typeName) {}
        void (Iface::*diagonalize) (::x10x::matrix::Matrix*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        ::x10x::vector::Vector* (Iface::*getEigenValues) ();
        ::x10x::matrix::Matrix* (Iface::*getEigenVectors) ();
        x10_int (Iface::*hashCode) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static void diagonalize(R* _recv, ::x10x::matrix::Matrix* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->diagonalize))(arg0);
    }
    template <class R> static void diagonalize(R _recv, ::x10x::matrix::Matrix* arg0) {
        _recv->diagonalize(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->equals))(arg0);
    }
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0) {
        return _recv->equals(arg0);
    }
    template <class R> static ::x10x::vector::Vector* getEigenValues(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->getEigenValues))();
    }
    template <class R> static ::x10x::vector::Vector* getEigenValues(R _recv) {
        return _recv->getEigenValues();
    }
    template <class R> static ::x10x::matrix::Matrix* getEigenVectors(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->getEigenVectors))();
    }
    template <class R> static ::x10x::matrix::Matrix* getEigenVectors(R _recv) {
        return _recv->getEigenVectors();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10x::xla::Diagonalizer>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } 
#endif // X10X_XLA_DIAGONALIZER_H

namespace x10x { namespace xla { 
class Diagonalizer;
} } 

#ifndef X10X_XLA_DIAGONALIZER_H_NODEPS
#define X10X_XLA_DIAGONALIZER_H_NODEPS
#include <x10/lang/Any.h>
#include <x10x/matrix/Matrix.h>
#include <x10x/vector/Vector.h>
#ifndef X10X_XLA_DIAGONALIZER_H_GENERICS
#define X10X_XLA_DIAGONALIZER_H_GENERICS
#endif // X10X_XLA_DIAGONALIZER_H_GENERICS
#endif // __X10X_XLA_DIAGONALIZER_H_NODEPS
