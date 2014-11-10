#ifndef __AU_EDU_ANU_MM_OCTANT_H
#define __AU_EDU_ANU_MM_OCTANT_H

#include <x10rt.h>


#define X10_LANG_COMPARABLE_H_NODEPS
#include <x10/lang/Comparable.h>
#undef X10_LANG_COMPARABLE_H_NODEPS
#define AU_EDU_ANU_MM_OCTANTID_H_NODEPS
#include <au/edu/anu/mm/OctantId.h>
#undef AU_EDU_ANU_MM_OCTANTID_H_NODEPS
#define AU_EDU_ANU_MM_OCTANTID_H_NODEPS
#include <au/edu/anu/mm/OctantId.h>
#undef AU_EDU_ANU_MM_OCTANTID_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LocalExpansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__VList;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmLocalData;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod;
} } } } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmOperators;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LET;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Expansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmScratch;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__VList__VListIterator;
} } } } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Runtime;
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
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class Octant_Strings {
  public:
    static ::x10::lang::String sl__48442;
};

class Octant : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::mm::OctantId FMGL(id);
    
    ::au::edu::anu::mm::Octant* FMGL(parent);
    
    ::au::edu::anu::mm::MultipoleExpansion* FMGL(multipoleExp);
    
    ::au::edu::anu::mm::LocalExpansion* FMGL(localExp);
    
    ::au::edu::anu::mm::Octant__VList* FMGL(vList);
    
    x10_boolean FMGL(multipoleReady);
    
    void _constructor(::au::edu::anu::mm::OctantId id, x10_int numTerms, x10_int ws,
                      x10_ubyte dMax);
    
    void _constructor(::au::edu::anu::mm::OctantId id);
    
    virtual x10_int compareTo(::au::edu::anu::mm::Octant* b);
    virtual x10_long numAtoms() = 0;
    virtual ::x10x::vector::Point3d getCentre(x10_double size);
    virtual x10_int countOctants() = 0;
    virtual x10_int ghostOctants() = 0;
    virtual x10_double downward(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion) = 0;
    virtual ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>
      upward() = 0;
    virtual void multipolesToLocal();
    virtual void addParentExpansion(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion);
    virtual void sendMultipole();
    static x10_int estimateVListSize(x10_uint mortonId);
    static x10_int estimateVListSize(::au::edu::anu::mm::OctantId id,
                                     x10_int ws);
    virtual void createVList(x10_int ws, x10_ubyte dMax);
    static x10_long estimateVListCost(x10_int numTerms);
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::mm::Octant* au__edu__anu__mm__Octant____this__au__edu__anu__mm__Octant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_Octant(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_MM_OCTANT_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 

#ifndef AU_EDU_ANU_MM_OCTANT_H_NODEPS
#define AU_EDU_ANU_MM_OCTANT_H_NODEPS
#ifndef AU_EDU_ANU_MM_OCTANT_H_GENERICS
#define AU_EDU_ANU_MM_OCTANT_H_GENERICS
#endif // AU_EDU_ANU_MM_OCTANT_H_GENERICS
#endif // __AU_EDU_ANU_MM_OCTANT_H_NODEPS
