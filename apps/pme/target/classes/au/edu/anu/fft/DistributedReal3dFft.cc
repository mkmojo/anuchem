/*************************************************/
/* START of DistributedReal3dFft */
#include <au/edu/anu/fft/DistributedReal3dFft.h>

#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_fft_DistributedReal3dFft__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Array<x10_double>* localSource = ::x10aux::nullCheck(source)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localSource)->FMGL(region);
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Region* gridRegionWithoutZ = ::x10aux::nullCheck(localRegion)->eliminate(
                                                           ((x10_long)2ll));
        
        //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        x10_int howMany = ((x10_int) (::x10aux::nullCheck(gridRegionWithoutZ)->size()));
        
        //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planR2C = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<double*>(source->raw()->raw), reinterpret_cast<fftw_complex*>(temp->raw()->raw));
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planR2C);
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        x10_int diagonal = ((((dataSize) / ::x10aux::zeroCheck(((x10_int)2)))) + (((x10_int)1)));
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Region* p__65667 = gridRegionWithoutZ;
        x10_long j__63449min__65668 = ::x10aux::nullCheck(p__65667)->min(
                                        ((x10_long)1ll));
        x10_long j__63449max__65669 = ::x10aux::nullCheck(p__65667)->max(
                                        ((x10_long)1ll));
        x10_long i__63468min__65670 = ::x10aux::nullCheck(p__65667)->min(
                                        ((x10_long)0ll));
        x10_long i__63468max__65671 = ::x10aux::nullCheck(p__65667)->max(
                                        ((x10_long)0ll));
        {
            x10_long i__65672;
            for (i__65672 = i__63468min__65670; ((i__65672) <= (i__63468max__65671));
                 i__65672 = ((i__65672) + (((x10_long)1ll))))
            {
                x10_long i__65673 = i__65672;
                {
                    x10_long j__65674;
                    for (j__65674 = j__63449min__65668; ((j__65674) <= (j__63449max__65669));
                         j__65674 = ((j__65674) + (((x10_long)1ll))))
                    {
                        x10_long j__65675 = j__65674;
                        
                        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                        x10_int i__63430min__65663 = diagonal;
                        x10_int i__63430max__65664 = ((dataSize) - (((x10_int)1)));
                        {
                            x10_int i__65665;
                            for (i__65665 = i__63430min__65663;
                                 ((i__65665) <= (i__63430max__65664));
                                 i__65665 = ((i__65665) + (((x10_int)1))))
                            {
                                x10_int k__65666 = i__65665;
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                                ::x10aux::nullCheck(temp)->x10::regionarray::DistArray<x10_complex>::__set(
                                  i__65673, j__65675, ((x10_long)(k__65666)),
                                  ::x10::lang::ComplexNatives::conj(::x10aux::nullCheck(temp)->x10::regionarray::DistArray<x10_complex>::__apply(
                                                                      i__65673,
                                                                      j__65675,
                                                                      ((x10_long)(((dataSize) - (k__65666)))))));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::au::edu::anu::fft::DistributedReal3dFft::transpose< x10_complex >(
          temp, target);
        
        //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planC2C = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<fftw_complex*>(target->raw()->raw), reinterpret_cast<fftw_complex*>(temp->raw()->raw), true);
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::au::edu::anu::fft::DistributedReal3dFft::transpose< x10_complex >(
          temp, target);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::au::edu::anu::fft::DistributedReal3dFft::transpose< x10_complex >(
          temp, target);
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planR2C);
        
        //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planC2C);
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* source;
    x10_int dataSize;
    ::x10::regionarray::DistArray<x10_complex>* temp;
    ::x10::regionarray::DistArray<x10_complex>* target;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->source);
        buf.write(this->dataSize);
        buf.write(this->temp);
        buf.write(this->target);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_fft_DistributedReal3dFft__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_fft_DistributedReal3dFft__closure__2>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_source = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_int that_dataSize = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_complex>* that_temp = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::DistArray<x10_complex>* that_target = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        au_edu_anu_fft_DistributedReal3dFft__closure__2* this_ = new (storage) au_edu_anu_fft_DistributedReal3dFft__closure__2(that_source, that_dataSize, that_temp, that_target);
        return this_;
    }
    
    au_edu_anu_fft_DistributedReal3dFft__closure__2(::x10::regionarray::DistArray<x10_double>* source, x10_int dataSize, ::x10::regionarray::DistArray<x10_complex>* temp, ::x10::regionarray::DistArray<x10_complex>* target) : source(source), dataSize(dataSize), temp(temp), target(target) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10:46-73";
    }

};

#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_fft_DistributedReal3dFft__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__65764;
            for (p__65764 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__65764));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__65764));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_fft_DistributedReal3dFft__closure__2)))au_edu_anu_fft_DistributedReal3dFft__closure__2(source, dataSize, temp, target))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* source;
    x10_int dataSize;
    ::x10::regionarray::DistArray<x10_complex>* temp;
    ::x10::regionarray::DistArray<x10_complex>* target;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->source);
        buf.write(this->dataSize);
        buf.write(this->temp);
        buf.write(this->target);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_fft_DistributedReal3dFft__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_fft_DistributedReal3dFft__closure__1>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_source = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_int that_dataSize = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_complex>* that_temp = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::DistArray<x10_complex>* that_target = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_fft_DistributedReal3dFft__closure__1* this_ = new (storage) au_edu_anu_fft_DistributedReal3dFft__closure__1(that_source, that_dataSize, that_temp, that_target, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_fft_DistributedReal3dFft__closure__1(::x10::regionarray::DistArray<x10_double>* source, x10_int dataSize, ::x10::regionarray::DistArray<x10_complex>* temp, ::x10::regionarray::DistArray<x10_complex>* target, ::x10::regionarray::Dist* __lowerer__var__0__) : source(source), dataSize(dataSize), temp(temp), target(target), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10:46-73";
    }

};

#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_fft_DistributedReal3dFft__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Array<x10_complex>* localTarget = ::x10aux::nullCheck(source)->x10::regionarray::DistArray<x10_complex>::getLocalPortion();
        
        //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localTarget)->FMGL(region);
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Region* gridRegionWithoutZ = ::x10aux::nullCheck(localRegion)->eliminate(
                                                           ((x10_long)2ll));
        
        //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        x10_int howMany = ((x10_int) (::x10aux::nullCheck(gridRegionWithoutZ)->size()));
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planC2C = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<fftw_complex*>(source->raw()->raw), reinterpret_cast<fftw_complex*>(temp->raw()->raw), false);
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::au::edu::anu::fft::DistributedReal3dFft::transpose< x10_complex >(
          temp, source);
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::au::edu::anu::fft::DistributedReal3dFft::transpose< x10_complex >(
          temp, source);
        
        //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planC2R = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<fftw_complex*>(source->raw()->raw), reinterpret_cast<double*>(temp2->raw()->raw));
        
        //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2R);
        
        //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::au::edu::anu::fft::DistributedReal3dFft::transpose< x10_double >(
          temp2, target);
        
        //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planC2C);
        
        //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planC2R);
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_complex>* source;
    x10_int dataSize;
    ::x10::regionarray::DistArray<x10_complex>* temp;
    ::x10::regionarray::DistArray<x10_double>* temp2;
    ::x10::regionarray::DistArray<x10_double>* target;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->source);
        buf.write(this->dataSize);
        buf.write(this->temp);
        buf.write(this->temp2);
        buf.write(this->target);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_fft_DistributedReal3dFft__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_fft_DistributedReal3dFft__closure__4>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_complex>* that_source = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        x10_int that_dataSize = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_complex>* that_temp = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::DistArray<x10_double>* that_temp2 = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::DistArray<x10_double>* that_target = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        au_edu_anu_fft_DistributedReal3dFft__closure__4* this_ = new (storage) au_edu_anu_fft_DistributedReal3dFft__closure__4(that_source, that_dataSize, that_temp, that_temp2, that_target);
        return this_;
    }
    
    au_edu_anu_fft_DistributedReal3dFft__closure__4(::x10::regionarray::DistArray<x10_complex>* source, x10_int dataSize, ::x10::regionarray::DistArray<x10_complex>* temp, ::x10::regionarray::DistArray<x10_double>* temp2, ::x10::regionarray::DistArray<x10_double>* target) : source(source), dataSize(dataSize), temp(temp), temp2(temp2), target(target) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10:85-105";
    }

};

#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_fft_DistributedReal3dFft__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__65779;
            for (p__65779 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__65779));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__65779));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_fft_DistributedReal3dFft__closure__4)))au_edu_anu_fft_DistributedReal3dFft__closure__4(source, dataSize, temp, temp2, target))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_complex>* source;
    x10_int dataSize;
    ::x10::regionarray::DistArray<x10_complex>* temp;
    ::x10::regionarray::DistArray<x10_double>* temp2;
    ::x10::regionarray::DistArray<x10_double>* target;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->source);
        buf.write(this->dataSize);
        buf.write(this->temp);
        buf.write(this->temp2);
        buf.write(this->target);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_fft_DistributedReal3dFft__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_fft_DistributedReal3dFft__closure__3>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_complex>* that_source = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        x10_int that_dataSize = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_complex>* that_temp = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::DistArray<x10_double>* that_temp2 = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::DistArray<x10_double>* that_target = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_fft_DistributedReal3dFft__closure__3* this_ = new (storage) au_edu_anu_fft_DistributedReal3dFft__closure__3(that_source, that_dataSize, that_temp, that_temp2, that_target, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_fft_DistributedReal3dFft__closure__3(::x10::regionarray::DistArray<x10_complex>* source, x10_int dataSize, ::x10::regionarray::DistArray<x10_complex>* temp, ::x10::regionarray::DistArray<x10_double>* temp2, ::x10::regionarray::DistArray<x10_double>* target, ::x10::regionarray::Dist* __lowerer__var__0__) : source(source), dataSize(dataSize), temp(temp), temp2(temp2), target(target), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10:85-105";
    }

};

#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__3_CLOSURE

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
void au::edu::anu::fft::DistributedReal3dFft::doFFT3d(::x10::regionarray::DistArray<x10_double>* source,
                                                      ::x10::regionarray::DistArray<x10_complex>* target,
                                                      ::x10::regionarray::DistArray<x10_complex>* temp) {
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    x10_int dataSize = ((((x10_int) (((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->max(
                                         ((x10_long)0ll))) - (::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->min(
                                                                ((x10_long)0ll))))))) + (((x10_int)1)));
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    if ((::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                 ((x10_long)1ll)))) {
        
        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan plan = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft3d(dataSize, dataSize, dataSize, reinterpret_cast<double*>(source->raw()->raw), reinterpret_cast<fftw_complex*>(target->raw()->raw));
        
        //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(plan);
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(plan);
    } else {
        {
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__65769 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    {
                        ::x10::lang::Runtime::ensureNotInAtomic();
                        ::x10::regionarray::Dist* __lowerer__var__0__ =
                          ::x10::regionarray::Dist::makeUnique(
                            ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->places());
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____65766;
                            for (__lowerer__var__1____65766 =
                                   ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____65766));
                                 ) {
                                ::x10::lang::Place __lowerer__var__1__ =
                                  ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____65766));
                                ::x10::lang::Runtime::runAsync(
                                  __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_fft_DistributedReal3dFft__closure__1)))au_edu_anu_fft_DistributedReal3dFft__closure__1(source, dataSize, temp, target, __lowerer__var__0__))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc85) {
                {
                    ::x10::lang::CheckedThrowable* ct__65767 =
                      __exc85;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__65767);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__65769);
        }
    }
    
}

//#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
void au::edu::anu::fft::DistributedReal3dFft::doFFT3d(::x10::regionarray::DistArray<x10_complex>* source,
                                                      ::x10::regionarray::DistArray<x10_double>* target,
                                                      ::x10::regionarray::DistArray<x10_complex>* temp,
                                                      ::x10::regionarray::DistArray<x10_double>* temp2) {
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    x10_int dataSize = ((((x10_int) (((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->max(
                                         ((x10_long)0ll))) - (::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->min(
                                                                ((x10_long)0ll))))))) + (((x10_int)1)));
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    if ((::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                 ((x10_long)1ll)))) {
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan plan = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft3d(dataSize, dataSize, dataSize, reinterpret_cast<fftw_complex*>(source->raw()->raw), reinterpret_cast<double*>(target->raw()->raw));
        
        //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(plan);
        
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(plan);
    } else {
        {
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__65784 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    {
                        ::x10::lang::Runtime::ensureNotInAtomic();
                        ::x10::regionarray::Dist* __lowerer__var__0__ =
                          ::x10::regionarray::Dist::makeUnique(
                            ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->places());
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____65781;
                            for (__lowerer__var__1____65781 =
                                   ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____65781));
                                 ) {
                                ::x10::lang::Place __lowerer__var__1__ =
                                  ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____65781));
                                ::x10::lang::Runtime::runAsync(
                                  __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_fft_DistributedReal3dFft__closure__3)))au_edu_anu_fft_DistributedReal3dFft__closure__3(source, dataSize, temp, temp2, target, __lowerer__var__0__))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc87) {
                {
                    ::x10::lang::CheckedThrowable* ct__65782 =
                      __exc87;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__65782);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__65784);
        }
    }
    
}

//#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
::au::edu::anu::fft::DistributedReal3dFft* au::edu::anu::fft::DistributedReal3dFft::au__edu__anu__fft__DistributedReal3dFft____this__au__edu__anu__fft__DistributedReal3dFft(
  ) {
    return this;
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
void au::edu::anu::fft::DistributedReal3dFft::_constructor(
  ) {
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    ::au::edu::anu::fft::DistributedReal3dFft* this__65755 =
      this;
    
}
::au::edu::anu::fft::DistributedReal3dFft* au::edu::anu::fft::DistributedReal3dFft::_make(
  ) {
    ::au::edu::anu::fft::DistributedReal3dFft* this_ = new (::x10aux::alloc_z< ::au::edu::anu::fft::DistributedReal3dFft>()) ::au::edu::anu::fft::DistributedReal3dFft();
    this_->_constructor();
    return this_;
}



//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
void au::edu::anu::fft::DistributedReal3dFft::__fieldInitializers_au_edu_anu_fft_DistributedReal3dFft(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::fft::DistributedReal3dFft::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::fft::DistributedReal3dFft::_deserializer);

void au::edu::anu::fft::DistributedReal3dFft::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::fft::DistributedReal3dFft::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::fft::DistributedReal3dFft* this_ = new (::x10aux::alloc_z< ::au::edu::anu::fft::DistributedReal3dFft>()) ::au::edu::anu::fft::DistributedReal3dFft();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::fft::DistributedReal3dFft::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::fft::DistributedReal3dFft::rtt;
void au::edu::anu::fft::DistributedReal3dFft::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.fft.DistributedReal3dFft",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__2>au_edu_anu_fft_DistributedReal3dFft__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_fft_DistributedReal3dFft__closure__2::__apply, &au_edu_anu_fft_DistributedReal3dFft__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_fft_DistributedReal3dFft__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_fft_DistributedReal3dFft__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__1>au_edu_anu_fft_DistributedReal3dFft__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_fft_DistributedReal3dFft__closure__1::__apply, &au_edu_anu_fft_DistributedReal3dFft__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_fft_DistributedReal3dFft__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_fft_DistributedReal3dFft__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__4>au_edu_anu_fft_DistributedReal3dFft__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_fft_DistributedReal3dFft__closure__4::__apply, &au_edu_anu_fft_DistributedReal3dFft__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_fft_DistributedReal3dFft__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_fft_DistributedReal3dFft__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_fft_DistributedReal3dFft__closure__3>au_edu_anu_fft_DistributedReal3dFft__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_fft_DistributedReal3dFft__closure__3::__apply, &au_edu_anu_fft_DistributedReal3dFft__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_fft_DistributedReal3dFft__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_fft_DistributedReal3dFft__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of DistributedReal3dFft */
/*************************************************/
