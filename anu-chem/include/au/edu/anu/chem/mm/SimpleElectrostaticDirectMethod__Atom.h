#ifndef __AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H
#define __AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class SimpleElectrostaticDirectMethod__Atom : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_double FMGL(x);
    
    x10_double FMGL(y);
    
    x10_double FMGL(z);
    
    x10_double FMGL(charge);
    
    x10_double FMGL(fx);
    
    x10_double FMGL(fy);
    
    x10_double FMGL(fz);
    
    virtual ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*
      au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod__Atom____this__au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod__Atom(
      );
    void _constructor();
    
    static ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* _make(
             );
    
    virtual void __fieldInitializers_au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod_Atom(
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
#endif // AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class SimpleElectrostaticDirectMethod__Atom;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H_GENERICS
#endif // AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__ATOM_H_NODEPS
