/*************************************************/
/* START of LennardJonesParameters */
#include <au/edu/anu/mm/LennardJonesParameters.h>

#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
namespace au { namespace edu { namespace anu { namespace mm { 
class LennardJonesParameters_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::LennardJonesParameters> {
public:
    static ::x10::lang::Any::itable< LennardJonesParameters_ibox0 > itable;
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
::x10::lang::Any::itable< LennardJonesParameters_ibox0 >  LennardJonesParameters_ibox0::itable(&LennardJonesParameters_ibox0::equals, &LennardJonesParameters_ibox0::hashCode, &LennardJonesParameters_ibox0::toString, &LennardJonesParameters_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::LennardJonesParameters >  au::edu::anu::mm::LennardJonesParameters::_itable_0(&au::edu::anu::mm::LennardJonesParameters::equals, &au::edu::anu::mm::LennardJonesParameters::hashCode, &au::edu::anu::mm::LennardJonesParameters::toString, &au::edu::anu::mm::LennardJonesParameters::typeName);
::x10aux::itable_entry au::edu::anu::mm::LennardJonesParameters::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::LennardJonesParameters::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::LennardJonesParameters")};
::x10aux::itable_entry au::edu::anu::mm::LennardJonesParameters::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::LennardJonesParameters_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::LennardJonesParameters")};

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
void au::edu::anu::mm::LennardJonesParameters::_constructor(::x10::lang::String* description,
                                                            x10_double scale,
                                                            x10_double bondRadius,
                                                            x10_double wellDepth) {
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
    FMGL(description) = description;
    FMGL(scale) = scale;
    FMGL(equlibrium) = bondRadius;
    FMGL(wellDepth) = wellDepth;
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
    ::au::edu::anu::mm::LennardJonesParameters this__19791 =
      (*this);
    
}
::au::edu::anu::mm::LennardJonesParameters au::edu::anu::mm::LennardJonesParameters::_make(
  ::x10::lang::String* description, x10_double scale, x10_double bondRadius,
  x10_double wellDepth) {
    ::au::edu::anu::mm::LennardJonesParameters this_; 
    this_->_constructor(description, scale, bondRadius, wellDepth);
    return this_;
}



//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
::x10::lang::String* au::edu::anu::mm::LennardJonesParameters::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::mm::LennardJonesParameters::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::LennardJonesParameters_Strings::sl__20180), (&::au::edu::anu::mm::LennardJonesParameters_Strings::sl__20181)), (*this)->FMGL(description)), (&::au::edu::anu::mm::LennardJonesParameters_Strings::sl__20182)), (*this)->FMGL(scale)), (&::au::edu::anu::mm::LennardJonesParameters_Strings::sl__20183)), (*this)->FMGL(equlibrium)), (&::au::edu::anu::mm::LennardJonesParameters_Strings::sl__20184)), (*this)->FMGL(wellDepth));
    
}
x10_int au::edu::anu::mm::LennardJonesParameters::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(description))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(scale))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(equlibrium))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(wellDepth))));
    return result;
    
}
x10_boolean au::edu::anu::mm::LennardJonesParameters::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::LennardJonesParameters>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::mm::LennardJonesParameters::equals(
             ::x10aux::class_cast< ::au::edu::anu::mm::LennardJonesParameters>(other));
    
}
x10_boolean au::edu::anu::mm::LennardJonesParameters::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::LennardJonesParameters>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::mm::LennardJonesParameters::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::mm::LennardJonesParameters>(other));
    
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
void ::au::edu::anu::mm::LennardJonesParameters::_serialize(::au::edu::anu::mm::LennardJonesParameters this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(description));
    buf.write(this_->FMGL(scale));
    buf.write(this_->FMGL(equlibrium));
    buf.write(this_->FMGL(wellDepth));
    
}

void ::au::edu::anu::mm::LennardJonesParameters::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(description) = buf.read< ::x10::lang::String*>();
    FMGL(scale) = buf.read<x10_double>();
    FMGL(equlibrium) = buf.read<x10_double>();
    FMGL(wellDepth) = buf.read<x10_double>();
}


::x10aux::RuntimeType au::edu::anu::mm::LennardJonesParameters::rtt;
void au::edu::anu::mm::LennardJonesParameters::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.mm.LennardJonesParameters",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::LennardJonesParameters_Strings::sl__20180("struct au.edu.anu.mm.LennardJonesParameters:");
::x10::lang::String au::edu::anu::mm::LennardJonesParameters_Strings::sl__20184(" wellDepth=");
::x10::lang::String au::edu::anu::mm::LennardJonesParameters_Strings::sl__20183(" equlibrium=");
::x10::lang::String au::edu::anu::mm::LennardJonesParameters_Strings::sl__20182(" scale=");
::x10::lang::String au::edu::anu::mm::LennardJonesParameters_Strings::sl__20181(" description=");

/* END of LennardJonesParameters */
/*************************************************/
