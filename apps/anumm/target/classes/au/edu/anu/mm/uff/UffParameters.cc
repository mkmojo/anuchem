/*************************************************/
/* START of UffParameters */
#include <au/edu/anu/mm/uff/UffParameters.h>

#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/mm/LennardJonesParameters.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UffParameters_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::uff::UffParameters> {
public:
    static ::x10::lang::Any::itable< UffParameters_ibox0 > itable;
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
::x10::lang::Any::itable< UffParameters_ibox0 >  UffParameters_ibox0::itable(&UffParameters_ibox0::equals, &UffParameters_ibox0::hashCode, &UffParameters_ibox0::toString, &UffParameters_ibox0::typeName);
} } } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::uff::UffParameters >  au::edu::anu::mm::uff::UffParameters::_itable_0(&au::edu::anu::mm::uff::UffParameters::equals, &au::edu::anu::mm::uff::UffParameters::hashCode, &au::edu::anu::mm::uff::UffParameters::toString, &au::edu::anu::mm::uff::UffParameters::typeName);
::x10aux::itable_entry au::edu::anu::mm::uff::UffParameters::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::uff::UffParameters::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::uff::UffParameters")};
::x10aux::itable_entry au::edu::anu::mm::uff::UffParameters::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::uff::UffParameters_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::uff::UffParameters")};

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
void au::edu::anu::mm::uff::UffParameters::_constructor(::x10::lang::String* description,
                                                        x10_double mass,
                                                        x10_double bondRadius,
                                                        x10_double bondAngle,
                                                        ::au::edu::anu::mm::LennardJonesParameters vdwParams,
                                                        x10_double effectiveCharge,
                                                        x10_double electronegativity) {
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
    FMGL(description) = description;
    FMGL(mass) = mass;
    FMGL(bondRadius) = bondRadius;
    FMGL(bondAngle) = bondAngle;
    FMGL(vdwParams) = vdwParams;
    FMGL(effectiveCharge) = effectiveCharge;
    FMGL(electronegativity) = electronegativity;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
    ::au::edu::anu::mm::uff::UffParameters this__19787 = (*this);
    
}
::au::edu::anu::mm::uff::UffParameters au::edu::anu::mm::uff::UffParameters::_make(
  ::x10::lang::String* description, x10_double mass, x10_double bondRadius,
  x10_double bondAngle, ::au::edu::anu::mm::LennardJonesParameters vdwParams,
  x10_double effectiveCharge, x10_double electronegativity)
{
    ::au::edu::anu::mm::uff::UffParameters this_; 
    this_->_constructor(description, mass, bondRadius, bondAngle,
    vdwParams, effectiveCharge, electronegativity);
    return this_;
}



//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
::x10::lang::String* au::edu::anu::mm::uff::UffParameters::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::mm::uff::UffParameters::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20159), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20160)), (*this)->FMGL(description)), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20161)), (*this)->FMGL(mass)), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20162)), (*this)->FMGL(bondRadius)), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20163)), (*this)->FMGL(bondAngle)), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20164)), (*this)->FMGL(vdwParams)), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20165)), (*this)->FMGL(effectiveCharge)), (&::au::edu::anu::mm::uff::UffParameters_Strings::sl__20166)), (*this)->FMGL(electronegativity));
    
}
x10_int au::edu::anu::mm::uff::UffParameters::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(description))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(mass))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(bondRadius))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(bondAngle))));
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(vdwParams)->au::edu::anu::mm::LennardJonesParameters::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(effectiveCharge))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(electronegativity))));
    return result;
    
}
x10_boolean au::edu::anu::mm::uff::UffParameters::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::uff::UffParameters>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::mm::uff::UffParameters::equals(
             ::x10aux::class_cast< ::au::edu::anu::mm::uff::UffParameters>(other));
    
}
x10_boolean au::edu::anu::mm::uff::UffParameters::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::uff::UffParameters>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::mm::uff::UffParameters::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::mm::uff::UffParameters>(other));
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
void ::au::edu::anu::mm::uff::UffParameters::_serialize(::au::edu::anu::mm::uff::UffParameters this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(description));
    buf.write(this_->FMGL(mass));
    buf.write(this_->FMGL(bondRadius));
    buf.write(this_->FMGL(bondAngle));
    buf.write(this_->FMGL(vdwParams));
    buf.write(this_->FMGL(effectiveCharge));
    buf.write(this_->FMGL(electronegativity));
    
}

void ::au::edu::anu::mm::uff::UffParameters::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(description) = buf.read< ::x10::lang::String*>();
    FMGL(mass) = buf.read<x10_double>();
    FMGL(bondRadius) = buf.read<x10_double>();
    FMGL(bondAngle) = buf.read<x10_double>();
    FMGL(vdwParams) = buf.read< ::au::edu::anu::mm::LennardJonesParameters>();
    FMGL(effectiveCharge) = buf.read<x10_double>();
    FMGL(electronegativity) = buf.read<x10_double>();
}


::x10aux::RuntimeType au::edu::anu::mm::uff::UffParameters::rtt;
void au::edu::anu::mm::uff::UffParameters::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.mm.uff.UffParameters",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20164(" vdwParams=");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20165(" effectiveCharge=");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20159("struct au.edu.anu.mm.uff.UffParameters:");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20166(" electronegativity=");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20163(" bondAngle=");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20162(" bondRadius=");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20161(" mass=");
::x10::lang::String au::edu::anu::mm::uff::UffParameters_Strings::sl__20160(" description=");

/* END of UffParameters */
/*************************************************/
