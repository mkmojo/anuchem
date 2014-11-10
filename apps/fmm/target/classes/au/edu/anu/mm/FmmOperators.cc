/*************************************************/
/* START of FmmOperators */
#include <au/edu/anu/mm/FmmOperators.h>

#include <x10/lang/Double.h>
#include <x10/lang/Complex.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Int.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <x10x/polar/Polar3d.h>
#include <x10x/vector/Vector3d.h>
#include <au/edu/anu/mm/WignerRotationMatrix.h>
#include <au/edu/anu/mm/Expansion.h>
#include <x10/compiler/Synthetic.h>

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
/** 
     * A cache of wigner matrices for translating between box centres of children to parent
     * Dimensions of the Array are:
     *   0, 1, 2: x, y, z translation values
     * which in turn contains an Array indexed by:
     *   0 for forward, 1 for backward (rotations)
     * Each element of this is an Array[Array[Double](2){rect}](1)  
     *   which is indexed by l-value
     * Each element of this is a Wigner rotation matrix d^l for a particular  
     *   theta (for the translation with vector <x,y,z>)
     */

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
/**
     * A cache of exp(k * phi * i) values for all phi that could be needed in a rotation and -p < k < p
     * Dimensions of the Array are:
     *   0, 1, 2: x, y, z translation values
     * which in turn contains an Array indexed by:
     *   0 for +phi and 1 for -phi (for forward, back rotations)
     */

//#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
void au::edu::anu::mm::FmmOperators::_constructor(x10_int numTerms, x10_int ws) {
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::au::edu::anu::mm::FmmOperators* this__27312 = this;
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    this->FMGL(wignerA) = (this->precomputeWignerA(numTerms));
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    this->FMGL(wignerB) = this->precomputeWignerB(numTerms, ws);
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    this->FMGL(wignerC) = (this->precomputeWignerC(numTerms));
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    this->FMGL(complexK) = this->precomputeComplex(numTerms, ws);
}
::au::edu::anu::mm::FmmOperators* au::edu::anu::mm::FmmOperators::_make(x10_int numTerms,
                                                                        x10_int ws)
{
    ::au::edu::anu::mm::FmmOperators* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmOperators>()) ::au::edu::anu::mm::FmmOperators();
    this_->_constructor(numTerms, ws);
    return this_;
}



//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
  au::edu::anu::mm::FmmOperators::precomputeWignerA(x10_int numTerms) {
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* wignerA =
       (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*> >()) ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__27332 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__27333 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__27334 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__27335 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::regionarray::Region::makeRectangular(r__27333,
                                                    r__27334,
                                                    r__27335);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(region) = (reg__27332);
    wignerA->FMGL(rank) = ::x10aux::nullCheck(reg__27332)->FMGL(rank);
    wignerA->FMGL(rect) = ::x10aux::nullCheck(reg__27332)->FMGL(rect);
    wignerA->FMGL(zeroBased) = ::x10aux::nullCheck(reg__27332)->FMGL(zeroBased);
    wignerA->FMGL(rail) = ::x10aux::nullCheck(reg__27332)->FMGL(rail);
    wignerA->FMGL(size) = ::x10aux::nullCheck(reg__27332)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__27313 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__27313)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__27332);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_min0) = crh__27313->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_stride1) = crh__27313->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_min1) = crh__27313->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout) = crh__27313->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__27314 = crh__27313->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__27314);
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__27336 = wignerA->FMGL(region);
    x10_long k__17892min__27337 = p__27336->min(((x10_long)2ll));
    x10_long k__17892max__27338 = p__27336->max(((x10_long)2ll));
    x10_long j__17911min__27339 = p__27336->min(((x10_long)1ll));
    x10_long j__17911max__27340 = p__27336->max(((x10_long)1ll));
    x10_long i__17930min__27341 = p__27336->min(((x10_long)0ll));
    x10_long i__17930max__27342 = p__27336->max(((x10_long)0ll));
    {
        x10_long i__27343;
        for (i__27343 = i__17930min__27341; ((i__27343) <= (i__17930max__27342));
             i__27343 = ((i__27343) + (((x10_long)1ll))))
        {
            x10_long i__27344 = i__27343;
            {
                x10_long j__27345;
                for (j__27345 = j__17911min__27339; ((j__27345) <= (j__17911max__27340));
                     j__27345 = ((j__27345) + (((x10_long)1ll))))
                {
                    x10_long j__27346 = j__27345;
                    {
                        x10_long k__27347;
                        for (k__27347 = k__17892min__27337;
                             ((k__27347) <= (k__17892max__27338));
                             k__27347 = ((k__27347) + (((x10_long)1ll))))
                        {
                            x10_long k__27348 = k__27347;
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__27330 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__27331 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__27315 =
                                                              ((x10_double) (((((i__27344) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double j__27316 =
                                                              ((x10_double) (((((j__27346) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double k__27317 =
                                                              ((x10_double) (((((k__27348) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__27331->FMGL(i) =
                                                              i__27315;
                                                            alloc__27331->FMGL(j) =
                                                              j__27316;
                                                            alloc__27331->FMGL(k) =
                                                              k__27317;
                                                            alloc__27331;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__27323 = i__27344;
                            x10_long i__27324 = j__27346;
                            x10_long i__27325 = k__27348;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__27326 =
                              (__extension__ ({
                                
                                //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__27327 =
                                  theta__27330;
                                x10_long numTerms__27328 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__27327, numTerms__27328,
                                  ((x10_int)0));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__27329;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerA->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__27319 = i__27323;
                                  x10_long i__27320 = i__27324;
                                  x10_long i__27321 = i__27325;
                                  x10_long ret__27322;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__27318 =
                                    ((i__27319) - (wignerA->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27318 = ((((((offset__27318) * (wignerA->FMGL(layout_stride1)))) + (i__27320))) - (wignerA->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27318 = ((((((offset__27318) * (::x10aux::nullCheck(wignerA->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__27321))) - (::x10aux::nullCheck(wignerA->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__27322 = offset__27318;
                                  ret__27322;
                              }))
                              , v__27326);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27329 = v__27326;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27329;
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    return wignerA;
    
}

//#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
  au::edu::anu::mm::FmmOperators::precomputeWignerB(x10_int numTerms,
                                                    x10_int ws) {
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* wignerB =
       (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*> >()) ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__27368 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__27369 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__27370 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__27371 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__27369,
                                                    r__27370,
                                                    r__27371);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(region) = (reg__27368);
    wignerB->FMGL(rank) = ::x10aux::nullCheck(reg__27368)->FMGL(rank);
    wignerB->FMGL(rect) = ::x10aux::nullCheck(reg__27368)->FMGL(rect);
    wignerB->FMGL(zeroBased) = ::x10aux::nullCheck(reg__27368)->FMGL(zeroBased);
    wignerB->FMGL(rail) = ::x10aux::nullCheck(reg__27368)->FMGL(rail);
    wignerB->FMGL(size) = ::x10aux::nullCheck(reg__27368)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__27349 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__27349)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__27368);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_min0) = crh__27349->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_stride1) = crh__27349->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_min1) = crh__27349->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout) = crh__27349->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__27350 = crh__27349->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__27350);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__27372 = wignerB->FMGL(region);
    x10_long k__17951min__27373 = p__27372->min(((x10_long)2ll));
    x10_long k__17951max__27374 = p__27372->max(((x10_long)2ll));
    x10_long j__17970min__27375 = p__27372->min(((x10_long)1ll));
    x10_long j__17970max__27376 = p__27372->max(((x10_long)1ll));
    x10_long i__17989min__27377 = p__27372->min(((x10_long)0ll));
    x10_long i__17989max__27378 = p__27372->max(((x10_long)0ll));
    {
        x10_long i__27379;
        for (i__27379 = i__17989min__27377; ((i__27379) <= (i__17989max__27378));
             i__27379 = ((i__27379) + (((x10_long)1ll))))
        {
            x10_long i__27380 = i__27379;
            {
                x10_long j__27381;
                for (j__27381 = j__17970min__27375; ((j__27381) <= (j__17970max__27376));
                     j__27381 = ((j__27381) + (((x10_long)1ll))))
                {
                    x10_long j__27382 = j__27381;
                    {
                        x10_long k__27383;
                        for (k__27383 = k__17951min__27373;
                             ((k__27383) <= (k__17951max__27374));
                             k__27383 = ((k__27383) + (((x10_long)1ll))))
                        {
                            x10_long k__27384 = k__27383;
                            
                            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__27366 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__27367 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__27351 =
                                                              ((x10_double) (i__27380));
                                                            x10_double j__27352 =
                                                              ((x10_double) (j__27382));
                                                            x10_double k__27353 =
                                                              ((x10_double) (k__27384));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__27367->FMGL(i) =
                                                              i__27351;
                                                            alloc__27367->FMGL(j) =
                                                              j__27352;
                                                            alloc__27367->FMGL(k) =
                                                              k__27353;
                                                            alloc__27367;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__27359 = i__27380;
                            x10_long i__27360 = j__27382;
                            x10_long i__27361 = k__27384;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__27362 =
                              (__extension__ ({
                                
                                //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__27363 =
                                  theta__27366;
                                x10_long numTerms__27364 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__27363, numTerms__27364,
                                  ((x10_int)-1));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__27365;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerB->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__27355 = i__27359;
                                  x10_long i__27356 = i__27360;
                                  x10_long i__27357 = i__27361;
                                  x10_long ret__27358;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__27354 =
                                    ((i__27355) - (wignerB->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27354 = ((((((offset__27354) * (wignerB->FMGL(layout_stride1)))) + (i__27356))) - (wignerB->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27354 = ((((((offset__27354) * (::x10aux::nullCheck(wignerB->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__27357))) - (::x10aux::nullCheck(wignerB->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__27358 = offset__27354;
                                  ret__27358;
                              }))
                              , v__27362);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27365 = v__27362;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27365;
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    return wignerB;
    
}

//#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*
  au::edu::anu::mm::FmmOperators::precomputeWignerC(x10_int numTerms) {
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* wignerC =
       (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*> >()) ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__27404 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__27405 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__27406 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__27407 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::regionarray::Region::makeRectangular(r__27405,
                                                    r__27406,
                                                    r__27407);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(region) = (reg__27404);
    wignerC->FMGL(rank) = ::x10aux::nullCheck(reg__27404)->FMGL(rank);
    wignerC->FMGL(rect) = ::x10aux::nullCheck(reg__27404)->FMGL(rect);
    wignerC->FMGL(zeroBased) = ::x10aux::nullCheck(reg__27404)->FMGL(zeroBased);
    wignerC->FMGL(rail) = ::x10aux::nullCheck(reg__27404)->FMGL(rail);
    wignerC->FMGL(size) = ::x10aux::nullCheck(reg__27404)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__27385 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__27385)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__27404);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_min0) = crh__27385->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_stride1) = crh__27385->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_min1) = crh__27385->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout) = crh__27385->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__27386 = crh__27385->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__27386);
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__27408 = wignerC->FMGL(region);
    x10_long k__18010min__27409 = p__27408->min(((x10_long)2ll));
    x10_long k__18010max__27410 = p__27408->max(((x10_long)2ll));
    x10_long j__18029min__27411 = p__27408->min(((x10_long)1ll));
    x10_long j__18029max__27412 = p__27408->max(((x10_long)1ll));
    x10_long i__18048min__27413 = p__27408->min(((x10_long)0ll));
    x10_long i__18048max__27414 = p__27408->max(((x10_long)0ll));
    {
        x10_long i__27415;
        for (i__27415 = i__18048min__27413; ((i__27415) <= (i__18048max__27414));
             i__27415 = ((i__27415) + (((x10_long)1ll))))
        {
            x10_long i__27416 = i__27415;
            {
                x10_long j__27417;
                for (j__27417 = j__18029min__27411; ((j__27417) <= (j__18029max__27412));
                     j__27417 = ((j__27417) + (((x10_long)1ll))))
                {
                    x10_long j__27418 = j__27417;
                    {
                        x10_long k__27419;
                        for (k__27419 = k__18010min__27409;
                             ((k__27419) <= (k__18010max__27410));
                             k__27419 = ((k__27419) + (((x10_long)1ll))))
                        {
                            x10_long k__27420 = k__27419;
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__27402 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__27403 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__27387 =
                                                              ((x10_double) (((((i__27416) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double j__27388 =
                                                              ((x10_double) (((((j__27418) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double k__27389 =
                                                              ((x10_double) (((((k__27420) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__27403->FMGL(i) =
                                                              i__27387;
                                                            alloc__27403->FMGL(j) =
                                                              j__27388;
                                                            alloc__27403->FMGL(k) =
                                                              k__27389;
                                                            alloc__27403;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__27395 = i__27416;
                            x10_long i__27396 = j__27418;
                            x10_long i__27397 = k__27420;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__27398 =
                              (__extension__ ({
                                
                                //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__27399 =
                                  theta__27402;
                                x10_long numTerms__27400 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__27399, numTerms__27400,
                                  ((x10_int)2));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__27401;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerC->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__27391 = i__27395;
                                  x10_long i__27392 = i__27396;
                                  x10_long i__27393 = i__27397;
                                  x10_long ret__27394;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__27390 =
                                    ((i__27391) - (wignerC->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27390 = ((((((offset__27390) * (wignerC->FMGL(layout_stride1)))) + (i__27392))) - (wignerC->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27390 = ((((((offset__27390) * (::x10aux::nullCheck(wignerC->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__27393))) - (::x10aux::nullCheck(wignerC->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__27394 = offset__27390;
                                  ret__27394;
                              }))
                              , v__27398);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27401 = v__27398;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27401;
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    return wignerC;
    
}

//#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>*
  au::edu::anu::mm::FmmOperators::precomputeComplex(x10_int numTerms,
                                                    x10_int ws) {
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>* complexK =
       (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*> >()) ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__27438 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__27439 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__27440 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__27441 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__27439,
                                                    r__27440,
                                                    r__27441);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(region) = (reg__27438);
    complexK->FMGL(rank) = ::x10aux::nullCheck(reg__27438)->FMGL(rank);
    complexK->FMGL(rect) = ::x10aux::nullCheck(reg__27438)->FMGL(rect);
    complexK->FMGL(zeroBased) = ::x10aux::nullCheck(reg__27438)->FMGL(zeroBased);
    complexK->FMGL(rail) = ::x10aux::nullCheck(reg__27438)->FMGL(rail);
    complexK->FMGL(size) = ::x10aux::nullCheck(reg__27438)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__27421 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__27421)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__27438);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_min0) = crh__27421->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_stride1) = crh__27421->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_min1) = crh__27421->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout) = crh__27421->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__27422 = crh__27421->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::_make(n__27422);
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__27442 = complexK->FMGL(region);
    x10_long k__18069min__27443 = p__27442->min(((x10_long)2ll));
    x10_long k__18069max__27444 = p__27442->max(((x10_long)2ll));
    x10_long j__18088min__27445 = p__27442->min(((x10_long)1ll));
    x10_long j__18088max__27446 = p__27442->max(((x10_long)1ll));
    x10_long i__18107min__27447 = p__27442->min(((x10_long)0ll));
    x10_long i__18107max__27448 = p__27442->max(((x10_long)0ll));
    {
        x10_long i__27449;
        for (i__27449 = i__18107min__27447; ((i__27449) <= (i__18107max__27448));
             i__27449 = ((i__27449) + (((x10_long)1ll))))
        {
            x10_long i__27450 = i__27449;
            {
                x10_long j__27451;
                for (j__27451 = j__18088min__27445; ((j__27451) <= (j__18088max__27446));
                     j__27451 = ((j__27451) + (((x10_long)1ll))))
                {
                    x10_long j__27452 = j__27451;
                    {
                        x10_long k__27453;
                        for (k__27453 = k__18069min__27443;
                             ((k__27453) <= (k__18069max__27444));
                             k__27453 = ((k__27453) + (((x10_long)1ll))))
                        {
                            x10_long k__27454 = k__27453;
                            
                            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double phi__27436 = ::x10x::polar::Polar3d::getPolar3d(
                                                      (__extension__ ({
                                                          ::x10x::vector::Vector3d alloc__27437 =
                                                            
                                                          ::x10x::vector::Vector3d::_alloc();
                                                          
                                                          //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                          x10_double i__27423 =
                                                            ((x10_double) (i__27450));
                                                          x10_double j__27424 =
                                                            ((x10_double) (j__27452));
                                                          x10_double k__27425 =
                                                            ((x10_double) (k__27454));
                                                          
                                                          //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                          alloc__27437->FMGL(i) =
                                                            i__27423;
                                                          alloc__27437->FMGL(j) =
                                                            j__27424;
                                                          alloc__27437->FMGL(k) =
                                                            k__27425;
                                                          alloc__27437;
                                                      }))
                                                      )->FMGL(phi);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__27431 = i__27450;
                            x10_long i__27432 = j__27452;
                            x10_long i__27433 = k__27454;
                            ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* v__27434 =
                              ::au::edu::anu::mm::Expansion::genComplexK(
                                phi__27436, ((x10_long)(numTerms)));
                            ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__27435;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            complexK->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__27427 = i__27431;
                                  x10_long i__27428 = i__27432;
                                  x10_long i__27429 = i__27433;
                                  x10_long ret__27430;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__27426 =
                                    ((i__27427) - (complexK->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27426 = ((((((offset__27426) * (complexK->FMGL(layout_stride1)))) + (i__27428))) - (complexK->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__27426 = ((((((offset__27426) * (::x10aux::nullCheck(complexK->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__27429))) - (::x10aux::nullCheck(complexK->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__27430 = offset__27426;
                                  ret__27430;
                              }))
                              , v__27434);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27435 = v__27434;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__27435;
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    return complexK;
    
}

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
::au::edu::anu::mm::FmmOperators* au::edu::anu::mm::FmmOperators::au__edu__anu__mm__FmmOperators____this__au__edu__anu__mm__FmmOperators(
  ) {
    return this;
    
}
void au::edu::anu::mm::FmmOperators::__fieldInitializers_au_edu_anu_mm_FmmOperators(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::FmmOperators::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::FmmOperators::_deserializer);

void au::edu::anu::mm::FmmOperators::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(wignerA));
    buf.write(this->FMGL(wignerB));
    buf.write(this->FMGL(wignerC));
    buf.write(this->FMGL(complexK));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::FmmOperators::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::FmmOperators* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmOperators>()) ::au::edu::anu::mm::FmmOperators();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::FmmOperators::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(wignerA) = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*>();
    FMGL(wignerB) = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*>();
    FMGL(wignerC) = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>*>();
    FMGL(complexK) = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>*>();
}

::x10aux::RuntimeType au::edu::anu::mm::FmmOperators::rtt;
void au::edu::anu::mm::FmmOperators::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.FmmOperators",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of FmmOperators */
/*************************************************/
