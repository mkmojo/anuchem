/*************************************************/
/* START of FmmScratch */
#include <au/edu/anu/mm/FmmScratch.h>


//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"

//#line 19 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
/** 
     * Associated Legendre polynomial scratch for use in L2P calculations.
     * Must have p+1 terms for gradient calculation.
     */

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
void au::edu::anu::mm::FmmScratch::_constructor(x10_long numTerms) {
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    ::au::edu::anu::mm::FmmScratch* this__64051 = this;
    ::x10aux::nullCheck(this__64051)->FMGL(exp) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__64051)->FMGL(array) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__64051)->FMGL(plm) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::AssociatedLegendrePolynomial*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    this->FMGL(exp) = (__extension__ ({
        ::au::edu::anu::mm::MultipoleExpansion* alloc__44654 =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
        (alloc__44654)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
          numTerms);
        alloc__44654;
    }))
    ;
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    this->FMGL(array) = ::x10::lang::Rail< x10_complex >::_make(((numTerms) + (((x10_long)1ll))));
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    this->FMGL(plm) = (__extension__ ({
        ::au::edu::anu::mm::AssociatedLegendrePolynomial* alloc__44655 = 
        (new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial());
        (alloc__44655)->::au::edu::anu::mm::AssociatedLegendrePolynomial::_constructor(
          ((numTerms) + (((x10_long)1ll))));
        alloc__44655;
    }))
    ;
}
::au::edu::anu::mm::FmmScratch* au::edu::anu::mm::FmmScratch::_make(
  x10_long numTerms) {
    ::au::edu::anu::mm::FmmScratch* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmScratch>()) ::au::edu::anu::mm::FmmScratch();
    this_->_constructor(numTerms);
    return this_;
}



//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
::x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >* au::edu::anu::mm::FmmScratch::FMGL(store);
void au::edu::anu::mm::FmmScratch::FMGL(store__do_init)() {
    FMGL(store__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::mm::FmmScratch.store");
    ::x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >* __var99__ = ::x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >::_make(((x10_long)(::x10::lang::Runtime::FMGL(MAX_THREADS__get)())));
    FMGL(store) = __var99__;
    FMGL(store__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::mm::FmmScratch::FMGL(store__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(store__status), &FMGL(store__do_init), &FMGL(store__exception), "au::edu::anu::mm::FmmScratch.store");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::mm::FmmScratch::FMGL(store__status);
::x10::lang::CheckedThrowable* au::edu::anu::mm::FmmScratch::FMGL(store__exception);


//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
::au::edu::anu::mm::FmmScratch* au::edu::anu::mm::FmmScratch::getWorkerLocal(
  ) {
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    return ::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::FMGL(store__get)())->x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >::__apply(
             ((x10_long)(::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::Runtime__Worker*>(::x10::lang::Thread::currentThread())))->FMGL(workerId))));
    
}

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
void au::edu::anu::mm::FmmScratch::setWorkerLocal(::au::edu::anu::mm::FmmScratch* scratch) {
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    ::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::FMGL(store__get)())->x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >::__set(
      ((x10_long)(::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::Runtime__Worker*>(::x10::lang::Thread::currentThread())))->FMGL(workerId))),
      scratch);
}

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
void au::edu::anu::mm::FmmScratch::init(::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*>* func) {
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
    x10_long i__44657max__64052 = (((x10_long)(::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::FMGL(store__get)())->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__64053;
        for (i__64053 = ((x10_long)0ll); ((i__64053) <= (i__44657max__64052));
             i__64053 = ((i__64053) + (((x10_long)1ll))))
        {
            x10_long i__64054 = i__64053;
            
            //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
            ::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::FMGL(store__get)())->x10::lang::Rail< ::au::edu::anu::mm::FmmScratch* >::__set(
              i__64054, ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*>::__apply(::x10aux::nullCheck(func)));
        }
    }
    
}

//#line 17 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmScratch.x10"
::au::edu::anu::mm::FmmScratch* au::edu::anu::mm::FmmScratch::au__edu__anu__mm__FmmScratch____this__au__edu__anu__mm__FmmScratch(
  ) {
    return this;
    
}
void au::edu::anu::mm::FmmScratch::__fieldInitializers_au_edu_anu_mm_FmmScratch(
  ) {
    this->FMGL(exp) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(array) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(plm) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::AssociatedLegendrePolynomial*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::mm::FmmScratch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::FmmScratch::_deserializer);

void au::edu::anu::mm::FmmScratch::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(exp));
    buf.write(this->FMGL(array));
    buf.write(this->FMGL(plm));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::FmmScratch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::FmmScratch* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmScratch>()) ::au::edu::anu::mm::FmmScratch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::FmmScratch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(exp) = buf.read< ::au::edu::anu::mm::MultipoleExpansion*>();
    FMGL(array) = buf.read< ::x10::lang::Rail< x10_complex >*>();
    FMGL(plm) = buf.read< ::au::edu::anu::mm::AssociatedLegendrePolynomial*>();
    
}

::x10aux::RuntimeType au::edu::anu::mm::FmmScratch::rtt;
void au::edu::anu::mm::FmmScratch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.FmmScratch",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of FmmScratch */
/*************************************************/
