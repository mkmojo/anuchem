#ifndef __AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H
#define __AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H

#include <x10rt.h>

#include "FFTW_typedef.h"

namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace edu { namespace mit { namespace fftw { 
class FFTW__FFTWPlan;
} } } 
namespace edu { namespace mit { namespace fftw { 
class FFTW;
} } } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace au { namespace edu { namespace anu { namespace fft { 

class DistributedReal3dFft_SPMD : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void doFFT3d(::x10::regionarray::DistArray<x10_double>* source,
                        ::x10::regionarray::DistArray<x10_complex>* target,
                        ::x10::regionarray::DistArray<x10_complex>* temp);
    static void doFFT3d(::x10::regionarray::DistArray<x10_complex>* source,
                        ::x10::regionarray::DistArray<x10_double>* target,
                        ::x10::regionarray::DistArray<x10_complex>* temp,
                        ::x10::regionarray::DistArray<x10_double>* temp2);
    template<class TPMGL(T)> static void transpose(::x10::regionarray::DistArray<TPMGL(T)>* source,
                                                   ::x10::regionarray::DistArray<TPMGL(T)>* target);
    virtual ::au::edu::anu::fft::DistributedReal3dFft_SPMD* au__edu__anu__fft__DistributedReal3dFft_SPMD____this__au__edu__anu__fft__DistributedReal3dFft_SPMD(
      );
    void _constructor();
    
    static ::au::edu::anu::fft::DistributedReal3dFft_SPMD* _make(
             );
    
    virtual void __fieldInitializers_au_edu_anu_fft_DistributedReal3dFft_SPMD(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H

namespace au { namespace edu { namespace anu { namespace fft { 
class DistributedReal3dFft_SPMD;
} } } } 

#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_NODEPS
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_NODEPS
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Double.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/regionarray/Region.h>
#include <x10/regionarray/Dist.h>
#include <x10/lang/Place.h>
#include <edu/mit/fftw/FFTW__FFTWPlan.h>
#include <edu/mit/fftw/FFTW.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Team.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Rail.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Array<TPMGL(T)>* localTarget = ::x10aux::nullCheck(target)->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
        
        //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        x10_long i2 = ((x10_long)0ll);
        
        //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::regionarray::Region* p__65569 = transferRegion;
        x10_long z__55210min__65570 = ::x10aux::nullCheck(p__65569)->min(
                                        ((x10_long)2ll));
        x10_long z__55210max__65571 = ::x10aux::nullCheck(p__65569)->max(
                                        ((x10_long)2ll));
        x10_long y__55229min__65572 = ::x10aux::nullCheck(p__65569)->min(
                                        ((x10_long)1ll));
        x10_long y__55229max__65573 = ::x10aux::nullCheck(p__65569)->max(
                                        ((x10_long)1ll));
        x10_long x__55248min__65574 = ::x10aux::nullCheck(p__65569)->min(
                                        ((x10_long)0ll));
        x10_long x__55248max__65575 = ::x10aux::nullCheck(p__65569)->max(
                                        ((x10_long)0ll));
        {
            x10_long x__65576;
            for (x__65576 = x__55248min__65574; ((x__65576) <= (x__55248max__65575));
                 x__65576 = ((x__65576) + (((x10_long)1ll)))) {
                x10_long x__65577 = x__65576;
                {
                    x10_long y__65578;
                    for (y__65578 = y__55229min__65572; ((y__65578) <= (y__55229max__65573));
                         y__65578 = ((y__65578) + (((x10_long)1ll))))
                    {
                        x10_long y__65579 = y__65578;
                        {
                            x10_long z__65580;
                            for (z__65580 = z__55210min__65570;
                                 ((z__65580) <= (z__55210max__65571));
                                 z__65580 = ((z__65580) + (((x10_long)1ll))))
                            {
                                x10_long z__65581 = z__65580;
                                
                                //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__65563 = z__65581;
                                x10_long i__65564 = x__65577;
                                x10_long i__65565 = y__65579;
                                TPMGL(T) v__65566 = elementsToTransfer->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                      (__extension__ ({
                                                          
                                                          //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                                                          x10_long pre__65567 =
                                                            i2;
                                                          i2 =
                                                            ((i2) + (((x10_long)1ll)));
                                                          pre__65567;
                                                      }))
                                                      );
                                TPMGL(T) ret__65568;
                                
                                //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ::x10aux::nullCheck(localTarget)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  (__extension__ ({
                                      
                                      //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long i__65559 =
                                        i__65563;
                                      x10_long i__65560 =
                                        i__65564;
                                      x10_long i__65561 =
                                        i__65565;
                                      x10_long ret__65562;
                                      
                                      //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long offset__65558 =
                                        ((i__65559) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min0)));
                                      
                                      //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__65558 = ((((((offset__65558) * (::x10aux::nullCheck(localTarget)->FMGL(layout_stride1)))) + (i__65560))) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min1)));
                                      
                                      //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__65558 = ((((((offset__65558) * (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((x10_long)0ll))))) + (i__65561))) - (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                        ((x10_long)1ll))));
                                      
                                      //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      ret__65562 = offset__65558;
                                      ret__65562;
                                  }))
                                  , v__65566);
                                
                                //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__65568 = v__65566;
                                
                                //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__65568;
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* target;
    ::x10::regionarray::Region* transferRegion;
    ::x10::lang::Rail< TPMGL(T) >* elementsToTransfer;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->target);
        buf.write(this->transferRegion);
        buf.write(this->elementsToTransfer);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_target = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::Region* that_transferRegion = buf.read< ::x10::regionarray::Region*>();
        ::x10::lang::Rail< TPMGL(T) >* that_elementsToTransfer = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >* this_ = new (storage) au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >(that_target, that_transferRegion, that_elementsToTransfer);
        return this_;
    }
    
    au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1(::x10::regionarray::DistArray<TPMGL(T)>* target, ::x10::regionarray::Region* transferRegion, ::x10::lang::Rail< TPMGL(T) >* elementsToTransfer) : target(target), transferRegion(transferRegion), elementsToTransfer(elementsToTransfer) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10:147-154";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) > >au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::__apply, &au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_GENERICS
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_GENERICS
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_transpose_80
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_transpose_80
template<class TPMGL(T)> void au::edu::anu::fft::DistributedReal3dFft_SPMD::transpose(
  ::x10::regionarray::DistArray<TPMGL(T)>* source, ::x10::regionarray::DistArray<TPMGL(T)>* target) {
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    ::x10::regionarray::Dist* sourceDist = ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->__bar(
                                             ::x10::lang::Place::_make(::x10aux::here));
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    x10_long sourceStartX = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->min(
                              ((x10_long)0ll));
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    x10_long sourceEndX = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->max(
                            ((x10_long)0ll));
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    x10_long sourceStartY = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->min(
                              ((x10_long)1ll));
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    x10_long sourceEndY = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->max(
                            ((x10_long)1ll));
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
    ::x10::regionarray::Array<TPMGL(T)>* localSource = ::x10aux::nullCheck(source)->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
    {
        
        //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__65601 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                ::x10::lang::PlaceGroup* allPlaces = ::x10::lang::Place::places();
                
                //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                ::x10::lang::Place p2 = allPlaces->next(::x10::lang::Place::_make(::x10aux::here));
                
                //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                do {
                    
                    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    ::x10::regionarray::Dist* targetDist =
                      ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->__bar(
                        p2);
                    
                    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    x10_long startX = (__extension__ ({
                        
                        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65443 = sourceStartX;
                        x10_long b__65444 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->min(
                                              ((x10_long)1ll));
                        ((a__65443) < (b__65444)) ? (b__65444)
                          : (a__65443);
                    }))
                    ;
                    
                    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    x10_long endX = (__extension__ ({
                        
                        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65445 = sourceEndX;
                        x10_long b__65446 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->max(
                                              ((x10_long)1ll));
                        ((a__65445) < (b__65446)) ? (a__65445)
                          : (b__65446);
                    }))
                    ;
                    
                    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    x10_long startY = (__extension__ ({
                        
                        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65447 = sourceStartY;
                        x10_long b__65448 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->min(
                                              ((x10_long)2ll));
                        ((a__65447) < (b__65448)) ? (b__65448)
                          : (a__65447);
                    }))
                    ;
                    
                    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    x10_long endY = (__extension__ ({
                        
                        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65449 = sourceEndY;
                        x10_long b__65450 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->max(
                                              ((x10_long)2ll));
                        ((a__65449) < (b__65450)) ? (a__65449)
                          : (b__65450);
                    }))
                    ;
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    x10_long startZ = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->min(
                                        ((x10_long)0ll));
                    
                    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    x10_long endZ = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->max(
                                      ((x10_long)0ll));
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    ::x10::regionarray::Region* transferRegion =
                      (__extension__ ({
                        
                        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                        ::x10::lang::LongRange r__65451 =
                          ::x10::lang::LongRange::_make(startX, endX);
                        ::x10::lang::LongRange r__65452 =
                          ::x10::lang::LongRange::_make(startY, endY);
                        ::x10::lang::LongRange r__65453 =
                          ::x10::lang::LongRange::_make(startZ, endZ);
                        ::x10::regionarray::Region::makeRectangular(
                          r__65451, r__65452, r__65453);
                    }))
                    ;
                    
                    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    if (((::x10aux::nullCheck(transferRegion)->size()) > (((x10_long)0ll))))
                    {
                        
                        //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                        if ((::x10aux::struct_equals(p2, ::x10::lang::Place::_make(::x10aux::here))))
                        {
                            
                            //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                            ::x10::regionarray::Array<TPMGL(T)>* localTarget =
                              ::x10aux::nullCheck(target)->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
                            
                            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                            ::x10::regionarray::Region* p__65535 =
                              transferRegion;
                            x10_long z__55092min__65536 =
                              ::x10aux::nullCheck(p__65535)->min(
                                ((x10_long)2ll));
                            x10_long z__55092max__65537 =
                              ::x10aux::nullCheck(p__65535)->max(
                                ((x10_long)2ll));
                            x10_long y__55111min__65538 =
                              ::x10aux::nullCheck(p__65535)->min(
                                ((x10_long)1ll));
                            x10_long y__55111max__65539 =
                              ::x10aux::nullCheck(p__65535)->max(
                                ((x10_long)1ll));
                            x10_long x__55130min__65540 =
                              ::x10aux::nullCheck(p__65535)->min(
                                ((x10_long)0ll));
                            x10_long x__55130max__65541 =
                              ::x10aux::nullCheck(p__65535)->max(
                                ((x10_long)0ll));
                            {
                                x10_long x__65542;
                                for (x__65542 = x__55130min__65540;
                                     ((x__65542) <= (x__55130max__65541));
                                     x__65542 = ((x__65542) + (((x10_long)1ll))))
                                {
                                    x10_long x__65543 = x__65542;
                                    {
                                        x10_long y__65544;
                                        for (y__65544 = y__55111min__65538;
                                             ((y__65544) <= (y__55111max__65539));
                                             y__65544 = ((y__65544) + (((x10_long)1ll))))
                                        {
                                            x10_long y__65545 =
                                              y__65544;
                                            {
                                                x10_long z__65546;
                                                for (z__65546 =
                                                       z__55092min__65536;
                                                     ((z__65546) <= (z__55092max__65537));
                                                     z__65546 =
                                                       ((z__65546) + (((x10_long)1ll))))
                                                {
                                                    x10_long z__65547 =
                                                      z__65546;
                                                    
                                                    //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    x10_long i__65526 =
                                                      z__65547;
                                                    x10_long i__65527 =
                                                      x__65543;
                                                    x10_long i__65528 =
                                                      y__65545;
                                                    TPMGL(T) v__65529 =
                                                      (__extension__ ({
                                                        
                                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                        x10_long i__65530 =
                                                          x__65543;
                                                        x10_long i__65531 =
                                                          y__65545;
                                                        x10_long i__65532 =
                                                          z__65547;
                                                        TPMGL(T) ret__65533;
                                                        
                                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                        ret__65533 =
                                                          ::x10aux::nullCheck(localSource)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                            (__extension__ ({
                                                                
                                                                //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                x10_long i__65517 =
                                                                  i__65530;
                                                                x10_long i__65518 =
                                                                  i__65531;
                                                                x10_long i__65519 =
                                                                  i__65532;
                                                                x10_long ret__65520;
                                                                
                                                                //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                x10_long offset__65516 =
                                                                  ((i__65517) - (::x10aux::nullCheck(localSource)->FMGL(layout_min0)));
                                                                
                                                                //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                offset__65516 =
                                                                  ((((((offset__65516) * (::x10aux::nullCheck(localSource)->FMGL(layout_stride1)))) + (i__65518))) - (::x10aux::nullCheck(localSource)->FMGL(layout_min1)));
                                                                
                                                                //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                offset__65516 =
                                                                  ((((((offset__65516) * (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll))))) + (i__65519))) - (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                    ((x10_long)1ll))));
                                                                
                                                                //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                ret__65520 =
                                                                  offset__65516;
                                                                ret__65520;
                                                            }))
                                                            );
                                                        ret__65533;
                                                    }))
                                                    ;
                                                    TPMGL(T) ret__65534;
                                                    
                                                    //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    ::x10aux::nullCheck(localTarget)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                                      (__extension__ ({
                                                          
                                                          //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          x10_long i__65522 =
                                                            i__65526;
                                                          x10_long i__65523 =
                                                            i__65527;
                                                          x10_long i__65524 =
                                                            i__65528;
                                                          x10_long ret__65525;
                                                          
                                                          //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          x10_long offset__65521 =
                                                            ((i__65522) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min0)));
                                                          
                                                          //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          offset__65521 =
                                                            ((((((offset__65521) * (::x10aux::nullCheck(localTarget)->FMGL(layout_stride1)))) + (i__65523))) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min1)));
                                                          
                                                          //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          offset__65521 =
                                                            ((((((offset__65521) * (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                      ((x10_long)0ll))))) + (i__65524))) - (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                              ((x10_long)1ll))));
                                                          
                                                          //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          ret__65525 =
                                                            offset__65521;
                                                          ret__65525;
                                                      }))
                                                      , v__65529);
                                                    
                                                    //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    ret__65534 =
                                                      v__65529;
                                                    
                                                    //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    ret__65534;
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                }
                            }
                            
                        } else {
                            
                            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                            ::x10::lang::Rail< TPMGL(T) >* elementsToTransfer =
                              ::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(transferRegion)->size());
                            
                            //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                            x10_long i = ((x10_long)0ll);
                            
                            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                            ::x10::regionarray::Region* p__65582 =
                              transferRegion;
                            x10_long z__55151min__65583 =
                              ::x10aux::nullCheck(p__65582)->min(
                                ((x10_long)2ll));
                            x10_long z__55151max__65584 =
                              ::x10aux::nullCheck(p__65582)->max(
                                ((x10_long)2ll));
                            x10_long y__55170min__65585 =
                              ::x10aux::nullCheck(p__65582)->min(
                                ((x10_long)1ll));
                            x10_long y__55170max__65586 =
                              ::x10aux::nullCheck(p__65582)->max(
                                ((x10_long)1ll));
                            x10_long x__55189min__65587 =
                              ::x10aux::nullCheck(p__65582)->min(
                                ((x10_long)0ll));
                            x10_long x__55189max__65588 =
                              ::x10aux::nullCheck(p__65582)->max(
                                ((x10_long)0ll));
                            {
                                x10_long x__65589;
                                for (x__65589 = x__55189min__65587;
                                     ((x__65589) <= (x__55189max__65588));
                                     x__65589 = ((x__65589) + (((x10_long)1ll))))
                                {
                                    x10_long x__65590 = x__65589;
                                    {
                                        x10_long y__65591;
                                        for (y__65591 = y__55170min__65585;
                                             ((y__65591) <= (y__55170max__65586));
                                             y__65591 = ((y__65591) + (((x10_long)1ll))))
                                        {
                                            x10_long y__65592 =
                                              y__65591;
                                            {
                                                x10_long z__65593;
                                                for (z__65593 =
                                                       z__55151min__65583;
                                                     ((z__65593) <= (z__55151max__65584));
                                                     z__65593 =
                                                       ((z__65593) + (((x10_long)1ll))))
                                                {
                                                    x10_long z__65594 =
                                                      z__65593;
                                                    
                                                    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                                                    elementsToTransfer->x10::lang::template Rail< TPMGL(T) >::__set(
                                                      (__extension__ ({
                                                          x10_long pre__65553 =
                                                            i;
                                                          i =
                                                            ((i) + (((x10_long)1ll)));
                                                          pre__65553;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          x10_long i__65554 =
                                                            x__65590;
                                                          x10_long i__65555 =
                                                            y__65592;
                                                          x10_long i__65556 =
                                                            z__65594;
                                                          TPMGL(T) ret__65557;
                                                          
                                                          //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          ret__65557 =
                                                            ::x10aux::nullCheck(localSource)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                              (__extension__ ({
                                                                  
                                                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  x10_long i__65549 =
                                                                    i__65554;
                                                                  x10_long i__65550 =
                                                                    i__65555;
                                                                  x10_long i__65551 =
                                                                    i__65556;
                                                                  x10_long ret__65552;
                                                                  
                                                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  x10_long offset__65548 =
                                                                    ((i__65549) - (::x10aux::nullCheck(localSource)->FMGL(layout_min0)));
                                                                  
                                                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  offset__65548 =
                                                                    ((((((offset__65548) * (::x10aux::nullCheck(localSource)->FMGL(layout_stride1)))) + (i__65550))) - (::x10aux::nullCheck(localSource)->FMGL(layout_min1)));
                                                                  
                                                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  offset__65548 =
                                                                    ((((((offset__65548) * (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                              ((x10_long)0ll))))) + (i__65551))) - (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                      ((x10_long)1ll))));
                                                                  
                                                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  ret__65552 =
                                                                    offset__65548;
                                                                  ret__65552;
                                                              }))
                                                              );
                                                          ret__65557;
                                                      }))
                                                      );
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                }
                            }
                            
                            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                            ::x10::lang::Runtime::runAsync(
                              p2, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T)>)))au_edu_anu_fft_DistributedReal3dFft_SPMD__closure__1<TPMGL(T)>(target, transferRegion, elementsToTransfer))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                        
                    }
                    
                    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft_SPMD.x10"
                    p2 = allPlaces->next(p2);
                } while ((!::x10aux::struct_equals(p2, allPlaces->next(
                                                         ::x10::lang::Place::_make(::x10aux::here)))));
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc81) {
            {
                ::x10::lang::CheckedThrowable* ct__65599 =
                  __exc81;
                {
                    ::x10::lang::Runtime::pushException(ct__65599);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__65601);
    }
}
#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_transpose_80
#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_GENERICS
#endif // __AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_SPMD_H_NODEPS
