#ifndef __AU_EDU_ANU_CHEM_POINTCHARGE_H
#define __AU_EDU_ANU_CHEM_POINTCHARGE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#include <x10x/vector/Point3d.h>
#undef X10X_VECTOR_POINT3D_H_NODEPS
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
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class PointCharge_Strings {
  public:
    static ::x10::lang::String sl__32561;
    static ::x10::lang::String sl__32562;
};

class PointCharge   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::chem::PointCharge* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::chem::PointCharge > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::chem::PointCharge _alloc(){::au::edu::anu::chem::PointCharge t; return t; }
    
    ::x10x::vector::Point3d FMGL(centre);
    
    x10_double FMGL(charge);
    
    void _constructor(::x10x::vector::Point3d centre, x10_double charge);
    
    static ::au::edu::anu::chem::PointCharge _make(::x10x::vector::Point3d centre,
                                                   x10_double charge);
    
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::chem::PointCharge other) {
        return ((::x10aux::struct_equals((*this)->FMGL(centre), other->FMGL(centre))) &&
        (::x10aux::struct_equals((*this)->FMGL(charge), other->FMGL(charge))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::chem::PointCharge other) {
        return ((::x10aux::struct_equals((*this)->FMGL(centre),
                                         other->FMGL(centre))) &&
        (::x10aux::struct_equals((*this)->FMGL(charge), other->FMGL(charge))));
        
    }
    ::au::edu::anu::chem::PointCharge au__edu__anu__chem__PointCharge____this__au__edu__anu__chem__PointCharge(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_chem_PointCharge(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::chem::PointCharge this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::chem::PointCharge _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::chem::PointCharge this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_CHEM_POINTCHARGE_H

namespace au { namespace edu { namespace anu { namespace chem { 
class PointCharge;
} } } } 

#ifndef AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
#define AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_POINTCHARGE_H_GENERICS
#define AU_EDU_ANU_CHEM_POINTCHARGE_H_GENERICS
#endif // AU_EDU_ANU_CHEM_POINTCHARGE_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_POINTCHARGE_H_NODEPS
