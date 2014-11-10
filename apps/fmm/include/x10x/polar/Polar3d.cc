/*************************************************/
/* START of Polar3d */
#include <x10x/polar/Polar3d.h>

#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Math.h>
#include <x10x/vector/Vector3d.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
namespace x10x { namespace polar { 
class Polar3d_ibox0 : public ::x10::lang::IBox< ::x10x::polar::Polar3d> {
public:
    static ::x10::lang::Any::itable< Polar3d_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< Polar3d_ibox0 >  Polar3d_ibox0::itable(&Polar3d_ibox0::equals, &Polar3d_ibox0::hashCode, &Polar3d_ibox0::toString, &Polar3d_ibox0::typeName);
} } 
::x10::lang::Any::itable< ::x10x::polar::Polar3d >  x10x::polar::Polar3d::_itable_0(&x10x::polar::Polar3d::equals, &x10x::polar::Polar3d::hashCode, &x10x::polar::Polar3d::toString, &x10x::polar::Polar3d::typeName);
::x10aux::itable_entry x10x::polar::Polar3d::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10x::polar::Polar3d::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::x10x::polar::Polar3d")};
::x10aux::itable_entry x10x::polar::Polar3d::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10x::polar::Polar3d_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::x10x::polar::Polar3d")};

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"


//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
::x10x::vector::Point3d x10x::polar::Polar3d::toPoint3d() {
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double sineTheta = ::x10::lang::MathNatives::sin((*this)->FMGL(theta));
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    ::x10x::vector::Point3d alloc__68042 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__68039 = (((((*this)->FMGL(r)) * (sineTheta))) * (::x10::lang::MathNatives::cos((*this)->FMGL(phi))));
    x10_double j__68040 = (((((*this)->FMGL(r)) * (sineTheta))) * (::x10::lang::MathNatives::sin((*this)->FMGL(phi))));
    x10_double k__68041 = (((*this)->FMGL(r)) * (::x10::lang::MathNatives::cos((*this)->FMGL(theta))));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    alloc__68042->FMGL(i) = i__68039;
    alloc__68042->FMGL(j) = j__68040;
    alloc__68042->FMGL(k) = k__68041;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    return alloc__68042;
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
::x10x::vector::Vector3d x10x::polar::Polar3d::getGradientVector(x10_double dr,
                                                                 x10_double dt,
                                                                 x10_double dp) {
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double cosTheta = ::x10::lang::MathNatives::cos((*this)->FMGL(theta));
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double sinTheta = ::x10::lang::MathNatives::sin((*this)->FMGL(theta));
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double cosPhi = ::x10::lang::MathNatives::cos((*this)->FMGL(phi));
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double sinPhi = ::x10::lang::MathNatives::sin((*this)->FMGL(phi));
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    ::x10x::vector::Vector3d alloc__68046 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    x10_double i__68043 = ((((((((dr) * (sinTheta))) * (cosPhi))) + (((((dt) * (cosTheta))) * (cosPhi))))) - (((dp) * (sinPhi))));
    x10_double j__68044 = ((((((((dr) * (sinTheta))) * (sinPhi))) + (((((dt) * (cosTheta))) * (sinPhi))))) + (((dp) * (cosPhi))));
    x10_double k__68045 = ((((dr) * (cosTheta))) - (((dt) * (sinTheta))));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    alloc__68046->FMGL(i) = i__68043;
    alloc__68046->FMGL(j) = j__68044;
    alloc__68046->FMGL(k) = k__68045;
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    return alloc__68046;
    
}

//#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
::x10x::polar::Polar3d x10x::polar::Polar3d::getPolar3d(::x10x::vector::Vector3d point) {
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double rxy2 = ((((point->FMGL(i)) * (point->FMGL(i)))) + (((point->FMGL(j)) * (point->FMGL(j)))));
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double r2 = ((rxy2) + (((point->FMGL(k)) * (point->FMGL(k)))));
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double r = ::x10::lang::MathNatives::sqrt(r2);
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double phi;
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double theta;
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    if ((::x10aux::struct_equals(rxy2, 0.0))) {
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        if (((point->FMGL(k)) >= (0.0))) {
            
            //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
            theta = 0.0;
            
            //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
            phi = 3.141592653589793;
        } else {
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
            theta = 3.141592653589793;
            
            //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
            phi = 0.0;
        }
        
    } else {
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        x10_double rxy = ::x10::lang::MathNatives::sqrt(rxy2);
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        theta = ::x10::lang::MathNatives::acos(((point->FMGL(k)) / (r)));
        
        //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        phi = ::x10::lang::MathNatives::acos(((point->FMGL(i)) / (rxy)));
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        if (((point->FMGL(j)) < (0.0))) {
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
            phi = ((6.283185307179586) - (phi));
        }
        
    }
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    ::x10x::polar::Polar3d alloc__68047 =  ::x10x::polar::Polar3d::_alloc();
    (alloc__68047)->::x10x::polar::Polar3d::_constructor(r, theta, phi);
    return alloc__68047;
    
}

//#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
::x10x::polar::Polar3d x10x::polar::Polar3d::rotate(x10_double alpha, x10_double beta) {
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double newPhi = (((*this)->FMGL(phi)) + (alpha));
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double tempTheta = (((((3.141592653589793) / (2.0))) < ((*this)->FMGL(phi))) &&
    (((*this)->FMGL(phi)) < (((9.42477796076938) / (2.0))))) ? ((*this)->FMGL(theta))
      : ((-((*this)->FMGL(theta))));
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    x10_double newTheta = ((tempTheta) + (beta));
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    if (((newTheta) > (6.283185307179586))) {
        
        //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        newTheta = ((newTheta) - (6.283185307179586));
    }
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    if (((newTheta) < (0.0))) {
        
        //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        newTheta = (-(newTheta));
    } else 
    //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    if (((newTheta) > (3.141592653589793))) {
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        newTheta = ((6.283185307179586) - (newTheta));
    }
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    if (((newPhi) >= (6.283185307179586))) {
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        newPhi = ((newPhi) - (6.283185307179586));
    } else 
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    if (((newPhi) < (0.0))) {
        
        //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
        newPhi = ((newPhi) + (6.283185307179586));
    }
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    ::x10x::polar::Polar3d alloc__68048 =  ::x10x::polar::Polar3d::_alloc();
    (alloc__68048)->::x10x::polar::Polar3d::_constructor(
      (*this)->FMGL(r), newTheta, newPhi);
    return alloc__68048;
    
}

//#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
::x10::lang::String* x10x::polar::Polar3d::toString() {
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10x::polar::Polar3d_Strings::sl__68622), (*this)->FMGL(r)), (&::x10x::polar::Polar3d_Strings::sl__68623)), (*this)->FMGL(theta)), (&::x10x::polar::Polar3d_Strings::sl__68624)), (*this)->FMGL(phi)), (&::x10x::polar::Polar3d_Strings::sl__68625));
    
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/x10x/polar/Polar3d.x10"
::x10::lang::String* x10x::polar::Polar3d::typeName(){
    return ::x10aux::type_name((*this));
}
x10_int x10x::polar::Polar3d::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(r))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(theta))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(phi))));
    return result;
    
}
x10_boolean x10x::polar::Polar3d::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10x::polar::Polar3d>(other)))
    {
        return false;
        
    }
    return (*this)->x10x::polar::Polar3d::equals(::x10aux::class_cast< ::x10x::polar::Polar3d>(other));
    
}
x10_boolean x10x::polar::Polar3d::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10x::polar::Polar3d>(other)))
    {
        return false;
        
    }
    return (*this)->x10x::polar::Polar3d::_struct_equals(
             ::x10aux::class_cast< ::x10x::polar::Polar3d>(other));
    
}
void ::x10x::polar::Polar3d::_serialize(::x10x::polar::Polar3d this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(r));
    buf.write(this_->FMGL(theta));
    buf.write(this_->FMGL(phi));
    
}

void ::x10x::polar::Polar3d::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(r) = buf.read<x10_double>();
    FMGL(theta) = buf.read<x10_double>();
    FMGL(phi) = buf.read<x10_double>();
}


::x10aux::RuntimeType x10x::polar::Polar3d::rtt;
void x10x::polar::Polar3d::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("x10x.polar.Polar3d",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String x10x::polar::Polar3d_Strings::sl__68622("(r:");
::x10::lang::String x10x::polar::Polar3d_Strings::sl__68623(",theta:");
::x10::lang::String x10x::polar::Polar3d_Strings::sl__68625(")");
::x10::lang::String x10x::polar::Polar3d_Strings::sl__68624(",phi:");

/* END of Polar3d */
/*************************************************/
