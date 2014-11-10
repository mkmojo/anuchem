#ifndef __AU_EDU_ANU_MM_ANUMM_H
#define __AU_EDU_ANU_MM_ANUMM_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
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
class ForceField;
} } } } 
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
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
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
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UniversalForceField;
} } } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class SpeciesSpec;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class XYZStructureFileReader;
} } } } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class MOLStructureFileReader;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class Anumm_Strings {
  public:
    static ::x10::lang::String sl__20041;
    static ::x10::lang::String sl__20039;
    static ::x10::lang::String sl__20036;
    static ::x10::lang::String sl__20045;
    static ::x10::lang::String sl__20042;
    static ::x10::lang::String sl__20040;
    static ::x10::lang::String sl__20035;
    static ::x10::lang::String sl__20034;
    static ::x10::lang::String sl__20032;
    static ::x10::lang::String sl__20044;
    static ::x10::lang::String sl__20043;
    static ::x10::lang::String sl__20038;
    static ::x10::lang::String sl__20033;
    static ::x10::lang::String sl__20037;
    static ::x10::lang::String sl__20046;
};

class Anumm : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      FMGL(atoms);
    
    ::au::edu::anu::mm::ForceField* FMGL(forceField);
    
    x10_boolean FMGL(verbose);
    
    void _constructor(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                      ::au::edu::anu::mm::ForceField* forceField,
                      x10_boolean verbose);
    
    static ::au::edu::anu::mm::Anumm* _make(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                                            ::au::edu::anu::mm::ForceField* forceField,
                                            x10_boolean verbose);
    
    virtual ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      getAtoms();
    virtual void mdRun(x10_double timestep, x10_long numSteps);
    virtual void mdStep(x10_double timestep);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    static ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      assignAtoms(::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule);
    static x10_int getPlaceId(x10_double x, x10_double y,
                              x10_double z, x10_double size);
    virtual ::au::edu::anu::mm::Anumm* au__edu__anu__mm__Anumm____this__au__edu__anu__mm__Anumm(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_Anumm(
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
#endif // AU_EDU_ANU_MM_ANUMM_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Anumm;
} } } } 

#ifndef AU_EDU_ANU_MM_ANUMM_H_NODEPS
#define AU_EDU_ANU_MM_ANUMM_H_NODEPS
#ifndef AU_EDU_ANU_MM_ANUMM_H_GENERICS
#define AU_EDU_ANU_MM_ANUMM_H_GENERICS
#endif // AU_EDU_ANU_MM_ANUMM_H_GENERICS
#endif // __AU_EDU_ANU_MM_ANUMM_H_NODEPS
