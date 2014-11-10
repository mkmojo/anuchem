#ifndef __X10X_VECTOR_POINT3D_H
#define __X10X_VECTOR_POINT3D_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10X_VECTOR_TUPLE3D_H_NODEPS
#include <x10x/vector/Tuple3d.h>
#undef X10X_VECTOR_TUPLE3D_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class Math;
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

namespace x10x { namespace vector { 

class Point3d_Strings {
  public:
    static ::x10::lang::String sl__14228;
    static ::x10::lang::String sl__14229;
    static ::x10::lang::String sl__14226;
    static ::x10::lang::String sl__14227;
};

class Point3d   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10x::vector::Point3d* operator->() { return this; }
    
    x10_double FMGL(i);
    
    x10_double FMGL(j);
    
    x10_double FMGL(k);
    
    static ::x10aux::itable_entry _itables[3];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10x::vector::Point3d > _itable_0;
    
    static ::x10x::vector::Tuple3d::itable< ::x10x::vector::Point3d > _itable_1;
    
    static ::x10aux::itable_entry _iboxitables[3];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10x::vector::Point3d _alloc(){::x10x::vector::Point3d t; return t; }
    
    void _constructor(x10_double i, x10_double j, x10_double k) {
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        FMGL(i) = i;
        FMGL(j) = j;
        FMGL(k) = k;
        
        //#line 9 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d this__12671 = (*this);
        
    }
    static ::x10x::vector::Point3d _make(x10_double i, x10_double j, x10_double k)
    {
        ::x10x::vector::Point3d this_; 
        this_->_constructor(i, j, k);
        return this_;
    }
    
    void _constructor(::x10x::vector::Tuple3d* t);
    
    static ::x10x::vector::Point3d _make(::x10x::vector::Tuple3d* t);
    
    x10_double i() {
        return (*this)->FMGL(i);
        
    }
    x10_double j() {
        return (*this)->FMGL(j);
        
    }
    x10_double k() {
        return (*this)->FMGL(k);
        
    }
    ::x10::lang::String* toString();
    ::x10x::vector::Point3d add(::x10x::vector::Vector3d b);
    ::x10x::vector::Point3d __plus(::x10x::vector::Vector3d that);
    ::x10x::vector::Point3d __times(x10_double that);
    ::x10x::vector::Point3d scale(x10_double c);
    ::x10x::vector::Point3d scale(::x10x::vector::Vector3d v);
    ::x10x::vector::Vector3d vector(::x10x::vector::Point3d b);
    ::x10x::vector::Vector3d __minus(::x10x::vector::Point3d that);
    x10_double distanceSquared(::x10x::vector::Point3d b);
    x10_double distance(::x10x::vector::Point3d b);
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10x::vector::Point3d other) {
        return (((::x10aux::struct_equals((*this)->FMGL(i), other->FMGL(i))) &&
        (::x10aux::struct_equals((*this)->FMGL(j), other->FMGL(j)))) &&
        (::x10aux::struct_equals((*this)->FMGL(k), other->FMGL(k))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10x::vector::Point3d other) {
        return (((::x10aux::struct_equals((*this)->FMGL(i), other->FMGL(i))) &&
        (::x10aux::struct_equals((*this)->FMGL(j), other->FMGL(j)))) &&
        (::x10aux::struct_equals((*this)->FMGL(k), other->FMGL(k))));
        
    }
    ::x10x::vector::Point3d x10x__vector__Point3d____this__x10x__vector__Point3d(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10x_vector_Point3d() {
     
    }
    
    static void _serialize(::x10x::vector::Point3d this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10x::vector::Point3d _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10x::vector::Point3d this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10X_VECTOR_POINT3D_H

namespace x10x { namespace vector { 
class Point3d;
} } 

#ifndef X10X_VECTOR_POINT3D_H_NODEPS
#define X10X_VECTOR_POINT3D_H_NODEPS
#ifndef X10X_VECTOR_POINT3D_H_GENERICS
#define X10X_VECTOR_POINT3D_H_GENERICS
#endif // X10X_VECTOR_POINT3D_H_GENERICS
#endif // __X10X_VECTOR_POINT3D_H_NODEPS
