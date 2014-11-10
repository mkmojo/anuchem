/*************************************************/
/* START of LocalExpansion */
#include <au/edu/anu/mm/LocalExpansion.h>

#include <au/edu/anu/mm/Expansion.h>
#include <x10/lang/Long.h>
#include <x10x/vector/Vector3d.h>
#include <x10x/polar/Polar3d.h>
#include <au/edu/anu/mm/AssociatedLegendrePolynomial.h>
#include <x10/lang/Double.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Math.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <x10/regionarray/Array.h>
#include <au/edu/anu/mm/WignerRotationMatrix.h>
#include <au/edu/anu/mm/Factorial.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/compiler/Synthetic.h>

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::_constructor(x10_long p) {
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    (this)->::au::edu::anu::mm::Expansion::_constructor(p);
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::LocalExpansion* this__47442 = this;
    
}
::au::edu::anu::mm::LocalExpansion* au::edu::anu::mm::LocalExpansion::_make(
  x10_long p) {
    ::au::edu::anu::mm::LocalExpansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion();
    this_->_constructor(p);
    return this_;
}



//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::_constructor(::au::edu::anu::mm::LocalExpansion* source) {
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    (this)->::au::edu::anu::mm::Expansion::_constructor(reinterpret_cast< ::au::edu::anu::mm::Expansion*>(source));
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::LocalExpansion* this__47443 = this;
    
}
::au::edu::anu::mm::LocalExpansion* au::edu::anu::mm::LocalExpansion::_make(
  ::au::edu::anu::mm::LocalExpansion* source) {
    ::au::edu::anu::mm::LocalExpansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion();
    this_->_constructor(source);
    return this_;
}



//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
::au::edu::anu::mm::LocalExpansion* au::edu::anu::mm::LocalExpansion::getMlm(
  ::x10x::vector::Vector3d v, x10_long p) {
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::LocalExpansion* exp =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion());
    (exp)->::au::edu::anu::mm::LocalExpansion::_constructor(p);
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10x::polar::Polar3d v_pole = ::x10x::polar::Polar3d::getPolar3d(v);
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* pplm = ::au::edu::anu::mm::AssociatedLegendrePolynomial::getPlk(
                                                               v_pole->FMGL(theta),
                                                               p);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double rfac0 = ((1.0) / (v_pole->FMGL(r)));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__47460 = x10_complex(rfac0,0.0);
    x10_complex ret__47461;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__47460);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47461 = v__47460;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47461;
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos(v_pole->FMGL(phi)),::x10::lang::MathNatives::sin(v_pole->FMGL(phi)));
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double rfac = ((rfac0) * (rfac0));
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double il = 1.0;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__37824max__47462 = p;
    {
        x10_long i__47463;
        for (i__47463 = ((x10_long)1ll); ((i__47463) <= (i__37824max__47462));
             i__47463 = ((i__47463) + (((x10_long)1ll))))
        {
            x10_long l__47464 = i__47463;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            il = ((il) * (((x10_double) (l__47464))));
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double ilm__47458 = il;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex phifac__47459 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__47451 = l__47464;
            x10_complex v__47452 = ::x10::lang::ComplexNatives::_times(phifac__47459, ((((rfac) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__47453 = l__47464;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__47453) * (((l__47453) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ))) * (ilm__47458)));
            x10_complex ret__47454;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__47451) * (((l__47451) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__47452);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__47454 = v__47452;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__47454;
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__37806max__47455 = l__47464;
            {
                x10_long i__47456;
                for (i__47456 = ((x10_long)1ll); ((i__47456) <= (i__37806max__47455));
                     i__47456 = ((i__47456) + (((x10_long)1ll))))
                {
                    x10_long m__47457 = i__47456;
                    
                    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ilm__47458 = ((ilm__47458) / (((x10_double) (((((l__47464) + (((x10_long)1ll)))) - (m__47457))))));
                    
                    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    phifac__47459 = ::x10::lang::ComplexNatives::_times(phifac__47459, phifac0);
                    
                    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__47448 = ::x10::lang::ComplexNatives::_times(phifac__47459, ((((rfac) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47449 = l__47464;
                        x10_long m__47450 = m__47457;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47449) * (((l__47449) + (((x10_long)1ll)))))) + (m__47450)));
                    }))
                    ))) * (ilm__47458)));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47444 = l__47464;
                    x10_long m__47445 = m__47457;
                    x10_complex v__47446 = M_lm__47448;
                    x10_complex ret__47447;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47444) * (((l__47444) + (((x10_long)1ll)))))) + (m__47445)),
                      v__47446);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47447 = v__47446;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47447;
                }
            }
            
            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            rfac = ((rfac) * (rfac0));
        }
    }
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    return exp;
    
}

//#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::translateAndAddLocal(
  ::au::edu::anu::mm::MultipoleExpansion* scratch, ::x10::lang::Rail< x10_complex >* temp,
  ::x10x::vector::Vector3d v, ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* complexK,
  ::au::edu::anu::mm::LocalExpansion* source, ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* wigner) {
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double b = ::x10::lang::MathNatives::sqrt(((((((v->FMGL(i)) * (v->FMGL(i)))) + (((v->FMGL(j)) * (v->FMGL(j)))))) + (((v->FMGL(k)) * (v->FMGL(k))))));
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10aux::nullCheck(source)->rotate(temp, ::x10aux::nullCheck(complexK)->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                                ((x10_long)1ll)),
                                        ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                          ((x10_long)0ll)),
                                        reinterpret_cast< ::au::edu::anu::mm::Expansion*>(scratch));
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__37896max__47485 = this->FMGL(p);
    {
        x10_long i__47486;
        for (i__47486 = ((x10_long)0ll); ((i__47486) <= (i__37896max__47485));
             i__47486 = ((i__47486) + (((x10_long)1ll))))
        {
            x10_long m__47487 = i__47486;
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__37842min__47477 = m__47487;
            x10_long i__37842max__47478 = this->FMGL(p);
            {
                x10_long i__47479;
                for (i__47479 = i__37842min__47477; ((i__47479) <= (i__37842max__47478));
                     i__47479 = ((i__47479) + (((x10_long)1ll))))
                {
                    x10_long l__47480 = i__47479;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__47480, (__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__47465 = l__47480;
                          x10_long m__47466 = m__47487;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__47465) * (((l__47465) + (((x10_long)1ll)))))) + (m__47466)));
                      }))
                      );
                }
            }
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__37878min__47481 = m__47487;
            x10_long i__37878max__47482 = this->FMGL(p);
            {
                x10_long i__47483;
                for (i__47483 = i__37878min__47481; ((i__47483) <= (i__37878max__47482));
                     i__47483 = ((i__47483) + (((x10_long)1ll))))
                {
                    x10_long l__47484 = i__47483;
                    
                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__47475 = x10_complex(0.0,0.0);
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double F_lm__47476 = 1.0;
                    
                    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__37860min__47467 = l__47484;
                    x10_long i__37860max__47468 = this->FMGL(p);
                    {
                        x10_long i__47469;
                        for (i__47469 = i__37860min__47467;
                             ((i__47469) <= (i__37860max__47468));
                             i__47469 = ((i__47469) + (((x10_long)1ll))))
                        {
                            x10_long j__47470 = i__47469;
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            M_lm__47475 = ::x10::lang::ComplexNatives::_plus(M_lm__47475, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__47470), F_lm__47476));
                            
                            //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            F_lm__47476 = ((((F_lm__47476) * (b))) / (((x10_double) (((((j__47470) - (l__47484))) + (((x10_long)1ll)))))));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47471 = l__47484;
                    x10_long m__47472 = m__47487;
                    x10_complex v__47473 = M_lm__47475;
                    x10_complex ret__47474;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47471) * (((l__47471) + (((x10_long)1ll)))))) + (m__47472)),
                      v__47473);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47474 = v__47473;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47474;
                }
            }
            
        }
    }
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10aux::nullCheck(scratch)->backRotateAndAdd(::x10aux::nullCheck(complexK)->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                                     ((x10_long)0ll)),
                                                   ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                                     ((x10_long)1ll)),
                                                   reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this));
}

//#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::translateAndAddLocal(
  ::x10x::vector::Vector3d v, ::au::edu::anu::mm::LocalExpansion* source) {
    
    //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* scratch =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (scratch)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      this->FMGL(p));
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10::lang::Rail< x10_complex >* temp = ::x10::lang::Rail< x10_complex >::_make(((this->FMGL(p)) + (((x10_long)1ll))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10x::polar::Polar3d polar = ::x10x::polar::Polar3d::getPolar3d(
                                     v);
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    this->translateAndAddLocal(scratch, temp, v, ::au::edu::anu::mm::Expansion::genComplexK(
                                                   polar->FMGL(phi),
                                                   this->FMGL(p)),
                               source, (__extension__ ({
                                   
                                   //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                   x10_double theta__47332 =
                                     polar->FMGL(theta);
                                   x10_long numTerms__47333 =
                                     this->FMGL(p);
                                   ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                     theta__47332, numTerms__47333,
                                     ((x10_int)2));
                               }))
                               );
}

//#line 124 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::transformAndAddToLocal(
  ::au::edu::anu::mm::MultipoleExpansion* scratch, ::x10::lang::Rail< x10_complex >* temp,
  ::x10x::vector::Vector3d v, ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* complexK,
  ::au::edu::anu::mm::MultipoleExpansion* source, ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* wigner) {
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double inv_b = ((((x10_double) (((x10_long)1ll)))) / (::x10::lang::MathNatives::sqrt(((((((v->FMGL(i)) * (v->FMGL(i)))) + (((v->FMGL(j)) * (v->FMGL(j)))))) + (((v->FMGL(k)) * (v->FMGL(k))))))));
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10aux::nullCheck(source)->rotate(temp, ::x10aux::nullCheck(complexK)->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                                ((x10_long)0ll)),
                                        ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                          ((x10_long)0ll)),
                                        reinterpret_cast< ::au::edu::anu::mm::Expansion*>(scratch));
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double m_sign = 1.0;
    
    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double b_m_pow = 1.0;
    
    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__37968max__47512 = this->FMGL(p);
    {
        x10_long i__47513;
        for (i__47513 = ((x10_long)0ll); ((i__47513) <= (i__37968max__47512));
             i__47513 = ((i__47513) + (((x10_long)1ll))))
        {
            x10_long m__47514 = i__47513;
            
            //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__37914min__47501 = m__47514;
            x10_long i__37914max__47502 = this->FMGL(p);
            {
                x10_long i__47503;
                for (i__47503 = i__37914min__47501; ((i__47503) <= (i__37914max__47502));
                     i__47503 = ((i__47503) + (((x10_long)1ll))))
                {
                    x10_long l__47504 = i__47503;
                    
                    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__47504, ::x10::lang::ComplexNatives::_times(m_sign, ::x10::lang::ComplexNatives::conj((__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__47488 = l__47504;
                          x10_long m__47489 = m__47514;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__47488) * (((l__47488) + (((x10_long)1ll)))))) + (m__47489)));
                      }))
                      )));
                }
            }
            
            //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double F_lm__47509 = (((((((__extension__ ({
                
                //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                x10_long i__47510 = ((m__47514) + (m__47514));
                ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                  i__47510);
            }))
            ) * (inv_b))) * (b_m_pow))) * (b_m_pow));
            
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double ml__47511 = ((x10_double) (((((m__47514) + (m__47514))) + (((x10_long)1ll)))));
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__37950min__47505 = m__47514;
            x10_long i__37950max__47506 = this->FMGL(p);
            {
                x10_long i__47507;
                for (i__47507 = i__37950min__47505; ((i__47507) <= (i__37950max__47506));
                     i__47507 = ((i__47507) + (((x10_long)1ll))))
                {
                    x10_long l__47508 = i__47507;
                    
                    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__47498 = x10_complex(0.0,0.0);
                    
                    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double F_jl__47499 = F_lm__47509;
                    
                    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double jl__47500 = ml__47511;
                    
                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__37932min__47490 = m__47514;
                    x10_long i__37932max__47491 = this->FMGL(p);
                    {
                        x10_long i__47492;
                        for (i__47492 = i__37932min__47490;
                             ((i__47492) <= (i__37932max__47491));
                             i__47492 = ((i__47492) + (((x10_long)1ll))))
                        {
                            x10_long j__47493 = i__47492;
                            
                            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            M_lm__47498 = ::x10::lang::ComplexNatives::_plus(M_lm__47498, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__47493), F_jl__47499));
                            
                            //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            F_jl__47499 = ((((jl__47500) * (inv_b))) * (F_jl__47499));
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            jl__47500 = ((jl__47500) + (1.0));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47494 = l__47508;
                    x10_long m__47495 = m__47514;
                    x10_complex v__47496 = M_lm__47498;
                    x10_complex ret__47497;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47494) * (((l__47494) + (((x10_long)1ll)))))) + (m__47495)),
                      v__47496);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47497 = v__47496;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47497;
                    
                    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    F_lm__47509 = ((((ml__47511) * (inv_b))) * (F_lm__47509));
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ml__47511 = ((ml__47511) + (((x10_double) (((x10_long)1ll)))));
                }
            }
            
            //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            m_sign = (-(m_sign));
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            b_m_pow = ((b_m_pow) * (inv_b));
        }
    }
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10aux::nullCheck(scratch)->backRotateAndAdd(::x10aux::nullCheck(complexK)->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                                     ((x10_long)0ll)),
                                                   ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                                     ((x10_long)1ll)),
                                                   reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this));
}

//#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::transformAndAddToLocal(
  ::x10x::vector::Vector3d v, ::au::edu::anu::mm::MultipoleExpansion* source) {
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10x::polar::Polar3d polar = ::x10x::polar::Polar3d::getPolar3d(
                                     v);
    
    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::MultipoleExpansion* scratch =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (scratch)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      this->FMGL(p));
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10::lang::Rail< x10_complex >* temp = ::x10::lang::Rail< x10_complex >::_make(((this->FMGL(p)) + (((x10_long)1ll))));
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    this->transformAndAddToLocal(scratch, temp, v, ::au::edu::anu::mm::Expansion::genComplexK(
                                                     polar->FMGL(phi),
                                                     this->FMGL(p)),
                                 source, (__extension__ ({
                                     
                                     //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                     x10_double theta__47376 =
                                       polar->FMGL(theta);
                                     x10_long numTerms__47377 =
                                       this->FMGL(p);
                                     ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                       theta__47376, numTerms__47377,
                                       ((x10_int)-1));
                                 }))
                                 );
}

//#line 180 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::transformAndAddToLocal(
  ::au::edu::anu::mm::LocalExpansion* transform, ::au::edu::anu::mm::MultipoleExpansion* source) {
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__38040max__47545 = this->FMGL(p);
    {
        x10_long i__47546;
        for (i__47546 = ((x10_long)0ll); ((i__47546) <= (i__38040max__47545));
             i__47546 = ((i__47546) + (((x10_long)1ll))))
        {
            x10_long j__47547 = i__47546;
            
            //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double k_sign__47544 = ((x10_double) (((((x10_long)1ll)) - (((((((x10_long)2ll)) * (j__47547))) % ::x10aux::zeroCheck(((x10_long)2ll)))))));
            
            //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__38022min__47540 = (-(j__47547));
            x10_long i__38022max__47541 = j__47547;
            {
                x10_long i__47542;
                for (i__47542 = i__38022min__47540; ((i__47542) <= (i__38022max__47541));
                     i__47542 = ((i__47542) + (((x10_long)1ll))))
                {
                    x10_long k__47543 = i__47542;
                    
                    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex O_jk__47535 = ((k__47543) < (((x10_long)0ll)))
                      ? (::x10::lang::ComplexNatives::_times(k_sign__47544, ::x10::lang::ComplexNatives::conj((__extension__ ({
                             
                             //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                             x10_long l__47536 = j__47547;
                             x10_long m__47537 = (-(k__47543));
                             ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                               ((((l__47536) * (((l__47536) + (((x10_long)1ll)))))) + (m__47537)));
                         }))
                         ))) : ((__extension__ ({
                                    
                                    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                    x10_long l__47538 = j__47547;
                                    x10_long m__47539 = k__47543;
                                    ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                      ((((l__47538) * (((l__47538) + (((x10_long)1ll)))))) + (m__47539)));
                                }))
                                );
                    
                    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__38004max__47532 = ((this->FMGL(p)) - (j__47547));
                    {
                        x10_long i__47533;
                        for (i__47533 = ((x10_long)0ll); ((i__47533) <= (i__38004max__47532));
                             i__47533 = ((i__47533) + (((x10_long)1ll))))
                        {
                            x10_long l__47534 = i__47533;
                            
                            //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            x10_long i__37986max__47529 =
                              l__47534;
                            {
                                x10_long i__47530;
                                for (i__47530 = ((x10_long)0ll);
                                     ((i__47530) <= (i__37986max__47529));
                                     i__47530 = ((i__47530) + (((x10_long)1ll))))
                                {
                                    x10_long m__47531 = i__47530;
                                    
                                    //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                    x10_long km__47523 = ((k__47543) + (m__47531));
                                    
                                    //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                    if (((((x10_long)::llabs(km__47523))) <= (((j__47547) + (l__47534)))))
                                    {
                                        
                                        //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                        x10_complex B_lmjk__47524 =
                                          ((km__47523) < (((x10_long)0ll)))
                                          ? (::x10::lang::ComplexNatives::_times(((x10_double) (((((x10_long)1ll)) - (((((((x10_long)2ll)) * (km__47523))) % ::x10aux::zeroCheck(((x10_long)2ll))))))), ::x10::lang::ComplexNatives::conj((__extension__ ({
                                                 
                                                 //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                                 x10_long l__47525 =
                                                   ((j__47547) + (l__47534));
                                                 x10_long m__47526 =
                                                   (-(km__47523));
                                                 ::x10aux::nullCheck(::x10aux::nullCheck(transform)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                   ((((l__47525) * (((l__47525) + (((x10_long)1ll)))))) + (m__47526)));
                                             }))
                                             ))) : ((__extension__ ({
                                                        
                                                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                                        x10_long l__47527 =
                                                          ((j__47547) + (l__47534));
                                                        x10_long m__47528 =
                                                          km__47523;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(transform)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                          ((((l__47527) * (((l__47527) + (((x10_long)1ll)))))) + (m__47528)));
                                                    }))
                                                    );
                                        
                                        //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                        ::au::edu::anu::mm::Expansion* this__47515 =
                                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                                        
                                        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        x10_long l__47516 =
                                          l__47534;
                                        x10_long m__47517 =
                                          m__47531;
                                        x10_complex v__47518 =
                                          ::x10::lang::ComplexNatives::_plus((__extension__ ({
                                            
                                            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                            ::au::edu::anu::mm::Expansion* this__47519 =
                                              reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                                            
                                            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                            x10_long l__47520 =
                                              l__47534;
                                            x10_long m__47521 =
                                              m__47531;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(this__47519)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                              ((((l__47520) * (((l__47520) + (((x10_long)1ll)))))) + (m__47521)));
                                        }))
                                        , ::x10::lang::ComplexNatives::_times(B_lmjk__47524, O_jk__47535));
                                        x10_complex ret__47522;
                                        
                                        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this__47515)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                                          ((((l__47516) * (((l__47516) + (((x10_long)1ll)))))) + (m__47517)),
                                          v__47518);
                                        
                                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ret__47522 = v__47518;
                                        
                                        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ret__47522;
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    k_sign__47544 = (-(k_sign__47544));
                }
            }
            
        }
    }
    
}

//#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
x10_double au::edu::anu::mm::LocalExpansion::calculatePotentialAndForces(
  ::au::edu::anu::chem::mm::MMAtom* atom, ::x10x::vector::Vector3d v,
  ::au::edu::anu::mm::AssociatedLegendrePolynomial* pplm) {
    
    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10x::polar::Polar3d v_pole = ::x10x::polar::Polar3d::getPolar3d(
                                      v);
    
    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double q = ::x10aux::nullCheck(atom)->FMGL(charge);
    
    //#line 214 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10aux::nullCheck(pplm)->getPlk(v_pole->FMGL(theta));
    
    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double dr = 0.0;
    
    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double dt = 0.0;
    
    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double dp = 0.0;
    
    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double potential = ((q) * (((__extension__ ({
        ::au::edu::anu::mm::Expansion* this__47397 = reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
        ::x10aux::nullCheck(::x10aux::nullCheck(this__47397)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    ).real()));
    
    //#line 222 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos((-(v_pole->FMGL(phi)))),::x10::lang::MathNatives::sin((-(v_pole->FMGL(phi)))));
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double rfac = v_pole->FMGL(r);
    
    //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double rfacPrev = 1.0;
    
    //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double il = 1.0;
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__38076max__47582 = this->FMGL(p);
    {
        x10_long i__47583;
        for (i__47583 = ((x10_long)1ll); ((i__47583) <= (i__38076max__47582));
             i__47583 = ((i__47583) + (((x10_long)1ll))))
        {
            x10_long l__47584 = i__47583;
            
            //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex Ml__47572 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__47573 =
                  reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__47574 = l__47584;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__47573)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__47574) * (((l__47574) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            il = ((il) * (((x10_double) (l__47584))));
            
            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex F_lm__47575 = x10_complex(((1.0) / (il)),0.0);
            
            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            potential = ((potential) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__47572, F_lm__47575), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__47576 = l__47584;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__47576) * (((l__47576) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )))).real()));
            
            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            dr = ((dr) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__47572, F_lm__47575), ((((((q) * (((x10_double) (l__47584))))) * (rfacPrev))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__47577 = l__47584;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__47577) * (((l__47577) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )))).real()));
            
            //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            dt = ((dt) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__47572, F_lm__47575), ((((q) * (rfacPrev))) * ((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__47578 = l__47584;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__47578) * (((l__47578) + (((x10_long)1ll)))))) + (((x10_long)1ll))));
            }))
            )))))).real()));
            
            //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__38058max__47569 = l__47584;
            {
                x10_long i__47570;
                for (i__47570 = ((x10_long)1ll); ((i__47570) <= (i__38058max__47569));
                     i__47570 = ((i__47570) + (((x10_long)1ll))))
                {
                    x10_long m__47571 = i__47570;
                    
                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    F_lm__47575 = ::x10::lang::ComplexNatives::_divide(::x10::lang::ComplexNatives::_times(F_lm__47575, phifac0), ((x10_double) (((l__47584) + (m__47571)))));
                    
                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex Olm__47548 = ::x10::lang::ComplexNatives::_times(F_lm__47575, ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47549 = l__47584;
                        x10_long m__47550 = m__47571;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47549) * (((l__47549) + (((x10_long)1ll)))))) + (m__47550)));
                    }))
                    )));
                    
                    //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex Mlm__47551 = (__extension__ ({
                        ::au::edu::anu::mm::Expansion* this__47552 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__47553 = l__47584;
                        x10_long m__47554 = m__47571;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__47552)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__47553) * (((l__47553) + (((x10_long)1ll)))))) + (m__47554)));
                    }))
                    ;
                    
                    //#line 239 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    potential = ((potential) + (((((2.0) * ((((Mlm__47551).real()) * ((Olm__47548).real()))))) - (((2.0) * ((((Mlm__47551).imag()) * ((Olm__47548).imag()))))))));
                    
                    //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex r_lm__47555 = ::x10::lang::ComplexNatives::_times(F_lm__47575, ((((((q) * (((x10_double) (l__47584))))) * (rfacPrev))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47556 = l__47584;
                        x10_long m__47557 = m__47571;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47556) * (((l__47556) + (((x10_long)1ll)))))) + (m__47557)));
                    }))
                    )));
                    
                    //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dr = ((dr) + (((((2.0) * ((((Mlm__47551).real()) * ((r_lm__47555).real()))))) - (((2.0) * ((((Mlm__47551).imag()) * ((r_lm__47555).imag()))))))));
                    
                    //#line 243 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double Plm__47558 = ((m__47571) < (l__47584))
                      ? ((__extension__ ({
                             
                             //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                             x10_long l__47559 = l__47584;
                             x10_long m__47560 = ((m__47571) + (((x10_long)1ll)));
                             ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                               ((((l__47559) * (((l__47559) + (((x10_long)1ll)))))) + (m__47560)));
                         }))
                         ) : (0.0);
                    
                    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex theta_lm__47561 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(F_lm__47575, 0.5), q), rfacPrev), ((((((x10_double) (((((((l__47584) - (m__47571))) + (((x10_long)1ll)))) * (((l__47584) + (m__47571))))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47562 = l__47584;
                        x10_long m__47563 = ((m__47571) - (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47562) * (((l__47562) + (((x10_long)1ll)))))) + (m__47563)));
                    }))
                    ))) - (Plm__47558)));
                    
                    //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dt = ((dt) + (((((2.0) * ((((Mlm__47551).real()) * ((theta_lm__47561).real()))))) - (((2.0) * ((((Mlm__47551).imag()) * ((theta_lm__47561).imag()))))))));
                    
                    //#line 246 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex phi_lm__47564 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(x10_complex(0.0,1.0), F_lm__47575), -0.5), q), rfacPrev), ((((((x10_double) (((((((l__47584) - (m__47571))) + (((x10_long)1ll)))) * (((((l__47584) - (m__47571))) + (((x10_long)2ll)))))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47565 = ((l__47584) + (((x10_long)1ll)));
                        x10_long m__47566 = ((m__47571) - (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47565) * (((l__47565) + (((x10_long)1ll)))))) + (m__47566)));
                    }))
                    ))) + ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__47567 = ((l__47584) + (((x10_long)1ll)));
                        x10_long m__47568 = ((m__47571) + (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__47567) * (((l__47567) + (((x10_long)1ll)))))) + (m__47568)));
                    }))
                    )));
                    
                    //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dp = ((dp) + (((((2.0) * ((((Mlm__47551).real()) * ((phi_lm__47564).real()))))) - (((2.0) * ((((Mlm__47551).imag()) * ((phi_lm__47564).imag()))))))));
                }
            }
            
            //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            rfacPrev = rfac;
            
            //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            rfac = ((rfac) * (v_pole->FMGL(r)));
        }
    }
    
    //#line 252 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10aux::nullCheck(atom)->FMGL(force) = (__extension__ ({
        ::x10x::vector::Vector3d this__47423 = ::x10aux::nullCheck(atom)->FMGL(force);
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d that__47422 = v_pole->x10x::polar::Polar3d::getGradientVector(
                                                 dr, (-(dt)),
                                                 (-(dp)));
        (__extension__ ({
            
            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d b__47424 = that__47422;
            (__extension__ ({
                
                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                ::x10x::vector::Vector3d alloc__47425 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__47579 = ((this__47423->FMGL(i)) + (b__47424->FMGL(i)));
                x10_double j__47580 = ((this__47423->FMGL(j)) + (b__47424->FMGL(j)));
                x10_double k__47581 = ((this__47423->FMGL(k)) + (b__47424->FMGL(k)));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__47425->FMGL(i) = i__47579;
                alloc__47425->FMGL(j) = j__47580;
                alloc__47425->FMGL(k) = k__47581;
                alloc__47425;
            }))
            ;
        }))
        ;
    }))
    ;
    
    //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    return potential;
    
}

//#line 262 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
::au::edu::anu::mm::LocalExpansion* au::edu::anu::mm::LocalExpansion::rotate(
  x10_double theta, x10_double phi) {
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::LocalExpansion* target =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion());
    (target)->::au::edu::anu::mm::LocalExpansion::_constructor(
      this->FMGL(p));
    
    //#line 264 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::x10::lang::Rail< x10_complex >* temp = ::x10::lang::Rail< x10_complex >::_make(((this->FMGL(p)) + (((x10_long)1ll))));
    
    //#line 265 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    this->rotate(temp, ::x10aux::nullCheck(::au::edu::anu::mm::Expansion::genComplexK(
                                             phi, this->FMGL(p)))->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                         ((x10_long)0ll)), ::x10aux::nullCheck((__extension__ ({
                                               
                                               //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/WignerRotationMatrix.x10"
                                               x10_double theta__47432 =
                                                 theta;
                                               x10_long numTerms__47433 =
                                                 this->FMGL(p);
                                               ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                                 theta__47432,
                                                 numTerms__47433,
                                                 ((x10_int)2));
                                           }))
                                           )->x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >::__apply(
                                             ((x10_long)0ll)),
                 reinterpret_cast< ::au::edu::anu::mm::Expansion*>(target));
    
    //#line 266 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    return target;
    
}

//#line 277 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
::au::edu::anu::mm::LocalExpansion* au::edu::anu::mm::LocalExpansion::getMacroscopicParent(
  ) {
    
    //#line 278 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    ::au::edu::anu::mm::LocalExpansion* parentExpansion =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion());
    (parentExpansion)->::au::edu::anu::mm::LocalExpansion::_constructor(
      this->FMGL(p));
    
    //#line 279 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__38112max__47595 = this->FMGL(p);
    {
        x10_long i__47596;
        for (i__47596 = ((x10_long)0ll); ((i__47596) <= (i__38112max__47595));
             i__47596 = ((i__47596) + (((x10_long)1ll))))
        {
            x10_long l__47597 = i__47596;
            
            //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__38094max__47592 = l__47597;
            {
                x10_long i__47593;
                for (i__47593 = ((x10_long)0ll); ((i__47593) <= (i__38094max__47592));
                     i__47593 = ((i__47593) + (((x10_long)1ll))))
                {
                    x10_long m__47594 = i__47593;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47585 = l__47597;
                    x10_long m__47586 = m__47594;
                    x10_complex v__47587 = ::x10::lang::ComplexNatives::_divide((__extension__ ({
                        
                        //#line 281 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                        ::au::edu::anu::mm::Expansion* this__47588 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__47589 = l__47597;
                        x10_long m__47590 = m__47594;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__47588)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__47589) * (((l__47589) + (((x10_long)1ll)))))) + (m__47590)));
                    }))
                    , ::x10::lang::Math::pow(3.0, ((l__47597) + (((x10_long)1ll)))));
                    x10_complex ret__47591;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(parentExpansion->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47585) * (((l__47585) + (((x10_long)1ll)))))) + (m__47586)),
                      v__47587);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47591 = v__47587;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47591;
                }
            }
            
        }
    }
    
    //#line 284 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    return parentExpansion;
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
::au::edu::anu::mm::LocalExpansion* au::edu::anu::mm::LocalExpansion::au__edu__anu__mm__LocalExpansion____this__au__edu__anu__mm__LocalExpansion(
  ) {
    return this;
    
}
void au::edu::anu::mm::LocalExpansion::__fieldInitializers_au_edu_anu_mm_LocalExpansion(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::LocalExpansion::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::LocalExpansion::_deserializer);

void au::edu::anu::mm::LocalExpansion::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::mm::Expansion::_serialize_body(buf);
    
}

::x10::lang::Reference* ::au::edu::anu::mm::LocalExpansion::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::LocalExpansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::LocalExpansion::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Expansion::_deserialize_body(buf);
    
}

::x10aux::RuntimeType au::edu::anu::mm::LocalExpansion::rtt;
void au::edu::anu::mm::LocalExpansion::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::mm::Expansion>()};
    rtt.initStageTwo("au.edu.anu.mm.LocalExpansion",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of LocalExpansion */
/*************************************************/
