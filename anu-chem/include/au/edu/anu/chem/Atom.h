#ifndef __AU_EDU_ANU_CHEM_ATOM_H
#define __AU_EDU_ANU_CHEM_ATOM_H

#include <x10rt.h>


#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
#define AU_EDU_ANU_CHEM_BONDTYPE_H_NODEPS
#include <au/edu/anu/chem/BondType.h>
#undef AU_EDU_ANU_CHEM_BONDTYPE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class Atom_Strings {
  public:
    static ::x10::lang::String sl__32432;
};

class Atom : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10x::vector::Point3d FMGL(centre);
    
    ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*
      FMGL(bonds);
    
    x10_int FMGL(species);
    
    x10_long FMGL(index);
    
    virtual void setIndex(x10_long i);
    virtual x10_long getIndex();
    void _constructor(x10_int species, ::x10x::vector::Point3d centre);
    
    static ::au::edu::anu::chem::Atom* _make(x10_int species, ::x10x::vector::Point3d centre);
    
    void _constructor(::x10x::vector::Point3d centre);
    
    static ::au::edu::anu::chem::Atom* _make(::x10x::vector::Point3d centre);
    
    void _constructor(::au::edu::anu::chem::Atom* atom);
    
    static ::au::edu::anu::chem::Atom* _make(::au::edu::anu::chem::Atom* atom);
    
    virtual ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*
      getBonds();
    virtual void addBond(::au::edu::anu::chem::BondType bondType,
                         ::au::edu::anu::chem::Atom* atom);
    virtual void addBondInternal(::au::edu::anu::chem::BondType bondType,
                                 ::au::edu::anu::chem::Atom* atom);
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::chem::Atom* au__edu__anu__chem__Atom____this__au__edu__anu__chem__Atom(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_Atom(
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
#endif // AU_EDU_ANU_CHEM_ATOM_H

namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 

#ifndef AU_EDU_ANU_CHEM_ATOM_H_NODEPS
#define AU_EDU_ANU_CHEM_ATOM_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_ATOM_H_GENERICS
#define AU_EDU_ANU_CHEM_ATOM_H_GENERICS
#endif // AU_EDU_ANU_CHEM_ATOM_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_ATOM_H_NODEPS
