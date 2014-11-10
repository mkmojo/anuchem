#ifndef __AU_EDU_ANU_CHEM_MM_MMATOM_H
#define __AU_EDU_ANU_CHEM_MM_MMATOM_H

#include <x10rt.h>


#define AU_EDU_ANU_CHEM_ATOM_H_NODEPS
#include <au/edu/anu/chem/Atom.h>
#undef AU_EDU_ANU_CHEM_ATOM_H_NODEPS
#define X10X_VECTOR_VECTOR3D_H_NODEPS
#include <x10x/vector/Vector3d.h>
#undef X10X_VECTOR_VECTOR3D_H_NODEPS
#define X10X_VECTOR_VECTOR3D_H_NODEPS
#include <x10x/vector/Vector3d.h>
#undef X10X_VECTOR_VECTOR3D_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom__PackedRepresentation;
} } } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class MMAtom : public ::au::edu::anu::chem::Atom   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10x::vector::Vector3d FMGL(force);
    
    ::x10x::vector::Vector3d FMGL(velocity);
    
    x10_double FMGL(mass);
    
    x10_double FMGL(charge);
    
    void _constructor(x10_int species, ::x10x::vector::Point3d centre, x10_double mass,
                      x10_double charge);
    
    static ::au::edu::anu::chem::mm::MMAtom* _make(x10_int species,
                                                   ::x10x::vector::Point3d centre,
                                                   x10_double mass,
                                                   x10_double charge);
    
    void _constructor(::x10x::vector::Point3d centre, x10_double mass,
                      x10_double charge);
    
    static ::au::edu::anu::chem::mm::MMAtom* _make(::x10x::vector::Point3d centre,
                                                   x10_double mass,
                                                   x10_double charge);
    
    void _constructor(::au::edu::anu::chem::mm::MMAtom* atom);
    
    static ::au::edu::anu::chem::mm::MMAtom* _make(::au::edu::anu::chem::mm::MMAtom* atom);
    
    void _constructor(::x10x::vector::Point3d centre);
    
    static ::au::edu::anu::chem::mm::MMAtom* _make(::x10x::vector::Point3d centre);
    
    virtual x10_double pairEnergy(::au::edu::anu::chem::mm::MMAtom* atom2);
    virtual ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation
      getPackedRepresentation();
    virtual ::au::edu::anu::chem::mm::MMAtom* au__edu__anu__chem__mm__MMAtom____this__au__edu__anu__chem__mm__MMAtom(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_mm_MMAtom(
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
#endif // AU_EDU_ANU_CHEM_MM_MMATOM_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_MMATOM_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_MMATOM_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_MM_MMATOM_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_MMATOM_H_GENERICS
#endif // AU_EDU_ANU_CHEM_MM_MMATOM_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_MMATOM_H_NODEPS
