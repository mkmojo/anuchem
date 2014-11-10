/*************************************************/
/* START of PointCharge */
#include <au/edu/anu/chem/PointCharge.h>

#include <x10/lang/Any.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace chem { 
class PointCharge_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::chem::PointCharge> {
public:
    static ::x10::lang::Any::itable< PointCharge_ibox0 > itable;
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
::x10::lang::Any::itable< PointCharge_ibox0 >  PointCharge_ibox0::itable(&PointCharge_ibox0::equals, &PointCharge_ibox0::hashCode, &PointCharge_ibox0::toString, &PointCharge_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::chem::PointCharge >  au::edu::anu::chem::PointCharge::_itable_0(&au::edu::anu::chem::PointCharge::equals, &au::edu::anu::chem::PointCharge::hashCode, &au::edu::anu::chem::PointCharge::toString, &au::edu::anu::chem::PointCharge::typeName);
::x10aux::itable_entry au::edu::anu::chem::PointCharge::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::PointCharge::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::PointCharge")};
::x10aux::itable_entry au::edu::anu::chem::PointCharge::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::PointCharge_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::PointCharge")};

//#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
void au::edu::anu::chem::PointCharge::_constructor(::x10x::vector::Point3d centre,
                                                   x10_double charge) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
    ::au::edu::anu::chem::PointCharge this__15266 = (*this);
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
    (*this)->FMGL(centre) = centre;
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
    (*this)->FMGL(charge) = charge;
}
::au::edu::anu::chem::PointCharge au::edu::anu::chem::PointCharge::_make(
  ::x10x::vector::Point3d centre, x10_double charge) {
    ::au::edu::anu::chem::PointCharge this_; 
    this_->_constructor(centre, charge);
    return this_;
}



//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
::x10::lang::String* au::edu::anu::chem::PointCharge::toString() {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::chem::PointCharge_Strings::sl__32561), (*this)->FMGL(charge)), (&::au::edu::anu::chem::PointCharge_Strings::sl__32562)), (*this)->FMGL(centre));
    
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
::x10::lang::String* au::edu::anu::chem::PointCharge::typeName(){
    return ::x10aux::type_name((*this));
}
x10_int au::edu::anu::chem::PointCharge::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(centre)->x10x::vector::Point3d::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(charge))));
    return result;
    
}
x10_boolean au::edu::anu::chem::PointCharge::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::PointCharge>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::chem::PointCharge::equals(::x10aux::class_cast< ::au::edu::anu::chem::PointCharge>(other));
    
}
x10_boolean au::edu::anu::chem::PointCharge::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::PointCharge>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::chem::PointCharge::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::chem::PointCharge>(other));
    
}
void ::au::edu::anu::chem::PointCharge::_serialize(::au::edu::anu::chem::PointCharge this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(centre));
    buf.write(this_->FMGL(charge));
    
}

void ::au::edu::anu::chem::PointCharge::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(centre) = buf.read< ::x10x::vector::Point3d>();
    FMGL(charge) = buf.read<x10_double>();
}


::x10aux::RuntimeType au::edu::anu::chem::PointCharge::rtt;
void au::edu::anu::chem::PointCharge::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.chem.PointCharge",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::chem::PointCharge_Strings::sl__32561("Point charge ");
::x10::lang::String au::edu::anu::chem::PointCharge_Strings::sl__32562(" ");

/* END of PointCharge */
/*************************************************/
