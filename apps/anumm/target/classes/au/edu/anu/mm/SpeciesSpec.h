#ifndef __AU_EDU_ANU_MM_SPECIESSPEC_H
#define __AU_EDU_ANU_MM_SPECIESSPEC_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class SpeciesSpec : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(name);
    
    x10_double FMGL(mass);
    
    x10_double FMGL(charge);
    
    x10_int FMGL(number);
    
    void _constructor(::x10::lang::String* name, x10_double mass, x10_double charge,
                      x10_int number);
    
    static ::au::edu::anu::mm::SpeciesSpec* _make(::x10::lang::String* name,
                                                  x10_double mass,
                                                  x10_double charge,
                                                  x10_int number);
    
    virtual ::au::edu::anu::mm::SpeciesSpec* au__edu__anu__mm__SpeciesSpec____this__au__edu__anu__mm__SpeciesSpec(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_SpeciesSpec(
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
#endif // AU_EDU_ANU_MM_SPECIESSPEC_H

namespace au { namespace edu { namespace anu { namespace mm { 
class SpeciesSpec;
} } } } 

#ifndef AU_EDU_ANU_MM_SPECIESSPEC_H_NODEPS
#define AU_EDU_ANU_MM_SPECIESSPEC_H_NODEPS
#ifndef AU_EDU_ANU_MM_SPECIESSPEC_H_GENERICS
#define AU_EDU_ANU_MM_SPECIESSPEC_H_GENERICS
#endif // AU_EDU_ANU_MM_SPECIESSPEC_H_GENERICS
#endif // __AU_EDU_ANU_MM_SPECIESSPEC_H_NODEPS
