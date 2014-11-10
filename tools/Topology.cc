/*************************************************/
/* START of Topology */
#include <Topology.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/io/Reader.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef TOPOLOGY__CLOSURE__1_CLOSURE
#define TOPOLOGY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Topology__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<Topology__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        try {
            
            //#line 19 "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10"
            ::x10::io::Reader* hostnameReader = ::x10::lang::RuntimeNatives::execForRead(::x10aux::to_string((&::Topology_Strings::sl__4979))->c_str());
            
            //#line 20 "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10"
            ::x10::lang::String* hostname = hostnameReader->readLine();
            
            //#line 21 "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::Topology_Strings::sl__4980)), ::x10aux::runtime_name()), (&::Topology_Strings::sl__4981)), ::x10::lang::Runtime::FMGL(NTHREADS__get)()), (&::Topology_Strings::sl__4982))));
        }
        catch (::x10::lang::CheckedThrowable* __exc1) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc1;
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            }
        }
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        Topology__closure__1* storage = ::x10aux::alloc_z<Topology__closure__1>();
        buf.record_reference(storage);
        Topology__closure__1* this_ = new (storage) Topology__closure__1();
        return this_;
    }
    
    Topology__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10:18-45";
    }

};

#endif // TOPOLOGY__CLOSURE__1_CLOSURE

//#line 17 "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10"
void Topology::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 18 "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Place>* place__327;
        for (place__327 = ::x10::lang::Place::places()->iterator(); ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(place__327));
             ) {
            ::x10::lang::Place place = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(place__327));
            {
                ::x10::lang::Runtime::runAt(place, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(Topology__closure__1)))Topology__closure__1())),
                                            ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
    }
    
}

//#line 16 "/localdisk/qqiu/workspace/anuchem/tools/Topology.x10"
::Topology* Topology::Topology____this__Topology() {
    return this;
    
}
void Topology::_constructor() {
    ::Topology* this__4974 = this;
    
}
::Topology* Topology::_make() {
    ::Topology* this_ = new (::x10aux::alloc_z< ::Topology>()) ::Topology();
    this_->_constructor();
    return this_;
}


void Topology::__fieldInitializers_Topology() {
 
}
const ::x10aux::serialization_id_t Topology::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::Topology::_deserializer);

void Topology::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::Topology::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::Topology* this_ = new (::x10aux::alloc_z< ::Topology>()) ::Topology();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Topology::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType Topology::rtt;
void Topology::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Topology",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String Topology_Strings::sl__4980(" executing on ");
::x10::lang::String Topology_Strings::sl__4981(" with ");
::x10::lang::String Topology_Strings::sl__4979("uname -n");
::x10::lang::String Topology_Strings::sl__4982(" threads");

::x10::lang::VoidFun_0_0::itable<Topology__closure__1>Topology__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &Topology__closure__1::__apply, &Topology__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry Topology__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &Topology__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t Topology__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(Topology__closure__1::_deserialize);

/* END of Topology */
/*************************************************/
