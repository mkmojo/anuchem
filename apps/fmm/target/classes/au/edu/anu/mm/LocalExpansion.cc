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
    ::au::edu::anu::mm::LocalExpansion* this__71842 = this;
    
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
    ::au::edu::anu::mm::LocalExpansion* this__71843 = this;
    
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
    x10_complex v__71860 = x10_complex(rfac0,0.0);
    x10_complex ret__71861;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__71860);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__71861 = v__71860;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__71861;
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos(v_pole->FMGL(phi)),::x10::lang::MathNatives::sin(v_pole->FMGL(phi)));
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double rfac = ((rfac0) * (rfac0));
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double il = 1.0;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__47011max__71862 = p;
    {
        x10_long i__71863;
        for (i__71863 = ((x10_long)1ll); ((i__71863) <= (i__47011max__71862));
             i__71863 = ((i__71863) + (((x10_long)1ll))))
        {
            x10_long l__71864 = i__71863;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            il = ((il) * (((x10_double) (l__71864))));
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double ilm__71858 = il;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex phifac__71859 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__71851 = l__71864;
            x10_complex v__71852 = ::x10::lang::ComplexNatives::_times(phifac__71859, ((((rfac) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__71853 = l__71864;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__71853) * (((l__71853) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ))) * (ilm__71858)));
            x10_complex ret__71854;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__71851) * (((l__71851) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__71852);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__71854 = v__71852;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__71854;
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__46993max__71855 = l__71864;
            {
                x10_long i__71856;
                for (i__71856 = ((x10_long)1ll); ((i__71856) <= (i__46993max__71855));
                     i__71856 = ((i__71856) + (((x10_long)1ll))))
                {
                    x10_long m__71857 = i__71856;
                    
                    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ilm__71858 = ((ilm__71858) / (((x10_double) (((((l__71864) + (((x10_long)1ll)))) - (m__71857))))));
                    
                    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    phifac__71859 = ::x10::lang::ComplexNatives::_times(phifac__71859, phifac0);
                    
                    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__71848 = ::x10::lang::ComplexNatives::_times(phifac__71859, ((((rfac) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__71849 = l__71864;
                        x10_long m__71850 = m__71857;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__71849) * (((l__71849) + (((x10_long)1ll)))))) + (m__71850)));
                    }))
                    ))) * (ilm__71858)));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__71844 = l__71864;
                    x10_long m__71845 = m__71857;
                    x10_complex v__71846 = M_lm__71848;
                    x10_complex ret__71847;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__71844) * (((l__71844) + (((x10_long)1ll)))))) + (m__71845)),
                      v__71846);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71847 = v__71846;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71847;
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
    x10_long i__47083max__71885 = this->FMGL(p);
    {
        x10_long i__71886;
        for (i__71886 = ((x10_long)0ll); ((i__71886) <= (i__47083max__71885));
             i__71886 = ((i__71886) + (((x10_long)1ll))))
        {
            x10_long m__71887 = i__71886;
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47029min__71877 = m__71887;
            x10_long i__47029max__71878 = this->FMGL(p);
            {
                x10_long i__71879;
                for (i__71879 = i__47029min__71877; ((i__71879) <= (i__47029max__71878));
                     i__71879 = ((i__71879) + (((x10_long)1ll))))
                {
                    x10_long l__71880 = i__71879;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__71880, (__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__71865 = l__71880;
                          x10_long m__71866 = m__71887;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__71865) * (((l__71865) + (((x10_long)1ll)))))) + (m__71866)));
                      }))
                      );
                }
            }
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47065min__71881 = m__71887;
            x10_long i__47065max__71882 = this->FMGL(p);
            {
                x10_long i__71883;
                for (i__71883 = i__47065min__71881; ((i__71883) <= (i__47065max__71882));
                     i__71883 = ((i__71883) + (((x10_long)1ll))))
                {
                    x10_long l__71884 = i__71883;
                    
                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__71875 = x10_complex(0.0,0.0);
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double F_lm__71876 = 1.0;
                    
                    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__47047min__71867 = l__71884;
                    x10_long i__47047max__71868 = this->FMGL(p);
                    {
                        x10_long i__71869;
                        for (i__71869 = i__47047min__71867;
                             ((i__71869) <= (i__47047max__71868));
                             i__71869 = ((i__71869) + (((x10_long)1ll))))
                        {
                            x10_long j__71870 = i__71869;
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            M_lm__71875 = ::x10::lang::ComplexNatives::_plus(M_lm__71875, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__71870), F_lm__71876));
                            
                            //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            F_lm__71876 = ((((F_lm__71876) * (b))) / (((x10_double) (((((j__71870) - (l__71884))) + (((x10_long)1ll)))))));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__71871 = l__71884;
                    x10_long m__71872 = m__71887;
                    x10_complex v__71873 = M_lm__71875;
                    x10_complex ret__71874;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__71871) * (((l__71871) + (((x10_long)1ll)))))) + (m__71872)),
                      v__71873);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71874 = v__71873;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71874;
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
                                   x10_double theta__71732 =
                                     polar->FMGL(theta);
                                   x10_long numTerms__71733 =
                                     this->FMGL(p);
                                   ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                     theta__71732, numTerms__71733,
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
    x10_long i__47155max__71912 = this->FMGL(p);
    {
        x10_long i__71913;
        for (i__71913 = ((x10_long)0ll); ((i__71913) <= (i__47155max__71912));
             i__71913 = ((i__71913) + (((x10_long)1ll))))
        {
            x10_long m__71914 = i__71913;
            
            //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47101min__71901 = m__71914;
            x10_long i__47101max__71902 = this->FMGL(p);
            {
                x10_long i__71903;
                for (i__71903 = i__47101min__71901; ((i__71903) <= (i__47101max__71902));
                     i__71903 = ((i__71903) + (((x10_long)1ll))))
                {
                    x10_long l__71904 = i__71903;
                    
                    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__71904, ::x10::lang::ComplexNatives::_times(m_sign, ::x10::lang::ComplexNatives::conj((__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__71888 = l__71904;
                          x10_long m__71889 = m__71914;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__71888) * (((l__71888) + (((x10_long)1ll)))))) + (m__71889)));
                      }))
                      )));
                }
            }
            
            //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double F_lm__71909 = (((((((__extension__ ({
                
                //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                x10_long i__71910 = ((m__71914) + (m__71914));
                ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                  i__71910);
            }))
            ) * (inv_b))) * (b_m_pow))) * (b_m_pow));
            
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double ml__71911 = ((x10_double) (((((m__71914) + (m__71914))) + (((x10_long)1ll)))));
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47137min__71905 = m__71914;
            x10_long i__47137max__71906 = this->FMGL(p);
            {
                x10_long i__71907;
                for (i__71907 = i__47137min__71905; ((i__71907) <= (i__47137max__71906));
                     i__71907 = ((i__71907) + (((x10_long)1ll))))
                {
                    x10_long l__71908 = i__71907;
                    
                    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__71898 = x10_complex(0.0,0.0);
                    
                    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double F_jl__71899 = F_lm__71909;
                    
                    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double jl__71900 = ml__71911;
                    
                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__47119min__71890 = m__71914;
                    x10_long i__47119max__71891 = this->FMGL(p);
                    {
                        x10_long i__71892;
                        for (i__71892 = i__47119min__71890;
                             ((i__71892) <= (i__47119max__71891));
                             i__71892 = ((i__71892) + (((x10_long)1ll))))
                        {
                            x10_long j__71893 = i__71892;
                            
                            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            M_lm__71898 = ::x10::lang::ComplexNatives::_plus(M_lm__71898, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__71893), F_jl__71899));
                            
                            //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            F_jl__71899 = ((((jl__71900) * (inv_b))) * (F_jl__71899));
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            jl__71900 = ((jl__71900) + (1.0));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__71894 = l__71908;
                    x10_long m__71895 = m__71914;
                    x10_complex v__71896 = M_lm__71898;
                    x10_complex ret__71897;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__71894) * (((l__71894) + (((x10_long)1ll)))))) + (m__71895)),
                      v__71896);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71897 = v__71896;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71897;
                    
                    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    F_lm__71909 = ((((ml__71911) * (inv_b))) * (F_lm__71909));
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ml__71911 = ((ml__71911) + (((x10_double) (((x10_long)1ll)))));
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
                                     x10_double theta__71776 =
                                       polar->FMGL(theta);
                                     x10_long numTerms__71777 =
                                       this->FMGL(p);
                                     ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                       theta__71776, numTerms__71777,
                                       ((x10_int)-1));
                                 }))
                                 );
}

//#line 180 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::transformAndAddToLocal(
  ::au::edu::anu::mm::LocalExpansion* transform, ::au::edu::anu::mm::MultipoleExpansion* source) {
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__47227max__71945 = this->FMGL(p);
    {
        x10_long i__71946;
        for (i__71946 = ((x10_long)0ll); ((i__71946) <= (i__47227max__71945));
             i__71946 = ((i__71946) + (((x10_long)1ll))))
        {
            x10_long j__71947 = i__71946;
            
            //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double k_sign__71944 = ((x10_double) (((((x10_long)1ll)) - (((((((x10_long)2ll)) * (j__71947))) % ::x10aux::zeroCheck(((x10_long)2ll)))))));
            
            //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47209min__71940 = (-(j__71947));
            x10_long i__47209max__71941 = j__71947;
            {
                x10_long i__71942;
                for (i__71942 = i__47209min__71940; ((i__71942) <= (i__47209max__71941));
                     i__71942 = ((i__71942) + (((x10_long)1ll))))
                {
                    x10_long k__71943 = i__71942;
                    
                    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex O_jk__71935 = ((k__71943) < (((x10_long)0ll)))
                      ? (::x10::lang::ComplexNatives::_times(k_sign__71944, ::x10::lang::ComplexNatives::conj((__extension__ ({
                             
                             //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                             x10_long l__71936 = j__71947;
                             x10_long m__71937 = (-(k__71943));
                             ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                               ((((l__71936) * (((l__71936) + (((x10_long)1ll)))))) + (m__71937)));
                         }))
                         ))) : ((__extension__ ({
                                    
                                    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                    x10_long l__71938 = j__71947;
                                    x10_long m__71939 = k__71943;
                                    ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                      ((((l__71938) * (((l__71938) + (((x10_long)1ll)))))) + (m__71939)));
                                }))
                                );
                    
                    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__47191max__71932 = ((this->FMGL(p)) - (j__71947));
                    {
                        x10_long i__71933;
                        for (i__71933 = ((x10_long)0ll); ((i__71933) <= (i__47191max__71932));
                             i__71933 = ((i__71933) + (((x10_long)1ll))))
                        {
                            x10_long l__71934 = i__71933;
                            
                            //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            x10_long i__47173max__71929 =
                              l__71934;
                            {
                                x10_long i__71930;
                                for (i__71930 = ((x10_long)0ll);
                                     ((i__71930) <= (i__47173max__71929));
                                     i__71930 = ((i__71930) + (((x10_long)1ll))))
                                {
                                    x10_long m__71931 = i__71930;
                                    
                                    //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                    x10_long km__71923 = ((k__71943) + (m__71931));
                                    
                                    //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                    if (((((x10_long)::llabs(km__71923))) <= (((j__71947) + (l__71934)))))
                                    {
                                        
                                        //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                        x10_complex B_lmjk__71924 =
                                          ((km__71923) < (((x10_long)0ll)))
                                          ? (::x10::lang::ComplexNatives::_times(((x10_double) (((((x10_long)1ll)) - (((((((x10_long)2ll)) * (km__71923))) % ::x10aux::zeroCheck(((x10_long)2ll))))))), ::x10::lang::ComplexNatives::conj((__extension__ ({
                                                 
                                                 //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                                 x10_long l__71925 =
                                                   ((j__71947) + (l__71934));
                                                 x10_long m__71926 =
                                                   (-(km__71923));
                                                 ::x10aux::nullCheck(::x10aux::nullCheck(transform)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                   ((((l__71925) * (((l__71925) + (((x10_long)1ll)))))) + (m__71926)));
                                             }))
                                             ))) : ((__extension__ ({
                                                        
                                                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                                        x10_long l__71927 =
                                                          ((j__71947) + (l__71934));
                                                        x10_long m__71928 =
                                                          km__71923;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(transform)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                          ((((l__71927) * (((l__71927) + (((x10_long)1ll)))))) + (m__71928)));
                                                    }))
                                                    );
                                        
                                        //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                        ::au::edu::anu::mm::Expansion* this__71915 =
                                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                                        
                                        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        x10_long l__71916 =
                                          l__71934;
                                        x10_long m__71917 =
                                          m__71931;
                                        x10_complex v__71918 =
                                          ::x10::lang::ComplexNatives::_plus((__extension__ ({
                                            
                                            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                            ::au::edu::anu::mm::Expansion* this__71919 =
                                              reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                                            
                                            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                            x10_long l__71920 =
                                              l__71934;
                                            x10_long m__71921 =
                                              m__71931;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(this__71919)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                              ((((l__71920) * (((l__71920) + (((x10_long)1ll)))))) + (m__71921)));
                                        }))
                                        , ::x10::lang::ComplexNatives::_times(B_lmjk__71924, O_jk__71935));
                                        x10_complex ret__71922;
                                        
                                        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this__71915)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                                          ((((l__71916) * (((l__71916) + (((x10_long)1ll)))))) + (m__71917)),
                                          v__71918);
                                        
                                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ret__71922 = v__71918;
                                        
                                        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ret__71922;
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    k_sign__71944 = (-(k_sign__71944));
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
        ::au::edu::anu::mm::Expansion* this__71797 = reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
        ::x10aux::nullCheck(::x10aux::nullCheck(this__71797)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
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
    x10_long i__47263max__71982 = this->FMGL(p);
    {
        x10_long i__71983;
        for (i__71983 = ((x10_long)1ll); ((i__71983) <= (i__47263max__71982));
             i__71983 = ((i__71983) + (((x10_long)1ll))))
        {
            x10_long l__71984 = i__71983;
            
            //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex Ml__71972 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__71973 =
                  reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__71974 = l__71984;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__71973)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__71974) * (((l__71974) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            il = ((il) * (((x10_double) (l__71984))));
            
            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex F_lm__71975 = x10_complex(((1.0) / (il)),0.0);
            
            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            potential = ((potential) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__71972, F_lm__71975), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__71976 = l__71984;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__71976) * (((l__71976) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )))).real()));
            
            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            dr = ((dr) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__71972, F_lm__71975), ((((((q) * (((x10_double) (l__71984))))) * (rfacPrev))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__71977 = l__71984;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__71977) * (((l__71977) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )))).real()));
            
            //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            dt = ((dt) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__71972, F_lm__71975), ((((q) * (rfacPrev))) * ((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__71978 = l__71984;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__71978) * (((l__71978) + (((x10_long)1ll)))))) + (((x10_long)1ll))));
            }))
            )))))).real()));
            
            //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47245max__71969 = l__71984;
            {
                x10_long i__71970;
                for (i__71970 = ((x10_long)1ll); ((i__71970) <= (i__47245max__71969));
                     i__71970 = ((i__71970) + (((x10_long)1ll))))
                {
                    x10_long m__71971 = i__71970;
                    
                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    F_lm__71975 = ::x10::lang::ComplexNatives::_divide(::x10::lang::ComplexNatives::_times(F_lm__71975, phifac0), ((x10_double) (((l__71984) + (m__71971)))));
                    
                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex Olm__71948 = ::x10::lang::ComplexNatives::_times(F_lm__71975, ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__71949 = l__71984;
                        x10_long m__71950 = m__71971;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__71949) * (((l__71949) + (((x10_long)1ll)))))) + (m__71950)));
                    }))
                    )));
                    
                    //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex Mlm__71951 = (__extension__ ({
                        ::au::edu::anu::mm::Expansion* this__71952 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__71953 = l__71984;
                        x10_long m__71954 = m__71971;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__71952)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__71953) * (((l__71953) + (((x10_long)1ll)))))) + (m__71954)));
                    }))
                    ;
                    
                    //#line 239 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    potential = ((potential) + (((((2.0) * ((((Mlm__71951).real()) * ((Olm__71948).real()))))) - (((2.0) * ((((Mlm__71951).imag()) * ((Olm__71948).imag()))))))));
                    
                    //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex r_lm__71955 = ::x10::lang::ComplexNatives::_times(F_lm__71975, ((((((q) * (((x10_double) (l__71984))))) * (rfacPrev))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__71956 = l__71984;
                        x10_long m__71957 = m__71971;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__71956) * (((l__71956) + (((x10_long)1ll)))))) + (m__71957)));
                    }))
                    )));
                    
                    //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dr = ((dr) + (((((2.0) * ((((Mlm__71951).real()) * ((r_lm__71955).real()))))) - (((2.0) * ((((Mlm__71951).imag()) * ((r_lm__71955).imag()))))))));
                    
                    //#line 243 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double Plm__71958 = ((m__71971) < (l__71984))
                      ? ((__extension__ ({
                             
                             //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                             x10_long l__71959 = l__71984;
                             x10_long m__71960 = ((m__71971) + (((x10_long)1ll)));
                             ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                               ((((l__71959) * (((l__71959) + (((x10_long)1ll)))))) + (m__71960)));
                         }))
                         ) : (0.0);
                    
                    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex theta_lm__71961 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(F_lm__71975, 0.5), q), rfacPrev), ((((((x10_double) (((((((l__71984) - (m__71971))) + (((x10_long)1ll)))) * (((l__71984) + (m__71971))))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__71962 = l__71984;
                        x10_long m__71963 = ((m__71971) - (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__71962) * (((l__71962) + (((x10_long)1ll)))))) + (m__71963)));
                    }))
                    ))) - (Plm__71958)));
                    
                    //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dt = ((dt) + (((((2.0) * ((((Mlm__71951).real()) * ((theta_lm__71961).real()))))) - (((2.0) * ((((Mlm__71951).imag()) * ((theta_lm__71961).imag()))))))));
                    
                    //#line 246 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex phi_lm__71964 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(x10_complex(0.0,1.0), F_lm__71975), -0.5), q), rfacPrev), ((((((x10_double) (((((((l__71984) - (m__71971))) + (((x10_long)1ll)))) * (((((l__71984) - (m__71971))) + (((x10_long)2ll)))))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__71965 = ((l__71984) + (((x10_long)1ll)));
                        x10_long m__71966 = ((m__71971) - (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__71965) * (((l__71965) + (((x10_long)1ll)))))) + (m__71966)));
                    }))
                    ))) + ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__71967 = ((l__71984) + (((x10_long)1ll)));
                        x10_long m__71968 = ((m__71971) + (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__71967) * (((l__71967) + (((x10_long)1ll)))))) + (m__71968)));
                    }))
                    )));
                    
                    //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dp = ((dp) + (((((2.0) * ((((Mlm__71951).real()) * ((phi_lm__71964).real()))))) - (((2.0) * ((((Mlm__71951).imag()) * ((phi_lm__71964).imag()))))))));
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
        ::x10x::vector::Vector3d this__71823 = ::x10aux::nullCheck(atom)->FMGL(force);
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d that__71822 = v_pole->x10x::polar::Polar3d::getGradientVector(
                                                 dr, (-(dt)),
                                                 (-(dp)));
        (__extension__ ({
            
            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d b__71824 = that__71822;
            (__extension__ ({
                
                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                ::x10x::vector::Vector3d alloc__71825 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__71979 = ((this__71823->FMGL(i)) + (b__71824->FMGL(i)));
                x10_double j__71980 = ((this__71823->FMGL(j)) + (b__71824->FMGL(j)));
                x10_double k__71981 = ((this__71823->FMGL(k)) + (b__71824->FMGL(k)));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__71825->FMGL(i) = i__71979;
                alloc__71825->FMGL(j) = j__71980;
                alloc__71825->FMGL(k) = k__71981;
                alloc__71825;
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
                                               x10_double theta__71832 =
                                                 theta;
                                               x10_long numTerms__71833 =
                                                 this->FMGL(p);
                                               ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                                 theta__71832,
                                                 numTerms__71833,
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
    x10_long i__47299max__71995 = this->FMGL(p);
    {
        x10_long i__71996;
        for (i__71996 = ((x10_long)0ll); ((i__71996) <= (i__47299max__71995));
             i__71996 = ((i__71996) + (((x10_long)1ll))))
        {
            x10_long l__71997 = i__71996;
            
            //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__47281max__71992 = l__71997;
            {
                x10_long i__71993;
                for (i__71993 = ((x10_long)0ll); ((i__71993) <= (i__47281max__71992));
                     i__71993 = ((i__71993) + (((x10_long)1ll))))
                {
                    x10_long m__71994 = i__71993;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__71985 = l__71997;
                    x10_long m__71986 = m__71994;
                    x10_complex v__71987 = ::x10::lang::ComplexNatives::_divide((__extension__ ({
                        
                        //#line 281 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                        ::au::edu::anu::mm::Expansion* this__71988 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__71989 = l__71997;
                        x10_long m__71990 = m__71994;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__71988)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__71989) * (((l__71989) + (((x10_long)1ll)))))) + (m__71990)));
                    }))
                    , ::x10::lang::Math::pow(3.0, ((l__71997) + (((x10_long)1ll)))));
                    x10_complex ret__71991;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(parentExpansion->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__71985) * (((l__71985) + (((x10_long)1ll)))))) + (m__71986)),
                      v__71987);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71991 = v__71987;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__71991;
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
