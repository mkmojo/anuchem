#ifndef __AU_EDU_ANU_MM_LEAFOCTANT_H
#define __AU_EDU_ANU_MM_LEAFOCTANT_H

#include <x10rt.h>

#include "bg_math.h"

#define AU_EDU_ANU_MM_OCTANT_H_NODEPS
#include <au/edu/anu/mm/Octant.h>
#undef AU_EDU_ANU_MM_OCTANT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Expansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LocalExpansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmLocalData;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class AssociatedLegendrePolynomial;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmScratch;
} } } } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime;
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
class LET;
} } } } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList__UListIterator;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class LeafOctant_Strings {
  public:
    static ::x10::lang::String sl__48386;
};

class LeafOctant : public ::au::edu::anu::mm::Octant   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* >::itable< ::au::edu::anu::mm::LeafOctant > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::LeafOctant > _itable_1;
    
    ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* FMGL(atoms);
    
    ::x10::lang::Rail< x10_double >* FMGL(sources);
    
    ::au::edu::anu::mm::LeafOctant__UList* FMGL(uList);
    
    void _constructor(::au::edu::anu::mm::OctantId id, x10_int numTerms, x10_int ws,
                      x10_ubyte dMax);
    
    static ::au::edu::anu::mm::LeafOctant* _make(::au::edu::anu::mm::OctantId id,
                                                 x10_int numTerms,
                                                 x10_int ws,
                                                 x10_ubyte dMax);
    
    virtual void makeSources();
    virtual x10_long numAtoms();
    virtual ::x10::lang::Rail< x10_double >* getSources();
    virtual x10_int countOctants();
    virtual x10_int ghostOctants();
    virtual ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>
      upward();
    virtual x10_double downward(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion);
    virtual x10_double farField(x10_double size);
    virtual x10_double nearField(x10_double size, ::au::edu::anu::mm::LET* myLET,
                                 x10_ubyte dMax);
    x10_double p2pKernel(::x10::lang::Rail< x10_double >* oct2Data);
    static ::x10x::vector::Vector3d getTranslation(x10_int lowestLevelDim,
                                                   x10_double size,
                                                   x10_int x,
                                                   x10_int y,
                                                   x10_int z);
    static x10_int estimateUListSize(x10_uint mortonId, x10_ubyte dMax);
    static x10_int estimateUListSize(::au::edu::anu::mm::OctantId id,
                                     x10_ubyte dMax);
    static x10_long estimateUListCost(x10_int q);
    virtual void createUList(x10_int ws);
    virtual ::au::edu::anu::mm::LeafOctant__UList* getUList(
      );
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::mm::LeafOctant* au__edu__anu__mm__LeafOctant____this__au__edu__anu__mm__LeafOctant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_LeafOctant(
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
#endif // AU_EDU_ANU_MM_LEAFOCTANT_H

namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant;
} } } } 

#ifndef AU_EDU_ANU_MM_LEAFOCTANT_H_NODEPS
#define AU_EDU_ANU_MM_LEAFOCTANT_H_NODEPS
#ifndef AU_EDU_ANU_MM_LEAFOCTANT_H_GENERICS
#define AU_EDU_ANU_MM_LEAFOCTANT_H_GENERICS
#endif // AU_EDU_ANU_MM_LEAFOCTANT_H_GENERICS
#endif // __AU_EDU_ANU_MM_LEAFOCTANT_H_NODEPS
