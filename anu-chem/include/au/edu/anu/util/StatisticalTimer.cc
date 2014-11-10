/*************************************************/
/* START of StatisticalTimer */
#include <au/edu/anu/util/StatisticalTimer.h>

#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/util/Timer.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 15 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"

//#line 16 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"

//#line 17 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"

//#line 18 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"

//#line 19 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"

//#line 20 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"

//#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::_constructor(x10_long n) {
    
    //#line 14 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::au::edu::anu::util::StatisticalTimer* this__32370 = this;
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->FMGL(current) = ::x10::lang::Rail< x10_long >::_make(n);
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->FMGL(count) = ::x10::lang::Rail< x10_long >::_make(n);
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->FMGL(total) = ::x10::lang::Rail< x10_long >::_make(n);
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->FMGL(min) = ::x10::lang::Rail< x10_long >::_make(n, (x10_long)0x7fffffffffffffffLL);
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->FMGL(max) = ::x10::lang::Rail< x10_long >::_make(n, (x10_long)0x8000000000000000LL);
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->FMGL(sumOfSquares) = ::x10::lang::Rail< x10_double >::_make(n);
}
::au::edu::anu::util::StatisticalTimer* au::edu::anu::util::StatisticalTimer::_make(
  x10_long n) {
    ::au::edu::anu::util::StatisticalTimer* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer();
    this_->_constructor(n);
    return this_;
}



//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::start(x10_long id) {
    ::x10aux::nullCheck(this->FMGL(current))->x10::lang::Rail< x10_long >::__set(
      id, (-(::x10::lang::RuntimeNatives::nanoTime())));
}

//#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::clear(x10_long id) {
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::__set(
      id, ((x10_long)0ll));
    ::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__set(
      id, ((x10_long)0ll));
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10aux::nullCheck(this->FMGL(min))->x10::lang::Rail< x10_long >::__set(
      id, (x10_long)0x7fffffffffffffffLL);
    ::x10aux::nullCheck(this->FMGL(max))->x10::lang::Rail< x10_long >::__set(
      id, (x10_long)0x8000000000000000LL);
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10aux::nullCheck(this->FMGL(sumOfSquares))->x10::lang::Rail< x10_double >::__set(
      id, 0.0);
}

//#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::stop(x10_long id) {
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::lang::Rail< x10_long >* a__32371 = this->FMGL(current);
    x10_long i__32372 = id;
    x10_long r__32373 = ((::x10aux::nullCheck(a__32371)->x10::lang::Rail< x10_long >::__apply(
                            i__32372)) + (::x10::lang::RuntimeNatives::nanoTime()));
    ::x10aux::nullCheck(a__32371)->x10::lang::Rail< x10_long >::__set(
      i__32372, r__32373);
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    x10_long elapsed = ::x10aux::nullCheck(this->FMGL(current))->x10::lang::Rail< x10_long >::__apply(
                         id);
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::lang::Rail< x10_long >* a__32374 = this->FMGL(count);
    x10_long i__32375 = id;
    x10_long r__32376 = ((::x10aux::nullCheck(a__32374)->x10::lang::Rail< x10_long >::__apply(
                            i__32375)) + (((x10_long)1ll)));
    ::x10aux::nullCheck(a__32374)->x10::lang::Rail< x10_long >::__set(
      i__32375, r__32376);
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::lang::Rail< x10_long >* a__32377 = this->FMGL(total);
    x10_long i__32378 = id;
    x10_long r__32379 = ((::x10aux::nullCheck(a__32377)->x10::lang::Rail< x10_long >::__apply(
                            i__32378)) + (elapsed));
    ::x10aux::nullCheck(a__32377)->x10::lang::Rail< x10_long >::__set(
      i__32378, r__32379);
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10aux::nullCheck(this->FMGL(min))->x10::lang::Rail< x10_long >::__set(
      id, (__extension__ ({
          
          //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
          x10_long a__32363 = ::x10aux::nullCheck(this->FMGL(min))->x10::lang::Rail< x10_long >::__apply(
                                id);
          x10_long b__32364 = elapsed;
          ((a__32363) < (b__32364)) ? (a__32363) : (b__32364);
      }))
      );
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10aux::nullCheck(this->FMGL(max))->x10::lang::Rail< x10_long >::__set(
      id, (__extension__ ({
          
          //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
          x10_long a__32365 = ::x10aux::nullCheck(this->FMGL(max))->x10::lang::Rail< x10_long >::__apply(
                                id);
          x10_long b__32366 = elapsed;
          ((a__32365) < (b__32366)) ? (b__32366) : (a__32365);
      }))
      );
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    x10_double e = ((x10_double) (elapsed));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::lang::Rail< x10_double >* a__32380 = this->FMGL(sumOfSquares);
    x10_long i__32381 = id;
    x10_double r__32382 = ((::x10aux::nullCheck(a__32380)->x10::lang::Rail< x10_double >::__apply(
                              i__32381)) + (((e) * (e))));
    ::x10aux::nullCheck(a__32380)->x10::lang::Rail< x10_double >::__set(
      i__32381, r__32382);
}

//#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
x10_long au::edu::anu::util::StatisticalTimer::last(x10_long id) {
    return ::x10aux::nullCheck(this->FMGL(current))->x10::lang::Rail< x10_long >::__apply(
             id);
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
x10_long au::edu::anu::util::StatisticalTimer::mean(x10_long id) {
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                   id), ((x10_long)0ll))))
    {
        return ((x10_long)0ll);
        
    }
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    return ((::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
               id)) / ::x10aux::zeroCheck(::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                            id)));
    
}

//#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
x10_long au::edu::anu::util::StatisticalTimer::tot(x10_long id) {
    return ::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
             id);
    
}

//#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
x10_double au::edu::anu::util::StatisticalTimer::stdDev(x10_long id) {
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                   id), ((x10_long)0ll))))
    {
        return ((x10_double) (((x10_long)0ll)));
        
    }
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    x10_double s0 = ((x10_double) (::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                     id)));
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    x10_double s1 = ((x10_double) (::x10aux::nullCheck(this->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                     id)));
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    x10_double s2 = ::x10aux::nullCheck(this->FMGL(sumOfSquares))->x10::lang::Rail< x10_double >::__apply(
                      id);
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    return ((::x10::lang::MathNatives::sqrt(((((s0) * (s2))) - (((s1) * (s1)))))) / (s0));
    
}

//#line 64 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::printSeconds(x10_long id) {
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32691),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(count))->x10::lang::Rail< x10_long >::__apply(
                                                                                                      id)),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (this->au::edu::anu::util::StatisticalTimer::mean(
                                                                                                                       id)))) / (1.0E9))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->au::edu::anu::util::StatisticalTimer::stdDev(
                                                                                                        id)) / (1.0E9))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(this->FMGL(min))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       id)))) / (1.0E9))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(this->FMGL(max))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       id)))) / (1.0E9))));
}

//#line 73 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::printHeader() {
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32692),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32693)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32694)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32695)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32696)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32697)));
}

//#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
void au::edu::anu::util::StatisticalTimer::printSeconds() {
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::au::edu::anu::util::StatisticalTimer* this__32383 =
      this;
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32692),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32693)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32694)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32695)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32696)),
                                                 reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::util::StatisticalTimer_Strings::sl__32697)));
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
    this->au::edu::anu::util::StatisticalTimer::printSeconds(
      ((x10_long)0ll));
}

//#line 14 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/StatisticalTimer.x10"
::au::edu::anu::util::StatisticalTimer* au::edu::anu::util::StatisticalTimer::au__edu__anu__util__StatisticalTimer____this__au__edu__anu__util__StatisticalTimer(
  ) {
    return this;
    
}
void au::edu::anu::util::StatisticalTimer::__fieldInitializers_au_edu_anu_util_StatisticalTimer(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::util::StatisticalTimer::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::util::StatisticalTimer::_deserializer);

void au::edu::anu::util::StatisticalTimer::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(current));
    buf.write(this->FMGL(count));
    buf.write(this->FMGL(total));
    buf.write(this->FMGL(min));
    buf.write(this->FMGL(max));
    buf.write(this->FMGL(sumOfSquares));
    
}

::x10::lang::Reference* ::au::edu::anu::util::StatisticalTimer::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::util::StatisticalTimer* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::util::StatisticalTimer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(current) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(count) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(total) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(min) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(max) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(sumOfSquares) = buf.read< ::x10::lang::Rail< x10_double >*>();
}

::x10aux::RuntimeType au::edu::anu::util::StatisticalTimer::rtt;
void au::edu::anu::util::StatisticalTimer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.util.StatisticalTimer",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32696("min");
::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32697("max");
::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32692("%7s %8s %8s %8s %8s\n");
::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32693("iters");
::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32694("mean");
::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32695("stddev");
::x10::lang::String au::edu::anu::util::StatisticalTimer_Strings::sl__32691("%7i %8.4g %8.4g %8.4g %8.4g\n");

/* END of StatisticalTimer */
/*************************************************/
