#ifndef __AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H
#define __AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
#include <au/edu/anu/chem/PointCharge.h>
#undef AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class ElectrostaticDirectMethod__SumReducer;
} } } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
class Uncounted;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10x { namespace vector { 
class Vector3d;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class ElectrostaticDirectMethod_Strings {
  public:
    static ::x10::lang::String sl__32584;
    static ::x10::lang::String sl__32583;
};

class ElectrostaticDirectMethod : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(TIMER_INDEX_TOTAL) */
    static const x10_long FMGL(TIMER_INDEX_TOTAL) = 0;
    static x10_long FMGL(TIMER_INDEX_TOTAL__get)();
    
    ::au::edu::anu::util::Timer* FMGL(timer);
    
    x10_boolean FMGL(asyncComms);
    
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      FMGL(atoms);
    
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*
      FMGL(otherAtoms);
    
    void _constructor(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms);
    
    static ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* _make(
             ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms);
    
    virtual x10_double expectationValue(::x10::lang::Fun_0_2< ::au::edu::anu::chem::mm::MMAtom*, ::au::edu::anu::chem::mm::MMAtom*, x10_double>* twoParticleFunction);
    virtual x10_double getEnergy();
    virtual void printForces();
    virtual ::au::edu::anu::chem::mm::ElectrostaticDirectMethod*
      au__edu__anu__chem__mm__ElectrostaticDirectMethod____this__au__edu__anu__chem__mm__ElectrostaticDirectMethod(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_mm_ElectrostaticDirectMethod(
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
#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class ElectrostaticDirectMethod;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H_GENERICS
inline x10_long au::edu::anu::chem::mm::ElectrostaticDirectMethod::FMGL(TIMER_INDEX_TOTAL__get)() {
    return au::edu::anu::chem::mm::ElectrostaticDirectMethod::FMGL(TIMER_INDEX_TOTAL);
}

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD_H_NODEPS
