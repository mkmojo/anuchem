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
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46245 = this;
    
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
    x10_double ret__46269;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46269 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46269;
    x10_double v__46270 = (-(sinTheta));
    x10_double ret__46271;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)1ll))),
      v__46270);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46271 = v__46270;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46271;
    x10_double v__46272 = cosTheta;
    x10_double ret__46273;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__46272);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46273 = v__46272;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46273;
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__28824max__46274 = p;
    {
        x10_long i__46275;
        for (i__46275 = ((x10_long)2ll); ((i__46275) <= (i__28824max__46274));
             i__46275 = ((i__46275) + (((x10_long)1ll))))
        {
            x10_long l__46276 = i__46275;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__46254 = l__46276;
            x10_long m__46255 = l__46276;
            x10_double v__46256 = ((((fact) * (sinTheta))) * ((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__46257 = ((l__46276) - (((x10_long)1ll)));
                x10_long m__46258 = ((l__46276) - (((x10_long)1ll)));
                ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__46257) * (((l__46257) + (((x10_long)1ll)))))) + (m__46258)));
            }))
            ))));
            x10_double ret__46259;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__46254) * (((l__46254) + (((x10_long)1ll)))))) + (m__46255)),
              v__46256);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46259 = v__46256;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46259;
            x10_long l__46260 = l__46276;
            x10_long m__46261 = ((l__46276) - (((x10_long)1ll)));
            x10_double v__46262 = ((((fact) * (cosTheta))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__46263 = ((l__46276) - (((x10_long)1ll)));
                x10_long m__46264 = ((l__46276) - (((x10_long)1ll)));
                ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__46263) * (((l__46263) + (((x10_long)1ll)))))) + (m__46264)));
            }))
            ));
            x10_double ret__46265;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__46260) * (((l__46260) + (((x10_long)1ll)))))) + (m__46261)),
              v__46262);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46265 = v__46262;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46265;
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__28806max__46266 = ((l__46276) - (((x10_long)2ll)));
            {
                x10_long i__46267;
                for (i__46267 = ((x10_long)0ll); ((i__46267) <= (i__28806max__46266));
                     i__46267 = ((i__46267) + (((x10_long)1ll))))
                {
                    x10_long k__46268 = i__46267;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__46246 = l__46276;
                    x10_long m__46247 = k__46268;
                    x10_double v__46248 = ((((((((fact) * (cosTheta))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__46249 = ((l__46276) - (((x10_long)1ll)));
                        x10_long m__46250 = k__46268;
                        ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__46249) * (((l__46249) + (((x10_long)1ll)))))) + (m__46250)));
                    }))
                    ))) - (((((x10_double) (((((l__46276) + (k__46268))) - (((x10_long)1ll)))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__46251 = ((l__46276) - (((x10_long)2ll)));
                        x10_long m__46252 = k__46268;
                        ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__46251) * (((l__46251) + (((x10_long)1ll)))))) + (m__46252)));
                    }))
                    ))))) / (((x10_double) (((l__46276) - (k__46268))))));
                    x10_double ret__46253;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__46246) * (((l__46246) + (((x10_long)1ll)))))) + (m__46247)),
                      v__46248);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__46253 = v__46248;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__46253;
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
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46307 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__46308;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__46307)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46308 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46308;
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46309 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double v__46310 = (-(sinTheta));
    x10_double ret__46311;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__46309)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)1ll))),
      v__46310);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46311 = v__46310;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46311;
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46312 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double v__46313 = cosTheta;
    x10_double ret__46314;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__46312)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__46313);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46314 = v__46313;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46314;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__28860max__46315 = this->FMGL(p);
    {
        x10_long i__46316;
        for (i__46316 = ((x10_long)2ll); ((i__46316) <= (i__28860max__46315));
             i__46316 = ((i__46316) + (((x10_long)1ll))))
        {
            x10_long l__46317 = i__46316;
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46288 =
              this;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__46289 = l__46317;
            x10_long m__46290 = l__46317;
            x10_double v__46291 = ((((fact) * (sinTheta))) * ((-((__extension__ ({
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46292 =
                  this;
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__46293 = ((l__46317) - (((x10_long)1ll)));
                x10_long m__46294 = ((l__46317) - (((x10_long)1ll)));
                ::x10aux::nullCheck(::x10aux::nullCheck(this__46292)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__46293) * (((l__46293) + (((x10_long)1ll)))))) + (m__46294)));
            }))
            ))));
            x10_double ret__46295;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__46288)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__46289) * (((l__46289) + (((x10_long)1ll)))))) + (m__46290)),
              v__46291);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46295 = v__46291;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46295;
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46296 =
              this;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__46297 = l__46317;
            x10_long m__46298 = ((l__46317) - (((x10_long)1ll)));
            x10_double v__46299 = ((((fact) * (cosTheta))) * ((__extension__ ({
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46300 =
                  this;
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__46301 = ((l__46317) - (((x10_long)1ll)));
                x10_long m__46302 = ((l__46317) - (((x10_long)1ll)));
                ::x10aux::nullCheck(::x10aux::nullCheck(this__46300)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__46301) * (((l__46301) + (((x10_long)1ll)))))) + (m__46302)));
            }))
            ));
            x10_double ret__46303;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__46296)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__46297) * (((l__46297) + (((x10_long)1ll)))))) + (m__46298)),
              v__46299);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46303 = v__46299;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46303;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__28842max__46304 = ((l__46317) - (((x10_long)2ll)));
            {
                x10_long i__46305;
                for (i__46305 = ((x10_long)0ll); ((i__46305) <= (i__28842max__46304));
                     i__46305 = ((i__46305) + (((x10_long)1ll))))
                {
                    x10_long k__46306 = i__46305;
                    
                    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46277 =
                      this;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__46278 = l__46317;
                    x10_long m__46279 = k__46306;
                    x10_double v__46280 = ((((((((fact) * (cosTheta))) * ((__extension__ ({
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46281 =
                          this;
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__46282 = ((l__46317) - (((x10_long)1ll)));
                        x10_long m__46283 = k__46306;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__46281)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__46282) * (((l__46282) + (((x10_long)1ll)))))) + (m__46283)));
                    }))
                    ))) - (((((x10_double) (((((l__46317) + (k__46306))) - (((x10_long)1ll)))))) * ((__extension__ ({
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46284 =
                          this;
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__46285 = ((l__46317) - (((x10_long)2ll)));
                        x10_long m__46286 = k__46306;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__46284)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__46285) * (((l__46285) + (((x10_long)1ll)))))) + (m__46286)));
                    }))
                    ))))) / (((x10_double) (((l__46317) - (k__46306))))));
                    x10_double ret__46287;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__46277)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__46278) * (((l__46278) + (((x10_long)1ll)))))) + (m__46279)),
                      v__46280);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__46287 = v__46280;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__46287;
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
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48621))));
    }
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* Plm =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial());
    (Plm)->::au::edu::anu::mm::AssociatedLegendrePolynomial::_constructor(
      p);
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__46338;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46338 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__46338;
    
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
            x10_long l__46318 = i;
            x10_long m__46319 = i;
            x10_double v__46320 = (((((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__46321 = ((i) - (((x10_long)1ll)));
                x10_long m__46322 = ((i) - (((x10_long)1ll)));
                ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__46321) * (((l__46321) + (((x10_long)1ll)))))) + (m__46322)));
            }))
            ))) * (fact))) * (somx2));
            x10_double ret__46323;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__46318) * (((l__46318) + (((x10_long)1ll)))))) + (m__46319)),
              v__46320);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46323 = v__46320;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46323;
            x10_long l__46324 = i;
            x10_long m__46325 = ((i) - (((x10_long)1ll)));
            x10_double v__46326 = ((((x) * (fact))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__46327 = ((i) - (((x10_long)1ll)));
                x10_long m__46328 = ((i) - (((x10_long)1ll)));
                ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__46327) * (((l__46327) + (((x10_long)1ll)))))) + (m__46328)));
            }))
            ));
            x10_double ret__46329;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__46324) * (((l__46324) + (((x10_long)1ll)))))) + (m__46325)),
              v__46326);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46329 = v__46326;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__46329;
            
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
                    x10_long l__46330 = l;
                    x10_long m__46331 = m;
                    x10_double v__46332 = ((((((((x) * (((((2.0) * (((x10_double) (l))))) - (1.0))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__46333 = ((l) - (((x10_long)1ll)));
                        x10_long m__46334 = m;
                        ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__46333) * (((l__46333) + (((x10_long)1ll)))))) + (m__46334)));
                    }))
                    ))) - (((((((x10_double) (((l) + (m))))) - (1.0))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__46335 = ((l) - (((x10_long)2ll)));
                        x10_long m__46336 = m;
                        ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__46335) * (((l__46335) + (((x10_long)1ll)))))) + (m__46336)));
                    }))
                    ))))) / (((x10_double) (((l) - (m))))));
                    x10_double ret__46337;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__46330) * (((l__46330) + (((x10_long)1ll)))))) + (m__46331)),
                      v__46332);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__46337 = v__46332;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__46337;
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
    x10_long i__28896max__46345 = this->FMGL(p);
    {
        x10_long i__46346;
        for (i__46346 = ((x10_long)0ll); ((i__46346) <= (i__28896max__46345));
             i__46346 = ((i__46346) + (((x10_long)1ll))))
        {
            x10_long i__46347 = i__46346;
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__28878max__46342 = i__46347;
            {
                x10_long i__46343;
                for (i__46343 = ((x10_long)0ll); ((i__46343) <= (i__28878max__46342));
                     i__46343 = ((i__46343) + (((x10_long)1ll))))
                {
                    x10_long j__46344 = i__46343;
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    s->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48622), (__extension__ ({
                               ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__46339 =
                                 this;
                               
                               //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                               x10_long l__46340 = i__46347;
                               x10_long m__46341 = j__46344;
                               ::x10aux::nullCheck(::x10aux::nullCheck(this__46339)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                                 ((((l__46340) * (((l__46340) + (((x10_long)1ll)))))) + (m__46341)));
                           }))
                           ), (&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48623)));
                }
            }
            
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            s->add((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48624));
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

::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48622("");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48623(" ");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48624("\n");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__48621("abs(x) > 1: Associated Legendre functions are only defined on [-1, 1].");

/* END of AssociatedLegendrePolynomial */
/*************************************************/
