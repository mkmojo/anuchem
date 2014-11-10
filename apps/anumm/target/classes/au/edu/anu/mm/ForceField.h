#ifndef __AU_EDU_ANU_MM_FORCEFIELD_H
#define __AU_EDU_ANU_MM_FORCEFIELD_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 

namespace au { namespace edu { namespace anu { namespace mm { 

class ForceField   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_double (Iface::*getAtomMass) (x10_int), x10_double (Iface::*getPotentialAndForces) (::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*), x10_int (Iface::*hashCode) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), getAtomMass(getAtomMass), getPotentialAndForces(getPotentialAndForces), hashCode(hashCode), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_double (Iface::*getAtomMass) (x10_int);
        x10_double (Iface::*getPotentialAndForces) (::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*);
        x10_int (Iface::*hashCode) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::au::edu::anu::mm::ForceField>(_refRecv->_getITables())->equals))(arg0);
    }
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0) {
        return _recv->equals(arg0);
    }
    template <class R> static x10_double getAtomMass(R* _recv, x10_int arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::au::edu::anu::mm::ForceField>(_refRecv->_getITables())->getAtomMass))(arg0);
    }
    template <class R> static x10_double getAtomMass(R _recv, x10_int arg0) {
        return _recv->getAtomMass(arg0);
    }
    template <class R> static x10_double getPotentialAndForces(R* _recv, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::au::edu::anu::mm::ForceField>(_refRecv->_getITables())->getPotentialAndForces))(arg0);
    }
    template <class R> static x10_double getPotentialAndForces(R _recv, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* arg0) {
        return _recv->getPotentialAndForces(arg0);
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::au::edu::anu::mm::ForceField>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::au::edu::anu::mm::ForceField>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::au::edu::anu::mm::ForceField>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } } } 
#endif // AU_EDU_ANU_MM_FORCEFIELD_H

namespace au { namespace edu { namespace anu { namespace mm { 
class ForceField;
} } } } 

#ifndef AU_EDU_ANU_MM_FORCEFIELD_H_NODEPS
#define AU_EDU_ANU_MM_FORCEFIELD_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#ifndef AU_EDU_ANU_MM_FORCEFIELD_H_GENERICS
#define AU_EDU_ANU_MM_FORCEFIELD_H_GENERICS
#endif // AU_EDU_ANU_MM_FORCEFIELD_H_GENERICS
#endif // __AU_EDU_ANU_MM_FORCEFIELD_H_NODEPS
