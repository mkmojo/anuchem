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
    ::au::edu::anu::mm::FmmOperators* this__61661 = this;
    
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
    ::x10::regionarray::Region* reg__61681 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__61682 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__61683 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__61684 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::regionarray::Region::makeRectangular(r__61682,
                                                    r__61683,
                                                    r__61684);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(region) = (reg__61681);
    wignerA->FMGL(rank) = ::x10aux::nullCheck(reg__61681)->FMGL(rank);
    wignerA->FMGL(rect) = ::x10aux::nullCheck(reg__61681)->FMGL(rect);
    wignerA->FMGL(zeroBased) = ::x10aux::nullCheck(reg__61681)->FMGL(zeroBased);
    wignerA->FMGL(rail) = ::x10aux::nullCheck(reg__61681)->FMGL(rail);
    wignerA->FMGL(size) = ::x10aux::nullCheck(reg__61681)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__61662 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__61662)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__61681);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_min0) = crh__61662->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_stride1) = crh__61662->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout_min1) = crh__61662->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(layout) = crh__61662->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__61663 = crh__61662->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerA->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__61663);
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__61685 = wignerA->FMGL(region);
    x10_long k__53045min__61686 = p__61685->min(((x10_long)2ll));
    x10_long k__53045max__61687 = p__61685->max(((x10_long)2ll));
    x10_long j__53064min__61688 = p__61685->min(((x10_long)1ll));
    x10_long j__53064max__61689 = p__61685->max(((x10_long)1ll));
    x10_long i__53083min__61690 = p__61685->min(((x10_long)0ll));
    x10_long i__53083max__61691 = p__61685->max(((x10_long)0ll));
    {
        x10_long i__61692;
        for (i__61692 = i__53083min__61690; ((i__61692) <= (i__53083max__61691));
             i__61692 = ((i__61692) + (((x10_long)1ll))))
        {
            x10_long i__61693 = i__61692;
            {
                x10_long j__61694;
                for (j__61694 = j__53064min__61688; ((j__61694) <= (j__53064max__61689));
                     j__61694 = ((j__61694) + (((x10_long)1ll))))
                {
                    x10_long j__61695 = j__61694;
                    {
                        x10_long k__61696;
                        for (k__61696 = k__53045min__61686;
                             ((k__61696) <= (k__53045max__61687));
                             k__61696 = ((k__61696) + (((x10_long)1ll))))
                        {
                            x10_long k__61697 = k__61696;
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__61679 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__61680 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__61664 =
                                                              ((x10_double) (((((i__61693) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double j__61665 =
                                                              ((x10_double) (((((j__61695) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double k__61666 =
                                                              ((x10_double) (((((k__61697) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__61680->FMGL(i) =
                                                              i__61664;
                                                            alloc__61680->FMGL(j) =
                                                              j__61665;
                                                            alloc__61680->FMGL(k) =
                                                              k__61666;
                                                            alloc__61680;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__61672 = i__61693;
                            x10_long i__61673 = j__61695;
                            x10_long i__61674 = k__61697;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__61675 =
                              (__extension__ ({
                                
                                //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__61676 =
                                  theta__61679;
                                x10_long numTerms__61677 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__61676, numTerms__61677,
                                  ((x10_int)0));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__61678;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerA->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__61668 = i__61672;
                                  x10_long i__61669 = i__61673;
                                  x10_long i__61670 = i__61674;
                                  x10_long ret__61671;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__61667 =
                                    ((i__61668) - (wignerA->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61667 = ((((((offset__61667) * (wignerA->FMGL(layout_stride1)))) + (i__61669))) - (wignerA->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61667 = ((((((offset__61667) * (::x10aux::nullCheck(wignerA->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__61670))) - (::x10aux::nullCheck(wignerA->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__61671 = offset__61667;
                                  ret__61671;
                              }))
                              , v__61675);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61678 = v__61675;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61678;
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
    ::x10::regionarray::Region* reg__61717 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__61718 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__61719 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__61720 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__61718,
                                                    r__61719,
                                                    r__61720);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(region) = (reg__61717);
    wignerB->FMGL(rank) = ::x10aux::nullCheck(reg__61717)->FMGL(rank);
    wignerB->FMGL(rect) = ::x10aux::nullCheck(reg__61717)->FMGL(rect);
    wignerB->FMGL(zeroBased) = ::x10aux::nullCheck(reg__61717)->FMGL(zeroBased);
    wignerB->FMGL(rail) = ::x10aux::nullCheck(reg__61717)->FMGL(rail);
    wignerB->FMGL(size) = ::x10aux::nullCheck(reg__61717)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__61698 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__61698)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__61717);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_min0) = crh__61698->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_stride1) = crh__61698->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout_min1) = crh__61698->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(layout) = crh__61698->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__61699 = crh__61698->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerB->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__61699);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__61721 = wignerB->FMGL(region);
    x10_long k__53104min__61722 = p__61721->min(((x10_long)2ll));
    x10_long k__53104max__61723 = p__61721->max(((x10_long)2ll));
    x10_long j__53123min__61724 = p__61721->min(((x10_long)1ll));
    x10_long j__53123max__61725 = p__61721->max(((x10_long)1ll));
    x10_long i__53142min__61726 = p__61721->min(((x10_long)0ll));
    x10_long i__53142max__61727 = p__61721->max(((x10_long)0ll));
    {
        x10_long i__61728;
        for (i__61728 = i__53142min__61726; ((i__61728) <= (i__53142max__61727));
             i__61728 = ((i__61728) + (((x10_long)1ll))))
        {
            x10_long i__61729 = i__61728;
            {
                x10_long j__61730;
                for (j__61730 = j__53123min__61724; ((j__61730) <= (j__53123max__61725));
                     j__61730 = ((j__61730) + (((x10_long)1ll))))
                {
                    x10_long j__61731 = j__61730;
                    {
                        x10_long k__61732;
                        for (k__61732 = k__53104min__61722;
                             ((k__61732) <= (k__53104max__61723));
                             k__61732 = ((k__61732) + (((x10_long)1ll))))
                        {
                            x10_long k__61733 = k__61732;
                            
                            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__61715 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__61716 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__61700 =
                                                              ((x10_double) (i__61729));
                                                            x10_double j__61701 =
                                                              ((x10_double) (j__61731));
                                                            x10_double k__61702 =
                                                              ((x10_double) (k__61733));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__61716->FMGL(i) =
                                                              i__61700;
                                                            alloc__61716->FMGL(j) =
                                                              j__61701;
                                                            alloc__61716->FMGL(k) =
                                                              k__61702;
                                                            alloc__61716;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__61708 = i__61729;
                            x10_long i__61709 = j__61731;
                            x10_long i__61710 = k__61733;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__61711 =
                              (__extension__ ({
                                
                                //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__61712 =
                                  theta__61715;
                                x10_long numTerms__61713 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__61712, numTerms__61713,
                                  ((x10_int)-1));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__61714;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerB->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__61704 = i__61708;
                                  x10_long i__61705 = i__61709;
                                  x10_long i__61706 = i__61710;
                                  x10_long ret__61707;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__61703 =
                                    ((i__61704) - (wignerB->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61703 = ((((((offset__61703) * (wignerB->FMGL(layout_stride1)))) + (i__61705))) - (wignerB->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61703 = ((((((offset__61703) * (::x10aux::nullCheck(wignerB->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__61706))) - (::x10aux::nullCheck(wignerB->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__61707 = offset__61703;
                                  ret__61707;
                              }))
                              , v__61711);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61714 = v__61711;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61714;
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
    ::x10::regionarray::Region* reg__61753 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__61754 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__61755 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::lang::LongRange r__61756 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)1ll));
        ::x10::regionarray::Region::makeRectangular(r__61754,
                                                    r__61755,
                                                    r__61756);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(region) = (reg__61753);
    wignerC->FMGL(rank) = ::x10aux::nullCheck(reg__61753)->FMGL(rank);
    wignerC->FMGL(rect) = ::x10aux::nullCheck(reg__61753)->FMGL(rect);
    wignerC->FMGL(zeroBased) = ::x10aux::nullCheck(reg__61753)->FMGL(zeroBased);
    wignerC->FMGL(rail) = ::x10aux::nullCheck(reg__61753)->FMGL(rail);
    wignerC->FMGL(size) = ::x10aux::nullCheck(reg__61753)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__61734 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__61734)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__61753);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_min0) = crh__61734->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_stride1) = crh__61734->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout_min1) = crh__61734->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(layout) = crh__61734->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__61735 = crh__61734->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    wignerC->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::_make(n__61735);
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__61757 = wignerC->FMGL(region);
    x10_long k__53163min__61758 = p__61757->min(((x10_long)2ll));
    x10_long k__53163max__61759 = p__61757->max(((x10_long)2ll));
    x10_long j__53182min__61760 = p__61757->min(((x10_long)1ll));
    x10_long j__53182max__61761 = p__61757->max(((x10_long)1ll));
    x10_long i__53201min__61762 = p__61757->min(((x10_long)0ll));
    x10_long i__53201max__61763 = p__61757->max(((x10_long)0ll));
    {
        x10_long i__61764;
        for (i__61764 = i__53201min__61762; ((i__61764) <= (i__53201max__61763));
             i__61764 = ((i__61764) + (((x10_long)1ll))))
        {
            x10_long i__61765 = i__61764;
            {
                x10_long j__61766;
                for (j__61766 = j__53182min__61760; ((j__61766) <= (j__53182max__61761));
                     j__61766 = ((j__61766) + (((x10_long)1ll))))
                {
                    x10_long j__61767 = j__61766;
                    {
                        x10_long k__61768;
                        for (k__61768 = k__53163min__61758;
                             ((k__61768) <= (k__53163max__61759));
                             k__61768 = ((k__61768) + (((x10_long)1ll))))
                        {
                            x10_long k__61769 = k__61768;
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double theta__61751 = ::x10x::polar::Polar3d::getPolar3d(
                                                        (__extension__ ({
                                                            ::x10x::vector::Vector3d alloc__61752 =
                                                              
                                                            ::x10x::vector::Vector3d::_alloc();
                                                            
                                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            x10_double i__61736 =
                                                              ((x10_double) (((((i__61765) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double j__61737 =
                                                              ((x10_double) (((((j__61767) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            x10_double k__61738 =
                                                              ((x10_double) (((((k__61769) * (((x10_long)2ll)))) - (((x10_long)1ll)))));
                                                            
                                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                            alloc__61752->FMGL(i) =
                                                              i__61736;
                                                            alloc__61752->FMGL(j) =
                                                              j__61737;
                                                            alloc__61752->FMGL(k) =
                                                              k__61738;
                                                            alloc__61752;
                                                        }))
                                                        )->FMGL(theta);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__61744 = i__61765;
                            x10_long i__61745 = j__61767;
                            x10_long i__61746 = k__61769;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* v__61747 =
                              (__extension__ ({
                                
                                //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                x10_double theta__61748 =
                                  theta__61751;
                                x10_long numTerms__61749 =
                                  ((x10_long)(numTerms));
                                ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                  theta__61748, numTerms__61749,
                                  ((x10_int)2));
                            }))
                            ;
                            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__61750;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            wignerC->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__61740 = i__61744;
                                  x10_long i__61741 = i__61745;
                                  x10_long i__61742 = i__61746;
                                  x10_long ret__61743;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__61739 =
                                    ((i__61740) - (wignerC->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61739 = ((((((offset__61739) * (wignerC->FMGL(layout_stride1)))) + (i__61741))) - (wignerC->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61739 = ((((((offset__61739) * (::x10aux::nullCheck(wignerC->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__61742))) - (::x10aux::nullCheck(wignerC->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__61743 = offset__61739;
                                  ret__61743;
                              }))
                              , v__61747);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61750 = v__61747;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61750;
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
    ::x10::regionarray::Region* reg__61787 = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__61788 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__61789 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::lang::LongRange r__61790 = ::x10::lang::LongRange::_make((-(((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))))), ((((((x10_long)2ll)) * (((x10_long)(ws))))) + (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__61788,
                                                    r__61789,
                                                    r__61790);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(region) = (reg__61787);
    complexK->FMGL(rank) = ::x10aux::nullCheck(reg__61787)->FMGL(rank);
    complexK->FMGL(rect) = ::x10aux::nullCheck(reg__61787)->FMGL(rect);
    complexK->FMGL(zeroBased) = ::x10aux::nullCheck(reg__61787)->FMGL(zeroBased);
    complexK->FMGL(rail) = ::x10aux::nullCheck(reg__61787)->FMGL(rail);
    complexK->FMGL(size) = ::x10aux::nullCheck(reg__61787)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__61770 = 
    ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__61770)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__61787);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_min0) = crh__61770->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_stride1) = crh__61770->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout_min1) = crh__61770->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(layout) = crh__61770->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__61771 = crh__61770->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    complexK->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::_make(n__61771);
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
    ::x10::regionarray::Region* p__61791 = complexK->FMGL(region);
    x10_long k__53222min__61792 = p__61791->min(((x10_long)2ll));
    x10_long k__53222max__61793 = p__61791->max(((x10_long)2ll));
    x10_long j__53241min__61794 = p__61791->min(((x10_long)1ll));
    x10_long j__53241max__61795 = p__61791->max(((x10_long)1ll));
    x10_long i__53260min__61796 = p__61791->min(((x10_long)0ll));
    x10_long i__53260max__61797 = p__61791->max(((x10_long)0ll));
    {
        x10_long i__61798;
        for (i__61798 = i__53260min__61796; ((i__61798) <= (i__53260max__61797));
             i__61798 = ((i__61798) + (((x10_long)1ll))))
        {
            x10_long i__61799 = i__61798;
            {
                x10_long j__61800;
                for (j__61800 = j__53241min__61794; ((j__61800) <= (j__53241max__61795));
                     j__61800 = ((j__61800) + (((x10_long)1ll))))
                {
                    x10_long j__61801 = j__61800;
                    {
                        x10_long k__61802;
                        for (k__61802 = k__53222min__61792;
                             ((k__61802) <= (k__53222max__61793));
                             k__61802 = ((k__61802) + (((x10_long)1ll))))
                        {
                            x10_long k__61803 = k__61802;
                            
                            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmOperators.x10"
                            x10_double phi__61785 = ::x10x::polar::Polar3d::getPolar3d(
                                                      (__extension__ ({
                                                          ::x10x::vector::Vector3d alloc__61786 =
                                                            
                                                          ::x10x::vector::Vector3d::_alloc();
                                                          
                                                          //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                          x10_double i__61772 =
                                                            ((x10_double) (i__61799));
                                                          x10_double j__61773 =
                                                            ((x10_double) (j__61801));
                                                          x10_double k__61774 =
                                                            ((x10_double) (k__61803));
                                                          
                                                          //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                          alloc__61786->FMGL(i) =
                                                            i__61772;
                                                          alloc__61786->FMGL(j) =
                                                            j__61773;
                                                          alloc__61786->FMGL(k) =
                                                            k__61774;
                                                          alloc__61786;
                                                      }))
                                                      )->FMGL(phi);
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__61780 = i__61799;
                            x10_long i__61781 = j__61801;
                            x10_long i__61782 = k__61803;
                            ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* v__61783 =
                              ::au::edu::anu::mm::Expansion::genComplexK(
                                phi__61785, ((x10_long)(numTerms)));
                            ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__61784;
                            
                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            complexK->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__set(
                              (__extension__ ({
                                  
                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__61776 = i__61780;
                                  x10_long i__61777 = i__61781;
                                  x10_long i__61778 = i__61782;
                                  x10_long ret__61779;
                                  
                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long offset__61775 =
                                    ((i__61776) - (complexK->FMGL(layout_min0)));
                                  
                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61775 = ((((((offset__61775) * (complexK->FMGL(layout_stride1)))) + (i__61777))) - (complexK->FMGL(layout_min1)));
                                  
                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__61775 = ((((((offset__61775) * (::x10aux::nullCheck(complexK->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((x10_long)0ll))))) + (i__61778))) - (::x10aux::nullCheck(complexK->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)1ll))));
                                  
                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  ret__61779 = offset__61775;
                                  ret__61779;
                              }))
                              , v__61783);
                            
                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61784 = v__61783;
                            
                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__61784;
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
