/*************************************************/
/* START of FastMultipoleMethod */
#include <au/edu/anu/mm/FastMultipoleMethod.h>

#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(saved_this->calculateEnergyLocal());
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__2* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__2(that_saved_this);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__2(::au::edu::anu::mm::FastMultipoleMethod* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:118-120";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p1__52450;
            for (p1__52450 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__52450));
                 ) {
                ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__52450));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__2)))au_edu_anu_mm_FastMultipoleMethod__closure__2(saved_this))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__1>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__1* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__1(that_saved_this, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__1(::au::edu::anu::mm::FastMultipoleMethod* saved_this, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:118-120";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        saved_this->prefetchRemoteAtoms();
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__3>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__3* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__3(that_saved_this);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__3(::au::edu::anu::mm::FastMultipoleMethod* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:131-133";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::au::edu::anu::util::Timer* timer = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer);
        
        //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_long >(timer->FMGL(total),
                                                                     ((x10_long)0ll),
                                                                     timer->FMGL(total),
                                                                     ((x10_long)0ll),
                                                                     (x10_long)(::x10aux::nullCheck(timer->FMGL(total))->FMGL(size)),
                                                                     ((x10_int)6));
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
        au_edu_anu_mm_FastMultipoleMethod__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__5>();
        buf.record_reference(storage);
        au_edu_anu_mm_FastMultipoleMethod__closure__5* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__5();
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__5() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:148-151";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p1__52470;
            for (p1__52470 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__52470));
                 ) {
                ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__52470));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__5)))au_edu_anu_mm_FastMultipoleMethod__closure__5())),
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
        au_edu_anu_mm_FastMultipoleMethod__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__4>();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__4* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__4(that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__4(::x10::regionarray::Dist* __lowerer__var__0__) : __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:148-151";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10aux::nullCheck(topLevelOctant)->upward();
    }
    
    // captured environment
    ::au::edu::anu::mm::Octant* topLevelOctant;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->topLevelOctant);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__6>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Octant* that_topLevelOctant = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__6* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__6(that_topLevelOctant);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__6(::au::edu::anu::mm::Octant* topLevelOctant) : topLevelOctant(topLevelOctant) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:243-245";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10aux::nullCheck(topLevelOctant)->multipolesToLocal();
    }
    
    // captured environment
    ::au::edu::anu::mm::Octant* topLevelOctant;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->topLevelOctant);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__7>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Octant* that_topLevelOctant = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__7* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__7(that_topLevelOctant);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__7(::au::edu::anu::mm::Octant* topLevelOctant) : topLevelOctant(topLevelOctant) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:255-257";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__7_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__8_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 269 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(::x10aux::nullCheck(topLevelOctant)->downward(
                                                        reinterpret_cast< ::au::edu::anu::mm::LocalExpansion*>(X10_NULL)));
    }
    
    // captured environment
    ::au::edu::anu::mm::Octant* topLevelOctant;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->topLevelOctant);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__8* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__8>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Octant* that_topLevelOctant = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__8* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__8(that_topLevelOctant);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__8(::au::edu::anu::mm::Octant* topLevelOctant) : topLevelOctant(topLevelOctant) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:268-270";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__8_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__11_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*>::itable<au_edu_anu_mm_FastMultipoleMethod__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::mm::FmmScratch* __apply(){
        ::au::edu::anu::mm::FmmScratch* alloc__52308 =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmScratch>()) ::au::edu::anu::mm::FmmScratch());
        (alloc__52308)->::au::edu::anu::mm::FmmScratch::_constructor(((x10_long)(saved_this->FMGL(numTerms))));
        return alloc__52308;
        
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__11* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__11>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__11* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__11(that_saved_this);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__11(::au::edu::anu::mm::FastMultipoleMethod* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:281";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__11_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__10_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 279 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::start(
          ((x10_long)5ll));
        
        //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ((void)(saved_this),::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)())->init(
          saved_this->FMGL(numTerms), saved_this->FMGL(dMax),
          saved_this->FMGL(ws), saved_this->FMGL(size));
        
        //#line 281 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::au::edu::anu::mm::FmmScratch::init(reinterpret_cast< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*> >(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__11)))au_edu_anu_mm_FastMultipoleMethod__closure__11(saved_this))));
        
        //#line 282 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        saved_this->estimateCostLocal(numAtoms);
        
        //#line 283 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms =
          ::x10aux::nullCheck(atoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p1);
        
        //#line 285 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* localAtoms =
          ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::_make((x10_long)(::x10aux::nullCheck(myAtoms)->FMGL(size)));
        
        //#line 286 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_double invSideLength = ((((x10_double) (saved_this->FMGL(lowestLevelDim)))) / (saved_this->FMGL(size)));
        
        //#line 287 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_double offset = ((((x10_double) (saved_this->FMGL(lowestLevelDim)))) / (2.0));
        
        //#line 288 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long i__21278max__52314 = (((x10_long)(::x10aux::nullCheck(myAtoms)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__52315;
            for (i__52315 = ((x10_long)0ll); ((i__52315) <= (i__21278max__52314));
                 i__52315 = ((i__52315) + (((x10_long)1ll))))
            {
                x10_long i__52316 = i__52315;
                
                //#line 289 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::au::edu::anu::chem::mm::MMAtom* atom__52311 =
                  ::x10aux::nullCheck(myAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                    i__52316);
                
                //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                x10_uint mortonId__52312 = ::au::edu::anu::mm::OctantId::getLeafMortonId(
                                             ::x10aux::nullCheck(atom__52311)->FMGL(centre),
                                             invSideLength,
                                             offset);
                
                //#line 291 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                localAtoms->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::__set(
                  i__52316, (__extension__ ({
                      ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> alloc__52313 =
                         ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*>::_alloc();
                      
                      //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                      x10_uint first__52309 = mortonId__52312;
                      ::au::edu::anu::chem::mm::MMAtom* second__52310 =
                        atom__52311;
                      
                      //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                      alloc__52313->FMGL(first) = first__52309;
                      
                      //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                      alloc__52313->FMGL(second) = second__52310;
                      alloc__52313;
                  }))
                  );
            }
        }
        
        //#line 293 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        saved_this->assignAtomsToOctantsLocal(localAtoms);
        
        //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::stop(
          ((x10_long)5ll));
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    x10_int numAtoms;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::x10::lang::Point* p1;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->numAtoms);
        buf.write(this->atoms);
        buf.write(this->p1);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__10* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__10>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        x10_int that_numAtoms = buf.read<x10_int>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::lang::Point* that_p1 = buf.read< ::x10::lang::Point*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__10* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__10(that_saved_this, that_numAtoms, that_atoms, that_p1);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__10(::au::edu::anu::mm::FastMultipoleMethod* saved_this, x10_int numAtoms, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::lang::Point* p1) : saved_this(saved_this), numAtoms(numAtoms), atoms(atoms), p1(p1) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:278-295";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__10_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__9_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p1__52503;
            for (p1__52503 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__52503));
                 ) {
                ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__52503));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__10)))au_edu_anu_mm_FastMultipoleMethod__closure__10(saved_this, numAtoms, atoms, p1))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    x10_int numAtoms;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->numAtoms);
        buf.write(this->atoms);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__9* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__9>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        x10_int that_numAtoms = buf.read<x10_int>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__9* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__9(that_saved_this, that_numAtoms, that_atoms, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__9(::au::edu::anu::mm::FastMultipoleMethod* saved_this, x10_int numAtoms, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), numAtoms(numAtoms), atoms(atoms), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:278-295";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__9_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__13_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 325 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_int octants = ((x10_int)0);
        
        //#line 326 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        {
            ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* topLevelOctant__21314;
            for (topLevelOctant__21314 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(topLevelOctants)->iterator());
                 ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(topLevelOctant__21314));
                 ) {
                ::au::edu::anu::mm::Octant* topLevelOctant =
                  ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(topLevelOctant__21314));
                
                //#line 327 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                octants = ((octants) + (::x10aux::nullCheck(topLevelOctant)->countOctants()));
            }
        }
        
        //#line 329 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::makeOffer< x10_int >(octants);
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
        au_edu_anu_mm_FastMultipoleMethod__closure__13* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__13>();
        buf.record_reference(storage);
        au_edu_anu_mm_FastMultipoleMethod__closure__13* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__13();
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__13() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:324-330";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__13_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__12_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p1__52521;
            for (p1__52521 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__52521));
                 ) {
                ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__52521));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__13)))au_edu_anu_mm_FastMultipoleMethod__closure__13())),
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
        au_edu_anu_mm_FastMultipoleMethod__closure__12* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__12>();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__12* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__12(that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__12(::x10::regionarray::Dist* __lowerer__var__0__) : __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:324-330";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__12_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__15_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 334 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_int ghostOctants = ((x10_int)0);
        
        //#line 335 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        {
            ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* topLevelOctant__21316;
            for (topLevelOctant__21316 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(topLevelOctants)->iterator());
                 ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(topLevelOctant__21316));
                 ) {
                ::au::edu::anu::mm::Octant* topLevelOctant =
                  ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(topLevelOctant__21316));
                
                //#line 336 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ghostOctants = ((ghostOctants) + (::x10aux::nullCheck(topLevelOctant)->ghostOctants()));
            }
        }
        
        //#line 338 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::makeOffer< x10_int >(ghostOctants);
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
        au_edu_anu_mm_FastMultipoleMethod__closure__15* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__15>();
        buf.record_reference(storage);
        au_edu_anu_mm_FastMultipoleMethod__closure__15* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__15();
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__15() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:333-339";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__15_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__14_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p1__52539;
            for (p1__52539 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__1__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__52539));
                 ) {
                ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__52539));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__15)))au_edu_anu_mm_FastMultipoleMethod__closure__15())),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::Dist* __lowerer__var__1__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->__lowerer__var__1__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__14* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__14>();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that___lowerer__var__1__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__14* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__14(that___lowerer__var__1__);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__14(::x10::regionarray::Dist* __lowerer__var__1__) : __lowerer__var__1__(__lowerer__var__1__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:333-339";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__14_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__16_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 541 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        saved_this->addAtomsToLocalOctants(atomsToSend);
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* saved_this;
    ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* atomsToSend;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->atomsToSend);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__16* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__16>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_saved_this = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* that_atomsToSend = buf.read< ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__16* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__16(that_saved_this, that_atomsToSend);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__16(::au::edu::anu::mm::FastMultipoleMethod* saved_this, ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* atomsToSend) : saved_this(saved_this), atomsToSend(atomsToSend) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:540-542";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__16_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__18_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::itable<au_edu_anu_mm_FastMultipoleMethod__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* __apply(){
        try {
            return ::au::edu::anu::mm::FastMultipoleMethod::getAtomsForOctantList(
                     uListArray);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc39) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc39;
                {
                    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::Rail< x10_uint >* uListArray;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->uListArray);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__18* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__18>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_uint >* that_uListArray = buf.read< ::x10::lang::Rail< x10_uint >*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__18* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__18(that_uListArray);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__18(::x10::lang::Rail< x10_uint >* uListArray) : uListArray(uListArray) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:755";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__18_CLOSURE
#ifndef AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__17_CLOSURE
#define AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_FastMultipoleMethod__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 752 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long placeId = ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>::getKey(::x10aux::nullCheck(placeEntry));
        
        //#line 753 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::util::ArrayList<x10_uint>* uListForPlace = ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>::getValue(::x10aux::nullCheck(placeEntry));
        
        //#line 754 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< x10_uint >* uListArray = ::x10aux::nullCheck(uListForPlace)->toRail();
        
        //#line 755 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* atomsForPlace =
          ::x10::lang::Runtime::evalAt< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >(
            (__extension__ ({
                ::x10::lang::Place alloc__21260 =  ::x10::lang::Place::_alloc();
                (alloc__21260)->::x10::lang::Place::_constructor(
                  placeId);
                alloc__21260;
            }))
            , reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__18)))au_edu_anu_mm_FastMultipoleMethod__closure__18(uListArray))),
            ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 756 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long i__21568max__52418 = (((x10_long)(::x10aux::nullCheck(uListArray)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__52419;
            for (i__52419 = ((x10_long)0ll); ((i__52419) <= (i__21568max__52418));
                 i__52419 = ((i__52419) + (((x10_long)1ll))))
            {
                x10_long i__52420 = i__52419;
                
                //#line 757 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::x10aux::nullCheck(myLET)->setAtomDataForOctant(
                  ::x10aux::nullCheck(uListArray)->x10::lang::Rail< x10_uint >::__apply(
                    i__52420), atomsForPlace->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                 i__52420));
            }
        }
        
    }
    
    // captured environment
    ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>* placeEntry;
    ::au::edu::anu::mm::LET* myLET;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeEntry);
        buf.write(this->myLET);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_FastMultipoleMethod__closure__17* storage = ::x10aux::alloc_z<au_edu_anu_mm_FastMultipoleMethod__closure__17>();
        buf.record_reference(storage);
        ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>* that_placeEntry = buf.read< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>*>();
        ::au::edu::anu::mm::LET* that_myLET = buf.read< ::au::edu::anu::mm::LET*>();
        au_edu_anu_mm_FastMultipoleMethod__closure__17* this_ = new (storage) au_edu_anu_mm_FastMultipoleMethod__closure__17(that_placeEntry, that_myLET);
        return this_;
    }
    
    au_edu_anu_mm_FastMultipoleMethod__closure__17(::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>* placeEntry, ::au::edu::anu::mm::LET* myLET) : placeEntry(placeEntry), myLET(myLET) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10:751-759";
    }

};

#endif // AU_EDU_ANU_MM_FASTMULTIPOLEMETHOD__CLOSURE__17_CLOSURE

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/** Estimated density per lowest-level box */

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/** The maximum number of levels in the octree. */

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/** The number of lowest level octants along one side of the cube. */

//#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/**
     * The side length of the cube. 
     * To ensure balanced rounding errors within the multipole and local 
     * calculations, all force/energy calculations are performed within 
     * an origin-centred cube.
     */

//#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/** The number of terms to use in the multipole and local expansions. */

//#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/** The well-separatedness parameter ws. */

//#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
/** Verbose logging */

//#line 68 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
::au::edu::anu::mm::FmmLocalData* au::edu::anu::mm::FastMultipoleMethod::FMGL(localData);
void au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__do_init)() {
    FMGL(localData__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::mm::FastMultipoleMethod.localData");
    ::au::edu::anu::mm::FmmLocalData* __var7__ = ::au::edu::anu::mm::FmmLocalData::_make();
    FMGL(localData) = __var7__;
    FMGL(localData__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(localData__status), &FMGL(localData__do_init), &FMGL(localData__exception), "au::edu::anu::mm::FastMultipoleMethod.localData");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__status);
::x10::lang::CheckedThrowable* au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__exception);


//#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::_constructor(x10_double density,
                                                         x10_int dMax, x10_int numTerms,
                                                         x10_int ws,
                                                         x10_double size) {
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    (this)->::au::edu::anu::mm::FastMultipoleMethod::_constructor(
      density, dMax, numTerms, ws, size, false);
    
}
::au::edu::anu::mm::FastMultipoleMethod* au::edu::anu::mm::FastMultipoleMethod::_make(
  x10_double density, x10_int dMax, x10_int numTerms, x10_int ws,
  x10_double size) {
    ::au::edu::anu::mm::FastMultipoleMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FastMultipoleMethod>()) ::au::edu::anu::mm::FastMultipoleMethod();
    this_->_constructor(density, dMax, numTerms, ws, size);
    return this_;
}



//#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::_constructor(
  x10_double density, x10_int dMax, x10_int numTerms, x10_int ws,
  x10_double size, x10_boolean verbose) {
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FastMultipoleMethod* this__52283 =
      this;
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(density) = ::x10::lang::DoubleNatives::toInt(density);
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(dMax) = ((x10_ubyte) (dMax));
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_int lowestLevelDim = (__extension__ ({
        
        //#line 578 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int i__26550 = dMax;
        ((((x10_int)1)) << (0x1f & (x10_int)(((x10_long)(i__26550)))));
    }))
    ;
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(lowestLevelDim) = lowestLevelDim;
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(numTerms) = numTerms;
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(ws) = ws;
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(size) = size;
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->FMGL(verbose) = verbose;
}
::au::edu::anu::mm::FastMultipoleMethod* au::edu::anu::mm::FastMultipoleMethod::_make(
  x10_double density, x10_int dMax, x10_int numTerms, x10_int ws,
  x10_double size, x10_boolean verbose) {
    ::au::edu::anu::mm::FastMultipoleMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FastMultipoleMethod>()) ::au::edu::anu::mm::FastMultipoleMethod();
    this_->_constructor(density, dMax, numTerms, ws, size,
    verbose);
    return this_;
}



//#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
x10_double au::edu::anu::mm::FastMultipoleMethod::calculateEnergy(
  ) {
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double totalEnergy;
    {
        ::x10::lang::FinishState* fs__52454 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__SumReducer alloc__21244 =
                                                                                                                 
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__SumReducer::_alloc();
                                                                                                               alloc__21244;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__26554 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__26554)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__26554;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____52452;
                        for (__lowerer__var__1____52452 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____52452));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____52452));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__1)))au_edu_anu_mm_FastMultipoleMethod__closure__1(this, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc9;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        totalEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                        fs__52454);
    }
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    return totalEnergy;
    
}

//#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
x10_double au::edu::anu::mm::FastMultipoleMethod::calculateEnergyLocal(
  ) {
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::util::Timer* timer = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer);
    
    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)0ll));
    {
        
        //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52460 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__3)))au_edu_anu_mm_FastMultipoleMethod__closure__3(this))));
                
                //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                this->upwardPass();
                
                //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                this->multipolesToLocal();
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            {
                ::x10::lang::CheckedThrowable* ct__52458 =
                  __exc11;
                {
                    ::x10::lang::Runtime::pushException(ct__52458);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52460);
    }
    
    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double potential = this->downwardPass();
    
    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
    
    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    if (this->FMGL(verbose)) {
        
        //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72814),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Place::_make(::x10aux::here)->FMGL(id)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (timer->au::edu::anu::util::Timer::mean(
                                                                                                                           ((x10_long)1ll))))) / (1.0E9))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (timer->au::edu::anu::util::Timer::mean(
                                                                                                                           ((x10_long)2ll))))) / (1.0E9))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (timer->au::edu::anu::util::Timer::mean(
                                                                                                                           ((x10_long)3ll))))) / (1.0E9))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (timer->au::edu::anu::util::Timer::mean(
                                                                                                                           ((x10_long)4ll))))) / (1.0E9))));
    }
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    return ((0.5) * (potential));
    
}

//#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::reduceMaxTimes(
  ) {
    {
        
        //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52475 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__26556 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__26556)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__26556;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____52472;
                        for (__lowerer__var__1____52472 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____52472));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____52472));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__4)))au_edu_anu_mm_FastMultipoleMethod__closure__4(__lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc13) {
            {
                ::x10::lang::CheckedThrowable* ct__52473 =
                  __exc13;
                {
                    ::x10::lang::Runtime::pushException(ct__52473);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52475);
    }
}

//#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::printRMSErrors(
  ) {
    
    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>* leafOctants =
      ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(leafOctants);
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* plm =
      ::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::getWorkerLocal())->FMGL(plm);
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double mseForce = 0.0;
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double normForce = 0.0;
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double msePot = 0.0;
    
    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double normPot = 0.0;
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double minForce = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double maxForce = 0.0;
    
    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double minPot = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double maxPot = 0.0;
    
    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>* leafOctant__21270;
        for (leafOctant__21270 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>*>(leafOctants->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::hasNext(::x10aux::nullCheck(leafOctant__21270));
             ) {
            ::au::edu::anu::mm::LeafOctant* leafOctant = ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::next(::x10aux::nullCheck(leafOctant__21270));
            
            //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* atoms =
              ::x10aux::nullCheck(leafOctant)->FMGL(atoms);
            
            //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            {
                ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>* atomI__21268;
                for (atomI__21268 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>*>(::x10aux::nullCheck(atoms)->iterator());
                     ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::hasNext(::x10aux::nullCheck(atomI__21268));
                     ) {
                    ::au::edu::anu::chem::mm::MMAtom* atomI =
                      ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::next(::x10aux::nullCheck(atomI__21268));
                    
                    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10x::vector::Vector3d force = ::x10aux::nullCheck(atomI)->FMGL(force);
                    
                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10x::vector::Vector3d directForce =
                      ::x10x::vector::Vector3d::FMGL(NULL__get)();
                    
                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_double directPotential = 0.0;
                    
                    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10x::vector::Point3d boxCentre = ::x10aux::nullCheck(leafOctant)->getCentre(
                                                          this->FMGL(size));
                    
                    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10x::vector::Vector3d locationWithinBox =
                      (__extension__ ({
                        ::x10x::vector::Point3d this__44712 =
                          ::x10aux::nullCheck(atomI)->FMGL(centre);
                        
                        //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d b__44710 =
                          boxCentre;
                        (__extension__ ({
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Vector3d alloc__44711 =
                               ::x10x::vector::Vector3d::_alloc();
                            
                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double i__52284 = ((this__44712->FMGL(i)) - (b__44710->FMGL(i)));
                            x10_double j__52285 = ((this__44712->FMGL(j)) - (b__44710->FMGL(j)));
                            x10_double k__52286 = ((this__44712->FMGL(k)) - (b__44710->FMGL(k)));
                            
                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            alloc__44711->FMGL(i) = i__52284;
                            alloc__44711->FMGL(j) = j__52285;
                            alloc__44711->FMGL(k) = k__52286;
                            alloc__44711;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_double potential = ::x10aux::nullCheck(::x10aux::nullCheck(leafOctant)->FMGL(localExp))->calculatePotentialAndForces(
                                             atomI, locationWithinBox,
                                             plm);
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_double nonWsPotential = 0.0;
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    {
                        ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>* atomJ__21262;
                        for (atomJ__21262 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>*>(::x10aux::nullCheck(atoms)->iterator());
                             ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::hasNext(::x10aux::nullCheck(atomJ__21262));
                             ) {
                            ::au::edu::anu::chem::mm::MMAtom* atomJ =
                              ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::next(::x10aux::nullCheck(atomJ__21262));
                            
                            //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            if ((!::x10aux::struct_equals(atomI,
                                                          atomJ)))
                            {
                                
                                //#line 180 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                ::x10x::vector::Vector3d rVec =
                                  (__extension__ ({
                                    ::x10x::vector::Point3d this__47317 =
                                      ::x10aux::nullCheck(atomJ)->FMGL(centre);
                                    
                                    //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Point3d that__47316 =
                                      ::x10aux::nullCheck(atomI)->FMGL(centre);
                                    (__extension__ ({
                                        
                                        //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                        ::x10x::vector::Point3d b__47318 =
                                          that__47316;
                                        (__extension__ ({
                                            
                                            //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                            ::x10x::vector::Vector3d alloc__47319 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__52287 =
                                              ((this__47317->FMGL(i)) - (b__47318->FMGL(i)));
                                            x10_double j__52288 =
                                              ((this__47317->FMGL(j)) - (b__47318->FMGL(j)));
                                            x10_double k__52289 =
                                              ((this__47317->FMGL(k)) - (b__47318->FMGL(k)));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__47319->FMGL(i) =
                                              i__52287;
                                            alloc__47319->FMGL(j) =
                                              j__52288;
                                            alloc__47319->FMGL(k) =
                                              k__52289;
                                            alloc__47319;
                                        }))
                                        ;
                                    }))
                                    ;
                                }))
                                ;
                                
                                //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                x10_double invR2 = ((1.0) / (((((((rVec->FMGL(i)) * (rVec->FMGL(i)))) + (((rVec->FMGL(j)) * (rVec->FMGL(j)))))) + (((rVec->FMGL(k)) * (rVec->FMGL(k)))))));
                                
                                //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                x10_double invR = ::x10::lang::MathNatives::sqrt(invR2);
                                
                                //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                x10_double e = ((((::x10aux::nullCheck(atomI)->FMGL(charge)) * (::x10aux::nullCheck(atomJ)->FMGL(charge)))) * (invR));
                                
                                //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                directPotential = ((directPotential) + (e));
                                
                                //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                potential = ((potential) + (e));
                                
                                //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                nonWsPotential = ((nonWsPotential) + (e));
                                
                                //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                ::x10x::vector::Vector3d pairForce =
                                  (__extension__ ({
                                    
                                    //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double x__47326 =
                                      ((e) * (invR2));
                                    ::x10x::vector::Vector3d y__47327 =
                                      rVec;
                                    (__extension__ ({
                                        
                                        //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double that__47328 =
                                          x__47326;
                                        (__extension__ ({
                                            
                                            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double c__47329 =
                                              that__47328;
                                            (__extension__ ({
                                                
                                                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                ::x10x::vector::Vector3d alloc__47330 =
                                                   ::x10x::vector::Vector3d::_alloc();
                                                
                                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double i__52290 =
                                                  ((y__47327->FMGL(i)) * (c__47329));
                                                x10_double j__52291 =
                                                  ((y__47327->FMGL(j)) * (c__47329));
                                                x10_double k__52292 =
                                                  ((y__47327->FMGL(k)) * (c__47329));
                                                
                                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                alloc__47330->FMGL(i) =
                                                  i__52290;
                                                alloc__47330->FMGL(j) =
                                                  j__52291;
                                                alloc__47330->FMGL(k) =
                                                  k__52292;
                                                alloc__47330;
                                            }))
                                            ;
                                        }))
                                        ;
                                    }))
                                    ;
                                }))
                                ;
                                
                                //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                directForce = (__extension__ ({
                                    
                                    //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d that__47337 =
                                      pairForce;
                                    (__extension__ ({
                                        
                                        //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        ::x10x::vector::Vector3d b__47338 =
                                          that__47337;
                                        (__extension__ ({
                                            
                                            //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d alloc__47339 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__52293 =
                                              ((directForce->FMGL(i)) + (b__47338->FMGL(i)));
                                            x10_double j__52294 =
                                              ((directForce->FMGL(j)) + (b__47338->FMGL(j)));
                                            x10_double k__52295 =
                                              ((directForce->FMGL(k)) + (b__47338->FMGL(k)));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__47339->FMGL(i) =
                                              i__52293;
                                            alloc__47339->FMGL(j) =
                                              j__52294;
                                            alloc__47339->FMGL(k) =
                                              k__52295;
                                            alloc__47339;
                                        }))
                                        ;
                                    }))
                                    ;
                                }))
                                ;
                            }
                            
                        }
                    }
                    
                    //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    {
                        ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>* leafOctant2__21266;
                        for (leafOctant2__21266 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>*>(leafOctants->iterator());
                             ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::hasNext(::x10aux::nullCheck(leafOctant2__21266));
                             ) {
                            ::au::edu::anu::mm::LeafOctant* leafOctant2 =
                              ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::next(::x10aux::nullCheck(leafOctant2__21266));
                            
                            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            if ((!::x10aux::struct_equals(leafOctant2,
                                                          leafOctant)))
                            {
                                
                                //#line 194 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                {
                                    ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>* atomJ__21264;
                                    for (atomJ__21264 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>*>(::x10aux::nullCheck(::x10aux::nullCheck(leafOctant2)->FMGL(atoms))->iterator());
                                         ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::hasNext(::x10aux::nullCheck(atomJ__21264));
                                         ) {
                                        ::au::edu::anu::chem::mm::MMAtom* atomJ =
                                          ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::next(::x10aux::nullCheck(atomJ__21264));
                                        
                                        //#line 195 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        ::x10x::vector::Vector3d rVec =
                                          (__extension__ ({
                                            ::x10x::vector::Point3d this__47347 =
                                              ::x10aux::nullCheck(atomJ)->FMGL(centre);
                                            
                                            //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                            ::x10x::vector::Point3d that__47346 =
                                              ::x10aux::nullCheck(atomI)->FMGL(centre);
                                            (__extension__ ({
                                                
                                                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                ::x10x::vector::Point3d b__47348 =
                                                  that__47346;
                                                (__extension__ ({
                                                    
                                                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Vector3d alloc__47349 =
                                                       ::x10x::vector::Vector3d::_alloc();
                                                    
                                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    x10_double i__52296 =
                                                      ((this__47347->FMGL(i)) - (b__47348->FMGL(i)));
                                                    x10_double j__52297 =
                                                      ((this__47347->FMGL(j)) - (b__47348->FMGL(j)));
                                                    x10_double k__52298 =
                                                      ((this__47347->FMGL(k)) - (b__47348->FMGL(k)));
                                                    
                                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    alloc__47349->FMGL(i) =
                                                      i__52296;
                                                    alloc__47349->FMGL(j) =
                                                      j__52297;
                                                    alloc__47349->FMGL(k) =
                                                      k__52298;
                                                    alloc__47349;
                                                }))
                                                ;
                                            }))
                                            ;
                                        }))
                                        ;
                                        
                                        //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        x10_double invR2 =
                                          ((1.0) / (((((((rVec->FMGL(i)) * (rVec->FMGL(i)))) + (((rVec->FMGL(j)) * (rVec->FMGL(j)))))) + (((rVec->FMGL(k)) * (rVec->FMGL(k)))))));
                                        
                                        //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        x10_double invR =
                                          ::x10::lang::MathNatives::sqrt(invR2);
                                        
                                        //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        x10_double e = ((((::x10aux::nullCheck(atomI)->FMGL(charge)) * (::x10aux::nullCheck(atomJ)->FMGL(charge)))) * (invR));
                                        
                                        //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        directPotential =
                                          ((directPotential) + (e));
                                        
                                        //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        ::x10x::vector::Vector3d pairForce =
                                          (__extension__ ({
                                            
                                            //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double x__47356 =
                                              ((e) * (invR2));
                                            ::x10x::vector::Vector3d y__47357 =
                                              rVec;
                                            (__extension__ ({
                                                
                                                //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double that__47358 =
                                                  x__47356;
                                                (__extension__ ({
                                                    
                                                    //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    x10_double c__47359 =
                                                      that__47358;
                                                    (__extension__ ({
                                                        
                                                        //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                        ::x10x::vector::Vector3d alloc__47360 =
                                                          
                                                        ::x10x::vector::Vector3d::_alloc();
                                                        
                                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                        x10_double i__52299 =
                                                          ((y__47357->FMGL(i)) * (c__47359));
                                                        x10_double j__52300 =
                                                          ((y__47357->FMGL(j)) * (c__47359));
                                                        x10_double k__52301 =
                                                          ((y__47357->FMGL(k)) * (c__47359));
                                                        
                                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                        alloc__47360->FMGL(i) =
                                                          i__52299;
                                                        alloc__47360->FMGL(j) =
                                                          j__52300;
                                                        alloc__47360->FMGL(k) =
                                                          k__52301;
                                                        alloc__47360;
                                                    }))
                                                    ;
                                                }))
                                                ;
                                            }))
                                            ;
                                        }))
                                        ;
                                        
                                        //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        directForce = (__extension__ ({
                                            
                                            //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d that__47367 =
                                              pairForce;
                                            (__extension__ ({
                                                
                                                //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                ::x10x::vector::Vector3d b__47368 =
                                                  that__47367;
                                                (__extension__ ({
                                                    
                                                    //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    ::x10x::vector::Vector3d alloc__47369 =
                                                       ::x10x::vector::Vector3d::_alloc();
                                                    
                                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    x10_double i__52302 =
                                                      ((directForce->FMGL(i)) + (b__47368->FMGL(i)));
                                                    x10_double j__52303 =
                                                      ((directForce->FMGL(j)) + (b__47368->FMGL(j)));
                                                    x10_double k__52304 =
                                                      ((directForce->FMGL(k)) + (b__47368->FMGL(k)));
                                                    
                                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    alloc__47369->FMGL(i) =
                                                      i__52302;
                                                    alloc__47369->FMGL(j) =
                                                      j__52303;
                                                    alloc__47369->FMGL(k) =
                                                      k__52304;
                                                    alloc__47369;
                                                }))
                                                ;
                                            }))
                                            ;
                                        }))
                                        ;
                                        
                                        //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        if (((((((x10_long)(((x10_int)::labs(((((x10_int)(::x10aux::nullCheck(leafOctant2)->FMGL(id)->FMGL(x)))) - (((x10_int)(::x10aux::nullCheck(leafOctant)->FMGL(id)->FMGL(x)))))))))) <= (((x10_long)1ll))) &&
                                            ((((x10_long)(((x10_int)::labs(((((x10_int)(::x10aux::nullCheck(leafOctant2)->FMGL(id)->FMGL(y)))) - (((x10_int)(::x10aux::nullCheck(leafOctant)->FMGL(id)->FMGL(y)))))))))) <= (((x10_long)1ll)))) &&
                                            ((((x10_long)(((x10_int)::labs(((((x10_int)(::x10aux::nullCheck(leafOctant2)->FMGL(id)->FMGL(z)))) - (((x10_int)(::x10aux::nullCheck(leafOctant)->FMGL(id)->FMGL(z)))))))))) <= (((x10_long)1ll)))))
                                        {
                                            
                                            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                            potential = ((potential) + (e));
                                            
                                            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                            nonWsPotential =
                                              ((nonWsPotential) + (e));
                                        }
                                        
                                    }
                                }
                                
                            }
                            
                        }
                    }
                    
                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_double forceMag = ((((((directForce->FMGL(i)) * (directForce->FMGL(i)))) + (((directForce->FMGL(j)) * (directForce->FMGL(j)))))) + (((directForce->FMGL(k)) * (directForce->FMGL(k)))));
                    
                    //#line 214 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    minForce = ::x10::lang::MathNatives::fmin(forceMag,minForce);
                    
                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    maxForce = ::x10::lang::MathNatives::fmax(forceMag,maxForce);
                    
                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    mseForce = ((mseForce) + ((__extension__ ({
                        ::x10x::vector::Vector3d this__47386 =
                          (__extension__ ({
                            
                            //#line 44 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d x__47376 =
                              force;
                            ::x10x::vector::Vector3d y__47377 =
                              directForce;
                            (__extension__ ({
                                
                                //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d b__47378 =
                                  y__47377;
                                (__extension__ ({
                                    
                                    //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d alloc__47379 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__52305 =
                                      ((x__47376->FMGL(i)) - (b__47378->FMGL(i)));
                                    x10_double j__52306 =
                                      ((x__47376->FMGL(j)) - (b__47378->FMGL(j)));
                                    x10_double k__52307 =
                                      ((x__47376->FMGL(k)) - (b__47378->FMGL(k)));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__47379->FMGL(i) =
                                      i__52305;
                                    alloc__47379->FMGL(j) =
                                      j__52306;
                                    alloc__47379->FMGL(k) =
                                      k__52307;
                                    alloc__47379;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                        ((((((this__47386->FMGL(i)) * (this__47386->FMGL(i)))) + (((this__47386->FMGL(j)) * (this__47386->FMGL(j)))))) + (((this__47386->FMGL(k)) * (this__47386->FMGL(k)))));
                    }))
                    ));
                    
                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    normForce = ((normForce) + (forceMag));
                    
                    //#line 221 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_double direct = ((directPotential) / (::x10aux::nullCheck(atomI)->FMGL(charge)));
                    
                    //#line 222 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_double fmm = ((potential) / (::x10aux::nullCheck(atomI)->FMGL(charge)));
                    
                    //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    minPot = ::x10::lang::MathNatives::fmin(direct,minPot);
                    
                    //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    maxPot = ::x10::lang::MathNatives::fmax(direct,maxPot);
                    
                    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    msePot = ((msePot) + (((((fmm) - (direct))) * (((fmm) - (direct))))));
                    
                    //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    normPot = ((normPot) + (((direct) * (direct))));
                }
            }
            
        }
    }
    
    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72815),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::MathNatives::sqrt(((msePot) / (normPot)))));
    
    //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72816),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::MathNatives::sqrt(((mseForce) / (normForce)))));
}

//#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::upwardPass() {
    
    //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)2ll));
    {
        
        //#line 243 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52480 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* topLevelOctant__21272;
                    for (topLevelOctant__21272 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(local->FMGL(topLevelOctants)->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(topLevelOctant__21272));
                         ) {
                        ::au::edu::anu::mm::Octant* topLevelOctant =
                          ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(topLevelOctant__21272));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__6)))au_edu_anu_mm_FastMultipoleMethod__closure__6(topLevelOctant))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc16) {
            {
                ::x10::lang::CheckedThrowable* ct__52478 =
                  __exc16;
                {
                    ::x10::lang::Runtime::pushException(ct__52478);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52480);
    }
    
    //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
    
    //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)2ll));
}

//#line 251 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::multipolesToLocal(
  ) {
    
    //#line 252 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)3ll));
    {
        
        //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52485 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* topLevelOctant__21274;
                    for (topLevelOctant__21274 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(local->FMGL(topLevelOctants)->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(topLevelOctant__21274));
                         ) {
                        ::au::edu::anu::mm::Octant* topLevelOctant =
                          ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(topLevelOctant__21274));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__7)))au_edu_anu_mm_FastMultipoleMethod__closure__7(topLevelOctant))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc18) {
            {
                ::x10::lang::CheckedThrowable* ct__52483 =
                  __exc18;
                {
                    ::x10::lang::Runtime::pushException(ct__52483);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52485);
    }
    
    //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)3ll));
}

//#line 261 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
x10_double au::edu::anu::mm::FastMultipoleMethod::downwardPass(
  ) {
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)4ll));
    
    //#line 266 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double farField;
    {
        ::x10::lang::FinishState* fs__52492 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__SumReducer alloc__21245 =
                                                                                                                 
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__SumReducer::_alloc();
                                                                                                               alloc__21245;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                
                //#line 267 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                {
                    ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* topLevelOctant__21276;
                    for (topLevelOctant__21276 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(local->FMGL(topLevelOctants)->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(topLevelOctant__21276));
                         ) {
                        ::au::edu::anu::mm::Octant* topLevelOctant =
                          ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(topLevelOctant__21276));
                        
                        //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        if (((!::x10aux::struct_equals(topLevelOctant,
                                                       reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(topLevelOctant)->FMGL(id)->FMGL(level),
                                                     ((x10_ubyte)2)))))
                        {
                            ::x10::lang::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__8)))au_edu_anu_mm_FastMultipoleMethod__closure__8(topLevelOctant))));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc20) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc20;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        farField = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                     fs__52492);
    }
    
    //#line 273 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)4ll));
    
    //#line 274 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    return farField;
    
}

//#line 277 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::initialAssignment(
  x10_int numAtoms, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms) {
    {
        
        //#line 278 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52508 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(atoms)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____52505;
                        for (__lowerer__var__1____52505 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____52505));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____52505));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__9)))au_edu_anu_mm_FastMultipoleMethod__closure__9(this, numAtoms, atoms, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc22) {
            {
                ::x10::lang::CheckedThrowable* ct__52506 =
                  __exc22;
                {
                    ::x10::lang::Runtime::pushException(ct__52506);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52508);
    }
}

//#line 302 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::estimateCostLocal(
  x10_int numAtoms) {
    
    //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_long >* estimate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 304 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long uListEstimate = ::au::edu::anu::mm::LeafOctant::estimateUListCost(
                               this->FMGL(density));
    
    //#line 305 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long vListEstimate = ::au::edu::anu::mm::Octant::estimateVListCost(
                               this->FMGL(numTerms));
    
    //#line 307 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    estimate->x10::lang::Rail< x10_long >::__set(((x10_long)0ll),
                                                 uListEstimate);
    
    //#line 308 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    estimate->x10::lang::Rail< x10_long >::__set(((x10_long)1ll),
                                                 vListEstimate);
    
    //#line 310 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_long >(
      estimate, ((x10_long)0ll), estimate, ((x10_long)0ll),
      ((x10_long)2ll), ((x10_int)0));
    
    //#line 312 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_long >* cost = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(cost);
    
    //#line 313 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21296max__52317 = ((((x10_long)2ll)) - (((x10_long)1ll)));
    {
        x10_long i__52318;
        for (i__52318 = ((x10_long)0ll); ((i__52318) <= (i__21296max__52317));
             i__52318 = ((i__52318) + (((x10_long)1ll))))
        {
            x10_long i__52319 = i__52318;
            
            //#line 314 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(cost)->x10::lang::Rail< x10_long >::__set(
              i__52319, ((estimate->x10::lang::Rail< x10_long >::__apply(
                            i__52319)) / ::x10aux::zeroCheck(((x10_long)::x10aux::num_hosts))));
        }
    }
    
    //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    if ((this->FMGL(verbose) && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                                         ::x10::lang::Place::FMGL(FIRST_PLACE__get)()))))
    {
        
        //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72817), ::x10aux::nullCheck(cost)->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                            ((x10_long)0ll)))));
        
        //#line 318 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72818), ::x10aux::nullCheck(cost)->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                            ((x10_long)1ll)))));
    }
    
}

//#line 322 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::countOctants(
  ) {
    
    //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_int totalOctants;
    {
        ::x10::lang::FinishState* fs__52525 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_int >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_int>*>((__extension__ ({
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer alloc__21248 =
                                                                                                                 
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_alloc();
                                                                                                               alloc__21248;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 324 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__50761 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__50761)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__50761;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____52523;
                        for (__lowerer__var__1____52523 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____52523));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____52523));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__12)))au_edu_anu_mm_FastMultipoleMethod__closure__12(__lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc25) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc25;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        totalOctants = ::x10::lang::Runtime::stopCollectingFinish< x10_int >(
                         fs__52525);
    }
    
    //#line 332 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_int totalGhostOctants;
    {
        ::x10::lang::FinishState* fs__52543 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_int >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_int>*>((__extension__ ({
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer alloc__21249 =
                                                                                                                 
                                                                                                               ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_alloc();
                                                                                                               alloc__21249;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 333 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__1__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__50766 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__50766)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__50766;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__2____52541;
                        for (__lowerer__var__2____52541 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__1__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__2____52541));
                             ) {
                            ::x10::lang::Place __lowerer__var__2__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__2____52541));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__2__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__14)))au_edu_anu_mm_FastMultipoleMethod__closure__14(__lowerer__var__1__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc26) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  __exc26;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__1__);
                }
            }
        }
        totalGhostOctants = ::x10::lang::Runtime::stopCollectingFinish< x10_int >(
                              fs__52543);
    }
    
    //#line 341 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72819), totalOctants), (&::au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72820)), totalGhostOctants)));
}

//#line 349 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::reassignAtoms(
  x10_long step) {
    
    //#line 350 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)5ll));
    
    //#line 352 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* localAtoms =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> > >()) ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >());
    (localAtoms)->::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::_constructor();
    
    //#line 353 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>* leafOctants =
      ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(leafOctants);
    
    //#line 354 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double invSideLength = ((((x10_double) (this->FMGL(lowestLevelDim)))) / (this->FMGL(size)));
    
    //#line 355 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_double offset = ((((x10_double) (this->FMGL(lowestLevelDim)))) / (2.0));
    
    //#line 356 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long numAtoms = ((x10_long)0ll);
    
    //#line 357 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>* leafOctant__21320;
        for (leafOctant__21320 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>*>(leafOctants->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::hasNext(::x10aux::nullCheck(leafOctant__21320));
             ) {
            ::au::edu::anu::mm::LeafOctant* leafOctant = ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::next(::x10aux::nullCheck(leafOctant__21320));
            
            //#line 358 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            {
                ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>* atom__21318;
                for (atom__21318 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>*>(::x10aux::nullCheck(::x10aux::nullCheck(leafOctant)->FMGL(atoms))->iterator());
                     ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::hasNext(::x10aux::nullCheck(atom__21318));
                     ) {
                    ::au::edu::anu::chem::mm::MMAtom* atom =
                      ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::next(::x10aux::nullCheck(atom__21318));
                    
                    //#line 359 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    if ((!::x10aux::struct_equals(atom, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                    {
                        
                        //#line 360 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        numAtoms = ((numAtoms) + (((x10_long)1ll)));
                        
                        //#line 361 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        x10_uint mortonId = ::au::edu::anu::mm::OctantId::getLeafMortonId(
                                              ::x10aux::nullCheck(atom)->FMGL(centre),
                                              invSideLength,
                                              offset);
                        
                        //#line 362 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        localAtoms->add((__extension__ ({
                                            ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> alloc__21250 =
                                               ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*>::_alloc();
                                            
                                            //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                                            x10_uint first__52320 =
                                              mortonId;
                                            ::au::edu::anu::chem::mm::MMAtom* second__52321 =
                                              atom;
                                            
                                            //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                                            alloc__21250->FMGL(first) =
                                              first__52320;
                                            
                                            //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                                            alloc__21250->FMGL(second) =
                                              second__52321;
                                            alloc__21250;
                                        }))
                                        );
                    }
                    
                }
            }
            
        }
    }
    
    //#line 366 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->assignAtomsToOctantsLocal(localAtoms->toRail());
    
    //#line 368 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
    
    //#line 369 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::stop(
      ((x10_long)5ll));
}

//#line 377 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::assignAtomsToOctantsLocal(
  ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* localAtoms) {
    
    //#line 379 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantAtoms =
      this->sortAtoms(localAtoms);
    
    //#line 381 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->determineLoadBalanceLocal(octantAtoms);
    
    //#line 383 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->redistributeOctantsLocal(octantAtoms);
    
    //#line 387 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->createParentOctantsLocal();
    
    //#line 389 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    this->createLET();
}

//#line 392 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >*
  au::edu::anu::mm::FastMultipoleMethod::sortAtoms(::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* localAtoms) {
    
    //#line 393 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 394 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::util::Timer* timer = local->FMGL(timer);
    
    //#line 395 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)6ll));
    
    //#line 396 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(octants)->clear();
    
    //#line 398 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_int numBoxes = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::pow(8.0,((((x10_double) (this->FMGL(dMax)))) / (1.0))));
    
    //#line 401 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_long >* octantLoads = local->FMGL(octantLoads);
    
    //#line 402 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::clear();
    
    //#line 403 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long filled = ((x10_long)0ll);
    
    //#line 404 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21322max__52343 = (((x10_long)(::x10aux::nullCheck(localAtoms)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__52344;
        for (i__52344 = ((x10_long)0ll); ((i__52344) <= (i__21322max__52343));
             i__52344 = ((i__52344) + (((x10_long)1ll))))
        {
            x10_long i__52345 = i__52344;
            
            //#line 405 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_int leafMortonId__52322 = ((x10_int)(::x10aux::nullCheck(localAtoms)->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::__apply(
                                                       i__52345)->FMGL(first)));
            
            //#line 406 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            if ((::x10aux::struct_equals((((__extension__ ({
                                             ::x10::lang::Rail< x10_long >* a__52323 =
                                               octantLoads;
                                             x10_long i__52324 =
                                               ((x10_long)(leafMortonId__52322));
                                             x10_long r__52325 =
                                               ((::x10aux::nullCheck(a__52323)->x10::lang::Rail< x10_long >::__apply(
                                                   i__52324)) + (((x10_long)1ll)));
                                             ::x10aux::nullCheck(a__52323)->x10::lang::Rail< x10_long >::__set(
                                               i__52324, r__52325);
                                         }))
                                         ) - (((x10_long)1ll))),
                                         ((x10_long)0ll))))
            {
                filled = ((filled) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 410 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_long >* v__52346 = octantLoads;
    
    //#line 412 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21340max__52328 = (((x10_long)(::x10aux::nullCheck(v__52346)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__52329;
        for (i__52329 = ((x10_long)1ll); ((i__52329) <= (i__21340max__52328));
             i__52329 = ((i__52329) + (((x10_long)1ll))))
        {
            x10_long i__52330 = i__52329;
            
            //#line 413 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(v__52346)->x10::lang::Rail< x10_long >::__set(
              i__52330, (__extension__ ({
                  
                  //#line 416 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                  x10_long a__52326 = ::x10aux::nullCheck(v__52346)->x10::lang::Rail< x10_long >::__apply(
                                        ((i__52330) - (((x10_long)1ll))));
                  x10_long b__52327 = ::x10aux::nullCheck(v__52346)->x10::lang::Rail< x10_long >::__apply(
                                        i__52330);
                  ((a__52326) + (b__52327));
              }))
              );
        }
    }
    
    //#line 418 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* sortedAtoms =
      ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::_make(((x10_long)(((x10_int) (::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           (((x10_long)(::x10aux::nullCheck(octantLoads)->FMGL(size))) - (((x10_long)1ll)))))))));
    
    //#line 419 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        x10_long i;
        for (i = (((x10_long)(::x10aux::nullCheck(localAtoms)->FMGL(size))) - (((x10_long)1ll)));
             ((i) >= (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 420 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> atom =
              ::x10aux::nullCheck(localAtoms)->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::__apply(
                i);
            
            //#line 421 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_int leafMortonId = ((x10_int)(atom->FMGL(first)));
            
            //#line 422 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_int idx = ((x10_int) ((__extension__ ({
                ::x10::lang::Rail< x10_long >* a__20739 =
                  octantLoads;
                x10_long i0__20740 = ((x10_long)(leafMortonId));
                x10_long r__20748 = ((::x10aux::nullCheck(a__20739)->x10::lang::Rail< x10_long >::__apply(
                                        i0__20740)) - (((x10_long)1ll)));
                ::x10aux::nullCheck(a__20739)->x10::lang::Rail< x10_long >::__set(
                  i0__20740, r__20748);
            }))
            ));
            
            //#line 423 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            sortedAtoms->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::__set(
              ((x10_long)(idx)), atom);
        }
    }
    
    //#line 427 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantAtoms =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> > >()) ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >());
    (octantAtoms)->::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >::_constructor(
      filled);
    
    //#line 428 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    if ((((x10_long)(::x10aux::nullCheck(sortedAtoms)->FMGL(size))) > (((x10_long)0ll))))
    {
        
        //#line 429 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_uint firstMortonId = sortedAtoms->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::__apply(
                                   ((x10_long)0ll))->FMGL(first);
        
        //#line 430 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> currentOctant =
           ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        x10_uint first__52336 = firstMortonId;
        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* second__52337 =
          (__extension__ ({
            
            //#line 430 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__52338 =
               (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
            (alloc__52338)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
              ((x10_long)(this->FMGL(density))));
            alloc__52338;
        }))
        ;
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        currentOctant->FMGL(first) = first__52336;
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        currentOctant->FMGL(second) = second__52337;
        
        //#line 431 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        octantAtoms->add(currentOctant);
        
        //#line 433 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >* rail__52339 =
          sortedAtoms;
        x10_long size__52340 = (x10_long)(::x10aux::nullCheck(rail__52339)->FMGL(size));
        {
            x10_long idx__52341;
            for (idx__52341 = ((x10_long)0ll); ((idx__52341) < (size__52340));
                 idx__52341 = ((idx__52341) + (((x10_long)1ll))))
            {
                ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> atom__52342 =
                  rail__52339->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::au::edu::anu::chem::mm::MMAtom*> >::__apply(
                    idx__52341);
                
                //#line 434 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                x10_uint leafMortonId__52334 = atom__52342->FMGL(first);
                
                //#line 436 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                if ((::x10aux::struct_equals(currentOctant->FMGL(first),
                                             leafMortonId__52334)))
                {
                 
                } else {
                    
                    //#line 440 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    currentOctant = (__extension__ ({
                        ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> alloc__52335 =
                           ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::_alloc();
                        
                        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                        x10_uint first__52331 = leafMortonId__52334;
                        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* second__52332 =
                          (__extension__ ({
                            
                            //#line 440 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__52333 =
                               (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
                            (alloc__52333)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
                              ((x10_long)(this->FMGL(density))));
                            alloc__52333;
                        }))
                        ;
                        
                        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                        alloc__52335->FMGL(first) = first__52331;
                        
                        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                        alloc__52335->FMGL(second) = second__52332;
                        alloc__52335;
                    }))
                    ;
                    
                    //#line 441 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    octantAtoms->add(currentOctant);
                }
                
                //#line 443 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::x10aux::nullCheck(currentOctant->FMGL(second))->add(
                  atom__52342->FMGL(second));
            }
        }
        
    }
    
    //#line 447 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)6ll));
    
    //#line 449 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    return octantAtoms;
    
}

//#line 452 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::determineLoadBalanceLocal(
  ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantAtoms) {
    
    //#line 453 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 454 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)7ll));
    
    //#line 455 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_long >* octantLoads = local->FMGL(octantLoads);
    
    //#line 456 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::clear();
    
    //#line 457 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octant__21383;
        for (octant__21383 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >*>(::x10aux::nullCheck(octantAtoms)->iterator());
             ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >::hasNext(::x10aux::nullCheck(octant__21383));
             ) {
            ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> octant =
              ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >::next(::x10aux::nullCheck(octant__21383));
            
            //#line 458 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_int leafMortonId = ((x10_int)(octant->FMGL(first)));
            
            //#line 459 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__set(
              ((x10_long)(leafMortonId)), ::x10aux::nullCheck(octant->FMGL(second))->size());
        }
    }
    
    //#line 461 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_long >(
      octantLoads, ((x10_long)0ll), octantLoads, ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(octantLoads)->FMGL(size)),
      ((x10_int)0));
    
    //#line 471 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long numAtoms = (__extension__ ({
        
        //#line 462 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< x10_long >* v__51697 = octantLoads;
        x10_long ret__51702;
        
        //#line 464 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long result__52352 = ((x10_long)0ll);
        
        //#line 465 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long i__21385max__52349 = (((x10_long)(::x10aux::nullCheck(v__51697)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__52350;
            for (i__52350 = ((x10_long)0ll); ((i__52350) <= (i__21385max__52349));
                 i__52350 = ((i__52350) + (((x10_long)1ll))))
            {
                x10_long i__52351 = i__52350;
                
                //#line 466 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                result__52352 = (__extension__ ({
                    
                    //#line 471 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_long a__52347 = result__52352;
                    x10_long b__52348 = ::x10aux::nullCheck(v__51697)->x10::lang::Rail< x10_long >::__apply(
                                          i__52351);
                    ((a__52347) + (b__52348));
                }))
                ;
            }
        }
        
        //#line 468 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ret__51702 = result__52352;
        ret__51702;
    }))
    ;
    
    //#line 472 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long uListCost = ::x10aux::nullCheck(local->FMGL(cost))->x10::lang::Rail< x10_long >::__apply(
                           ((x10_long)0ll));
    
    //#line 473 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long q = ((numAtoms) / ::x10aux::zeroCheck((x10_long)(::x10aux::nullCheck(octantLoads)->FMGL(size))));
    
    //#line 474 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long vListCost = ::x10aux::nullCheck(local->FMGL(cost))->x10::lang::Rail< x10_long >::__apply(
                           ((x10_long)1ll));
    
    //#line 476 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21403max__52365 = (((x10_long)(::x10aux::nullCheck(octantLoads)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__52366;
        for (i__52366 = ((x10_long)0ll); ((i__52366) <= (i__21403max__52365));
             i__52366 = ((i__52366) + (((x10_long)1ll))))
        {
            x10_long i__52367 = i__52366;
            
            //#line 477 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            if (((::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__apply(
                    i__52367)) > (((x10_long)0ll)))) {
                
                //#line 478 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                x10_uint leafMortonId__52353 = ((x10_uint) (i__52367));
                
                //#line 479 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                x10_uint mortonId__52354 = ((x10_uint) ((leafMortonId__52353) | (((x10_uint) ((((x10_uint) (this->FMGL(dMax)))) << (x10_int)(0x1f & (((x10_long)24ll))))))));
                
                //#line 480 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::au::edu::anu::mm::OctantId id__52355 = ::au::edu::anu::mm::OctantId::getFromMortonId(
                                                           mortonId__52354);
                
                //#line 483 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__set(
                  i__52367, ((((((((::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__apply(
                                      i__52367)) * (((x10_long)(::au::edu::anu::mm::LeafOctant::estimateUListSize(
                                                                  id__52355,
                                                                  this->FMGL(dMax))))))) * (q))) * (uListCost))) + (((((x10_long)(::au::edu::anu::mm::Octant::estimateVListSize(
                                                                                                                                    id__52355,
                                                                                                                                    this->FMGL(ws))))) * (vListCost)))));
            }
            
        }
    }
    
    //#line 489 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long total = (__extension__ ({
        
        //#line 462 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Rail< x10_long >* v__51715 = octantLoads;
        x10_long ret__51720;
        
        //#line 464 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long result__52361 = ((x10_long)0ll);
        
        //#line 465 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        x10_long i__21385max__52358 = (((x10_long)(::x10aux::nullCheck(v__51715)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__52359;
            for (i__52359 = ((x10_long)0ll); ((i__52359) <= (i__21385max__52358));
                 i__52359 = ((i__52359) + (((x10_long)1ll))))
            {
                x10_long i__52360 = i__52359;
                
                //#line 466 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                result__52361 = (__extension__ ({
                    
                    //#line 489 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_long a__52356 = result__52361;
                    x10_long b__52357 = ::x10aux::nullCheck(v__51715)->x10::lang::Rail< x10_long >::__apply(
                                          i__52360);
                    ((a__52356) + (b__52357));
                }))
                ;
            }
        }
        
        //#line 468 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ret__51720 = result__52361;
        ret__51720;
    }))
    ;
    
    //#line 490 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long numPlaces = ((x10_long)::x10aux::num_hosts);
    
    //#line 491 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long placeShare = ((total) / ::x10aux::zeroCheck(numPlaces));
    
    //#line 492 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long leftOver = ((total) % ::x10aux::zeroCheck(numPlaces));
    
    //#line 494 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_uint >* firstLeafOctant = local->FMGL(firstLeafOctant);
    
    //#line 495 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10aux::nullCheck(firstLeafOctant)->x10::lang::Rail< x10_uint >::__set(
      ((x10_long)0ll), ((x10_uint)0u));
    
    //#line 496 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_int i = ((x10_int)0);
    
    //#line 497 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21421max__52368 = numPlaces;
    {
        x10_long i__52369;
        for (i__52369 = ((x10_long)1ll); ((i__52369) <= (i__21421max__52368));
             i__52369 = ((i__52369) + (((x10_long)1ll))))
        {
            x10_long p__52370 = i__52369;
            
            //#line 498 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_long share__52362 = ((p__52370) <= (leftOver))
              ? (((placeShare) + (((x10_long)1ll)))) : (placeShare);
            
            //#line 499 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_long load__52363 = ((x10_long)0ll);
            
            //#line 500 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            while ((((load__52363) < (share__52362)) && ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(octantLoads)->FMGL(size))))))
            {
                
                //#line 501 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                load__52363 = ((load__52363) + (::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__apply(
                                                  ((x10_long)((__extension__ ({
                                                      x10_int pre__52364 =
                                                        i;
                                                      i =
                                                        ((i) + (((x10_int)1)));
                                                      pre__52364;
                                                  }))
                                                  )))));
                
                //#line 502 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                if (((load__52363) >= (share__52362))) {
                    
                    //#line 503 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    break;
                }
                
            }
            
            //#line 506 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(firstLeafOctant)->x10::lang::Rail< x10_uint >::__set(
              p__52370, ((x10_uint) (i)));
        }
    }
    
    //#line 514 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)7ll));
}

//#line 517 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::redistributeOctantsLocal(
  ::x10::util::ArrayList< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantAtoms) {
    
    //#line 518 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 519 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)8ll));
    
    //#line 520 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_uint >* firstLeafOctant = local->FMGL(firstLeafOctant);
    
    //#line 521 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_uint levelBytes = ((x10_uint) ((((x10_uint) (this->FMGL(dMax)))) << (x10_int)(0x1f & (((x10_long)24ll)))));
    {
        
        //#line 522 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52551 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    x10_long p;
                    for (p = ((::x10::lang::Place::_make(::x10aux::here)->FMGL(id)) + (((x10_long)1ll)));
                         ((!::x10aux::struct_equals(p, ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))) &&
                         ((::x10aux::nullCheck(octantAtoms)->size()) > (((x10_long)0ll))));
                         p = ((((p) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)::x10aux::num_hosts))))
                    {
                        
                        //#line 523 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        ::x10::lang::Place destPlace =  ::x10::lang::Place::_alloc();
                        (destPlace)->::x10::lang::Place::_constructor(
                          p);
                        
                        //#line 524 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        x10_uint placeStart = ::x10aux::nullCheck(firstLeafOctant)->x10::lang::Rail< x10_uint >::__apply(
                                                p);
                        
                        //#line 525 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        x10_uint placeEnd = ::x10aux::nullCheck(firstLeafOctant)->x10::lang::Rail< x10_uint >::__apply(
                                              ((p) + (((x10_long)1ll))));
                        
                        //#line 529 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        x10_long end = ((::x10aux::nullCheck(octantAtoms)->size()) - (((x10_long)1ll)));
                        
                        //#line 530 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        while ((((end) >= (((x10_long)0ll))) &&
                               ((::x10aux::nullCheck(octantAtoms)->__apply(
                                   end)->FMGL(first)) >= (placeEnd))))
                        {
                            end = ((end) - (((x10_long)1ll)));
                        }
                        
                        //#line 531 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        x10_long start = end;
                        
                        //#line 532 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        while ((((start) >= (((x10_long)0ll))) &&
                               ((::x10aux::nullCheck(octantAtoms)->__apply(
                                   start)->FMGL(first)) >= (placeStart))))
                        {
                            start = ((start) - (((x10_long)1ll)));
                        }
                        
                        //#line 533 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        start = ((start) + (((x10_long)1ll)));
                        
                        //#line 537 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* atomsToSend =
                          ::x10aux::nullCheck(octantAtoms)->moveSectionToRail(
                            start, end);
                        
                        //#line 538 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        if ((((x10_long)(::x10aux::nullCheck(atomsToSend)->FMGL(size))) > (((x10_long)0ll))))
                        {
                            
                            //#line 540 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::x10::lang::Runtime::runAsync(
                              destPlace, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__16)))au_edu_anu_mm_FastMultipoleMethod__closure__16(this, atomsToSend))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc32) {
            {
                ::x10::lang::CheckedThrowable* ct__52549 =
                  __exc32;
                {
                    ::x10::lang::Runtime::pushException(ct__52549);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52551);
    }
    
    //#line 545 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
    
    //#line 548 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>* octants =
      local->FMGL(octants);
    
    //#line 549 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* octantPair__21441;
        for (octantPair__21441 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >*>(::x10aux::nullCheck(octantAtoms)->iterator());
             ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >::hasNext(::x10aux::nullCheck(octantPair__21441));
             ) {
            ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> octantPair =
              ::x10::util::ListIterator< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >::next(::x10aux::nullCheck(octantPair__21441));
            
            //#line 550 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_uint leafMortonId = octantPair->FMGL(first);
            
            //#line 551 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_uint mortonId = ((x10_uint) ((leafMortonId) | (((x10_uint) ((((x10_uint) (this->FMGL(dMax)))) << (x10_int)(0x1f & (((x10_long)24ll))))))));
            
            //#line 552 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* atoms =
              octantPair->FMGL(second);
            
            //#line 553 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::au::edu::anu::mm::LeafOctant* leafOctant = ::x10aux::class_cast< ::au::edu::anu::mm::LeafOctant*>(octants->getOrElse(
                                                                                                                  mortonId,
                                                                                                                  ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))));
            
            //#line 554 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            if ((::x10aux::struct_equals(leafOctant, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 556 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                leafOctant = (__extension__ ({
                    ::au::edu::anu::mm::LeafOctant* alloc__21254 =
                       (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant>()) ::au::edu::anu::mm::LeafOctant());
                    (alloc__21254)->::au::edu::anu::mm::LeafOctant::_constructor(
                      ::au::edu::anu::mm::OctantId::getFromMortonId(
                        mortonId), this->FMGL(numTerms), this->FMGL(ws),
                      this->FMGL(dMax));
                    alloc__21254;
                }))
                ;
                
                //#line 557 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::x10aux::nullCheck(leafOctant)->FMGL(atoms) =
                  atoms;
                
                //#line 558 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                octants->put(mortonId, reinterpret_cast< ::au::edu::anu::mm::Octant*>(leafOctant));
            } else {
                
                //#line 561 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                {
                    ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>* atom__21439;
                    for (atom__21439 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>*>(::x10aux::nullCheck(atoms)->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::hasNext(::x10aux::nullCheck(atom__21439));
                         ) {
                        ::au::edu::anu::chem::mm::MMAtom* atom =
                          ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::next(::x10aux::nullCheck(atom__21439));
                        
                        //#line 562 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(leafOctant)->FMGL(atoms))->add(
                          atom);
                    }
                }
                
            }
            
        }
    }
    
    //#line 567 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)8ll));
}

//#line 574 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::addAtomsToLocalOctants(
  ::x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >* receivedAtoms) {
    
    //#line 575 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>* localOctants =
      ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(octants);
    {
        
        //#line 576 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::CheckedThrowable* throwable__52562 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                ::x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 577 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_long i__21445max__52381 = (((x10_long)(::x10aux::nullCheck(receivedAtoms)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__52382;
                        for (i__52382 = ((x10_long)0ll); ((i__52382) <= (i__21445max__52381));
                             i__52382 = ((i__52382) + (((x10_long)1ll))))
                        {
                            x10_long j__52383 = i__52382;
                            
                            //#line 578 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> octantPair__52371 =
                              ::x10aux::nullCheck(receivedAtoms)->x10::lang::Rail< ::x10::util::Pair<x10_uint, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >::__apply(
                                j__52383);
                            
                            //#line 579 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_uint leafMortonId__52372 =
                              octantPair__52371->FMGL(first);
                            
                            //#line 580 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_uint mortonId__52373 = ((x10_uint) ((leafMortonId__52372) | (((x10_uint) ((((x10_uint) (this->FMGL(dMax)))) << (x10_int)(0x1f & (((x10_long)24ll))))))));
                            
                            //#line 581 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* atoms__52374 =
                              octantPair__52371->FMGL(second);
                            
                            //#line 582 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::au::edu::anu::mm::LeafOctant* targetOctant__52375 =
                              ::x10aux::class_cast< ::au::edu::anu::mm::LeafOctant*>(localOctants->getOrElse(
                                                                                       mortonId__52373,
                                                                                       ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))));
                            
                            //#line 583 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            if ((::x10aux::struct_equals(targetOctant__52375,
                                                         reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                            {
                                
                                //#line 584 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                ::au::edu::anu::mm::OctantId octantId__52376 =
                                  ::au::edu::anu::mm::OctantId::getFromMortonId(
                                    mortonId__52373);
                                
                                //#line 587 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                targetOctant__52375 = (__extension__ ({
                                    ::au::edu::anu::mm::LeafOctant* alloc__52377 =
                                       (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant>()) ::au::edu::anu::mm::LeafOctant());
                                    (alloc__52377)->::au::edu::anu::mm::LeafOctant::_constructor(
                                      octantId__52376, this->FMGL(numTerms),
                                      this->FMGL(ws), this->FMGL(dMax));
                                    alloc__52377;
                                }))
                                ;
                                
                                //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                ::x10aux::nullCheck(targetOctant__52375)->FMGL(atoms) =
                                  atoms__52374;
                                
                                //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                localOctants->put(mortonId__52373,
                                                  reinterpret_cast< ::au::edu::anu::mm::Octant*>(targetOctant__52375));
                            } else {
                                
                                //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* targetAtoms__52378 =
                                  ::x10aux::nullCheck(targetOctant__52375)->FMGL(atoms);
                                
                                //#line 593 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                {
                                    ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>* atom__52379;
                                    for (atom__52379 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>*>(::x10aux::nullCheck(atoms__52374)->iterator());
                                         ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::hasNext(::x10aux::nullCheck(atom__52379));
                                         ) {
                                        ::au::edu::anu::chem::mm::MMAtom* atom__52380 =
                                          ::x10::util::ListIterator< ::au::edu::anu::chem::mm::MMAtom*>::next(::x10aux::nullCheck(atom__52379));
                                        
                                        //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        ::x10aux::nullCheck(targetAtoms__52378)->add(
                                          atom__52380);
                                    }
                                }
                                
                            }
                            
                        }
                    }
                    
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc34) {
            {
                ::x10::lang::CheckedThrowable* formal__52563 =
                  __exc34;
                {
                    throwable__52562 = formal__52563;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__52562, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__52562))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__52562));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__52562, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__52562)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__52562));
            }
            
        }
        
    }
}

//#line 601 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::createGhostChildren(
  ::au::edu::anu::mm::ParentOctant* parentOctant) {
    
    //#line 602 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 603 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_long >* octantLoads = local->FMGL(octantLoads);
    
    //#line 604 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_uint >* firstLeafOctant = local->FMGL(firstLeafOctant);
    
    //#line 605 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::OctantId id = ::x10aux::nullCheck(parentOctant)->FMGL(id);
    
    //#line 606 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i = ((x10_long)0ll);
    
    //#line 607 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21517min__52410 = ((((x10_long)2ll)) * (((x10_long)(id->FMGL(x)))));
    x10_long i__21517max__52411 = ((((((x10_long)2ll)) * (((x10_long)(id->FMGL(x)))))) + (((x10_long)1ll)));
    {
        x10_long i__52412;
        for (i__52412 = i__21517min__52410; ((i__52412) <= (i__21517max__52411));
             i__52412 = ((i__52412) + (((x10_long)1ll))))
        {
            x10_long x__52413 = i__52412;
            
            //#line 608 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_long i__21499min__52406 = ((((x10_long)2ll)) * (((x10_long)(id->FMGL(y)))));
            x10_long i__21499max__52407 = ((((((x10_long)2ll)) * (((x10_long)(id->FMGL(y)))))) + (((x10_long)1ll)));
            {
                x10_long i__52408;
                for (i__52408 = i__21499min__52406; ((i__52408) <= (i__21499max__52407));
                     i__52408 = ((i__52408) + (((x10_long)1ll))))
                {
                    x10_long y__52409 = i__52408;
                    
                    //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_long i__21481min__52402 = ((((x10_long)2ll)) * (((x10_long)(id->FMGL(z)))));
                    x10_long i__21481max__52403 = ((((((x10_long)2ll)) * (((x10_long)(id->FMGL(z)))))) + (((x10_long)1ll)));
                    {
                        x10_long i__52404;
                        for (i__52404 = i__21481min__52402;
                             ((i__52404) <= (i__21481max__52403));
                             i__52404 = ((i__52404) + (((x10_long)1ll))))
                        {
                            x10_long z__52405 = i__52404;
                            
                            //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::au::edu::anu::mm::OctantId childOctantId__52394 =
                               ::au::edu::anu::mm::OctantId::_alloc();
                            
                            //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                            x10_ubyte x__52384 = ((x10_ubyte) (x__52413));
                            x10_ubyte y__52385 = ((x10_ubyte) (y__52409));
                            x10_ubyte z__52386 = ((x10_ubyte) (z__52405));
                            x10_ubyte level__52387 = ((x10_ubyte) ((id->FMGL(level)) + (((x10_ubyte)1))));
                            
                            //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                            childOctantId__52394->FMGL(x) =
                              x__52384;
                            childOctantId__52394->FMGL(y) =
                              y__52385;
                            childOctantId__52394->FMGL(z) =
                              z__52386;
                            childOctantId__52394->FMGL(level) =
                              level__52387;
                            
                            //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            ::au::edu::anu::mm::OctantId anchor__52395 =
                              childOctantId__52394->au::edu::anu::mm::OctantId::getAnchor(
                                this->FMGL(dMax));
                            
                            //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_boolean nonEmpty__52396 =
                              false;
                            
                            //#line 613 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_int size__52397 = ::x10::lang::DoubleNatives::toInt(::x10::lang::Math::pow(
                                                                                      8.0,
                                                                                      ((((x10_long)(((x10_ubyte) ((this->FMGL(dMax)) / ::x10aux::zeroCheck(childOctantId__52394->FMGL(level))))))) - (((x10_long)1ll)))));
                            
                            //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_int startDescendant__52398 =
                              ((x10_int)(anchor__52395->au::edu::anu::mm::OctantId::getLeafMortonId()));
                            
                            //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_long endDescendant__52399 =
                              ((((x10_long)(((startDescendant__52398) + (size__52397))))) - (((x10_long)1ll)));
                            
                            //#line 616 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            x10_long i__21463min__52388 =
                              ((x10_long)((__extension__ ({
                                
                                //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                                x10_int a__52389 = ((x10_int)(::x10aux::nullCheck(firstLeafOctant)->x10::lang::Rail< x10_uint >::__apply(
                                                                ((::x10::lang::Place::_make(::x10aux::here)->FMGL(id)) + (((x10_long)1ll))))));
                                x10_int b__52390 = startDescendant__52398;
                                ((a__52389) < (b__52390))
                                  ? (b__52390) : (a__52389);
                            }))
                            ));
                            x10_long i__21463max__52391 =
                              endDescendant__52399;
                            {
                                x10_long i__52392;
                                for (i__52392 = i__21463min__52388;
                                     ((i__52392) <= (i__21463max__52391));
                                     i__52392 = ((i__52392) + (((x10_long)1ll))))
                                {
                                    x10_long j__52393 = i__52392;
                                    
                                    //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                    if (((::x10aux::nullCheck(octantLoads)->x10::lang::Rail< x10_long >::__apply(
                                            j__52393)) > (((x10_long)0ll))))
                                    {
                                        
                                        //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        nonEmpty__52396 =
                                          true;
                                        
                                        //#line 619 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                        break;
                                    }
                                    
                                }
                            }
                            
                            //#line 622 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            if (nonEmpty__52396) {
                                
                                //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                x10_long placeId__52400 =
                                  ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->getPlaceId(
                                    anchor__52395);
                                
                                //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                if ((!::x10aux::struct_equals(placeId__52400,
                                                              ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))
                                {
                                    
                                    //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                                    ::x10aux::nullCheck(::x10aux::nullCheck(parentOctant)->FMGL(children))->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__set(
                                      i, reinterpret_cast< ::au::edu::anu::mm::Octant*>((__extension__ ({
                                          ::au::edu::anu::mm::GhostOctant* alloc__52401 =
                                             (new (::x10aux::alloc_z< ::au::edu::anu::mm::GhostOctant>()) ::au::edu::anu::mm::GhostOctant());
                                          (alloc__52401)->::au::edu::anu::mm::GhostOctant::_constructor(
                                            childOctantId__52394,
                                            placeId__52400);
                                          alloc__52401;
                                      }))
                                      ));
                                }
                                
                            }
                            
                            //#line 629 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                            i = ((i) + (((x10_long)1ll)));
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 635 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::createParentOctantsLocal(
  ) {
    
    //#line 636 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 637 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::util::Timer* timer = local->FMGL(timer);
    
    //#line 638 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)9ll));
    
    //#line 640 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>* octants =
      local->FMGL(octants);
    
    //#line 641 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>* octantList =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*> >()) ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>());
    (octantList)->::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>::_constructor(
      octants->size());
    
    //#line 642 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_uint, ::au::edu::anu::mm::Octant*>*>* octantEntry__21535;
        for (octantEntry__21535 = ::x10::util::Set< ::x10::util::Map__Entry<x10_uint, ::au::edu::anu::mm::Octant*>*>::iterator(::x10aux::nullCheck(octants->entries()));
             ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_uint, ::au::edu::anu::mm::Octant*>*>::hasNext(::x10aux::nullCheck(octantEntry__21535));
             ) {
            ::x10::util::Map__Entry<x10_uint, ::au::edu::anu::mm::Octant*>* octantEntry =
              ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_uint, ::au::edu::anu::mm::Octant*>*>::next(::x10aux::nullCheck(octantEntry__21535));
            
            //#line 643 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(octantList)->add(::x10::util::Map__Entry<x10_uint, ::au::edu::anu::mm::Octant*>::getValue(::x10aux::nullCheck(octantEntry)));
        }
    }
    
    //#line 645 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10aux::nullCheck(octantList)->sort();
    
    //#line 648 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>* leafOctants =
      local->FMGL(leafOctants);
    
    //#line 649 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    leafOctants->clear();
    
    //#line 650 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* octant__21537;
        for (octant__21537 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(::x10aux::nullCheck(octantList)->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(octant__21537));
             ) {
            ::au::edu::anu::mm::Octant* octant = ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(octant__21537));
            
            //#line 651 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::au::edu::anu::mm::LeafOctant* leafOctant = ::x10aux::class_cast< ::au::edu::anu::mm::LeafOctant*>(octant);
            
            //#line 653 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            leafOctants->add(leafOctant);
            
            //#line 654 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(leafOctant)->makeSources();
            
            //#line 655 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(leafOctant)->createUList(
              this->FMGL(ws));
            
            //#line 656 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::x10aux::nullCheck(leafOctant)->createVList(
              this->FMGL(ws), this->FMGL(dMax));
        }
    }
    
    //#line 660 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(topLevelOctants)->clear();
    
    //#line 661 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_ubyte level = this->FMGL(dMax);
    
    //#line 662 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    while (((level) > (((x10_ubyte)2)))) {
        
        //#line 663 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>* parentOctantList =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*> >()) ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>());
        (parentOctantList)->::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>::_constructor(
          ((::x10aux::nullCheck(octantList)->size()) / ::x10aux::zeroCheck(((x10_long)8ll))));
        
        //#line 664 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::au::edu::anu::mm::ParentOctant* currentParent =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::ParentOctant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 665 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        {
            ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* octant__21539;
            for (octant__21539 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(::x10aux::nullCheck(octantList)->iterator());
                 ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(octant__21539));
                 ) {
                ::au::edu::anu::mm::Octant* octant = ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(octant__21539));
                
                //#line 666 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::au::edu::anu::mm::OctantId parentId = ::x10aux::nullCheck(octant)->FMGL(id)->au::edu::anu::mm::OctantId::getParentId();
                
                //#line 667 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                ::au::edu::anu::mm::OctantId parentAnchorId =
                  parentId->au::edu::anu::mm::OctantId::getAnchor(
                    this->FMGL(dMax));
                
                //#line 668 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                x10_long placeId = local->getPlaceId(parentAnchorId);
                
                //#line 669 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                if ((::x10aux::struct_equals(placeId, ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))
                {
                    
                    //#line 671 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    if (((::x10aux::struct_equals(currentParent,
                                                  reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) ||
                        (!::x10aux::struct_equals(::x10aux::nullCheck(currentParent)->FMGL(id),
                                                  parentId))))
                    {
                        
                        //#line 672 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        currentParent = (__extension__ ({
                            ::au::edu::anu::mm::ParentOctant* alloc__21257 =
                               (new (::x10aux::alloc_z< ::au::edu::anu::mm::ParentOctant>()) ::au::edu::anu::mm::ParentOctant());
                            (alloc__21257)->::au::edu::anu::mm::ParentOctant::_constructor(
                              parentId, this->FMGL(numTerms),
                              this->FMGL(ws), this->FMGL(dMax));
                            alloc__21257;
                        }))
                        ;
                        
                        //#line 673 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        ::x10aux::nullCheck(currentParent)->createVList(
                          this->FMGL(ws), this->FMGL(dMax));
                        
                        //#line 674 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        this->createGhostChildren(currentParent);
                        
                        //#line 675 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        parentOctantList->add(reinterpret_cast< ::au::edu::anu::mm::Octant*>(currentParent));
                        
                        //#line 676 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        octants->put(parentId->au::edu::anu::mm::OctantId::getMortonId(),
                                     reinterpret_cast< ::au::edu::anu::mm::Octant*>(currentParent));
                    }
                    
                    //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10aux::nullCheck(octant)->FMGL(parent) =
                      currentParent;
                    
                    //#line 679 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    x10_int childIndex = parentId->au::edu::anu::mm::OctantId::getChildIndex(
                                           this->FMGL(dMax),
                                           ::x10aux::nullCheck(octant)->FMGL(id));
                    
                    //#line 681 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(currentParent)->FMGL(children))->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__set(
                      ((x10_long)(childIndex)), octant);
                } else {
                    
                    //#line 684 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    local->FMGL(topLevelOctants)->add(octant);
                }
                
            }
        }
        
        //#line 688 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        octantList = parentOctantList;
        
        //#line 690 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        level = ((x10_ubyte) ((level) - (((x10_ubyte)1))));
    }
    
    //#line 694 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>* octant__21541;
        for (octant__21541 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>*>(::x10aux::nullCheck(octantList)->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::hasNext(::x10aux::nullCheck(octant__21541));
             ) {
            ::au::edu::anu::mm::Octant* octant = ::x10::util::ListIterator< ::au::edu::anu::mm::Octant*>::next(::x10aux::nullCheck(octant__21541));
            
            //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            local->FMGL(topLevelOctants)->add(octant);
        }
    }
    
    //#line 699 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)9ll));
}

//#line 706 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::createLET() {
    
    //#line 707 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 708 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::util::Timer* timer = local->FMGL(timer);
    
    //#line 709 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)10ll));
    
    //#line 710 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_uint >* combinedUList = local->getCombinedUList(
                                                     this->FMGL(ws));
    
    //#line 711 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(locallyEssentialTree) = (__extension__ ({
        ::au::edu::anu::mm::LET* alloc__21258 =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::LET>()) ::au::edu::anu::mm::LET());
        (alloc__21258)->::au::edu::anu::mm::LET::_constructor(
          combinedUList);
        alloc__21258;
    }))
    ;
    
    //#line 712 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)10ll));
}

//#line 719 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
void au::edu::anu::mm::FastMultipoleMethod::prefetchRemoteAtoms(
  ) {
    
    //#line 720 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 721 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::start(
      ((x10_long)1ll));
    
    //#line 723 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::LET* myLET = local->FMGL(locallyEssentialTree);
    
    //#line 724 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_uint >* myCombinedUList = ::x10aux::nullCheck(myLET)->FMGL(combinedUList);
    
    //#line 726 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::util::HashMap<x10_long, ::x10::util::ArrayList<x10_uint>*>* uListPlaces =
       (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_long, ::x10::util::ArrayList<x10_uint>*> >()) ::x10::util::HashMap<x10_long, ::x10::util::ArrayList<x10_uint>*>());
    (uListPlaces)->::x10::util::HashMap<x10_long, ::x10::util::ArrayList<x10_uint>*>::_constructor(
      ((x10_long)26ll));
    
    //#line 729 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< x10_uint >* rail__52421 = myCombinedUList;
    x10_long size__52422 = (x10_long)(::x10aux::nullCheck(rail__52421)->FMGL(size));
    {
        x10_long idx__52423;
        for (idx__52423 = ((x10_long)0ll); ((idx__52423) < (size__52422));
             idx__52423 = ((idx__52423) + (((x10_long)1ll))))
        {
            x10_uint octantId__52424 = ::x10aux::nullCheck(rail__52421)->x10::lang::Rail< x10_uint >::__apply(
                                         idx__52423);
            
            //#line 730 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            x10_long placeId__52414 = local->getPlaceId(octantId__52424);
            
            //#line 731 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            if ((((placeId__52414) >= (((x10_long)0ll))) &&
                ((placeId__52414) < (((x10_long)::x10aux::num_hosts)))))
            {
                
                //#line 732 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                if ((::x10aux::struct_equals(placeId__52414,
                                             ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))
                {
                    
                    //#line 734 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::au::edu::anu::mm::LeafOctant* octant__52415 =
                      ::x10aux::class_cast< ::au::edu::anu::mm::LeafOctant*>(local->getOctant(
                                                                               octantId__52424));
                    
                    //#line 735 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    if ((!::x10aux::struct_equals(octant__52415,
                                                  reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                    {
                        
                        //#line 736 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        ::x10aux::nullCheck(myLET)->setAtomDataForOctant(
                          octantId__52424, ::x10aux::nullCheck(octant__52415)->getSources());
                    }
                    
                } else {
                    
                    //#line 740 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10::util::ArrayList<x10_uint>* uListForPlace__52416 =
                      uListPlaces->getOrElse(placeId__52414,
                                             ::x10aux::class_cast_unchecked< ::x10::util::ArrayList<x10_uint>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    
                    //#line 741 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    if ((::x10aux::struct_equals(uListForPlace__52416,
                                                 reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                    {
                        
                        //#line 742 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        uListForPlace__52416 = (__extension__ ({
                            ::x10::util::ArrayList<x10_uint>* alloc__52417 =
                               (new (::x10aux::alloc_z< ::x10::util::ArrayList<x10_uint> >()) ::x10::util::ArrayList<x10_uint>());
                            (alloc__52417)->::x10::util::ArrayList<x10_uint>::_constructor();
                            alloc__52417;
                        }))
                        ;
                        
                        //#line 743 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                        uListPlaces->put(placeId__52414, uListForPlace__52416);
                    }
                    
                    //#line 745 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                    ::x10aux::nullCheck(uListForPlace__52416)->add(
                      octantId__52424);
                }
                
            }
            
        }
    }
    {
        
        //#line 751 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__52560 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>*>* placeEntry__21586;
                    for (placeEntry__21586 = ::x10::util::Set< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>*>::iterator(::x10aux::nullCheck(uListPlaces->entries()));
                         ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>*>::hasNext(::x10aux::nullCheck(placeEntry__21586));
                         ) {
                        ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>* placeEntry =
                          ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList<x10_uint>*>*>::next(::x10aux::nullCheck(placeEntry__21586));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_FastMultipoleMethod__closure__17)))au_edu_anu_mm_FastMultipoleMethod__closure__17(placeEntry, myLET))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc40) {
            {
                ::x10::lang::CheckedThrowable* ct__52558 =
                  __exc40;
                {
                    ::x10::lang::Runtime::pushException(ct__52558);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__52560);
    }
    
    //#line 760 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    local->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)1ll));
}

//#line 768 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* au::edu::anu::mm::FastMultipoleMethod::getAtomsForOctantList(
  ::x10::lang::Rail< x10_uint >* octantList) {
    
    //#line 769 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 770 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* atomList =
      ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(octantList)->FMGL(size)));
    
    //#line 771 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    x10_long i__21588max__52426 = (((x10_long)(::x10aux::nullCheck(octantList)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__52427;
        for (i__52427 = ((x10_long)0ll); ((i__52427) <= (i__21588max__52426));
             i__52427 = ((i__52427) + (((x10_long)1ll))))
        {
            x10_long i__52428 = i__52427;
            
            //#line 772 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            ::au::edu::anu::mm::LeafOctant* octant__52425 =
              ::x10aux::class_cast< ::au::edu::anu::mm::LeafOctant*>(local->getOctant(
                                                                       ::x10aux::nullCheck(octantList)->x10::lang::Rail< x10_uint >::__apply(
                                                                         i__52428)));
            
            //#line 773 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
            if ((!::x10aux::struct_equals(octant__52425, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 774 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
                atomList->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__set(
                  i__52428, ::x10aux::nullCheck(octant__52425)->getSources());
            }
            
        }
    }
    
    //#line 777 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
    return atomList;
    
}

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
::au::edu::anu::mm::FastMultipoleMethod* au::edu::anu::mm::FastMultipoleMethod::au__edu__anu__mm__FastMultipoleMethod____this__au__edu__anu__mm__FastMultipoleMethod(
  ) {
    return this;
    
}
void au::edu::anu::mm::FastMultipoleMethod::__fieldInitializers_au_edu_anu_mm_FastMultipoleMethod(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::FastMultipoleMethod::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::FastMultipoleMethod::_deserializer);

void au::edu::anu::mm::FastMultipoleMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(density));
    buf.write(this->FMGL(dMax));
    buf.write(this->FMGL(lowestLevelDim));
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(numTerms));
    buf.write(this->FMGL(ws));
    buf.write(this->FMGL(verbose));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::FastMultipoleMethod::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::FastMultipoleMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FastMultipoleMethod>()) ::au::edu::anu::mm::FastMultipoleMethod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::FastMultipoleMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(density) = buf.read<x10_int>();
    FMGL(dMax) = buf.read<x10_ubyte>();
    FMGL(lowestLevelDim) = buf.read<x10_int>();
    FMGL(size) = buf.read<x10_double>();
    FMGL(numTerms) = buf.read<x10_int>();
    FMGL(ws) = buf.read<x10_int>();
    FMGL(verbose) = buf.read<x10_boolean>();
    
}

::x10aux::RuntimeType au::edu::anu::mm::FastMultipoleMethod::rtt;
void au::edu::anu::mm::FastMultipoleMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.FastMultipoleMethod",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72820(" ghost: ");
::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72816("RMS relative force err: %.1E\n");
::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72819("total: ");
::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72817("u-List cost ");
::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72814("at %d: prefetch %.3G upward %.3G M2L %.3G downward %.3G\n");
::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72818("v-List cost ");
::x10::lang::String au::edu::anu::mm::FastMultipoleMethod_Strings::sl__72815("RMS relative potential err: %.1E\n");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__2>au_edu_anu_mm_FastMultipoleMethod__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__2::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__1>au_edu_anu_mm_FastMultipoleMethod__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__1::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__3>au_edu_anu_mm_FastMultipoleMethod__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__3::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__5>au_edu_anu_mm_FastMultipoleMethod__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__5::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__5::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__4>au_edu_anu_mm_FastMultipoleMethod__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__4::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__6>au_edu_anu_mm_FastMultipoleMethod__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__6::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__6::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__7>au_edu_anu_mm_FastMultipoleMethod__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__7::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__7::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__8>au_edu_anu_mm_FastMultipoleMethod__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__8::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__8::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__8::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__8::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*>::itable<au_edu_anu_mm_FastMultipoleMethod__closure__11>au_edu_anu_mm_FastMultipoleMethod__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__11::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::FmmScratch*> >, &au_edu_anu_mm_FastMultipoleMethod__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__11::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__10>au_edu_anu_mm_FastMultipoleMethod__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__10::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__10::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__10::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__10::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__9>au_edu_anu_mm_FastMultipoleMethod__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__9::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__9::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__9::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__9::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__13>au_edu_anu_mm_FastMultipoleMethod__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__13::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__13::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__13::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__13::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__12>au_edu_anu_mm_FastMultipoleMethod__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__12::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__12::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__15>au_edu_anu_mm_FastMultipoleMethod__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__15::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__15::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__15::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__15::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__14>au_edu_anu_mm_FastMultipoleMethod__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__14::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__14::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__14::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__14::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__16>au_edu_anu_mm_FastMultipoleMethod__closure__16::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__16::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__16::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__16::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__16::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__16::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__16::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__16::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__16::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::itable<au_edu_anu_mm_FastMultipoleMethod__closure__18>au_edu_anu_mm_FastMultipoleMethod__closure__18::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__18::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__18::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__18::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >, &au_edu_anu_mm_FastMultipoleMethod__closure__18::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__18::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__18::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_FastMultipoleMethod__closure__17>au_edu_anu_mm_FastMultipoleMethod__closure__17::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_FastMultipoleMethod__closure__17::__apply, &au_edu_anu_mm_FastMultipoleMethod__closure__17::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_FastMultipoleMethod__closure__17::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_FastMultipoleMethod__closure__17::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__17::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__17::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_FastMultipoleMethod__closure__17::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_FastMultipoleMethod__closure__17::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of FastMultipoleMethod */
/*************************************************/
/*************************************************/
/* START of FastMultipoleMethod$SumReducer */
#include <au/edu/anu/mm/FastMultipoleMethod__SumReducer.h>

#include <x10/lang/Any.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod__SumReducer_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer> {
public:
    static ::x10::lang::Any::itable< FastMultipoleMethod__SumReducer_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< FastMultipoleMethod__SumReducer_ibox0 >  FastMultipoleMethod__SumReducer_ibox0::itable(&FastMultipoleMethod__SumReducer_ibox0::equals, &FastMultipoleMethod__SumReducer_ibox0::hashCode, &FastMultipoleMethod__SumReducer_ibox0::toString, &FastMultipoleMethod__SumReducer_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer >  au::edu::anu::mm::FastMultipoleMethod__SumReducer::_itable_0(&au::edu::anu::mm::FastMultipoleMethod__SumReducer::equals, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::hashCode, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::toString, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::typeName);
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod__SumReducer_ibox1 : public ::x10::lang::IBox< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer> {
public:
    static ::x10::lang::Reducible<x10_double>::itable< FastMultipoleMethod__SumReducer_ibox1 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10_double __apply(x10_double arg0, x10_double arg1) {
        return this->value->__apply(arg0, arg1);
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    x10_double zero() {
        return this->value->zero();
    }
    
};
::x10::lang::Reducible<x10_double>::itable< FastMultipoleMethod__SumReducer_ibox1 >  FastMultipoleMethod__SumReducer_ibox1::itable(&FastMultipoleMethod__SumReducer_ibox1::equals, &FastMultipoleMethod__SumReducer_ibox1::hashCode, &FastMultipoleMethod__SumReducer_ibox1::__apply, &FastMultipoleMethod__SumReducer_ibox1::toString, &FastMultipoleMethod__SumReducer_ibox1::typeName, &FastMultipoleMethod__SumReducer_ibox1::zero);
} } } } 
::x10::lang::Reducible<x10_double>::itable< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer >  au::edu::anu::mm::FastMultipoleMethod__SumReducer::_itable_1(&au::edu::anu::mm::FastMultipoleMethod__SumReducer::equals, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::hashCode, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::__apply, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::toString, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::typeName, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::zero);
::x10aux::itable_entry au::edu::anu::mm::FastMultipoleMethod__SumReducer::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::mm::FastMultipoleMethod__SumReducer::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::FastMultipoleMethod__SumReducer")};
::x10aux::itable_entry au::edu::anu::mm::FastMultipoleMethod__SumReducer::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::FastMultipoleMethod__SumReducer_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::mm::FastMultipoleMethod__SumReducer_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::FastMultipoleMethod__SumReducer")};

//#line 781 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"

//#line 782 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
x10_double au::edu::anu::mm::FastMultipoleMethod__SumReducer::__apply(x10_double a,
                                                                      x10_double b) {
    return ((a) + (b));
    
}

//#line 780 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
::x10::lang::String* au::edu::anu::mm::FastMultipoleMethod__SumReducer::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::mm::FastMultipoleMethod__SumReducer::toString(
  ) {
    return (&::au::edu::anu::mm::FastMultipoleMethod__SumReducer_Strings::sl__72919);
    
}
x10_boolean au::edu::anu::mm::FastMultipoleMethod__SumReducer::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::FastMultipoleMethod__SumReducer this__52429 =
      (*this);
    ::au::edu::anu::mm::FastMultipoleMethod__SumReducer other__52430 =
      ::x10aux::class_cast< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer>(other);
    return true;
    
}
x10_boolean au::edu::anu::mm::FastMultipoleMethod__SumReducer::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::FastMultipoleMethod__SumReducer this__52431 =
      (*this);
    ::au::edu::anu::mm::FastMultipoleMethod__SumReducer other__52432 =
      ::x10aux::class_cast< ::au::edu::anu::mm::FastMultipoleMethod__SumReducer>(other);
    return true;
    
}

void ::au::edu::anu::mm::FastMultipoleMethod__SumReducer::_serialize(::au::edu::anu::mm::FastMultipoleMethod__SumReducer this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::au::edu::anu::mm::FastMultipoleMethod__SumReducer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType au::edu::anu::mm::FastMultipoleMethod__SumReducer::rtt;
void au::edu::anu::mm::FastMultipoleMethod__SumReducer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >()};
    rtt.initStageTwo("au.edu.anu.mm.FastMultipoleMethod.SumReducer",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::mm::FastMultipoleMethod__SumReducer_Strings::sl__72919("struct au.edu.anu.mm.FastMultipoleMethod.SumReducer");

/* END of FastMultipoleMethod$SumReducer */
/*************************************************/
/*************************************************/
/* START of FastMultipoleMethod$IntSumReducer */
#include <au/edu/anu/mm/FastMultipoleMethod__IntSumReducer.h>

#include <x10/lang/Any.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod__IntSumReducer_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer> {
public:
    static ::x10::lang::Any::itable< FastMultipoleMethod__IntSumReducer_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< FastMultipoleMethod__IntSumReducer_ibox0 >  FastMultipoleMethod__IntSumReducer_ibox0::itable(&FastMultipoleMethod__IntSumReducer_ibox0::equals, &FastMultipoleMethod__IntSumReducer_ibox0::hashCode, &FastMultipoleMethod__IntSumReducer_ibox0::toString, &FastMultipoleMethod__IntSumReducer_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer >  au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_itable_0(&au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::equals, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::hashCode, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::toString, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::typeName);
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod__IntSumReducer_ibox1 : public ::x10::lang::IBox< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer> {
public:
    static ::x10::lang::Reducible<x10_int>::itable< FastMultipoleMethod__IntSumReducer_ibox1 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10_int __apply(x10_int arg0, x10_int arg1) {
        return this->value->__apply(arg0, arg1);
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    x10_int zero() {
        return this->value->zero();
    }
    
};
::x10::lang::Reducible<x10_int>::itable< FastMultipoleMethod__IntSumReducer_ibox1 >  FastMultipoleMethod__IntSumReducer_ibox1::itable(&FastMultipoleMethod__IntSumReducer_ibox1::equals, &FastMultipoleMethod__IntSumReducer_ibox1::hashCode, &FastMultipoleMethod__IntSumReducer_ibox1::__apply, &FastMultipoleMethod__IntSumReducer_ibox1::toString, &FastMultipoleMethod__IntSumReducer_ibox1::typeName, &FastMultipoleMethod__IntSumReducer_ibox1::zero);
} } } } 
::x10::lang::Reducible<x10_int>::itable< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer >  au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_itable_1(&au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::equals, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::hashCode, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::__apply, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::toString, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::typeName, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::zero);
::x10aux::itable_entry au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_int> >, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer")};
::x10aux::itable_entry au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_int> >, &au::edu::anu::mm::FastMultipoleMethod__IntSumReducer_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer")};

//#line 786 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"

//#line 787 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
x10_int au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::__apply(x10_int a,
                                                                      x10_int b) {
    return ((a) + (b));
    
}

//#line 785 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FastMultipoleMethod.x10"
::x10::lang::String* au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::toString(
  ) {
    return (&::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer_Strings::sl__72962);
    
}
x10_boolean au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer this__52434 =
      (*this);
    ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer other__52435 =
      ::x10aux::class_cast< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer>(other);
    return true;
    
}
x10_boolean au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer this__52436 =
      (*this);
    ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer other__52437 =
      ::x10aux::class_cast< ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer>(other);
    return true;
    
}

void ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_serialize(::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::rtt;
void au::edu::anu::mm::FastMultipoleMethod__IntSumReducer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<x10_int> >()};
    rtt.initStageTwo("au.edu.anu.mm.FastMultipoleMethod.IntSumReducer",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::mm::FastMultipoleMethod__IntSumReducer_Strings::sl__72962("struct au.edu.anu.mm.FastMultipoleMethod.IntSumReducer");

/* END of FastMultipoleMethod$IntSumReducer */
/*************************************************/
