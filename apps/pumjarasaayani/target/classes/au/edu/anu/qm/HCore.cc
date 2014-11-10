/*************************************************/
/* START of HCore */
#include <au/edu/anu/qm/HCore.h>

#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HCore.x10"
void au::edu::anu::qm::HCore::_constructor(x10_long n) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HCore.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(n, n);
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HCore.x10"
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HCore.x10"
    ::au::edu::anu::qm::HCore* this__104142 = this;
    
}
::au::edu::anu::qm::HCore* au::edu::anu::qm::HCore::_make(x10_long n) {
    ::au::edu::anu::qm::HCore* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::HCore>()) ::au::edu::anu::qm::HCore();
    this_->_constructor(n);
    return this_;
}



//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HCore.x10"
::au::edu::anu::qm::HCore* au::edu::anu::qm::HCore::au__edu__anu__qm__HCore____this__au__edu__anu__qm__HCore(
  ) {
    return this;
    
}
void au::edu::anu::qm::HCore::__fieldInitializers_au_edu_anu_qm_HCore(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::HCore::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::HCore::_deserializer);

void au::edu::anu::qm::HCore::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_serialize_body(buf);
    
}

::x10::lang::Reference* ::au::edu::anu::qm::HCore::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::HCore* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::HCore>()) ::au::edu::anu::qm::HCore();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::HCore::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_deserialize_body(buf);
    
}

::x10aux::RuntimeType au::edu::anu::qm::HCore::rtt;
void au::edu::anu::qm::HCore::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::matrix::DenseMatrix>()};
    rtt.initStageTwo("au.edu.anu.qm.HCore",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of HCore */
/*************************************************/
