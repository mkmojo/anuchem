/*************************************************/
/* START of Shell */
#include <au/edu/anu/qm/Shell.h>

#include <x10/lang/Int.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
void au::edu::anu::qm::Shell::_constructor(x10_int am) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
    ::au::edu::anu::qm::Shell* this__109415 = this;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
    this->FMGL(angularMomentum) = am;
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
    this->FMGL(shellPrimitives) = (__extension__ ({
        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* alloc__109406 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>());
        (alloc__109406)->::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>::_constructor();
        alloc__109406;
    }))
    ;
}
::au::edu::anu::qm::Shell* au::edu::anu::qm::Shell::_make(x10_int am)
{
    ::au::edu::anu::qm::Shell* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Shell>()) ::au::edu::anu::qm::Shell();
    this_->_constructor(am);
    return this_;
}



//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
x10_int au::edu::anu::qm::Shell::getAngularMomentum() {
    return this->FMGL(angularMomentum);
    
}

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* au::edu::anu::qm::Shell::getShellPrimitives(
  ) {
    return this->FMGL(shellPrimitives);
    
}

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
x10_long au::edu::anu::qm::Shell::getNumberOfShellPrimitives(
  ) {
    return ::x10aux::nullCheck(this->FMGL(shellPrimitives))->size();
    
}

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
::au::edu::anu::qm::ContractedGaussian au::edu::anu::qm::Shell::getShellPrimitive(
  x10_int i) {
    return ::x10aux::nullCheck(this->FMGL(shellPrimitives))->__apply(
             ((x10_long)(i)));
    
}

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
void au::edu::anu::qm::Shell::addShellPrimitive(::au::edu::anu::qm::ContractedGaussian cg) {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
    ::x10aux::nullCheck(this->FMGL(shellPrimitives))->add(
      cg);
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Shell.x10"
::au::edu::anu::qm::Shell* au::edu::anu::qm::Shell::au__edu__anu__qm__Shell____this__au__edu__anu__qm__Shell(
  ) {
    return this;
    
}
void au::edu::anu::qm::Shell::__fieldInitializers_au_edu_anu_qm_Shell(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::Shell::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::Shell::_deserializer);

void au::edu::anu::qm::Shell::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(angularMomentum));
    buf.write(this->FMGL(shellPrimitives));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::Shell::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::Shell* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Shell>()) ::au::edu::anu::qm::Shell();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::Shell::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(angularMomentum) = buf.read<x10_int>();
    FMGL(shellPrimitives) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>();
}

::x10aux::RuntimeType au::edu::anu::qm::Shell::rtt;
void au::edu::anu::qm::Shell::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.Shell",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Shell */
/*************************************************/
