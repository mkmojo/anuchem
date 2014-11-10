/*************************************************/
/* START of TestFastMultipoleMethod */
#include <au/edu/anu/mm/TestFastMultipoleMethod.h>

#include <au/edu/anu/chem/mm/TestElectrostatic.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Math.h>
#include <x10/regionarray/DistArray.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <au/edu/anu/mm/FastMultipoleMethod.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <au/edu/anu/util/Timer.h>
#include <au/edu/anu/mm/FmmLocalData.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <au/edu/anu/chem/mm/ElectrostaticDirectMethod.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_TestFastMultipoleMethod__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        {
            x10_long i__26491;
            for (i__26491 = ((x10_long)4ll); ((i__26491) <= (((x10_long)9ll)));
                 i__26491 = ((i__26491) + (((x10_long)1ll)))) {
                x10_long timerId__26492 = i__26491;
                
                //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::clear(
                  timerId__26492);
            }
        }
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        fmm->reassignAtoms(((x10_long)0ll));
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* fmm;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->fmm);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_TestFastMultipoleMethod__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_TestFastMultipoleMethod__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_fmm = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        au_edu_anu_mm_TestFastMultipoleMethod__closure__2* this_ = new (storage) au_edu_anu_mm_TestFastMultipoleMethod__closure__2(that_fmm);
        return this_;
    }
    
    au_edu_anu_mm_TestFastMultipoleMethod__closure__2(::au::edu::anu::mm::FastMultipoleMethod* fmm) : fmm(fmm) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10:105-110";
    }

};

#endif // AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_TestFastMultipoleMethod__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__26515;
            for (place__26515 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                          ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__26515));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__26515));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_TestFastMultipoleMethod__closure__2)))au_edu_anu_mm_TestFastMultipoleMethod__closure__2(fmm))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* fmm;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->fmm);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_TestFastMultipoleMethod__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_TestFastMultipoleMethod__closure__1>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_fmm = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_TestFastMultipoleMethod__closure__1* this_ = new (storage) au_edu_anu_mm_TestFastMultipoleMethod__closure__1(that_fmm, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_TestFastMultipoleMethod__closure__1(::au::edu::anu::mm::FastMultipoleMethod* fmm, ::x10::regionarray::Dist* __lowerer__var__0__) : fmm(fmm), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10:105-110";
    }

};

#endif // AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_TestFastMultipoleMethod__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        fmm->reassignAtoms(i__26495);
        
        //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        fmm->calculateEnergyLocal();
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* fmm;
    x10_long i__26495;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->fmm);
        buf.write(this->i__26495);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_TestFastMultipoleMethod__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_mm_TestFastMultipoleMethod__closure__4>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_fmm = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        x10_long that_i__26495 = buf.read<x10_long>();
        au_edu_anu_mm_TestFastMultipoleMethod__closure__4* this_ = new (storage) au_edu_anu_mm_TestFastMultipoleMethod__closure__4(that_fmm, that_i__26495);
        return this_;
    }
    
    au_edu_anu_mm_TestFastMultipoleMethod__closure__4(::au::edu::anu::mm::FastMultipoleMethod* fmm, x10_long i__26495) : fmm(fmm), i__26495(i__26495) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10:126-129";
    }

};

#endif // AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_TestFastMultipoleMethod__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__26493__26530;
            for (place__26493__26530 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                                 ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__26493__26530));
                 ) {
                ::x10::lang::Point* place__26493 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__26493__26530));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_TestFastMultipoleMethod__closure__4)))au_edu_anu_mm_TestFastMultipoleMethod__closure__4(fmm, i__26495))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::FastMultipoleMethod* fmm;
    x10_long i__26495;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->fmm);
        buf.write(this->i__26495);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_TestFastMultipoleMethod__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_mm_TestFastMultipoleMethod__closure__3>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::FastMultipoleMethod* that_fmm = buf.read< ::au::edu::anu::mm::FastMultipoleMethod*>();
        x10_long that_i__26495 = buf.read<x10_long>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_TestFastMultipoleMethod__closure__3* this_ = new (storage) au_edu_anu_mm_TestFastMultipoleMethod__closure__3(that_fmm, that_i__26495, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_TestFastMultipoleMethod__closure__3(::au::edu::anu::mm::FastMultipoleMethod* fmm, x10_long i__26495, ::x10::regionarray::Dist* __lowerer__var__0__) : fmm(fmm), i__26495(i__26495), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10:126-129";
    }

};

#endif // AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD__CLOSURE__3_CLOSURE

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
x10_double au::edu::anu::mm::TestFastMultipoleMethod::sizeOfCentralCluster(
  ) {
    return 80.0;
    
}

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
void au::edu::anu::mm::TestFastMultipoleMethod::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_int numAtoms;
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_int dMax = ((x10_int)3);
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_int numTerms = ((x10_int)12);
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_int wellSpaced = ((x10_int)1);
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_boolean verbose = false;
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_boolean compare = false;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_boolean rms = false;
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)0ll))))
    {
        
        //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        numAtoms = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)0ll)));
        
        //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)1ll))))
        {
            
            //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            dMax = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)1ll)));
            
            //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)2ll))))
            {
                
                //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                numTerms = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                               ((x10_long)2ll)));
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)3ll))))
                {
                    
                    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                    wellSpaced = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                     ((x10_long)3ll)));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                    if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)4ll))))
                    {
                        
                        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                        if (::x10aux::equals(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                               ((x10_long)4ll)),(&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72777)))
                        {
                            
                            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                            verbose = true;
                        }
                        
                        //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                        if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)5ll))))
                        {
                            
                            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                            if (::x10aux::equals(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                   ((x10_long)5ll)),(&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72778)))
                            {
                                
                                //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                                compare = true;
                                
                                //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                                if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)6ll))))
                                {
                                    
                                    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                                    if (::x10aux::equals(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                           ((x10_long)6ll)),(&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72779)))
                                    {
                                        
                                        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                                        rms = true;
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    } else {
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72780)));
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        return;
    }
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    (__extension__ ({
        ::au::edu::anu::mm::TestFastMultipoleMethod* alloc__17511 =
           (new (::x10aux::alloc_z< ::au::edu::anu::mm::TestFastMultipoleMethod>()) ::au::edu::anu::mm::TestFastMultipoleMethod());
        (alloc__17511)->::au::edu::anu::mm::TestFastMultipoleMethod::_constructor();
        alloc__17511;
    }))
    ->test(numAtoms, dMax, numTerms, wellSpaced, verbose,
           compare, rms);
}

//#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
void au::edu::anu::mm::TestFastMultipoleMethod::test(x10_int numAtoms,
                                                     x10_int dMax,
                                                     x10_int numTerms,
                                                     x10_int wellSpaced,
                                                     x10_boolean verbose,
                                                     x10_boolean compare,
                                                     x10_boolean rms) {
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_double numBoxes = ::x10::lang::Math::pow(8.0, dMax);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_double density = ::x10::lang::MathNatives::ceil(((((x10_double) (numAtoms))) / (numBoxes)));
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    if (verbose) {
        
        //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72781), numAtoms), (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72782)), density), (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72783)), dMax), (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72784)), numTerms), (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72785)), wellSpaced)));
        
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        x10_double d = ((((80.0) / (::x10::lang::Math::pow(
                                      2.0, dMax)))) / (2.0));
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        x10_double e_terms;
        
        //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        if ((::x10aux::struct_equals(wellSpaced, ((x10_int)1))))
        {
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            e_terms = ((((1.0) / (((((3.0) - (::x10::lang::MathNatives::sqrt(3.0)))) * (d))))) * (::x10::lang::Math::pow(
                                                                                                    ((1.0) / (::x10::lang::MathNatives::sqrt(3.0))),
                                                                                                    ((((x10_long)(numTerms))) + (((x10_long)1ll))))));
        } else 
        //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        if ((::x10aux::struct_equals(wellSpaced, ((x10_int)2))))
        {
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            e_terms = ((((1.0) / (((((5.0) - (::x10::lang::MathNatives::sqrt(3.0)))) * (d))))) * (::x10::lang::Math::pow(
                                                                                                    ((::x10::lang::MathNatives::sqrt(3.0)) / (5.0)),
                                                                                                    ((((x10_long)(numTerms))) + (((x10_long)1ll))))));
        } else {
            
            //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            e_terms = 0.0;
        }
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72786), e_terms)));
        
        //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        if (((::x10aux::struct_equals(wellSpaced, ((x10_int)1))) &&
            ((numTerms) > (((x10_int)10))))) {
            
            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            x10_double e_b_shift = ((((1.0) / (((((4.0) - (((2.0) * (::x10::lang::MathNatives::sqrt(3.0)))))) * (d))))) * (::x10::lang::Math::pow(
                                                                                                                             ((::x10::lang::MathNatives::sqrt(3.0)) / (2.0)),
                                                                                                                             ((((x10_long)(numTerms))) + (((x10_long)1ll))))));
            
            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72787), e_b_shift)));
        }
        
    } else {
        
        //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72788),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(numAtoms));
    }
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
      this->generateAtoms(((x10_long)(numAtoms)), false);
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    ::au::edu::anu::mm::FastMultipoleMethod* fmm =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::FastMultipoleMethod>()) ::au::edu::anu::mm::FastMultipoleMethod());
    (fmm)->::au::edu::anu::mm::FastMultipoleMethod::_constructor(
      density, dMax, numTerms, wellSpaced, 80.0, verbose);
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    fmm->initialAssignment(numAtoms, atoms);
    {
        
        //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__26520 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__24270 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__24270)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__24270;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____26517;
                        for (__lowerer__var__1____26517 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____26517));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____26517));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_TestFastMultipoleMethod__closure__1)))au_edu_anu_mm_TestFastMultipoleMethod__closure__1(fmm, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc3) {
            {
                ::x10::lang::CheckedThrowable* ct__26518 =
                  __exc3;
                {
                    ::x10::lang::Runtime::pushException(ct__26518);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__26520);
    }
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    x10_double energy = fmm->calculateEnergy();
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    {
        x10_long i__26494;
        for (i__26494 = ((x10_long)1ll); ((i__26494) <= (((x10_long)9ll)));
             i__26494 = ((i__26494) + (((x10_long)1ll))))
        {
            x10_long i__26495 = i__26494;
            {
                
                //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
                ::x10::lang::Runtime::ensureNotInAtomic();
                ::x10::lang::FinishState* fs__26535 = ::x10::lang::Runtime::startFinish();
                try {
                    {
                        {
                            ::x10::lang::Runtime::ensureNotInAtomic();
                            ::x10::regionarray::Dist* __lowerer__var__0__ =
                              ::x10aux::nullCheck(atoms)->FMGL(dist);
                            {
                                ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____26532;
                                for (__lowerer__var__1____26532 =
                                       ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                                     ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____26532));
                                     ) {
                                    ::x10::lang::Place __lowerer__var__1__ =
                                      ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____26532));
                                    ::x10::lang::Runtime::runAsync(
                                      __lowerer__var__1__,
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_TestFastMultipoleMethod__closure__3)))au_edu_anu_mm_TestFastMultipoleMethod__closure__3(fmm, i__26495, __lowerer__var__0__))),
                                      ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc4) {
                    {
                        ::x10::lang::CheckedThrowable* ct__26533 =
                          __exc4;
                        {
                            ::x10::lang::Runtime::pushException(
                              ct__26533);
                        }
                    }
                }
                ::x10::lang::Runtime::stopFinish(fs__26535);
            }
        }
    }
    
    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    fmm->reduceMaxTimes();
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    if (verbose) {
        
        //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72789), energy)));
        
        //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72790),
                      ((x10_long)5ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72791),
                      ((x10_long)6ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72792),
                      ((x10_long)7ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72793),
                      ((x10_long)8ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72794),
                      ((x10_long)9ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72795),
                      ((x10_long)10ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72796),
                      ((x10_long)1ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72797),
                      ((x10_long)2ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72798),
                      ((x10_long)3ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72799),
                      ((x10_long)4ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
        
        //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72800),
                      ((x10_long)0ll), ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer));
    } else {
        
        //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72801),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(numTerms),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(dMax),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::mean(
                                                                                                                           ((x10_long)0ll))))) / (1.0E9))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(timer)->au::edu::anu::util::Timer::mean(
                                                                                                                           ((x10_long)5ll))))) / (1.0E9))));
    }
    
    //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    if (compare) {
        
        //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        if (rms) {
            
            //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            fmm->printRMSErrors();
        }
        
        //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* direct =
           (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod>()) ::au::edu::anu::chem::mm::ElectrostaticDirectMethod());
        (direct)->::au::edu::anu::chem::mm::ElectrostaticDirectMethod::_constructor(
          atoms);
        
        //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        x10_double directEnergy = direct->getEnergy();
        
        //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        this->logTime((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72802),
                      ((x10_long)0ll), direct->FMGL(timer));
        
        //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        x10_double error = ((::fabs(((directEnergy) - (energy)))) / (::fabs(energy)));
        
        //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
        if (verbose) {
            
            //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72803), directEnergy), (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72804)), error), (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72805)), error)));
        } else {
            
            //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72806),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(error));
        }
        
    }
    
    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
}

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
::au::edu::anu::mm::TestFastMultipoleMethod* au::edu::anu::mm::TestFastMultipoleMethod::au__edu__anu__mm__TestFastMultipoleMethod____this__au__edu__anu__mm__TestFastMultipoleMethod(
  ) {
    return this;
    
}
void au::edu::anu::mm::TestFastMultipoleMethod::_constructor(
  ) {
    ::au::edu::anu::chem::mm::TestElectrostatic* this__26497 =
      this;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/mm/TestElectrostatic.x10"
    ::x10aux::nullCheck(this__26497)->FMGL(SIZE) = 80.0;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/test/au/edu/anu/mm/TestFastMultipoleMethod.x10"
    ::au::edu::anu::mm::TestFastMultipoleMethod* this__26496 =
      this;
    
}
::au::edu::anu::mm::TestFastMultipoleMethod* au::edu::anu::mm::TestFastMultipoleMethod::_make(
  ) {
    ::au::edu::anu::mm::TestFastMultipoleMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::TestFastMultipoleMethod>()) ::au::edu::anu::mm::TestFastMultipoleMethod();
    this_->_constructor();
    return this_;
}


void au::edu::anu::mm::TestFastMultipoleMethod::__fieldInitializers_au_edu_anu_mm_TestFastMultipoleMethod(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::TestFastMultipoleMethod::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::TestFastMultipoleMethod::_deserializer);

void au::edu::anu::mm::TestFastMultipoleMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::chem::mm::TestElectrostatic::_serialize_body(buf);
    
}

::x10::lang::Reference* ::au::edu::anu::mm::TestFastMultipoleMethod::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::TestFastMultipoleMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::TestFastMultipoleMethod>()) ::au::edu::anu::mm::TestFastMultipoleMethod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::TestFastMultipoleMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::TestElectrostatic::_deserialize_body(buf);
    
}

::x10aux::RuntimeType au::edu::anu::mm::TestFastMultipoleMethod::rtt;
void au::edu::anu::mm::TestFastMultipoleMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::chem::mm::TestElectrostatic>()};
    rtt.initStageTwo("au.edu.anu.mm.TestFastMultipoleMethod",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72806("E err: %.2G");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72802(" cf. Direct electrostatic ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72779("-rms");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72797("Upward  ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72801("p: %2i D_max: %2i time (s): %9.5f tree (s): %9.5f");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72778("-compare");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72783(" dMax = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72798("M2L     ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72799("Downward");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72780("usage: fmm numAtoms [dMax] [numTerms] [wellSpaced] [-verbose] [-compare] [-rms]");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72794("  (parents)");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72791("  (sort)   ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72784(" numTerms = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72800("Total   ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72782(" atoms, target density = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72805(" relative error = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72792("  (balance)");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72795("  (LET)    ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72803("direct = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72786("max error in potential due to truncation: ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72789("energy = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72785(" wellSpaced = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72793("  (redist) ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72804(" error = ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72781("Testing FMM for ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72796("Prefetch");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72790("tree    ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72777("-verbose");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72788("N: %8i ");
::x10::lang::String au::edu::anu::mm::TestFastMultipoleMethod_Strings::sl__72787("max error in potential due to B-shift: ");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__2>au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_TestFastMultipoleMethod__closure__2::__apply, &au_edu_anu_mm_TestFastMultipoleMethod__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__1>au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_TestFastMultipoleMethod__closure__1::__apply, &au_edu_anu_mm_TestFastMultipoleMethod__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__4>au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_TestFastMultipoleMethod__closure__4::__apply, &au_edu_anu_mm_TestFastMultipoleMethod__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_TestFastMultipoleMethod__closure__3>au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_TestFastMultipoleMethod__closure__3::__apply, &au_edu_anu_mm_TestFastMultipoleMethod__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_TestFastMultipoleMethod__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of TestFastMultipoleMethod */
/*************************************************/
