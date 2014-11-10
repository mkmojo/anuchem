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
    ::au::edu::anu::mm::MultipoleExpansion* this__67176 = this;
    
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
    ::au::edu::anu::mm::MultipoleExpansion* this__67177 = this;
    
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
    x10_complex v__67194 = x10_complex(q,0.0);
    x10_complex ret__67195;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__67194);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__67195 = v__67194;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__67195;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__59920max__67196 = p;
    {
        x10_long i__67197;
        for (i__67197 = ((x10_long)1ll); ((i__67197) <= (i__59920max__67196));
             i__67197 = ((i__67197) + (((x10_long)1ll))))
        {
            x10_long l__67198 = i__67197;
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__67198))));
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__67192 = il;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__67193 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__67185 = l__67198;
            x10_complex v__67186 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__67193, ilm__67192), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__67187 = l__67198;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__67187) * (((l__67187) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )));
            x10_complex ret__67188;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__67185) * (((l__67185) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__67186);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__67188 = v__67186;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__67188;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__59902max__67189 = l__67198;
            {
                x10_long i__67190;
                for (i__67190 = ((x10_long)1ll); ((i__67190) <= (i__59902max__67189));
                     i__67190 = ((i__67190) + (((x10_long)1ll))))
                {
                    x10_long m__67191 = i__67190;
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__67192 = ((ilm__67192) * (((x10_double) (((l__67198) + (m__67191))))));
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__67193 = ::x10::lang::ComplexNatives::_times(phifac__67193, phifac0);
                    
                    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__67182 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__67193, ilm__67192), ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67183 = l__67198;
                        x10_long m__67184 = m__67191;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67183) * (((l__67183) + (((x10_long)1ll)))))) + (m__67184)));
                    }))
                    )));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__67178 = l__67198;
                    x10_long m__67179 = m__67191;
                    x10_complex v__67180 = O_lm__67182;
                    x10_complex ret__67181;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__67178) * (((l__67178) + (((x10_long)1ll)))))) + (m__67179)),
                      v__67180);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67181 = v__67180;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67181;
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
    ::au::edu::anu::mm::MultipoleExpansion* a__67227 = this;
    x10_complex r__67228 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
        ::x10aux::nullCheck(::x10aux::nullCheck(a__67227)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    , x10_complex(q,0.0));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__67199 = r__67228;
    x10_complex ret__67200;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__67227)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__67199);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__67200 = v__67199;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__67200;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__59956max__67229 = this->FMGL(p);
    {
        x10_long i__67230;
        for (i__67230 = ((x10_long)1ll); ((i__67230) <= (i__59956max__67229));
             i__67230 = ((i__67230) + (((x10_long)1ll))))
        {
            x10_long l__67231 = i__67230;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__67231))));
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__67225 = il;
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__67226 = x10_complex(1.0,0.0);
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            ::au::edu::anu::mm::MultipoleExpansion* a__67217 =
              this;
            x10_long i__67218 = l__67231;
            x10_complex r__67219 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__67220 = i__67218;
                ::x10aux::nullCheck(::x10aux::nullCheck(a__67217)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__67220) * (((l__67220) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            , ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__67226, ilm__67225), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__67221 = l__67231;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__67221) * (((l__67221) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ))));
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__67201 = i__67218;
            x10_complex v__67202 = r__67219;
            x10_complex ret__67203;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(a__67217)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__67201) * (((l__67201) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__67202);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__67203 = v__67202;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__67203;
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__59938max__67222 = l__67231;
            {
                x10_long i__67223;
                for (i__67223 = ((x10_long)1ll); ((i__67223) <= (i__59938max__67222));
                     i__67223 = ((i__67223) + (((x10_long)1ll))))
                {
                    x10_long m__67224 = i__67223;
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__67225 = ((ilm__67225) * (((x10_double) (((l__67231) + (m__67224))))));
                    
                    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__67226 = ::x10::lang::ComplexNatives::_times(phifac__67226, phifac0);
                    
                    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__67214 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__67226, ilm__67225), ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67215 = l__67231;
                        x10_long m__67216 = m__67224;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67215) * (((l__67215) + (((x10_long)1ll)))))) + (m__67216)));
                    }))
                    )));
                    
                    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ::au::edu::anu::mm::MultipoleExpansion* a__67208 =
                      this;
                    x10_long i__67209 = l__67231;
                    x10_long i__67210 = m__67224;
                    x10_complex r__67211 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__67212 = i__67209;
                        x10_long m__67213 = i__67210;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__67208)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__67212) * (((l__67212) + (((x10_long)1ll)))))) + (m__67213)));
                    }))
                    , O_lm__67214);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__67204 = i__67209;
                    x10_long m__67205 = i__67210;
                    x10_complex v__67206 = r__67211;
                    x10_complex ret__67207;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__67208)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__67204) * (((l__67204) + (((x10_long)1ll)))))) + (m__67205)),
                      v__67206);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67207 = v__67206;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67207;
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
    x10_complex v__67248 = x10_complex(1.0,0.0);
    x10_complex ret__67249;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__67248);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__67249 = v__67248;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__67249;
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_double il = 1.0;
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
    x10_long i__59992max__67250 = p;
    {
        x10_long i__67251;
        for (i__67251 = ((x10_long)1ll); ((i__67251) <= (i__59992max__67250));
             i__67251 = ((i__67251) + (((x10_long)1ll))))
        {
            x10_long l__67252 = i__67251;
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            il = ((il) * (((x10_double) (l__67252))));
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double ilm__67246 = il;
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_complex phifac__67247 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__67239 = l__67252;
            x10_complex v__67240 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__67247, ilm__67246), ((rfac) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__67241 = l__67252;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__67241) * (((l__67241) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )));
            x10_complex ret__67242;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__67239) * (((l__67239) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__67240);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__67242 = v__67240;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__67242;
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__59974max__67243 = l__67252;
            {
                x10_long i__67244;
                for (i__67244 = ((x10_long)1ll); ((i__67244) <= (i__59974max__67243));
                     i__67244 = ((i__67244) + (((x10_long)1ll))))
                {
                    x10_long m__67245 = i__67244;
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    ilm__67246 = ((ilm__67246) * (((x10_double) (((l__67252) + (m__67245))))));
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    phifac__67247 = ::x10::lang::ComplexNatives::_times(phifac__67247, phifac0);
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__67236 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_divide(phifac__67247, ilm__67246), ((rfac) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67237 = l__67252;
                        x10_long m__67238 = m__67245;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67237) * (((l__67237) + (((x10_long)1ll)))))) + (m__67238)));
                    }))
                    )));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__67232 = l__67252;
                    x10_long m__67233 = m__67245;
                    x10_complex v__67234 = O_lm__67236;
                    x10_complex ret__67235;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__67232) * (((l__67232) + (((x10_long)1ll)))))) + (m__67233)),
                      v__67234);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67235 = v__67234;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67235;
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
    x10_long i__60064max__67275 = this->FMGL(p);
    {
        x10_long i__67276;
        for (i__67276 = ((x10_long)0ll); ((i__67276) <= (i__60064max__67275));
             i__67276 = ((i__67276) + (((x10_long)1ll))))
        {
            x10_long m__67277 = i__67276;
            
            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__60010min__67266 = m__67277;
            x10_long i__60010max__67267 = this->FMGL(p);
            {
                x10_long i__67268;
                for (i__67268 = i__60010min__67266; ((i__67268) <= (i__60010max__67267));
                     i__67268 = ((i__67268) + (((x10_long)1ll))))
                {
                    x10_long l__67269 = i__67268;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__67269, (__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__67253 = l__67269;
                          x10_long m__67254 = m__67277;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__67253) * (((l__67253) + (((x10_long)1ll)))))) + (m__67254)));
                      }))
                      );
                }
            }
            
            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_double b_lm_pow__67274 = 1.0;
            
            //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__60046min__67270 = m__67277;
            x10_long i__60046max__67271 = this->FMGL(p);
            {
                x10_long i__67272;
                for (i__67272 = i__60046min__67270; ((i__67272) <= (i__60046max__67271));
                     i__67272 = ((i__67272) + (((x10_long)1ll))))
                {
                    x10_long l__67273 = i__67272;
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_complex O_lm__67263 = x10_complex(0.0,0.0);
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_double F_lm__67264 = ((b_lm_pow__67274) / ((__extension__ ({
                        
                        //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                        x10_long i__67265 = ((l__67273) - (m__67277));
                        ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                          i__67265);
                    }))
                    ));
                    
                    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    x10_long i__60028min__67255 = m__67277;
                    x10_long i__60028max__67256 = l__67273;
                    {
                        x10_long i__67257;
                        for (i__67257 = i__60028min__67255;
                             ((i__67257) <= (i__60028max__67256));
                             i__67257 = ((i__67257) + (((x10_long)1ll))))
                        {
                            x10_long j__67258 = i__67257;
                            
                            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                            O_lm__67263 = ::x10::lang::ComplexNatives::_plus(O_lm__67263, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__67258), F_lm__67264));
                            
                            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                            F_lm__67264 = ((((F_lm__67264) * (((x10_double) (((l__67273) - (j__67258))))))) * (invB));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__67259 = l__67273;
                    x10_long m__67260 = m__67277;
                    x10_complex v__67261 = O_lm__67263;
                    x10_complex ret__67262;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__67259) * (((l__67259) + (((x10_long)1ll)))))) + (m__67260)),
                      v__67261);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67262 = v__67261;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67262;
                    
                    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                    b_lm_pow__67274 = ((b_lm_pow__67274) * (b));
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
                                       x10_double theta__67164 =
                                         polar->FMGL(theta);
                                       x10_long numTerms__67165 =
                                         this->FMGL(p);
                                       ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                         theta__67164, numTerms__67165,
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
                                               x10_double theta__67166 =
                                                 theta;
                                               x10_long numTerms__67167 =
                                                 this->FMGL(p);
                                               ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                                 theta__67166,
                                                 numTerms__67167,
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
    x10_long i__60100max__67288 = this->FMGL(p);
    {
        x10_long i__67289;
        for (i__67289 = ((x10_long)0ll); ((i__67289) <= (i__60100max__67288));
             i__67289 = ((i__67289) + (((x10_long)1ll))))
        {
            x10_long l__67290 = i__67289;
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
            x10_long i__60082max__67285 = l__67290;
            {
                x10_long i__67286;
                for (i__67286 = ((x10_long)0ll); ((i__67286) <= (i__60082max__67285));
                     i__67286 = ((i__67286) + (((x10_long)1ll))))
                {
                    x10_long m__67287 = i__67286;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__67278 = l__67290;
                    x10_long m__67279 = m__67287;
                    x10_complex v__67280 = ::x10::lang::ComplexNatives::_times((__extension__ ({
                        
                        //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/MultipoleExpansion.x10"
                        ::au::edu::anu::mm::Expansion* this__67281 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__67282 = l__67290;
                        x10_long m__67283 = m__67287;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__67281)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__67282) * (((l__67282) + (((x10_long)1ll)))))) + (m__67283)));
                    }))
                    , ::x10::lang::Math::pow(3.0, l__67290));
                    x10_complex ret__67284;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(parentExpansion->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__67278) * (((l__67278) + (((x10_long)1ll)))))) + (m__67279)),
                      v__67280);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67284 = v__67280;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67284;
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
