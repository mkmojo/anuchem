/*************************************************/
/* START of ExecutionEnvironment */
#include <au/edu/anu/util/ExecutionEnvironment.h>

#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/String.h>
#include <x10/io/Reader.h>
#include <x10/util/Map.h>
#include <x10/util/HashMap.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_util_ExecutionEnvironment__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_util_ExecutionEnvironment__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::lang::String* hostname = ::x10::lang::RuntimeNatives::execForRead(::x10aux::to_string((&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32679))->c_str())->readLine();
        
        //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::lang::String* np = ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>::getOrElse(::x10aux::nullCheck(reinterpret_cast< ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>*>(::x10::lang::Runtime::FMGL(env__get)())), 
                                    (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32680),
                                    (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32681));
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::lang::String* nt = ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>::getOrElse(::x10aux::nullCheck(reinterpret_cast< ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>*>(::x10::lang::Runtime::FMGL(env__get)())), 
                                    (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32682),
                                    (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32681));
        
        //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::lang::String* gt = ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>::getOrElse(::x10aux::nullCheck(reinterpret_cast< ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>*>(::x10::lang::Runtime::FMGL(env__get)())), 
                                    (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32683),
                                    (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32681));
        
        //#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::lang::String* omp = ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>::getOrElse(::x10aux::nullCheck(reinterpret_cast< ::x10::util::Map< ::x10::lang::String*, ::x10::lang::String*>*>(::x10::lang::Runtime::FMGL(env__get)())), 
                                     (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32684),
                                     (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32681));
        
        //#line 52 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32685)), ::x10::lang::Runtime::FMGL(NTHREADS__get)()), (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32686)), hostname), (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32687)), np), (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32688)), nt), (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32689)), gt), (&::au::edu::anu::util::ExecutionEnvironment_Strings::sl__32690)), omp)));
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::io::Console::FMGL(OUT__get)()->flush();
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_util_ExecutionEnvironment__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_util_ExecutionEnvironment__closure__2>();
        buf.record_reference(storage);
        au_edu_anu_util_ExecutionEnvironment__closure__2* this_ = new (storage) au_edu_anu_util_ExecutionEnvironment__closure__2();
        return this_;
    }
    
    au_edu_anu_util_ExecutionEnvironment__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10:45-54";
    }

};

#endif // AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_util_ExecutionEnvironment__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_util_ExecutionEnvironment__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__32198;
            for (place__32198 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                          ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__32198));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__32198));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_util_ExecutionEnvironment__closure__2)))au_edu_anu_util_ExecutionEnvironment__closure__2())),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_util_ExecutionEnvironment__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_util_ExecutionEnvironment__closure__1>();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_util_ExecutionEnvironment__closure__1* this_ = new (storage) au_edu_anu_util_ExecutionEnvironment__closure__1(that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_util_ExecutionEnvironment__closure__1(::x10::regionarray::Dist* __lowerer__var__0__) : __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10:45-54";
    }

};

#endif // AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT__CLOSURE__1_CLOSURE

//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
void au::edu::anu::util::ExecutionEnvironment::setBlasThreads(x10_int numThreads) {
 
}

//#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
void au::edu::anu::util::ExecutionEnvironment::printThreadingVariables() {
    {
        
        //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__32203 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__27908 =  (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__27908)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__27908;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____32200;
                        for (__lowerer__var__1____32200 = ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____32200));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____32200));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_util_ExecutionEnvironment__closure__1)))au_edu_anu_util_ExecutionEnvironment__closure__1(__lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc155) {
            {
                ::x10::lang::CheckedThrowable* ct__32201 =
                  __exc155;
                {
                    ::x10::lang::Runtime::pushException(ct__32201);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__32203);
    }
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
::au::edu::anu::util::ExecutionEnvironment* au::edu::anu::util::ExecutionEnvironment::au__edu__anu__util__ExecutionEnvironment____this__au__edu__anu__util__ExecutionEnvironment(
  ) {
    return this;
    
}

//#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
void au::edu::anu::util::ExecutionEnvironment::_constructor(
  ) {
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
    ::au::edu::anu::util::ExecutionEnvironment* this__32189 =
      this;
    
}
::au::edu::anu::util::ExecutionEnvironment* au::edu::anu::util::ExecutionEnvironment::_make(
  ) {
    ::au::edu::anu::util::ExecutionEnvironment* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::ExecutionEnvironment>()) ::au::edu::anu::util::ExecutionEnvironment();
    this_->_constructor();
    return this_;
}



//#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/util/ExecutionEnvironment.x10"
void au::edu::anu::util::ExecutionEnvironment::__fieldInitializers_au_edu_anu_util_ExecutionEnvironment(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::util::ExecutionEnvironment::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::util::ExecutionEnvironment::_deserializer);

void au::edu::anu::util::ExecutionEnvironment::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::util::ExecutionEnvironment::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::util::ExecutionEnvironment* this_ = new (::x10aux::alloc_z< ::au::edu::anu::util::ExecutionEnvironment>()) ::au::edu::anu::util::ExecutionEnvironment();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::util::ExecutionEnvironment::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::util::ExecutionEnvironment::rtt;
void au::edu::anu::util::ExecutionEnvironment::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.util.ExecutionEnvironment",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32681("");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32680("X10_NPLACES");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32689(", GOTO_NUM_THREADS=");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32684("OMP_NUM_THREADS");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32683("GOTO_NUM_THREADS");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32682("X10_NTHREADS");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32690(", OMP_NUM_THREADS=");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32685(", Runtime.NTHREADS=");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32688(", X10_NTHREADS=");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32686(", uname -n=");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32687(", X10_NPLACES=");
::x10::lang::String au::edu::anu::util::ExecutionEnvironment_Strings::sl__32679("uname -n");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_util_ExecutionEnvironment__closure__2>au_edu_anu_util_ExecutionEnvironment__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_util_ExecutionEnvironment__closure__2::__apply, &au_edu_anu_util_ExecutionEnvironment__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_util_ExecutionEnvironment__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_util_ExecutionEnvironment__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_util_ExecutionEnvironment__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_util_ExecutionEnvironment__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_util_ExecutionEnvironment__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_util_ExecutionEnvironment__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_util_ExecutionEnvironment__closure__1>au_edu_anu_util_ExecutionEnvironment__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_util_ExecutionEnvironment__closure__1::__apply, &au_edu_anu_util_ExecutionEnvironment__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_util_ExecutionEnvironment__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_util_ExecutionEnvironment__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_util_ExecutionEnvironment__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_util_ExecutionEnvironment__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_util_ExecutionEnvironment__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_util_ExecutionEnvironment__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of ExecutionEnvironment */
/*************************************************/
