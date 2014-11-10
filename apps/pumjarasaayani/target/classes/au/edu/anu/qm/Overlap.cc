/*************************************************/
/* START of Overlap */
#include <au/edu/anu/qm/Overlap.h>

#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/GMLDiagonalizer.h>
#include <x10/compiler/Synthetic.h>

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
void au::edu::anu::qm::Overlap::_constructor(x10_long n) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(n, n);
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
    ::au::edu::anu::qm::Overlap* this__104210 = this;
    ::x10aux::nullCheck(this__104210)->FMGL(sHalf) = (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::au::edu::anu::qm::Overlap* au::edu::anu::qm::Overlap::_make(x10_long n)
{
    ::au::edu::anu::qm::Overlap* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Overlap>()) ::au::edu::anu::qm::Overlap();
    this_->_constructor(n);
    return this_;
}



//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::Overlap::getSHalf() {
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
    if ((::x10aux::struct_equals(this->FMGL(sHalf), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        this->FMGL(sHalf) = ::au::edu::anu::qm::GMLDiagonalizer::symmetricOrthogonalization(
                              reinterpret_cast< ::x10::matrix::DenseMatrix*>(this));
    }
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
    return this->FMGL(sHalf);
    
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Overlap.x10"
::au::edu::anu::qm::Overlap* au::edu::anu::qm::Overlap::au__edu__anu__qm__Overlap____this__au__edu__anu__qm__Overlap(
  ) {
    return this;
    
}
void au::edu::anu::qm::Overlap::__fieldInitializers_au_edu_anu_qm_Overlap(
  ) {
    this->FMGL(sHalf) = (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::Overlap::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::Overlap::_deserializer);

void au::edu::anu::qm::Overlap::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_serialize_body(buf);
    buf.write(this->FMGL(sHalf));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::Overlap::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::Overlap* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Overlap>()) ::au::edu::anu::qm::Overlap();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::Overlap::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_deserialize_body(buf);
    FMGL(sHalf) = buf.read< ::x10::matrix::DenseMatrix*>();
}

::x10aux::RuntimeType au::edu::anu::qm::Overlap::rtt;
void au::edu::anu::qm::Overlap::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::matrix::DenseMatrix>()};
    rtt.initStageTwo("au.edu.anu.qm.Overlap",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Overlap */
/*************************************************/
