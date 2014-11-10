#ifndef __AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H
#define __AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
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
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class MMAtom__PackedRepresentation_Strings {
  public:
    static ::x10::lang::String sl__32651;
    static ::x10::lang::String sl__32652;
    static ::x10::lang::String sl__32654;
    static ::x10::lang::String sl__32653;
};

class MMAtom__PackedRepresentation   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation* operator->() { return this; }
    
    x10_int FMGL(species);
    
    x10_double FMGL(charge);
    
    ::x10x::vector::Point3d FMGL(centre);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation _alloc(){::au::edu::anu::chem::mm::MMAtom__PackedRepresentation t; return t; }
    
    void _constructor(x10_int species, x10_double charge, ::x10x::vector::Point3d centre);
    
    static ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation _make(x10_int species,
                                                                        x10_double charge,
                                                                        ::x10x::vector::Point3d centre);
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::chem::mm::MMAtom__PackedRepresentation other) {
        return (((::x10aux::struct_equals((*this)->FMGL(species),
                                          other->FMGL(species))) &&
        (::x10aux::struct_equals((*this)->FMGL(charge), other->FMGL(charge)))) &&
        (::x10aux::struct_equals((*this)->FMGL(centre), other->FMGL(centre))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::chem::mm::MMAtom__PackedRepresentation other) {
        return (((::x10aux::struct_equals((*this)->FMGL(species),
                                          other->FMGL(species))) &&
        (::x10aux::struct_equals((*this)->FMGL(charge), other->FMGL(charge)))) &&
        (::x10aux::struct_equals((*this)->FMGL(centre), other->FMGL(centre))));
        
    }
    ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation
      au__edu__anu__chem__mm__MMAtom__PackedRepresentation____this__au__edu__anu__chem__mm__MMAtom__PackedRepresentation(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_chem_mm_MMAtom_PackedRepresentation(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::chem::mm::MMAtom__PackedRepresentation this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } } 
#endif // AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom__PackedRepresentation;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H_GENERICS
#endif // AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_MMATOM__PACKEDREPRESENTATION_H_NODEPS
