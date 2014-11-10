#ifndef __AU_EDU_ANU_MM_LET_H
#define __AU_EDU_ANU_MM_LET_H

#include <x10rt.h>


#define X10_LANG_UINT_H_NODEPS
#include <x10/lang/UInt.h>
#undef X10_LANG_UINT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class MultipoleExpansion;
} } } } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class LET : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_uint >* FMGL(combinedUList);
    
    ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::MultipoleExpansion*>*
      FMGL(multipoleCopies);
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* FMGL(cachedAtoms);
    
    void _constructor(::x10::lang::Rail< x10_uint >* combinedUList);
    
    static ::au::edu::anu::mm::LET* _make(::x10::lang::Rail< x10_uint >* combinedUList);
    
    virtual ::au::edu::anu::mm::MultipoleExpansion* getMultipoleForOctant(
      x10_uint mortonId);
    virtual void setMultipoleForOctant(x10_uint mortonId, ::au::edu::anu::mm::MultipoleExpansion* multipoleExp);
    virtual ::x10::lang::Rail< x10_double >* getAtomDataForOctant(x10_uint mortonId);
    virtual void setAtomDataForOctant(x10_uint mortonId, ::x10::lang::Rail< x10_double >* atoms);
    virtual ::au::edu::anu::mm::LET* au__edu__anu__mm__LET____this__au__edu__anu__mm__LET(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_LET();
    
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
#endif // AU_EDU_ANU_MM_LET_H

namespace au { namespace edu { namespace anu { namespace mm { 
class LET;
} } } } 

#ifndef AU_EDU_ANU_MM_LET_H_NODEPS
#define AU_EDU_ANU_MM_LET_H_NODEPS
#ifndef AU_EDU_ANU_MM_LET_H_GENERICS
#define AU_EDU_ANU_MM_LET_H_GENERICS
#endif // AU_EDU_ANU_MM_LET_H_GENERICS
#endif // __AU_EDU_ANU_MM_LET_H_NODEPS
