/*************************************************/
/* START of WignerRotationMatrix */
#include <au/edu/anu/mm/WignerRotationMatrix.h>

#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/LongRange.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/mm/Factorial.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::x10::regionarray::Array<x10_double>* au::edu::anu::mm::WignerRotationMatrix::getDmk(
  x10_double theta, x10_long l) {
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if (((::fabs(theta)) > (6.283185307179586))) {
        
        //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::au::edu::anu::mm::WignerRotationMatrix_Strings::sl__73388))));
    }
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    ::x10::regionarray::Array<x10_double>* D =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__72727 = (__extension__ ({
        
        //#line 211 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__72728 = ::x10::lang::LongRange::_make((-(l)), l);
        ::x10::lang::LongRange r__72729 = ::x10::lang::LongRange::_make((-(l)), l);
        ::x10::regionarray::Region::makeRectangular(r__72728, r__72729);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(region) = (reg__72727);
    D->FMGL(rank) = ::x10aux::nullCheck(reg__72727)->FMGL(rank);
    D->FMGL(rect) = ::x10aux::nullCheck(reg__72727)->FMGL(rect);
    D->FMGL(zeroBased) = ::x10aux::nullCheck(reg__72727)->FMGL(zeroBased);
    D->FMGL(rail) = ::x10aux::nullCheck(reg__72727)->FMGL(rail);
    D->FMGL(size) = ::x10aux::nullCheck(reg__72727)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__72615 =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__72615)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__72727);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_min0) = crh__72615->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_stride1) = crh__72615->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_min1) = crh__72615->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout) = crh__72615->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__72616 = crh__72615->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__72616);
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if ((::x10aux::struct_equals(theta, 0.0))) {
        
        //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        x10_long i__60596min__72621 = (-(l));
        x10_long i__60596max__72622 = l;
        {
            x10_long i__72623;
            for (i__72623 = i__60596min__72621; ((i__72623) <= (i__60596max__72622));
                 i__72623 = ((i__72623) + (((x10_long)1ll))))
            {
                x10_long k__72624 = i__72623;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__72618 = k__72624;
                x10_long i__72619 = k__72624;
                x10_double ret__72620;
                
                //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__72617 = ((i__72618) - (D->FMGL(layout_min0)));
                
                //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__72617 = ((((((offset__72617) * (D->FMGL(layout_stride1)))) + (i__72619))) - (D->FMGL(layout_min1)));
                
                //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  offset__72617, 1.0);
                
                //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__72620 = 1.0;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__72620;
            }
        }
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        return D;
        
    } else 
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if ((::x10aux::struct_equals(theta, 3.141592653589793)))
    {
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        x10_long i__60614min__72630 = (-(l));
        x10_long i__60614max__72631 = l;
        {
            x10_long i__72632;
            for (i__72632 = i__60614min__72630; ((i__72632) <= (i__60614max__72631));
                 i__72632 = ((i__72632) + (((x10_long)1ll))))
            {
                x10_long k__72633 = i__72632;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__72626 = k__72633;
                x10_long i__72627 = (-(k__72633));
                x10_double v__72628 = ::x10::lang::Math::pow(
                                        ((x10_long)-1ll),
                                        ((l) + (k__72633)));
                x10_double ret__72629;
                
                //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__72625 = ((i__72626) - (D->FMGL(layout_min0)));
                
                //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__72625 = ((((((offset__72625) * (D->FMGL(layout_stride1)))) + (i__72627))) - (D->FMGL(layout_min1)));
                
                //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  offset__72625, v__72628);
                
                //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__72629 = v__72628;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__72629;
            }
        }
        
        //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        return D;
        
    }
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double thetaPrime = theta;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if (((theta) >= (((3.141592653589793) / (2.0))))) {
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        if (((theta) < (3.141592653589793))) {
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            thetaPrime = ((3.141592653589793) - (theta));
        } else 
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        if ((((theta) > (3.141592653589793)) && ((theta) < (((9.42477796076938) / (2.0))))))
        {
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            thetaPrime = ((theta) - (3.141592653589793));
        }
        
    }
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double cosTheta = ::x10::lang::MathNatives::cos(thetaPrime);
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double sinTheta = ::x10::lang::MathNatives::sin(thetaPrime);
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double gk0 = 1.0;
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__60632max__72730 = l;
    {
        x10_long i__72731;
        for (i__72731 = ((x10_long)1ll); ((i__72731) <= (i__60632max__72730));
             i__72731 = ((i__72731) + (((x10_long)1ll))))
        {
            x10_long k__72732 = i__72731;
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            gk0 = ((::x10::lang::MathNatives::sqrt(((((((2.0) * (((x10_double) (k__72732))))) - (((x10_double) (((x10_long)1ll)))))) / (((2.0) * (((x10_double) (k__72732)))))))) * (gk0));
        }
    }
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double gl0 = gk0;
    
    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long i__72733 = l;
    x10_double v__72734 = ((((::x10::lang::Math::pow(-1.0,
                                                     l)) * (gl0))) * (::x10::lang::Math::pow(
                                                                        sinTheta,
                                                                        l)));
    x10_double ret__72735;
    
    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long offset__72634 = ((((x10_long)0ll)) - (D->FMGL(layout_min0)));
    
    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    offset__72634 = ((((((offset__72634) * (D->FMGL(layout_stride1)))) + (i__72733))) - (D->FMGL(layout_min1)));
    
    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(offset__72634,
                                                       v__72734);
    
    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ret__72735 = v__72734;
    
    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ret__72735;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double glm = gl0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double sign = ::x10::lang::Math::pow(((x10_long)-1ll),
                                             l);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__60650max__72736 = l;
    {
        x10_long i__72737;
        for (i__72737 = ((x10_long)1ll); ((i__72737) <= (i__60650max__72736));
             i__72737 = ((i__72737) + (((x10_long)1ll))))
        {
            x10_long m__72738 = i__72737;
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            glm = ((::x10::lang::MathNatives::sqrt(((((x10_double) (((((l) - (m__72738))) + (((x10_long)1ll)))))) / (((x10_double) (((l) + (m__72738)))))))) * (glm));
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = ((sign) * (-1.0));
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__72636 = m__72738;
            x10_long i__72637 = l;
            x10_double v__72638 = ((((((sign) * (glm))) * (::x10::lang::Math::pow(
                                                             ((1.0) + (cosTheta)),
                                                             m__72738)))) * (::x10::lang::Math::pow(
                                                                               sinTheta,
                                                                               ((l) - (m__72738)))));
            x10_double ret__72639;
            
            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__72635 = ((i__72636) - (D->FMGL(layout_min0)));
            
            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__72635 = ((((((offset__72635) * (D->FMGL(layout_stride1)))) + (i__72637))) - (D->FMGL(layout_min1)));
            
            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
              offset__72635, v__72638);
            
            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__72639 = v__72638;
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__72639;
        }
    }
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    {
        x10_long k;
        for (k = l; ((k) > ((-(l)))); k = ((k) - (((x10_long)1ll))))
        {
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__72642 = l;
            x10_long i__72643 = ((k) - (((x10_long)1ll)));
            x10_double v__72644 = ((((((((((x10_double) (((l) + (k))))) / (::x10::lang::MathNatives::sqrt(((((((x10_double) (l))) * (((((x10_double) (l))) + (1.0))))) - (((((x10_double) (k))) * (((((x10_double) (k))) - (1.0)))))))))) * (sinTheta))) / (((1.0) + (cosTheta))))) * ((__extension__ ({
                
                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__72645 = l;
                x10_long i__72646 = k;
                x10_double ret__72647;
                
                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__72640 = ((i__72645) - (D->FMGL(layout_min0)));
                
                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__72640 = ((((((offset__72640) * (D->FMGL(layout_stride1)))) + (i__72646))) - (D->FMGL(layout_min1)));
                
                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__72647 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                               offset__72640);
                ret__72647;
            }))
            ));
            x10_double ret__72648;
            
            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__72641 = ((i__72642) - (D->FMGL(layout_min0)));
            
            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__72641 = ((((((offset__72641) * (D->FMGL(layout_stride1)))) + (i__72643))) - (D->FMGL(layout_min1)));
            
            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
              offset__72641, v__72644);
            
            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__72648 = v__72644;
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__72648;
        }
    }
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    {
        x10_long m;
        for (m = ((l) - (((x10_long)1ll))); ((m) >= (((x10_long)0ll)));
             m = ((m) - (((x10_long)1ll)))) {
            
            //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            {
                x10_long k;
                for (k = l; ((k) > ((-(l)))); k = ((k) - (((x10_long)1ll))))
                {
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long i__72652 = m;
                    x10_long i__72653 = ((k) - (((x10_long)1ll)));
                    x10_double v__72654 = ((((::x10::lang::MathNatives::sqrt(((((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((m) * (((m) + (((x10_long)1ll)))))))))) / (((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((k) * (((k) - (((x10_long)1ll))))))))))))) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__72655 = ((m) + (((x10_long)1ll)));
                        x10_long i__72656 = k;
                        x10_double ret__72657;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__72649 = ((i__72655) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__72649 = ((((((offset__72649) * (D->FMGL(layout_stride1)))) + (i__72656))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__72657 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__72649);
                        ret__72657;
                    }))
                    ))) + (((((((((((x10_double) (((m) + (k))))) / (::x10::lang::MathNatives::sqrt(((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((k) * (((k) - (((x10_long)1ll))))))))))))) * (sinTheta))) / (((1.0) + (cosTheta))))) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__72658 = m;
                        x10_long i__72659 = k;
                        x10_double ret__72660;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__72650 = ((i__72658) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__72650 = ((((((offset__72650) * (D->FMGL(layout_stride1)))) + (i__72659))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__72660 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__72650);
                        ret__72660;
                    }))
                    ))));
                    x10_double ret__72661;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__72651 = ((i__72652) - (D->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__72651 = ((((((offset__72651) * (D->FMGL(layout_stride1)))) + (i__72653))) - (D->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__72651, v__72654);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__72661 = v__72654;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__72661;
                }
            }
            
        }
    }
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__60686min__72739 = (-(l));
    {
        x10_long i__72740;
        for (i__72740 = i__60686min__72739; ((i__72740) <= (((x10_long)-1ll)));
             i__72740 = ((i__72740) + (((x10_long)1ll))))
        {
            x10_long m__72741 = i__72740;
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = ::x10::lang::Math::pow(((x10_long)-1ll),
                                          ((m__72741) - (l)));
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__60668min__72671 = (-(l));
            x10_long i__60668max__72672 = l;
            {
                x10_long i__72673;
                for (i__72673 = i__60668min__72671; ((i__72673) <= (i__60668max__72672));
                     i__72673 = ((i__72673) + (((x10_long)1ll))))
                {
                    x10_long k__72674 = i__72673;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long i__72664 = m__72741;
                    x10_long i__72665 = k__72674;
                    x10_double v__72666 = ((sign) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__72667 = (-(m__72741));
                        x10_long i__72668 = (-(k__72674));
                        x10_double ret__72669;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__72662 = ((i__72667) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__72662 = ((((((offset__72662) * (D->FMGL(layout_stride1)))) + (i__72668))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__72669 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__72662);
                        ret__72669;
                    }))
                    ));
                    x10_double ret__72670;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__72663 = ((i__72664) - (D->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__72663 = ((((((offset__72663) * (D->FMGL(layout_stride1)))) + (i__72665))) - (D->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__72663, v__72666);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__72670 = v__72666;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__72670;
                    
                    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (((x10_double) (((x10_long)-1ll)))));
                }
            }
            
        }
    }
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if (((theta) >= (((3.141592653589793) / (2.0))))) {
        
        //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        if (((theta) < (3.141592653589793))) {
            
            //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = -1.0;
            
            //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__60722min__72697 = (-(l));
            x10_long i__60722max__72698 = l;
            {
                x10_long i__72699;
                for (i__72699 = i__60722min__72697; ((i__72699) <= (i__60722max__72698));
                     i__72699 = ((i__72699) + (((x10_long)1ll))))
                {
                    x10_long m__72700 = i__72699;
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (-1.0));
                    
                    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    x10_long i__60704min__72694 = (-(l));
                    {
                        x10_long i__72695;
                        for (i__72695 = i__60704min__72694;
                             ((i__72695) <= (((x10_long)0ll)));
                             i__72695 = ((i__72695) + (((x10_long)1ll))))
                        {
                            x10_long k__72696 = i__72695;
                            
                            //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                            x10_double tmp__72690 = (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72691 = m__72700;
                                x10_long i__72692 = k__72696;
                                x10_double ret__72693;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72675 = ((i__72691) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72675 = ((((((offset__72675) * (D->FMGL(layout_stride1)))) + (i__72692))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72693 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72675);
                                ret__72693;
                            }))
                            ;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__72679 = m__72700;
                            x10_long i__72680 = k__72696;
                            x10_double v__72681 = ((sign) * ((__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72682 = m__72700;
                                x10_long i__72683 = (-(k__72696));
                                x10_double ret__72684;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72676 = ((i__72682) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72676 = ((((((offset__72676) * (D->FMGL(layout_stride1)))) + (i__72683))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72684 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72676);
                                ret__72684;
                            }))
                            ));
                            x10_double ret__72685;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__72677 = ((i__72679) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__72677 = ((((((offset__72677) * (D->FMGL(layout_stride1)))) + (i__72680))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__72677, v__72681);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72685 = v__72681;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72685;
                            x10_long i__72686 = m__72700;
                            x10_long i__72687 = (-(k__72696));
                            x10_double v__72688 = ((sign) * (tmp__72690));
                            x10_double ret__72689;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__72678 = ((i__72686) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__72678 = ((((((offset__72678) * (D->FMGL(layout_stride1)))) + (i__72687))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__72678, v__72688);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72689 = v__72688;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72689;
                        }
                    }
                    
                }
            }
            
        } else 
        //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        if ((((theta) > (3.141592653589793)) && ((theta) < (((9.42477796076938) / (2.0))))))
        {
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = -1.0;
            
            //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__60758min__72724 = (-(l));
            {
                x10_long i__72725;
                for (i__72725 = i__60758min__72724; ((i__72725) <= (((x10_long)0ll)));
                     i__72725 = ((i__72725) + (((x10_long)1ll))))
                {
                    x10_long m__72726 = i__72725;
                    
                    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (-1.0));
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    x10_long i__60740min__72720 = (-(l));
                    x10_long i__60740max__72721 = l;
                    {
                        x10_long i__72722;
                        for (i__72722 = i__60740min__72720;
                             ((i__72722) <= (i__60740max__72721));
                             i__72722 = ((i__72722) + (((x10_long)1ll))))
                        {
                            x10_long k__72723 = i__72722;
                            
                            //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                            x10_double tmp__72716 = (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72717 = m__72726;
                                x10_long i__72718 = k__72723;
                                x10_double ret__72719;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72701 = ((i__72717) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72701 = ((((((offset__72701) * (D->FMGL(layout_stride1)))) + (i__72718))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72719 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72701);
                                ret__72719;
                            }))
                            ;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__72705 = m__72726;
                            x10_long i__72706 = k__72723;
                            x10_double v__72707 = ((sign) * ((__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72708 = (-(m__72726));
                                x10_long i__72709 = k__72723;
                                x10_double ret__72710;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72702 = ((i__72708) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72702 = ((((((offset__72702) * (D->FMGL(layout_stride1)))) + (i__72709))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72710 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72702);
                                ret__72710;
                            }))
                            ));
                            x10_double ret__72711;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__72703 = ((i__72705) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__72703 = ((((((offset__72703) * (D->FMGL(layout_stride1)))) + (i__72706))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__72703, v__72707);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72711 = v__72707;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72711;
                            x10_long i__72712 = (-(m__72726));
                            x10_long i__72713 = k__72723;
                            x10_double v__72714 = ((sign) * (tmp__72716));
                            x10_double ret__72715;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__72704 = ((i__72712) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__72704 = ((((((offset__72704) * (D->FMGL(layout_stride1)))) + (i__72713))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__72704, v__72714);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72715 = v__72714;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__72715;
                        }
                    }
                    
                }
            }
            
        }
        
    }
    
    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    return D;
    
}

//#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
  au::edu::anu::mm::WignerRotationMatrix::getCollection(x10_double theta,
                                                        x10_long numTerms) {
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* collection =
      ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::_make(((x10_long)2ll));
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    {
        x10_long i__72746;
        for (i__72746 = ((x10_long)0ll); ((i__72746) <= (((x10_long)1ll)));
             i__72746 = ((i__72746) + (((x10_long)1ll))))
        {
            x10_long r__72747 = i__72746;
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* R__72745 =
              ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::_make(((numTerms) + (((x10_long)1ll))));
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__60776max__72742 = numTerms;
            {
                x10_long i__72743;
                for (i__72743 = ((x10_long)0ll); ((i__72743) <= (i__60776max__72742));
                     i__72743 = ((i__72743) + (((x10_long)1ll))))
                {
                    x10_long l__72744 = i__72743;
                    
                    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    R__72745->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__set(
                      l__72744, ::au::edu::anu::mm::WignerRotationMatrix::getDmk(
                                  (::x10aux::struct_equals(r__72747,
                                                           ((x10_long)0ll)))
                                    ? (theta) : (((((((x10_double) (((x10_long)2ll)))) * (3.141592653589793))) - (theta))),
                                  l__72744));
                }
            }
            
            //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            collection->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__set(
              r__72747, R__72745);
        }
    }
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    return collection;
    
}

//#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
  au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
  x10_double theta, x10_long numTerms, x10_int op) {
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* collection =
      ::au::edu::anu::mm::WignerRotationMatrix::getCollection(
        theta, numTerms);
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double F_mk;
    
    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    {
        x10_long i__72774;
        for (i__72774 = ((x10_long)0ll); ((i__72774) <= (((x10_long)1ll)));
             i__72774 = ((i__72774) + (((x10_long)1ll))))
        {
            x10_long rev__72775 = i__72774;
            
            //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__60852max__72771 = numTerms;
            {
                x10_long i__72772;
                for (i__72772 = ((x10_long)0ll); ((i__72772) <= (i__60852max__72771));
                     i__72772 = ((i__72772) + (((x10_long)1ll))))
                {
                    x10_long l__72773 = i__72772;
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    ::x10::regionarray::Array<x10_double>* R__72770 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(collection)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                            rev__72775))->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                        l__72773);
                    
                    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    ::x10::regionarray::Region* p__72761 =
                      ::x10aux::nullCheck(R__72770)->FMGL(region);
                    x10_long k__60813min__72762 = p__72761->min(
                                                    ((x10_long)1ll));
                    x10_long k__60813max__72763 = p__72761->max(
                                                    ((x10_long)1ll));
                    x10_long m__60832min__72764 = p__72761->min(
                                                    ((x10_long)0ll));
                    x10_long m__60832max__72765 = p__72761->max(
                                                    ((x10_long)0ll));
                    {
                        x10_long m__72766;
                        for (m__72766 = m__60832min__72764;
                             ((m__72766) <= (m__60832max__72765));
                             m__72766 = ((m__72766) + (((x10_long)1ll))))
                        {
                            x10_long m__72767 = m__72766;
                            {
                                x10_long k__72768;
                                for (k__72768 = k__60813min__72762;
                                     ((k__72768) <= (k__60813max__72763));
                                     k__72768 = ((k__72768) + (((x10_long)1ll))))
                                {
                                    x10_long k__72769 = k__72768;
                                    
                                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                    F_mk = ::x10::lang::MathNatives::sqrt((((((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__72757 =
                                          ((l__72773) - (k__72769));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__72757);
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__72758 =
                                          ((l__72773) + (k__72769));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__72758);
                                    }))
                                    ))) / ((((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__72759 =
                                          ((l__72773) - (m__72767));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__72759);
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__72760 =
                                          ((l__72773) + (m__72767));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__72760);
                                    }))
                                    )))));
                                    
                                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                    if (((::x10aux::struct_equals(op,
                                                                  ((x10_int)2))) ||
                                        ((::x10aux::struct_equals(rev__72775,
                                                                  ((x10_long)1ll))) &&
                                        (::x10aux::struct_equals(op,
                                                                 ((x10_int)-1))))))
                                    {
                                        F_mk = ((((x10_double) (((x10_long)1ll)))) / (F_mk));
                                    }
                                    
                                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__72750 = m__72767;
                                    x10_long i__72751 = k__72769;
                                    x10_double v__72752 =
                                      (((__extension__ ({
                                        
                                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__72753 =
                                          m__72767;
                                        x10_long i__72754 =
                                          k__72769;
                                        x10_double ret__72755;
                                        
                                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long offset__72748 =
                                          ((i__72753) - (::x10aux::nullCheck(R__72770)->FMGL(layout_min0)));
                                        
                                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        offset__72748 = ((((((offset__72748) * (::x10aux::nullCheck(R__72770)->FMGL(layout_stride1)))) + (i__72754))) - (::x10aux::nullCheck(R__72770)->FMGL(layout_min1)));
                                        
                                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__72755 = ::x10aux::nullCheck(R__72770)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                       offset__72748);
                                        ret__72755;
                                    }))
                                    ) * (F_mk));
                                    x10_double ret__72756;
                                    
                                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long offset__72749 =
                                      ((i__72750) - (::x10aux::nullCheck(R__72770)->FMGL(layout_min0)));
                                    
                                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    offset__72749 = ((((((offset__72749) * (::x10aux::nullCheck(R__72770)->FMGL(layout_stride1)))) + (i__72751))) - (::x10aux::nullCheck(R__72770)->FMGL(layout_min1)));
                                    
                                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ::x10aux::nullCheck(R__72770)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                      offset__72749, v__72752);
                                    
                                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__72756 = v__72752;
                                    
                                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__72756;
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    return collection;
    
}

//#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
  au::edu::anu::mm::WignerRotationMatrix::getACollection(
  x10_double theta, x10_long numTerms) {
    return ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
             theta, numTerms, ((x10_int)0));
    
}

//#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
  au::edu::anu::mm::WignerRotationMatrix::getBCollection(
  x10_double theta, x10_long numTerms) {
    return ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
             theta, numTerms, ((x10_int)-1));
    
}

//#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
  au::edu::anu::mm::WignerRotationMatrix::getCCollection(
  x10_double theta, x10_long numTerms) {
    return ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
             theta, numTerms, ((x10_int)2));
    
}

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
::au::edu::anu::mm::WignerRotationMatrix* au::edu::anu::mm::WignerRotationMatrix::au__edu__anu__mm__WignerRotationMatrix____this__au__edu__anu__mm__WignerRotationMatrix(
  ) {
    return this;
    
}
void au::edu::anu::mm::WignerRotationMatrix::_constructor(
  ) {
    ::au::edu::anu::mm::WignerRotationMatrix* this__72776 =
      this;
    
}
::au::edu::anu::mm::WignerRotationMatrix* au::edu::anu::mm::WignerRotationMatrix::_make(
  ) {
    ::au::edu::anu::mm::WignerRotationMatrix* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::WignerRotationMatrix>()) ::au::edu::anu::mm::WignerRotationMatrix();
    this_->_constructor();
    return this_;
}


void au::edu::anu::mm::WignerRotationMatrix::__fieldInitializers_au_edu_anu_mm_WignerRotationMatrix(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::WignerRotationMatrix::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::WignerRotationMatrix::_deserializer);

void au::edu::anu::mm::WignerRotationMatrix::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::mm::WignerRotationMatrix::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::WignerRotationMatrix* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::WignerRotationMatrix>()) ::au::edu::anu::mm::WignerRotationMatrix();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::WignerRotationMatrix::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::mm::WignerRotationMatrix::rtt;
void au::edu::anu::mm::WignerRotationMatrix::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.WignerRotationMatrix",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::WignerRotationMatrix_Strings::sl__73388("abs(x) > 2*PI: Wigner rotation matrix is only defined on [0..2*PI].");

/* END of WignerRotationMatrix */
/*************************************************/
