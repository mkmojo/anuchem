/*************************************************/
/* START of AssociatedLegendrePolynomial */
#include <au/edu/anu/mm/AssociatedLegendrePolynomial.h>

#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Math.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
/** The terms P_{lm} (with m >= 0) in this polynomial */

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
/** The degree of the polynomial. */

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
void au::edu::anu::mm::AssociatedLegendrePolynomial::_constructor(x10_long p) {
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18039 = this;
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    this->FMGL(terms) = ::x10::lang::Rail< x10_double >::_make(((((p) + (((x10_long)1ll)))) * (((p) + (((x10_long)1ll))))));
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    this->FMGL(p) = p;
}
::au::edu::anu::mm::AssociatedLegendrePolynomial* au::edu::anu::mm::AssociatedLegendrePolynomial::_make(
  x10_long p) {
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial();
    this_->_constructor(p);
    return this_;
}



//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
x10_double au::edu::anu::mm::AssociatedLegendrePolynomial::__apply(
  x10_long l, x10_long m) {
    return ::x10aux::nullCheck(this->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
             ((((l) * (((l) + (((x10_long)1ll)))))) + (m)));
    
}

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
x10_double au::edu::anu::mm::AssociatedLegendrePolynomial::__set(
  x10_long l, x10_long m, x10_double v) {
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(this->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((l) * (((l) + (((x10_long)1ll)))))) + (m)), v);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    return v;
    
}

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
::au::edu::anu::mm::AssociatedLegendrePolynomial* au::edu::anu::mm::AssociatedLegendrePolynomial::getPlk(
  x10_double theta, x10_long p) {
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double cosTheta = ::x10::lang::MathNatives::cos(theta);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double sinTheta = ::x10::lang::MathNatives::sin(theta);
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* P =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial());
    (P)->::au::edu::anu::mm::AssociatedLegendrePolynomial::_constructor(
      p);
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__18063;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18063 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18063;
    x10_double v__18064 = (-(sinTheta));
    x10_double ret__18065;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)1ll))),
      v__18064);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18065 = v__18064;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18065;
    x10_double v__18066 = cosTheta;
    x10_double ret__18067;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__18066);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18067 = v__18066;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18067;
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__16113max__18068 = p;
    {
        x10_long i__18069;
        for (i__18069 = ((x10_long)2ll); ((i__18069) <= (i__16113max__18068));
             i__18069 = ((i__18069) + (((x10_long)1ll))))
        {
            x10_long l__18070 = i__18069;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__18048 = l__18070;
            x10_long m__18049 = l__18070;
            x10_double v__18050 = ((((fact) * (sinTheta))) * ((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__18051 = ((l__18070) - (((x10_long)1ll)));
                x10_long m__18052 = ((l__18070) - (((x10_long)1ll)));
                ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__18051) * (((l__18051) + (((x10_long)1ll)))))) + (m__18052)));
            }))
            ))));
            x10_double ret__18053;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__18048) * (((l__18048) + (((x10_long)1ll)))))) + (m__18049)),
              v__18050);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18053 = v__18050;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18053;
            x10_long l__18054 = l__18070;
            x10_long m__18055 = ((l__18070) - (((x10_long)1ll)));
            x10_double v__18056 = ((((fact) * (cosTheta))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__18057 = ((l__18070) - (((x10_long)1ll)));
                x10_long m__18058 = ((l__18070) - (((x10_long)1ll)));
                ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__18057) * (((l__18057) + (((x10_long)1ll)))))) + (m__18058)));
            }))
            ));
            x10_double ret__18059;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__18054) * (((l__18054) + (((x10_long)1ll)))))) + (m__18055)),
              v__18056);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18059 = v__18056;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18059;
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__16095max__18060 = ((l__18070) - (((x10_long)2ll)));
            {
                x10_long i__18061;
                for (i__18061 = ((x10_long)0ll); ((i__18061) <= (i__16095max__18060));
                     i__18061 = ((i__18061) + (((x10_long)1ll))))
                {
                    x10_long k__18062 = i__18061;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__18040 = l__18070;
                    x10_long m__18041 = k__18062;
                    x10_double v__18042 = ((((((((fact) * (cosTheta))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__18043 = ((l__18070) - (((x10_long)1ll)));
                        x10_long m__18044 = k__18062;
                        ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__18043) * (((l__18043) + (((x10_long)1ll)))))) + (m__18044)));
                    }))
                    ))) - (((((x10_double) (((((l__18070) + (k__18062))) - (((x10_long)1ll)))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__18045 = ((l__18070) - (((x10_long)2ll)));
                        x10_long m__18046 = k__18062;
                        ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__18045) * (((l__18045) + (((x10_long)1ll)))))) + (m__18046)));
                    }))
                    ))))) / (((x10_double) (((l__18070) - (k__18062))))));
                    x10_double ret__18047;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__18040) * (((l__18040) + (((x10_long)1ll)))))) + (m__18041)),
                      v__18042);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__18047 = v__18042;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__18047;
                }
            }
            
        }
    }
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    return P;
    
}

//#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
void au::edu::anu::mm::AssociatedLegendrePolynomial::getPlk(
  x10_double theta) {
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double cosTheta = ::x10::lang::MathNatives::cos(theta);
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double sinTheta = ::x10::lang::MathNatives::sin(theta);
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18101 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__18102;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__18101)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18102 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18102;
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18103 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double v__18104 = (-(sinTheta));
    x10_double ret__18105;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__18103)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)1ll))),
      v__18104);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18105 = v__18104;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18105;
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18106 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double v__18107 = cosTheta;
    x10_double ret__18108;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__18106)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__18107);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18108 = v__18107;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18108;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__16149max__18109 = this->FMGL(p);
    {
        x10_long i__18110;
        for (i__18110 = ((x10_long)2ll); ((i__18110) <= (i__16149max__18109));
             i__18110 = ((i__18110) + (((x10_long)1ll))))
        {
            x10_long l__18111 = i__18110;
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18082 =
              this;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__18083 = l__18111;
            x10_long m__18084 = l__18111;
            x10_double v__18085 = ((((fact) * (sinTheta))) * ((-((__extension__ ({
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18086 =
                  this;
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__18087 = ((l__18111) - (((x10_long)1ll)));
                x10_long m__18088 = ((l__18111) - (((x10_long)1ll)));
                ::x10aux::nullCheck(::x10aux::nullCheck(this__18086)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__18087) * (((l__18087) + (((x10_long)1ll)))))) + (m__18088)));
            }))
            ))));
            x10_double ret__18089;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__18082)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__18083) * (((l__18083) + (((x10_long)1ll)))))) + (m__18084)),
              v__18085);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18089 = v__18085;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18089;
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18090 =
              this;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__18091 = l__18111;
            x10_long m__18092 = ((l__18111) - (((x10_long)1ll)));
            x10_double v__18093 = ((((fact) * (cosTheta))) * ((__extension__ ({
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18094 =
                  this;
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__18095 = ((l__18111) - (((x10_long)1ll)));
                x10_long m__18096 = ((l__18111) - (((x10_long)1ll)));
                ::x10aux::nullCheck(::x10aux::nullCheck(this__18094)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__18095) * (((l__18095) + (((x10_long)1ll)))))) + (m__18096)));
            }))
            ));
            x10_double ret__18097;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__18090)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__18091) * (((l__18091) + (((x10_long)1ll)))))) + (m__18092)),
              v__18093);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18097 = v__18093;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18097;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__16131max__18098 = ((l__18111) - (((x10_long)2ll)));
            {
                x10_long i__18099;
                for (i__18099 = ((x10_long)0ll); ((i__18099) <= (i__16131max__18098));
                     i__18099 = ((i__18099) + (((x10_long)1ll))))
                {
                    x10_long k__18100 = i__18099;
                    
                    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18071 =
                      this;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__18072 = l__18111;
                    x10_long m__18073 = k__18100;
                    x10_double v__18074 = ((((((((fact) * (cosTheta))) * ((__extension__ ({
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18075 =
                          this;
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__18076 = ((l__18111) - (((x10_long)1ll)));
                        x10_long m__18077 = k__18100;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__18075)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__18076) * (((l__18076) + (((x10_long)1ll)))))) + (m__18077)));
                    }))
                    ))) - (((((x10_double) (((((l__18111) + (k__18100))) - (((x10_long)1ll)))))) * ((__extension__ ({
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18078 =
                          this;
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__18079 = ((l__18111) - (((x10_long)2ll)));
                        x10_long m__18080 = k__18100;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__18078)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__18079) * (((l__18079) + (((x10_long)1ll)))))) + (m__18080)));
                    }))
                    ))))) / (((x10_double) (((l__18111) - (k__18100))))));
                    x10_double ret__18081;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__18071)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__18072) * (((l__18072) + (((x10_long)1ll)))))) + (m__18073)),
                      v__18074);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__18081 = v__18074;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__18081;
                }
            }
            
        }
    }
    
}

//#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
::au::edu::anu::mm::AssociatedLegendrePolynomial* au::edu::anu::mm::AssociatedLegendrePolynomial::getPlm(
  x10_double x, x10_long p) {
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    if (((::fabs(x)) > (1.0))) {
        
        //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68049))));
    }
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* Plm =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial());
    (Plm)->::au::edu::anu::mm::AssociatedLegendrePolynomial::_constructor(
      p);
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__18132;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18132 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__18132;
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double somx2 = ::x10::lang::MathNatives::sqrt(((((1.0) - (x))) * (((1.0) + (x)))));
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    {
        x10_long i;
        for (i = ((x10_long)1ll); ((i) <= (p)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__18112 = i;
            x10_long m__18113 = i;
            x10_double v__18114 = (((((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__18115 = ((i) - (((x10_long)1ll)));
                x10_long m__18116 = ((i) - (((x10_long)1ll)));
                ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__18115) * (((l__18115) + (((x10_long)1ll)))))) + (m__18116)));
            }))
            ))) * (fact))) * (somx2));
            x10_double ret__18117;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__18112) * (((l__18112) + (((x10_long)1ll)))))) + (m__18113)),
              v__18114);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18117 = v__18114;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18117;
            x10_long l__18118 = i;
            x10_long m__18119 = ((i) - (((x10_long)1ll)));
            x10_double v__18120 = ((((x) * (fact))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__18121 = ((i) - (((x10_long)1ll)));
                x10_long m__18122 = ((i) - (((x10_long)1ll)));
                ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__18121) * (((l__18121) + (((x10_long)1ll)))))) + (m__18122)));
            }))
            ));
            x10_double ret__18123;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__18118) * (((l__18118) + (((x10_long)1ll)))))) + (m__18119)),
              v__18120);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18123 = v__18120;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__18123;
            
            //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
        }
    }
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    {
        x10_long m;
        for (m = ((x10_long)0ll); ((m) <= (((p) - (((x10_long)2ll)))));
             m = ((m) + (((x10_long)1ll)))) {
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            {
                x10_long l;
                for (l = ((m) + (((x10_long)2ll))); ((l) <= (p));
                     l = ((l) + (((x10_long)1ll)))) {
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__18124 = l;
                    x10_long m__18125 = m;
                    x10_double v__18126 = ((((((((x) * (((((2.0) * (((x10_double) (l))))) - (1.0))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__18127 = ((l) - (((x10_long)1ll)));
                        x10_long m__18128 = m;
                        ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__18127) * (((l__18127) + (((x10_long)1ll)))))) + (m__18128)));
                    }))
                    ))) - (((((((x10_double) (((l) + (m))))) - (1.0))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__18129 = ((l) - (((x10_long)2ll)));
                        x10_long m__18130 = m;
                        ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__18129) * (((l__18129) + (((x10_long)1ll)))))) + (m__18130)));
                    }))
                    ))))) / (((x10_double) (((l) - (m))))));
                    x10_double ret__18131;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__18124) * (((l__18124) + (((x10_long)1ll)))))) + (m__18125)),
                      v__18126);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__18131 = v__18126;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__18131;
                }
            }
            
        }
    }
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    return Plm;
    
}

//#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
::x10::lang::String* au::edu::anu::mm::AssociatedLegendrePolynomial::toString(
  ) {
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10::util::StringBuilder* s =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (s)->::x10::util::StringBuilder::_constructor();
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__16185max__18139 = this->FMGL(p);
    {
        x10_long i__18140;
        for (i__18140 = ((x10_long)0ll); ((i__18140) <= (i__16185max__18139));
             i__18140 = ((i__18140) + (((x10_long)1ll))))
        {
            x10_long i__18141 = i__18140;
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__16167max__18136 = i__18141;
            {
                x10_long i__18137;
                for (i__18137 = ((x10_long)0ll); ((i__18137) <= (i__16167max__18136));
                     i__18137 = ((i__18137) + (((x10_long)1ll))))
                {
                    x10_long j__18138 = i__18137;
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    s->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68050), (__extension__ ({
                               ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__18133 =
                                 this;
                               
                               //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                               x10_long l__18134 = i__18141;
                               x10_long m__18135 = j__18138;
                               ::x10aux::nullCheck(::x10aux::nullCheck(this__18133)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                                 ((((l__18134) * (((l__18134) + (((x10_long)1ll)))))) + (m__18135)));
                           }))
                           ), (&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68051)));
                }
            }
            
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            s->add((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68052));
        }
    }
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    return s->toString();
    
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
::au::edu::anu::mm::AssociatedLegendrePolynomial* au::edu::anu::mm::AssociatedLegendrePolynomial::au__edu__anu__mm__AssociatedLegendrePolynomial____this__au__edu__anu__mm__AssociatedLegendrePolynomial(
  ) {
    return this;
    
}
void au::edu::anu::mm::AssociatedLegendrePolynomial::__fieldInitializers_au_edu_anu_mm_AssociatedLegendrePolynomial(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::AssociatedLegendrePolynomial::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::AssociatedLegendrePolynomial::_deserializer);

void au::edu::anu::mm::AssociatedLegendrePolynomial::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(terms));
    buf.write(this->FMGL(p));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::AssociatedLegendrePolynomial::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::AssociatedLegendrePolynomial::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(terms) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(p) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::mm::AssociatedLegendrePolynomial::rtt;
void au::edu::anu::mm::AssociatedLegendrePolynomial::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.AssociatedLegendrePolynomial",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68050("");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68051(" ");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68052("\n");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__68049("abs(x) > 1: Associated Legendre functions are only defined on [-1, 1].");

/* END of AssociatedLegendrePolynomial */
/*************************************************/
