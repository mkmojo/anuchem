/*************************************************/
/* START of SpeciesSpec */
#include <au/edu/anu/mm/SpeciesSpec.h>

#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 14 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"

//#line 15 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"

//#line 16 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"

//#line 17 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"

//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
void au::edu::anu::mm::SpeciesSpec::_constructor(::x10::lang::String* name,
                                                 x10_double mass, x10_double charge,
                                                 x10_int number) {
    
    //#line 13 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
    ::au::edu::anu::mm::SpeciesSpec* this__19783 = this;
    
    //#line 19 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
    this->FMGL(name) = name;
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
    this->FMGL(mass) = mass;
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
    this->FMGL(charge) = charge;
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
    this->FMGL(number) = number;
}
::au::edu::anu::mm::SpeciesSpec* au::edu::anu::mm::SpeciesSpec::_make(
  ::x10::lang::String* name, x10_double mass, x10_double charge, x10_int number)
{
    ::au::edu::anu::mm::SpeciesSpec* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::SpeciesSpec>()) ::au::edu::anu::mm::SpeciesSpec();
    this_->_constructor(name, mass, charge, number);
    return this_;
}



//#line 13 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/SpeciesSpec.x10"
::au::edu::anu::mm::SpeciesSpec* au::edu::anu::mm::SpeciesSpec::au__edu__anu__mm__SpeciesSpec____this__au__edu__anu__mm__SpeciesSpec(
  ) {
    return this;
    
}
void au::edu::anu::mm::SpeciesSpec::__fieldInitializers_au_edu_anu_mm_SpeciesSpec(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::SpeciesSpec::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::SpeciesSpec::_deserializer);

void au::edu::anu::mm::SpeciesSpec::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(name));
    buf.write(this->FMGL(mass));
    buf.write(this->FMGL(charge));
    buf.write(this->FMGL(number));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::SpeciesSpec::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::SpeciesSpec* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::SpeciesSpec>()) ::au::edu::anu::mm::SpeciesSpec();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::SpeciesSpec::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(name) = buf.read< ::x10::lang::String*>();
    FMGL(mass) = buf.read<x10_double>();
    FMGL(charge) = buf.read<x10_double>();
    FMGL(number) = buf.read<x10_int>();
}

::x10aux::RuntimeType au::edu::anu::mm::SpeciesSpec::rtt;
void au::edu::anu::mm::SpeciesSpec::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.SpeciesSpec",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SpeciesSpec */
/*************************************************/
