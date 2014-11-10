/*************************************************/
/* START of Factorial */
#include <au/edu/anu/mm/Factorial.h>


//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::mm::Factorial::FMGL(factorial);
void au::edu::anu::mm::Factorial::FMGL(factorial__do_init)() {
    FMGL(factorial__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::mm::Factorial.factorial");
    ::x10::lang::Rail< x10_double >* __var181__ = ::au::edu::anu::mm::Factorial::calcFact();
    FMGL(factorial) = __var181__;
    FMGL(factorial__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::mm::Factorial::FMGL(factorial__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(factorial__status), &FMGL(factorial__do_init), &FMGL(factorial__exception), "au::edu::anu::mm::Factorial.factorial");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::mm::Factorial::FMGL(factorial__status);
::x10::lang::CheckedThrowable* au::edu::anu::mm::Factorial::FMGL(factorial__exception);


//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::mm::Factorial::calcFact() {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
    ::x10::lang::Rail< x10_double >* fact = ::x10::lang::Rail< x10_double >::_make(((x10_long)100ll));
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
    fact->x10::lang::Rail< x10_double >::__set(((x10_long)0ll), 1.0);
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
    {
        x10_long i__48054;
        for (i__48054 = ((x10_long)1ll); ((i__48054) <= (((x10_long)99ll)));
             i__48054 = ((i__48054) + (((x10_long)1ll)))) {
            x10_long i__48055 = i__48054;
            fact->x10::lang::Rail< x10_double >::__set(i__48055, ((((x10_double) (i__48055))) * (fact->x10::lang::Rail< x10_double >::__apply(
                                                                                                   ((i__48055) - (((x10_long)1ll)))))));
        }
    }
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
    return fact;
    
}

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
x10_double au::edu::anu::mm::Factorial::getFactorial(x10_long i) {
    return ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
             i);
    
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
::au::edu::anu::mm::Factorial* au::edu::anu::mm::Factorial::au__edu__anu__mm__Factorial____this__au__edu__anu__mm__Factorial(
  ) {
    return this;
    
}
void au::edu::anu::mm::Factorial::_constructor() {
    ::au::edu::anu::mm::Factorial* this__48056 = this;
    
}
::au::edu::anu::mm::Factorial* au::edu::anu::mm::Factorial::_make(
  ) {
    ::au::edu::anu::mm::Factorial* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Factorial>()) ::au::edu::anu::mm::Factorial();
    this_->_constructor();
    return this_;
}


void au::edu::anu::mm::Factorial::__fieldInitializers_au_edu_anu_mm_Factorial(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::Factorial::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::Factorial::_deserializer);

void au::edu::anu::mm::Factorial::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::mm::Factorial::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Factorial* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Factorial>()) ::au::edu::anu::mm::Factorial();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::Factorial::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::mm::Factorial::rtt;
void au::edu::anu::mm::Factorial::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.Factorial",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Factorial */
/*************************************************/
