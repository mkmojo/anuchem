#ifndef __X10X_POLAR_POLAR3D_H
#define __X10X_POLAR_POLAR3D_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
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

namespace x10x { namespace polar { 

class Polar3d_Strings {
  public:
    static ::x10::lang::String sl__48735;
    static ::x10::lang::String sl__48736;
    static ::x10::lang::String sl__48738;
    static ::x10::lang::String sl__48737;
};

class Polar3d   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10x::polar::Polar3d* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10x::polar::Polar3d > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10x::polar::Polar3d _alloc(){::x10x::polar::Polar3d t; return t; }
    
    x10_double FMGL(r);
    
    x10_double FMGL(theta);
    
    x10_double FMGL(phi);
    
    void _constructor(x10_double r, x10_double theta, x10_double phi) {
        
        //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        ::x10x::polar::Polar3d this__48072 = (*this);
        
        //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        (*this)->FMGL(r) = r;
        
        //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        (*this)->FMGL(theta) = theta;
        
        //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        (*this)->FMGL(phi) = phi;
    }
    static ::x10x::polar::Polar3d _make(x10_double r, x10_double theta, x10_double phi)
    {
        ::x10x::polar::Polar3d this_; 
        this_->_constructor(r, theta, phi);
        return this_;
    }
    
    ::x10x::vector::Point3d toPoint3d();
    ::x10x::vector::Vector3d getGradientVector(x10_double dr, x10_double dt,
                                               x10_double dp);
    static ::x10x::polar::Polar3d getPolar3d(::x10x::vector::Vector3d point);
    ::x10x::polar::Polar3d rotate(x10_double alpha, x10_double beta);
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10x::polar::Polar3d other) {
        return (((::x10aux::struct_equals((*this)->FMGL(r), other->FMGL(r))) &&
        (::x10aux::struct_equals((*this)->FMGL(theta), other->FMGL(theta)))) &&
        (::x10aux::struct_equals((*this)->FMGL(phi), other->FMGL(phi))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10x::polar::Polar3d other) {
        return (((::x10aux::struct_equals((*this)->FMGL(r), other->FMGL(r))) &&
        (::x10aux::struct_equals((*this)->FMGL(theta), other->FMGL(theta)))) &&
        (::x10aux::struct_equals((*this)->FMGL(phi), other->FMGL(phi))));
        
    }
    ::x10x::polar::Polar3d x10x__polar__Polar3d____this__x10x__polar__Polar3d(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10x_polar_Polar3d() {
     
    }
    
    static void _serialize(::x10x::polar::Polar3d this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10x::polar::Polar3d _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10x::polar::Polar3d this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10X_POLAR_POLAR3D_H

namespace x10x { namespace polar { 
class Polar3d;
} } 

#ifndef X10X_POLAR_POLAR3D_H_NODEPS
#define X10X_POLAR_POLAR3D_H_NODEPS
#ifndef X10X_POLAR_POLAR3D_H_GENERICS
#define X10X_POLAR_POLAR3D_H_GENERICS
#endif // X10X_POLAR_POLAR3D_H_GENERICS
#endif // __X10X_POLAR_POLAR3D_H_NODEPS
