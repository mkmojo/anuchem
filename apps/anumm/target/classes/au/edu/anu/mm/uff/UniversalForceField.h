#ifndef __AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H
#define __AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H

#include <x10rt.h>


#define AU_EDU_ANU_MM_FORCEFIELD_H_NODEPS
#include <au/edu/anu/mm/ForceField.h>
#undef AU_EDU_ANU_MM_FORCEFIELD_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
#include <au/edu/anu/mm/uff/UffParameters.h>
#undef AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
#define AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
#include <au/edu/anu/mm/uff/UffParameters.h>
#undef AU_EDU_ANU_MM_UFF_UFFPARAMETERS_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LennardJonesParameters;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class SpeciesSpec;
} } } } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UniversalForceField__SumReducer;
} } } } } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 

class UniversalForceField_Strings {
  public:
    static ::x10::lang::String sl__20089;
    static ::x10::lang::String sl__20082;
    static ::x10::lang::String sl__20083;
    static ::x10::lang::String sl__20086;
    static ::x10::lang::String sl__20085;
    static ::x10::lang::String sl__20087;
    static ::x10::lang::String sl__20084;
    static ::x10::lang::String sl__20081;
    static ::x10::lang::String sl__20088;
};

class UniversalForceField : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::au::edu::anu::mm::ForceField::itable< ::au::edu::anu::mm::uff::UniversalForceField > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::uff::UniversalForceField > _itable_1;
    
    /* Static field: FMGL(SPECIES_H) */
    static const x10_long FMGL(SPECIES_H) = 1;
    static x10_long FMGL(SPECIES_H__get)();
    
    /* Static field: FMGL(SPECIES_C) */
    static const x10_long FMGL(SPECIES_C) = 6;
    static x10_long FMGL(SPECIES_C__get)();
    
    /* Static field: FMGL(SPECIES_N) */
    static const x10_long FMGL(SPECIES_N) = 7;
    static x10_long FMGL(SPECIES_N__get)();
    
    /* Static field: FMGL(SPECIES_O) */
    static const x10_long FMGL(SPECIES_O) = 8;
    static x10_long FMGL(SPECIES_O__get)();
    
    x10_double FMGL(BOND_ORDER_PROPORTIONALITY_CONSTANT);
    
    ::au::edu::anu::mm::uff::UffParameters FMGL(defaultParams);
    
    ::x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >* FMGL(atomParameters);
    
    x10_double FMGL(energy);
    
    void _constructor();
    
    static ::au::edu::anu::mm::uff::UniversalForceField* _make();
    
    virtual ::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* getSpecies(
      );
    virtual x10_double getAtomMass(x10_int species);
    virtual x10_double getPotentialAndForces(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms);
    x10_double getBondStretchTerm(::au::edu::anu::chem::BondType bond, ::au::edu::anu::chem::mm::MMAtom* atomI,
                                  ::au::edu::anu::mm::uff::UffParameters paramsI,
                                  ::au::edu::anu::chem::mm::MMAtom* atomJ,
                                  ::au::edu::anu::mm::uff::UffParameters paramsJ);
    x10_double getNaturalBondRadius(::au::edu::anu::chem::BondType bond,
                                    ::au::edu::anu::chem::mm::MMAtom* atomI,
                                    ::au::edu::anu::mm::uff::UffParameters paramsI,
                                    ::au::edu::anu::chem::mm::MMAtom* atomJ,
                                    ::au::edu::anu::mm::uff::UffParameters paramsJ);
    virtual ::au::edu::anu::mm::uff::UniversalForceField*
      au__edu__anu__mm__uff__UniversalForceField____this__au__edu__anu__mm__uff__UniversalForceField(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_uff_UniversalForceField(
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


} } } } } 
#endif // AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H

namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UniversalForceField;
} } } } } 

#ifndef AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H_NODEPS
#define AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H_NODEPS
#ifndef AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H_GENERICS
#define AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H_GENERICS
inline x10_long au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_H__get)() {
    return au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_H);
}

inline x10_long au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_C__get)() {
    return au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_C);
}

inline x10_long au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_N__get)() {
    return au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_N);
}

inline x10_long au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_O__get)() {
    return au::edu::anu::mm::uff::UniversalForceField::FMGL(SPECIES_O);
}

#endif // AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H_GENERICS
#endif // __AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD_H_NODEPS
