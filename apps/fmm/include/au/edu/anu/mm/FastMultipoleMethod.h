#ifndef __AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H
#define __AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmLocalData;
} } } } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod__SumReducer;
} } } } 
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
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
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
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class AssociatedLegendrePolynomial;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmScratch;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LocalExpansion;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod__IntSumReducer;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
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
namespace au { namespace edu { namespace anu { namespace mm { 
class ParentOctant;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class GhostOctant;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LET;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class FastMultipoleMethod_Strings {
  public:
    static ::x10::lang::String sl__68115;
    static ::x10::lang::String sl__68111;
    static ::x10::lang::String sl__68114;
    static ::x10::lang::String sl__68112;
    static ::x10::lang::String sl__68109;
    static ::x10::lang::String sl__68113;
    static ::x10::lang::String sl__68110;
};

class FastMultipoleMethod : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(density);
    
    x10_ubyte FMGL(dMax);
    
    x10_int FMGL(lowestLevelDim);
    
    x10_double FMGL(size);
    
    x10_int FMGL(numTerms);
    
    x10_int FMGL(ws);
    
    x10_boolean FMGL(verbose);
    
    /* Static field: FMGL(localData) */
    static ::au::edu::anu::mm::FmmLocalData* FMGL(localData);
    static void FMGL(localData__do_init)();
    static void FMGL(localData__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(localData__status);
    static ::x10::lang::CheckedThrowable* FMGL(localData__exception);
    static ::au::edu::anu::mm::FmmLocalData* FMGL(localData__get)();
    
    void _constructor(x10_double density, x10_int dMax, x10_int numTerms,
                      x10_int ws, x10_double size);
    
    static ::au::edu::anu::mm::FastMultipoleMethod* _make(x10_double density,
                                                          x10_int dMax, x10_int numTerms,
                                                          x10_int ws,
                                                          x10_double size);
    
    void _constructor(x10_double density, x10_int dMax, x10_int numTerms,
                      x10_int ws, x10_double size, x10_boolean verbose);
    
    static ::au::edu::anu::mm::FastMultipoleMethod* _make(x10_double density,
                                                          x10_int dMax,
                                                          x10_int numTerms,
                                                          x10_int ws,
                                                          x10_double size,
                                                          x10_boolean verbose);
    
    virtual x10_double calculateEnergy();
    virtual x10_double calculateEnergyLocal();
    virtual void reduceMaxTimes();
    virtual void printRMSErrors();
    virtual void upwardPass();
    virtual void multipolesToLocal();
    virtual x10_double downwardPass();
    virtual void initialAssignment(x10_int numAtoms, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms);
    void estimateCostLocal(x10_int numAtoms);
    virtual void countOctants();
    virtual void reassignAtoms(x10_long step);
    void assignAtomsToOctantsLocal(::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* localAtoms);
    ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >*
      sortAtoms(::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* localAtoms);
    void determineLoadBalanceLocal(::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantAtoms);
    void redistributeOctantsLocal(::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantAtoms);
    void addAtomsToLocalOctants(::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* receivedAtoms);
    void createGhostChildren(::au::edu::anu::mm::ParentOctant* parentOctant);
    void createParentOctantsLocal();
    void createLET();
    virtual void prefetchRemoteAtoms();
    static ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*
      getAtomsForOctantList(::x10::lang::Rail< x10_uint >* octantList);
    virtual ::au::edu::anu::mm::FastMultipoleMethod* au__edu__anu__mm__FastMultipoleMethod____this__au__edu__anu__mm__FastMultipoleMethod(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_FastMultipoleMethod(
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
#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H

namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod;
} } } } 

#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H_NODEPS
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/UByte.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/mm/FmmLocalData.h>
#include <x10/lang/Long.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Reducible.h>
#include <au/edu/anu/mm/FastMultipoleMethod__SumReducer.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Team.h>
#include <x10/lang/Rail.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/mm/LeafOctant.h>
#include <au/edu/anu/mm/AssociatedLegendrePolynomial.h>
#include <au/edu/anu/mm/FmmScratch.h>
#include <x10/util/ListIterator.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10x/vector/Vector3d.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/mm/Octant.h>
#include <au/edu/anu/chem/Atom.h>
#include <au/edu/anu/mm/LocalExpansion.h>
#include <x10/lang/Math.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/UInt.h>
#include <x10/lang/String.h>
#include <au/edu/anu/mm/FastMultipoleMethod__IntSumReducer.h>
#include <x10/util/HashMap.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <au/edu/anu/mm/ParentOctant.h>
#include <au/edu/anu/mm/GhostOctant.h>
#include <x10/util/Map__Entry.h>
#include <x10/util/Map.h>
#include <x10/util/Set.h>
#include <au/edu/anu/mm/LET.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H_GENERICS
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H_GENERICS
inline ::au::edu::anu::mm::FmmLocalData* au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)() {
    if (FMGL(localData__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(localData__init)();
    }
    return au::edu::anu::mm::FastMultipoleMethod::FMGL(localData);
}

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD_H_NODEPS
