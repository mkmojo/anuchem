#ifndef __AU_EDU_ANU_MM_GHOSTOCTANT_H
#define __AU_EDU_ANU_MM_GHOSTOCTANT_H

#include <x10rt.h>


#define AU_EDU_ANU_MM_OCTANT_H_NODEPS
#include <au/edu/anu/mm/Octant.h>
#undef AU_EDU_ANU_MM_OCTANT_H_NODEPS
#define X10_LANG_COMPARABLE_H_NODEPS
#include <x10/lang/Comparable.h>
#undef X10_LANG_COMPARABLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class GhostOctant__GhostUpward;
} } } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmLocalData;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod;
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
namespace au { namespace edu { namespace anu { namespace mm { 
class LocalExpansion;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class GhostOctant_Strings {
  public:
    static ::x10::lang::String sl__48588;
};

class GhostOctant : public ::au::edu::anu::mm::Octant   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* >::itable< ::au::edu::anu::mm::GhostOctant > _itable_0;
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::GhostOctant > _itable_1;
    
    x10_long FMGL(placeId);
    
    ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > FMGL(target);
    
    x10_long FMGL(numAtoms);
    
    void _constructor(::au::edu::anu::mm::OctantId id, x10_long placeId);
    
    static ::au::edu::anu::mm::GhostOctant* _make(::au::edu::anu::mm::OctantId id,
                                                  x10_long placeId);
    
    virtual x10_int compareTo(::au::edu::anu::mm::Octant* b);
    virtual x10_int countOctants();
    virtual x10_int ghostOctants();
    virtual x10_long numAtoms();
    virtual ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>
      upward();
    static ::au::edu::anu::mm::GhostOctant__GhostUpward* upwardRemote(
      x10_uint mortonId);
    virtual x10_double downward(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion);
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::mm::GhostOctant* au__edu__anu__mm__GhostOctant____this__au__edu__anu__mm__GhostOctant(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_GhostOctant(
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
#endif // AU_EDU_ANU_MM_GHOSTOCTANT_H

namespace au { namespace edu { namespace anu { namespace mm { 
class GhostOctant;
} } } } 

#ifndef AU_EDU_ANU_MM_GHOSTOCTANT_H_NODEPS
#define AU_EDU_ANU_MM_GHOSTOCTANT_H_NODEPS
#ifndef AU_EDU_ANU_MM_GHOSTOCTANT_H_GENERICS
#define AU_EDU_ANU_MM_GHOSTOCTANT_H_GENERICS
#endif // AU_EDU_ANU_MM_GHOSTOCTANT_H_GENERICS
#endif // __AU_EDU_ANU_MM_GHOSTOCTANT_H_NODEPS
