#ifndef __AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H
#define __AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class AtomInfo__AtomProps : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(symbol);
    
    x10_int FMGL(atomicNumber);
    
    x10_double FMGL(covalentRadius);
    
    x10_double FMGL(vdWRadius);
    
    x10_double FMGL(atomicMass);
    
    void _constructor(::x10::lang::String* symbol, x10_int atomicNumber, x10_double covalentRadius,
                      x10_double vdWRadius, x10_double atomicMass);
    
    static ::au::edu::anu::chem::AtomInfo__AtomProps* _make(::x10::lang::String* symbol,
                                                            x10_int atomicNumber,
                                                            x10_double covalentRadius,
                                                            x10_double vdWRadius,
                                                            x10_double atomicMass);
    
    virtual ::au::edu::anu::chem::AtomInfo__AtomProps* au__edu__anu__chem__AtomInfo__AtomProps____this__au__edu__anu__chem__AtomInfo__AtomProps(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_AtomInfo_AtomProps(
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
#endif // AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H

namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo__AtomProps;
} } } } 

#ifndef AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H_NODEPS
#define AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H_GENERICS
#define AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H_GENERICS
#endif // AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_ATOMINFO__ATOMPROPS_H_NODEPS
