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
    ::au::edu::anu::mm::FmmOperators* this__59355 = this;
    
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
    ::x10::regionarray::Region* reg__59375 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__59376 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__59377 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__59378 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::regionarray::Region::makeRectangular(r__59376,
                                                    r__59377,
                                                    r__59378);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(region) = (reg__59375);
    wignerA->FMGL(rank) = ::x10aux::nullCheck(reg__59375)->FMGL(rank);
    wignerA->FMGL(rect) = ::x10aux::nullCheck(reg__59375)->FMGL(rect);
    wignerA->FMGL(zeroBased) = ::x10aux::nullCheck(reg__59375)->FMGL(zeroBased);
    wignerA->FMGL(rail) = ::x10aux::nullCheck(reg__59375)->FMGL(rail);
    wignerA->FMGL(size) = ::x10aux::nullCheck(reg__59375)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__59356 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__59356)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__59375);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_min0) = crh__59356->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_stride1) = crh__59356->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_min1) = crh__59356->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout) = crh__59356->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__59357 = crh__59356->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__59357);
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__59379 = wignerA->FMGL(region);
    x10_long k__55784min__59380 = p__59379->min(((x10_long)2ll));
    x10_long k__55784max__59381 = p__59379->max(((x10_long)2ll));
    x10_long j__55803min__59382 = p__59379->min(((x10_long)1ll));
    x10_long j__55803max__59383 = p__59379->max(((x10_long)1ll));
    x10_long i__55822min__59384 = p__59379->min(((x10_long)0ll));
    x10_long i__55822max__59385 = p__59379->max(((x10_long)0ll));
    {
        x10_long i__59386;
        for (i__59386 = i__55822min__59384; ((i__59386) <= (i__55822max__59385));
             i__59386 = ((i__59386) + (((x10_long)1ll))))
        {
            x10_long i__59387 = i__59386;
            {
                x10_long j__59388;
                for (j__59388 = j__55803min__59382; ((j__59388) <= (j__55803max__59383));
                     j__59388 = ((j__59388) + (((x10_long)1ll))))
                {
                    x10_long j__59389 = j__59388;
                    {
                        x10_long k__59390;
                        for (k__59390 = k__55784min__59380;
                             ((k__59390) <= (k__55784max__59381));
                             k__59390 = ((k__59390) + (((x10_long)1ll))))
                        {
                            x10_long k__59391 = k__59390;
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__59373 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__59374 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__59358 =
                                                              ((x10_double) (((((i__59387) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double j__59359 =
                                                              ((x10_double) (((((j__59389) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double k__59360 =
                                                              ((x10_double) (((((k__59391) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__59374->FMGL(i) =
                                                              i__59358;
                                                            alloc__59374->FMGL(j) =
                                                              j__59359;
                                                            alloc__59374->FMGL(k) =
                                                              k__59360;
                                                            alloc__59374;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__59366 = i__59387;
                            x10_long i__59367 = j__59389;
                            x10_long i__59368 = k__59391;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__59369 =
                              (__extension__ ({
                                
                                //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__59370 =
                                  theta__59373;
                                x10_long numTerms__59371 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__59370, numTerms__59371,
                                  ((x10_int)0));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__59372;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerA->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__59362 = i__59366;
                                  x10_long i__59363 = i__59367;
                                  x10_long i__59364 = i__59368;
                                  x10_long ret__59365;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__59361 =
                                    ((i__59362) - (wignerA->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59361 = ((((((offset__59361) * (wignerA->FMGL(layout_stride1)))) + (i__59363))) - (wignerA->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59361 = ((((((offset__59361) * (::x10aux::nullCheck(wignerA->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__59364))) - (::x10aux::nullCheck(wignerA->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__59365 = offset__59361;
                                  ret__59365;
                              }))
                              , v__59369);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59372 = v__59369;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59372;
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
    ::x10::regionarray::Region* reg__59411 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__59412 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__59413 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__59414 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__59412,
                                                    r__59413,
                                                    r__59414);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(region) = (reg__59411);
    wignerB->FMGL(rank) = ::x10aux::nullCheck(reg__59411)->FMGL(rank);
    wignerB->FMGL(rect) = ::x10aux::nullCheck(reg__59411)->FMGL(rect);
    wignerB->FMGL(zeroBased) = ::x10aux::nullCheck(reg__59411)->FMGL(zeroBased);
    wignerB->FMGL(rail) = ::x10aux::nullCheck(reg__59411)->FMGL(rail);
    wignerB->FMGL(size) = ::x10aux::nullCheck(reg__59411)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__59392 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__59392)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__59411);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_min0) = crh__59392->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_stride1) = crh__59392->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_min1) = crh__59392->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout) = crh__59392->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__59393 = crh__59392->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__59393);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__59415 = wignerB->FMGL(region);
    x10_long k__55843min__59416 = p__59415->min(((x10_long)2ll));
    x10_long k__55843max__59417 = p__59415->max(((x10_long)2ll));
    x10_long j__55862min__59418 = p__59415->min(((x10_long)1ll));
    x10_long j__55862max__59419 = p__59415->max(((x10_long)1ll));
    x10_long i__55881min__59420 = p__59415->min(((x10_long)0ll));
    x10_long i__55881max__59421 = p__59415->max(((x10_long)0ll));
    {
        x10_long i__59422;
        for (i__59422 = i__55881min__59420; ((i__59422) <= (i__55881max__59421));
             i__59422 = ((i__59422) + (((x10_long)1ll))))
        {
            x10_long i__59423 = i__59422;
            {
                x10_long j__59424;
                for (j__59424 = j__55862min__59418; ((j__59424) <= (j__55862max__59419));
                     j__59424 = ((j__59424) + (((x10_long)1ll))))
                {
                    x10_long j__59425 = j__59424;
                    {
                        x10_long k__59426;
                        for (k__59426 = k__55843min__59416;
                             ((k__59426) <= (k__55843max__59417));
                             k__59426 = ((k__59426) + (((x10_long)1ll))))
                        {
                            x10_long k__59427 = k__59426;
                            
                            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__59409 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__59410 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__59394 =
                                                              ((x10_double) (i__59423));
                                                            x10_double j__59395 =
                                                              ((x10_double) (j__59425));
                                                            x10_double k__59396 =
                                                              ((x10_double) (k__59427));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__59410->FMGL(i) =
                                                              i__59394;
                                                            alloc__59410->FMGL(j) =
                                                              j__59395;
                                                            alloc__59410->FMGL(k) =
                                                              k__59396;
                                                            alloc__59410;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__59402 = i__59423;
                            x10_long i__59403 = j__59425;
                            x10_long i__59404 = k__59427;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__59405 =
                              (__extension__ ({
                                
                                //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__59406 =
                                  theta__59409;
                                x10_long numTerms__59407 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__59406, numTerms__59407,
                                  ((x10_int)-1));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__59408;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerB->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__59398 = i__59402;
                                  x10_long i__59399 = i__59403;
                                  x10_long i__59400 = i__59404;
                                  x10_long ret__59401;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__59397 =
                                    ((i__59398) - (wignerB->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59397 = ((((((offset__59397) * (wignerB->FMGL(layout_stride1)))) + (i__59399))) - (wignerB->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59397 = ((((((offset__59397) * (::x10aux::nullCheck(wignerB->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__59400))) - (::x10aux::nullCheck(wignerB->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__59401 = offset__59397;
                                  ret__59401;
                              }))
                              , v__59405);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59408 = v__59405;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59408;
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
    ::x10::regionarray::Region* reg__59447 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__59448 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__59449 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__59450 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::regionarray::Region::makeRectangular(r__59448,
                                                    r__59449,
                                                    r__59450);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(region) = (reg__59447);
    wignerC->FMGL(rank) = ::x10aux::nullCheck(reg__59447)->FMGL(rank);
    wignerC->FMGL(rect) = ::x10aux::nullCheck(reg__59447)->FMGL(rect);
    wignerC->FMGL(zeroBased) = ::x10aux::nullCheck(reg__59447)->FMGL(zeroBased);
    wignerC->FMGL(rail) = ::x10aux::nullCheck(reg__59447)->FMGL(rail);
    wignerC->FMGL(size) = ::x10aux::nullCheck(reg__59447)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__59428 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__59428)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__59447);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_min0) = crh__59428->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_stride1) = crh__59428->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_min1) = crh__59428->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout) = crh__59428->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__59429 = crh__59428->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__59429);
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__59451 = wignerC->FMGL(region);
    x10_long k__55902min__59452 = p__59451->min(((x10_long)2ll));
    x10_long k__55902max__59453 = p__59451->max(((x10_long)2ll));
    x10_long j__55921min__59454 = p__59451->min(((x10_long)1ll));
    x10_long j__55921max__59455 = p__59451->max(((x10_long)1ll));
    x10_long i__55940min__59456 = p__59451->min(((x10_long)0ll));
    x10_long i__55940max__59457 = p__59451->max(((x10_long)0ll));
    {
        x10_long i__59458;
        for (i__59458 = i__55940min__59456; ((i__59458) <= (i__55940max__59457));
             i__59458 = ((i__59458) + (((x10_long)1ll))))
        {
            x10_long i__59459 = i__59458;
            {
                x10_long j__59460;
                for (j__59460 = j__55921min__59454; ((j__59460) <= (j__55921max__59455));
                     j__59460 = ((j__59460) + (((x10_long)1ll))))
                {
                    x10_long j__59461 = j__59460;
                    {
                        x10_long k__59462;
                        for (k__59462 = k__55902min__59452;
                             ((k__59462) <= (k__55902max__59453));
                             k__59462 = ((k__59462) + (((x10_long)1ll))))
                        {
                            x10_long k__59463 = k__59462;
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__59445 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__59446 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__59430 =
                                                              ((x10_double) (((((i__59459) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double j__59431 =
                                                              ((x10_double) (((((j__59461) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double k__59432 =
                                                              ((x10_double) (((((k__59463) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__59446->FMGL(i) =
                                                              i__59430;
                                                            alloc__59446->FMGL(j) =
                                                              j__59431;
                                                            alloc__59446->FMGL(k) =
                                                              k__59432;
                                                            alloc__59446;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__59438 = i__59459;
                            x10_long i__59439 = j__59461;
                            x10_long i__59440 = k__59463;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__59441 =
                              (__extension__ ({
                                
                                //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__59442 =
                                  theta__59445;
                                x10_long numTerms__59443 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__59442, numTerms__59443,
                                  ((x10_int)2));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__59444;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerC->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__59434 = i__59438;
                                  x10_long i__59435 = i__59439;
                                  x10_long i__59436 = i__59440;
                                  x10_long ret__59437;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__59433 =
                                    ((i__59434) - (wignerC->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59433 = ((((((offset__59433) * (wignerC->FMGL(layout_stride1)))) + (i__59435))) - (wignerC->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59433 = ((((((offset__59433) * (::x10aux::nullCheck(wignerC->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__59436))) - (::x10aux::nullCheck(wignerC->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__59437 = offset__59433;
                                  ret__59437;
                              }))
                              , v__59441);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59444 = v__59441;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59444;
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
    ::x10::regionarray::Region* reg__59481 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__59482 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__59483 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__59484 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__59482,
                                                    r__59483,
                                                    r__59484);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(region) = (reg__59481);
    complexK->FMGL(rank) = ::x10aux::nullCheck(reg__59481)->FMGL(rank);
    complexK->FMGL(rect) = ::x10aux::nullCheck(reg__59481)->FMGL(rect);
    complexK->FMGL(zeroBased) = ::x10aux::nullCheck(reg__59481)->FMGL(zeroBased);
    complexK->FMGL(rail) = ::x10aux::nullCheck(reg__59481)->FMGL(rail);
    complexK->FMGL(size) = ::x10aux::nullCheck(reg__59481)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__59464 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__59464)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__59481);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_min0) = crh__59464->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_stride1) = crh__59464->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_min1) = crh__59464->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout) = crh__59464->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__59465 = crh__59464->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::_make(n__59465);
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__59485 = complexK->FMGL(region);
    x10_long k__55961min__59486 = p__59485->min(((x10_long)2ll));
    x10_long k__55961max__59487 = p__59485->max(((x10_long)2ll));
    x10_long j__55980min__59488 = p__59485->min(((x10_long)1ll));
    x10_long j__55980max__59489 = p__59485->max(((x10_long)1ll));
    x10_long i__55999min__59490 = p__59485->min(((x10_long)0ll));
    x10_long i__55999max__59491 = p__59485->max(((x10_long)0ll));
    {
        x10_long i__59492;
        for (i__59492 = i__55999min__59490; ((i__59492) <= (i__55999max__59491));
             i__59492 = ((i__59492) + (((x10_long)1ll))))
        {
            x10_long i__59493 = i__59492;
            {
                x10_long j__59494;
                for (j__59494 = j__55980min__59488; ((j__59494) <= (j__55980max__59489));
                     j__59494 = ((j__59494) + (((x10_long)1ll))))
                {
                    x10_long j__59495 = j__59494;
                    {
                        x10_long k__59496;
                        for (k__59496 = k__55961min__59486;
                             ((k__59496) <= (k__55961max__59487));
                             k__59496 = ((k__59496) + (((x10_long)1ll))))
                        {
                            x10_long k__59497 = k__59496;
                            
                            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double phi__59479 = ::x10x::polar::Polar3d::getPolar3d(
                                                      (__extension__ ({
                                                          ::x10x::vector::Vector3d alloc__59480 =
                                                            
                                                          ::x10x::vector::Vector3d::_alloc();
                                                          
                                                          //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                          x10_double i__59466 =
                                                            ((x10_double) (i__59493));
                                                          x10_double j__59467 =
                                                            ((x10_double) (j__59495));
                                                          x10_double k__59468 =
                                                            ((x10_double) (k__59497));
                                                          
                                                          //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                          alloc__59480->FMGL(i) =
                                                            i__59466;
                                                          alloc__59480->FMGL(j) =
                                                            j__59467;
                                                          alloc__59480->FMGL(k) =
                                                            k__59468;
                                                          alloc__59480;
                                                      }))
                                                      )->FMGL(phi);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__59474 = i__59493;
                            x10_long i__59475 = j__59495;
                            x10_long i__59476 = k__59497;
                            ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* v__59477 =
                              ::au::edu::anu::mm::Expansion::genComplexK(
                                phi__59479, ((x10_long)(numTerms)));
                            ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__59478;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            complexK->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__59470 = i__59474;
                                  x10_long i__59471 = i__59475;
                                  x10_long i__59472 = i__59476;
                                  x10_long ret__59473;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__59469 =
                                    ((i__59470) - (complexK->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59469 = ((((((offset__59469) * (complexK->FMGL(layout_stride1)))) + (i__59471))) - (complexK->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__59469 = ((((((offset__59469) * (::x10aux::nullCheck(complexK->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__59472))) - (::x10aux::nullCheck(complexK->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__59473 = offset__59469;
                                  ret__59473;
                              }))
                              , v__59477);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59478 = v__59477;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__59478;
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
