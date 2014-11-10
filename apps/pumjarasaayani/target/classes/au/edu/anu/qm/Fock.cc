/*************************************************/
/* START of Fock */
#include <au/edu/anu/qm/Fock.h>

#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/HCore.h>
#include <x10/compiler/Synthetic.h>

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
void au::edu::anu::qm::Fock::_constructor(x10_long n) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(n, n);
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
    ::au::edu::anu::qm::Fock* this__148753 = this;
    
}
::au::edu::anu::qm::Fock* au::edu::anu::qm::Fock::_make(x10_long n) {
    ::au::edu::anu::qm::Fock* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Fock>()) ::au::edu::anu::qm::Fock();
    this_->_constructor(n);
    return this_;
}



//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
void au::edu::anu::qm::Fock::compute(::au::edu::anu::qm::HCore* hCore, ::x10::matrix::DenseMatrix* gMatrix) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
    ::x10aux::nullCheck(hCore)->copyTo(reinterpret_cast< ::x10::matrix::DenseMatrix*>(this));
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
    ::x10::matrix::DenseMatrix::cellAdd(gMatrix);
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Fock.x10"
::au::edu::anu::qm::Fock* au::edu::anu::qm::Fock::au__edu__anu__qm__Fock____this__au__edu__anu__qm__Fock(
  ) {
    return this;
    
}
void au::edu::anu::qm::Fock::__fieldInitializers_au_edu_anu_qm_Fock(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::Fock::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::Fock::_deserializer);

void au::edu::anu::qm::Fock::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_serialize_body(buf);
    
}

::x10::lang::Reference* ::au::edu::anu::qm::Fock::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::Fock* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Fock>()) ::au::edu::anu::qm::Fock();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::Fock::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_deserialize_body(buf);
    
}

::x10aux::RuntimeType au::edu::anu::qm::Fock::rtt;
void au::edu::anu::qm::Fock::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::matrix::DenseMatrix>()};
    rtt.initStageTwo("au.edu.anu.qm.Fock",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Fock */
/*************************************************/
