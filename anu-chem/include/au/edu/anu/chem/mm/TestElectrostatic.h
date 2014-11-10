#ifndef __AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H
#define __AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
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
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace lang { 
class Math;
} } 
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
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
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
namespace x10x { namespace vector { 
class Point3d;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class TestElectrostatic_Strings {
  public:
    static ::x10::lang::String sl__32677;
    static ::x10::lang::String sl__32678;
};

class TestElectrostatic : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(RANDOM_SEED) */
    static const x10_long FMGL(RANDOM_SEED) = 10101110;
    static x10_long FMGL(RANDOM_SEED__get)();
    
    /* Static field: FMGL(R) */
    static ::x10::util::Random* FMGL(R);
    static void FMGL(R__do_init)();
    static void FMGL(R__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(R__status);
    static ::x10::lang::CheckedThrowable* FMGL(R__exception);
    static ::x10::util::Random* FMGL(R__get)();
    
    /* Static field: FMGL(NOISE) */
    static x10_double FMGL(NOISE);
    static x10_double FMGL(NOISE__get)();
    
    x10_double FMGL(SIZE);
    
    virtual x10_double sizeOfCentralCluster();
    virtual x10_double boxSize();
    virtual void logTime(::x10::lang::String* desc, x10_long timerIndex, ::au::edu::anu::util::Timer* timer,
                         x10_boolean printNewline);
    virtual void logTime(::x10::lang::String* desc, x10_long timerIndex,
                         ::au::edu::anu::util::Timer* timer);
    virtual ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      generateAtoms(x10_long numAtoms);
    virtual ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      generateAtoms(x10_long numAtoms, x10_boolean perturb);
    virtual x10_long getPlaceId(x10_double x, x10_double y,
                                x10_double z);
    static x10_double randomNoise();
    virtual ::au::edu::anu::chem::mm::TestElectrostatic* au__edu__anu__chem__mm__TestElectrostatic____this__au__edu__anu__chem__mm__TestElectrostatic(
      );
    void _constructor();
    
    static ::au::edu::anu::chem::mm::TestElectrostatic* _make(
             );
    
    virtual void __fieldInitializers_au_edu_anu_chem_mm_TestElectrostatic(
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
#endif // AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class TestElectrostatic;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/util/Random.h>
#include <x10/lang/String.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/lang/Int.h>
#include <x10/lang/Math.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <x10x/vector/Point3d.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_GENERICS
inline x10_long au::edu::anu::chem::mm::TestElectrostatic::FMGL(RANDOM_SEED__get)() {
    return au::edu::anu::chem::mm::TestElectrostatic::FMGL(RANDOM_SEED);
}

inline ::x10::util::Random* au::edu::anu::chem::mm::TestElectrostatic::FMGL(R__get)() {
    if (FMGL(R__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(R__init)();
    }
    return au::edu::anu::chem::mm::TestElectrostatic::FMGL(R);
}

inline x10_double au::edu::anu::chem::mm::TestElectrostatic::FMGL(NOISE__get)() {
    return au::edu::anu::chem::mm::TestElectrostatic::FMGL(NOISE);
}

#endif // AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
