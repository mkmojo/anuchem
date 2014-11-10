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
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::au::edu::anu::mm::WignerRotationMatrix_Strings::sl__48752))));
    }
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    ::x10::regionarray::Array<x10_double>* D =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
    
    //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Region* reg__48327 = (__extension__ ({
        
        //#line 211 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__48328 = ::x10::lang::LongRange::_make((-(l)), l);
        ::x10::lang::LongRange r__48329 = ::x10::lang::LongRange::_make((-(l)), l);
        ::x10::regionarray::Region::makeRectangular(r__48328, r__48329);
    }))
    ;
    
    //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(region) = (reg__48327);
    D->FMGL(rank) = ::x10aux::nullCheck(reg__48327)->FMGL(rank);
    D->FMGL(rect) = ::x10aux::nullCheck(reg__48327)->FMGL(rect);
    D->FMGL(zeroBased) = ::x10aux::nullCheck(reg__48327)->FMGL(zeroBased);
    D->FMGL(rail) = ::x10aux::nullCheck(reg__48327)->FMGL(rail);
    D->FMGL(size) = ::x10aux::nullCheck(reg__48327)->size();
    
    //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__48215 =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__48215)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__48327);
    
    //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_min0) = crh__48215->FMGL(min0);
    
    //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_stride1) = crh__48215->FMGL(stride1);
    
    //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout_min1) = crh__48215->FMGL(min1);
    
    //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(layout) = crh__48215->FMGL(layout);
    
    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long n__48216 = crh__48215->FMGL(size);
    
    //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(n__48216);
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if ((::x10aux::struct_equals(theta, 0.0))) {
        
        //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        x10_long i__26247min__48221 = (-(l));
        x10_long i__26247max__48222 = l;
        {
            x10_long i__48223;
            for (i__48223 = i__26247min__48221; ((i__48223) <= (i__26247max__48222));
                 i__48223 = ((i__48223) + (((x10_long)1ll))))
            {
                x10_long k__48224 = i__48223;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__48218 = k__48224;
                x10_long i__48219 = k__48224;
                x10_double ret__48220;
                
                //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__48217 = ((i__48218) - (D->FMGL(layout_min0)));
                
                //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__48217 = ((((((offset__48217) * (D->FMGL(layout_stride1)))) + (i__48219))) - (D->FMGL(layout_min1)));
                
                //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  offset__48217, 1.0);
                
                //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__48220 = 1.0;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__48220;
            }
        }
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        return D;
        
    } else 
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    if ((::x10aux::struct_equals(theta, 3.141592653589793)))
    {
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
        x10_long i__26265min__48230 = (-(l));
        x10_long i__26265max__48231 = l;
        {
            x10_long i__48232;
            for (i__48232 = i__26265min__48230; ((i__48232) <= (i__26265max__48231));
                 i__48232 = ((i__48232) + (((x10_long)1ll))))
            {
                x10_long k__48233 = i__48232;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__48226 = k__48233;
                x10_long i__48227 = (-(k__48233));
                x10_double v__48228 = ::x10::lang::Math::pow(
                                        ((x10_long)-1ll),
                                        ((l) + (k__48233)));
                x10_double ret__48229;
                
                //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__48225 = ((i__48226) - (D->FMGL(layout_min0)));
                
                //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__48225 = ((((((offset__48225) * (D->FMGL(layout_stride1)))) + (i__48227))) - (D->FMGL(layout_min1)));
                
                //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  offset__48225, v__48228);
                
                //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__48229 = v__48228;
                
                //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__48229;
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
    x10_long i__26283max__48330 = l;
    {
        x10_long i__48331;
        for (i__48331 = ((x10_long)1ll); ((i__48331) <= (i__26283max__48330));
             i__48331 = ((i__48331) + (((x10_long)1ll))))
        {
            x10_long k__48332 = i__48331;
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            gk0 = ((::x10::lang::MathNatives::sqrt(((((((2.0) * (((x10_double) (k__48332))))) - (((x10_double) (((x10_long)1ll)))))) / (((2.0) * (((x10_double) (k__48332)))))))) * (gk0));
        }
    }
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double gl0 = gk0;
    
    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long i__48333 = l;
    x10_double v__48334 = ((((::x10::lang::Math::pow(-1.0,
                                                     l)) * (gl0))) * (::x10::lang::Math::pow(
                                                                        sinTheta,
                                                                        l)));
    x10_double ret__48335;
    
    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    x10_long offset__48234 = ((((x10_long)0ll)) - (D->FMGL(layout_min0)));
    
    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    offset__48234 = ((((((offset__48234) * (D->FMGL(layout_stride1)))) + (i__48333))) - (D->FMGL(layout_min1)));
    
    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(offset__48234,
                                                       v__48334);
    
    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ret__48335 = v__48334;
    
    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
    ret__48335;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double glm = gl0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_double sign = ::x10::lang::Math::pow(((x10_long)-1ll),
                                             l);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__26301max__48336 = l;
    {
        x10_long i__48337;
        for (i__48337 = ((x10_long)1ll); ((i__48337) <= (i__26301max__48336));
             i__48337 = ((i__48337) + (((x10_long)1ll))))
        {
            x10_long m__48338 = i__48337;
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            glm = ((::x10::lang::MathNatives::sqrt(((((x10_double) (((((l) - (m__48338))) + (((x10_long)1ll)))))) / (((x10_double) (((l) + (m__48338)))))))) * (glm));
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = ((sign) * (-1.0));
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__48236 = m__48338;
            x10_long i__48237 = l;
            x10_double v__48238 = ((((((sign) * (glm))) * (::x10::lang::Math::pow(
                                                             ((1.0) + (cosTheta)),
                                                             m__48338)))) * (::x10::lang::Math::pow(
                                                                               sinTheta,
                                                                               ((l) - (m__48338)))));
            x10_double ret__48239;
            
            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__48235 = ((i__48236) - (D->FMGL(layout_min0)));
            
            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__48235 = ((((((offset__48235) * (D->FMGL(layout_stride1)))) + (i__48237))) - (D->FMGL(layout_min1)));
            
            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
              offset__48235, v__48238);
            
            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__48239 = v__48238;
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__48239;
        }
    }
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    {
        x10_long k;
        for (k = l; ((k) > ((-(l)))); k = ((k) - (((x10_long)1ll))))
        {
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__48242 = l;
            x10_long i__48243 = ((k) - (((x10_long)1ll)));
            x10_double v__48244 = ((((((((((x10_double) (((l) + (k))))) / (::x10::lang::MathNatives::sqrt(((((((x10_double) (l))) * (((((x10_double) (l))) + (1.0))))) - (((((x10_double) (k))) * (((((x10_double) (k))) - (1.0)))))))))) * (sinTheta))) / (((1.0) + (cosTheta))))) * ((__extension__ ({
                
                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__48245 = l;
                x10_long i__48246 = k;
                x10_double ret__48247;
                
                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long offset__48240 = ((i__48245) - (D->FMGL(layout_min0)));
                
                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                offset__48240 = ((((((offset__48240) * (D->FMGL(layout_stride1)))) + (i__48246))) - (D->FMGL(layout_min1)));
                
                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__48247 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                               offset__48240);
                ret__48247;
            }))
            ));
            x10_double ret__48248;
            
            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long offset__48241 = ((i__48242) - (D->FMGL(layout_min0)));
            
            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            offset__48241 = ((((((offset__48241) * (D->FMGL(layout_stride1)))) + (i__48243))) - (D->FMGL(layout_min1)));
            
            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
              offset__48241, v__48244);
            
            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__48248 = v__48244;
            
            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__48248;
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
                    x10_long i__48252 = m;
                    x10_long i__48253 = ((k) - (((x10_long)1ll)));
                    x10_double v__48254 = ((((::x10::lang::MathNatives::sqrt(((((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((m) * (((m) + (((x10_long)1ll)))))))))) / (((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((k) * (((k) - (((x10_long)1ll))))))))))))) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__48255 = ((m) + (((x10_long)1ll)));
                        x10_long i__48256 = k;
                        x10_double ret__48257;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__48249 = ((i__48255) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__48249 = ((((((offset__48249) * (D->FMGL(layout_stride1)))) + (i__48256))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__48257 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__48249);
                        ret__48257;
                    }))
                    ))) + (((((((((((x10_double) (((m) + (k))))) / (::x10::lang::MathNatives::sqrt(((x10_double) (((((l) * (((l) + (((x10_long)1ll)))))) - (((k) * (((k) - (((x10_long)1ll))))))))))))) * (sinTheta))) / (((1.0) + (cosTheta))))) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__48258 = m;
                        x10_long i__48259 = k;
                        x10_double ret__48260;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__48250 = ((i__48258) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__48250 = ((((((offset__48250) * (D->FMGL(layout_stride1)))) + (i__48259))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__48260 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__48250);
                        ret__48260;
                    }))
                    ))));
                    x10_double ret__48261;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__48251 = ((i__48252) - (D->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__48251 = ((((((offset__48251) * (D->FMGL(layout_stride1)))) + (i__48253))) - (D->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__48251, v__48254);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__48261 = v__48254;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__48261;
                }
            }
            
        }
    }
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
    x10_long i__26337min__48339 = (-(l));
    {
        x10_long i__48340;
        for (i__48340 = i__26337min__48339; ((i__48340) <= (((x10_long)-1ll)));
             i__48340 = ((i__48340) + (((x10_long)1ll))))
        {
            x10_long m__48341 = i__48340;
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            sign = ::x10::lang::Math::pow(((x10_long)-1ll),
                                          ((m__48341) - (l)));
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__26319min__48271 = (-(l));
            x10_long i__26319max__48272 = l;
            {
                x10_long i__48273;
                for (i__48273 = i__26319min__48271; ((i__48273) <= (i__26319max__48272));
                     i__48273 = ((i__48273) + (((x10_long)1ll))))
                {
                    x10_long k__48274 = i__48273;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long i__48264 = m__48341;
                    x10_long i__48265 = k__48274;
                    x10_double v__48266 = ((sign) * ((__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__48267 = (-(m__48341));
                        x10_long i__48268 = (-(k__48274));
                        x10_double ret__48269;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__48262 = ((i__48267) - (D->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__48262 = ((((((offset__48262) * (D->FMGL(layout_stride1)))) + (i__48268))) - (D->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__48269 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__48262);
                        ret__48269;
                    }))
                    ));
                    x10_double ret__48270;
                    
                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    x10_long offset__48263 = ((i__48264) - (D->FMGL(layout_min0)));
                    
                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    offset__48263 = ((((((offset__48263) * (D->FMGL(layout_stride1)))) + (i__48265))) - (D->FMGL(layout_min1)));
                    
                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                      offset__48263, v__48266);
                    
                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__48270 = v__48266;
                    
                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__48270;
                    
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
            x10_long i__26373min__48297 = (-(l));
            x10_long i__26373max__48298 = l;
            {
                x10_long i__48299;
                for (i__48299 = i__26373min__48297; ((i__48299) <= (i__26373max__48298));
                     i__48299 = ((i__48299) + (((x10_long)1ll))))
                {
                    x10_long m__48300 = i__48299;
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (-1.0));
                    
                    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    x10_long i__26355min__48294 = (-(l));
                    {
                        x10_long i__48295;
                        for (i__48295 = i__26355min__48294;
                             ((i__48295) <= (((x10_long)0ll)));
                             i__48295 = ((i__48295) + (((x10_long)1ll))))
                        {
                            x10_long k__48296 = i__48295;
                            
                            //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                            x10_double tmp__48290 = (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__48291 = m__48300;
                                x10_long i__48292 = k__48296;
                                x10_double ret__48293;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__48275 = ((i__48291) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__48275 = ((((((offset__48275) * (D->FMGL(layout_stride1)))) + (i__48292))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__48293 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__48275);
                                ret__48293;
                            }))
                            ;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__48279 = m__48300;
                            x10_long i__48280 = k__48296;
                            x10_double v__48281 = ((sign) * ((__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__48282 = m__48300;
                                x10_long i__48283 = (-(k__48296));
                                x10_double ret__48284;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__48276 = ((i__48282) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__48276 = ((((((offset__48276) * (D->FMGL(layout_stride1)))) + (i__48283))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__48284 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__48276);
                                ret__48284;
                            }))
                            ));
                            x10_double ret__48285;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__48277 = ((i__48279) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__48277 = ((((((offset__48277) * (D->FMGL(layout_stride1)))) + (i__48280))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__48277, v__48281);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48285 = v__48281;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48285;
                            x10_long i__48286 = m__48300;
                            x10_long i__48287 = (-(k__48296));
                            x10_double v__48288 = ((sign) * (tmp__48290));
                            x10_double ret__48289;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__48278 = ((i__48286) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__48278 = ((((((offset__48278) * (D->FMGL(layout_stride1)))) + (i__48287))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__48278, v__48288);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48289 = v__48288;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48289;
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
            x10_long i__26409min__48324 = (-(l));
            {
                x10_long i__48325;
                for (i__48325 = i__26409min__48324; ((i__48325) <= (((x10_long)0ll)));
                     i__48325 = ((i__48325) + (((x10_long)1ll))))
                {
                    x10_long m__48326 = i__48325;
                    
                    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    sign = ((sign) * (-1.0));
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    x10_long i__26391min__48320 = (-(l));
                    x10_long i__26391max__48321 = l;
                    {
                        x10_long i__48322;
                        for (i__48322 = i__26391min__48320;
                             ((i__48322) <= (i__26391max__48321));
                             i__48322 = ((i__48322) + (((x10_long)1ll))))
                        {
                            x10_long k__48323 = i__48322;
                            
                            //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                            x10_double tmp__48316 = (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__48317 = m__48326;
                                x10_long i__48318 = k__48323;
                                x10_double ret__48319;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__48301 = ((i__48317) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__48301 = ((((((offset__48301) * (D->FMGL(layout_stride1)))) + (i__48318))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__48319 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__48301);
                                ret__48319;
                            }))
                            ;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long i__48305 = m__48326;
                            x10_long i__48306 = k__48323;
                            x10_double v__48307 = ((sign) * ((__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__48308 = (-(m__48326));
                                x10_long i__48309 = k__48323;
                                x10_double ret__48310;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__48302 = ((i__48308) - (D->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__48302 = ((((((offset__48302) * (D->FMGL(layout_stride1)))) + (i__48309))) - (D->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__48310 = D->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__48302);
                                ret__48310;
                            }))
                            ));
                            x10_double ret__48311;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__48303 = ((i__48305) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__48303 = ((((((offset__48303) * (D->FMGL(layout_stride1)))) + (i__48306))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__48303, v__48307);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48311 = v__48307;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48311;
                            x10_long i__48312 = (-(m__48326));
                            x10_long i__48313 = k__48323;
                            x10_double v__48314 = ((sign) * (tmp__48316));
                            x10_double ret__48315;
                            
                            //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            x10_long offset__48304 = ((i__48312) - (D->FMGL(layout_min0)));
                            
                            //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            offset__48304 = ((((((offset__48304) * (D->FMGL(layout_stride1)))) + (i__48313))) - (D->FMGL(layout_min1)));
                            
                            //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            D->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                              offset__48304, v__48314);
                            
                            //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48315 = v__48314;
                            
                            //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                            ret__48315;
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
        x10_long i__48346;
        for (i__48346 = ((x10_long)0ll); ((i__48346) <= (((x10_long)1ll)));
             i__48346 = ((i__48346) + (((x10_long)1ll))))
        {
            x10_long r__48347 = i__48346;
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* R__48345 =
              ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::_make(((numTerms) + (((x10_long)1ll))));
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__26427max__48342 = numTerms;
            {
                x10_long i__48343;
                for (i__48343 = ((x10_long)0ll); ((i__48343) <= (i__26427max__48342));
                     i__48343 = ((i__48343) + (((x10_long)1ll))))
                {
                    x10_long l__48344 = i__48343;
                    
                    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    R__48345->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__set(
                      l__48344, ::au::edu::anu::mm::WignerRotationMatrix::getDmk(
                                  (::x10aux::struct_equals(r__48347,
                                                           ((x10_long)0ll)))
                                    ? (theta) : (((((((x10_double) (((x10_long)2ll)))) * (3.141592653589793))) - (theta))),
                                  l__48344));
                }
            }
            
            //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            collection->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__set(
              r__48347, R__48345);
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
        x10_long i__48374;
        for (i__48374 = ((x10_long)0ll); ((i__48374) <= (((x10_long)1ll)));
             i__48374 = ((i__48374) + (((x10_long)1ll))))
        {
            x10_long rev__48375 = i__48374;
            
            //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
            x10_long i__26503max__48371 = numTerms;
            {
                x10_long i__48372;
                for (i__48372 = ((x10_long)0ll); ((i__48372) <= (i__26503max__48371));
                     i__48372 = ((i__48372) + (((x10_long)1ll))))
                {
                    x10_long l__48373 = i__48372;
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    ::x10::regionarray::Array<x10_double>* R__48370 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(collection)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                            rev__48375))->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                        l__48373);
                    
                    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                    ::x10::regionarray::Region* p__48361 =
                      ::x10aux::nullCheck(R__48370)->FMGL(region);
                    x10_long k__26464min__48362 = p__48361->min(
                                                    ((x10_long)1ll));
                    x10_long k__26464max__48363 = p__48361->max(
                                                    ((x10_long)1ll));
                    x10_long m__26483min__48364 = p__48361->min(
                                                    ((x10_long)0ll));
                    x10_long m__26483max__48365 = p__48361->max(
                                                    ((x10_long)0ll));
                    {
                        x10_long m__48366;
                        for (m__48366 = m__26483min__48364;
                             ((m__48366) <= (m__26483max__48365));
                             m__48366 = ((m__48366) + (((x10_long)1ll))))
                        {
                            x10_long m__48367 = m__48366;
                            {
                                x10_long k__48368;
                                for (k__48368 = k__26464min__48362;
                                     ((k__48368) <= (k__26464max__48363));
                                     k__48368 = ((k__48368) + (((x10_long)1ll))))
                                {
                                    x10_long k__48369 = k__48368;
                                    
                                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                    F_mk = ::x10::lang::MathNatives::sqrt((((((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__48357 =
                                          ((l__48373) - (k__48369));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__48357);
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__48358 =
                                          ((l__48373) + (k__48369));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__48358);
                                    }))
                                    ))) / ((((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__48359 =
                                          ((l__48373) - (m__48367));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__48359);
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                                        x10_long i__48360 =
                                          ((l__48373) + (m__48367));
                                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                                          i__48360);
                                    }))
                                    )))));
                                    
                                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                    if (((::x10aux::struct_equals(op,
                                                                  ((x10_int)2))) ||
                                        ((::x10aux::struct_equals(rev__48375,
                                                                  ((x10_long)1ll))) &&
                                        (::x10aux::struct_equals(op,
                                                                 ((x10_int)-1))))))
                                    {
                                        F_mk = ((((x10_double) (((x10_long)1ll)))) / (F_mk));
                                    }
                                    
                                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__48350 = m__48367;
                                    x10_long i__48351 = k__48369;
                                    x10_double v__48352 =
                                      (((__extension__ ({
                                        
                                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__48353 =
                                          m__48367;
                                        x10_long i__48354 =
                                          k__48369;
                                        x10_double ret__48355;
                                        
                                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long offset__48348 =
                                          ((i__48353) - (::x10aux::nullCheck(R__48370)->FMGL(layout_min0)));
                                        
                                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        offset__48348 = ((((((offset__48348) * (::x10aux::nullCheck(R__48370)->FMGL(layout_stride1)))) + (i__48354))) - (::x10aux::nullCheck(R__48370)->FMGL(layout_min1)));
                                        
                                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__48355 = ::x10aux::nullCheck(R__48370)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                       offset__48348);
                                        ret__48355;
                                    }))
                                    ) * (F_mk));
                                    x10_double ret__48356;
                                    
                                    //#line 574 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long offset__48349 =
                                      ((i__48350) - (::x10aux::nullCheck(R__48370)->FMGL(layout_min0)));
                                    
                                    //#line 575 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    offset__48349 = ((((((offset__48349) * (::x10aux::nullCheck(R__48370)->FMGL(layout_stride1)))) + (i__48351))) - (::x10aux::nullCheck(R__48370)->FMGL(layout_min1)));
                                    
                                    //#line 576 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ::x10aux::nullCheck(R__48370)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                      offset__48349, v__48352);
                                    
                                    //#line 577 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__48356 = v__48352;
                                    
                                    //#line 570 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__48356;
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
    ::au::edu::anu::mm::WignerRotationMatrix* this__48376 =
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

::x10::lang::String au::edu::anu::mm::WignerRotationMatrix_Strings::sl__48752("abs(x) > 2*PI: Wigner rotation matrix is only defined on [0..2*PI].");

/* END of WignerRotationMatrix */
/*************************************************/
