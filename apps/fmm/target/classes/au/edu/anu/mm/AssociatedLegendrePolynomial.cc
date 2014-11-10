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
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70645 = this;
    
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
    x10_double ret__70669;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70669 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70669;
    x10_double v__70670 = (-(sinTheta));
    x10_double ret__70671;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)1ll))),
      v__70670);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70671 = v__70670;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70671;
    x10_double v__70672 = cosTheta;
    x10_double ret__70673;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__70672);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70673 = v__70672;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70673;
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__63130max__70674 = p;
    {
        x10_long i__70675;
        for (i__70675 = ((x10_long)2ll); ((i__70675) <= (i__63130max__70674));
             i__70675 = ((i__70675) + (((x10_long)1ll))))
        {
            x10_long l__70676 = i__70675;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__70654 = l__70676;
            x10_long m__70655 = l__70676;
            x10_double v__70656 = ((((fact) * (sinTheta))) * ((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__70657 = ((l__70676) - (((x10_long)1ll)));
                x10_long m__70658 = ((l__70676) - (((x10_long)1ll)));
                ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__70657) * (((l__70657) + (((x10_long)1ll)))))) + (m__70658)));
            }))
            ))));
            x10_double ret__70659;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__70654) * (((l__70654) + (((x10_long)1ll)))))) + (m__70655)),
              v__70656);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70659 = v__70656;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70659;
            x10_long l__70660 = l__70676;
            x10_long m__70661 = ((l__70676) - (((x10_long)1ll)));
            x10_double v__70662 = ((((fact) * (cosTheta))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__70663 = ((l__70676) - (((x10_long)1ll)));
                x10_long m__70664 = ((l__70676) - (((x10_long)1ll)));
                ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__70663) * (((l__70663) + (((x10_long)1ll)))))) + (m__70664)));
            }))
            ));
            x10_double ret__70665;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__70660) * (((l__70660) + (((x10_long)1ll)))))) + (m__70661)),
              v__70662);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70665 = v__70662;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70665;
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__63112max__70666 = ((l__70676) - (((x10_long)2ll)));
            {
                x10_long i__70667;
                for (i__70667 = ((x10_long)0ll); ((i__70667) <= (i__63112max__70666));
                     i__70667 = ((i__70667) + (((x10_long)1ll))))
                {
                    x10_long k__70668 = i__70667;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__70646 = l__70676;
                    x10_long m__70647 = k__70668;
                    x10_double v__70648 = ((((((((fact) * (cosTheta))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__70649 = ((l__70676) - (((x10_long)1ll)));
                        x10_long m__70650 = k__70668;
                        ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__70649) * (((l__70649) + (((x10_long)1ll)))))) + (m__70650)));
                    }))
                    ))) - (((((x10_double) (((((l__70676) + (k__70668))) - (((x10_long)1ll)))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__70651 = ((l__70676) - (((x10_long)2ll)));
                        x10_long m__70652 = k__70668;
                        ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__70651) * (((l__70651) + (((x10_long)1ll)))))) + (m__70652)));
                    }))
                    ))))) / (((x10_double) (((l__70676) - (k__70668))))));
                    x10_double ret__70653;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(P->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__70646) * (((l__70646) + (((x10_long)1ll)))))) + (m__70647)),
                      v__70648);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__70653 = v__70648;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__70653;
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
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70707 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__70708;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__70707)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70708 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70708;
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70709 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double v__70710 = (-(sinTheta));
    x10_double ret__70711;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__70709)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)1ll))),
      v__70710);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70711 = v__70710;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70711;
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70712 =
      this;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double v__70713 = cosTheta;
    x10_double ret__70714;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this__70712)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)1ll)) * (((((x10_long)1ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__70713);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70714 = v__70713;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70714;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double fact = 1.0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_long i__63166max__70715 = this->FMGL(p);
    {
        x10_long i__70716;
        for (i__70716 = ((x10_long)2ll); ((i__70716) <= (i__63166max__70715));
             i__70716 = ((i__70716) + (((x10_long)1ll))))
        {
            x10_long l__70717 = i__70716;
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            fact = ((fact) + (2.0));
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70688 =
              this;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__70689 = l__70717;
            x10_long m__70690 = l__70717;
            x10_double v__70691 = ((((fact) * (sinTheta))) * ((-((__extension__ ({
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70692 =
                  this;
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__70693 = ((l__70717) - (((x10_long)1ll)));
                x10_long m__70694 = ((l__70717) - (((x10_long)1ll)));
                ::x10aux::nullCheck(::x10aux::nullCheck(this__70692)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__70693) * (((l__70693) + (((x10_long)1ll)))))) + (m__70694)));
            }))
            ))));
            x10_double ret__70695;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__70688)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__70689) * (((l__70689) + (((x10_long)1ll)))))) + (m__70690)),
              v__70691);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70695 = v__70691;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70695;
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70696 =
              this;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long l__70697 = l__70717;
            x10_long m__70698 = ((l__70717) - (((x10_long)1ll)));
            x10_double v__70699 = ((((fact) * (cosTheta))) * ((__extension__ ({
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70700 =
                  this;
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__70701 = ((l__70717) - (((x10_long)1ll)));
                x10_long m__70702 = ((l__70717) - (((x10_long)1ll)));
                ::x10aux::nullCheck(::x10aux::nullCheck(this__70700)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__70701) * (((l__70701) + (((x10_long)1ll)))))) + (m__70702)));
            }))
            ));
            x10_double ret__70703;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__70696)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__70697) * (((l__70697) + (((x10_long)1ll)))))) + (m__70698)),
              v__70699);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70703 = v__70699;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70703;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__63148max__70704 = ((l__70717) - (((x10_long)2ll)));
            {
                x10_long i__70705;
                for (i__70705 = ((x10_long)0ll); ((i__70705) <= (i__63148max__70704));
                     i__70705 = ((i__70705) + (((x10_long)1ll))))
                {
                    x10_long k__70706 = i__70705;
                    
                    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70677 =
                      this;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    x10_long l__70678 = l__70717;
                    x10_long m__70679 = k__70706;
                    x10_double v__70680 = ((((((((fact) * (cosTheta))) * ((__extension__ ({
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70681 =
                          this;
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__70682 = ((l__70717) - (((x10_long)1ll)));
                        x10_long m__70683 = k__70706;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__70681)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__70682) * (((l__70682) + (((x10_long)1ll)))))) + (m__70683)));
                    }))
                    ))) - (((((x10_double) (((((l__70717) + (k__70706))) - (((x10_long)1ll)))))) * ((__extension__ ({
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70684 =
                          this;
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__70685 = ((l__70717) - (((x10_long)2ll)));
                        x10_long m__70686 = k__70706;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__70684)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__70685) * (((l__70685) + (((x10_long)1ll)))))) + (m__70686)));
                    }))
                    ))))) / (((x10_double) (((l__70717) - (k__70706))))));
                    x10_double ret__70687;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__70677)->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__70678) * (((l__70678) + (((x10_long)1ll)))))) + (m__70679)),
                      v__70680);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__70687 = v__70680;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__70687;
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
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73257))));
    }
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* Plm =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::AssociatedLegendrePolynomial>()) ::au::edu::anu::mm::AssociatedLegendrePolynomial());
    (Plm)->::au::edu::anu::mm::AssociatedLegendrePolynomial::_constructor(
      p);
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    x10_double ret__70738;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      1.0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70738 = 1.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
    ret__70738;
    
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
            x10_long l__70718 = i;
            x10_long m__70719 = i;
            x10_double v__70720 = (((((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__70721 = ((i) - (((x10_long)1ll)));
                x10_long m__70722 = ((i) - (((x10_long)1ll)));
                ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__70721) * (((l__70721) + (((x10_long)1ll)))))) + (m__70722)));
            }))
            ))) * (fact))) * (somx2));
            x10_double ret__70723;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__70718) * (((l__70718) + (((x10_long)1ll)))))) + (m__70719)),
              v__70720);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70723 = v__70720;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70723;
            x10_long l__70724 = i;
            x10_long m__70725 = ((i) - (((x10_long)1ll)));
            x10_double v__70726 = ((((x) * (fact))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__70727 = ((i) - (((x10_long)1ll)));
                x10_long m__70728 = ((i) - (((x10_long)1ll)));
                ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__70727) * (((l__70727) + (((x10_long)1ll)))))) + (m__70728)));
            }))
            ));
            x10_double ret__70729;
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
              ((((l__70724) * (((l__70724) + (((x10_long)1ll)))))) + (m__70725)),
              v__70726);
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70729 = v__70726;
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            ret__70729;
            
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
                    x10_long l__70730 = l;
                    x10_long m__70731 = m;
                    x10_double v__70732 = ((((((((x) * (((((2.0) * (((x10_double) (l))))) - (1.0))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__70733 = ((l) - (((x10_long)1ll)));
                        x10_long m__70734 = m;
                        ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__70733) * (((l__70733) + (((x10_long)1ll)))))) + (m__70734)));
                    }))
                    ))) - (((((((x10_double) (((l) + (m))))) - (1.0))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__70735 = ((l) - (((x10_long)2ll)));
                        x10_long m__70736 = m;
                        ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__70735) * (((l__70735) + (((x10_long)1ll)))))) + (m__70736)));
                    }))
                    ))))) / (((x10_double) (((l) - (m))))));
                    x10_double ret__70737;
                    
                    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ::x10aux::nullCheck(Plm->FMGL(terms))->x10::lang::Rail< x10_double >::__set(
                      ((((l__70730) * (((l__70730) + (((x10_long)1ll)))))) + (m__70731)),
                      v__70732);
                    
                    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__70737 = v__70732;
                    
                    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    ret__70737;
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
    x10_long i__63202max__70745 = this->FMGL(p);
    {
        x10_long i__70746;
        for (i__70746 = ((x10_long)0ll); ((i__70746) <= (i__63202max__70745));
             i__70746 = ((i__70746) + (((x10_long)1ll))))
        {
            x10_long i__70747 = i__70746;
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            x10_long i__63184max__70742 = i__70747;
            {
                x10_long i__70743;
                for (i__70743 = ((x10_long)0ll); ((i__70743) <= (i__63184max__70742));
                     i__70743 = ((i__70743) + (((x10_long)1ll))))
                {
                    x10_long j__70744 = i__70743;
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                    s->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73258), (__extension__ ({
                               ::au::edu::anu::mm::AssociatedLegendrePolynomial* this__70739 =
                                 this;
                               
                               //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                               x10_long l__70740 = i__70747;
                               x10_long m__70741 = j__70744;
                               ::x10aux::nullCheck(::x10aux::nullCheck(this__70739)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                                 ((((l__70740) * (((l__70740) + (((x10_long)1ll)))))) + (m__70741)));
                           }))
                           ), (&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73259)));
                }
            }
            
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
            s->add((&::au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73260));
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

::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73258("");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73259(" ");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73260("\n");
::x10::lang::String au::edu::anu::mm::AssociatedLegendrePolynomial_Strings::sl__73257("abs(x) > 1: Associated Legendre functions are only defined on [-1, 1].");

/* END of AssociatedLegendrePolynomial */
/*************************************************/
