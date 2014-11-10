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
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::au::edu::anu::mm::WignerRotationMatrix_Strings::sl__68606))));
    }
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    ::x10::regionarray::Array<x10_double>* D =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__67973 = (__extension__ ({
        
        //#line 211 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__67974 = ::x10::lang::LongRange::_make((-(l)), l);
        ::x10::lang::LongRange r__67975 = ::x10::lang::LongRange::_make((-(l)), l);
        ::x10::regionarray::Region::makeRectangular(r__67974, r__67975);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(region) = (reg__67973);
    D->FMGL(rank) = ::x10aux::nullCheck(reg__67973)->FMGL(rank);
    D->FMGL(rect) = ::x10aux::nullCheck(reg__67973)->FMGL(rect);
    D->FMGL(zeroBased) = ::x10aux::nullCheck(reg__67973)->FMGL(zeroBased);
    D->FMGL(rail) = ::x10aux::nullCheck(reg__67973)->FMGL(rail);
    D->FMGL(size) = ::x10aux::nullCheck(reg__67973)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__67861 =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__67861)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__67973);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_min0) = crh__67861->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_stride1) = crh__67861->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_min1) = crh__67861->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout) = crh__67861->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__67862 = crh__67861->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__67862);
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if ((::x10aux::struct_equals(theta, 0.0))) {
        
        //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        x10_long i__58965min__67867 = (-(l));
        x10_long i__58965max__67868 = l;
        {
            x10_long i__67869;
            for (i__67869 = i__58965min__67867; ((i__67869) <= (i__58965max__67868));
                 i__67869 = ((i__67869) + (((x10_long)1ll))))
            {
                x10_long k__67870 = i__67869;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__67864 = k__67870;
                x10_long i__67865 = k__67870;
                x10_double ret__67866;
                
                //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__67863 = ((i__67864) - (D->FMGL(layout_min0)));
                
                //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__67863 = ((((((offset__67863) * (D->FMGL(layout_stride1)))) + (i__67865))) - (D->FMGL(layout_min1)));
                
                //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  offset__67863, 1.0);
                
                //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__67866 = 1.0;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__67866;
            }
        }
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        return D;
        
    } else 
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if ((::x10aux::struct_equals(theta, 3.141592653589793)))
    {
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        x10_long i__58983min__67876 = (-(l));
        x10_long i__58983max__67877 = l;
        {
            x10_long i__67878;
            for (i__67878 = i__58983min__67876; ((i__67878) <= (i__58983max__67877));
                 i__67878 = ((i__67878) + (((x10_long)1ll))))
            {
                x10_long k__67879 = i__67878;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__67872 = k__67879;
                x10_long i__67873 = (-(k__67879));
                x10_double v__67874 = ::x10::lang::Math::pow(
                                        ((x10_long)-1ll),
                                        ((l) + (k__67879)));
                x10_double ret__67875;
                
                //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__67871 = ((i__67872) - (D->FMGL(layout_min0)));
                
                //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__67871 = ((((((offset__67871) * (D->FMGL(layout_stride1)))) + (i__67873))) - (D->FMGL(layout_min1)));
                
                //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  offset__67871, v__67874);
                
                //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__67875 = v__67874;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__67875;
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
    x10_long i__59001max__67976 = l;
    {
        x10_long i__67977;
        for (i__67977 = ((x10_long)1ll); ((i__67977) <= (i__59001max__67976));
             i__67977 = ((i__67977) + (((x10_long)1ll))))
        {
            x10_long k__67978 = i__67977;
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            gk0 = ((::x10::lang::MathNatives::sqrt(((((((2.0) * (((x10_double) (k__67978))))) - (((x10_double) (((x10_long)1ll)))))) / (((2.0) * (((x10_double) (k__67978)))))))) * (gk0));
        }
    }
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double gl0 = gk0;
    
    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long i__67979 = l;
    x10_double v__67980 = ((((::x10::lang::Math::pow(-1.0,
                                                     l)) * (gl0))) * (::x10::lang::Math::pow(
                                                                        sinTheta,
                                                                        l)));
    x10_double ret__67981;
    
    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long offset__67880 = ((((x10_long)0ll)) - (D->FMGL(layout_min0)));
    
    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    offset__67880 = ((((((offset__67880) * (D->FMGL(layout_stride1)))) + (i__67979))) - (D->FMGL(layout_min1)));
    
    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(offset__67880,
                                                       v__67980);
    
    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ret__67981 = v__67980;
    
    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ret__67981;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double glm = gl0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double sign = ::x10::lang::Math::pow(((x10_long)-1ll),
                                             l);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__59019max__67982 = l;
    {
        x10_long i__67983;
        for (i__67983 = ((x10_long)1ll); ((i__67983) <= (i__59019max__67982));
             i__67983 = ((i__67983) + (((x10_long)1ll))))
        {
            x10_long m__67984 = i__67983;
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            glm = ((::x10::lang::MathNatives::sqrt(((((x10_double) (((((l) - (m__67984))) + (((x10_long)1ll)))))) / (((x10_double) (((l) + (m__67984)))))))) * (glm));
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = ((sign) * (-1.0));
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__67882 = m__67984;
            x10_long i__67883 = l;
            x10_double v__67884 = ((((((sign) * (glm))) * (::x10::lang::Math::pow(
                                                             ((1.0) + (cosTheta)),
                                                             m__67984)))) * (::x10::lang::Math::pow(
                                                                               sinTheta,
                                                                               ((l) - (m__67984)))));
            x10_double ret__67885;
            
            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__67881 = ((i__67882) - (D->FMGL(layout_min0)));
            
            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__67881 = ((((((offset__67881) * (D->FMGL(layout_stride1)))) + (i__67883))) - (D->FMGL(layout_min1)));
            
            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
              offset__67881, v__67884);
            
            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__67885 = v__67884;
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__67885;
        }
    }
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    {
        x10_long k;
        for (k = l; ((k) > ((-(l)))); k = ((k) - (((x10_long)1ll))))
        {
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__67888 = l;
            x10_long i__67889 = ((k) - (((x10_long)1ll)));
            x10_double v__67890 = ((((((((((x10_double) (((l) + (k))))) / (::x10::lang::MathNatives::sqrt(((((((x10_double) (l))) * (((((x10_double) (l))) + (1.0))))) - (((((x10_double) (k))) * (((((x10_double) (k))) - (1.0)))))))))) * (sinTheta))) / (((1.0) + (cosTheta))))) * ((__extension__ ({
                
                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__67891 = l;
                x10_long i__67892 = k;
                x10_double ret__67893;
                
                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__67886 = ((i__67891) - (D->FMGL(layout_min0)));
                
                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__67886 = ((((((offset__67886) * (D->FMGL(layout_stride1)))) + (i__67892))) - (D->FMGL(layout_min1)));
                
                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__67893 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                               offset__67886);
                ret__67893;
            }))
            ));
            x10_double ret__67894;
            
            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__67887 = ((i__67888) - (D->FMGL(layout_min0)));
            
            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__67887 = ((((((offset__67887) * (D->FMGL(layout_stride1)))) + (i__67889))) - (D->FMGL(layout_min1)));
            
            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
              offset__67887, v__67890);
            
            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__67894 = v__67890;
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__67894;
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
                    x10_long i__67898 = m;
                    x10_long i__67899 = ((k) - (((x10_long)1ll)));
                    x10_double v__67900 = ((((::x10::lang::MathNatives::sqrt(((((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((m) * (((m) + (((x10_long)1ll)))))))))) / (((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((k) * (((k) - (((x10_long)1ll))))))))))))) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__67901 = ((m) + (((x10_long)1ll)));
                        x10_long i__67902 = k;
                        x10_double ret__67903;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__67895 = ((i__67901) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__67895 = ((((((offset__67895) * (D->FMGL(layout_stride1)))) + (i__67902))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__67903 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__67895);
                        ret__67903;
                    }))
                    ))) + (((((((((((x10_double) (((m) + (k))))) / (::x10::lang::MathNatives::sqrt(((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((k) * (((k) - (((x10_long)1ll))))))))))))) * (sinTheta))) / (((1.0) + (cosTheta))))) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__67904 = m;
                        x10_long i__67905 = k;
                        x10_double ret__67906;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__67896 = ((i__67904) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__67896 = ((((((offset__67896) * (D->FMGL(layout_stride1)))) + (i__67905))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__67906 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__67896);
                        ret__67906;
                    }))
                    ))));
                    x10_double ret__67907;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__67897 = ((i__67898) - (D->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__67897 = ((((((offset__67897) * (D->FMGL(layout_stride1)))) + (i__67899))) - (D->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__67897, v__67900);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__67907 = v__67900;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__67907;
                }
            }
            
        }
    }
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__59055min__67985 = (-(l));
    {
        x10_long i__67986;
        for (i__67986 = i__59055min__67985; ((i__67986) <= (((x10_long)-1ll)));
             i__67986 = ((i__67986) + (((x10_long)1ll))))
        {
            x10_long m__67987 = i__67986;
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = ::x10::lang::Math::pow(((x10_long)-1ll),
                                          ((m__67987) - (l)));
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__59037min__67917 = (-(l));
            x10_long i__59037max__67918 = l;
            {
                x10_long i__67919;
                for (i__67919 = i__59037min__67917; ((i__67919) <= (i__59037max__67918));
                     i__67919 = ((i__67919) + (((x10_long)1ll))))
                {
                    x10_long k__67920 = i__67919;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long i__67910 = m__67987;
                    x10_long i__67911 = k__67920;
                    x10_double v__67912 = ((sign) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__67913 = (-(m__67987));
                        x10_long i__67914 = (-(k__67920));
                        x10_double ret__67915;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__67908 = ((i__67913) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__67908 = ((((((offset__67908) * (D->FMGL(layout_stride1)))) + (i__67914))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__67915 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__67908);
                        ret__67915;
                    }))
                    ));
                    x10_double ret__67916;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__67909 = ((i__67910) - (D->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__67909 = ((((((offset__67909) * (D->FMGL(layout_stride1)))) + (i__67911))) - (D->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__67909, v__67912);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__67916 = v__67912;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__67916;
                    
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
            x10_long i__59091min__67943 = (-(l));
            x10_long i__59091max__67944 = l;
            {
                x10_long i__67945;
                for (i__67945 = i__59091min__67943; ((i__67945) <= (i__59091max__67944));
                     i__67945 = ((i__67945) + (((x10_long)1ll))))
                {
                    x10_long m__67946 = i__67945;
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (-1.0));
                    
                    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    x10_long i__59073min__67940 = (-(l));
                    {
                        x10_long i__67941;
                        for (i__67941 = i__59073min__67940;
                             ((i__67941) <= (((x10_long)0ll)));
                             i__67941 = ((i__67941) + (((x10_long)1ll))))
                        {
                            x10_long k__67942 = i__67941;
                            
                            //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                            x10_double tmp__67936 = (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__67937 = m__67946;
                                x10_long i__67938 = k__67942;
                                x10_double ret__67939;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__67921 = ((i__67937) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__67921 = ((((((offset__67921) * (D->FMGL(layout_stride1)))) + (i__67938))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__67939 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__67921);
                                ret__67939;
                            }))
                            ;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__67925 = m__67946;
                            x10_long i__67926 = k__67942;
                            x10_double v__67927 = ((sign) * ((__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__67928 = m__67946;
                                x10_long i__67929 = (-(k__67942));
                                x10_double ret__67930;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__67922 = ((i__67928) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__67922 = ((((((offset__67922) * (D->FMGL(layout_stride1)))) + (i__67929))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__67930 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__67922);
                                ret__67930;
                            }))
                            ));
                            x10_double ret__67931;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__67923 = ((i__67925) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__67923 = ((((((offset__67923) * (D->FMGL(layout_stride1)))) + (i__67926))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__67923, v__67927);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67931 = v__67927;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67931;
                            x10_long i__67932 = m__67946;
                            x10_long i__67933 = (-(k__67942));
                            x10_double v__67934 = ((sign) * (tmp__67936));
                            x10_double ret__67935;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__67924 = ((i__67932) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__67924 = ((((((offset__67924) * (D->FMGL(layout_stride1)))) + (i__67933))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__67924, v__67934);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67935 = v__67934;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67935;
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
            x10_long i__59127min__67970 = (-(l));
            {
                x10_long i__67971;
                for (i__67971 = i__59127min__67970; ((i__67971) <= (((x10_long)0ll)));
                     i__67971 = ((i__67971) + (((x10_long)1ll))))
                {
                    x10_long m__67972 = i__67971;
                    
                    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (-1.0));
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    x10_long i__59109min__67966 = (-(l));
                    x10_long i__59109max__67967 = l;
                    {
                        x10_long i__67968;
                        for (i__67968 = i__59109min__67966;
                             ((i__67968) <= (i__59109max__67967));
                             i__67968 = ((i__67968) + (((x10_long)1ll))))
                        {
                            x10_long k__67969 = i__67968;
                            
                            //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                            x10_double tmp__67962 = (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__67963 = m__67972;
                                x10_long i__67964 = k__67969;
                                x10_double ret__67965;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__67947 = ((i__67963) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__67947 = ((((((offset__67947) * (D->FMGL(layout_stride1)))) + (i__67964))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__67965 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__67947);
                                ret__67965;
                            }))
                            ;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__67951 = m__67972;
                            x10_long i__67952 = k__67969;
                            x10_double v__67953 = ((sign) * ((__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__67954 = (-(m__67972));
                                x10_long i__67955 = k__67969;
                                x10_double ret__67956;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__67948 = ((i__67954) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__67948 = ((((((offset__67948) * (D->FMGL(layout_stride1)))) + (i__67955))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__67956 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__67948);
                                ret__67956;
                            }))
                            ));
                            x10_double ret__67957;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__67949 = ((i__67951) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__67949 = ((((((offset__67949) * (D->FMGL(layout_stride1)))) + (i__67952))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__67949, v__67953);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67957 = v__67953;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67957;
                            x10_long i__67958 = (-(m__67972));
                            x10_long i__67959 = k__67969;
                            x10_double v__67960 = ((sign) * (tmp__67962));
                            x10_double ret__67961;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__67950 = ((i__67958) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__67950 = ((((((offset__67950) * (D->FMGL(layout_stride1)))) + (i__67959))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__67950, v__67960);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67961 = v__67960;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__67961;
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
        x10_long i__67992;
        for (i__67992 = ((x10_long)0ll); ((i__67992) <= (((x10_long)1ll)));
             i__67992 = ((i__67992) + (((x10_long)1ll))))
        {
            x10_long r__67993 = i__67992;
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* R__67991 =
              ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::_make(((numTerms) + (((x10_long)1ll))));
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__59145max__67988 = numTerms;
            {
                x10_long i__67989;
                for (i__67989 = ((x10_long)0ll); ((i__67989) <= (i__59145max__67988));
                     i__67989 = ((i__67989) + (((x10_long)1ll))))
                {
                    x10_long l__67990 = i__67989;
                    
                    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    R__67991->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__set(
                      l__67990, ::au::edu::anu::mm::WignerRotationMatrix::getDmk(
                                  (::x10aux::struct_equals(r__67993,
                                                           ((x10_long)0ll)))
                                    ? (theta) : (((((((x10_double) (((x10_long)2ll)))) * (3.141592653589793))) - (theta))),
                                  l__67990));
                }
            }
            
            //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            collection->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__set(
              r__67993, R__67991);
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
        x10_long i__68020;
        for (i__68020 = ((x10_long)0ll); ((i__68020) <= (((x10_long)1ll)));
             i__68020 = ((i__68020) + (((x10_long)1ll))))
        {
            x10_long rev__68021 = i__68020;
            
            //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__59221max__68017 = numTerms;
            {
                x10_long i__68018;
                for (i__68018 = ((x10_long)0ll); ((i__68018) <= (i__59221max__68017));
                     i__68018 = ((i__68018) + (((x10_long)1ll))))
                {
                    x10_long l__68019 = i__68018;
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    ::x10::regionarray::Array<x10_double>* R__68016 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(collection)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                            rev__68021))->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                        l__68019);
                    
                    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    ::x10::regionarray::Region* p__68007 =
                      ::x10aux::nullCheck(R__68016)->FMGL(region);
                    x10_long k__59182min__68008 = p__68007->min(
                                                    ((x10_long)1ll));
                    x10_long k__59182max__68009 = p__68007->max(
                                                    ((x10_long)1ll));
                    x10_long m__59201min__68010 = p__68007->min(
                                                    ((x10_long)0ll));
                    x10_long m__59201max__68011 = p__68007->max(
                                                    ((x10_long)0ll));
                    {
                        x10_long m__68012;
                        for (m__68012 = m__59201min__68010;
                             ((m__68012) <= (m__59201max__68011));
                             m__68012 = ((m__68012) + (((x10_long)1ll))))
                        {
                            x10_long m__68013 = m__68012;
                            {
                                x10_long k__68014;
                                for (k__68014 = k__59182min__68008;
                                     ((k__68014) <= (k__59182max__68009));
                                     k__68014 = ((k__68014) + (((x10_long)1ll))))
                                {
                                    x10_long k__68015 = k__68014;
                                    
                                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                    F_mk = ::x10::lang::MathNatives::sqrt((((((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__68003 =
                                          ((l__68019) - (k__68015));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__68003);
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__68004 =
                                          ((l__68019) + (k__68015));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__68004);
                                    }))
                                    ))) / ((((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__68005 =
                                          ((l__68019) - (m__68013));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__68005);
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__68006 =
                                          ((l__68019) + (m__68013));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__68006);
                                    }))
                                    )))));
                                    
                                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                    if (((::x10aux::struct_equals(op,
                                                                  ((x10_int)2))) ||
                                        ((::x10aux::struct_equals(rev__68021,
                                                                  ((x10_long)1ll))) &&
                                        (::x10aux::struct_equals(op,
                                                                 ((x10_int)-1))))))
                                    {
                                        F_mk = ((((x10_double) (((x10_long)1ll)))) / (F_mk));
                                    }
                                    
                                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__67996 = m__68013;
                                    x10_long i__67997 = k__68015;
                                    x10_double v__67998 =
                                      (((__extension__ ({
                                        
                                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__67999 =
                                          m__68013;
                                        x10_long i__68000 =
                                          k__68015;
                                        x10_double ret__68001;
                                        
                                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long offset__67994 =
                                          ((i__67999) - (::x10aux::nullCheck(R__68016)->FMGL(layout_min0)));
                                        
                                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        offset__67994 = ((((((offset__67994) * (::x10aux::nullCheck(R__68016)->FMGL(layout_stride1)))) + (i__68000))) - (::x10aux::nullCheck(R__68016)->FMGL(layout_min1)));
                                        
                                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__68001 = ::x10aux::nullCheck(R__68016)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                       offset__67994);
                                        ret__68001;
                                    }))
                                    ) * (F_mk));
                                    x10_double ret__68002;
                                    
                                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long offset__67995 =
                                      ((i__67996) - (::x10aux::nullCheck(R__68016)->FMGL(layout_min0)));
                                    
                                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    offset__67995 = ((((((offset__67995) * (::x10aux::nullCheck(R__68016)->FMGL(layout_stride1)))) + (i__67997))) - (::x10aux::nullCheck(R__68016)->FMGL(layout_min1)));
                                    
                                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ::x10aux::nullCheck(R__68016)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                      offset__67995, v__67998);
                                    
                                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__68002 = v__67998;
                                    
                                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__68002;
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
    ::au::edu::anu::mm::WignerRotationMatrix* this__68022 =
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

::x10::lang::String au::edu::anu::mm::WignerRotationMatrix_Strings::sl__68606("abs(x) > 2*PI: Wigner rotation matrix is only defined on [0..2*PI].");

/* END of WignerRotationMatrix */
/*************************************************/
