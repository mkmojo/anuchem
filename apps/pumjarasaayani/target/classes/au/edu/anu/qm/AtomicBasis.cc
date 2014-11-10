/*************************************************/
/* START of AtomicBasis */
#include <au/edu/anu/qm/AtomicBasis.h>

#include <au/edu/anu/qm/Orbital.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>

//#line 19 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"
void au::edu::anu::qm::AtomicBasis::_constructor(::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* orbitals) {
    
    //#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"
    ::au::edu::anu::qm::AtomicBasis* this__128295 = this;
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"
    this->FMGL(orbitals) = orbitals;
}
::au::edu::anu::qm::AtomicBasis* au::edu::anu::qm::AtomicBasis::_make(::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* orbitals)
{
    ::au::edu::anu::qm::AtomicBasis* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::AtomicBasis>()) ::au::edu::anu::qm::AtomicBasis();
    this_->_constructor(orbitals);
    return this_;
}



//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"
::au::edu::anu::qm::AtomicBasis* au::edu::anu::qm::AtomicBasis::au__edu__anu__qm__AtomicBasis____this__au__edu__anu__qm__AtomicBasis(
  ) {
    return this;
    
}
void au::edu::anu::qm::AtomicBasis::__fieldInitializers_au_edu_anu_qm_AtomicBasis(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::AtomicBasis::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::AtomicBasis::_deserializer);

void au::edu::anu::qm::AtomicBasis::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(orbitals));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::AtomicBasis::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::AtomicBasis* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::AtomicBasis>()) ::au::edu::anu::qm::AtomicBasis();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::AtomicBasis::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(orbitals) = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::Orbital >*>();
}

::x10aux::RuntimeType au::edu::anu::qm::AtomicBasis::rtt;
void au::edu::anu::qm::AtomicBasis::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.AtomicBasis",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of AtomicBasis */
/*************************************************/
