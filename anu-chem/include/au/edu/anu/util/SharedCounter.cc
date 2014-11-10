/*************************************************/
/* START of SharedCounter */
#include <au/edu/anu/util/SharedCounter.h>

#include <x10/lang/GlobalRef.h>
#include <x10/util/concurrent/AtomicLong.h>
#include <x10/lang/Zero.h>
#include <x10/lang/Long.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>
#ifndef AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_util_SharedCounter__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_long>::itable<au_edu_anu_util_SharedCounter__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        try {
            return ::x10aux::nullCheck((saved_this->FMGL(counter))->__apply())->x10::util::concurrent::AtomicLong::getAndIncrement();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc159) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc159;
                {
                    x10_long __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_long>(::x10::lang::Runtime::wrapAtChecked< x10_long >(
                                                                                              __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::au::edu::anu::util::SharedCounter* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_util_SharedCounter__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_util_SharedCounter__closure__1>();
        buf.record_reference(storage);
        ::au::edu::anu::util::SharedCounter* that_saved_this = buf.read< ::au::edu::anu::util::SharedCounter*>();
        au_edu_anu_util_SharedCounter__closure__1* this_ = new (storage) au_edu_anu_util_SharedCounter__closure__1(that_saved_this);
        return this_;
    }
    
    au_edu_anu_util_SharedCounter__closure__1(::au::edu::anu::util::SharedCounter* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10:38";
    }

};

#endif // AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_util_SharedCounter__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_long>::itable<au_edu_anu_util_SharedCounter__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        try {
            return ::x10aux::nullCheck((saved_this->FMGL(counter))->__apply())->x10::util::concurrent::AtomicLong::get();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc161) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc161;
                {
                    x10_long __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_long>(::x10::lang::Runtime::wrapAtChecked< x10_long >(
                                                                                              __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::au::edu::anu::util::SharedCounter* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_util_SharedCounter__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_util_SharedCounter__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::util::SharedCounter* that_saved_this = buf.read< ::au::edu::anu::util::SharedCounter*>();
        au_edu_anu_util_SharedCounter__closure__2* this_ = new (storage) au_edu_anu_util_SharedCounter__closure__2(that_saved_this);
        return this_;
    }
    
    au_edu_anu_util_SharedCounter__closure__2(::au::edu::anu::util::SharedCounter* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10:42";
    }

};

#endif // AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_util_SharedCounter__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_util_SharedCounter__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        try {
            ::x10aux::nullCheck((saved_this->FMGL(counter))->__apply())->x10::util::concurrent::AtomicLong::set(
              v);
        }
        catch (::x10::lang::CheckedThrowable* __exc163) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc163;
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            }
        }
    }
    
    // captured environment
    ::au::edu::anu::util::SharedCounter* saved_this;
    x10_long v;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->v);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_util_SharedCounter__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_util_SharedCounter__closure__3>();
        buf.record_reference(storage);
        ::au::edu::anu::util::SharedCounter* that_saved_this = buf.read< ::au::edu::anu::util::SharedCounter*>();
        x10_long that_v = buf.read<x10_long>();
        au_edu_anu_util_SharedCounter__closure__3* this_ = new (storage) au_edu_anu_util_SharedCounter__closure__3(that_saved_this, that_v);
        return this_;
    }
    
    au_edu_anu_util_SharedCounter__closure__3(::au::edu::anu::util::SharedCounter* saved_this, x10_long v) : saved_this(saved_this), v(v) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10:46";
    }

};

#endif // AU_EDU_ANU_UTIL_SHAREDCOUNTER__CLOSURE__3_CLOSURE

//#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
void au::edu::anu::util::SharedCounter::_constructor() {
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
    ::au::edu::anu::util::SharedCounter* this__32228 = this;
    ::x10aux::nullCheck(this__32228)->FMGL(counter) = ::x10aux::zeroValue< ::x10::lang::GlobalRef< ::x10::util::concurrent::AtomicLong* > >();
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
    ::x10::util::concurrent::AtomicLong* a = ::x10::util::concurrent::AtomicLong::_make();
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
    this->FMGL(counter) = ::x10::lang::GlobalRef< ::x10::util::concurrent::AtomicLong* >(a);
}
::au::edu::anu::util::SharedCounter* au::edu::anu::util::SharedCounter::_make(
  ) {
    ::au::edu::anu::util::SharedCounter* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::SharedCounter>()) ::au::edu::anu::util::SharedCounter();
    this_->_constructor();
    return this_;
}



//#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
x10_long au::edu::anu::util::SharedCounter::getAndIncrement() {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
    return ::x10::lang::Runtime::evalAt< x10_long >(::x10::lang::Place::_make(((x10_long)((this->FMGL(counter))->location))),
                                                    reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(au_edu_anu_util_SharedCounter__closure__1)))au_edu_anu_util_SharedCounter__closure__1(this))),
                                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
x10_long au::edu::anu::util::SharedCounter::get() {
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
    return ::x10::lang::Runtime::evalAt< x10_long >(::x10::lang::Place::_make(((x10_long)((this->FMGL(counter))->location))),
                                                    reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(au_edu_anu_util_SharedCounter__closure__2)))au_edu_anu_util_SharedCounter__closure__2(this))),
                                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
void au::edu::anu::util::SharedCounter::set(x10_long v) {
    {
        
        //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
        ::x10::lang::Runtime::runAt(::x10::lang::Place::_make(((x10_long)((this->FMGL(counter))->location))),
                                    reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_util_SharedCounter__closure__3)))au_edu_anu_util_SharedCounter__closure__3(this, v))),
                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/SharedCounter.x10"
::au::edu::anu::util::SharedCounter* au::edu::anu::util::SharedCounter::au__edu__anu__util__SharedCounter____this__au__edu__anu__util__SharedCounter(
  ) {
    return this;
    
}
void au::edu::anu::util::SharedCounter::__fieldInitializers_au_edu_anu_util_SharedCounter(
  ) {
    this->FMGL(counter) = ::x10aux::zeroValue< ::x10::lang::GlobalRef< ::x10::util::concurrent::AtomicLong* > >();
}
const ::x10aux::serialization_id_t au::edu::anu::util::SharedCounter::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::util::SharedCounter::_deserializer);

void au::edu::anu::util::SharedCounter::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(counter));
    
}

::x10::lang::Reference* ::au::edu::anu::util::SharedCounter::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::util::SharedCounter* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::SharedCounter>()) ::au::edu::anu::util::SharedCounter();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::util::SharedCounter::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(counter) = buf.read< ::x10::lang::GlobalRef< ::x10::util::concurrent::AtomicLong* > >();
}

::x10aux::RuntimeType au::edu::anu::util::SharedCounter::rtt;
void au::edu::anu::util::SharedCounter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.util.SharedCounter",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0<x10_long>::itable<au_edu_anu_util_SharedCounter__closure__1>au_edu_anu_util_SharedCounter__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_util_SharedCounter__closure__1::__apply, &au_edu_anu_util_SharedCounter__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_util_SharedCounter__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &au_edu_anu_util_SharedCounter__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_util_SharedCounter__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_util_SharedCounter__closure__1::_deserialize);

::x10::lang::Fun_0_0<x10_long>::itable<au_edu_anu_util_SharedCounter__closure__2>au_edu_anu_util_SharedCounter__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_util_SharedCounter__closure__2::__apply, &au_edu_anu_util_SharedCounter__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_util_SharedCounter__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &au_edu_anu_util_SharedCounter__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_util_SharedCounter__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_util_SharedCounter__closure__2::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_util_SharedCounter__closure__3>au_edu_anu_util_SharedCounter__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_util_SharedCounter__closure__3::__apply, &au_edu_anu_util_SharedCounter__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_util_SharedCounter__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_util_SharedCounter__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_util_SharedCounter__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_util_SharedCounter__closure__3::_deserialize);

/* END of SharedCounter */
/*************************************************/
