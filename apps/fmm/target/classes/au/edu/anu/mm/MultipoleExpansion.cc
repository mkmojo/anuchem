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
    ::au::edu::anu::mm::MultipoleExpansion* this__47936 = this;
    
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
    ::au::edu::anu::mm::MultipoleExpansion* this__47937 = this;
    
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
    x10_complex v__47954 = x10_complex(q,0.0);
    x10_complex ret__47955;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__47954);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47955 = v__47954;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47955;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__27920max__47956 = p;
    {
        x10_long i__47957;
        for (i__47957 = ((x10_long)1ll); ((i__47957) <= (i__27920max__47956));
             i__47957 = ((i__47957) + (((x10_long)1ll))))
        {
            x10_long l__47958 = i__47957;
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__47958))));
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__47952 = il;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__47953 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__47945 = l__47958;
            x10_complex v__47946 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__47953, ilm__47952), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__47947 = l__47958;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__47947) * (((l__47947) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )));
            x10_complex ret__47948;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__47945) * (((l__47945) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__47946);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__47948 = v__47946;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__47948;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__27902max__47949 = l__47958;
            {
                x10_long i__47950;
                for (i__47950 = ((x10_long)1ll); ((i__47950) <= (i__27902max__47949));
                     i__47950 = ((i__47950) + (((x10_long)1ll))))
                {
                    x10_long m__47951 = i__47950;
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__47952 = ((ilm__47952) * (((x10_double) (((l__47958) + (m__47951))))));
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__47953 = ::x10::lang::ComplexNatives::_times(phifac__47953, phifac0);
                    
                    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__47942 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__47953, ilm__47952), ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47943 = l__47958;
                        x10_long m__47944 = m__47951;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47943) * (((l__47943) + (((x10_long)1ll)))))) + (m__47944)));
                    }))
                    )));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47938 = l__47958;
                    x10_long m__47939 = m__47951;
                    x10_complex v__47940 = O_lm__47942;
                    x10_complex ret__47941;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47938) * (((l__47938) + (((x10_long)1ll)))))) + (m__47939)),
                      v__47940);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47941 = v__47940;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47941;
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
    ::au::edu::anu::mm::MultipoleExpansion* a__47987 = this;
    x10_complex r__47988 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
        ::x10aux::nullCheck(::x10aux::nullCheck(a__47987)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    , x10_complex(q,0.0));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__47959 = r__47988;
    x10_complex ret__47960;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__47987)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__47959);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47960 = v__47959;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47960;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__27956max__47989 = this->FMGL(p);
    {
        x10_long i__47990;
        for (i__47990 = ((x10_long)1ll); ((i__47990) <= (i__27956max__47989));
             i__47990 = ((i__47990) + (((x10_long)1ll))))
        {
            x10_long l__47991 = i__47990;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__47991))));
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__47985 = il;
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__47986 = x10_complex(1.0,0.0);
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            ::au::edu::anu::mm::MultipoleExpansion* a__47977 =
              this;
            x10_long i__47978 = l__47991;
            x10_complex r__47979 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__47980 = i__47978;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__47977)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__47980) * (((l__47980) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            , ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__47986, ilm__47985), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__47981 = l__47991;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__47981) * (((l__47981) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ))));
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__47961 = i__47978;
            x10_complex v__47962 = r__47979;
            x10_complex ret__47963;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__47977)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__47961) * (((l__47961) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__47962);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__47963 = v__47962;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__47963;
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__27938max__47982 = l__47991;
            {
                x10_long i__47983;
                for (i__47983 = ((x10_long)1ll); ((i__47983) <= (i__27938max__47982));
                     i__47983 = ((i__47983) + (((x10_long)1ll))))
                {
                    x10_long m__47984 = i__47983;
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__47985 = ((ilm__47985) * (((x10_double) (((l__47991) + (m__47984))))));
                    
                    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__47986 = ::x10::lang::ComplexNatives::_times(phifac__47986, phifac0);
                    
                    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__47974 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__47986, ilm__47985), ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47975 = l__47991;
                        x10_long m__47976 = m__47984;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47975) * (((l__47975) + (((x10_long)1ll)))))) + (m__47976)));
                    }))
                    )));
                    
                    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ::au::edu::anu::mm::MultipoleExpansion* a__47968 =
                      this;
                    x10_long i__47969 = l__47991;
                    x10_long i__47970 = m__47984;
                    x10_complex r__47971 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__47972 = i__47969;
                        x10_long m__47973 = i__47970;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__47968)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__47972) * (((l__47972) + (((x10_long)1ll)))))) + (m__47973)));
                    }))
                    , O_lm__47974);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47964 = i__47969;
                    x10_long m__47965 = i__47970;
                    x10_complex v__47966 = r__47971;
                    x10_complex ret__47967;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__47968)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47964) * (((l__47964) + (((x10_long)1ll)))))) + (m__47965)),
                      v__47966);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47967 = v__47966;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47967;
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
    x10_complex v__48008 = x10_complex(1.0,0.0);
    x10_complex ret__48009;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__48008);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__48009 = v__48008;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__48009;
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__27992max__48010 = p;
    {
        x10_long i__48011;
        for (i__48011 = ((x10_long)1ll); ((i__48011) <= (i__27992max__48010));
             i__48011 = ((i__48011) + (((x10_long)1ll))))
        {
            x10_long l__48012 = i__48011;
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__48012))));
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__48006 = il;
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__48007 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__47999 = l__48012;
            x10_complex v__48000 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__48007, ilm__48006), ((rfac) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__48001 = l__48012;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__48001) * (((l__48001) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )));
            x10_complex ret__48002;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__47999) * (((l__47999) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__48000);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__48002 = v__48000;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__48002;
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__27974max__48003 = l__48012;
            {
                x10_long i__48004;
                for (i__48004 = ((x10_long)1ll); ((i__48004) <= (i__27974max__48003));
                     i__48004 = ((i__48004) + (((x10_long)1ll))))
                {
                    x10_long m__48005 = i__48004;
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__48006 = ((ilm__48006) * (((x10_double) (((l__48012) + (m__48005))))));
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__48007 = ::x10::lang::ComplexNatives::_times(phifac__48007, phifac0);
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__47996 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__48007, ilm__48006), ((rfac) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47997 = l__48012;
                        x10_long m__47998 = m__48005;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47997) * (((l__47997) + (((x10_long)1ll)))))) + (m__47998)));
                    }))
                    )));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47992 = l__48012;
                    x10_long m__47993 = m__48005;
                    x10_complex v__47994 = O_lm__47996;
                    x10_complex ret__47995;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47992) * (((l__47992) + (((x10_long)1ll)))))) + (m__47993)),
                      v__47994);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47995 = v__47994;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47995;
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
    x10_long i__28064max__48035 = this->FMGL(p);
    {
        x10_long i__48036;
        for (i__48036 = ((x10_long)0ll); ((i__48036) <= (i__28064max__48035));
             i__48036 = ((i__48036) + (((x10_long)1ll))))
        {
            x10_long m__48037 = i__48036;
            
            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__28010min__48026 = m__48037;
            x10_long i__28010max__48027 = this->FMGL(p);
            {
                x10_long i__48028;
                for (i__48028 = i__28010min__48026; ((i__48028) <= (i__28010max__48027));
                     i__48028 = ((i__48028) + (((x10_long)1ll))))
                {
                    x10_long l__48029 = i__48028;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__48029, (__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__48013 = l__48029;
                          x10_long m__48014 = m__48037;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__48013) * (((l__48013) + (((x10_long)1ll)))))) + (m__48014)));
                      }))
                      );
                }
            }
            
            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double b_lm_pow__48034 = 1.0;
            
            //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__28046min__48030 = m__48037;
            x10_long i__28046max__48031 = this->FMGL(p);
            {
                x10_long i__48032;
                for (i__48032 = i__28046min__48030; ((i__48032) <= (i__28046max__48031));
                     i__48032 = ((i__48032) + (((x10_long)1ll))))
                {
                    x10_long l__48033 = i__48032;
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__48023 = x10_complex(0.0,0.0);
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_double F_lm__48024 = ((b_lm_pow__48034) / ((__extension__ ({
                        
                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                        x10_long i__48025 = ((l__48033) - (m__48037));
                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                          i__48025);
                    }))
                    ));
                    
                    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_long i__28028min__48015 = m__48037;
                    x10_long i__28028max__48016 = l__48033;
                    {
                        x10_long i__48017;
                        for (i__48017 = i__28028min__48015;
                             ((i__48017) <= (i__28028max__48016));
                             i__48017 = ((i__48017) + (((x10_long)1ll))))
                        {
                            x10_long j__48018 = i__48017;
                            
                            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                            O_lm__48023 = ::x10::lang::ComplexNatives::_plus(O_lm__48023, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__48018), F_lm__48024));
                            
                            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                            F_lm__48024 = ((((F_lm__48024) * (((x10_double) (((l__48033) - (j__48018))))))) * (invB));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__48019 = l__48033;
                    x10_long m__48020 = m__48037;
                    x10_complex v__48021 = O_lm__48023;
                    x10_complex ret__48022;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__48019) * (((l__48019) + (((x10_long)1ll)))))) + (m__48020)),
                      v__48021);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__48022 = v__48021;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__48022;
                    
                    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    b_lm_pow__48034 = ((b_lm_pow__48034) * (b));
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
                                       x10_double theta__47924 =
                                         polar->FMGL(theta);
                                       x10_long numTerms__47925 =
                                         this->FMGL(p);
                                       ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                         theta__47924, numTerms__47925,
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
                                               x10_double theta__47926 =
                                                 theta;
                                               x10_long numTerms__47927 =
                                                 this->FMGL(p);
                                               ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                                 theta__47926,
                                                 numTerms__47927,
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
    x10_long i__28100max__48048 = this->FMGL(p);
    {
        x10_long i__48049;
        for (i__48049 = ((x10_long)0ll); ((i__48049) <= (i__28100max__48048));
             i__48049 = ((i__48049) + (((x10_long)1ll))))
        {
            x10_long l__48050 = i__48049;
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__28082max__48045 = l__48050;
            {
                x10_long i__48046;
                for (i__48046 = ((x10_long)0ll); ((i__48046) <= (i__28082max__48045));
                     i__48046 = ((i__48046) + (((x10_long)1ll))))
                {
                    x10_long m__48047 = i__48046;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__48038 = l__48050;
                    x10_long m__48039 = m__48047;
                    x10_complex v__48040 = ::x10::lang::ComplexNatives::_times((__extension__ ({
                        
                        //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                        ::au::edu::anu::mm::Expansion* this__48041 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__48042 = l__48050;
                        x10_long m__48043 = m__48047;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__48041)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__48042) * (((l__48042) + (((x10_long)1ll)))))) + (m__48043)));
                    }))
                    , ::x10::lang::Math::pow(3.0, l__48050));
                    x10_complex ret__48044;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(parentExpansion->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__48038) * (((l__48038) + (((x10_long)1ll)))))) + (m__48039)),
                      v__48040);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__48044 = v__48040;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__48044;
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
