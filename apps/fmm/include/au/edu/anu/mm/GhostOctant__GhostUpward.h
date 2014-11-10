#ifndef __AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H
#define __AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H

#include <x10rt.h>


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
class MultipoleExpansion;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class GhostOctant__GhostUpward : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numAtoms);
    
    ::au::edu::anu::mm::MultipoleExpansion* FMGL(multipoleExp);
    
    ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > FMGL(target);
    
    void _constructor(x10_long numAtoms, ::au::edu::anu::mm::MultipoleExpansion* multipoleExp,
                      ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target);
    
    static ::au::edu::anu::mm::GhostOctant__GhostUpward* _make(x10_long numAtoms,
                                                               ::au::edu::anu::mm::MultipoleExpansion* multipoleExp,
                                                               ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target);
    
    virtual ::au::edu::anu::mm::GhostOctant__GhostUpward*
      au__edu__anu__mm__GhostOctant__GhostUpward____this__au__edu__anu__mm__GhostOctant__GhostUpward(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_GhostOctant_GhostUpward(
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
#endif // AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H

namespace au { namespace edu { namespace anu { namespace mm { 
class GhostOctant__GhostUpward;
} } } } 

#ifndef AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H_NODEPS
#define AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H_NODEPS
#ifndef AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H_GENERICS
#define AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H_GENERICS
#endif // AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H_GENERICS
#endif // __AU_EDU_ANU_MM_GHOSTOCTANT__GHOSTUPWARD_H_NODEPS
