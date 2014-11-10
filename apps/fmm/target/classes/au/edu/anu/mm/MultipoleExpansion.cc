/*************************************************/
/* START of MultipoleExpansion */
#include <au/edu/anu/mm/MultipoleExpansion.h>

#include <au/edu/anu/mm/Expansion.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10x/vector/Vector3d.h>
#include <x10x/polar/Polar3d.h>
#include <au/edu/anu/mm/AssociatedLegendrePolynomial.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Math.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/Array.h>
#include <au/edu/anu/mm/Factorial.h>
#include <au/edu/anu/mm/WignerRotationMatrix.h>
#include <x10/compiler/Synthetic.h>

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
void au::edu::anu::mm::MultipoleExpansion::_constructor(x10_long p) {
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    (this)->::au::edu::anu::mm::Expansion::_constructor(p);
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* this__72336 = this;
    
}
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::_make(
  x10_long p) {
    ::au::edu::anu::mm::MultipoleExpansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion();
    this_->_constructor(p);
    return this_;
}



//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
void au::edu::anu::mm::MultipoleExpansion::_constructor(::au::edu::anu::mm::MultipoleExpansion* source) {
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    (this)->::au::edu::anu::mm::Expansion::_constructor(reinterpret_cast< ::au::edu::anu::mm::Expansion*>(source));
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* this__72337 = this;
    
}
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::_make(
  ::au::edu::anu::mm::MultipoleExpansion* source) {
    ::au::edu::anu::mm::MultipoleExpansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion();
    this_->_constructor(source);
    return this_;
}



//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::getOlm(
  x10_double q, ::x10x::vector::Vector3d v, x10_long p) {
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* exp =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (exp)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      p);
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10x::polar::Polar3d v_pole = ::x10x::polar::Polar3d::getPolar3d(
                                      v);
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* pplm =
      ::au::edu::anu::mm::AssociatedLegendrePolynomial::getPlk(
        v_pole->FMGL(theta), p);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__72354 = x10_complex(q,0.0);
    x10_complex ret__72355;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__72354);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72355 = v__72354;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72355;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__62226max__72356 = p;
    {
        x10_long i__72357;
        for (i__72357 = ((x10_long)1ll); ((i__72357) <= (i__62226max__72356));
             i__72357 = ((i__72357) + (((x10_long)1ll))))
        {
            x10_long l__72358 = i__72357;
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__72358))));
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__72352 = il;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__72353 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__72345 = l__72358;
            x10_complex v__72346 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__72353, ilm__72352), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__72347 = l__72358;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__72347) * (((l__72347) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )));
            x10_complex ret__72348;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__72345) * (((l__72345) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__72346);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__72348 = v__72346;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__72348;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__62208max__72349 = l__72358;
            {
                x10_long i__72350;
                for (i__72350 = ((x10_long)1ll); ((i__72350) <= (i__62208max__72349));
                     i__72350 = ((i__72350) + (((x10_long)1ll))))
                {
                    x10_long m__72351 = i__72350;
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__72352 = ((ilm__72352) * (((x10_double) (((l__72358) + (m__72351))))));
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__72353 = ::x10::lang::ComplexNatives::_times(phifac__72353, phifac0);
                    
                    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__72342 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__72353, ilm__72352), ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__72343 = l__72358;
                        x10_long m__72344 = m__72351;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__72343) * (((l__72343) + (((x10_long)1ll)))))) + (m__72344)));
                    }))
                    )));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72338 = l__72358;
                    x10_long m__72339 = m__72351;
                    x10_complex v__72340 = O_lm__72342;
                    x10_complex ret__72341;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72338) * (((l__72338) + (((x10_long)1ll)))))) + (m__72339)),
                      v__72340);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72341 = v__72340;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72341;
                }
            }
            
            //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            rfac = ((rfac) * (v_pole->FMGL(r)));
        }
    }
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    return exp;
    
}

//#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
void au::edu::anu::mm::MultipoleExpansion::addOlm(x10_double q,
                                                  ::x10x::vector::Vector3d v,
                                                  ::au::edu::anu::mm::AssociatedLegendrePolynomial* pplm) {
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10x::polar::Polar3d v_pole = ::x10x::polar::Polar3d::getPolar3d(
                                      v);
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10aux::nullCheck(pplm)->getPlk(v_pole->FMGL(theta));
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* a__72387 = this;
    x10_complex r__72388 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
        ::x10aux::nullCheck(::x10aux::nullCheck(a__72387)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    , x10_complex(q,0.0));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__72359 = r__72388;
    x10_complex ret__72360;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__72387)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__72359);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72360 = v__72359;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72360;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__62262max__72389 = this->FMGL(p);
    {
        x10_long i__72390;
        for (i__72390 = ((x10_long)1ll); ((i__72390) <= (i__62262max__72389));
             i__72390 = ((i__72390) + (((x10_long)1ll))))
        {
            x10_long l__72391 = i__72390;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__72391))));
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__72385 = il;
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__72386 = x10_complex(1.0,0.0);
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            ::au::edu::anu::mm::MultipoleExpansion* a__72377 =
              this;
            x10_long i__72378 = l__72391;
            x10_complex r__72379 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__72380 = i__72378;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__72377)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__72380) * (((l__72380) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            , ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__72386, ilm__72385), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__72381 = l__72391;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__72381) * (((l__72381) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ))));
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__72361 = i__72378;
            x10_complex v__72362 = r__72379;
            x10_complex ret__72363;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__72377)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__72361) * (((l__72361) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__72362);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__72363 = v__72362;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__72363;
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__62244max__72382 = l__72391;
            {
                x10_long i__72383;
                for (i__72383 = ((x10_long)1ll); ((i__72383) <= (i__62244max__72382));
                     i__72383 = ((i__72383) + (((x10_long)1ll))))
                {
                    x10_long m__72384 = i__72383;
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__72385 = ((ilm__72385) * (((x10_double) (((l__72391) + (m__72384))))));
                    
                    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__72386 = ::x10::lang::ComplexNatives::_times(phifac__72386, phifac0);
                    
                    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__72374 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__72386, ilm__72385), ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__72375 = l__72391;
                        x10_long m__72376 = m__72384;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__72375) * (((l__72375) + (((x10_long)1ll)))))) + (m__72376)));
                    }))
                    )));
                    
                    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ::au::edu::anu::mm::MultipoleExpansion* a__72368 =
                      this;
                    x10_long i__72369 = l__72391;
                    x10_long i__72370 = m__72384;
                    x10_complex r__72371 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__72372 = i__72369;
                        x10_long m__72373 = i__72370;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__72368)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__72372) * (((l__72372) + (((x10_long)1ll)))))) + (m__72373)));
                    }))
                    , O_lm__72374);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72364 = i__72369;
                    x10_long m__72365 = i__72370;
                    x10_complex v__72366 = r__72371;
                    x10_complex ret__72367;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__72368)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72364) * (((l__72364) + (((x10_long)1ll)))))) + (m__72365)),
                      v__72366);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72367 = v__72366;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72367;
                }
            }
            
            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            rfac = ((rfac) * (v_pole->FMGL(r)));
        }
    }
    
}

//#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::getOlm(
  ::x10x::vector::Vector3d v, x10_long p) {
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* exp =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (exp)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      p);
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10x::polar::Polar3d v_pole = ::x10x::polar::Polar3d::getPolar3d(
                                      v);
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* pplm =
      ::au::edu::anu::mm::AssociatedLegendrePolynomial::getPlk(
        v_pole->FMGL(theta), p);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__72408 = x10_complex(1.0,0.0);
    x10_complex ret__72409;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__72408);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72409 = v__72408;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72409;
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__62298max__72410 = p;
    {
        x10_long i__72411;
        for (i__72411 = ((x10_long)1ll); ((i__72411) <= (i__62298max__72410));
             i__72411 = ((i__72411) + (((x10_long)1ll))))
        {
            x10_long l__72412 = i__72411;
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__72412))));
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__72406 = il;
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__72407 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__72399 = l__72412;
            x10_complex v__72400 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__72407, ilm__72406), ((rfac) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__72401 = l__72412;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__72401) * (((l__72401) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )));
            x10_complex ret__72402;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__72399) * (((l__72399) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__72400);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__72402 = v__72400;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__72402;
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__62280max__72403 = l__72412;
            {
                x10_long i__72404;
                for (i__72404 = ((x10_long)1ll); ((i__72404) <= (i__62280max__72403));
                     i__72404 = ((i__72404) + (((x10_long)1ll))))
                {
                    x10_long m__72405 = i__72404;
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__72406 = ((ilm__72406) * (((x10_double) (((l__72412) + (m__72405))))));
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__72407 = ::x10::lang::ComplexNatives::_times(phifac__72407, phifac0);
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__72396 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__72407, ilm__72406), ((rfac) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__72397 = l__72412;
                        x10_long m__72398 = m__72405;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__72397) * (((l__72397) + (((x10_long)1ll)))))) + (m__72398)));
                    }))
                    )));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72392 = l__72412;
                    x10_long m__72393 = m__72405;
                    x10_complex v__72394 = O_lm__72396;
                    x10_complex ret__72395;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72392) * (((l__72392) + (((x10_long)1ll)))))) + (m__72393)),
                      v__72394);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72395 = v__72394;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72395;
                }
            }
            
            //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            rfac = ((rfac) * (v_pole->FMGL(r)));
        }
    }
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    return exp;
    
}

//#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
void au::edu::anu::mm::MultipoleExpansion::translateAndAddMultipole(
  ::au::edu::anu::mm::MultipoleExpansion* scratch, ::x10::lang::Rail< x10_complex >* temp,
  ::x10x::vector::Vector3d v, ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* complexK,
  ::au::edu::anu::mm::MultipoleExpansion* source, ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* wigner) {
    
    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double b = ::x10::lang::MathNatives::sqrt(((((((v->FMGL(i)) * (v->FMGL(i)))) + (((v->FMGL(j)) * (v->FMGL(j)))))) + (((v->FMGL(k)) * (v->FMGL(k))))));
    
    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double invB = ((((x10_double) (((x10_long)1ll)))) / (b));
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10aux::nullCheck(source)->rotate(temp, ::x10aux::nullCheck(complexK)->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                                ((x10_long)0ll)),
                                        ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                          ((x10_long)0ll)),
                                        reinterpret_cast< ::au::edu::anu::mm::Expansion*>(scratch));
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__62370max__72435 = this->FMGL(p);
    {
        x10_long i__72436;
        for (i__72436 = ((x10_long)0ll); ((i__72436) <= (i__62370max__72435));
             i__72436 = ((i__72436) + (((x10_long)1ll))))
        {
            x10_long m__72437 = i__72436;
            
            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__62316min__72426 = m__72437;
            x10_long i__62316max__72427 = this->FMGL(p);
            {
                x10_long i__72428;
                for (i__72428 = i__62316min__72426; ((i__72428) <= (i__62316max__72427));
                     i__72428 = ((i__72428) + (((x10_long)1ll))))
                {
                    x10_long l__72429 = i__72428;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__72429, (__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__72413 = l__72429;
                          x10_long m__72414 = m__72437;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__72413) * (((l__72413) + (((x10_long)1ll)))))) + (m__72414)));
                      }))
                      );
                }
            }
            
            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double b_lm_pow__72434 = 1.0;
            
            //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__62352min__72430 = m__72437;
            x10_long i__62352max__72431 = this->FMGL(p);
            {
                x10_long i__72432;
                for (i__72432 = i__62352min__72430; ((i__72432) <= (i__62352max__72431));
                     i__72432 = ((i__72432) + (((x10_long)1ll))))
                {
                    x10_long l__72433 = i__72432;
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__72423 = x10_complex(0.0,0.0);
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_double F_lm__72424 = ((b_lm_pow__72434) / ((__extension__ ({
                        
                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                        x10_long i__72425 = ((l__72433) - (m__72437));
                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                          i__72425);
                    }))
                    ));
                    
                    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_long i__62334min__72415 = m__72437;
                    x10_long i__62334max__72416 = l__72433;
                    {
                        x10_long i__72417;
                        for (i__72417 = i__62334min__72415;
                             ((i__72417) <= (i__62334max__72416));
                             i__72417 = ((i__72417) + (((x10_long)1ll))))
                        {
                            x10_long j__72418 = i__72417;
                            
                            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                            O_lm__72423 = ::x10::lang::ComplexNatives::_plus(O_lm__72423, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__72418), F_lm__72424));
                            
                            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                            F_lm__72424 = ((((F_lm__72424) * (((x10_double) (((l__72433) - (j__72418))))))) * (invB));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72419 = l__72433;
                    x10_long m__72420 = m__72437;
                    x10_complex v__72421 = O_lm__72423;
                    x10_complex ret__72422;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72419) * (((l__72419) + (((x10_long)1ll)))))) + (m__72420)),
                      v__72421);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72422 = v__72421;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72422;
                    
                    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    b_lm_pow__72434 = ((b_lm_pow__72434) * (b));
                }
            }
            
        }
    }
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10aux::nullCheck(scratch)->backRotateAndAdd(::x10aux::nullCheck(complexK)->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                                     ((x10_long)1ll)),
                                                   ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                                     ((x10_long)1ll)),
                                                   reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this));
}

//#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
void au::edu::anu::mm::MultipoleExpansion::translateAndAddMultipole(
  ::x10x::vector::Vector3d v, ::au::edu::anu::mm::MultipoleExpansion* source) {
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* scratch =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (scratch)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      this->FMGL(p));
    
    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10::lang::Rail< x10_complex >* temp = ::x10::lang::Rail< x10_complex >::_make(((this->FMGL(p)) + (((x10_long)1ll))));
    
    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10x::polar::Polar3d polar = ::x10x::polar::Polar3d::getPolar3d(
                                     v);
    
    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    this->translateAndAddMultipole(scratch, temp, v, ::au::edu::anu::mm::Expansion::genComplexK(
                                                       polar->FMGL(phi),
                                                       this->FMGL(p)),
                                   source, (__extension__ ({
                                       
                                       //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                       x10_double theta__72324 =
                                         polar->FMGL(theta);
                                       x10_long numTerms__72325 =
                                         this->FMGL(p);
                                       ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                         theta__72324, numTerms__72325,
                                         ((x10_int)0));
                                   }))
                                   );
}

//#line 184 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::rotate(
  x10_double theta, x10_double phi) {
    
    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* target =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (target)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      this->FMGL(p));
    
    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::x10::lang::Rail< x10_complex >* temp = ::x10::lang::Rail< x10_complex >::_make(((this->FMGL(p)) + (((x10_long)1ll))));
    
    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    this->rotate(temp, ::x10aux::nullCheck(::au::edu::anu::mm::Expansion::genComplexK(
                                             phi, this->FMGL(p)))->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                         ((x10_long)1ll)), ::x10aux::nullCheck((__extension__ ({
                                               
                                               //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                               x10_double theta__72326 =
                                                 theta;
                                               x10_long numTerms__72327 =
                                                 this->FMGL(p);
                                               ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                                 theta__72326,
                                                 numTerms__72327,
                                                 ((x10_int)0));
                                           }))
                                           )->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                             ((x10_long)0ll)),
                 reinterpret_cast< ::au::edu::anu::mm::Expansion*>(target));
    
    //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    return target;
    
}

//#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::getMacroscopicParent(
  ) {
    
    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* parentExpansion =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (parentExpansion)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      this->FMGL(p));
    
    //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__62406max__72448 = this->FMGL(p);
    {
        x10_long i__72449;
        for (i__72449 = ((x10_long)0ll); ((i__72449) <= (i__62406max__72448));
             i__72449 = ((i__72449) + (((x10_long)1ll))))
        {
            x10_long l__72450 = i__72449;
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__62388max__72445 = l__72450;
            {
                x10_long i__72446;
                for (i__72446 = ((x10_long)0ll); ((i__72446) <= (i__62388max__72445));
                     i__72446 = ((i__72446) + (((x10_long)1ll))))
                {
                    x10_long m__72447 = i__72446;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72438 = l__72450;
                    x10_long m__72439 = m__72447;
                    x10_complex v__72440 = ::x10::lang::ComplexNatives::_times((__extension__ ({
                        
                        //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                        ::au::edu::anu::mm::Expansion* this__72441 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__72442 = l__72450;
                        x10_long m__72443 = m__72447;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__72441)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__72442) * (((l__72442) + (((x10_long)1ll)))))) + (m__72443)));
                    }))
                    , ::x10::lang::Math::pow(3.0, l__72450));
                    x10_complex ret__72444;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(parentExpansion->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72438) * (((l__72438) + (((x10_long)1ll)))))) + (m__72439)),
                      v__72440);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72444 = v__72440;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72444;
                }
            }
            
        }
    }
    
    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    return parentExpansion;
    
}

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::MultipoleExpansion::au__edu__anu__mm__MultipoleExpansion____this__au__edu__anu__mm__MultipoleExpansion(
  ) {
    return this;
    
}
void au::edu::anu::mm::MultipoleExpansion::__fieldInitializers_au_edu_anu_mm_MultipoleExpansion(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::MultipoleExpansion::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::MultipoleExpansion::_deserializer);

void au::edu::anu::mm::MultipoleExpansion::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::mm::Expansion::_serialize_body(buf);
    
}

::x10::lang::Reference* ::au::edu::anu::mm::MultipoleExpansion::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::MultipoleExpansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::MultipoleExpansion::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Expansion::_deserialize_body(buf);
    
}

::x10aux::RuntimeType au::edu::anu::mm::MultipoleExpansion::rtt;
void au::edu::anu::mm::MultipoleExpansion::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::mm::Expansion>()};
    rtt.initStageTwo("au.edu.anu.mm.MultipoleExpansion",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of MultipoleExpansion */
/*************************************************/
