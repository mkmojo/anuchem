/*************************************************/
/* START of GMLDiagonalizer */
#include <au/edu/anu/qm/GMLDiagonalizer.h>

#include <x10/matrix/Vector.h>
#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Int.h>
#include <x10/matrix/Matrix.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/matrix/lapack/DenseMatrixLAPACK.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
x10_int au::edu::anu::qm::GMLDiagonalizer::diagonalize(::x10::matrix::DenseMatrix* A) {
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    this->FMGL(eigenVectorsMat) = reinterpret_cast< ::x10::matrix::DenseMatrix*>(::x10aux::nullCheck(A)->clone());
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    this->FMGL(eigenValuesVec) = ::x10::matrix::Vector::make(::x10aux::nullCheck(this->FMGL(eigenVectorsMat))->FMGL(N));
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    ::x10::lang::Rail< x10_double >* scratch = ::x10::lang::Rail< x10_double >::_make(((((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(eigenVectorsMat))->FMGL(N)))) - (((x10_long)1ll))));
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    x10_int result = (__extension__ ({
        ::x10::matrix::DenseMatrix* A__104160 = this->FMGL(eigenVectorsMat);
        ::x10::matrix::Vector* W__104161 = this->FMGL(eigenValuesVec);
        ::x10::lang::Rail< x10_double >* tmp__104162 = scratch;
        if (!((::x10aux::struct_equals(::x10aux::nullCheck(W__104161)->FMGL(M),
                                       ::x10aux::nullCheck(A__104160)->FMGL(N)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMLDiagonalizer_Strings::sl__149676))));
        }
        ::x10::matrix::lapack::DenseMatrixLAPACK::compEigenVector(
          A__104160, W__104161, tmp__104162);
    }))
    ;
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    return result;
    
}

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMLDiagonalizer::symmetricOrthogonalization(
  ::x10::matrix::DenseMatrix* A) {
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    ::au::edu::anu::qm::GMLDiagonalizer* diag =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::GMLDiagonalizer>()) ::au::edu::anu::qm::GMLDiagonalizer());
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    diag->FMGL(eigenValuesVec) = (::x10aux::class_cast_unchecked< ::x10::matrix::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    diag->FMGL(eigenVectorsMat) = (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    diag->diagonalize(A);
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    ::x10::matrix::Vector* eigenValues = diag->getEigenValues();
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    ::x10::matrix::DenseMatrix* eigenVectors = diag->getEigenVectors();
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    ::x10::matrix::DenseMatrix* sHalf =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (sHalf)->::x10::matrix::DenseMatrix::_constructor(::x10aux::nullCheck(A)->FMGL(M),
                                                      ::x10aux::nullCheck(A)->FMGL(N));
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    x10_long i__104193max__134543 = ((::x10aux::nullCheck(eigenValues)->FMGL(M)) - (((x10_long)1ll)));
    {
        x10_long i__134544;
        for (i__134544 = ((x10_long)0ll); ((i__134544) <= (i__104193max__134543));
             i__134544 = ((i__134544) + (((x10_long)1ll))))
        {
            x10_long i__134545 = i__134544;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__134539 = i__134545;
            x10_long y__134540 = i__134545;
            x10_double v__134541 = ((1.0) / (::x10::lang::MathNatives::sqrt(::x10aux::nullCheck(eigenValues)->__apply(
                                                                              i__134545))));
            x10_double ret__134542;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(sHalf->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__134540) * (sHalf->FMGL(M)))) + (x__134539)),
              v__134541);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__134542 = v__134541;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__134542;
        }
    }
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    ::x10::matrix::DenseMatrix* x =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (x)->::x10::matrix::DenseMatrix::_constructor(::x10aux::nullCheck(A)->FMGL(M),
                                                  ::x10aux::nullCheck(A)->FMGL(N));
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    x->multTrans(::x10aux::nullCheck(eigenVectors)->__percent(
                   sHalf), eigenVectors);
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
    return x;
    
}

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
::x10::matrix::Vector* au::edu::anu::qm::GMLDiagonalizer::getEigenValues(
  ) {
    return this->FMGL(eigenValuesVec);
    
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMLDiagonalizer::getEigenVectors(
  ) {
    return this->FMGL(eigenVectorsMat);
    
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMLDiagonalizer.x10"
::au::edu::anu::qm::GMLDiagonalizer* au::edu::anu::qm::GMLDiagonalizer::au__edu__anu__qm__GMLDiagonalizer____this__au__edu__anu__qm__GMLDiagonalizer(
  ) {
    return this;
    
}
void au::edu::anu::qm::GMLDiagonalizer::_constructor() {
    ::au::edu::anu::qm::GMLDiagonalizer* this__134546 = this;
    ::x10aux::nullCheck(this__134546)->FMGL(eigenValuesVec) =
      (::x10aux::class_cast_unchecked< ::x10::matrix::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__134546)->FMGL(eigenVectorsMat) =
      (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::au::edu::anu::qm::GMLDiagonalizer* au::edu::anu::qm::GMLDiagonalizer::_make(
  ) {
    ::au::edu::anu::qm::GMLDiagonalizer* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMLDiagonalizer>()) ::au::edu::anu::qm::GMLDiagonalizer();
    this_->_constructor();
    return this_;
}


void au::edu::anu::qm::GMLDiagonalizer::__fieldInitializers_au_edu_anu_qm_GMLDiagonalizer(
  ) {
    this->FMGL(eigenValuesVec) = (::x10aux::class_cast_unchecked< ::x10::matrix::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(eigenVectorsMat) = (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::GMLDiagonalizer::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::GMLDiagonalizer::_deserializer);

void au::edu::anu::qm::GMLDiagonalizer::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(eigenValuesVec));
    buf.write(this->FMGL(eigenVectorsMat));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::GMLDiagonalizer::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::GMLDiagonalizer* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMLDiagonalizer>()) ::au::edu::anu::qm::GMLDiagonalizer();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::GMLDiagonalizer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(eigenValuesVec) = buf.read< ::x10::matrix::Vector*>();
    FMGL(eigenVectorsMat) = buf.read< ::x10::matrix::DenseMatrix*>();
}

::x10aux::RuntimeType au::edu::anu::qm::GMLDiagonalizer::rtt;
void au::edu::anu::qm::GMLDiagonalizer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.GMLDiagonalizer",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::GMLDiagonalizer_Strings::sl__149676("!(W$104161.M == A$104160.N)");

/* END of GMLDiagonalizer */
/*************************************************/
