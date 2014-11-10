/*************************************************/
/* START of Density */
#include <au/edu/anu/qm/Density.h>

#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/MolecularOrbitals.h>
#include <x10/matrix/blas/DenseMatrixBLAS.h>
#include <x10/lang/Unsafe.h>
#include <x10/matrix/Matrix.h>
#include <x10/compiler/Synthetic.h>

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
void au::edu::anu::qm::Density::_constructor(x10_long n, x10_long noOfOccupancies) {
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(n, n);
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    ::au::edu::anu::qm::Density* this__127979 = this;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    this->FMGL(noOfOccupancies) = noOfOccupancies;
}
::au::edu::anu::qm::Density* au::edu::anu::qm::Density::_make(x10_long n,
                                                              x10_long noOfOccupancies)
{
    ::au::edu::anu::qm::Density* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Density>()) ::au::edu::anu::qm::Density();
    this_->_constructor(n, noOfOccupancies);
    return this_;
}



//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
void au::edu::anu::qm::Density::_constructor(x10_long n, x10_long noOfOccupancies,
                                             x10_double v) {
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(n, n,
                                                     ::x10::lang::Rail< x10_double >::_make(((n) * (n)),
                                                                                            v));
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    ::au::edu::anu::qm::Density* this__127980 = this;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    this->FMGL(noOfOccupancies) = noOfOccupancies;
}
::au::edu::anu::qm::Density* au::edu::anu::qm::Density::_make(
  x10_long n, x10_long noOfOccupancies, x10_double v) {
    ::au::edu::anu::qm::Density* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Density>()) ::au::edu::anu::qm::Density();
    this_->_constructor(n, noOfOccupancies, v);
    return this_;
}



//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
x10_long au::edu::anu::qm::Density::getNoOfOccupancies() {
    return this->FMGL(noOfOccupancies);
    
}

//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
void au::edu::anu::qm::Density::compute(::au::edu::anu::qm::MolecularOrbitals* mos) {
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    ::x10::lang::Rail< x10_long >* offsets = ::x10::lang::Rail< x10_long >::_make(((x10_long)6ll));
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    ::x10::matrix::blas::DenseMatrixBLAS::compTransMult(2.0,
                                                        reinterpret_cast< ::x10::matrix::DenseMatrix*>(mos),
                                                        reinterpret_cast< ::x10::matrix::DenseMatrix*>(mos),
                                                        0.0,
                                                        reinterpret_cast< ::x10::matrix::DenseMatrix*>(this),
                                                        (__extension__ ({
                                                            ::x10::lang::Rail< x10_long >* t__149579 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                                            t__149579->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ::x10aux::nullCheck(mos)->FMGL(N));
                                                            t__149579->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ::x10aux::nullCheck(mos)->FMGL(N));
                                                            t__149579->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              this->FMGL(noOfOccupancies));
                                                            t__149579;
                                                        }))
                                                        ,
                                                        offsets);
}

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
void au::edu::anu::qm::Density::applyGuess(::x10::matrix::DenseMatrix* SAD) {
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
    ::x10::matrix::DenseMatrix::copy(SAD, reinterpret_cast< ::x10::matrix::DenseMatrix*>(this));
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Density.x10"
::au::edu::anu::qm::Density* au::edu::anu::qm::Density::au__edu__anu__qm__Density____this__au__edu__anu__qm__Density(
  ) {
    return this;
    
}
void au::edu::anu::qm::Density::__fieldInitializers_au_edu_anu_qm_Density(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::Density::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::Density::_deserializer);

void au::edu::anu::qm::Density::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_serialize_body(buf);
    buf.write(this->FMGL(noOfOccupancies));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::Density::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::Density* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::Density>()) ::au::edu::anu::qm::Density();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::Density::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_deserialize_body(buf);
    FMGL(noOfOccupancies) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::qm::Density::rtt;
void au::edu::anu::qm::Density::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::matrix::DenseMatrix>()};
    rtt.initStageTwo("au.edu.anu.qm.Density",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Density */
/*************************************************/
