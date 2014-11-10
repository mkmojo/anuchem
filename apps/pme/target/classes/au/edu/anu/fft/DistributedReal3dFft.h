#ifndef __AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H
#define __AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H

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
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace util { 
class Team;
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
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace au { namespace edu { namespace anu { namespace fft { 

class DistributedReal3dFft : public ::x10::lang::X10Class   {
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
    virtual ::au::edu::anu::fft::DistributedReal3dFft* au__edu__anu__fft__DistributedReal3dFft____this__au__edu__anu__fft__DistributedReal3dFft(
      );
    void _constructor();
    
    static ::au::edu::anu::fft::DistributedReal3dFft* _make(
             );
    
    virtual void __fieldInitializers_au_edu_anu_fft_DistributedReal3dFft(
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
#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H

namespace au { namespace edu { namespace anu { namespace fft { 
class DistributedReal3dFft;
} } } } 

#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_NODEPS
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_NODEPS
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
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Array.h>
#include <x10/util/Team.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class au_edu_anu_fft_DistributedReal3dFft__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Array<TPMGL(T)>* localTarget = ::x10aux::nullCheck(target)->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
        
        //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        x10_long i2 = ((x10_long)0ll);
        
        //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::regionarray::Region* p__65729 = transferRegion;
        x10_long z__63607min__65730 = ::x10aux::nullCheck(p__65729)->min(
                                        ((x10_long)2ll));
        x10_long z__63607max__65731 = ::x10aux::nullCheck(p__65729)->max(
                                        ((x10_long)2ll));
        x10_long y__63626min__65732 = ::x10aux::nullCheck(p__65729)->min(
                                        ((x10_long)1ll));
        x10_long y__63626max__65733 = ::x10aux::nullCheck(p__65729)->max(
                                        ((x10_long)1ll));
        x10_long x__63645min__65734 = ::x10aux::nullCheck(p__65729)->min(
                                        ((x10_long)0ll));
        x10_long x__63645max__65735 = ::x10aux::nullCheck(p__65729)->max(
                                        ((x10_long)0ll));
        {
            x10_long x__65736;
            for (x__65736 = x__63645min__65734; ((x__65736) <= (x__63645max__65735));
                 x__65736 = ((x__65736) + (((x10_long)1ll)))) {
                x10_long x__65737 = x__65736;
                {
                    x10_long y__65738;
                    for (y__65738 = y__63626min__65732; ((y__65738) <= (y__63626max__65733));
                         y__65738 = ((y__65738) + (((x10_long)1ll))))
                    {
                        x10_long y__65739 = y__65738;
                        {
                            x10_long z__65740;
                            for (z__65740 = z__63607min__65730;
                                 ((z__65740) <= (z__63607max__65731));
                                 z__65740 = ((z__65740) + (((x10_long)1ll))))
                            {
                                x10_long z__65741 = z__65740;
                                
                                //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__65723 = z__65741;
                                x10_long i__65724 = x__65737;
                                x10_long i__65725 = y__65739;
                                TPMGL(T) v__65726 = elementsToTransfer->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                      (__extension__ ({
                                                          
                                                          //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                                                          x10_long pre__65727 =
                                                            i2;
                                                          i2 =
                                                            ((i2) + (((x10_long)1ll)));
                                                          pre__65727;
                                                      }))
                                                      );
                                TPMGL(T) ret__65728;
                                
                                //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ::x10aux::nullCheck(localTarget)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  (__extension__ ({
                                      
                                      //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long i__65719 =
                                        i__65723;
                                      x10_long i__65720 =
                                        i__65724;
                                      x10_long i__65721 =
                                        i__65725;
                                      x10_long ret__65722;
                                      
                                      //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long offset__65718 =
                                        ((i__65719) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min0)));
                                      
                                      //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__65718 = ((((((offset__65718) * (::x10aux::nullCheck(localTarget)->FMGL(layout_stride1)))) + (i__65720))) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min1)));
                                      
                                      //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__65718 = ((((((offset__65718) * (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((x10_long)0ll))))) + (i__65721))) - (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                        ((x10_long)1ll))));
                                      
                                      //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      ret__65722 = offset__65718;
                                      ret__65722;
                                  }))
                                  , v__65726);
                                
                                //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__65728 = v__65726;
                                
                                //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__65728;
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
        au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_target = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::Region* that_transferRegion = buf.read< ::x10::regionarray::Region*>();
        ::x10::lang::Rail< TPMGL(T) >* that_elementsToTransfer = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >* this_ = new (storage) au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >(that_target, that_transferRegion, that_elementsToTransfer);
        return this_;
    }
    
    au_edu_anu_fft_DistributedReal3dFft__closure__5(::x10::regionarray::DistArray<TPMGL(T)>* target, ::x10::regionarray::Region* transferRegion, ::x10::lang::Rail< TPMGL(T) >* elementsToTransfer) : target(target), transferRegion(transferRegion), elementsToTransfer(elementsToTransfer) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10:151-158";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) > >au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::__apply, &au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_GENERICS
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_GENERICS
#ifndef AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_transpose_88
#define AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_transpose_88
template<class TPMGL(T)> void au::edu::anu::fft::DistributedReal3dFft::transpose(
  ::x10::regionarray::DistArray<TPMGL(T)>* source, ::x10::regionarray::DistArray<TPMGL(T)>* target) {
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    ::x10::regionarray::Dist* sourceDist = ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->__bar(
                                             ::x10::lang::Place::_make(::x10aux::here));
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    x10_long sourceStartX = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->min(
                              ((x10_long)0ll));
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    x10_long sourceEndX = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->max(
                            ((x10_long)0ll));
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    x10_long sourceStartY = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->min(
                              ((x10_long)1ll));
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    x10_long sourceEndY = ::x10aux::nullCheck(::x10aux::nullCheck(sourceDist)->FMGL(region))->max(
                            ((x10_long)1ll));
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
    ::x10::regionarray::Array<TPMGL(T)>* localSource = ::x10aux::nullCheck(source)->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
    {
        
        //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__65791 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                ::x10::lang::PlaceGroup* allPlaces = ::x10::lang::Place::places();
                
                //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                ::x10::lang::Place p2 = allPlaces->next(::x10::lang::Place::_make(::x10aux::here));
                
                //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                do {
                    
                    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    ::x10::regionarray::Dist* targetDist =
                      ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(dist))->__bar(
                        p2);
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    x10_long startX = (__extension__ ({
                        
                        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65603 = sourceStartX;
                        x10_long b__65604 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->min(
                                              ((x10_long)1ll));
                        ((a__65603) < (b__65604)) ? (b__65604)
                          : (a__65603);
                    }))
                    ;
                    
                    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    x10_long endX = (__extension__ ({
                        
                        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65605 = sourceEndX;
                        x10_long b__65606 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->max(
                                              ((x10_long)1ll));
                        ((a__65605) < (b__65606)) ? (a__65605)
                          : (b__65606);
                    }))
                    ;
                    
                    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    x10_long startY = (__extension__ ({
                        
                        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65607 = sourceStartY;
                        x10_long b__65608 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->min(
                                              ((x10_long)2ll));
                        ((a__65607) < (b__65608)) ? (b__65608)
                          : (a__65607);
                    }))
                    ;
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    x10_long endY = (__extension__ ({
                        
                        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_long a__65609 = sourceEndY;
                        x10_long b__65610 = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->max(
                                              ((x10_long)2ll));
                        ((a__65609) < (b__65610)) ? (a__65609)
                          : (b__65610);
                    }))
                    ;
                    
                    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    x10_long startZ = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->min(
                                        ((x10_long)0ll));
                    
                    //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    x10_long endZ = ::x10aux::nullCheck(::x10aux::nullCheck(targetDist)->FMGL(region))->max(
                                      ((x10_long)0ll));
                    
                    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    ::x10::regionarray::Region* transferRegion =
                      (__extension__ ({
                        
                        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                        ::x10::lang::LongRange r__65611 =
                          ::x10::lang::LongRange::_make(startX, endX);
                        ::x10::lang::LongRange r__65612 =
                          ::x10::lang::LongRange::_make(startY, endY);
                        ::x10::lang::LongRange r__65613 =
                          ::x10::lang::LongRange::_make(startZ, endZ);
                        ::x10::regionarray::Region::makeRectangular(
                          r__65611, r__65612, r__65613);
                    }))
                    ;
                    
                    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    if (((::x10aux::nullCheck(transferRegion)->size()) > (((x10_long)0ll))))
                    {
                        
                        //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                        if ((::x10aux::struct_equals(p2, ::x10::lang::Place::_make(::x10aux::here))))
                        {
                            
                            //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                            ::x10::regionarray::Array<TPMGL(T)>* localTarget =
                              ::x10aux::nullCheck(target)->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
                            
                            //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                            ::x10::regionarray::Region* p__65695 =
                              transferRegion;
                            x10_long z__63489min__65696 =
                              ::x10aux::nullCheck(p__65695)->min(
                                ((x10_long)2ll));
                            x10_long z__63489max__65697 =
                              ::x10aux::nullCheck(p__65695)->max(
                                ((x10_long)2ll));
                            x10_long y__63508min__65698 =
                              ::x10aux::nullCheck(p__65695)->min(
                                ((x10_long)1ll));
                            x10_long y__63508max__65699 =
                              ::x10aux::nullCheck(p__65695)->max(
                                ((x10_long)1ll));
                            x10_long x__63527min__65700 =
                              ::x10aux::nullCheck(p__65695)->min(
                                ((x10_long)0ll));
                            x10_long x__63527max__65701 =
                              ::x10aux::nullCheck(p__65695)->max(
                                ((x10_long)0ll));
                            {
                                x10_long x__65702;
                                for (x__65702 = x__63527min__65700;
                                     ((x__65702) <= (x__63527max__65701));
                                     x__65702 = ((x__65702) + (((x10_long)1ll))))
                                {
                                    x10_long x__65703 = x__65702;
                                    {
                                        x10_long y__65704;
                                        for (y__65704 = y__63508min__65698;
                                             ((y__65704) <= (y__63508max__65699));
                                             y__65704 = ((y__65704) + (((x10_long)1ll))))
                                        {
                                            x10_long y__65705 =
                                              y__65704;
                                            {
                                                x10_long z__65706;
                                                for (z__65706 =
                                                       z__63489min__65696;
                                                     ((z__65706) <= (z__63489max__65697));
                                                     z__65706 =
                                                       ((z__65706) + (((x10_long)1ll))))
                                                {
                                                    x10_long z__65707 =
                                                      z__65706;
                                                    
                                                    //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    x10_long i__65686 =
                                                      z__65707;
                                                    x10_long i__65687 =
                                                      x__65703;
                                                    x10_long i__65688 =
                                                      y__65705;
                                                    TPMGL(T) v__65689 =
                                                      (__extension__ ({
                                                        
                                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                        x10_long i__65690 =
                                                          x__65703;
                                                        x10_long i__65691 =
                                                          y__65705;
                                                        x10_long i__65692 =
                                                          z__65707;
                                                        TPMGL(T) ret__65693;
                                                        
                                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                        ret__65693 =
                                                          ::x10aux::nullCheck(localSource)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                            (__extension__ ({
                                                                
                                                                //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                x10_long i__65677 =
                                                                  i__65690;
                                                                x10_long i__65678 =
                                                                  i__65691;
                                                                x10_long i__65679 =
                                                                  i__65692;
                                                                x10_long ret__65680;
                                                                
                                                                //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                x10_long offset__65676 =
                                                                  ((i__65677) - (::x10aux::nullCheck(localSource)->FMGL(layout_min0)));
                                                                
                                                                //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                offset__65676 =
                                                                  ((((((offset__65676) * (::x10aux::nullCheck(localSource)->FMGL(layout_stride1)))) + (i__65678))) - (::x10aux::nullCheck(localSource)->FMGL(layout_min1)));
                                                                
                                                                //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                offset__65676 =
                                                                  ((((((offset__65676) * (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll))))) + (i__65679))) - (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                    ((x10_long)1ll))));
                                                                
                                                                //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                ret__65680 =
                                                                  offset__65676;
                                                                ret__65680;
                                                            }))
                                                            );
                                                        ret__65693;
                                                    }))
                                                    ;
                                                    TPMGL(T) ret__65694;
                                                    
                                                    //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    ::x10aux::nullCheck(localTarget)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                                      (__extension__ ({
                                                          
                                                          //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          x10_long i__65682 =
                                                            i__65686;
                                                          x10_long i__65683 =
                                                            i__65687;
                                                          x10_long i__65684 =
                                                            i__65688;
                                                          x10_long ret__65685;
                                                          
                                                          //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          x10_long offset__65681 =
                                                            ((i__65682) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min0)));
                                                          
                                                          //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          offset__65681 =
                                                            ((((((offset__65681) * (::x10aux::nullCheck(localTarget)->FMGL(layout_stride1)))) + (i__65683))) - (::x10aux::nullCheck(localTarget)->FMGL(layout_min1)));
                                                          
                                                          //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          offset__65681 =
                                                            ((((((offset__65681) * (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                      ((x10_long)0ll))))) + (i__65684))) - (::x10aux::nullCheck(::x10aux::nullCheck(localTarget)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                              ((x10_long)1ll))));
                                                          
                                                          //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          ret__65685 =
                                                            offset__65681;
                                                          ret__65685;
                                                      }))
                                                      , v__65689);
                                                    
                                                    //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    ret__65694 =
                                                      v__65689;
                                                    
                                                    //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                    ret__65694;
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                }
                            }
                            
                        } else {
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                            ::x10::lang::Rail< TPMGL(T) >* elementsToTransfer =
                              ::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(transferRegion)->size());
                            
                            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                            x10_long i = ((x10_long)0ll);
                            
                            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                            ::x10::regionarray::Region* p__65742 =
                              transferRegion;
                            x10_long z__63548min__65743 =
                              ::x10aux::nullCheck(p__65742)->min(
                                ((x10_long)2ll));
                            x10_long z__63548max__65744 =
                              ::x10aux::nullCheck(p__65742)->max(
                                ((x10_long)2ll));
                            x10_long y__63567min__65745 =
                              ::x10aux::nullCheck(p__65742)->min(
                                ((x10_long)1ll));
                            x10_long y__63567max__65746 =
                              ::x10aux::nullCheck(p__65742)->max(
                                ((x10_long)1ll));
                            x10_long x__63586min__65747 =
                              ::x10aux::nullCheck(p__65742)->min(
                                ((x10_long)0ll));
                            x10_long x__63586max__65748 =
                              ::x10aux::nullCheck(p__65742)->max(
                                ((x10_long)0ll));
                            {
                                x10_long x__65749;
                                for (x__65749 = x__63586min__65747;
                                     ((x__65749) <= (x__63586max__65748));
                                     x__65749 = ((x__65749) + (((x10_long)1ll))))
                                {
                                    x10_long x__65750 = x__65749;
                                    {
                                        x10_long y__65751;
                                        for (y__65751 = y__63567min__65745;
                                             ((y__65751) <= (y__63567max__65746));
                                             y__65751 = ((y__65751) + (((x10_long)1ll))))
                                        {
                                            x10_long y__65752 =
                                              y__65751;
                                            {
                                                x10_long z__65753;
                                                for (z__65753 =
                                                       z__63548min__65743;
                                                     ((z__65753) <= (z__63548max__65744));
                                                     z__65753 =
                                                       ((z__65753) + (((x10_long)1ll))))
                                                {
                                                    x10_long z__65754 =
                                                      z__65753;
                                                    
                                                    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                                                    elementsToTransfer->x10::lang::template Rail< TPMGL(T) >::__set(
                                                      (__extension__ ({
                                                          x10_long pre__65713 =
                                                            i;
                                                          i =
                                                            ((i) + (((x10_long)1ll)));
                                                          pre__65713;
                                                      }))
                                                      , (__extension__ ({
                                                          
                                                          //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          x10_long i__65714 =
                                                            x__65750;
                                                          x10_long i__65715 =
                                                            y__65752;
                                                          x10_long i__65716 =
                                                            z__65754;
                                                          TPMGL(T) ret__65717;
                                                          
                                                          //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                          ret__65717 =
                                                            ::x10aux::nullCheck(localSource)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                              (__extension__ ({
                                                                  
                                                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  x10_long i__65709 =
                                                                    i__65714;
                                                                  x10_long i__65710 =
                                                                    i__65715;
                                                                  x10_long i__65711 =
                                                                    i__65716;
                                                                  x10_long ret__65712;
                                                                  
                                                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  x10_long offset__65708 =
                                                                    ((i__65709) - (::x10aux::nullCheck(localSource)->FMGL(layout_min0)));
                                                                  
                                                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  offset__65708 =
                                                                    ((((((offset__65708) * (::x10aux::nullCheck(localSource)->FMGL(layout_stride1)))) + (i__65710))) - (::x10aux::nullCheck(localSource)->FMGL(layout_min1)));
                                                                  
                                                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  offset__65708 =
                                                                    ((((((offset__65708) * (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                              ((x10_long)0ll))))) + (i__65711))) - (::x10aux::nullCheck(::x10aux::nullCheck(localSource)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                      ((x10_long)1ll))));
                                                                  
                                                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                  ret__65712 =
                                                                    offset__65708;
                                                                  ret__65712;
                                                              }))
                                                              );
                                                          ret__65717;
                                                      }))
                                                      );
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                }
                            }
                            
                            //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                            ::x10::lang::Runtime::runAsync(
                              p2, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T)>)))au_edu_anu_fft_DistributedReal3dFft__closure__5<TPMGL(T)>(target, transferRegion, elementsToTransfer))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                        
                    }
                    
                    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/fft/DistributedReal3dFft.x10"
                    p2 = allPlaces->next(p2);
                } while ((!::x10aux::struct_equals(p2, allPlaces->next(
                                                         ::x10::lang::Place::_make(::x10aux::here)))));
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc89) {
            {
                ::x10::lang::CheckedThrowable* ct__65789 =
                  __exc89;
                {
                    ::x10::lang::Runtime::pushException(ct__65789);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__65791);
    }
}
#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_transpose_88
#endif // AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_GENERICS
#endif // __AU_EDU_ANU_FFT_DISTRIBUTEDREAL3DFFT_H_NODEPS
