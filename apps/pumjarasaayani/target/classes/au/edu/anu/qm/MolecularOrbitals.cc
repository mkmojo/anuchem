/*************************************************/
/* START of MolecularOrbitals */
#include <au/edu/anu/qm/MolecularOrbitals.h>

#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/Overlap.h>
#include <x10/matrix/Matrix.h>
#include <au/edu/anu/qm/GMLDiagonalizer.h>
#include <x10/matrix/Vector.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
void au::edu::anu::qm::MolecularOrbitals::_constructor(x10_long n) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(n, n);
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    ::au::edu::anu::qm::MolecularOrbitals* this__148746 = this;
    ::x10aux::nullCheck(this__148746)->FMGL(orbitalEnergies) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::au::edu::anu::qm::MolecularOrbitals* au::edu::anu::qm::MolecularOrbitals::_make(
  x10_long n) {
    ::au::edu::anu::qm::MolecularOrbitals* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::MolecularOrbitals>()) ::au::edu::anu::qm::MolecularOrbitals();
    this_->_constructor(n);
    return this_;
}



//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::qm::MolecularOrbitals::getOrbitalEnergies(
  ) {
    return this->FMGL(orbitalEnergies);
    
}

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
void au::edu::anu::qm::MolecularOrbitals::compute(::x10::matrix::DenseMatrix* theMat,
                                                  ::au::edu::anu::qm::Overlap* overlap) {
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    ::x10::matrix::DenseMatrix* x = ::x10aux::nullCheck(overlap)->getSHalf();
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    ::x10::matrix::DenseMatrix* a =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (a)->::x10::matrix::DenseMatrix::_constructor(::x10aux::nullCheck(x)->FMGL(M),
                                                  ::x10aux::nullCheck(theMat)->FMGL(N));
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    a->multTrans(::x10aux::nullCheck(x)->__percent(theMat),
                 x);
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    ::au::edu::anu::qm::GMLDiagonalizer* diag =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::GMLDiagonalizer>()) ::au::edu::anu::qm::GMLDiagonalizer());
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    diag->FMGL(eigenValuesVec) = (::x10aux::class_cast_unchecked< ::x10::matrix::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    diag->FMGL(eigenVectorsMat) = (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    diag->diagonalize(a);
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    this->FMGL(orbitalEnergies) = ::x10aux::nullCheck(diag->getEigenValues())->FMGL(d);
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
    ::x10::matrix::DenseMatrix* t__148747 = this;
    ::x10::matrix::DenseMatrix* A__148748 = diag->getEigenVectors();
    ::x10::matrix::DenseMatrix* B__148749 = x;
    if (!((((::x10aux::struct_equals(::x10aux::nullCheck(A__148748)->FMGL(N),
                                     ::x10aux::nullCheck(t__148747)->FMGL(M))) &&
        (::x10aux::struct_equals(::x10aux::nullCheck(B__148749)->FMGL(M),
                                 ::x10aux::nullCheck(A__148748)->FMGL(M)))) &&
        (::x10aux::struct_equals(::x10aux::nullCheck(B__148749)->FMGL(N),
                                 ::x10aux::nullCheck(t__148747)->FMGL(N))))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::MolecularOrbitals_Strings::sl__150019))));
    }
    ::x10aux::nullCheck(t__148747)->transMult(A__148748, B__148749);
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MolecularOrbitals.x10"
::au::edu::anu::qm::MolecularOrbitals* au::edu::anu::qm::MolecularOrbitals::au__edu__anu__qm__MolecularOrbitals____this__au__edu__anu__qm__MolecularOrbitals(
  ) {
    return this;
    
}
void au::edu::anu::qm::MolecularOrbitals::__fieldInitializers_au_edu_anu_qm_MolecularOrbitals(
  ) {
    this->FMGL(orbitalEnergies) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::MolecularOrbitals::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::MolecularOrbitals::_deserializer);

void au::edu::anu::qm::MolecularOrbitals::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_serialize_body(buf);
    buf.write(this->FMGL(orbitalEnergies));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::MolecularOrbitals::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::MolecularOrbitals* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::MolecularOrbitals>()) ::au::edu::anu::qm::MolecularOrbitals();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::MolecularOrbitals::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_deserialize_body(buf);
    FMGL(orbitalEnergies) = buf.read< ::x10::lang::Rail< x10_double >*>();
}

::x10aux::RuntimeType au::edu::anu::qm::MolecularOrbitals::rtt;
void au::edu::anu::qm::MolecularOrbitals::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::matrix::DenseMatrix>()};
    rtt.initStageTwo("au.edu.anu.qm.MolecularOrbitals",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::MolecularOrbitals_Strings::sl__150019("!(A$108193.N == t$108192.M && B$108194.M == A$108193.M && B$108194.N == t$108192.N)");

/* END of MolecularOrbitals */
/*************************************************/
