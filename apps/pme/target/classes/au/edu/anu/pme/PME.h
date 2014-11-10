#ifndef __AU_EDU_ANU_PME_PME_H
#define __AU_EDU_ANU_PME_PME_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10X_VECTOR_VECTOR3D_H_NODEPS
#include <x10x/vector/Vector3d.h>
#undef X10X_VECTOR_VECTOR3D_H_NODEPS
#define X10X_VECTOR_VECTOR3D_H_NODEPS
#include <x10x/vector/Vector3d.h>
#undef X10X_VECTOR_VECTOR3D_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_COMPLEX_H_NODEPS
#include <x10/lang/Complex.h>
#undef X10_LANG_COMPLEX_H_NODEPS
#define AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
#include <au/edu/anu/chem/PointCharge.h>
#undef AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Point;
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
namespace x10 { namespace regionarray { 
class PeriodicDist;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
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
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace au { namespace edu { namespace anu { namespace fft { 
class DistributedReal3dFft;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__SumReducer;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace pme { 

class PME_Strings {
  public:
    static ::x10::lang::String sl__66061;
    static ::x10::lang::String sl__66060;
};

class PME : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(TIMER_INDEX_TOTAL) */
    static const x10_int FMGL(TIMER_INDEX_TOTAL) = 0;
    static x10_int FMGL(TIMER_INDEX_TOTAL__get)();
    
    /* Static field: FMGL(TIMER_INDEX_GRIDCHARGES) */
    static const x10_int FMGL(TIMER_INDEX_GRIDCHARGES) = 1;
    static x10_int FMGL(TIMER_INDEX_GRIDCHARGES__get)();
    
    /* Static field: FMGL(TIMER_INDEX_INVFFT) */
    static const x10_int FMGL(TIMER_INDEX_INVFFT) = 2;
    static x10_int FMGL(TIMER_INDEX_INVFFT__get)();
    
    /* Static field: FMGL(TIMER_INDEX_THETARECCONVQ) */
    static const x10_int FMGL(TIMER_INDEX_THETARECCONVQ) = 3;
    static x10_int FMGL(TIMER_INDEX_THETARECCONVQ__get)();
    
    /* Static field: FMGL(TIMER_INDEX_RECIPROCAL) */
    static const x10_int FMGL(TIMER_INDEX_RECIPROCAL) = 4;
    static x10_int FMGL(TIMER_INDEX_RECIPROCAL__get)();
    
    /* Static field: FMGL(TIMER_INDEX_SELF) */
    static const x10_int FMGL(TIMER_INDEX_SELF) = 5;
    static x10_int FMGL(TIMER_INDEX_SELF__get)();
    
    /* Static field: FMGL(TIMER_INDEX_DIRECT) */
    static const x10_int FMGL(TIMER_INDEX_DIRECT) = 6;
    static x10_int FMGL(TIMER_INDEX_DIRECT__get)();
    
    /* Static field: FMGL(TIMER_INDEX_PREFETCH) */
    static const x10_int FMGL(TIMER_INDEX_PREFETCH) = 7;
    static x10_int FMGL(TIMER_INDEX_PREFETCH__get)();
    
    /* Static field: FMGL(TIMER_INDEX_SETUP) */
    static const x10_int FMGL(TIMER_INDEX_SETUP) = 8;
    static x10_int FMGL(TIMER_INDEX_SETUP__get)();
    
    ::au::edu::anu::util::Timer* FMGL(timer);
    
    ::x10::lang::Rail< x10_long >* FMGL(gridSize);
    
    x10_double FMGL(K1);
    
    x10_double FMGL(K2);
    
    x10_double FMGL(K3);
    
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* FMGL(edges);
    
    ::x10::lang::Rail< x10_double >* FMGL(edgeLengths);
    
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* FMGL(edgeReciprocals);
    
    ::x10x::vector::Vector3d FMGL(scalingVector);
    
    ::x10::regionarray::Dist* FMGL(gridDist);
    
    x10_int FMGL(splineOrder);
    
    x10_double FMGL(beta);
    
    x10_double FMGL(cutoff);
    
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>
      FMGL(imageTranslations);
    
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
      FMGL(atoms);
    
    ::x10::regionarray::DistArray<x10_double>* FMGL(B);
    
    ::x10::regionarray::DistArray<x10_double>* FMGL(C);
    
    ::x10::regionarray::DistArray<x10_double>* FMGL(BdotC);
    
    ::x10::regionarray::DistArray<x10_double>* FMGL(Q);
    
    ::x10::regionarray::DistArray<x10_complex>* FMGL(Qinv);
    
    ::x10::regionarray::DistArray<x10_complex>* FMGL(thetaRecConvQ);
    
    ::x10::regionarray::DistArray<x10_double>* FMGL(thetaRecConvQReal);
    
    ::x10::regionarray::DistArray<x10_complex>* FMGL(temp);
    
    ::x10::regionarray::DistArray<x10_double>* FMGL(temp2);
    
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*
      FMGL(subCells);
    
    x10_long FMGL(numSubCells);
    
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*
      FMGL(atomsCache);
    
    void _constructor(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges,
                      ::x10::lang::Rail< x10_long >* gridSize,
                      ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                      x10_int splineOrder, x10_double beta,
                      x10_double cutoff);
    
    static ::au::edu::anu::pme::PME* _make(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges,
                                           ::x10::lang::Rail< x10_long >* gridSize,
                                           ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                                           x10_int splineOrder,
                                           x10_double beta,
                                           x10_double cutoff);
    
    virtual void setup();
    virtual x10_double getEnergy();
    void divideAtomsIntoSubCells();
    void prefetchRemoteAtoms();
    static ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*
      getAtomsForSubcellList(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells,
                             ::x10::lang::Rail< ::x10::lang::Point* >* boxList);
    virtual x10_double getDirectEnergy();
    virtual x10_double getSelfEnergy();
    virtual void gridCharges();
    static ::x10::regionarray::Region* getSubcellHaloRegionForPlace(
      x10_long gridSize, x10_long numSubCells, x10_int splineOrder,
      ::x10::regionarray::Region* gridRegion, ::x10::regionarray::Region* subCellRegion);
    x10_double getReciprocalEnergy(::x10::regionarray::DistArray<x10_double>* thetaRecConvQ);
    static void fillSpline(x10_double offset, ::x10::lang::Rail< x10_double >* spline,
                           x10_int splineOrder);
    virtual void initBArray();
    virtual void initCArray();
    static x10_double bSpline(x10_int n, x10_double u);
    static x10_double bSpline4(x10_double u);
    static x10_double bSpline3(x10_double u);
    static x10_double bSpline2(x10_double u);
    x10_double getVolume();
    virtual ::au::edu::anu::pme::PME* au__edu__anu__pme__PME____this__au__edu__anu__pme__PME(
      );
    virtual void __fieldInitializers_au_edu_anu_pme_PME();
    
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
#endif // AU_EDU_ANU_PME_PME_H

namespace au { namespace edu { namespace anu { namespace pme { 
class PME;
} } } } 

#ifndef AU_EDU_ANU_PME_PME_H_NODEPS
#define AU_EDU_ANU_PME_PME_H_NODEPS
#ifndef AU_EDU_ANU_PME_PME_H_GENERICS
#define AU_EDU_ANU_PME_PME_H_GENERICS
inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_TOTAL__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_TOTAL);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_GRIDCHARGES__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_GRIDCHARGES);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_INVFFT__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_INVFFT);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_THETARECCONVQ__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_THETARECCONVQ);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_RECIPROCAL__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_RECIPROCAL);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_SELF__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_SELF);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_DIRECT__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_DIRECT);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_PREFETCH__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_PREFETCH);
}

inline x10_int au::edu::anu::pme::PME::FMGL(TIMER_INDEX_SETUP__get)() {
    return au::edu::anu::pme::PME::FMGL(TIMER_INDEX_SETUP);
}

#endif // AU_EDU_ANU_PME_PME_H_GENERICS
#endif // __AU_EDU_ANU_PME_PME_H_NODEPS
