/*************************************************/
/* START of DistributedReal3dFft_SPMD */
#include <au/edu/anu/fft/DistributedReal3dFft_SPMD.h>


//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
void au::edu::anu::fft::DistributedReal3dFft_SPMD::doFFT3d(::x10::regionarray::DistArray<x10_double>* source,
                                                           ::x10::regionarray::DistArray<x10_complex>* target,
                                                           ::x10::regionarray::DistArray<x10_complex>* temp) {
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    x10_int dataSize = ((((x10_int) (((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->max(
                                         ((x10_long)0ll))) - (::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->min(
                                                                ((x10_long)0ll))))))) + (((x10_int)1)));
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    if ((::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                 ((x10_long)1ll)))) {
        
        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan plan = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft3d(dataSize, dataSize, dataSize, reinterpret_cast<double*>(source->raw()->raw), reinterpret_cast<fftw_complex*>(target->raw()->raw));
        
        //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(plan);
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(plan);
    } else {
        
        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Array<x10_double>* localSource =
          ::x10aux::nullCheck(source)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localSource)->FMGL(region);
        
        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Region* gridRegionWithoutZ = ::x10aux::nullCheck(localRegion)->eliminate(
                                                           ((x10_long)2ll));
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        x10_int howMany = ((x10_int) (::x10aux::nullCheck(gridRegionWithoutZ)->size()));
        
        //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planR2C = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<double*>(source->raw()->raw), reinterpret_cast<fftw_complex*>(temp->raw()->raw));
        
        //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planR2C);
        
        //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        x10_int diagonal = ((((dataSize) / ::x10aux::zeroCheck(((x10_int)2)))) + (((x10_int)1)));
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Region* p__65507 = gridRegionWithoutZ;
        x10_long j__55052min__65508 = ::x10aux::nullCheck(p__65507)->min(
                                        ((x10_long)1ll));
        x10_long j__55052max__65509 = ::x10aux::nullCheck(p__65507)->max(
                                        ((x10_long)1ll));
        x10_long i__55071min__65510 = ::x10aux::nullCheck(p__65507)->min(
                                        ((x10_long)0ll));
        x10_long i__55071max__65511 = ::x10aux::nullCheck(p__65507)->max(
                                        ((x10_long)0ll));
        {
            x10_long i__65512;
            for (i__65512 = i__55071min__65510; ((i__65512) <= (i__55071max__65511));
                 i__65512 = ((i__65512) + (((x10_long)1ll))))
            {
                x10_long i__65513 = i__65512;
                {
                    x10_long j__65514;
                    for (j__65514 = j__55052min__65508; ((j__65514) <= (j__55052max__65509));
                         j__65514 = ((j__65514) + (((x10_long)1ll))))
                    {
                        x10_long j__65515 = j__65514;
                        
                        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                        x10_int i__55033min__65503 = diagonal;
                        x10_int i__55033max__65504 = ((dataSize) - (((x10_int)1)));
                        {
                            x10_int i__65505;
                            for (i__65505 = i__55033min__65503;
                                 ((i__65505) <= (i__55033max__65504));
                                 i__65505 = ((i__65505) + (((x10_int)1))))
                            {
                                x10_int k__65506 = i__65505;
                                
                                //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                                ::x10aux::nullCheck(temp)->x10::regionarray::DistArray<x10_complex>::__set(
                                  i__65513, j__65515, ((x10_long)(k__65506)),
                                  ::x10::lang::ComplexNatives::conj(::x10aux::nullCheck(temp)->x10::regionarray::DistArray<x10_complex>::__apply(
                                                                      i__65513,
                                                                      j__65515,
                                                                      ((x10_long)(((dataSize) - (k__65506)))))));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose< x10_complex >(
          temp, target);
        
        //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planC2C = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<fftw_complex*>(target->raw()->raw), reinterpret_cast<fftw_complex*>(temp->raw()->raw), true);
        
        //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose< x10_complex >(
          temp, target);
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose< x10_complex >(
          temp, target);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planR2C);
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planC2C);
    }
    
}

//#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
void au::edu::anu::fft::DistributedReal3dFft_SPMD::doFFT3d(
  ::x10::regionarray::DistArray<x10_complex>* source, ::x10::regionarray::DistArray<x10_double>* target,
  ::x10::regionarray::DistArray<x10_complex>* temp, ::x10::regionarray::DistArray<x10_double>* temp2) {
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    x10_int dataSize = ((((x10_int) (((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->max(
                                         ((x10_long)0ll))) - (::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->FMGL(region))->min(
                                                                ((x10_long)0ll))))))) + (((x10_int)1)));
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    if ((::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                 ((x10_long)1ll)))) {
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan plan = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft3d(dataSize, dataSize, dataSize, reinterpret_cast<fftw_complex*>(source->raw()->raw), reinterpret_cast<double*>(target->raw()->raw));
        
        //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(plan);
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(plan);
    } else {
        
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Array<x10_complex>* localTarget =
          ::x10aux::nullCheck(source)->x10::regionarray::DistArray<x10_complex>::getLocalPortion();
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localTarget)->FMGL(region);
        
        //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Region* gridRegionWithoutZ = ::x10aux::nullCheck(localRegion)->eliminate(
                                                           ((x10_long)2ll));
        
        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        x10_int howMany = ((x10_int) (::x10aux::nullCheck(gridRegionWithoutZ)->size()));
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planC2C = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<fftw_complex*>(source->raw()->raw), reinterpret_cast<fftw_complex*>(temp->raw()->raw), false);
        
        //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose< x10_complex >(
          temp, source);
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2C);
        
        //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose< x10_complex >(
          temp, source);
        
        //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
        
        //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTW_FFTWPlan planC2R = ::edu::mit::fftw::FFTWWrapper::fftwPlanDft1d(dataSize, howMany, reinterpret_cast<fftw_complex*>(source->raw()->raw), reinterpret_cast<double*>(temp2->raw()->raw));
        
        //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwExecute(planC2R);
        
        //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose< x10_double >(
          temp2, target);
        
        //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planC2C);
        
        //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::edu::mit::fftw::FFTWWrapper::fftwDestroyPlan(planC2R);
    }
    
}

//#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
::au::edu::anu::fft::DistributedReal3dFft_SPMD* au::edu::anu::fft::DistributedReal3dFft_SPMD::au__edu__anu__fft__DistributedReal3dFft_SPMD____this__au__edu__anu__fft__DistributedReal3dFft_SPMD(
  ) {
    return this;
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
void au::edu::anu::fft::DistributedReal3dFft_SPMD::_constructor(
  ) {
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    ::au::edu::anu::fft::DistributedReal3dFft_SPMD* this__65595 =
      this;
    
}
::au::edu::anu::fft::DistributedReal3dFft_SPMD* au::edu::anu::fft::DistributedReal3dFft_SPMD::_make(
  ) {
    ::au::edu::anu::fft::DistributedReal3dFft_SPMD* this_ = new (::x10aux::alloc_z< ::au::edu::anu::fft::DistributedReal3dFft_SPMD>()) ::au::edu::anu::fft::DistributedReal3dFft_SPMD();
    this_->_constructor();
    return this_;
}



//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
void au::edu::anu::fft::DistributedReal3dFft_SPMD::__fieldInitializers_au_edu_anu_fft_DistributedReal3dFft_SPMD(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::fft::DistributedReal3dFft_SPMD::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::fft::DistributedReal3dFft_SPMD::_deserializer);

void au::edu::anu::fft::DistributedReal3dFft_SPMD::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::fft::DistributedReal3dFft_SPMD::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::fft::DistributedReal3dFft_SPMD* this_ = new (::x10aux::alloc_z< ::au::edu::anu::fft::DistributedReal3dFft_SPMD>()) ::au::edu::anu::fft::DistributedReal3dFft_SPMD();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::fft::DistributedReal3dFft_SPMD::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::fft::DistributedReal3dFft_SPMD::rtt;
void au::edu::anu::fft::DistributedReal3dFft_SPMD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.fft.DistributedReal3dFft_SPMD",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of DistributedReal3dFft_SPMD */
/*************************************************/
