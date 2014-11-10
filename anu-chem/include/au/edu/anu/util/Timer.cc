/*************************************************/
/* START of Timer */
#include <au/edu/anu/util/Timer.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/util/Timer.h>
#include <x10/compiler/Synthetic.h>

//#line 6 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"

//#line 7 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"

//#line 9 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
void au::edu::anu::util::Timer::_constructor(x10_long n) {
    
    //#line 5 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
    ::au::edu::anu::util::Timer* this__32412 = this;
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
    this->FMGL(total) = ::x10::lang::Rail< x10_long >::_make(n);
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
    this->FMGL(count) = ::x10::lang::Rail< x10_long >::_make(n);
}
::au::edu::anu::util::Timer* au::edu::anu::util::Timer::_make(x10_long n)
{
    ::au::edu::anu::util::Timer* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer();
    this_->_constructor(n);
    return this_;
}



//#line 14 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
void au::edu::anu::util::Timer::clear() {
    ::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::clear();
    ::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::clear();
}

//#line 16 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
void au::edu::anu::util::Timer::start(x10_long id) {
    ::x10::lang::Rail< x10_long >* a__32413 = this->FMGL(total);
    x10_long i__32414 = id;
    x10_long r__32415 = ((::x10aux::nullCheck(a__32413)->x10::lang::Rail< x10_long >::__apply(
                            i__32414)) - (::x10::lang::RuntimeNatives::nanoTime()));
    ::x10aux::nullCheck(a__32413)->x10::lang::Rail< x10_long >::__set(
      i__32414, r__32415);
}

//#line 17 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
void au::edu::anu::util::Timer::clear(x10_long id) {
    ::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::__set(
      id, ((x10_long)0ll));
    ::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__set(
      id, ((x10_long)0ll));
}

//#line 18 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
void au::edu::anu::util::Timer::stop(x10_long id) {
    ::x10::lang::Rail< x10_long >* a__32416 = this->FMGL(total);
    x10_long i__32417 = id;
    x10_long r__32418 = ((::x10aux::nullCheck(a__32416)->x10::lang::Rail< x10_long >::__apply(
                            i__32417)) + (::x10::lang::RuntimeNatives::nanoTime()));
    ::x10aux::nullCheck(a__32416)->x10::lang::Rail< x10_long >::__set(
      i__32417, r__32418);
    ::x10::lang::Rail< x10_long >* a__32419 = this->FMGL(count);
    x10_long i__32420 = id;
    x10_long r__32421 = ((::x10aux::nullCheck(a__32419)->x10::lang::Rail< x10_long >::__apply(
                            i__32420)) + (((x10_long)1ll)));
    ::x10aux::nullCheck(a__32419)->x10::lang::Rail< x10_long >::__set(
      i__32420, r__32421);
}

//#line 19 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
x10_long au::edu::anu::util::Timer::mean(x10_long id) {
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                   id), ((x10_long)0ll))))
    {
        return ((x10_long)0ll);
        
    } else {
        
        //#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
        return ((::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                   id)) / ::x10aux::zeroCheck(::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                                id)));
        
    }
    
}

//#line 5 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/Timer.x10"
::au::edu::anu::util::Timer* au::edu::anu::util::Timer::au__edu__anu__util__Timer____this__au__edu__anu__util__Timer(
  ) {
    return this;
    
}
void au::edu::anu::util::Timer::__fieldInitializers_au_edu_anu_util_Timer(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::util::Timer::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::util::Timer::_deserializer);

void au::edu::anu::util::Timer::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(total));
    buf.write(this->FMGL(count));
    
}

::x10::lang::Reference* ::au::edu::anu::util::Timer::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::util::Timer* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::util::Timer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(total) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(count) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType au::edu::anu::util::Timer::rtt;
void au::edu::anu::util::Timer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.util.Timer",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Timer */
/*************************************************/
