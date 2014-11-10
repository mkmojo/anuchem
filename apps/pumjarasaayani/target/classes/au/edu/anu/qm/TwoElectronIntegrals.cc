/*************************************************/
/* START of TwoElectronIntegrals */
#include <au/edu/anu/qm/TwoElectronIntegrals.h>

#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Int.h>
#include <x10/lang/Math.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <au/edu/anu/qm/ShellList.h>
#include <x10/matrix/DenseMatrix.h>
#include <au/edu/anu/qm/Density.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/qm/Power.h>
#include <x10x/vector/Vector3d.h>
#include <x10/matrix/Matrix.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
x10_double au::edu::anu::qm::TwoElectronIntegrals::FMGL(SQ2PI) = 0.797884560802865;

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"

//#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::_constructor(x10_int maxam, ::x10::lang::Rail< x10_double >* normFactors,
                                                          x10_double omega,
                                                          x10_double Th) {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::au::edu::anu::qm::TwoElectronIntegrals* this__115058 = this;
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(omega) = omega;
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(maxam) = ((x10_long)(maxam));
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(maxam2) = ((x10_long)(((((x10_int)2)) * (maxam))));
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int maxam4 = ((((x10_int)4)) * (maxam));
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_long maxamN = ((((((((x10_long)(maxam))) + (((x10_long)1ll)))) * (((((x10_long)(maxam))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)));
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(maxam2M) = ((((((this->FMGL(maxam2)) + (((x10_long)1ll)))) * (((this->FMGL(maxam2)) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)));
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_long maxam2N = ((((this->FMGL(maxam2)) + (((x10_long)1ll)))) * (((this->FMGL(maxam2M)) + (((x10_long)1ll)))));
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(maxam2N) = maxam2N;
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(normFactors) = normFactors;
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(THRESH) = Th;
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(TCrit) = (-(::x10::lang::MathNatives::log(Th)));
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(gmt) = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(maxam4))) + (((x10_long)1ll))));
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(zeroM) = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(maxam4))) + (((x10_long)1ll))));
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(rM) = ((__extension__ ({
                          ::x10::regionarray::Array<x10_double>* alloc__72559 =
                             (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
                          
                          //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ::x10::regionarray::Region* reg__115061 =
                            (__extension__ ({
                              
                              //#line 211 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                              ::x10::lang::LongRange r__115062 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((((x10_long)(maxam4))) + (((x10_long)1ll))));
                              ::x10::lang::LongRange r__115063 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((((((((x10_long)(maxam4))) + (((x10_long)1ll)))) * (((((x10_long)(maxam4))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll))));
                              ::x10::regionarray::Region::makeRectangular(
                                r__115062, r__115063);
                          }))
                          ;
                          
                          //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          alloc__72559->FMGL(region) = (reg__115061);
                          alloc__72559->FMGL(rank) = ::x10aux::nullCheck(reg__115061)->FMGL(rank);
                          alloc__72559->FMGL(rect) = ::x10aux::nullCheck(reg__115061)->FMGL(rect);
                          alloc__72559->FMGL(zeroBased) = ::x10aux::nullCheck(reg__115061)->FMGL(zeroBased);
                          alloc__72559->FMGL(rail) = ::x10aux::nullCheck(reg__115061)->FMGL(rail);
                          alloc__72559->FMGL(size) = ::x10aux::nullCheck(reg__115061)->size();
                          
                          //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ::x10::regionarray::Array__LayoutHelper crh__115059 =
                             ::x10::regionarray::Array__LayoutHelper::_alloc();
                          (crh__115059)->::x10::regionarray::Array__LayoutHelper::_constructor(
                            reg__115061);
                          
                          //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          alloc__72559->FMGL(layout_min0) =
                            crh__115059->FMGL(min0);
                          
                          //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          alloc__72559->FMGL(layout_stride1) =
                            crh__115059->FMGL(stride1);
                          
                          //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          alloc__72559->FMGL(layout_min1) =
                            crh__115059->FMGL(min1);
                          
                          //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          alloc__72559->FMGL(layout) = crh__115059->FMGL(layout);
                          
                          //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long n__115060 = crh__115059->FMGL(size);
                          
                          //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          alloc__72559->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__115060);
                          alloc__72559;
                      }))
                      );
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(pqInts) = ((__extension__ ({
                              ::x10::regionarray::Array<x10_double>* alloc__72560 =
                                 (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
                              
                              //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ::x10::regionarray::Region* reg__115066 =
                                (__extension__ ({
                                  
                                  //#line 263 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                                  ::x10::lang::LongRange r__115067 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2));
                                  ::x10::lang::LongRange r__115068 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2M));
                                  ::x10::lang::LongRange r__115069 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2));
                                  ::x10::lang::LongRange r__115070 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2M));
                                  ::x10::regionarray::Region::makeRectangular(
                                    r__115067, r__115068,
                                    r__115069, r__115070);
                              }))
                              ;
                              
                              //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72560->FMGL(region) =
                                (reg__115066);
                              alloc__72560->FMGL(rank) = ::x10aux::nullCheck(reg__115066)->FMGL(rank);
                              alloc__72560->FMGL(rect) = ::x10aux::nullCheck(reg__115066)->FMGL(rect);
                              alloc__72560->FMGL(zeroBased) =
                                ::x10aux::nullCheck(reg__115066)->FMGL(zeroBased);
                              alloc__72560->FMGL(rail) = ::x10aux::nullCheck(reg__115066)->FMGL(rail);
                              alloc__72560->FMGL(size) = ::x10aux::nullCheck(reg__115066)->size();
                              
                              //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ::x10::regionarray::Array__LayoutHelper crh__115064 =
                                 ::x10::regionarray::Array__LayoutHelper::_alloc();
                              (crh__115064)->::x10::regionarray::Array__LayoutHelper::_constructor(
                                reg__115066);
                              
                              //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72560->FMGL(layout_min0) =
                                crh__115064->FMGL(min0);
                              
                              //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72560->FMGL(layout_stride1) =
                                crh__115064->FMGL(stride1);
                              
                              //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72560->FMGL(layout_min1) =
                                crh__115064->FMGL(min1);
                              
                              //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72560->FMGL(layout) =
                                crh__115064->FMGL(layout);
                              
                              //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long n__115065 = crh__115064->FMGL(size);
                              
                              //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72560->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__115065);
                              alloc__72560;
                          }))
                          );
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(npint) = ((__extension__ ({
                             ::x10::regionarray::Array<x10_double>* alloc__72561 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
                             
                             //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             ::x10::regionarray::Region* reg__115073 =
                               (__extension__ ({
                                 
                                 //#line 211 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                                 ::x10::lang::LongRange r__115074 =
                                   ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2));
                                 ::x10::lang::LongRange r__115075 =
                                   ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2M));
                                 ::x10::regionarray::Region::makeRectangular(
                                   r__115074, r__115075);
                             }))
                             ;
                             
                             //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             alloc__72561->FMGL(region) =
                               (reg__115073);
                             alloc__72561->FMGL(rank) = ::x10aux::nullCheck(reg__115073)->FMGL(rank);
                             alloc__72561->FMGL(rect) = ::x10aux::nullCheck(reg__115073)->FMGL(rect);
                             alloc__72561->FMGL(zeroBased) =
                               ::x10aux::nullCheck(reg__115073)->FMGL(zeroBased);
                             alloc__72561->FMGL(rail) = ::x10aux::nullCheck(reg__115073)->FMGL(rail);
                             alloc__72561->FMGL(size) = ::x10aux::nullCheck(reg__115073)->size();
                             
                             //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             ::x10::regionarray::Array__LayoutHelper crh__115071 =
                                ::x10::regionarray::Array__LayoutHelper::_alloc();
                             (crh__115071)->::x10::regionarray::Array__LayoutHelper::_constructor(
                               reg__115073);
                             
                             //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             alloc__72561->FMGL(layout_min0) =
                               crh__115071->FMGL(min0);
                             
                             //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             alloc__72561->FMGL(layout_stride1) =
                               crh__115071->FMGL(stride1);
                             
                             //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             alloc__72561->FMGL(layout_min1) =
                               crh__115071->FMGL(min1);
                             
                             //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             alloc__72561->FMGL(layout) =
                               crh__115071->FMGL(layout);
                             
                             //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             x10_long n__115072 = crh__115071->FMGL(size);
                             
                             //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                             alloc__72561->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__115072);
                             alloc__72561;
                         }))
                         );
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->FMGL(pcdint) = ((__extension__ ({
                              ::x10::regionarray::Array<x10_double>* alloc__72562 =
                                 (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
                              
                              //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ::x10::regionarray::Region* reg__115078 =
                                (__extension__ ({
                                  
                                  //#line 263 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                                  ::x10::lang::LongRange r__115079 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), ((maxamN) + (((x10_long)1ll))));
                                  ::x10::lang::LongRange r__115080 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), ((maxamN) + (((x10_long)1ll))));
                                  ::x10::lang::LongRange r__115081 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2));
                                  ::x10::lang::LongRange r__115082 =
                                    ::x10::lang::LongRange::_make(((x10_long)0ll), this->FMGL(maxam2M));
                                  ::x10::regionarray::Region::makeRectangular(
                                    r__115079, r__115080,
                                    r__115081, r__115082);
                              }))
                              ;
                              
                              //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72562->FMGL(region) =
                                (reg__115078);
                              alloc__72562->FMGL(rank) = ::x10aux::nullCheck(reg__115078)->FMGL(rank);
                              alloc__72562->FMGL(rect) = ::x10aux::nullCheck(reg__115078)->FMGL(rect);
                              alloc__72562->FMGL(zeroBased) =
                                ::x10aux::nullCheck(reg__115078)->FMGL(zeroBased);
                              alloc__72562->FMGL(rail) = ::x10aux::nullCheck(reg__115078)->FMGL(rail);
                              alloc__72562->FMGL(size) = ::x10aux::nullCheck(reg__115078)->size();
                              
                              //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ::x10::regionarray::Array__LayoutHelper crh__115076 =
                                 ::x10::regionarray::Array__LayoutHelper::_alloc();
                              (crh__115076)->::x10::regionarray::Array__LayoutHelper::_constructor(
                                reg__115078);
                              
                              //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72562->FMGL(layout_min0) =
                                crh__115076->FMGL(min0);
                              
                              //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72562->FMGL(layout_stride1) =
                                crh__115076->FMGL(stride1);
                              
                              //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72562->FMGL(layout_min1) =
                                crh__115076->FMGL(min1);
                              
                              //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72562->FMGL(layout) =
                                crh__115076->FMGL(layout);
                              
                              //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long n__115077 = crh__115076->FMGL(size);
                              
                              //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              alloc__72562->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__115077);
                              alloc__72562;
                          }))
                          );
}
::au::edu::anu::qm::TwoElectronIntegrals* au::edu::anu::qm::TwoElectronIntegrals::_make(
  x10_int maxam, ::x10::lang::Rail< x10_double >* normFactors,
  x10_double omega, x10_double Th) {
    ::au::edu::anu::qm::TwoElectronIntegrals* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::TwoElectronIntegrals>()) ::au::edu::anu::qm::TwoElectronIntegrals();
    this_->_constructor(maxam, normFactors, omega, Th);
    return this_;
}



//#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
x10_int au::edu::anu::qm::TwoElectronIntegrals::compute2EAndRecord(
  ::au::edu::anu::qm::ContractedGaussian a, ::au::edu::anu::qm::ContractedGaussian b,
  ::au::edu::anu::qm::ContractedGaussian c, ::au::edu::anu::qm::ContractedGaussian d,
  ::au::edu::anu::qm::ShellList shellList, ::x10::matrix::DenseMatrix* jMat,
  ::x10::matrix::DenseMatrix* kMat, ::au::edu::anu::qm::Density* dMat) {
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d aCen = a->FMGL(origin);
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d bCen = b->FMGL(origin);
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d cCen = c->FMGL(origin);
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d dCen = d->FMGL(origin);
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int dAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__113816 = d->FMGL(power);
        this__113816->FMGL(maxam);
    }))
    ;
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int cAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__113817 = c->FMGL(power);
        this__113817->FMGL(maxam);
    }))
    ;
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int bAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__113818 = b->FMGL(power);
        this__113818->FMGL(maxam);
    }))
    ;
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int aAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__113819 = a->FMGL(power);
        this__113819->FMGL(maxam);
    }))
    ;
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellA =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113820 = aAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113820)));
    }))
    ;
    
    //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellB =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113821 = bAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113821)));
    }))
    ;
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellC =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113822 = cAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113822)));
    }))
    ;
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellD =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113823 = dAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113823)));
    }))
    ;
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int dLim = ((((((dAng) + (((x10_int)1)))) * (((dAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int cLim = ((((((cAng) + (((x10_int)1)))) * (((cAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int bLim = ((((((bAng) + (((x10_int)1)))) * (((bAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int aLim = ((((((aAng) + (((x10_int)1)))) * (((aAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int nTot = ((((((aLim) * (bLim))) * (cLim))) * (dLim));
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int dStrt = d->FMGL(intIndex);
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int cStrt = c->FMGL(intIndex);
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int bStrt = b->FMGL(intIndex);
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int aStrt = a->FMGL(intIndex);
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int angMomAB = ((aAng) + (bAng));
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int angMomCD = ((cAng) + (dAng));
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int angMomABCD = ((angMomAB) + (angMomCD));
    
    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double radiusABSquared = (__extension__ ({
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::ContractedGaussian cg__113824 =
          b;
        (__extension__ ({
            ::x10x::vector::Point3d this__113829 = a->FMGL(origin);
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__113825 = cg__113824->FMGL(origin);
            x10_double ret__113830;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__115083 = ((this__113829->FMGL(i)) - (b__113825->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__115084 = ((this__113829->FMGL(j)) - (b__113825->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__115085 = ((this__113829->FMGL(k)) - (b__113825->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__113830 = ((((((di__115083) * (di__115083))) + (((dj__115084) * (dj__115084))))) + (((dk__115085) * (dk__115085))));
            ret__113830;
        }))
        ;
    }))
    ;
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double radiusCDSquared = (__extension__ ({
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::ContractedGaussian cg__113832 =
          d;
        (__extension__ ({
            ::x10x::vector::Point3d this__113837 = c->FMGL(origin);
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__113833 = cg__113832->FMGL(origin);
            x10_double ret__113838;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__115086 = ((this__113837->FMGL(i)) - (b__113833->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__115087 = ((this__113837->FMGL(j)) - (b__113833->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__115088 = ((this__113837->FMGL(k)) - (b__113833->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__113838 = ((((((di__115086) * (di__115086))) + (((dj__115087) * (dj__115087))))) + (((dk__115088) * (dk__115088))));
            ret__113838;
        }))
        ;
    }))
    ;
    
    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* aExps = a->FMGL(exponents);
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* aCoeffs = a->FMGL(coefficients);
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* bExps = b->FMGL(exponents);
    
    //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* bCoeffs = b->FMGL(coefficients);
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* cExps = c->FMGL(exponents);
    
    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* cCoeffs = c->FMGL(coefficients);
    
    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* dExps = d->FMGL(exponents);
    
    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* dCoeffs = d->FMGL(coefficients);
    
    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_long i__72618max__115134 = (((x10_long)(::x10aux::nullCheck(aExps)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__115135;
        for (i__115135 = ((x10_long)0ll); ((i__115135) <= (i__72618max__115134));
             i__115135 = ((i__115135) + (((x10_long)1ll))))
        {
            x10_long ap__115136 = i__115135;
            
            //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_double aAlpha__115132 = ::x10aux::nullCheck(aExps)->x10::lang::Rail< x10_double >::__apply(
                                          ap__115136);
            
            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_double aCoeff__115133 = ::x10aux::nullCheck(aCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                          ap__115136);
            
            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_long i__72600max__115129 = (((x10_long)(::x10aux::nullCheck(bExps)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__115130;
                for (i__115130 = ((x10_long)0ll); ((i__115130) <= (i__72600max__115129));
                     i__115130 = ((i__115130) + (((x10_long)1ll))))
                {
                    x10_long bp__115131 = i__115130;
                    
                    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::x10aux::nullCheck(this->FMGL(pcdint))->x10::regionarray::Array<x10_double>::clear();
                    
                    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double bAlpha__115121 = ::x10aux::nullCheck(bExps)->x10::lang::Rail< x10_double >::__apply(
                                                  bp__115131);
                    
                    //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double gamma__115122 = ((aAlpha__115132) + (bAlpha__115121));
                    
                    //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double sigmaP__115123 = ((1.0) / (gamma__115122));
                    
                    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double bCoeff__115124 = ::x10aux::nullCheck(bCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                                  bp__115131);
                    
                    //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::x10x::vector::Point3d p__115125 =  ::x10x::vector::Point3d::_alloc();
                    
                    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    x10_double i__115115 = ((((((aAlpha__115132) * (aCen->FMGL(i)))) + (((bAlpha__115121) * (bCen->FMGL(i)))))) * (sigmaP__115123));
                    x10_double j__115116 = ((((((aAlpha__115132) * (aCen->FMGL(j)))) + (((bAlpha__115121) * (bCen->FMGL(j)))))) * (sigmaP__115123));
                    x10_double k__115117 = ((((((aAlpha__115132) * (aCen->FMGL(k)))) + (((bAlpha__115121) * (bCen->FMGL(k)))))) * (sigmaP__115123));
                    
                    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    p__115125->FMGL(i) = i__115115;
                    p__115125->FMGL(j) = j__115116;
                    p__115125->FMGL(k) = k__115117;
                    
                    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double Gab__115126 = ::x10::lang::MathNatives::exp((((((((-(aAlpha__115132))) * (bAlpha__115121))) * (radiusABSquared))) * (sigmaP__115123)));
                    
                    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double pgx__115127 = ((3.141592653589793) * (sigmaP__115123));
                    
                    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double Up__115128 = ((((((aCoeff__115133) * (bCoeff__115124))) * (Gab__115126))) * (::x10::lang::MathNatives::sqrt(((((pgx__115127) * (pgx__115127))) * (pgx__115127)))));
                    
                    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_long i__72582max__115118 = (((x10_long)(::x10aux::nullCheck(cExps)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__115119;
                        for (i__115119 = ((x10_long)0ll);
                             ((i__115119) <= (i__72582max__115118));
                             i__115119 = ((i__115119) + (((x10_long)1ll))))
                        {
                            x10_long cp__115120 = i__115119;
                            
                            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_double cAlpha__115113 = ::x10aux::nullCheck(cExps)->x10::lang::Rail< x10_double >::__apply(
                                                          cp__115120);
                            
                            //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_double cCoeff__115114 = ::x10aux::nullCheck(cCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                                          cp__115120);
                            
                            //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_long i__72564max__115110 =
                              (((x10_long)(::x10aux::nullCheck(dExps)->FMGL(size))) - (((x10_long)1ll)));
                            {
                                x10_long i__115111;
                                for (i__115111 = ((x10_long)0ll);
                                     ((i__115111) <= (i__72564max__115110));
                                     i__115111 = ((i__115111) + (((x10_long)1ll))))
                                {
                                    x10_long dp__115112 =
                                      i__115111;
                                    
                                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double dAlpha__115095 =
                                      ::x10aux::nullCheck(dExps)->x10::lang::Rail< x10_double >::__apply(
                                        dp__115112);
                                    
                                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double dCoeff__115096 =
                                      ::x10aux::nullCheck(dCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                        dp__115112);
                                    
                                    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double gamma__115097 =
                                      ((cAlpha__115113) + (dAlpha__115095));
                                    
                                    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double sigmaQ__115098 =
                                      ((1.0) / (gamma__115097));
                                    
                                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double eta__115099 =
                                      ((((gamma__115122) * (gamma__115097))) / (((gamma__115122) + (gamma__115097))));
                                    
                                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::x10x::vector::Point3d q__115100 =
                                       ::x10x::vector::Point3d::_alloc();
                                    
                                    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    x10_double i__115092 =
                                      ((((((cAlpha__115113) * (cCen->FMGL(i)))) + (((dAlpha__115095) * (dCen->FMGL(i)))))) * (sigmaQ__115098));
                                    x10_double j__115093 =
                                      ((((((cAlpha__115113) * (cCen->FMGL(j)))) + (((dAlpha__115095) * (dCen->FMGL(j)))))) * (sigmaQ__115098));
                                    x10_double k__115094 =
                                      ((((((cAlpha__115113) * (cCen->FMGL(k)))) + (((dAlpha__115095) * (dCen->FMGL(k)))))) * (sigmaQ__115098));
                                    
                                    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    q__115100->FMGL(i) = i__115092;
                                    q__115100->FMGL(j) = j__115093;
                                    q__115100->FMGL(k) = k__115094;
                                    
                                    //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double Gcd__115101 =
                                      ::x10::lang::MathNatives::exp((((((((-(cAlpha__115113))) * (dAlpha__115095))) * (radiusCDSquared))) * (sigmaQ__115098)));
                                    
                                    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double qgx__115102 =
                                      ((3.141592653589793) * (sigmaQ__115098));
                                    
                                    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double Uq__115103 =
                                      ((((((cCoeff__115114) * (dCoeff__115096))) * (Gcd__115101))) * (::x10::lang::MathNatives::sqrt(((((qgx__115102) * (qgx__115102))) * (qgx__115102)))));
                                    
                                    //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::x10x::vector::Vector3d r__115104 =
                                      (__extension__ ({
                                        
                                        //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                        ::x10x::vector::Point3d b__115105 =
                                          p__115125;
                                        (__extension__ ({
                                            
                                            //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                            ::x10x::vector::Vector3d alloc__115106 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__115089 =
                                              ((q__115100->FMGL(i)) - (b__115105->FMGL(i)));
                                            x10_double j__115090 =
                                              ((q__115100->FMGL(j)) - (b__115105->FMGL(j)));
                                            x10_double k__115091 =
                                              ((q__115100->FMGL(k)) - (b__115105->FMGL(k)));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__115106->FMGL(i) =
                                              i__115089;
                                            alloc__115106->FMGL(j) =
                                              j__115090;
                                            alloc__115106->FMGL(k) =
                                              k__115091;
                                            alloc__115106;
                                        }))
                                        ;
                                    }))
                                    ;
                                    
                                    //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double radiusPQSquared__115107 =
                                      ((((((r__115104->FMGL(i)) * (r__115104->FMGL(i)))) + (((r__115104->FMGL(j)) * (r__115104->FMGL(j)))))) + (((r__115104->FMGL(k)) * (r__115104->FMGL(k)))));
                                    
                                    //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double T__115108 =
                                      ((radiusPQSquared__115107) * (eta__115099));
                                    
                                    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double Upq__115109 =
                                      ((Up__115128) * (Uq__115103));
                                    
                                    //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computeZeroM(angMomABCD,
                                                       T__115108,
                                                       Upq__115109,
                                                       eta__115099);
                                    
                                    //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computeRm(angMomABCD,
                                                    shellList,
                                                    r__115104);
                                    
                                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computePq(angMomAB,
                                                    angMomCD,
                                                    shellList);
                                    
                                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computePcd(angMomAB,
                                                     sigmaQ__115098,
                                                     q__115100,
                                                     dLim,
                                                     cLim,
                                                     shellD,
                                                     shellC,
                                                     dCen,
                                                     cCen);
                                }
                            }
                            
                        }
                    }
                    
                    //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    this->computeAbcd(dLim, cLim, bLim, aLim,
                                      dStrt, cStrt, bStrt,
                                      aStrt, shellB, shellA,
                                      aCen, bCen, p__115125,
                                      sigmaP__115123, jMat,
                                      kMat, reinterpret_cast< ::x10::matrix::DenseMatrix*>(dMat));
                }
            }
            
        }
    }
    
    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    return nTot;
    
}

//#line 234 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
x10_int au::edu::anu::qm::TwoElectronIntegrals::compute2EAndRecord2(
  ::au::edu::anu::qm::ContractedGaussian a, ::au::edu::anu::qm::ContractedGaussian b,
  ::au::edu::anu::qm::ContractedGaussian c, ::au::edu::anu::qm::ContractedGaussian d,
  ::au::edu::anu::qm::ShellList shellList, ::x10::matrix::DenseMatrix* jMat,
  ::x10::matrix::DenseMatrix* kMat, ::au::edu::anu::qm::Density* dMat,
  x10_double radiusABSquared, x10_int aAng, x10_int bAng,
  x10_int cAng, x10_int dAng, x10_int angMomAB, x10_int aStrt,
  x10_int bStrt, x10_int cStrt, x10_int dStrt, x10_int aLim,
  x10_int bLim) {
    
    //#line 243 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d aCen = a->FMGL(origin);
    
    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d bCen = b->FMGL(origin);
    
    //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d cCen = c->FMGL(origin);
    
    //#line 246 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10x::vector::Point3d dCen = d->FMGL(origin);
    
    //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellA =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113860 = aAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113860)));
    }))
    ;
    
    //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellB =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113861 = bAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113861)));
    }))
    ;
    
    //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellC =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113862 = cAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113862)));
    }))
    ;
    
    //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellD =
      (__extension__ ({
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int am__113863 = dAng;
        ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
          ((x10_long)(am__113863)));
    }))
    ;
    
    //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int dLim = ((((((dAng) + (((x10_int)1)))) * (((dAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int cLim = ((((((cAng) + (((x10_int)1)))) * (((cAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int nTot = ((((((aLim) * (bLim))) * (cLim))) * (dLim));
    
    //#line 257 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int angMomCD = ((cAng) + (dAng));
    
    //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int angMomABCD = ((angMomAB) + (angMomCD));
    
    //#line 260 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double radiusCDSquared = (__extension__ ({
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::ContractedGaussian cg__113864 =
          d;
        (__extension__ ({
            ::x10x::vector::Point3d this__113869 = c->FMGL(origin);
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__113865 = cg__113864->FMGL(origin);
            x10_double ret__113870;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__115137 = ((this__113869->FMGL(i)) - (b__113865->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__115138 = ((this__113869->FMGL(j)) - (b__113865->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__115139 = ((this__113869->FMGL(k)) - (b__113865->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__113870 = ((((((di__115137) * (di__115137))) + (((dj__115138) * (dj__115138))))) + (((dk__115139) * (dk__115139))));
            ret__113870;
        }))
        ;
    }))
    ;
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* aExps = a->FMGL(exponents);
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* aCoeffs = a->FMGL(coefficients);
    
    //#line 264 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* bExps = b->FMGL(exponents);
    
    //#line 265 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* bCoeffs = b->FMGL(coefficients);
    
    //#line 266 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* cExps = c->FMGL(exponents);
    
    //#line 267 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* cCoeffs = c->FMGL(coefficients);
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* dExps = d->FMGL(exponents);
    
    //#line 269 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* dCoeffs = d->FMGL(coefficients);
    
    //#line 271 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_long i__72690max__115185 = (((x10_long)(::x10aux::nullCheck(aExps)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__115186;
        for (i__115186 = ((x10_long)0ll); ((i__115186) <= (i__72690max__115185));
             i__115186 = ((i__115186) + (((x10_long)1ll))))
        {
            x10_long ap__115187 = i__115186;
            
            //#line 272 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_double aAlpha__115183 = ::x10aux::nullCheck(aExps)->x10::lang::Rail< x10_double >::__apply(
                                          ap__115187);
            
            //#line 273 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_double aCoeff__115184 = ::x10aux::nullCheck(aCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                          ap__115187);
            
            //#line 275 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_long i__72672max__115180 = (((x10_long)(::x10aux::nullCheck(bExps)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__115181;
                for (i__115181 = ((x10_long)0ll); ((i__115181) <= (i__72672max__115180));
                     i__115181 = ((i__115181) + (((x10_long)1ll))))
                {
                    x10_long bp__115182 = i__115181;
                    
                    //#line 276 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::x10aux::nullCheck(this->FMGL(pcdint))->x10::regionarray::Array<x10_double>::clear();
                    
                    //#line 277 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double bAlpha__115172 = ::x10aux::nullCheck(bExps)->x10::lang::Rail< x10_double >::__apply(
                                                  bp__115182);
                    
                    //#line 278 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double gamma__115173 = ((aAlpha__115183) + (bAlpha__115172));
                    
                    //#line 279 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double sigmaP__115174 = ((1.0) / (gamma__115173));
                    
                    //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double bCoeff__115175 = ::x10aux::nullCheck(bCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                                  bp__115182);
                    
                    //#line 284 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::x10x::vector::Point3d p__115176 =  ::x10x::vector::Point3d::_alloc();
                    
                    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    x10_double i__115166 = ((((((aAlpha__115183) * (aCen->FMGL(i)))) + (((bAlpha__115172) * (bCen->FMGL(i)))))) * (sigmaP__115174));
                    x10_double j__115167 = ((((((aAlpha__115183) * (aCen->FMGL(j)))) + (((bAlpha__115172) * (bCen->FMGL(j)))))) * (sigmaP__115174));
                    x10_double k__115168 = ((((((aAlpha__115183) * (aCen->FMGL(k)))) + (((bAlpha__115172) * (bCen->FMGL(k)))))) * (sigmaP__115174));
                    
                    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    p__115176->FMGL(i) = i__115166;
                    p__115176->FMGL(j) = j__115167;
                    p__115176->FMGL(k) = k__115168;
                    
                    //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double Gab__115177 = ::x10::lang::MathNatives::exp((((((((-(aAlpha__115183))) * (bAlpha__115172))) * (radiusABSquared))) * (sigmaP__115174)));
                    
                    //#line 291 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double pgx__115178 = ((3.141592653589793) * (sigmaP__115174));
                    
                    //#line 292 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double Up__115179 = ((((((aCoeff__115184) * (bCoeff__115175))) * (Gab__115177))) * (::x10::lang::MathNatives::sqrt(((((pgx__115178) * (pgx__115178))) * (pgx__115178)))));
                    
                    //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_long i__72654max__115169 = (((x10_long)(::x10aux::nullCheck(cExps)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__115170;
                        for (i__115170 = ((x10_long)0ll);
                             ((i__115170) <= (i__72654max__115169));
                             i__115170 = ((i__115170) + (((x10_long)1ll))))
                        {
                            x10_long cp__115171 = i__115170;
                            
                            //#line 297 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_double cAlpha__115164 = ::x10aux::nullCheck(cExps)->x10::lang::Rail< x10_double >::__apply(
                                                          cp__115171);
                            
                            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_double cCoeff__115165 = ::x10aux::nullCheck(cCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                                          cp__115171);
                            
                            //#line 300 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_long i__72636max__115161 =
                              (((x10_long)(::x10aux::nullCheck(dExps)->FMGL(size))) - (((x10_long)1ll)));
                            {
                                x10_long i__115162;
                                for (i__115162 = ((x10_long)0ll);
                                     ((i__115162) <= (i__72636max__115161));
                                     i__115162 = ((i__115162) + (((x10_long)1ll))))
                                {
                                    x10_long dp__115163 =
                                      i__115162;
                                    
                                    //#line 301 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double dAlpha__115146 =
                                      ::x10aux::nullCheck(dExps)->x10::lang::Rail< x10_double >::__apply(
                                        dp__115163);
                                    
                                    //#line 302 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double dCoeff__115147 =
                                      ::x10aux::nullCheck(dCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                        dp__115163);
                                    
                                    //#line 304 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double gamma__115148 =
                                      ((cAlpha__115164) + (dAlpha__115146));
                                    
                                    //#line 305 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double sigmaQ__115149 =
                                      ((1.0) / (gamma__115148));
                                    
                                    //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double eta__115150 =
                                      ((((gamma__115173) * (gamma__115148))) / (((gamma__115173) + (gamma__115148))));
                                    
                                    //#line 309 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::x10x::vector::Point3d q__115151 =
                                       ::x10x::vector::Point3d::_alloc();
                                    
                                    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    x10_double i__115143 =
                                      ((((((cAlpha__115164) * (cCen->FMGL(i)))) + (((dAlpha__115146) * (dCen->FMGL(i)))))) * (sigmaQ__115149));
                                    x10_double j__115144 =
                                      ((((((cAlpha__115164) * (cCen->FMGL(j)))) + (((dAlpha__115146) * (dCen->FMGL(j)))))) * (sigmaQ__115149));
                                    x10_double k__115145 =
                                      ((((((cAlpha__115164) * (cCen->FMGL(k)))) + (((dAlpha__115146) * (dCen->FMGL(k)))))) * (sigmaQ__115149));
                                    
                                    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    q__115151->FMGL(i) = i__115143;
                                    q__115151->FMGL(j) = j__115144;
                                    q__115151->FMGL(k) = k__115145;
                                    
                                    //#line 315 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double Gcd__115152 =
                                      ::x10::lang::MathNatives::exp((((((((-(cAlpha__115164))) * (dAlpha__115146))) * (radiusCDSquared))) * (sigmaQ__115149)));
                                    
                                    //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double qgx__115153 =
                                      ((3.141592653589793) * (sigmaQ__115149));
                                    
                                    //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double Uq__115154 =
                                      ((((((cCoeff__115165) * (dCoeff__115147))) * (Gcd__115152))) * (::x10::lang::MathNatives::sqrt(((((qgx__115153) * (qgx__115153))) * (qgx__115153)))));
                                    
                                    //#line 321 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::x10x::vector::Vector3d r__115155 =
                                      (__extension__ ({
                                        
                                        //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                        ::x10x::vector::Point3d b__115156 =
                                          p__115176;
                                        (__extension__ ({
                                            
                                            //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                            ::x10x::vector::Vector3d alloc__115157 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__115140 =
                                              ((q__115151->FMGL(i)) - (b__115156->FMGL(i)));
                                            x10_double j__115141 =
                                              ((q__115151->FMGL(j)) - (b__115156->FMGL(j)));
                                            x10_double k__115142 =
                                              ((q__115151->FMGL(k)) - (b__115156->FMGL(k)));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__115157->FMGL(i) =
                                              i__115140;
                                            alloc__115157->FMGL(j) =
                                              j__115141;
                                            alloc__115157->FMGL(k) =
                                              k__115142;
                                            alloc__115157;
                                        }))
                                        ;
                                    }))
                                    ;
                                    
                                    //#line 322 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double radiusPQSquared__115158 =
                                      ((((((r__115155->FMGL(i)) * (r__115155->FMGL(i)))) + (((r__115155->FMGL(j)) * (r__115155->FMGL(j)))))) + (((r__115155->FMGL(k)) * (r__115155->FMGL(k)))));
                                    
                                    //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double T__115159 =
                                      ((radiusPQSquared__115158) * (eta__115150));
                                    
                                    //#line 329 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_double Upq__115160 =
                                      ((Up__115179) * (Uq__115154));
                                    
                                    //#line 330 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computeZeroM(angMomABCD,
                                                       T__115159,
                                                       Upq__115160,
                                                       eta__115150);
                                    
                                    //#line 336 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computeRm(angMomABCD,
                                                    shellList,
                                                    r__115155);
                                    
                                    //#line 341 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computePq(angMomAB,
                                                    angMomCD,
                                                    shellList);
                                    
                                    //#line 346 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    this->computePcd(angMomAB,
                                                     sigmaQ__115149,
                                                     q__115151,
                                                     dLim,
                                                     cLim,
                                                     shellD,
                                                     shellC,
                                                     dCen,
                                                     cCen);
                                }
                            }
                            
                        }
                    }
                    
                    //#line 354 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    this->computeAbcd(dLim, cLim, bLim, aLim,
                                      dStrt, cStrt, bStrt,
                                      aStrt, shellB, shellA,
                                      aCen, bCen, p__115176,
                                      sigmaP__115174, jMat,
                                      kMat, reinterpret_cast< ::x10::matrix::DenseMatrix*>(dMat));
                }
            }
            
        }
    }
    
    //#line 361 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    return nTot;
    
}

//#line 366 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
x10_double au::edu::anu::qm::TwoElectronIntegrals::mdRecurse(
  ::x10x::vector::Vector3d r, x10_int i, x10_int j, x10_int k,
  x10_int m) {
    
    //#line 367 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double res = 0.0;
    
    //#line 368 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int ijk = ((((i) | (j))) | (k));
    
    //#line 370 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if ((!::x10aux::struct_equals(ijk, ((x10_int)0)))) {
        
        //#line 371 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if ((::x10aux::struct_equals(ijk, ((x10_int)1))))
        {
            
            //#line 372 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_int m_l = m;
            
            //#line 373 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_double r_l = 1.0;
            
            //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            if ((::x10aux::struct_equals(i, ((x10_int)1))))
            {
                
                //#line 375 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                m_l = ((m_l) + (((x10_int)1)));
                
                //#line 376 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                r_l = ((r_l) * (r->FMGL(i)));
            }
            
            //#line 378 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            if ((::x10aux::struct_equals(j, ((x10_int)1))))
            {
                
                //#line 379 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                m_l = ((m_l) + (((x10_int)1)));
                
                //#line 380 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                r_l = ((r_l) * (r->FMGL(j)));
            }
            
            //#line 382 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            if ((::x10aux::struct_equals(k, ((x10_int)1))))
            {
                
                //#line 383 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                m_l = ((m_l) + (((x10_int)1)));
                
                //#line 384 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                r_l = ((r_l) * (r->FMGL(k)));
            }
            
            //#line 386 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            res = ((r_l) * (::x10aux::nullCheck(this->FMGL(zeroM))->x10::lang::Rail< x10_double >::__apply(
                              ((x10_long)(m_l)))));
        } else 
        //#line 388 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if (((i) >= (((x10_int)2)))) {
            
            //#line 389 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            res = ((((r->FMGL(i)) * (this->mdRecurse(r, ((i) - (((x10_int)1))),
                                                     j, k,
                                                     ((m) + (((x10_int)1))))))) - (((((x10_double) (((i) - (((x10_int)1)))))) * (this->mdRecurse(
                                                                                                                                   r,
                                                                                                                                   ((i) - (((x10_int)2))),
                                                                                                                                   j,
                                                                                                                                   k,
                                                                                                                                   ((m) + (((x10_int)1))))))));
        } else 
        //#line 390 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if (((j) >= (((x10_int)2)))) {
            
            //#line 391 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            res = ((((r->FMGL(j)) * (this->mdRecurse(r, i,
                                                     ((j) - (((x10_int)1))),
                                                     k, ((m) + (((x10_int)1))))))) - (((((x10_double) (((j) - (((x10_int)1)))))) * (this->mdRecurse(
                                                                                                                                      r,
                                                                                                                                      i,
                                                                                                                                      ((j) - (((x10_int)2))),
                                                                                                                                      k,
                                                                                                                                      ((m) + (((x10_int)1))))))));
        } else 
        //#line 392 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if (((k) >= (((x10_int)2)))) {
            
            //#line 393 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            res = ((((r->FMGL(k)) * (this->mdRecurse(r, i,
                                                     j, ((k) - (((x10_int)1))),
                                                     ((m) + (((x10_int)1))))))) - (((((x10_double) (((k) - (((x10_int)1)))))) * (this->mdRecurse(
                                                                                                                                   r,
                                                                                                                                   i,
                                                                                                                                   j,
                                                                                                                                   ((k) - (((x10_int)2))),
                                                                                                                                   ((m) + (((x10_int)1))))))));
        }
        
    } else {
        
        //#line 397 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ::x10aux::nullCheck(this->FMGL(zeroM))->x10::lang::Rail< x10_double >::__apply(
                ((x10_long)(m)));
    }
    
    //#line 400 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    return res;
    
}

//#line 403 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
x10_double au::edu::anu::qm::TwoElectronIntegrals::mdHrr(
  x10_int xa, x10_int ya, x10_int za, x10_int xb, x10_int yb,
  x10_int zb, x10_int xp, x10_int yp, x10_int zp, x10_double pai,
  x10_double paj, x10_double pak, x10_double pbi, x10_double pbj,
  x10_double pbk, x10_double sigma) {
    
    //#line 405 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double res;
    
    //#line 406 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((((xp) < (((x10_int)0))) || ((yp) < (((x10_int)0)))) ||
        ((zp) < (((x10_int)0))))) {
        
        //#line 407 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = 0.0;
    } else 
    //#line 408 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((xa) > (((x10_int)0)))) {
        
        //#line 409 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ((((((this->mdHrr(((xa) - (((x10_int)1))), ya,
                                za, xb, yb, zb, ((xp) - (((x10_int)1))),
                                yp, zp, pai, paj, pak, pbi,
                                pbj, pbk, sigma)) * (((x10_double) (xp))))) + (((this->mdHrr(
                                                                                   ((xa) - (((x10_int)1))),
                                                                                   ya,
                                                                                   za,
                                                                                   xb,
                                                                                   yb,
                                                                                   zb,
                                                                                   xp,
                                                                                   yp,
                                                                                   zp,
                                                                                   pai,
                                                                                   paj,
                                                                                   pak,
                                                                                   pbi,
                                                                                   pbj,
                                                                                   pbk,
                                                                                   sigma)) * (pai))))) + (((this->mdHrr(
                                                                                                              ((xa) - (((x10_int)1))),
                                                                                                              ya,
                                                                                                              za,
                                                                                                              xb,
                                                                                                              yb,
                                                                                                              zb,
                                                                                                              ((xp) + (((x10_int)1))),
                                                                                                              yp,
                                                                                                              zp,
                                                                                                              pai,
                                                                                                              paj,
                                                                                                              pak,
                                                                                                              pbi,
                                                                                                              pbj,
                                                                                                              pbk,
                                                                                                              sigma)) * (sigma))));
    } else 
    //#line 412 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((ya) > (((x10_int)0)))) {
        
        //#line 413 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ((((((this->mdHrr(xa, ((ya) - (((x10_int)1))),
                                za, xb, yb, zb, xp, ((yp) - (((x10_int)1))),
                                zp, pai, paj, pak, pbi, pbj,
                                pbk, sigma)) * (((x10_double) (yp))))) + (((this->mdHrr(
                                                                              xa,
                                                                              ((ya) - (((x10_int)1))),
                                                                              za,
                                                                              xb,
                                                                              yb,
                                                                              zb,
                                                                              xp,
                                                                              yp,
                                                                              zp,
                                                                              pai,
                                                                              paj,
                                                                              pak,
                                                                              pbi,
                                                                              pbj,
                                                                              pbk,
                                                                              sigma)) * (paj))))) + (((this->mdHrr(
                                                                                                         xa,
                                                                                                         ((ya) - (((x10_int)1))),
                                                                                                         za,
                                                                                                         xb,
                                                                                                         yb,
                                                                                                         zb,
                                                                                                         xp,
                                                                                                         ((yp) + (((x10_int)1))),
                                                                                                         zp,
                                                                                                         pai,
                                                                                                         paj,
                                                                                                         pak,
                                                                                                         pbi,
                                                                                                         pbj,
                                                                                                         pbk,
                                                                                                         sigma)) * (sigma))));
    } else 
    //#line 416 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((za) > (((x10_int)0)))) {
        
        //#line 417 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ((((((this->mdHrr(xa, ya, ((za) - (((x10_int)1))),
                                xb, yb, zb, xp, yp, ((zp) - (((x10_int)1))),
                                pai, paj, pak, pbi, pbj, pbk,
                                sigma)) * (((x10_double) (zp))))) + (((this->mdHrr(
                                                                         xa,
                                                                         ya,
                                                                         ((za) - (((x10_int)1))),
                                                                         xb,
                                                                         yb,
                                                                         zb,
                                                                         xp,
                                                                         yp,
                                                                         zp,
                                                                         pai,
                                                                         paj,
                                                                         pak,
                                                                         pbi,
                                                                         pbj,
                                                                         pbk,
                                                                         sigma)) * (pak))))) + (((this->mdHrr(
                                                                                                    xa,
                                                                                                    ya,
                                                                                                    ((za) - (((x10_int)1))),
                                                                                                    xb,
                                                                                                    yb,
                                                                                                    zb,
                                                                                                    xp,
                                                                                                    yp,
                                                                                                    ((zp) + (((x10_int)1))),
                                                                                                    pai,
                                                                                                    paj,
                                                                                                    pak,
                                                                                                    pbi,
                                                                                                    pbj,
                                                                                                    pbk,
                                                                                                    sigma)) * (sigma))));
    } else 
    //#line 420 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((xb) > (((x10_int)0)))) {
        
        //#line 421 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ((((((this->mdHrr(xa, ya, za, ((xb) - (((x10_int)1))),
                                yb, zb, ((xp) - (((x10_int)1))),
                                yp, zp, pai, paj, pak, pbi,
                                pbj, pbk, sigma)) * (((x10_double) (xp))))) + (((this->mdHrr(
                                                                                   xa,
                                                                                   ya,
                                                                                   za,
                                                                                   ((xb) - (((x10_int)1))),
                                                                                   yb,
                                                                                   zb,
                                                                                   xp,
                                                                                   yp,
                                                                                   zp,
                                                                                   pai,
                                                                                   paj,
                                                                                   pak,
                                                                                   pbi,
                                                                                   pbj,
                                                                                   pbk,
                                                                                   sigma)) * (pbi))))) + (((this->mdHrr(
                                                                                                              xa,
                                                                                                              ya,
                                                                                                              za,
                                                                                                              ((xb) - (((x10_int)1))),
                                                                                                              yb,
                                                                                                              zb,
                                                                                                              ((xp) + (((x10_int)1))),
                                                                                                              yp,
                                                                                                              zp,
                                                                                                              pai,
                                                                                                              paj,
                                                                                                              pak,
                                                                                                              pbi,
                                                                                                              pbj,
                                                                                                              pbk,
                                                                                                              sigma)) * (sigma))));
    } else 
    //#line 424 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((yb) > (((x10_int)0)))) {
        
        //#line 425 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ((((((this->mdHrr(xa, ya, za, xb, ((yb) - (((x10_int)1))),
                                zb, xp, ((yp) - (((x10_int)1))),
                                zp, pai, paj, pak, pbi, pbj,
                                pbk, sigma)) * (((x10_double) (yp))))) + (((this->mdHrr(
                                                                              xa,
                                                                              ya,
                                                                              za,
                                                                              xb,
                                                                              ((yb) - (((x10_int)1))),
                                                                              zb,
                                                                              xp,
                                                                              yp,
                                                                              zp,
                                                                              pai,
                                                                              paj,
                                                                              pak,
                                                                              pbi,
                                                                              pbj,
                                                                              pbk,
                                                                              sigma)) * (pbj))))) + (((this->mdHrr(
                                                                                                         xa,
                                                                                                         ya,
                                                                                                         za,
                                                                                                         xb,
                                                                                                         ((yb) - (((x10_int)1))),
                                                                                                         zb,
                                                                                                         xp,
                                                                                                         ((yp) + (((x10_int)1))),
                                                                                                         zp,
                                                                                                         pai,
                                                                                                         paj,
                                                                                                         pak,
                                                                                                         pbi,
                                                                                                         pbj,
                                                                                                         pbk,
                                                                                                         sigma)) * (sigma))));
    } else 
    //#line 428 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((zb) > (((x10_int)0)))) {
        
        //#line 429 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = ((((((this->mdHrr(xa, ya, za, xb, yb, ((zb) - (((x10_int)1))),
                                xp, yp, ((zp) - (((x10_int)1))),
                                pai, paj, pak, pbi, pbj, pbk,
                                sigma)) * (((x10_double) (zp))))) + (((this->mdHrr(
                                                                         xa,
                                                                         ya,
                                                                         za,
                                                                         xb,
                                                                         yb,
                                                                         ((zb) - (((x10_int)1))),
                                                                         xp,
                                                                         yp,
                                                                         zp,
                                                                         pai,
                                                                         paj,
                                                                         pak,
                                                                         pbi,
                                                                         pbj,
                                                                         pbk,
                                                                         sigma)) * (pbk))))) + (((this->mdHrr(
                                                                                                    xa,
                                                                                                    ya,
                                                                                                    za,
                                                                                                    xb,
                                                                                                    yb,
                                                                                                    ((zb) - (((x10_int)1))),
                                                                                                    xp,
                                                                                                    yp,
                                                                                                    ((zp) + (((x10_int)1))),
                                                                                                    pai,
                                                                                                    paj,
                                                                                                    pak,
                                                                                                    pbi,
                                                                                                    pbj,
                                                                                                    pbk,
                                                                                                    sigma)) * (sigma))));
    } else {
        
        //#line 433 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_int ptot = ((((xp) + (yp))) + (zp));
        
        //#line 434 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_int idx = ((((((xp) * (((((((((x10_int)2)) * (ptot))) - (xp))) + (((x10_int)3)))))) / ::x10aux::zeroCheck(((x10_int)2)))) + (yp));
        
        //#line 435 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        res = (__extension__ ({
            ::x10::regionarray::Array<x10_double>* this__113895 =
              this->FMGL(npint);
            
            //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__113892 = ((x10_long)(ptot));
            x10_long i__113893 = ((x10_long)(idx));
            x10_double ret__113896;
            
            //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__115188 = ((i__113892) - (::x10aux::nullCheck(this__113895)->FMGL(layout_min0)));
            
            //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__115188 = ((((((offset__115188) * (::x10aux::nullCheck(this__113895)->FMGL(layout_stride1)))) + (i__113893))) - (::x10aux::nullCheck(this__113895)->FMGL(layout_min1)));
            
            //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__113896 = ::x10aux::nullCheck(this__113895)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                            offset__115188);
            ret__113896;
        }))
        ;
    }
    
    //#line 438 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    return res;
    
}

//#line 447 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::qm::TwoElectronIntegrals::computeZeroM(
  x10_int angMomABCD, x10_double Ti, x10_double Upq, x10_double etai) {
    
    //#line 449 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double eta = etai;
    x10_double T = Ti;
    
    //#line 450 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((this->FMGL(omega)) > (0.0))) {
        
        //#line 451 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double om2 = ((this->FMGL(omega)) * (this->FMGL(omega)));
        
        //#line 452 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double r2 = ((Ti) / (etai));
        
        //#line 453 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        eta = ((((etai) * (om2))) / (((om2) + (etai))));
        
        //#line 454 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        T = ((eta) * (r2));
    }
    
    //#line 458 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((T) > (this->FMGL(TCrit)))) {
        
        //#line 459 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double invR2 = ((eta) / (T));
        
        //#line 460 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10aux::nullCheck(this->FMGL(zeroM))->x10::lang::Rail< x10_double >::__set(
          ((x10_long)0ll), ((Upq) * (::x10::lang::MathNatives::sqrt(invR2))));
        
        //#line 461 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_long i__72708max__115189 = ((x10_long)(angMomABCD));
        {
            x10_long i__115190;
            for (i__115190 = ((x10_long)1ll); ((i__115190) <= (i__72708max__115189));
                 i__115190 = ((i__115190) + (((x10_long)1ll))))
            {
                x10_long m__115191 = i__115190;
                
                //#line 462 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10aux::nullCheck(this->FMGL(zeroM))->x10::lang::Rail< x10_double >::__set(
                  m__115191, ((((::x10aux::nullCheck(this->FMGL(zeroM))->x10::lang::Rail< x10_double >::__apply(
                                   ((m__115191) - (((x10_long)1ll))))) * (((x10_double) (((((((x10_long)2ll)) * (m__115191))) - (((x10_long)1ll)))))))) * (invR2)));
            }
        }
        
        //#line 463 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        return this->FMGL(zeroM);
        
    }
    
    //#line 467 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    this->computeGmt(angMomABCD, T);
    
    //#line 468 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double twoEta = ((2.0) * (eta));
    
    //#line 469 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double etaPow = ::x10::lang::MathNatives::sqrt(twoEta);
    
    //#line 470 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double UpqSQ2PI = ((Upq) * (0.797884560802865));
    
    //#line 471 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_long i__72726max__115192 = ((x10_long)(angMomABCD));
    {
        x10_long i__115193;
        for (i__115193 = ((x10_long)0ll); ((i__115193) <= (i__72726max__115192));
             i__115193 = ((i__115193) + (((x10_long)1ll))))
        {
            x10_long i__115194 = i__115193;
            
            //#line 472 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10aux::nullCheck(this->FMGL(zeroM))->x10::lang::Rail< x10_double >::__set(
              i__115194, ((((UpqSQ2PI) * (etaPow))) * (::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__apply(
                                                         i__115194))));
            
            //#line 473 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            etaPow = ((etaPow) * (twoEta));
        }
    }
    
    //#line 475 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    return this->FMGL(zeroM);
    
}

//#line 478 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::computeGmt(x10_int angMomABCD,
                                                        x10_double T) {
    
    //#line 479 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((T) > (30.0))) {
        
        //#line 480 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double invT = ((((x10_double) (((x10_long)1ll)))) / (T));
        
        //#line 481 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__set(
          ((x10_long)0ll), ((::x10::lang::MathNatives::sqrt(((3.141592653589793) * (invT)))) * (0.5)));
        
        //#line 483 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_long i__72744max__115195 = ((x10_long)(angMomABCD));
        {
            x10_long i__115196;
            for (i__115196 = ((x10_long)1ll); ((i__115196) <= (i__72744max__115195));
                 i__115196 = ((i__115196) + (((x10_long)1ll))))
            {
                x10_long m__115197 = i__115196;
                
                //#line 484 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__set(
                  m__115197, ((((::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__apply(
                                   ((m__115197) - (((x10_long)1ll))))) * (((((x10_double) (m__115197))) - (0.5))))) * (invT)));
            }
        }
        
    } else {
        
        //#line 491 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double denom = ((((x10_double) (angMomABCD))) + (0.5));
        
        //#line 492 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double term = ((0.5) / (denom));
        
        //#line 493 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double sum = term;
        
        //#line 494 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        while (((term) > (this->FMGL(THRESH)))) {
            
            //#line 495 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            denom = ((denom) + (1.0));
            
            //#line 496 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            term = ((((term) * (T))) / (denom));
            
            //#line 497 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            sum = ((sum) + (term));
        }
        
        //#line 500 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        x10_double expNegT = ::x10::lang::MathNatives::exp((-(T)));
        
        //#line 501 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__set(
          ((x10_long)(angMomABCD)), ((expNegT) * (sum)));
        
        //#line 502 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        {
            x10_int m;
            for (m = ((angMomABCD) - (((x10_int)1))); ((m) >= (((x10_int)0)));
                 m = ((m) - (((x10_int)1)))) {
                
                //#line 503 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__set(
                  ((x10_long)(m)), ((((((((2.0) * (T))) * (::x10aux::nullCheck(this->FMGL(gmt))->x10::lang::Rail< x10_double >::__apply(
                                                             ((((x10_long)(m))) + (((x10_long)1ll))))))) + (expNegT))) / (((x10_double) (((((((x10_int)2)) * (m))) + (((x10_int)1))))))));
            }
        }
        
    }
    
}

//#line 508 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::computeRm(x10_int angMomABCD,
                                                       ::au::edu::anu::qm::ShellList shellList,
                                                       ::x10x::vector::Vector3d r) {
    
    //#line 509 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int iLim = ((x10_int)0);
    
    //#line 510 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int i__72762max__115211 = angMomABCD;
    {
        x10_int i__115212;
        for (i__115212 = ((x10_int)0); ((i__115212) <= (i__72762max__115211));
             i__115212 = ((i__115212) + (((x10_int)1)))) {
            x10_int i__115213 = i__115212;
            
            //#line 511 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shell__115204 =
              (__extension__ ({
                
                //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int am__115205 = i__115213;
                ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
                  ((x10_long)(am__115205)));
            }))
            ;
            
            //#line 512 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            iLim = ((iLim) + (((i__115213) + (((x10_int)1)))));
            
            //#line 513 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            {
                x10_int j__115206;
                for (j__115206 = ((x10_int)0); ((j__115206) < (iLim));
                     j__115206 = ((j__115206) + (((x10_int)1))))
                {
                    
                    //#line 514 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::au::edu::anu::qm::Power powers__115207 =
                      ::x10aux::nullCheck(shell__115204)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                        ((x10_long)(j__115206)));
                    
                    //#line 515 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int lp__115208 = powers__115207->FMGL(l);
                    
                    //#line 516 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int mp__115209 = powers__115207->FMGL(m);
                    
                    //#line 517 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int np__115210 = powers__115207->FMGL(n);
                    
                    //#line 518 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::x10::regionarray::Array<x10_double>* this__115199 =
                      this->FMGL(rM);
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long i__115200 = ((x10_long)(i__115213));
                    x10_long i__115201 = ((x10_long)(j__115206));
                    x10_double v__115202 = this->mdRecurse(
                                             r, lp__115208,
                                             mp__115209, np__115210,
                                             ((x10_int)0));
                    x10_double ret__115203;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__115198 = ((i__115200) - (::x10aux::nullCheck(this__115199)->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__115198 = ((((((offset__115198) * (::x10aux::nullCheck(this__115199)->FMGL(layout_stride1)))) + (i__115201))) - (::x10aux::nullCheck(this__115199)->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10aux::nullCheck(this__115199)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__115198, v__115202);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__115203 = v__115202;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__115203;
                }
            }
            
        }
    }
    
}

//#line 524 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::computePq(x10_int angMomAB,
                                                       x10_int angMomCD,
                                                       ::au::edu::anu::qm::ShellList shellList) {
    
    //#line 525 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int pLim = ((x10_int)0);
    
    //#line 526 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int i__72798max__115273 = angMomAB;
    {
        x10_int i__115274;
        for (i__115274 = ((x10_int)0); ((i__115274) <= (i__72798max__115273));
             i__115274 = ((i__115274) + (((x10_int)1)))) {
            x10_int i__115275 = i__115274;
            
            //#line 527 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellAB__115265 =
              (__extension__ ({
                
                //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int am__115266 = i__115275;
                ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
                  ((x10_long)(am__115266)));
            }))
            ;
            
            //#line 528 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            pLim = ((pLim) + (((i__115275) + (((x10_int)1)))));
            
            //#line 529 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            {
                x10_int pp__115267;
                for (pp__115267 = ((x10_int)0); ((pp__115267) < (pLim));
                     pp__115267 = ((pp__115267) + (((x10_int)1))))
                {
                    
                    //#line 530 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    ::au::edu::anu::qm::Power powersAB__115268 =
                      ::x10aux::nullCheck(shellAB__115265)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                        ((x10_long)(pp__115267)));
                    
                    //#line 531 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int lp__115269 = powersAB__115268->FMGL(l);
                    
                    //#line 532 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int mp__115270 = powersAB__115268->FMGL(m);
                    
                    //#line 533 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int np__115271 = powersAB__115268->FMGL(n);
                    
                    //#line 535 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int qLim__115272 = ((x10_int)0);
                    
                    //#line 536 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int i__72780max__115262 = angMomCD;
                    {
                        x10_int i__115263;
                        for (i__115263 = ((x10_int)0); ((i__115263) <= (i__72780max__115262));
                             i__115263 = ((i__115263) + (((x10_int)1))))
                        {
                            x10_int j__115264 = i__115263;
                            
                            //#line 537 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellCD__115250 =
                              (__extension__ ({
                                
                                //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                                x10_int am__115251 = j__115264;
                                ::x10aux::nullCheck(shellList->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
                                  ((x10_long)(am__115251)));
                            }))
                            ;
                            
                            //#line 538 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            qLim__115272 = ((qLim__115272) + (((j__115264) + (((x10_int)1)))));
                            
                            //#line 539 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            {
                                x10_int qq__115252;
                                for (qq__115252 = ((x10_int)0);
                                     ((qq__115252) < (qLim__115272));
                                     qq__115252 = ((qq__115252) + (((x10_int)1))))
                                {
                                    
                                    //#line 540 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::au::edu::anu::qm::Power powersCD__115253 =
                                      ::x10aux::nullCheck(shellCD__115250)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                                        ((x10_long)(qq__115252)));
                                    
                                    //#line 541 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int lq__115254 = powersCD__115253->FMGL(l);
                                    
                                    //#line 542 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int mq__115255 = powersCD__115253->FMGL(m);
                                    
                                    //#line 543 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int nq__115256 = powersCD__115253->FMGL(n);
                                    
                                    //#line 545 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int lr__115257 = ((lp__115269) + (lq__115254));
                                    
                                    //#line 546 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int mr__115258 = ((mp__115270) + (mq__115255));
                                    
                                    //#line 547 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int nr__115259 = ((np__115271) + (nq__115256));
                                    
                                    //#line 548 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int rtyp__115260 =
                                      ((((lr__115257) + (mr__115258))) + (nr__115259));
                                    
                                    //#line 550 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int rr__115261 = ((((((lr__115257) * (((((((((x10_int)2)) * (((((lr__115257) + (mr__115258))) + (nr__115259))))) - (lr__115257))) + (((x10_int)3)))))) / ::x10aux::zeroCheck(((x10_int)2)))) + (mr__115258));
                                    
                                    //#line 552 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    if ((::x10aux::struct_equals(((((((lq__115254) + (mq__115255))) + (nq__115256))) % ::x10aux::zeroCheck(((x10_int)2))),
                                                                 ((x10_int)0))))
                                    {
                                        
                                        //#line 553 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                        ::x10::regionarray::Array<x10_double>* this__115221 =
                                          this->FMGL(pqInts);
                                        
                                        //#line 617 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__115222 =
                                          ((x10_long)(i__115275));
                                        x10_long i__115223 =
                                          ((x10_long)(pp__115267));
                                        x10_long i__115224 =
                                          ((x10_long)(j__115264));
                                        x10_long i__115225 =
                                          ((x10_long)(qq__115252));
                                        x10_double v__115226 =
                                          (__extension__ ({
                                            
                                            //#line 553 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::regionarray::Array<x10_double>* this__115227 =
                                              this->FMGL(rM);
                                            
                                            //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__115228 =
                                              ((x10_long)(rtyp__115260));
                                            x10_long i__115229 =
                                              ((x10_long)(rr__115261));
                                            x10_double ret__115230;
                                            
                                            //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long offset__115214 =
                                              ((i__115228) - (::x10aux::nullCheck(this__115227)->FMGL(layout_min0)));
                                            
                                            //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            offset__115214 =
                                              ((((((offset__115214) * (::x10aux::nullCheck(this__115227)->FMGL(layout_stride1)))) + (i__115229))) - (::x10aux::nullCheck(this__115227)->FMGL(layout_min1)));
                                            
                                            //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__115230 =
                                              ::x10aux::nullCheck(this__115227)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                offset__115214);
                                            ret__115230;
                                        }))
                                        ;
                                        x10_double ret__115231;
                                        
                                        //#line 621 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ::x10aux::nullCheck(this__115221)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                          (__extension__ ({
                                              
                                              //#line 1213 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              x10_long i__115216 =
                                                i__115222;
                                              x10_long i__115217 =
                                                i__115223;
                                              x10_long i__115218 =
                                                i__115224;
                                              x10_long i__115219 =
                                                i__115225;
                                              x10_long ret__115220;
                                              
                                              //#line 1214 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              x10_long offset__115215 =
                                                ((i__115216) - (::x10aux::nullCheck(this__115221)->FMGL(layout_min0)));
                                              
                                              //#line 1215 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              offset__115215 =
                                                ((((((offset__115215) * (::x10aux::nullCheck(this__115221)->FMGL(layout_stride1)))) + (i__115217))) - (::x10aux::nullCheck(this__115221)->FMGL(layout_min1)));
                                              
                                              //#line 1216 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              offset__115215 =
                                                ((((((offset__115215) * (::x10aux::nullCheck(::x10aux::nullCheck(this__115221)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((x10_long)0ll))))) + (i__115218))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__115221)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                              
                                              //#line 1217 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              offset__115215 =
                                                ((((((offset__115215) * (::x10aux::nullCheck(::x10aux::nullCheck(this__115221)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((x10_long)2ll))))) + (i__115219))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__115221)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)3ll))));
                                              
                                              //#line 1218 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              ret__115220 =
                                                offset__115215;
                                              ret__115220;
                                          }))
                                          , v__115226);
                                        
                                        //#line 622 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__115231 = v__115226;
                                        
                                        //#line 617 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__115231;
                                    } else {
                                        
                                        //#line 555 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                        ::x10::regionarray::Array<x10_double>* this__115239 =
                                          this->FMGL(pqInts);
                                        
                                        //#line 617 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__115240 =
                                          ((x10_long)(i__115275));
                                        x10_long i__115241 =
                                          ((x10_long)(pp__115267));
                                        x10_long i__115242 =
                                          ((x10_long)(j__115264));
                                        x10_long i__115243 =
                                          ((x10_long)(qq__115252));
                                        x10_double v__115244 =
                                          (-((__extension__ ({
                                            
                                            //#line 555 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::regionarray::Array<x10_double>* this__115245 =
                                              this->FMGL(rM);
                                            
                                            //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__115246 =
                                              ((x10_long)(rtyp__115260));
                                            x10_long i__115247 =
                                              ((x10_long)(rr__115261));
                                            x10_double ret__115248;
                                            
                                            //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long offset__115232 =
                                              ((i__115246) - (::x10aux::nullCheck(this__115245)->FMGL(layout_min0)));
                                            
                                            //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            offset__115232 =
                                              ((((((offset__115232) * (::x10aux::nullCheck(this__115245)->FMGL(layout_stride1)))) + (i__115247))) - (::x10aux::nullCheck(this__115245)->FMGL(layout_min1)));
                                            
                                            //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__115248 =
                                              ::x10aux::nullCheck(this__115245)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                offset__115232);
                                            ret__115248;
                                        }))
                                        ));
                                        x10_double ret__115249;
                                        
                                        //#line 621 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ::x10aux::nullCheck(this__115239)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                          (__extension__ ({
                                              
                                              //#line 1213 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              x10_long i__115234 =
                                                i__115240;
                                              x10_long i__115235 =
                                                i__115241;
                                              x10_long i__115236 =
                                                i__115242;
                                              x10_long i__115237 =
                                                i__115243;
                                              x10_long ret__115238;
                                              
                                              //#line 1214 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              x10_long offset__115233 =
                                                ((i__115234) - (::x10aux::nullCheck(this__115239)->FMGL(layout_min0)));
                                              
                                              //#line 1215 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              offset__115233 =
                                                ((((((offset__115233) * (::x10aux::nullCheck(this__115239)->FMGL(layout_stride1)))) + (i__115235))) - (::x10aux::nullCheck(this__115239)->FMGL(layout_min1)));
                                              
                                              //#line 1216 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              offset__115233 =
                                                ((((((offset__115233) * (::x10aux::nullCheck(::x10aux::nullCheck(this__115239)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((x10_long)0ll))))) + (i__115236))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__115239)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                              
                                              //#line 1217 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              offset__115233 =
                                                ((((((offset__115233) * (::x10aux::nullCheck(::x10aux::nullCheck(this__115239)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((x10_long)2ll))))) + (i__115237))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__115239)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)3ll))));
                                              
                                              //#line 1218 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                              ret__115238 =
                                                offset__115233;
                                              ret__115238;
                                          }))
                                          , v__115244);
                                        
                                        //#line 622 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__115249 = v__115244;
                                        
                                        //#line 617 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__115249;
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 562 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::computePcd(x10_int angMomAB,
                                                        x10_double sigmaQ,
                                                        ::x10x::vector::Point3d q,
                                                        x10_int dLim,
                                                        x10_int cLim,
                                                        ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellD,
                                                        ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellC,
                                                        ::x10x::vector::Point3d dCen,
                                                        ::x10x::vector::Point3d cCen) {
    
    //#line 564 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double qdi = ((q->FMGL(i)) - (dCen->FMGL(i)));
    
    //#line 565 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double qdj = ((q->FMGL(j)) - (dCen->FMGL(j)));
    
    //#line 566 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double qdk = ((q->FMGL(k)) - (dCen->FMGL(k)));
    
    //#line 567 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double qci = ((q->FMGL(i)) - (cCen->FMGL(i)));
    
    //#line 568 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double qcj = ((q->FMGL(j)) - (cCen->FMGL(j)));
    
    //#line 569 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double qck = ((q->FMGL(k)) - (cCen->FMGL(k)));
    
    //#line 571 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double halfSigmaQ = ((0.5) * (sigmaQ));
    
    //#line 573 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int pLim = ((x10_int)0);
    
    //#line 574 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int i__72870max__115326 = angMomAB;
    {
        x10_int i__115327;
        for (i__115327 = ((x10_int)0); ((i__115327) <= (i__72870max__115326));
             i__115327 = ((i__115327) + (((x10_int)1)))) {
            x10_int i__115328 = i__115327;
            
            //#line 575 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            pLim = ((pLim) + (((i__115328) + (((x10_int)1)))));
            
            //#line 576 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_int i__72852max__115323 = ((pLim) - (((x10_int)1)));
            {
                x10_int i__115324;
                for (i__115324 = ((x10_int)0); ((i__115324) <= (i__72852max__115323));
                     i__115324 = ((i__115324) + (((x10_int)1))))
                {
                    x10_int pp__115325 = i__115324;
                    
                    //#line 1154 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<x10_double>* src__115316 =
                      this->FMGL(pqInts);
                    x10_long srcIndex__115317 = ::x10aux::nullCheck(this->FMGL(pqInts))->FMGL(region)->indexOf(
                                                  ((x10_long)(i__115328)),
                                                  ((x10_long)(pp__115325)),
                                                  ((x10_long)0ll),
                                                  ((x10_long)0ll));
                    
                    //#line 1155 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<x10_double>* dst__115318 =
                      this->FMGL(npint);
                    
                    //#line 1156 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long numElems__115319 = this->FMGL(maxam2N);
                    
                    //#line 1157 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::lang::Rail< void >::copy< x10_double >(
                      ::x10aux::nullCheck(src__115316)->FMGL(raw),
                      srcIndex__115317, ::x10aux::nullCheck(dst__115318)->FMGL(raw),
                      ((x10_long)0ll), numElems__115319);
                    
                    //#line 579 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int i__72834max__115320 = ((dLim) - (((x10_int)1)));
                    {
                        x10_int i__115321;
                        for (i__115321 = ((x10_int)0); ((i__115321) <= (i__72834max__115320));
                             i__115321 = ((i__115321) + (((x10_int)1))))
                        {
                            x10_int dd__115322 = i__115321;
                            
                            //#line 580 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            ::au::edu::anu::qm::Power powersD__115312 =
                              ::x10aux::nullCheck(shellD)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                                ((x10_long)(dd__115322)));
                            
                            //#line 581 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int lp__115313 = powersD__115312->FMGL(l);
                            
                            //#line 582 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int mp__115314 = powersD__115312->FMGL(m);
                            
                            //#line 583 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int np__115315 = powersD__115312->FMGL(n);
                            
                            //#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int i__72816max__115309 =
                              ((cLim) - (((x10_int)1)));
                            {
                                x10_int i__115310;
                                for (i__115310 = ((x10_int)0);
                                     ((i__115310) <= (i__72816max__115309));
                                     i__115310 = ((i__115310) + (((x10_int)1))))
                                {
                                    x10_int cc__115311 = i__115310;
                                    
                                    //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::au::edu::anu::qm::Power powersC__115305 =
                                      ::x10aux::nullCheck(shellC)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                                        ((x10_long)(cc__115311)));
                                    
                                    //#line 587 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int lq__115306 = powersC__115305->FMGL(l);
                                    
                                    //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int mq__115307 = powersC__115305->FMGL(m);
                                    
                                    //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int nq__115308 = powersC__115305->FMGL(n);
                                    
                                    //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    ::x10::regionarray::Array<x10_double>* a__115294 =
                                      this->FMGL(pcdint);
                                    x10_long i__115295 = ((x10_long)(dd__115322));
                                    x10_long i__115296 = ((x10_long)(cc__115311));
                                    x10_long i__115297 = ((x10_long)(i__115328));
                                    x10_long i__115298 = ((x10_long)(pp__115325));
                                    x10_double r__115299 =
                                      (((__extension__ ({
                                        
                                        //#line 507 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__115300 =
                                          i__115295;
                                        x10_long i__115301 =
                                          i__115296;
                                        x10_long i__115302 =
                                          i__115297;
                                        x10_long i__115303 =
                                          i__115298;
                                        x10_double ret__115304;
                                        
                                        //#line 511 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__115304 = ::x10aux::nullCheck(a__115294)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                        (__extension__ ({
                                                            
                                                            //#line 1213 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                            x10_long i__115277 =
                                                              i__115300;
                                                            x10_long i__115278 =
                                                              i__115301;
                                                            x10_long i__115279 =
                                                              i__115302;
                                                            x10_long i__115280 =
                                                              i__115303;
                                                            x10_long ret__115281;
                                                            
                                                            //#line 1214 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                            x10_long offset__115276 =
                                                              ((i__115277) - (::x10aux::nullCheck(a__115294)->FMGL(layout_min0)));
                                                            
                                                            //#line 1215 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                            offset__115276 =
                                                              ((((((offset__115276) * (::x10aux::nullCheck(a__115294)->FMGL(layout_stride1)))) + (i__115278))) - (::x10aux::nullCheck(a__115294)->FMGL(layout_min1)));
                                                            
                                                            //#line 1216 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                            offset__115276 =
                                                              ((((((offset__115276) * (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                         ((x10_long)0ll))))) + (i__115279))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                  ((x10_long)1ll))));
                                                            
                                                            //#line 1217 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                            offset__115276 =
                                                              ((((((offset__115276) * (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                         ((x10_long)2ll))))) + (i__115280))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                  ((x10_long)3ll))));
                                                            
                                                            //#line 1218 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                            ret__115281 =
                                                              offset__115276;
                                                            ret__115281;
                                                        }))
                                                        );
                                        ret__115304;
                                    }))
                                    ) + (this->mdHrr(lp__115313,
                                                     mp__115314,
                                                     np__115315,
                                                     lq__115306,
                                                     mq__115307,
                                                     nq__115308,
                                                     ((x10_int)0),
                                                     ((x10_int)0),
                                                     ((x10_int)0),
                                                     qdi,
                                                     qdj,
                                                     qdk,
                                                     qci,
                                                     qcj,
                                                     qck,
                                                     halfSigmaQ)));
                                    
                                    //#line 617 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__115288 = i__115295;
                                    x10_long i__115289 = i__115296;
                                    x10_long i__115290 = i__115297;
                                    x10_long i__115291 = i__115298;
                                    x10_double v__115292 =
                                      r__115299;
                                    x10_double ret__115293;
                                    
                                    //#line 621 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ::x10aux::nullCheck(a__115294)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                      (__extension__ ({
                                          
                                          //#line 1213 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          x10_long i__115283 =
                                            i__115288;
                                          x10_long i__115284 =
                                            i__115289;
                                          x10_long i__115285 =
                                            i__115290;
                                          x10_long i__115286 =
                                            i__115291;
                                          x10_long ret__115287;
                                          
                                          //#line 1214 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          x10_long offset__115282 =
                                            ((i__115283) - (::x10aux::nullCheck(a__115294)->FMGL(layout_min0)));
                                          
                                          //#line 1215 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          offset__115282 =
                                            ((((((offset__115282) * (::x10aux::nullCheck(a__115294)->FMGL(layout_stride1)))) + (i__115284))) - (::x10aux::nullCheck(a__115294)->FMGL(layout_min1)));
                                          
                                          //#line 1216 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          offset__115282 =
                                            ((((((offset__115282) * (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                       ((x10_long)0ll))))) + (i__115285))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                ((x10_long)1ll))));
                                          
                                          //#line 1217 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          offset__115282 =
                                            ((((((offset__115282) * (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                       ((x10_long)2ll))))) + (i__115286))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__115294)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                ((x10_long)3ll))));
                                          
                                          //#line 1218 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          ret__115287 = offset__115282;
                                          ret__115287;
                                      }))
                                      , v__115292);
                                    
                                    //#line 622 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__115293 = v__115292;
                                    
                                    //#line 617 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__115293;
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 600 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::computeAbcd(
  x10_int dLim, x10_int cLim, x10_int bLim, x10_int aLim,
  x10_int dStrt, x10_int cStrt, x10_int bStrt, x10_int aStrt,
  ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellB,
  ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellA,
  ::x10x::vector::Point3d aCen, ::x10x::vector::Point3d bCen,
  ::x10x::vector::Point3d p, x10_double sigmaP, ::x10::matrix::DenseMatrix* jMatrix,
  ::x10::matrix::DenseMatrix* kMatrix, ::x10::matrix::DenseMatrix* dMatrix) {
    
    //#line 607 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double pbi = ((p->FMGL(i)) - (bCen->FMGL(i)));
    
    //#line 608 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double pbj = ((p->FMGL(j)) - (bCen->FMGL(j)));
    
    //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double pbk = ((p->FMGL(k)) - (bCen->FMGL(k)));
    
    //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double pai = ((p->FMGL(i)) - (aCen->FMGL(i)));
    
    //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double paj = ((p->FMGL(j)) - (aCen->FMGL(j)));
    
    //#line 613 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double pak = ((p->FMGL(k)) - (aCen->FMGL(k)));
    
    //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_double halfSigmaP = ((0.5) * (sigmaP));
    
    //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    x10_int i__72942max__115947 = ((dLim) - (((x10_int)1)));
    {
        x10_int i__115948;
        for (i__115948 = ((x10_int)0); ((i__115948) <= (i__72942max__115947));
             i__115948 = ((i__115948) + (((x10_int)1)))) {
            x10_int dd__115949 = i__115948;
            
            //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_int ll__115945 = ((dStrt) + (dd__115949));
            
            //#line 619 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_double normL__115946 = ::x10aux::nullCheck(this->FMGL(normFactors))->x10::lang::Rail< x10_double >::__apply(
                                         ((x10_long)(ll__115945)));
            
            //#line 621 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            x10_int i__72924max__115942 = ((cLim) - (((x10_int)1)));
            {
                x10_int i__115943;
                for (i__115943 = ((x10_int)0); ((i__115943) <= (i__72924max__115942));
                     i__115943 = ((i__115943) + (((x10_int)1))))
                {
                    x10_int cc__115944 = i__115943;
                    
                    //#line 622 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int kk__115939 = ((cStrt) + (cc__115944));
                    
                    //#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_double normK__115940 = ::x10aux::nullCheck(this->FMGL(normFactors))->x10::lang::Rail< x10_double >::__apply(
                                                 ((x10_long)(kk__115939)));
                    
                    //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    if (((kk__115939) < (ll__115945))) {
                        continue;
                    }
                    
                    //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_long kkll_st__115941 = ((((((((x10_long)(kk__115939))) * (((((x10_long)(kk__115939))) + (((x10_long)1ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)))) + (((x10_long)(ll__115945))));
                    
                    //#line 1154 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<x10_double>* src__115932 =
                      this->FMGL(pcdint);
                    x10_long srcIndex__115933 = ::x10aux::nullCheck(this->FMGL(pcdint))->FMGL(region)->indexOf(
                                                  ((x10_long)(dd__115949)),
                                                  ((x10_long)(cc__115944)),
                                                  ((x10_long)0ll),
                                                  ((x10_long)0ll));
                    
                    //#line 1155 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<x10_double>* dst__115934 =
                      this->FMGL(npint);
                    
                    //#line 1156 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long numElems__115935 = this->FMGL(maxam2N);
                    
                    //#line 1157 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::lang::Rail< void >::copy< x10_double >(
                      ::x10aux::nullCheck(src__115932)->FMGL(raw),
                      srcIndex__115933, ::x10aux::nullCheck(dst__115934)->FMGL(raw),
                      ((x10_long)0ll), numElems__115935);
                    
                    //#line 630 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                    x10_int i__72906max__115936 = ((bLim) - (((x10_int)1)));
                    {
                        x10_int i__115937;
                        for (i__115937 = ((x10_int)0); ((i__115937) <= (i__72906max__115936));
                             i__115937 = ((i__115937) + (((x10_int)1))))
                        {
                            x10_int bb__115938 = i__115937;
                            
                            //#line 631 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int jj__115926 = ((bStrt) + (bb__115938));
                            
                            //#line 632 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_double normJ__115927 = ::x10aux::nullCheck(this->FMGL(normFactors))->x10::lang::Rail< x10_double >::__apply(
                                                         ((x10_long)(jj__115926)));
                            
                            //#line 633 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            ::au::edu::anu::qm::Power powersB__115928 =
                              ::x10aux::nullCheck(shellB)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                                ((x10_long)(bb__115938)));
                            
                            //#line 634 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int lp__115929 = powersB__115928->FMGL(l);
                            
                            //#line 635 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int mp__115930 = powersB__115928->FMGL(m);
                            
                            //#line 636 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int np__115931 = powersB__115928->FMGL(n);
                            
                            //#line 638 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                            x10_int i__72888max__115923 =
                              ((aLim) - (((x10_int)1)));
                            {
                                x10_int i__115924;
                                for (i__115924 = ((x10_int)0);
                                     ((i__115924) <= (i__72888max__115923));
                                     i__115924 = ((i__115924) + (((x10_int)1))))
                                {
                                    x10_int aa__115925 = i__115924;
                                    
                                    //#line 639 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    x10_int ii__115914 = ((aStrt) + (aa__115925));
                                    
                                    //#line 641 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                    if (((ii__115914) >= (jj__115926)))
                                    {
                                        
                                        //#line 642 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                        x10_int iijj_st__115915 =
                                          ((((((ii__115914) * (((ii__115914) + (((x10_int)1)))))) / ::x10aux::zeroCheck(((x10_int)2)))) + (jj__115926));
                                        
                                        //#line 644 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                        if (((((x10_long)(iijj_st__115915))) >= (kkll_st__115941)))
                                        {
                                            
                                            //#line 645 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_double normI__115916 =
                                              ::x10aux::nullCheck(this->FMGL(normFactors))->x10::lang::Rail< x10_double >::__apply(
                                                ((x10_long)(ii__115914)));
                                            
                                            //#line 646 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::au::edu::anu::qm::Power powersA__115917 =
                                              ::x10aux::nullCheck(shellA)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                                                ((x10_long)(aa__115925)));
                                            
                                            //#line 647 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_int lq__115918 =
                                              powersA__115917->FMGL(l);
                                            
                                            //#line 648 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_int mq__115919 =
                                              powersA__115917->FMGL(m);
                                            
                                            //#line 649 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_int nq__115920 =
                                              powersA__115917->FMGL(n);
                                            
                                            //#line 650 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_double intVal__115921 =
                                              this->mdHrr(
                                                lp__115929,
                                                mp__115930,
                                                np__115931,
                                                lq__115918,
                                                mq__115919,
                                                nq__115920,
                                                ((x10_int)0),
                                                ((x10_int)0),
                                                ((x10_int)0),
                                                pbi, pbj,
                                                pbk, pai,
                                                paj, pak,
                                                halfSigmaP);
                                            
                                            //#line 653 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_double normIntVal__115922 =
                                              ((((((((intVal__115921) * (normL__115946))) * (normK__115940))) * (normJ__115927))) * (normI__115916));
                                            
                                            //#line 658 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::au::edu::anu::qm::TwoElectronIntegrals* this__115905 =
                                              this;
                                            
                                            //#line 667 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_double twoEIntVal__115906 =
                                              normIntVal__115922;
                                            
                                            //#line 668 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            x10_int ii__115907 =
                                              ii__115914;
                                            x10_int jj__115908 =
                                              jj__115926;
                                            x10_int kk__115909 =
                                              kk__115939;
                                            x10_int ll__115910 =
                                              ll__115945;
                                            
                                            //#line 669 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* jMatrix__115911 =
                                              jMatrix;
                                            
                                            //#line 670 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* kMatrix__115912 =
                                              kMatrix;
                                            
                                            //#line 671 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* dMatrix__115913 =
                                              dMatrix;
                                            
                                            //#line 672 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* a__115857 =
                                              jMatrix__115911;
                                            x10_long i__115858 =
                                              ((x10_long)(ii__115907));
                                            x10_long i__115859 =
                                              ((x10_long)(jj__115908));
                                            x10_double r__115860 =
                                              (((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115861 =
                                                  i__115858;
                                                x10_long y__115862 =
                                                  i__115859;
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115857)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115862) * (::x10aux::nullCheck(a__115857)->FMGL(M)))) + (x__115861)));
                                            }))
                                            ) + ((((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115863 =
                                                  ((x10_long)(kk__115909));
                                                x10_long y__115864 =
                                                  ((x10_long)(ll__115910));
                                                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115864) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115863)));
                                            }))
                                            ) * (twoEIntVal__115906))));
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__115329 =
                                              i__115858;
                                            x10_long y__115330 =
                                              i__115859;
                                            x10_double v__115331 =
                                              r__115860;
                                            x10_double ret__115332;
                                            
                                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115857)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                              ((((y__115330) * (::x10aux::nullCheck(a__115857)->FMGL(M)))) + (x__115329)),
                                              v__115331);
                                            
                                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115332 =
                                              v__115331;
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115332;
                                            
                                            //#line 673 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* a__115865 =
                                              jMatrix__115911;
                                            x10_long i__115866 =
                                              ((x10_long)(kk__115909));
                                            x10_long i__115867 =
                                              ((x10_long)(ll__115910));
                                            x10_double r__115868 =
                                              (((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115869 =
                                                  i__115866;
                                                x10_long y__115870 =
                                                  i__115867;
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115865)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115870) * (::x10aux::nullCheck(a__115865)->FMGL(M)))) + (x__115869)));
                                            }))
                                            ) + ((((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115871 =
                                                  ((x10_long)(ii__115907));
                                                x10_long y__115872 =
                                                  ((x10_long)(jj__115908));
                                                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115872) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115871)));
                                            }))
                                            ) * (twoEIntVal__115906))));
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__115333 =
                                              i__115866;
                                            x10_long y__115334 =
                                              i__115867;
                                            x10_double v__115335 =
                                              r__115868;
                                            x10_double ret__115336;
                                            
                                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115865)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                              ((((y__115334) * (::x10aux::nullCheck(a__115865)->FMGL(M)))) + (x__115333)),
                                              v__115335);
                                            
                                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115336 =
                                              v__115335;
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115336;
                                            
                                            //#line 674 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* a__115873 =
                                              kMatrix__115912;
                                            x10_long i__115874 =
                                              ((x10_long)(ii__115907));
                                            x10_long i__115875 =
                                              ((x10_long)(kk__115909));
                                            x10_double r__115876 =
                                              (((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115877 =
                                                  i__115874;
                                                x10_long y__115878 =
                                                  i__115875;
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115873)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115878) * (::x10aux::nullCheck(a__115873)->FMGL(M)))) + (x__115877)));
                                            }))
                                            ) + ((((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115879 =
                                                  ((x10_long)(jj__115908));
                                                x10_long y__115880 =
                                                  ((x10_long)(ll__115910));
                                                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115880) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115879)));
                                            }))
                                            ) * (twoEIntVal__115906))));
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__115337 =
                                              i__115874;
                                            x10_long y__115338 =
                                              i__115875;
                                            x10_double v__115339 =
                                              r__115876;
                                            x10_double ret__115340;
                                            
                                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115873)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                              ((((y__115338) * (::x10aux::nullCheck(a__115873)->FMGL(M)))) + (x__115337)),
                                              v__115339);
                                            
                                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115340 =
                                              v__115339;
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115340;
                                            
                                            //#line 675 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* a__115881 =
                                              kMatrix__115912;
                                            x10_long i__115882 =
                                              ((x10_long)(ii__115907));
                                            x10_long i__115883 =
                                              ((x10_long)(ll__115910));
                                            x10_double r__115884 =
                                              (((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115885 =
                                                  i__115882;
                                                x10_long y__115886 =
                                                  i__115883;
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115881)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115886) * (::x10aux::nullCheck(a__115881)->FMGL(M)))) + (x__115885)));
                                            }))
                                            ) + ((((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115887 =
                                                  ((x10_long)(jj__115908));
                                                x10_long y__115888 =
                                                  ((x10_long)(kk__115909));
                                                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115888) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115887)));
                                            }))
                                            ) * (twoEIntVal__115906))));
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__115341 =
                                              i__115882;
                                            x10_long y__115342 =
                                              i__115883;
                                            x10_double v__115343 =
                                              r__115884;
                                            x10_double ret__115344;
                                            
                                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115881)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                              ((((y__115342) * (::x10aux::nullCheck(a__115881)->FMGL(M)))) + (x__115341)),
                                              v__115343);
                                            
                                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115344 =
                                              v__115343;
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115344;
                                            
                                            //#line 676 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* a__115889 =
                                              kMatrix__115912;
                                            x10_long i__115890 =
                                              ((x10_long)(jj__115908));
                                            x10_long i__115891 =
                                              ((x10_long)(kk__115909));
                                            x10_double r__115892 =
                                              (((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115893 =
                                                  i__115890;
                                                x10_long y__115894 =
                                                  i__115891;
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115889)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115894) * (::x10aux::nullCheck(a__115889)->FMGL(M)))) + (x__115893)));
                                            }))
                                            ) + ((((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115895 =
                                                  ((x10_long)(ii__115907));
                                                x10_long y__115896 =
                                                  ((x10_long)(ll__115910));
                                                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115896) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115895)));
                                            }))
                                            ) * (twoEIntVal__115906))));
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__115345 =
                                              i__115890;
                                            x10_long y__115346 =
                                              i__115891;
                                            x10_double v__115347 =
                                              r__115892;
                                            x10_double ret__115348;
                                            
                                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115889)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                              ((((y__115346) * (::x10aux::nullCheck(a__115889)->FMGL(M)))) + (x__115345)),
                                              v__115347);
                                            
                                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115348 =
                                              v__115347;
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115348;
                                            
                                            //#line 677 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            ::x10::matrix::DenseMatrix* a__115897 =
                                              kMatrix__115912;
                                            x10_long i__115898 =
                                              ((x10_long)(jj__115908));
                                            x10_long i__115899 =
                                              ((x10_long)(ll__115910));
                                            x10_double r__115900 =
                                              (((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115901 =
                                                  i__115898;
                                                x10_long y__115902 =
                                                  i__115899;
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115897)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115902) * (::x10aux::nullCheck(a__115897)->FMGL(M)))) + (x__115901)));
                                            }))
                                            ) + ((((__extension__ ({
                                                
                                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115903 =
                                                  ((x10_long)(ii__115907));
                                                x10_long y__115904 =
                                                  ((x10_long)(kk__115909));
                                                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                  ((((y__115904) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115903)));
                                            }))
                                            ) * (twoEIntVal__115906))));
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__115349 =
                                              i__115898;
                                            x10_long y__115350 =
                                              i__115899;
                                            x10_double v__115351 =
                                              r__115900;
                                            x10_double ret__115352;
                                            
                                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115897)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                              ((((y__115350) * (::x10aux::nullCheck(a__115897)->FMGL(M)))) + (x__115349)),
                                              v__115351);
                                            
                                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115352 =
                                              v__115351;
                                            
                                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            ret__115352;
                                            
                                            //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            if ((!::x10aux::struct_equals(ii__115907,
                                                                          jj__115908)))
                                            {
                                                
                                                //#line 679 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115449 =
                                                  jMatrix__115911;
                                                x10_long i__115450 =
                                                  ((x10_long)(jj__115908));
                                                x10_long i__115451 =
                                                  ((x10_long)(ii__115907));
                                                x10_double r__115452 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115453 =
                                                      i__115450;
                                                    x10_long y__115454 =
                                                      i__115451;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115449)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115454) * (::x10aux::nullCheck(a__115449)->FMGL(M)))) + (x__115453)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115455 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long y__115456 =
                                                      ((x10_long)(ll__115910));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115456) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115455)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115353 =
                                                  i__115450;
                                                x10_long y__115354 =
                                                  i__115451;
                                                x10_double v__115355 =
                                                  r__115452;
                                                x10_double ret__115356;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115449)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115354) * (::x10aux::nullCheck(a__115449)->FMGL(M)))) + (x__115353)),
                                                  v__115355);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115356 =
                                                  v__115355;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115356;
                                                
                                                //#line 680 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115457 =
                                                  jMatrix__115911;
                                                x10_long i__115458 =
                                                  ((x10_long)(kk__115909));
                                                x10_long i__115459 =
                                                  ((x10_long)(ll__115910));
                                                x10_double r__115460 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115461 =
                                                      i__115458;
                                                    x10_long y__115462 =
                                                      i__115459;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115457)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115462) * (::x10aux::nullCheck(a__115457)->FMGL(M)))) + (x__115461)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115463 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long y__115464 =
                                                      ((x10_long)(ii__115907));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115464) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115463)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115357 =
                                                  i__115458;
                                                x10_long y__115358 =
                                                  i__115459;
                                                x10_double v__115359 =
                                                  r__115460;
                                                x10_double ret__115360;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115457)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115358) * (::x10aux::nullCheck(a__115457)->FMGL(M)))) + (x__115357)),
                                                  v__115359);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115360 =
                                                  v__115359;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115360;
                                                
                                                //#line 681 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115465 =
                                                  kMatrix__115912;
                                                x10_long i__115466 =
                                                  ((x10_long)(jj__115908));
                                                x10_long i__115467 =
                                                  ((x10_long)(kk__115909));
                                                x10_double r__115468 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115469 =
                                                      i__115466;
                                                    x10_long y__115470 =
                                                      i__115467;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115465)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115470) * (::x10aux::nullCheck(a__115465)->FMGL(M)))) + (x__115469)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115471 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long y__115472 =
                                                      ((x10_long)(ll__115910));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115472) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115471)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115361 =
                                                  i__115466;
                                                x10_long y__115362 =
                                                  i__115467;
                                                x10_double v__115363 =
                                                  r__115468;
                                                x10_double ret__115364;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115465)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115362) * (::x10aux::nullCheck(a__115465)->FMGL(M)))) + (x__115361)),
                                                  v__115363);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115364 =
                                                  v__115363;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115364;
                                                
                                                //#line 682 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115473 =
                                                  kMatrix__115912;
                                                x10_long i__115474 =
                                                  ((x10_long)(jj__115908));
                                                x10_long i__115475 =
                                                  ((x10_long)(ll__115910));
                                                x10_double r__115476 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115477 =
                                                      i__115474;
                                                    x10_long y__115478 =
                                                      i__115475;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115473)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115478) * (::x10aux::nullCheck(a__115473)->FMGL(M)))) + (x__115477)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115479 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long y__115480 =
                                                      ((x10_long)(kk__115909));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115480) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115479)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115365 =
                                                  i__115474;
                                                x10_long y__115366 =
                                                  i__115475;
                                                x10_double v__115367 =
                                                  r__115476;
                                                x10_double ret__115368;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115473)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115366) * (::x10aux::nullCheck(a__115473)->FMGL(M)))) + (x__115365)),
                                                  v__115367);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115368 =
                                                  v__115367;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115368;
                                                
                                                //#line 683 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115481 =
                                                  kMatrix__115912;
                                                x10_long i__115482 =
                                                  ((x10_long)(ii__115907));
                                                x10_long i__115483 =
                                                  ((x10_long)(kk__115909));
                                                x10_double r__115484 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115485 =
                                                      i__115482;
                                                    x10_long y__115486 =
                                                      i__115483;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115481)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115486) * (::x10aux::nullCheck(a__115481)->FMGL(M)))) + (x__115485)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115487 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long y__115488 =
                                                      ((x10_long)(ll__115910));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115488) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115487)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115369 =
                                                  i__115482;
                                                x10_long y__115370 =
                                                  i__115483;
                                                x10_double v__115371 =
                                                  r__115484;
                                                x10_double ret__115372;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115481)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115370) * (::x10aux::nullCheck(a__115481)->FMGL(M)))) + (x__115369)),
                                                  v__115371);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115372 =
                                                  v__115371;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115372;
                                                
                                                //#line 684 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115489 =
                                                  kMatrix__115912;
                                                x10_long i__115490 =
                                                  ((x10_long)(ii__115907));
                                                x10_long i__115491 =
                                                  ((x10_long)(ll__115910));
                                                x10_double r__115492 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115493 =
                                                      i__115490;
                                                    x10_long y__115494 =
                                                      i__115491;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115489)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115494) * (::x10aux::nullCheck(a__115489)->FMGL(M)))) + (x__115493)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115495 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long y__115496 =
                                                      ((x10_long)(kk__115909));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115496) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115495)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115373 =
                                                  i__115490;
                                                x10_long y__115374 =
                                                  i__115491;
                                                x10_double v__115375 =
                                                  r__115492;
                                                x10_double ret__115376;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115489)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115374) * (::x10aux::nullCheck(a__115489)->FMGL(M)))) + (x__115373)),
                                                  v__115375);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115376 =
                                                  v__115375;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115376;
                                                
                                                //#line 685 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                if ((!::x10aux::struct_equals(kk__115909,
                                                                              ll__115910)))
                                                {
                                                    
                                                    //#line 686 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115401 =
                                                      jMatrix__115911;
                                                    x10_long i__115402 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long i__115403 =
                                                      ((x10_long)(ii__115907));
                                                    x10_double r__115404 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115405 =
                                                          i__115402;
                                                        x10_long y__115406 =
                                                          i__115403;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115401)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115406) * (::x10aux::nullCheck(a__115401)->FMGL(M)))) + (x__115405)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115407 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long y__115408 =
                                                          ((x10_long)(kk__115909));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115408) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115407)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115377 =
                                                      i__115402;
                                                    x10_long y__115378 =
                                                      i__115403;
                                                    x10_double v__115379 =
                                                      r__115404;
                                                    x10_double ret__115380;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115401)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115378) * (::x10aux::nullCheck(a__115401)->FMGL(M)))) + (x__115377)),
                                                      v__115379);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115380 =
                                                      v__115379;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115380;
                                                    
                                                    //#line 687 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115409 =
                                                      jMatrix__115911;
                                                    x10_long i__115410 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long i__115411 =
                                                      ((x10_long)(kk__115909));
                                                    x10_double r__115412 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115413 =
                                                          i__115410;
                                                        x10_long y__115414 =
                                                          i__115411;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115409)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115414) * (::x10aux::nullCheck(a__115409)->FMGL(M)))) + (x__115413)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115415 =
                                                          ((x10_long)(jj__115908));
                                                        x10_long y__115416 =
                                                          ((x10_long)(ii__115907));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115416) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115415)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115381 =
                                                      i__115410;
                                                    x10_long y__115382 =
                                                      i__115411;
                                                    x10_double v__115383 =
                                                      r__115412;
                                                    x10_double ret__115384;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115409)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115382) * (::x10aux::nullCheck(a__115409)->FMGL(M)))) + (x__115381)),
                                                      v__115383);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115384 =
                                                      v__115383;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115384;
                                                    
                                                    //#line 688 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115417 =
                                                      kMatrix__115912;
                                                    x10_long i__115418 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long i__115419 =
                                                      ((x10_long)(ll__115910));
                                                    x10_double r__115420 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115421 =
                                                          i__115418;
                                                        x10_long y__115422 =
                                                          i__115419;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115417)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115422) * (::x10aux::nullCheck(a__115417)->FMGL(M)))) + (x__115421)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115423 =
                                                          ((x10_long)(ii__115907));
                                                        x10_long y__115424 =
                                                          ((x10_long)(kk__115909));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115424) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115423)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115385 =
                                                      i__115418;
                                                    x10_long y__115386 =
                                                      i__115419;
                                                    x10_double v__115387 =
                                                      r__115420;
                                                    x10_double ret__115388;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115417)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115386) * (::x10aux::nullCheck(a__115417)->FMGL(M)))) + (x__115385)),
                                                      v__115387);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115388 =
                                                      v__115387;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115388;
                                                    
                                                    //#line 689 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115425 =
                                                      kMatrix__115912;
                                                    x10_long i__115426 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long i__115427 =
                                                      ((x10_long)(kk__115909));
                                                    x10_double r__115428 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115429 =
                                                          i__115426;
                                                        x10_long y__115430 =
                                                          i__115427;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115425)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115430) * (::x10aux::nullCheck(a__115425)->FMGL(M)))) + (x__115429)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115431 =
                                                          ((x10_long)(ii__115907));
                                                        x10_long y__115432 =
                                                          ((x10_long)(ll__115910));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115432) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115431)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115389 =
                                                      i__115426;
                                                    x10_long y__115390 =
                                                      i__115427;
                                                    x10_double v__115391 =
                                                      r__115428;
                                                    x10_double ret__115392;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115425)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115390) * (::x10aux::nullCheck(a__115425)->FMGL(M)))) + (x__115389)),
                                                      v__115391);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115392 =
                                                      v__115391;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115392;
                                                    
                                                    //#line 690 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115433 =
                                                      kMatrix__115912;
                                                    x10_long i__115434 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long i__115435 =
                                                      ((x10_long)(ll__115910));
                                                    x10_double r__115436 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115437 =
                                                          i__115434;
                                                        x10_long y__115438 =
                                                          i__115435;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115433)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115438) * (::x10aux::nullCheck(a__115433)->FMGL(M)))) + (x__115437)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115439 =
                                                          ((x10_long)(jj__115908));
                                                        x10_long y__115440 =
                                                          ((x10_long)(kk__115909));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115440) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115439)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115393 =
                                                      i__115434;
                                                    x10_long y__115394 =
                                                      i__115435;
                                                    x10_double v__115395 =
                                                      r__115436;
                                                    x10_double ret__115396;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115433)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115394) * (::x10aux::nullCheck(a__115433)->FMGL(M)))) + (x__115393)),
                                                      v__115395);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115396 =
                                                      v__115395;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115396;
                                                    
                                                    //#line 691 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115441 =
                                                      kMatrix__115912;
                                                    x10_long i__115442 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long i__115443 =
                                                      ((x10_long)(kk__115909));
                                                    x10_double r__115444 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115445 =
                                                          i__115442;
                                                        x10_long y__115446 =
                                                          i__115443;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115441)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115446) * (::x10aux::nullCheck(a__115441)->FMGL(M)))) + (x__115445)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115447 =
                                                          ((x10_long)(jj__115908));
                                                        x10_long y__115448 =
                                                          ((x10_long)(ll__115910));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115448) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115447)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115397 =
                                                      i__115442;
                                                    x10_long y__115398 =
                                                      i__115443;
                                                    x10_double v__115399 =
                                                      r__115444;
                                                    x10_double ret__115400;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115441)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115398) * (::x10aux::nullCheck(a__115441)->FMGL(M)))) + (x__115397)),
                                                      v__115399);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115400 =
                                                      v__115399;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115400;
                                                }
                                                
                                            }
                                            
                                            //#line 694 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            if ((!::x10aux::struct_equals(kk__115909,
                                                                          ll__115910)))
                                            {
                                                
                                                //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115521 =
                                                  jMatrix__115911;
                                                x10_long i__115522 =
                                                  ((x10_long)(ii__115907));
                                                x10_long i__115523 =
                                                  ((x10_long)(jj__115908));
                                                x10_double r__115524 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115525 =
                                                      i__115522;
                                                    x10_long y__115526 =
                                                      i__115523;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115521)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115526) * (::x10aux::nullCheck(a__115521)->FMGL(M)))) + (x__115525)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115527 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long y__115528 =
                                                      ((x10_long)(kk__115909));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115528) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115527)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115497 =
                                                  i__115522;
                                                x10_long y__115498 =
                                                  i__115523;
                                                x10_double v__115499 =
                                                  r__115524;
                                                x10_double ret__115500;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115521)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115498) * (::x10aux::nullCheck(a__115521)->FMGL(M)))) + (x__115497)),
                                                  v__115499);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115500 =
                                                  v__115499;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115500;
                                                
                                                //#line 696 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115529 =
                                                  jMatrix__115911;
                                                x10_long i__115530 =
                                                  ((x10_long)(ll__115910));
                                                x10_long i__115531 =
                                                  ((x10_long)(kk__115909));
                                                x10_double r__115532 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115533 =
                                                      i__115530;
                                                    x10_long y__115534 =
                                                      i__115531;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115529)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115534) * (::x10aux::nullCheck(a__115529)->FMGL(M)))) + (x__115533)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115535 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long y__115536 =
                                                      ((x10_long)(jj__115908));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115536) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115535)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115501 =
                                                  i__115530;
                                                x10_long y__115502 =
                                                  i__115531;
                                                x10_double v__115503 =
                                                  r__115532;
                                                x10_double ret__115504;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115529)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115502) * (::x10aux::nullCheck(a__115529)->FMGL(M)))) + (x__115501)),
                                                  v__115503);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115504 =
                                                  v__115503;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115504;
                                                
                                                //#line 697 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115537 =
                                                  kMatrix__115912;
                                                x10_long i__115538 =
                                                  ((x10_long)(ii__115907));
                                                x10_long i__115539 =
                                                  ((x10_long)(ll__115910));
                                                x10_double r__115540 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115541 =
                                                      i__115538;
                                                    x10_long y__115542 =
                                                      i__115539;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115537)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115542) * (::x10aux::nullCheck(a__115537)->FMGL(M)))) + (x__115541)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115543 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long y__115544 =
                                                      ((x10_long)(kk__115909));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115544) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115543)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115505 =
                                                  i__115538;
                                                x10_long y__115506 =
                                                  i__115539;
                                                x10_double v__115507 =
                                                  r__115540;
                                                x10_double ret__115508;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115537)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115506) * (::x10aux::nullCheck(a__115537)->FMGL(M)))) + (x__115505)),
                                                  v__115507);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115508 =
                                                  v__115507;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115508;
                                                
                                                //#line 698 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115545 =
                                                  kMatrix__115912;
                                                x10_long i__115546 =
                                                  ((x10_long)(ii__115907));
                                                x10_long i__115547 =
                                                  ((x10_long)(kk__115909));
                                                x10_double r__115548 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115549 =
                                                      i__115546;
                                                    x10_long y__115550 =
                                                      i__115547;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115545)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115550) * (::x10aux::nullCheck(a__115545)->FMGL(M)))) + (x__115549)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115551 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long y__115552 =
                                                      ((x10_long)(ll__115910));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115552) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115551)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115509 =
                                                  i__115546;
                                                x10_long y__115510 =
                                                  i__115547;
                                                x10_double v__115511 =
                                                  r__115548;
                                                x10_double ret__115512;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115545)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115510) * (::x10aux::nullCheck(a__115545)->FMGL(M)))) + (x__115509)),
                                                  v__115511);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115512 =
                                                  v__115511;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115512;
                                                
                                                //#line 699 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115553 =
                                                  kMatrix__115912;
                                                x10_long i__115554 =
                                                  ((x10_long)(jj__115908));
                                                x10_long i__115555 =
                                                  ((x10_long)(ll__115910));
                                                x10_double r__115556 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115557 =
                                                      i__115554;
                                                    x10_long y__115558 =
                                                      i__115555;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115553)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115558) * (::x10aux::nullCheck(a__115553)->FMGL(M)))) + (x__115557)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115559 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long y__115560 =
                                                      ((x10_long)(kk__115909));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115560) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115559)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115513 =
                                                  i__115554;
                                                x10_long y__115514 =
                                                  i__115555;
                                                x10_double v__115515 =
                                                  r__115556;
                                                x10_double ret__115516;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115553)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115514) * (::x10aux::nullCheck(a__115553)->FMGL(M)))) + (x__115513)),
                                                  v__115515);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115516 =
                                                  v__115515;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115516;
                                                
                                                //#line 700 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115561 =
                                                  kMatrix__115912;
                                                x10_long i__115562 =
                                                  ((x10_long)(jj__115908));
                                                x10_long i__115563 =
                                                  ((x10_long)(kk__115909));
                                                x10_double r__115564 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115565 =
                                                      i__115562;
                                                    x10_long y__115566 =
                                                      i__115563;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115561)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115566) * (::x10aux::nullCheck(a__115561)->FMGL(M)))) + (x__115565)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115567 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long y__115568 =
                                                      ((x10_long)(ll__115910));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115568) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115567)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115517 =
                                                  i__115562;
                                                x10_long y__115518 =
                                                  i__115563;
                                                x10_double v__115519 =
                                                  r__115564;
                                                x10_double ret__115520;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115561)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115518) * (::x10aux::nullCheck(a__115561)->FMGL(M)))) + (x__115517)),
                                                  v__115519);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115520 =
                                                  v__115519;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115520;
                                            }
                                            
                                            //#line 702 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                            if (((!::x10aux::struct_equals(ii__115907,
                                                                           kk__115909)) ||
                                                (!::x10aux::struct_equals(jj__115908,
                                                                          ll__115910))))
                                            {
                                                
                                                //#line 703 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115809 =
                                                  jMatrix__115911;
                                                x10_long i__115810 =
                                                  ((x10_long)(kk__115909));
                                                x10_long i__115811 =
                                                  ((x10_long)(ll__115910));
                                                x10_double r__115812 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115813 =
                                                      i__115810;
                                                    x10_long y__115814 =
                                                      i__115811;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115809)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115814) * (::x10aux::nullCheck(a__115809)->FMGL(M)))) + (x__115813)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115815 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long y__115816 =
                                                      ((x10_long)(jj__115908));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115816) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115815)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115569 =
                                                  i__115810;
                                                x10_long y__115570 =
                                                  i__115811;
                                                x10_double v__115571 =
                                                  r__115812;
                                                x10_double ret__115572;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115809)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115570) * (::x10aux::nullCheck(a__115809)->FMGL(M)))) + (x__115569)),
                                                  v__115571);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115572 =
                                                  v__115571;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115572;
                                                
                                                //#line 704 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115817 =
                                                  jMatrix__115911;
                                                x10_long i__115818 =
                                                  ((x10_long)(ii__115907));
                                                x10_long i__115819 =
                                                  ((x10_long)(jj__115908));
                                                x10_double r__115820 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115821 =
                                                      i__115818;
                                                    x10_long y__115822 =
                                                      i__115819;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115817)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115822) * (::x10aux::nullCheck(a__115817)->FMGL(M)))) + (x__115821)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115823 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long y__115824 =
                                                      ((x10_long)(ll__115910));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115824) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115823)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115573 =
                                                  i__115818;
                                                x10_long y__115574 =
                                                  i__115819;
                                                x10_double v__115575 =
                                                  r__115820;
                                                x10_double ret__115576;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115817)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115574) * (::x10aux::nullCheck(a__115817)->FMGL(M)))) + (x__115573)),
                                                  v__115575);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115576 =
                                                  v__115575;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115576;
                                                
                                                //#line 705 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115825 =
                                                  kMatrix__115912;
                                                x10_long i__115826 =
                                                  ((x10_long)(kk__115909));
                                                x10_long i__115827 =
                                                  ((x10_long)(ii__115907));
                                                x10_double r__115828 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115829 =
                                                      i__115826;
                                                    x10_long y__115830 =
                                                      i__115827;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115825)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115830) * (::x10aux::nullCheck(a__115825)->FMGL(M)))) + (x__115829)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115831 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long y__115832 =
                                                      ((x10_long)(jj__115908));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115832) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115831)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115577 =
                                                  i__115826;
                                                x10_long y__115578 =
                                                  i__115827;
                                                x10_double v__115579 =
                                                  r__115828;
                                                x10_double ret__115580;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115825)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115578) * (::x10aux::nullCheck(a__115825)->FMGL(M)))) + (x__115577)),
                                                  v__115579);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115580 =
                                                  v__115579;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115580;
                                                
                                                //#line 706 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115833 =
                                                  kMatrix__115912;
                                                x10_long i__115834 =
                                                  ((x10_long)(kk__115909));
                                                x10_long i__115835 =
                                                  ((x10_long)(jj__115908));
                                                x10_double r__115836 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115837 =
                                                      i__115834;
                                                    x10_long y__115838 =
                                                      i__115835;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115833)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115838) * (::x10aux::nullCheck(a__115833)->FMGL(M)))) + (x__115837)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115839 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long y__115840 =
                                                      ((x10_long)(ii__115907));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115840) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115839)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115581 =
                                                  i__115834;
                                                x10_long y__115582 =
                                                  i__115835;
                                                x10_double v__115583 =
                                                  r__115836;
                                                x10_double ret__115584;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115833)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115582) * (::x10aux::nullCheck(a__115833)->FMGL(M)))) + (x__115581)),
                                                  v__115583);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115584 =
                                                  v__115583;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115584;
                                                
                                                //#line 707 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115841 =
                                                  kMatrix__115912;
                                                x10_long i__115842 =
                                                  ((x10_long)(ll__115910));
                                                x10_long i__115843 =
                                                  ((x10_long)(ii__115907));
                                                x10_double r__115844 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115845 =
                                                      i__115842;
                                                    x10_long y__115846 =
                                                      i__115843;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115841)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115846) * (::x10aux::nullCheck(a__115841)->FMGL(M)))) + (x__115845)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115847 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long y__115848 =
                                                      ((x10_long)(jj__115908));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115848) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115847)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115585 =
                                                  i__115842;
                                                x10_long y__115586 =
                                                  i__115843;
                                                x10_double v__115587 =
                                                  r__115844;
                                                x10_double ret__115588;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115841)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115586) * (::x10aux::nullCheck(a__115841)->FMGL(M)))) + (x__115585)),
                                                  v__115587);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115588 =
                                                  v__115587;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115588;
                                                
                                                //#line 708 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                ::x10::matrix::DenseMatrix* a__115849 =
                                                  kMatrix__115912;
                                                x10_long i__115850 =
                                                  ((x10_long)(ll__115910));
                                                x10_long i__115851 =
                                                  ((x10_long)(jj__115908));
                                                x10_double r__115852 =
                                                  (((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115853 =
                                                      i__115850;
                                                    x10_long y__115854 =
                                                      i__115851;
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115849)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115854) * (::x10aux::nullCheck(a__115849)->FMGL(M)))) + (x__115853)));
                                                }))
                                                ) + ((((__extension__ ({
                                                    
                                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115855 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long y__115856 =
                                                      ((x10_long)(ii__115907));
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                      ((((y__115856) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115855)));
                                                }))
                                                ) * (twoEIntVal__115906))));
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                x10_long x__115589 =
                                                  i__115850;
                                                x10_long y__115590 =
                                                  i__115851;
                                                x10_double v__115591 =
                                                  r__115852;
                                                x10_double ret__115592;
                                                
                                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(a__115849)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                  ((((y__115590) * (::x10aux::nullCheck(a__115849)->FMGL(M)))) + (x__115589)),
                                                  v__115591);
                                                
                                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115592 =
                                                  v__115591;
                                                
                                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                ret__115592;
                                                
                                                //#line 709 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                if ((!::x10aux::struct_equals(ii__115907,
                                                                              jj__115908)))
                                                {
                                                    
                                                    //#line 710 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115689 =
                                                      jMatrix__115911;
                                                    x10_long i__115690 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long i__115691 =
                                                      ((x10_long)(ll__115910));
                                                    x10_double r__115692 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115693 =
                                                          i__115690;
                                                        x10_long y__115694 =
                                                          i__115691;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115689)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115694) * (::x10aux::nullCheck(a__115689)->FMGL(M)))) + (x__115693)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115695 =
                                                          ((x10_long)(jj__115908));
                                                        x10_long y__115696 =
                                                          ((x10_long)(ii__115907));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115696) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115695)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115593 =
                                                      i__115690;
                                                    x10_long y__115594 =
                                                      i__115691;
                                                    x10_double v__115595 =
                                                      r__115692;
                                                    x10_double ret__115596;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115689)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115594) * (::x10aux::nullCheck(a__115689)->FMGL(M)))) + (x__115593)),
                                                      v__115595);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115596 =
                                                      v__115595;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115596;
                                                    
                                                    //#line 711 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115697 =
                                                      jMatrix__115911;
                                                    x10_long i__115698 =
                                                      ((x10_long)(jj__115908));
                                                    x10_long i__115699 =
                                                      ((x10_long)(ii__115907));
                                                    x10_double r__115700 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115701 =
                                                          i__115698;
                                                        x10_long y__115702 =
                                                          i__115699;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115697)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115702) * (::x10aux::nullCheck(a__115697)->FMGL(M)))) + (x__115701)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115703 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long y__115704 =
                                                          ((x10_long)(ll__115910));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115704) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115703)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115597 =
                                                      i__115698;
                                                    x10_long y__115598 =
                                                      i__115699;
                                                    x10_double v__115599 =
                                                      r__115700;
                                                    x10_double ret__115600;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115697)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115598) * (::x10aux::nullCheck(a__115697)->FMGL(M)))) + (x__115597)),
                                                      v__115599);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115600 =
                                                      v__115599;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115600;
                                                    
                                                    //#line 712 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115705 =
                                                      kMatrix__115912;
                                                    x10_long i__115706 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long i__115707 =
                                                      ((x10_long)(jj__115908));
                                                    x10_double r__115708 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115709 =
                                                          i__115706;
                                                        x10_long y__115710 =
                                                          i__115707;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115705)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115710) * (::x10aux::nullCheck(a__115705)->FMGL(M)))) + (x__115709)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115711 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long y__115712 =
                                                          ((x10_long)(ii__115907));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115712) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115711)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115601 =
                                                      i__115706;
                                                    x10_long y__115602 =
                                                      i__115707;
                                                    x10_double v__115603 =
                                                      r__115708;
                                                    x10_double ret__115604;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115705)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115602) * (::x10aux::nullCheck(a__115705)->FMGL(M)))) + (x__115601)),
                                                      v__115603);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115604 =
                                                      v__115603;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115604;
                                                    
                                                    //#line 713 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115713 =
                                                      kMatrix__115912;
                                                    x10_long i__115714 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long i__115715 =
                                                      ((x10_long)(ii__115907));
                                                    x10_double r__115716 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115717 =
                                                          i__115714;
                                                        x10_long y__115718 =
                                                          i__115715;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115713)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115718) * (::x10aux::nullCheck(a__115713)->FMGL(M)))) + (x__115717)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115719 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long y__115720 =
                                                          ((x10_long)(jj__115908));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115720) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115719)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115605 =
                                                      i__115714;
                                                    x10_long y__115606 =
                                                      i__115715;
                                                    x10_double v__115607 =
                                                      r__115716;
                                                    x10_double ret__115608;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115713)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115606) * (::x10aux::nullCheck(a__115713)->FMGL(M)))) + (x__115605)),
                                                      v__115607);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115608 =
                                                      v__115607;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115608;
                                                    
                                                    //#line 714 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115721 =
                                                      kMatrix__115912;
                                                    x10_long i__115722 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long i__115723 =
                                                      ((x10_long)(jj__115908));
                                                    x10_double r__115724 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115725 =
                                                          i__115722;
                                                        x10_long y__115726 =
                                                          i__115723;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115721)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115726) * (::x10aux::nullCheck(a__115721)->FMGL(M)))) + (x__115725)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115727 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long y__115728 =
                                                          ((x10_long)(ii__115907));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115728) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115727)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115609 =
                                                      i__115722;
                                                    x10_long y__115610 =
                                                      i__115723;
                                                    x10_double v__115611 =
                                                      r__115724;
                                                    x10_double ret__115612;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115721)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115610) * (::x10aux::nullCheck(a__115721)->FMGL(M)))) + (x__115609)),
                                                      v__115611);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115612 =
                                                      v__115611;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115612;
                                                    
                                                    //#line 715 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115729 =
                                                      kMatrix__115912;
                                                    x10_long i__115730 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long i__115731 =
                                                      ((x10_long)(ii__115907));
                                                    x10_double r__115732 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115733 =
                                                          i__115730;
                                                        x10_long y__115734 =
                                                          i__115731;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115729)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115734) * (::x10aux::nullCheck(a__115729)->FMGL(M)))) + (x__115733)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115735 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long y__115736 =
                                                          ((x10_long)(jj__115908));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115736) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115735)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115613 =
                                                      i__115730;
                                                    x10_long y__115614 =
                                                      i__115731;
                                                    x10_double v__115615 =
                                                      r__115732;
                                                    x10_double ret__115616;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115729)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115614) * (::x10aux::nullCheck(a__115729)->FMGL(M)))) + (x__115613)),
                                                      v__115615);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115616 =
                                                      v__115615;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115616;
                                                    
                                                    //#line 716 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    if ((!::x10aux::struct_equals(kk__115909,
                                                                                  ll__115910)))
                                                    {
                                                        
                                                        //#line 717 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                        ::x10::matrix::DenseMatrix* a__115641 =
                                                          jMatrix__115911;
                                                        x10_long i__115642 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long i__115643 =
                                                          ((x10_long)(kk__115909));
                                                        x10_double r__115644 =
                                                          (((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115645 =
                                                              i__115642;
                                                            x10_long y__115646 =
                                                              i__115643;
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115641)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115646) * (::x10aux::nullCheck(a__115641)->FMGL(M)))) + (x__115645)));
                                                        }))
                                                        ) + ((((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115647 =
                                                              ((x10_long)(jj__115908));
                                                            x10_long y__115648 =
                                                              ((x10_long)(ii__115907));
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115648) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115647)));
                                                        }))
                                                        ) * (twoEIntVal__115906))));
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115617 =
                                                          i__115642;
                                                        x10_long y__115618 =
                                                          i__115643;
                                                        x10_double v__115619 =
                                                          r__115644;
                                                        x10_double ret__115620;
                                                        
                                                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115641)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                          ((((y__115618) * (::x10aux::nullCheck(a__115641)->FMGL(M)))) + (x__115617)),
                                                          v__115619);
                                                        
                                                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115620 =
                                                          v__115619;
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115620;
                                                        
                                                        //#line 718 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                        ::x10::matrix::DenseMatrix* a__115649 =
                                                          jMatrix__115911;
                                                        x10_long i__115650 =
                                                          ((x10_long)(jj__115908));
                                                        x10_long i__115651 =
                                                          ((x10_long)(ii__115907));
                                                        x10_double r__115652 =
                                                          (((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115653 =
                                                              i__115650;
                                                            x10_long y__115654 =
                                                              i__115651;
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115649)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115654) * (::x10aux::nullCheck(a__115649)->FMGL(M)))) + (x__115653)));
                                                        }))
                                                        ) + ((((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115655 =
                                                              ((x10_long)(ll__115910));
                                                            x10_long y__115656 =
                                                              ((x10_long)(kk__115909));
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115656) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115655)));
                                                        }))
                                                        ) * (twoEIntVal__115906))));
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115621 =
                                                          i__115650;
                                                        x10_long y__115622 =
                                                          i__115651;
                                                        x10_double v__115623 =
                                                          r__115652;
                                                        x10_double ret__115624;
                                                        
                                                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115649)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                          ((((y__115622) * (::x10aux::nullCheck(a__115649)->FMGL(M)))) + (x__115621)),
                                                          v__115623);
                                                        
                                                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115624 =
                                                          v__115623;
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115624;
                                                        
                                                        //#line 719 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                        ::x10::matrix::DenseMatrix* a__115657 =
                                                          kMatrix__115912;
                                                        x10_long i__115658 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long i__115659 =
                                                          ((x10_long)(jj__115908));
                                                        x10_double r__115660 =
                                                          (((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115661 =
                                                              i__115658;
                                                            x10_long y__115662 =
                                                              i__115659;
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115657)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115662) * (::x10aux::nullCheck(a__115657)->FMGL(M)))) + (x__115661)));
                                                        }))
                                                        ) + ((((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115663 =
                                                              ((x10_long)(kk__115909));
                                                            x10_long y__115664 =
                                                              ((x10_long)(ii__115907));
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115664) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115663)));
                                                        }))
                                                        ) * (twoEIntVal__115906))));
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115625 =
                                                          i__115658;
                                                        x10_long y__115626 =
                                                          i__115659;
                                                        x10_double v__115627 =
                                                          r__115660;
                                                        x10_double ret__115628;
                                                        
                                                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115657)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                          ((((y__115626) * (::x10aux::nullCheck(a__115657)->FMGL(M)))) + (x__115625)),
                                                          v__115627);
                                                        
                                                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115628 =
                                                          v__115627;
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115628;
                                                        
                                                        //#line 720 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                        ::x10::matrix::DenseMatrix* a__115665 =
                                                          kMatrix__115912;
                                                        x10_long i__115666 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long i__115667 =
                                                          ((x10_long)(ii__115907));
                                                        x10_double r__115668 =
                                                          (((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115669 =
                                                              i__115666;
                                                            x10_long y__115670 =
                                                              i__115667;
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115665)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115670) * (::x10aux::nullCheck(a__115665)->FMGL(M)))) + (x__115669)));
                                                        }))
                                                        ) + ((((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115671 =
                                                              ((x10_long)(kk__115909));
                                                            x10_long y__115672 =
                                                              ((x10_long)(jj__115908));
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115672) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115671)));
                                                        }))
                                                        ) * (twoEIntVal__115906))));
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115629 =
                                                          i__115666;
                                                        x10_long y__115630 =
                                                          i__115667;
                                                        x10_double v__115631 =
                                                          r__115668;
                                                        x10_double ret__115632;
                                                        
                                                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115665)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                          ((((y__115630) * (::x10aux::nullCheck(a__115665)->FMGL(M)))) + (x__115629)),
                                                          v__115631);
                                                        
                                                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115632 =
                                                          v__115631;
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115632;
                                                        
                                                        //#line 721 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                        ::x10::matrix::DenseMatrix* a__115673 =
                                                          kMatrix__115912;
                                                        x10_long i__115674 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long i__115675 =
                                                          ((x10_long)(jj__115908));
                                                        x10_double r__115676 =
                                                          (((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115677 =
                                                              i__115674;
                                                            x10_long y__115678 =
                                                              i__115675;
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115673)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115678) * (::x10aux::nullCheck(a__115673)->FMGL(M)))) + (x__115677)));
                                                        }))
                                                        ) + ((((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115679 =
                                                              ((x10_long)(ll__115910));
                                                            x10_long y__115680 =
                                                              ((x10_long)(ii__115907));
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115680) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115679)));
                                                        }))
                                                        ) * (twoEIntVal__115906))));
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115633 =
                                                          i__115674;
                                                        x10_long y__115634 =
                                                          i__115675;
                                                        x10_double v__115635 =
                                                          r__115676;
                                                        x10_double ret__115636;
                                                        
                                                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115673)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                          ((((y__115634) * (::x10aux::nullCheck(a__115673)->FMGL(M)))) + (x__115633)),
                                                          v__115635);
                                                        
                                                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115636 =
                                                          v__115635;
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115636;
                                                        
                                                        //#line 722 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                        ::x10::matrix::DenseMatrix* a__115681 =
                                                          kMatrix__115912;
                                                        x10_long i__115682 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long i__115683 =
                                                          ((x10_long)(ii__115907));
                                                        x10_double r__115684 =
                                                          (((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115685 =
                                                              i__115682;
                                                            x10_long y__115686 =
                                                              i__115683;
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(a__115681)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115686) * (::x10aux::nullCheck(a__115681)->FMGL(M)))) + (x__115685)));
                                                        }))
                                                        ) + ((((__extension__ ({
                                                            
                                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                            x10_long x__115687 =
                                                              ((x10_long)(ll__115910));
                                                            x10_long y__115688 =
                                                              ((x10_long)(jj__115908));
                                                            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                              ((((y__115688) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115687)));
                                                        }))
                                                        ) * (twoEIntVal__115906))));
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115637 =
                                                          i__115682;
                                                        x10_long y__115638 =
                                                          i__115683;
                                                        x10_double v__115639 =
                                                          r__115684;
                                                        x10_double ret__115640;
                                                        
                                                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115681)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                          ((((y__115638) * (::x10aux::nullCheck(a__115681)->FMGL(M)))) + (x__115637)),
                                                          v__115639);
                                                        
                                                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115640 =
                                                          v__115639;
                                                        
                                                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        ret__115640;
                                                    }
                                                    
                                                }
                                                
                                                //#line 725 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                if ((!::x10aux::struct_equals(kk__115909,
                                                                              ll__115910)))
                                                {
                                                    
                                                    //#line 726 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115761 =
                                                      jMatrix__115911;
                                                    x10_long i__115762 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long i__115763 =
                                                      ((x10_long)(kk__115909));
                                                    x10_double r__115764 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115765 =
                                                          i__115762;
                                                        x10_long y__115766 =
                                                          i__115763;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115761)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115766) * (::x10aux::nullCheck(a__115761)->FMGL(M)))) + (x__115765)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115767 =
                                                          ((x10_long)(ii__115907));
                                                        x10_long y__115768 =
                                                          ((x10_long)(jj__115908));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115768) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115767)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115737 =
                                                      i__115762;
                                                    x10_long y__115738 =
                                                      i__115763;
                                                    x10_double v__115739 =
                                                      r__115764;
                                                    x10_double ret__115740;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115761)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115738) * (::x10aux::nullCheck(a__115761)->FMGL(M)))) + (x__115737)),
                                                      v__115739);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115740 =
                                                      v__115739;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115740;
                                                    
                                                    //#line 727 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115769 =
                                                      jMatrix__115911;
                                                    x10_long i__115770 =
                                                      ((x10_long)(ii__115907));
                                                    x10_long i__115771 =
                                                      ((x10_long)(jj__115908));
                                                    x10_double r__115772 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115773 =
                                                          i__115770;
                                                        x10_long y__115774 =
                                                          i__115771;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115769)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115774) * (::x10aux::nullCheck(a__115769)->FMGL(M)))) + (x__115773)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115775 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long y__115776 =
                                                          ((x10_long)(kk__115909));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115776) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115775)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115741 =
                                                      i__115770;
                                                    x10_long y__115742 =
                                                      i__115771;
                                                    x10_double v__115743 =
                                                      r__115772;
                                                    x10_double ret__115744;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115769)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115742) * (::x10aux::nullCheck(a__115769)->FMGL(M)))) + (x__115741)),
                                                      v__115743);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115744 =
                                                      v__115743;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115744;
                                                    
                                                    //#line 728 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115777 =
                                                      kMatrix__115912;
                                                    x10_long i__115778 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long i__115779 =
                                                      ((x10_long)(ii__115907));
                                                    x10_double r__115780 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115781 =
                                                          i__115778;
                                                        x10_long y__115782 =
                                                          i__115779;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115777)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115782) * (::x10aux::nullCheck(a__115777)->FMGL(M)))) + (x__115781)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115783 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long y__115784 =
                                                          ((x10_long)(jj__115908));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115784) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115783)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115745 =
                                                      i__115778;
                                                    x10_long y__115746 =
                                                      i__115779;
                                                    x10_double v__115747 =
                                                      r__115780;
                                                    x10_double ret__115748;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115777)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115746) * (::x10aux::nullCheck(a__115777)->FMGL(M)))) + (x__115745)),
                                                      v__115747);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115748 =
                                                      v__115747;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115748;
                                                    
                                                    //#line 729 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115785 =
                                                      kMatrix__115912;
                                                    x10_long i__115786 =
                                                      ((x10_long)(ll__115910));
                                                    x10_long i__115787 =
                                                      ((x10_long)(jj__115908));
                                                    x10_double r__115788 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115789 =
                                                          i__115786;
                                                        x10_long y__115790 =
                                                          i__115787;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115785)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115790) * (::x10aux::nullCheck(a__115785)->FMGL(M)))) + (x__115789)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115791 =
                                                          ((x10_long)(kk__115909));
                                                        x10_long y__115792 =
                                                          ((x10_long)(ii__115907));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115792) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115791)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115749 =
                                                      i__115786;
                                                    x10_long y__115750 =
                                                      i__115787;
                                                    x10_double v__115751 =
                                                      r__115788;
                                                    x10_double ret__115752;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115785)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115750) * (::x10aux::nullCheck(a__115785)->FMGL(M)))) + (x__115749)),
                                                      v__115751);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115752 =
                                                      v__115751;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115752;
                                                    
                                                    //#line 730 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115793 =
                                                      kMatrix__115912;
                                                    x10_long i__115794 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long i__115795 =
                                                      ((x10_long)(ii__115907));
                                                    x10_double r__115796 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115797 =
                                                          i__115794;
                                                        x10_long y__115798 =
                                                          i__115795;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115793)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115798) * (::x10aux::nullCheck(a__115793)->FMGL(M)))) + (x__115797)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115799 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long y__115800 =
                                                          ((x10_long)(jj__115908));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115800) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115799)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115753 =
                                                      i__115794;
                                                    x10_long y__115754 =
                                                      i__115795;
                                                    x10_double v__115755 =
                                                      r__115796;
                                                    x10_double ret__115756;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115793)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115754) * (::x10aux::nullCheck(a__115793)->FMGL(M)))) + (x__115753)),
                                                      v__115755);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115756 =
                                                      v__115755;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115756;
                                                    
                                                    //#line 731 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                                                    ::x10::matrix::DenseMatrix* a__115801 =
                                                      kMatrix__115912;
                                                    x10_long i__115802 =
                                                      ((x10_long)(kk__115909));
                                                    x10_long i__115803 =
                                                      ((x10_long)(jj__115908));
                                                    x10_double r__115804 =
                                                      (((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115805 =
                                                          i__115802;
                                                        x10_long y__115806 =
                                                          i__115803;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(a__115801)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115806) * (::x10aux::nullCheck(a__115801)->FMGL(M)))) + (x__115805)));
                                                    }))
                                                    ) + ((((__extension__ ({
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__115807 =
                                                          ((x10_long)(ll__115910));
                                                        x10_long y__115808 =
                                                          ((x10_long)(ii__115907));
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix__115913)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__115808) * (::x10aux::nullCheck(dMatrix__115913)->FMGL(M)))) + (x__115807)));
                                                    }))
                                                    ) * (twoEIntVal__115906))));
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    x10_long x__115757 =
                                                      i__115802;
                                                    x10_long y__115758 =
                                                      i__115803;
                                                    x10_double v__115759 =
                                                      r__115804;
                                                    x10_double ret__115760;
                                                    
                                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(a__115801)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                                      ((((y__115758) * (::x10aux::nullCheck(a__115801)->FMGL(M)))) + (x__115757)),
                                                      v__115759);
                                                    
                                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115760 =
                                                      v__115759;
                                                    
                                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                    ret__115760;
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 667 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
void au::edu::anu::qm::TwoElectronIntegrals::fillJKMatrices(
  x10_double twoEIntVal, x10_int ii, x10_int jj, x10_int kk,
  x10_int ll, ::x10::matrix::DenseMatrix* jMatrix, ::x10::matrix::DenseMatrix* kMatrix,
  ::x10::matrix::DenseMatrix* dMatrix) {
    
    //#line 672 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::matrix::DenseMatrix* a__116478 = jMatrix;
    x10_long i__116479 = ((x10_long)(ii));
    x10_long i__116480 = ((x10_long)(jj));
    x10_double r__116481 = (((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116482 = i__116479;
        x10_long y__116483 = i__116480;
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116478)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116483) * (::x10aux::nullCheck(a__116478)->FMGL(M)))) + (x__116482)));
    }))
    ) + ((((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116484 = ((x10_long)(kk));
        x10_long y__116485 = ((x10_long)(ll));
        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116485) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116484)));
    }))
    ) * (twoEIntVal))));
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__115950 = i__116479;
    x10_long y__115951 = i__116480;
    x10_double v__115952 = r__116481;
    x10_double ret__115953;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__116478)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__115951) * (::x10aux::nullCheck(a__116478)->FMGL(M)))) + (x__115950)),
      v__115952);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115953 = v__115952;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115953;
    
    //#line 673 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::matrix::DenseMatrix* a__116486 = jMatrix;
    x10_long i__116487 = ((x10_long)(kk));
    x10_long i__116488 = ((x10_long)(ll));
    x10_double r__116489 = (((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116490 = i__116487;
        x10_long y__116491 = i__116488;
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116486)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116491) * (::x10aux::nullCheck(a__116486)->FMGL(M)))) + (x__116490)));
    }))
    ) + ((((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116492 = ((x10_long)(ii));
        x10_long y__116493 = ((x10_long)(jj));
        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116493) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116492)));
    }))
    ) * (twoEIntVal))));
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__115954 = i__116487;
    x10_long y__115955 = i__116488;
    x10_double v__115956 = r__116489;
    x10_double ret__115957;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__116486)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__115955) * (::x10aux::nullCheck(a__116486)->FMGL(M)))) + (x__115954)),
      v__115956);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115957 = v__115956;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115957;
    
    //#line 674 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::matrix::DenseMatrix* a__116494 = kMatrix;
    x10_long i__116495 = ((x10_long)(ii));
    x10_long i__116496 = ((x10_long)(kk));
    x10_double r__116497 = (((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116498 = i__116495;
        x10_long y__116499 = i__116496;
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116494)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116499) * (::x10aux::nullCheck(a__116494)->FMGL(M)))) + (x__116498)));
    }))
    ) + ((((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116500 = ((x10_long)(jj));
        x10_long y__116501 = ((x10_long)(ll));
        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116501) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116500)));
    }))
    ) * (twoEIntVal))));
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__115958 = i__116495;
    x10_long y__115959 = i__116496;
    x10_double v__115960 = r__116497;
    x10_double ret__115961;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__116494)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__115959) * (::x10aux::nullCheck(a__116494)->FMGL(M)))) + (x__115958)),
      v__115960);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115961 = v__115960;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115961;
    
    //#line 675 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::matrix::DenseMatrix* a__116502 = kMatrix;
    x10_long i__116503 = ((x10_long)(ii));
    x10_long i__116504 = ((x10_long)(ll));
    x10_double r__116505 = (((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116506 = i__116503;
        x10_long y__116507 = i__116504;
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116502)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116507) * (::x10aux::nullCheck(a__116502)->FMGL(M)))) + (x__116506)));
    }))
    ) + ((((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116508 = ((x10_long)(jj));
        x10_long y__116509 = ((x10_long)(kk));
        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116509) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116508)));
    }))
    ) * (twoEIntVal))));
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__115962 = i__116503;
    x10_long y__115963 = i__116504;
    x10_double v__115964 = r__116505;
    x10_double ret__115965;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__116502)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__115963) * (::x10aux::nullCheck(a__116502)->FMGL(M)))) + (x__115962)),
      v__115964);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115965 = v__115964;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115965;
    
    //#line 676 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::matrix::DenseMatrix* a__116510 = kMatrix;
    x10_long i__116511 = ((x10_long)(jj));
    x10_long i__116512 = ((x10_long)(kk));
    x10_double r__116513 = (((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116514 = i__116511;
        x10_long y__116515 = i__116512;
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116510)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116515) * (::x10aux::nullCheck(a__116510)->FMGL(M)))) + (x__116514)));
    }))
    ) + ((((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116516 = ((x10_long)(ii));
        x10_long y__116517 = ((x10_long)(ll));
        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116517) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116516)));
    }))
    ) * (twoEIntVal))));
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__115966 = i__116511;
    x10_long y__115967 = i__116512;
    x10_double v__115968 = r__116513;
    x10_double ret__115969;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__116510)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__115967) * (::x10aux::nullCheck(a__116510)->FMGL(M)))) + (x__115966)),
      v__115968);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115969 = v__115968;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115969;
    
    //#line 677 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    ::x10::matrix::DenseMatrix* a__116518 = kMatrix;
    x10_long i__116519 = ((x10_long)(jj));
    x10_long i__116520 = ((x10_long)(ll));
    x10_double r__116521 = (((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116522 = i__116519;
        x10_long y__116523 = i__116520;
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116518)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116523) * (::x10aux::nullCheck(a__116518)->FMGL(M)))) + (x__116522)));
    }))
    ) + ((((__extension__ ({
        
        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116524 = ((x10_long)(ii));
        x10_long y__116525 = ((x10_long)(kk));
        ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
          ((((y__116525) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116524)));
    }))
    ) * (twoEIntVal))));
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__115970 = i__116519;
    x10_long y__115971 = i__116520;
    x10_double v__115972 = r__116521;
    x10_double ret__115973;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__116518)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__115971) * (::x10aux::nullCheck(a__116518)->FMGL(M)))) + (x__115970)),
      v__115972);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115973 = v__115972;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__115973;
    
    //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if ((!::x10aux::struct_equals(ii, jj))) {
        
        //#line 679 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116070 = jMatrix;
        x10_long i__116071 = ((x10_long)(jj));
        x10_long i__116072 = ((x10_long)(ii));
        x10_double r__116073 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116074 = i__116071;
            x10_long y__116075 = i__116072;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116070)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116075) * (::x10aux::nullCheck(a__116070)->FMGL(M)))) + (x__116074)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116076 = ((x10_long)(kk));
            x10_long y__116077 = ((x10_long)(ll));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116077) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116076)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__115974 = i__116071;
        x10_long y__115975 = i__116072;
        x10_double v__115976 = r__116073;
        x10_double ret__115977;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116070)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__115975) * (::x10aux::nullCheck(a__116070)->FMGL(M)))) + (x__115974)),
          v__115976);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115977 = v__115976;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115977;
        
        //#line 680 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116078 = jMatrix;
        x10_long i__116079 = ((x10_long)(kk));
        x10_long i__116080 = ((x10_long)(ll));
        x10_double r__116081 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116082 = i__116079;
            x10_long y__116083 = i__116080;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116078)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116083) * (::x10aux::nullCheck(a__116078)->FMGL(M)))) + (x__116082)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116084 = ((x10_long)(jj));
            x10_long y__116085 = ((x10_long)(ii));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116085) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116084)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__115978 = i__116079;
        x10_long y__115979 = i__116080;
        x10_double v__115980 = r__116081;
        x10_double ret__115981;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116078)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__115979) * (::x10aux::nullCheck(a__116078)->FMGL(M)))) + (x__115978)),
          v__115980);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115981 = v__115980;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115981;
        
        //#line 681 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116086 = kMatrix;
        x10_long i__116087 = ((x10_long)(jj));
        x10_long i__116088 = ((x10_long)(kk));
        x10_double r__116089 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116090 = i__116087;
            x10_long y__116091 = i__116088;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116086)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116091) * (::x10aux::nullCheck(a__116086)->FMGL(M)))) + (x__116090)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116092 = ((x10_long)(ii));
            x10_long y__116093 = ((x10_long)(ll));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116093) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116092)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__115982 = i__116087;
        x10_long y__115983 = i__116088;
        x10_double v__115984 = r__116089;
        x10_double ret__115985;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116086)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__115983) * (::x10aux::nullCheck(a__116086)->FMGL(M)))) + (x__115982)),
          v__115984);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115985 = v__115984;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115985;
        
        //#line 682 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116094 = kMatrix;
        x10_long i__116095 = ((x10_long)(jj));
        x10_long i__116096 = ((x10_long)(ll));
        x10_double r__116097 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116098 = i__116095;
            x10_long y__116099 = i__116096;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116094)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116099) * (::x10aux::nullCheck(a__116094)->FMGL(M)))) + (x__116098)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116100 = ((x10_long)(ii));
            x10_long y__116101 = ((x10_long)(kk));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116101) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116100)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__115986 = i__116095;
        x10_long y__115987 = i__116096;
        x10_double v__115988 = r__116097;
        x10_double ret__115989;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116094)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__115987) * (::x10aux::nullCheck(a__116094)->FMGL(M)))) + (x__115986)),
          v__115988);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115989 = v__115988;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115989;
        
        //#line 683 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116102 = kMatrix;
        x10_long i__116103 = ((x10_long)(ii));
        x10_long i__116104 = ((x10_long)(kk));
        x10_double r__116105 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116106 = i__116103;
            x10_long y__116107 = i__116104;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116102)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116107) * (::x10aux::nullCheck(a__116102)->FMGL(M)))) + (x__116106)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116108 = ((x10_long)(jj));
            x10_long y__116109 = ((x10_long)(ll));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116109) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116108)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__115990 = i__116103;
        x10_long y__115991 = i__116104;
        x10_double v__115992 = r__116105;
        x10_double ret__115993;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116102)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__115991) * (::x10aux::nullCheck(a__116102)->FMGL(M)))) + (x__115990)),
          v__115992);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115993 = v__115992;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115993;
        
        //#line 684 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116110 = kMatrix;
        x10_long i__116111 = ((x10_long)(ii));
        x10_long i__116112 = ((x10_long)(ll));
        x10_double r__116113 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116114 = i__116111;
            x10_long y__116115 = i__116112;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116110)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116115) * (::x10aux::nullCheck(a__116110)->FMGL(M)))) + (x__116114)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116116 = ((x10_long)(jj));
            x10_long y__116117 = ((x10_long)(kk));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116117) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116116)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__115994 = i__116111;
        x10_long y__115995 = i__116112;
        x10_double v__115996 = r__116113;
        x10_double ret__115997;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116110)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__115995) * (::x10aux::nullCheck(a__116110)->FMGL(M)))) + (x__115994)),
          v__115996);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115997 = v__115996;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__115997;
        
        //#line 685 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if ((!::x10aux::struct_equals(kk, ll))) {
            
            //#line 686 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116022 = jMatrix;
            x10_long i__116023 = ((x10_long)(jj));
            x10_long i__116024 = ((x10_long)(ii));
            x10_double r__116025 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116026 = i__116023;
                x10_long y__116027 = i__116024;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116022)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116027) * (::x10aux::nullCheck(a__116022)->FMGL(M)))) + (x__116026)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116028 = ((x10_long)(ll));
                x10_long y__116029 = ((x10_long)(kk));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116029) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116028)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__115998 = i__116023;
            x10_long y__115999 = i__116024;
            x10_double v__116000 = r__116025;
            x10_double ret__116001;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116022)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__115999) * (::x10aux::nullCheck(a__116022)->FMGL(M)))) + (x__115998)),
              v__116000);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116001 = v__116000;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116001;
            
            //#line 687 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116030 = jMatrix;
            x10_long i__116031 = ((x10_long)(ll));
            x10_long i__116032 = ((x10_long)(kk));
            x10_double r__116033 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116034 = i__116031;
                x10_long y__116035 = i__116032;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116030)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116035) * (::x10aux::nullCheck(a__116030)->FMGL(M)))) + (x__116034)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116036 = ((x10_long)(jj));
                x10_long y__116037 = ((x10_long)(ii));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116037) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116036)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116002 = i__116031;
            x10_long y__116003 = i__116032;
            x10_double v__116004 = r__116033;
            x10_double ret__116005;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116030)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116003) * (::x10aux::nullCheck(a__116030)->FMGL(M)))) + (x__116002)),
              v__116004);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116005 = v__116004;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116005;
            
            //#line 688 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116038 = kMatrix;
            x10_long i__116039 = ((x10_long)(jj));
            x10_long i__116040 = ((x10_long)(ll));
            x10_double r__116041 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116042 = i__116039;
                x10_long y__116043 = i__116040;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116038)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116043) * (::x10aux::nullCheck(a__116038)->FMGL(M)))) + (x__116042)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116044 = ((x10_long)(ii));
                x10_long y__116045 = ((x10_long)(kk));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116045) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116044)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116006 = i__116039;
            x10_long y__116007 = i__116040;
            x10_double v__116008 = r__116041;
            x10_double ret__116009;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116038)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116007) * (::x10aux::nullCheck(a__116038)->FMGL(M)))) + (x__116006)),
              v__116008);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116009 = v__116008;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116009;
            
            //#line 689 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116046 = kMatrix;
            x10_long i__116047 = ((x10_long)(jj));
            x10_long i__116048 = ((x10_long)(kk));
            x10_double r__116049 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116050 = i__116047;
                x10_long y__116051 = i__116048;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116046)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116051) * (::x10aux::nullCheck(a__116046)->FMGL(M)))) + (x__116050)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116052 = ((x10_long)(ii));
                x10_long y__116053 = ((x10_long)(ll));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116053) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116052)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116010 = i__116047;
            x10_long y__116011 = i__116048;
            x10_double v__116012 = r__116049;
            x10_double ret__116013;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116046)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116011) * (::x10aux::nullCheck(a__116046)->FMGL(M)))) + (x__116010)),
              v__116012);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116013 = v__116012;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116013;
            
            //#line 690 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116054 = kMatrix;
            x10_long i__116055 = ((x10_long)(ii));
            x10_long i__116056 = ((x10_long)(ll));
            x10_double r__116057 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116058 = i__116055;
                x10_long y__116059 = i__116056;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116054)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116059) * (::x10aux::nullCheck(a__116054)->FMGL(M)))) + (x__116058)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116060 = ((x10_long)(jj));
                x10_long y__116061 = ((x10_long)(kk));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116061) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116060)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116014 = i__116055;
            x10_long y__116015 = i__116056;
            x10_double v__116016 = r__116057;
            x10_double ret__116017;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116054)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116015) * (::x10aux::nullCheck(a__116054)->FMGL(M)))) + (x__116014)),
              v__116016);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116017 = v__116016;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116017;
            
            //#line 691 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116062 = kMatrix;
            x10_long i__116063 = ((x10_long)(ii));
            x10_long i__116064 = ((x10_long)(kk));
            x10_double r__116065 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116066 = i__116063;
                x10_long y__116067 = i__116064;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116062)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116067) * (::x10aux::nullCheck(a__116062)->FMGL(M)))) + (x__116066)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116068 = ((x10_long)(jj));
                x10_long y__116069 = ((x10_long)(ll));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116069) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116068)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116018 = i__116063;
            x10_long y__116019 = i__116064;
            x10_double v__116020 = r__116065;
            x10_double ret__116021;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116062)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116019) * (::x10aux::nullCheck(a__116062)->FMGL(M)))) + (x__116018)),
              v__116020);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116021 = v__116020;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116021;
        }
        
    }
    
    //#line 694 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if ((!::x10aux::struct_equals(kk, ll))) {
        
        //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116142 = jMatrix;
        x10_long i__116143 = ((x10_long)(ii));
        x10_long i__116144 = ((x10_long)(jj));
        x10_double r__116145 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116146 = i__116143;
            x10_long y__116147 = i__116144;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116142)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116147) * (::x10aux::nullCheck(a__116142)->FMGL(M)))) + (x__116146)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116148 = ((x10_long)(ll));
            x10_long y__116149 = ((x10_long)(kk));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116149) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116148)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116118 = i__116143;
        x10_long y__116119 = i__116144;
        x10_double v__116120 = r__116145;
        x10_double ret__116121;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116142)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116119) * (::x10aux::nullCheck(a__116142)->FMGL(M)))) + (x__116118)),
          v__116120);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116121 = v__116120;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116121;
        
        //#line 696 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116150 = jMatrix;
        x10_long i__116151 = ((x10_long)(ll));
        x10_long i__116152 = ((x10_long)(kk));
        x10_double r__116153 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116154 = i__116151;
            x10_long y__116155 = i__116152;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116150)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116155) * (::x10aux::nullCheck(a__116150)->FMGL(M)))) + (x__116154)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116156 = ((x10_long)(ii));
            x10_long y__116157 = ((x10_long)(jj));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116157) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116156)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116122 = i__116151;
        x10_long y__116123 = i__116152;
        x10_double v__116124 = r__116153;
        x10_double ret__116125;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116150)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116123) * (::x10aux::nullCheck(a__116150)->FMGL(M)))) + (x__116122)),
          v__116124);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116125 = v__116124;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116125;
        
        //#line 697 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116158 = kMatrix;
        x10_long i__116159 = ((x10_long)(ii));
        x10_long i__116160 = ((x10_long)(ll));
        x10_double r__116161 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116162 = i__116159;
            x10_long y__116163 = i__116160;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116158)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116163) * (::x10aux::nullCheck(a__116158)->FMGL(M)))) + (x__116162)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116164 = ((x10_long)(jj));
            x10_long y__116165 = ((x10_long)(kk));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116165) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116164)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116126 = i__116159;
        x10_long y__116127 = i__116160;
        x10_double v__116128 = r__116161;
        x10_double ret__116129;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116158)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116127) * (::x10aux::nullCheck(a__116158)->FMGL(M)))) + (x__116126)),
          v__116128);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116129 = v__116128;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116129;
        
        //#line 698 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116166 = kMatrix;
        x10_long i__116167 = ((x10_long)(ii));
        x10_long i__116168 = ((x10_long)(kk));
        x10_double r__116169 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116170 = i__116167;
            x10_long y__116171 = i__116168;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116166)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116171) * (::x10aux::nullCheck(a__116166)->FMGL(M)))) + (x__116170)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116172 = ((x10_long)(jj));
            x10_long y__116173 = ((x10_long)(ll));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116173) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116172)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116130 = i__116167;
        x10_long y__116131 = i__116168;
        x10_double v__116132 = r__116169;
        x10_double ret__116133;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116166)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116131) * (::x10aux::nullCheck(a__116166)->FMGL(M)))) + (x__116130)),
          v__116132);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116133 = v__116132;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116133;
        
        //#line 699 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116174 = kMatrix;
        x10_long i__116175 = ((x10_long)(jj));
        x10_long i__116176 = ((x10_long)(ll));
        x10_double r__116177 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116178 = i__116175;
            x10_long y__116179 = i__116176;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116174)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116179) * (::x10aux::nullCheck(a__116174)->FMGL(M)))) + (x__116178)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116180 = ((x10_long)(ii));
            x10_long y__116181 = ((x10_long)(kk));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116181) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116180)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116134 = i__116175;
        x10_long y__116135 = i__116176;
        x10_double v__116136 = r__116177;
        x10_double ret__116137;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116174)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116135) * (::x10aux::nullCheck(a__116174)->FMGL(M)))) + (x__116134)),
          v__116136);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116137 = v__116136;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116137;
        
        //#line 700 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116182 = kMatrix;
        x10_long i__116183 = ((x10_long)(jj));
        x10_long i__116184 = ((x10_long)(kk));
        x10_double r__116185 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116186 = i__116183;
            x10_long y__116187 = i__116184;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116182)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116187) * (::x10aux::nullCheck(a__116182)->FMGL(M)))) + (x__116186)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116188 = ((x10_long)(ii));
            x10_long y__116189 = ((x10_long)(ll));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116189) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116188)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116138 = i__116183;
        x10_long y__116139 = i__116184;
        x10_double v__116140 = r__116185;
        x10_double ret__116141;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116182)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116139) * (::x10aux::nullCheck(a__116182)->FMGL(M)))) + (x__116138)),
          v__116140);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116141 = v__116140;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116141;
    }
    
    //#line 702 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
    if (((!::x10aux::struct_equals(ii, kk)) || (!::x10aux::struct_equals(jj,
                                                                         ll))))
    {
        
        //#line 703 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116430 = jMatrix;
        x10_long i__116431 = ((x10_long)(kk));
        x10_long i__116432 = ((x10_long)(ll));
        x10_double r__116433 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116434 = i__116431;
            x10_long y__116435 = i__116432;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116430)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116435) * (::x10aux::nullCheck(a__116430)->FMGL(M)))) + (x__116434)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116436 = ((x10_long)(ii));
            x10_long y__116437 = ((x10_long)(jj));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116437) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116436)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116190 = i__116431;
        x10_long y__116191 = i__116432;
        x10_double v__116192 = r__116433;
        x10_double ret__116193;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116430)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116191) * (::x10aux::nullCheck(a__116430)->FMGL(M)))) + (x__116190)),
          v__116192);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116193 = v__116192;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116193;
        
        //#line 704 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116438 = jMatrix;
        x10_long i__116439 = ((x10_long)(ii));
        x10_long i__116440 = ((x10_long)(jj));
        x10_double r__116441 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116442 = i__116439;
            x10_long y__116443 = i__116440;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116438)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116443) * (::x10aux::nullCheck(a__116438)->FMGL(M)))) + (x__116442)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116444 = ((x10_long)(kk));
            x10_long y__116445 = ((x10_long)(ll));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116445) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116444)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116194 = i__116439;
        x10_long y__116195 = i__116440;
        x10_double v__116196 = r__116441;
        x10_double ret__116197;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116438)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116195) * (::x10aux::nullCheck(a__116438)->FMGL(M)))) + (x__116194)),
          v__116196);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116197 = v__116196;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116197;
        
        //#line 705 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116446 = kMatrix;
        x10_long i__116447 = ((x10_long)(kk));
        x10_long i__116448 = ((x10_long)(ii));
        x10_double r__116449 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116450 = i__116447;
            x10_long y__116451 = i__116448;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116446)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116451) * (::x10aux::nullCheck(a__116446)->FMGL(M)))) + (x__116450)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116452 = ((x10_long)(ll));
            x10_long y__116453 = ((x10_long)(jj));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116453) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116452)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116198 = i__116447;
        x10_long y__116199 = i__116448;
        x10_double v__116200 = r__116449;
        x10_double ret__116201;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116446)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116199) * (::x10aux::nullCheck(a__116446)->FMGL(M)))) + (x__116198)),
          v__116200);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116201 = v__116200;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116201;
        
        //#line 706 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116454 = kMatrix;
        x10_long i__116455 = ((x10_long)(kk));
        x10_long i__116456 = ((x10_long)(jj));
        x10_double r__116457 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116458 = i__116455;
            x10_long y__116459 = i__116456;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116454)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116459) * (::x10aux::nullCheck(a__116454)->FMGL(M)))) + (x__116458)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116460 = ((x10_long)(ll));
            x10_long y__116461 = ((x10_long)(ii));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116461) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116460)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116202 = i__116455;
        x10_long y__116203 = i__116456;
        x10_double v__116204 = r__116457;
        x10_double ret__116205;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116454)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116203) * (::x10aux::nullCheck(a__116454)->FMGL(M)))) + (x__116202)),
          v__116204);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116205 = v__116204;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116205;
        
        //#line 707 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116462 = kMatrix;
        x10_long i__116463 = ((x10_long)(ll));
        x10_long i__116464 = ((x10_long)(ii));
        x10_double r__116465 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116466 = i__116463;
            x10_long y__116467 = i__116464;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116462)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116467) * (::x10aux::nullCheck(a__116462)->FMGL(M)))) + (x__116466)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116468 = ((x10_long)(kk));
            x10_long y__116469 = ((x10_long)(jj));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116469) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116468)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116206 = i__116463;
        x10_long y__116207 = i__116464;
        x10_double v__116208 = r__116465;
        x10_double ret__116209;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116462)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116207) * (::x10aux::nullCheck(a__116462)->FMGL(M)))) + (x__116206)),
          v__116208);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116209 = v__116208;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116209;
        
        //#line 708 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        ::x10::matrix::DenseMatrix* a__116470 = kMatrix;
        x10_long i__116471 = ((x10_long)(ll));
        x10_long i__116472 = ((x10_long)(jj));
        x10_double r__116473 = (((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116474 = i__116471;
            x10_long y__116475 = i__116472;
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116470)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116475) * (::x10aux::nullCheck(a__116470)->FMGL(M)))) + (x__116474)));
        }))
        ) + ((((__extension__ ({
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116476 = ((x10_long)(kk));
            x10_long y__116477 = ((x10_long)(ii));
            ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__116477) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116476)));
        }))
        ) * (twoEIntVal))));
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        x10_long x__116210 = i__116471;
        x10_long y__116211 = i__116472;
        x10_double v__116212 = r__116473;
        x10_double ret__116213;
        
        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(a__116470)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
          ((((y__116211) * (::x10aux::nullCheck(a__116470)->FMGL(M)))) + (x__116210)),
          v__116212);
        
        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116213 = v__116212;
        
        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
        ret__116213;
        
        //#line 709 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if ((!::x10aux::struct_equals(ii, jj))) {
            
            //#line 710 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116310 = jMatrix;
            x10_long i__116311 = ((x10_long)(kk));
            x10_long i__116312 = ((x10_long)(ll));
            x10_double r__116313 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116314 = i__116311;
                x10_long y__116315 = i__116312;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116310)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116315) * (::x10aux::nullCheck(a__116310)->FMGL(M)))) + (x__116314)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116316 = ((x10_long)(jj));
                x10_long y__116317 = ((x10_long)(ii));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116317) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116316)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116214 = i__116311;
            x10_long y__116215 = i__116312;
            x10_double v__116216 = r__116313;
            x10_double ret__116217;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116310)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116215) * (::x10aux::nullCheck(a__116310)->FMGL(M)))) + (x__116214)),
              v__116216);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116217 = v__116216;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116217;
            
            //#line 711 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116318 = jMatrix;
            x10_long i__116319 = ((x10_long)(jj));
            x10_long i__116320 = ((x10_long)(ii));
            x10_double r__116321 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116322 = i__116319;
                x10_long y__116323 = i__116320;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116318)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116323) * (::x10aux::nullCheck(a__116318)->FMGL(M)))) + (x__116322)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116324 = ((x10_long)(kk));
                x10_long y__116325 = ((x10_long)(ll));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116325) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116324)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116218 = i__116319;
            x10_long y__116219 = i__116320;
            x10_double v__116220 = r__116321;
            x10_double ret__116221;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116318)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116219) * (::x10aux::nullCheck(a__116318)->FMGL(M)))) + (x__116218)),
              v__116220);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116221 = v__116220;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116221;
            
            //#line 712 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116326 = kMatrix;
            x10_long i__116327 = ((x10_long)(kk));
            x10_long i__116328 = ((x10_long)(jj));
            x10_double r__116329 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116330 = i__116327;
                x10_long y__116331 = i__116328;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116326)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116331) * (::x10aux::nullCheck(a__116326)->FMGL(M)))) + (x__116330)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116332 = ((x10_long)(ll));
                x10_long y__116333 = ((x10_long)(ii));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116333) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116332)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116222 = i__116327;
            x10_long y__116223 = i__116328;
            x10_double v__116224 = r__116329;
            x10_double ret__116225;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116326)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116223) * (::x10aux::nullCheck(a__116326)->FMGL(M)))) + (x__116222)),
              v__116224);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116225 = v__116224;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116225;
            
            //#line 713 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116334 = kMatrix;
            x10_long i__116335 = ((x10_long)(kk));
            x10_long i__116336 = ((x10_long)(ii));
            x10_double r__116337 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116338 = i__116335;
                x10_long y__116339 = i__116336;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116334)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116339) * (::x10aux::nullCheck(a__116334)->FMGL(M)))) + (x__116338)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116340 = ((x10_long)(ll));
                x10_long y__116341 = ((x10_long)(jj));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116341) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116340)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116226 = i__116335;
            x10_long y__116227 = i__116336;
            x10_double v__116228 = r__116337;
            x10_double ret__116229;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116334)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116227) * (::x10aux::nullCheck(a__116334)->FMGL(M)))) + (x__116226)),
              v__116228);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116229 = v__116228;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116229;
            
            //#line 714 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116342 = kMatrix;
            x10_long i__116343 = ((x10_long)(ll));
            x10_long i__116344 = ((x10_long)(jj));
            x10_double r__116345 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116346 = i__116343;
                x10_long y__116347 = i__116344;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116342)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116347) * (::x10aux::nullCheck(a__116342)->FMGL(M)))) + (x__116346)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116348 = ((x10_long)(kk));
                x10_long y__116349 = ((x10_long)(ii));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116349) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116348)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116230 = i__116343;
            x10_long y__116231 = i__116344;
            x10_double v__116232 = r__116345;
            x10_double ret__116233;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116342)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116231) * (::x10aux::nullCheck(a__116342)->FMGL(M)))) + (x__116230)),
              v__116232);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116233 = v__116232;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116233;
            
            //#line 715 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116350 = kMatrix;
            x10_long i__116351 = ((x10_long)(ll));
            x10_long i__116352 = ((x10_long)(ii));
            x10_double r__116353 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116354 = i__116351;
                x10_long y__116355 = i__116352;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116350)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116355) * (::x10aux::nullCheck(a__116350)->FMGL(M)))) + (x__116354)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116356 = ((x10_long)(kk));
                x10_long y__116357 = ((x10_long)(jj));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116357) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116356)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116234 = i__116351;
            x10_long y__116235 = i__116352;
            x10_double v__116236 = r__116353;
            x10_double ret__116237;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116350)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116235) * (::x10aux::nullCheck(a__116350)->FMGL(M)))) + (x__116234)),
              v__116236);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116237 = v__116236;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116237;
            
            //#line 716 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            if ((!::x10aux::struct_equals(kk, ll))) {
                
                //#line 717 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10::matrix::DenseMatrix* a__116262 = jMatrix;
                x10_long i__116263 = ((x10_long)(ll));
                x10_long i__116264 = ((x10_long)(kk));
                x10_double r__116265 = (((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116266 = i__116263;
                    x10_long y__116267 = i__116264;
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__116262)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116267) * (::x10aux::nullCheck(a__116262)->FMGL(M)))) + (x__116266)));
                }))
                ) + ((((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116268 = ((x10_long)(jj));
                    x10_long y__116269 = ((x10_long)(ii));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116269) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116268)));
                }))
                ) * (twoEIntVal))));
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116238 = i__116263;
                x10_long y__116239 = i__116264;
                x10_double v__116240 = r__116265;
                x10_double ret__116241;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116262)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__116239) * (::x10aux::nullCheck(a__116262)->FMGL(M)))) + (x__116238)),
                  v__116240);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116241 = v__116240;
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116241;
                
                //#line 718 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10::matrix::DenseMatrix* a__116270 = jMatrix;
                x10_long i__116271 = ((x10_long)(jj));
                x10_long i__116272 = ((x10_long)(ii));
                x10_double r__116273 = (((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116274 = i__116271;
                    x10_long y__116275 = i__116272;
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__116270)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116275) * (::x10aux::nullCheck(a__116270)->FMGL(M)))) + (x__116274)));
                }))
                ) + ((((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116276 = ((x10_long)(ll));
                    x10_long y__116277 = ((x10_long)(kk));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116277) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116276)));
                }))
                ) * (twoEIntVal))));
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116242 = i__116271;
                x10_long y__116243 = i__116272;
                x10_double v__116244 = r__116273;
                x10_double ret__116245;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116270)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__116243) * (::x10aux::nullCheck(a__116270)->FMGL(M)))) + (x__116242)),
                  v__116244);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116245 = v__116244;
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116245;
                
                //#line 719 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10::matrix::DenseMatrix* a__116278 = kMatrix;
                x10_long i__116279 = ((x10_long)(ll));
                x10_long i__116280 = ((x10_long)(jj));
                x10_double r__116281 = (((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116282 = i__116279;
                    x10_long y__116283 = i__116280;
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__116278)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116283) * (::x10aux::nullCheck(a__116278)->FMGL(M)))) + (x__116282)));
                }))
                ) + ((((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116284 = ((x10_long)(kk));
                    x10_long y__116285 = ((x10_long)(ii));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116285) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116284)));
                }))
                ) * (twoEIntVal))));
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116246 = i__116279;
                x10_long y__116247 = i__116280;
                x10_double v__116248 = r__116281;
                x10_double ret__116249;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116278)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__116247) * (::x10aux::nullCheck(a__116278)->FMGL(M)))) + (x__116246)),
                  v__116248);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116249 = v__116248;
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116249;
                
                //#line 720 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10::matrix::DenseMatrix* a__116286 = kMatrix;
                x10_long i__116287 = ((x10_long)(ll));
                x10_long i__116288 = ((x10_long)(ii));
                x10_double r__116289 = (((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116290 = i__116287;
                    x10_long y__116291 = i__116288;
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__116286)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116291) * (::x10aux::nullCheck(a__116286)->FMGL(M)))) + (x__116290)));
                }))
                ) + ((((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116292 = ((x10_long)(kk));
                    x10_long y__116293 = ((x10_long)(jj));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116293) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116292)));
                }))
                ) * (twoEIntVal))));
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116250 = i__116287;
                x10_long y__116251 = i__116288;
                x10_double v__116252 = r__116289;
                x10_double ret__116253;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116286)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__116251) * (::x10aux::nullCheck(a__116286)->FMGL(M)))) + (x__116250)),
                  v__116252);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116253 = v__116252;
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116253;
                
                //#line 721 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10::matrix::DenseMatrix* a__116294 = kMatrix;
                x10_long i__116295 = ((x10_long)(kk));
                x10_long i__116296 = ((x10_long)(jj));
                x10_double r__116297 = (((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116298 = i__116295;
                    x10_long y__116299 = i__116296;
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__116294)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116299) * (::x10aux::nullCheck(a__116294)->FMGL(M)))) + (x__116298)));
                }))
                ) + ((((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116300 = ((x10_long)(ll));
                    x10_long y__116301 = ((x10_long)(ii));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116301) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116300)));
                }))
                ) * (twoEIntVal))));
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116254 = i__116295;
                x10_long y__116255 = i__116296;
                x10_double v__116256 = r__116297;
                x10_double ret__116257;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116294)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__116255) * (::x10aux::nullCheck(a__116294)->FMGL(M)))) + (x__116254)),
                  v__116256);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116257 = v__116256;
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116257;
                
                //#line 722 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
                ::x10::matrix::DenseMatrix* a__116302 = kMatrix;
                x10_long i__116303 = ((x10_long)(kk));
                x10_long i__116304 = ((x10_long)(ii));
                x10_double r__116305 = (((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116306 = i__116303;
                    x10_long y__116307 = i__116304;
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__116302)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116307) * (::x10aux::nullCheck(a__116302)->FMGL(M)))) + (x__116306)));
                }))
                ) + ((((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__116308 = ((x10_long)(ll));
                    x10_long y__116309 = ((x10_long)(jj));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__116309) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116308)));
                }))
                ) * (twoEIntVal))));
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116258 = i__116303;
                x10_long y__116259 = i__116304;
                x10_double v__116260 = r__116305;
                x10_double ret__116261;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116302)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__116259) * (::x10aux::nullCheck(a__116302)->FMGL(M)))) + (x__116258)),
                  v__116260);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116261 = v__116260;
                
                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__116261;
            }
            
        }
        
        //#line 725 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
        if ((!::x10aux::struct_equals(kk, ll))) {
            
            //#line 726 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116382 = jMatrix;
            x10_long i__116383 = ((x10_long)(ll));
            x10_long i__116384 = ((x10_long)(kk));
            x10_double r__116385 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116386 = i__116383;
                x10_long y__116387 = i__116384;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116382)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116387) * (::x10aux::nullCheck(a__116382)->FMGL(M)))) + (x__116386)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116388 = ((x10_long)(ii));
                x10_long y__116389 = ((x10_long)(jj));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116389) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116388)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116358 = i__116383;
            x10_long y__116359 = i__116384;
            x10_double v__116360 = r__116385;
            x10_double ret__116361;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116382)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116359) * (::x10aux::nullCheck(a__116382)->FMGL(M)))) + (x__116358)),
              v__116360);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116361 = v__116360;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116361;
            
            //#line 727 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116390 = jMatrix;
            x10_long i__116391 = ((x10_long)(ii));
            x10_long i__116392 = ((x10_long)(jj));
            x10_double r__116393 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116394 = i__116391;
                x10_long y__116395 = i__116392;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116390)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116395) * (::x10aux::nullCheck(a__116390)->FMGL(M)))) + (x__116394)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116396 = ((x10_long)(ll));
                x10_long y__116397 = ((x10_long)(kk));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116397) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116396)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116362 = i__116391;
            x10_long y__116363 = i__116392;
            x10_double v__116364 = r__116393;
            x10_double ret__116365;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116390)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116363) * (::x10aux::nullCheck(a__116390)->FMGL(M)))) + (x__116362)),
              v__116364);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116365 = v__116364;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116365;
            
            //#line 728 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116398 = kMatrix;
            x10_long i__116399 = ((x10_long)(ll));
            x10_long i__116400 = ((x10_long)(ii));
            x10_double r__116401 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116402 = i__116399;
                x10_long y__116403 = i__116400;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116398)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116403) * (::x10aux::nullCheck(a__116398)->FMGL(M)))) + (x__116402)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116404 = ((x10_long)(kk));
                x10_long y__116405 = ((x10_long)(jj));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116405) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116404)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116366 = i__116399;
            x10_long y__116367 = i__116400;
            x10_double v__116368 = r__116401;
            x10_double ret__116369;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116398)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116367) * (::x10aux::nullCheck(a__116398)->FMGL(M)))) + (x__116366)),
              v__116368);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116369 = v__116368;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116369;
            
            //#line 729 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116406 = kMatrix;
            x10_long i__116407 = ((x10_long)(ll));
            x10_long i__116408 = ((x10_long)(jj));
            x10_double r__116409 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116410 = i__116407;
                x10_long y__116411 = i__116408;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116406)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116411) * (::x10aux::nullCheck(a__116406)->FMGL(M)))) + (x__116410)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116412 = ((x10_long)(kk));
                x10_long y__116413 = ((x10_long)(ii));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116413) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116412)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116370 = i__116407;
            x10_long y__116371 = i__116408;
            x10_double v__116372 = r__116409;
            x10_double ret__116373;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116406)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116371) * (::x10aux::nullCheck(a__116406)->FMGL(M)))) + (x__116370)),
              v__116372);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116373 = v__116372;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116373;
            
            //#line 730 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116414 = kMatrix;
            x10_long i__116415 = ((x10_long)(kk));
            x10_long i__116416 = ((x10_long)(ii));
            x10_double r__116417 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116418 = i__116415;
                x10_long y__116419 = i__116416;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116414)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116419) * (::x10aux::nullCheck(a__116414)->FMGL(M)))) + (x__116418)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116420 = ((x10_long)(ll));
                x10_long y__116421 = ((x10_long)(jj));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116421) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116420)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116374 = i__116415;
            x10_long y__116375 = i__116416;
            x10_double v__116376 = r__116417;
            x10_double ret__116377;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116414)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116375) * (::x10aux::nullCheck(a__116414)->FMGL(M)))) + (x__116374)),
              v__116376);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116377 = v__116376;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116377;
            
            //#line 731 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
            ::x10::matrix::DenseMatrix* a__116422 = kMatrix;
            x10_long i__116423 = ((x10_long)(kk));
            x10_long i__116424 = ((x10_long)(jj));
            x10_double r__116425 = (((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116426 = i__116423;
                x10_long y__116427 = i__116424;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__116422)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116427) * (::x10aux::nullCheck(a__116422)->FMGL(M)))) + (x__116426)));
            }))
            ) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__116428 = ((x10_long)(ll));
                x10_long y__116429 = ((x10_long)(ii));
                ::x10aux::nullCheck(::x10aux::nullCheck(dMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__116429) * (::x10aux::nullCheck(dMatrix)->FMGL(M)))) + (x__116428)));
            }))
            ) * (twoEIntVal))));
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__116378 = i__116423;
            x10_long y__116379 = i__116424;
            x10_double v__116380 = r__116425;
            x10_double ret__116381;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__116422)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__116379) * (::x10aux::nullCheck(a__116422)->FMGL(M)))) + (x__116378)),
              v__116380);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116381 = v__116380;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__116381;
        }
        
    }
    
}

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/TwoElectronIntegrals.x10"
::au::edu::anu::qm::TwoElectronIntegrals* au::edu::anu::qm::TwoElectronIntegrals::au__edu__anu__qm__TwoElectronIntegrals____this__au__edu__anu__qm__TwoElectronIntegrals(
  ) {
    return this;
    
}
void au::edu::anu::qm::TwoElectronIntegrals::__fieldInitializers_au_edu_anu_qm_TwoElectronIntegrals(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::TwoElectronIntegrals::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::TwoElectronIntegrals::_deserializer);

void au::edu::anu::qm::TwoElectronIntegrals::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(gmt));
    buf.write(this->FMGL(zeroM));
    buf.write(this->FMGL(rM));
    buf.write(this->FMGL(pqInts));
    buf.write(this->FMGL(npint));
    buf.write(this->FMGL(pcdint));
    buf.write(this->FMGL(maxam));
    buf.write(this->FMGL(maxam2));
    buf.write(this->FMGL(maxam2M));
    buf.write(this->FMGL(maxam2N));
    buf.write(this->FMGL(normFactors));
    buf.write(this->FMGL(THRESH));
    buf.write(this->FMGL(TCrit));
    buf.write(this->FMGL(omega));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::TwoElectronIntegrals::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::TwoElectronIntegrals* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::TwoElectronIntegrals>()) ::au::edu::anu::qm::TwoElectronIntegrals();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::TwoElectronIntegrals::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(gmt) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(zeroM) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(rM) = buf.read< ::x10::regionarray::Array<x10_double>*>();
    FMGL(pqInts) = buf.read< ::x10::regionarray::Array<x10_double>*>();
    FMGL(npint) = buf.read< ::x10::regionarray::Array<x10_double>*>();
    FMGL(pcdint) = buf.read< ::x10::regionarray::Array<x10_double>*>();
    FMGL(maxam) = buf.read<x10_long>();
    FMGL(maxam2) = buf.read<x10_long>();
    FMGL(maxam2M) = buf.read<x10_long>();
    FMGL(maxam2N) = buf.read<x10_long>();
    FMGL(normFactors) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(THRESH) = buf.read<x10_double>();
    FMGL(TCrit) = buf.read<x10_double>();
    FMGL(omega) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::qm::TwoElectronIntegrals::rtt;
void au::edu::anu::qm::TwoElectronIntegrals::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.TwoElectronIntegrals",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of TwoElectronIntegrals */
/*************************************************/
