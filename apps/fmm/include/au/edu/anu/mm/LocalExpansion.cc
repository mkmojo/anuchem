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
    ::au::edu::anu::mm::LocalExpansion* this__66931 = this;
    
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
    ::au::edu::anu::mm::LocalExpansion* this__66932 = this;
    
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
    x10_complex v__66949 = x10_complex(rfac0,0.0);
    x10_complex ret__66950;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__66949);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__66950 = v__66949;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__66950;
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_complex phifac0 = x10_complex(::x10::lang::MathNatives::cos(v_pole->FMGL(phi)),::x10::lang::MathNatives::sin(v_pole->FMGL(phi)));
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double rfac = ((rfac0) * (rfac0));
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_double il = 1.0;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__49737max__66951 = p;
    {
        x10_long i__66952;
        for (i__66952 = ((x10_long)1ll); ((i__66952) <= (i__49737max__66951));
             i__66952 = ((i__66952) + (((x10_long)1ll))))
        {
            x10_long l__66953 = i__66952;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            il = ((il) * (((x10_double) (l__66953))));
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double ilm__66947 = il;
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex phifac__66948 = x10_complex(1.0,0.0);
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long l__66940 = l__66953;
            x10_complex v__66941 = ::x10::lang::ComplexNatives::_times(phifac__66948, ((((rfac) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__66942 = l__66953;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__66942) * (((l__66942) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ))) * (ilm__66947)));
            x10_complex ret__66943;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
              ((((l__66940) * (((l__66940) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
              v__66941);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__66943 = v__66941;
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ret__66943;
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49719max__66944 = l__66953;
            {
                x10_long i__66945;
                for (i__66945 = ((x10_long)1ll); ((i__66945) <= (i__49719max__66944));
                     i__66945 = ((i__66945) + (((x10_long)1ll))))
                {
                    x10_long m__66946 = i__66945;
                    
                    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ilm__66947 = ((ilm__66947) / (((x10_double) (((((l__66953) + (((x10_long)1ll)))) - (m__66946))))));
                    
                    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    phifac__66948 = ::x10::lang::ComplexNatives::_times(phifac__66948, phifac0);
                    
                    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__66937 = ::x10::lang::ComplexNatives::_times(phifac__66948, ((((rfac) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__66938 = l__66953;
                        x10_long m__66939 = m__66946;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__66938) * (((l__66938) + (((x10_long)1ll)))))) + (m__66939)));
                    }))
                    ))) * (ilm__66947)));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__66933 = l__66953;
                    x10_long m__66934 = m__66946;
                    x10_complex v__66935 = M_lm__66937;
                    x10_complex ret__66936;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(exp->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__66933) * (((l__66933) + (((x10_long)1ll)))))) + (m__66934)),
                      v__66935);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__66936 = v__66935;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__66936;
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
    x10_long i__49809max__66974 = this->FMGL(p);
    {
        x10_long i__66975;
        for (i__66975 = ((x10_long)0ll); ((i__66975) <= (i__49809max__66974));
             i__66975 = ((i__66975) + (((x10_long)1ll))))
        {
            x10_long m__66976 = i__66975;
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49755min__66966 = m__66976;
            x10_long i__49755max__66967 = this->FMGL(p);
            {
                x10_long i__66968;
                for (i__66968 = i__49755min__66966; ((i__66968) <= (i__49755max__66967));
                     i__66968 = ((i__66968) + (((x10_long)1ll))))
                {
                    x10_long l__66969 = i__66968;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__66969, (__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__66954 = l__66969;
                          x10_long m__66955 = m__66976;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__66954) * (((l__66954) + (((x10_long)1ll)))))) + (m__66955)));
                      }))
                      );
                }
            }
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49791min__66970 = m__66976;
            x10_long i__49791max__66971 = this->FMGL(p);
            {
                x10_long i__66972;
                for (i__66972 = i__49791min__66970; ((i__66972) <= (i__49791max__66971));
                     i__66972 = ((i__66972) + (((x10_long)1ll))))
                {
                    x10_long l__66973 = i__66972;
                    
                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__66964 = x10_complex(0.0,0.0);
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double F_lm__66965 = 1.0;
                    
                    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__49773min__66956 = l__66973;
                    x10_long i__49773max__66957 = this->FMGL(p);
                    {
                        x10_long i__66958;
                        for (i__66958 = i__49773min__66956;
                             ((i__66958) <= (i__49773max__66957));
                             i__66958 = ((i__66958) + (((x10_long)1ll))))
                        {
                            x10_long j__66959 = i__66958;
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            M_lm__66964 = ::x10::lang::ComplexNatives::_plus(M_lm__66964, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__66959), F_lm__66965));
                            
                            //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            F_lm__66965 = ((((F_lm__66965) * (b))) / (((x10_double) (((((j__66959) - (l__66973))) + (((x10_long)1ll)))))));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__66960 = l__66973;
                    x10_long m__66961 = m__66976;
                    x10_complex v__66962 = M_lm__66964;
                    x10_complex ret__66963;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__66960) * (((l__66960) + (((x10_long)1ll)))))) + (m__66961)),
                      v__66962);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__66963 = v__66962;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__66963;
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
                                   x10_double theta__66855 =
                                     polar->FMGL(theta);
                                   x10_long numTerms__66856 =
                                     this->FMGL(p);
                                   ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                     theta__66855, numTerms__66856,
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
    x10_long i__49881max__67001 = this->FMGL(p);
    {
        x10_long i__67002;
        for (i__67002 = ((x10_long)0ll); ((i__67002) <= (i__49881max__67001));
             i__67002 = ((i__67002) + (((x10_long)1ll))))
        {
            x10_long m__67003 = i__67002;
            
            //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49827min__66990 = m__67003;
            x10_long i__49827max__66991 = this->FMGL(p);
            {
                x10_long i__66992;
                for (i__66992 = i__49827min__66990; ((i__66992) <= (i__49827max__66991));
                     i__66992 = ((i__66992) + (((x10_long)1ll))))
                {
                    x10_long l__66993 = i__66992;
                    
                    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      l__66993, ::x10::lang::ComplexNatives::_times(m_sign, ::x10::lang::ComplexNatives::conj((__extension__ ({
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__66977 = l__66993;
                          x10_long m__66978 = m__67003;
                          ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__66977) * (((l__66977) + (((x10_long)1ll)))))) + (m__66978)));
                      }))
                      )));
                }
            }
            
            //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double F_lm__66998 = (((((((__extension__ ({
                
                //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Factorial.x10"
                x10_long i__66999 = ((m__67003) + (m__67003));
                ::au::edu::anu::mm::Factorial::FMGL(factorial__get)()->x10::lang::Rail< x10_double >::__apply(
                  i__66999);
            }))
            ) * (inv_b))) * (b_m_pow))) * (b_m_pow));
            
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double ml__67000 = ((x10_double) (((((m__67003) + (m__67003))) + (((x10_long)1ll)))));
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49863min__66994 = m__67003;
            x10_long i__49863max__66995 = this->FMGL(p);
            {
                x10_long i__66996;
                for (i__66996 = i__49863min__66994; ((i__66996) <= (i__49863max__66995));
                     i__66996 = ((i__66996) + (((x10_long)1ll))))
                {
                    x10_long l__66997 = i__66996;
                    
                    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex M_lm__66987 = x10_complex(0.0,0.0);
                    
                    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double F_jl__66988 = F_lm__66998;
                    
                    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double jl__66989 = ml__67000;
                    
                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__49845min__66979 = m__67003;
                    x10_long i__49845max__66980 = this->FMGL(p);
                    {
                        x10_long i__66981;
                        for (i__66981 = i__49845min__66979;
                             ((i__66981) <= (i__49845max__66980));
                             i__66981 = ((i__66981) + (((x10_long)1ll))))
                        {
                            x10_long j__66982 = i__66981;
                            
                            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            M_lm__66987 = ::x10::lang::ComplexNatives::_plus(M_lm__66987, ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                j__66982), F_jl__66988));
                            
                            //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            F_jl__66988 = ((((jl__66989) * (inv_b))) * (F_jl__66988));
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            jl__66989 = ((jl__66989) + (1.0));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__66983 = l__66997;
                    x10_long m__66984 = m__67003;
                    x10_complex v__66985 = M_lm__66987;
                    x10_complex ret__66986;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(scratch)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__66983) * (((l__66983) + (((x10_long)1ll)))))) + (m__66984)),
                      v__66985);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__66986 = v__66985;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__66986;
                    
                    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    F_lm__66998 = ((((ml__67000) * (inv_b))) * (F_lm__66998));
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    ml__67000 = ((ml__67000) + (((x10_double) (((x10_long)1ll)))));
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
                                     x10_double theta__66865 =
                                       polar->FMGL(theta);
                                     x10_long numTerms__66866 =
                                       this->FMGL(p);
                                     ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                       theta__66865, numTerms__66866,
                                       ((x10_int)-1));
                                 }))
                                 );
}

//#line 180 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
void au::edu::anu::mm::LocalExpansion::transformAndAddToLocal(
  ::au::edu::anu::mm::LocalExpansion* transform, ::au::edu::anu::mm::MultipoleExpansion* source) {
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
    x10_long i__49953max__67034 = this->FMGL(p);
    {
        x10_long i__67035;
        for (i__67035 = ((x10_long)0ll); ((i__67035) <= (i__49953max__67034));
             i__67035 = ((i__67035) + (((x10_long)1ll))))
        {
            x10_long j__67036 = i__67035;
            
            //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_double k_sign__67033 = ((x10_double) (((((x10_long)1ll)) - (((((((x10_long)2ll)) * (j__67036))) % ::x10aux::zeroCheck(((x10_long)2ll)))))));
            
            //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49935min__67029 = (-(j__67036));
            x10_long i__49935max__67030 = j__67036;
            {
                x10_long i__67031;
                for (i__67031 = i__49935min__67029; ((i__67031) <= (i__49935max__67030));
                     i__67031 = ((i__67031) + (((x10_long)1ll))))
                {
                    x10_long k__67032 = i__67031;
                    
                    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex O_jk__67024 = ((k__67032) < (((x10_long)0ll)))
                      ? (::x10::lang::ComplexNatives::_times(k_sign__67033, ::x10::lang::ComplexNatives::conj((__extension__ ({
                             
                             //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                             x10_long l__67025 = j__67036;
                             x10_long m__67026 = (-(k__67032));
                             ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                               ((((l__67025) * (((l__67025) + (((x10_long)1ll)))))) + (m__67026)));
                         }))
                         ))) : ((__extension__ ({
                                    
                                    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                    x10_long l__67027 = j__67036;
                                    x10_long m__67028 = k__67032;
                                    ::x10aux::nullCheck(::x10aux::nullCheck(source)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                      ((((l__67027) * (((l__67027) + (((x10_long)1ll)))))) + (m__67028)));
                                }))
                                );
                    
                    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_long i__49917max__67021 = ((this->FMGL(p)) - (j__67036));
                    {
                        x10_long i__67022;
                        for (i__67022 = ((x10_long)0ll); ((i__67022) <= (i__49917max__67021));
                             i__67022 = ((i__67022) + (((x10_long)1ll))))
                        {
                            x10_long l__67023 = i__67022;
                            
                            //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                            x10_long i__49899max__67018 =
                              l__67023;
                            {
                                x10_long i__67019;
                                for (i__67019 = ((x10_long)0ll);
                                     ((i__67019) <= (i__49899max__67018));
                                     i__67019 = ((i__67019) + (((x10_long)1ll))))
                                {
                                    x10_long m__67020 = i__67019;
                                    
                                    //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                    x10_long km__67012 = ((k__67032) + (m__67020));
                                    
                                    //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                    if (((((x10_long)::llabs(km__67012))) <= (((j__67036) + (l__67023)))))
                                    {
                                        
                                        //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                        x10_complex B_lmjk__67013 =
                                          ((km__67012) < (((x10_long)0ll)))
                                          ? (::x10::lang::ComplexNatives::_times(((x10_double) (((((x10_long)1ll)) - (((((((x10_long)2ll)) * (km__67012))) % ::x10aux::zeroCheck(((x10_long)2ll))))))), ::x10::lang::ComplexNatives::conj((__extension__ ({
                                                 
                                                 //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                                 x10_long l__67014 =
                                                   ((j__67036) + (l__67023));
                                                 x10_long m__67015 =
                                                   (-(km__67012));
                                                 ::x10aux::nullCheck(::x10aux::nullCheck(transform)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                   ((((l__67014) * (((l__67014) + (((x10_long)1ll)))))) + (m__67015)));
                                             }))
                                             ))) : ((__extension__ ({
                                                        
                                                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                                        x10_long l__67016 =
                                                          ((j__67036) + (l__67023));
                                                        x10_long m__67017 =
                                                          km__67012;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(transform)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                          ((((l__67016) * (((l__67016) + (((x10_long)1ll)))))) + (m__67017)));
                                                    }))
                                                    );
                                        
                                        //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                        ::au::edu::anu::mm::Expansion* this__67004 =
                                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                                        
                                        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        x10_long l__67005 =
                                          l__67023;
                                        x10_long m__67006 =
                                          m__67020;
                                        x10_complex v__67007 =
                                          ::x10::lang::ComplexNatives::_plus((__extension__ ({
                                            
                                            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                                            ::au::edu::anu::mm::Expansion* this__67008 =
                                              reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                                            
                                            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                            x10_long l__67009 =
                                              l__67023;
                                            x10_long m__67010 =
                                              m__67020;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(this__67008)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                              ((((l__67009) * (((l__67009) + (((x10_long)1ll)))))) + (m__67010)));
                                        }))
                                        , ::x10::lang::ComplexNatives::_times(B_lmjk__67013, O_jk__67024));
                                        x10_complex ret__67011;
                                        
                                        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this__67004)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                                          ((((l__67005) * (((l__67005) + (((x10_long)1ll)))))) + (m__67006)),
                                          v__67007);
                                        
                                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ret__67011 = v__67007;
                                        
                                        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                        ret__67011;
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    k_sign__67033 = (-(k_sign__67033));
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
        ::au::edu::anu::mm::Expansion* this__66886 = reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
        ::x10aux::nullCheck(::x10aux::nullCheck(this__66886)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
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
    x10_long i__49989max__67071 = this->FMGL(p);
    {
        x10_long i__67072;
        for (i__67072 = ((x10_long)1ll); ((i__67072) <= (i__49989max__67071));
             i__67072 = ((i__67072) + (((x10_long)1ll))))
        {
            x10_long l__67073 = i__67072;
            
            //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex Ml__67061 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__67062 =
                  reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__67063 = l__67073;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__67062)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__67063) * (((l__67063) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            il = ((il) * (((x10_double) (l__67073))));
            
            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_complex F_lm__67064 = x10_complex(((1.0) / (il)),0.0);
            
            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            potential = ((potential) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__67061, F_lm__67064), ((((q) * (rfac))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__67065 = l__67073;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__67065) * (((l__67065) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )))).real()));
            
            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            dr = ((dr) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__67061, F_lm__67064), ((((((q) * (((x10_double) (l__67073))))) * (rfacPrev))) * ((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__67066 = l__67073;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__67066) * (((l__67066) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            )))).real()));
            
            //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            dt = ((dt) + ((::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(Ml__67061, F_lm__67064), ((((q) * (rfacPrev))) * ((-((__extension__ ({
                
                //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                x10_long l__67067 = l__67073;
                ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                  ((((l__67067) * (((l__67067) + (((x10_long)1ll)))))) + (((x10_long)1ll))));
            }))
            )))))).real()));
            
            //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__49971max__67058 = l__67073;
            {
                x10_long i__67059;
                for (i__67059 = ((x10_long)1ll); ((i__67059) <= (i__49971max__67058));
                     i__67059 = ((i__67059) + (((x10_long)1ll))))
                {
                    x10_long m__67060 = i__67059;
                    
                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    F_lm__67064 = ::x10::lang::ComplexNatives::_divide(::x10::lang::ComplexNatives::_times(F_lm__67064, phifac0), ((x10_double) (((l__67073) + (m__67060)))));
                    
                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex Olm__67037 = ::x10::lang::ComplexNatives::_times(F_lm__67064, ((((q) * (rfac))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67038 = l__67073;
                        x10_long m__67039 = m__67060;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67038) * (((l__67038) + (((x10_long)1ll)))))) + (m__67039)));
                    }))
                    )));
                    
                    //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex Mlm__67040 = (__extension__ ({
                        ::au::edu::anu::mm::Expansion* this__67041 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__67042 = l__67073;
                        x10_long m__67043 = m__67060;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__67041)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__67042) * (((l__67042) + (((x10_long)1ll)))))) + (m__67043)));
                    }))
                    ;
                    
                    //#line 239 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    potential = ((potential) + (((((2.0) * ((((Mlm__67040).real()) * ((Olm__67037).real()))))) - (((2.0) * ((((Mlm__67040).imag()) * ((Olm__67037).imag()))))))));
                    
                    //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex r_lm__67044 = ::x10::lang::ComplexNatives::_times(F_lm__67064, ((((((q) * (((x10_double) (l__67073))))) * (rfacPrev))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67045 = l__67073;
                        x10_long m__67046 = m__67060;
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67045) * (((l__67045) + (((x10_long)1ll)))))) + (m__67046)));
                    }))
                    )));
                    
                    //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dr = ((dr) + (((((2.0) * ((((Mlm__67040).real()) * ((r_lm__67044).real()))))) - (((2.0) * ((((Mlm__67040).imag()) * ((r_lm__67044).imag()))))))));
                    
                    //#line 243 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_double Plm__67047 = ((m__67060) < (l__67073))
                      ? ((__extension__ ({
                             
                             //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                             x10_long l__67048 = l__67073;
                             x10_long m__67049 = ((m__67060) + (((x10_long)1ll)));
                             ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                               ((((l__67048) * (((l__67048) + (((x10_long)1ll)))))) + (m__67049)));
                         }))
                         ) : (0.0);
                    
                    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex theta_lm__67050 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(F_lm__67064, 0.5), q), rfacPrev), ((((((x10_double) (((((((l__67073) - (m__67060))) + (((x10_long)1ll)))) * (((l__67073) + (m__67060))))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67051 = l__67073;
                        x10_long m__67052 = ((m__67060) - (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67051) * (((l__67051) + (((x10_long)1ll)))))) + (m__67052)));
                    }))
                    ))) - (Plm__67047)));
                    
                    //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dt = ((dt) + (((((2.0) * ((((Mlm__67040).real()) * ((theta_lm__67050).real()))))) - (((2.0) * ((((Mlm__67040).imag()) * ((theta_lm__67050).imag()))))))));
                    
                    //#line 246 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    x10_complex phi_lm__67053 = ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(x10_complex(0.0,1.0), F_lm__67064), -0.5), q), rfacPrev), ((((((x10_double) (((((((l__67073) - (m__67060))) + (((x10_long)1ll)))) * (((((l__67073) - (m__67060))) + (((x10_long)2ll)))))))) * ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67054 = ((l__67073) + (((x10_long)1ll)));
                        x10_long m__67055 = ((m__67060) - (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67054) * (((l__67054) + (((x10_long)1ll)))))) + (m__67055)));
                    }))
                    ))) + ((__extension__ ({
                        
                        //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/AssociatedLegendrePolynomial.x10"
                        x10_long l__67056 = ((l__67073) + (((x10_long)1ll)));
                        x10_long m__67057 = ((m__67060) + (((x10_long)1ll)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(pplm)->FMGL(terms))->x10::lang::Rail< x10_double >::__apply(
                          ((((l__67056) * (((l__67056) + (((x10_long)1ll)))))) + (m__67057)));
                    }))
                    )));
                    
                    //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                    dp = ((dp) + (((((2.0) * ((((Mlm__67040).real()) * ((phi_lm__67053).real()))))) - (((2.0) * ((((Mlm__67040).imag()) * ((phi_lm__67053).imag()))))))));
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
        ::x10x::vector::Vector3d this__66912 = ::x10aux::nullCheck(atom)->FMGL(force);
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d that__66911 = v_pole->x10x::polar::Polar3d::getGradientVector(
                                                 dr, (-(dt)),
                                                 (-(dp)));
        (__extension__ ({
            
            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d b__66913 = that__66911;
            (__extension__ ({
                
                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                ::x10x::vector::Vector3d alloc__66914 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__67068 = ((this__66912->FMGL(i)) + (b__66913->FMGL(i)));
                x10_double j__67069 = ((this__66912->FMGL(j)) + (b__66913->FMGL(j)));
                x10_double k__67070 = ((this__66912->FMGL(k)) + (b__66913->FMGL(k)));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__66914->FMGL(i) = i__67068;
                alloc__66914->FMGL(j) = j__67069;
                alloc__66914->FMGL(k) = k__67070;
                alloc__66914;
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
                                               x10_double theta__66921 =
                                                 theta;
                                               x10_long numTerms__66922 =
                                                 this->FMGL(p);
                                               ::au::edu::anu::mm::WignerRotationMatrix::getExpandedCollection(
                                                 theta__66921,
                                                 numTerms__66922,
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
    x10_long i__50025max__67084 = this->FMGL(p);
    {
        x10_long i__67085;
        for (i__67085 = ((x10_long)0ll); ((i__67085) <= (i__50025max__67084));
             i__67085 = ((i__67085) + (((x10_long)1ll))))
        {
            x10_long l__67086 = i__67085;
            
            //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
            x10_long i__50007max__67081 = l__67086;
            {
                x10_long i__67082;
                for (i__67082 = ((x10_long)0ll); ((i__67082) <= (i__50007max__67081));
                     i__67082 = ((i__67082) + (((x10_long)1ll))))
                {
                    x10_long m__67083 = i__67082;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__67074 = l__67086;
                    x10_long m__67075 = m__67083;
                    x10_complex v__67076 = ::x10::lang::ComplexNatives::_divide((__extension__ ({
                        
                        //#line 281 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LocalExpansion.x10"
                        ::au::edu::anu::mm::Expansion* this__67077 =
                          reinterpret_cast< ::au::edu::anu::mm::Expansion*>(this);
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__67078 = l__67086;
                        x10_long m__67079 = m__67083;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__67077)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__67078) * (((l__67078) + (((x10_long)1ll)))))) + (m__67079)));
                    }))
                    , ::x10::lang::Math::pow(3.0, ((l__67086) + (((x10_long)1ll)))));
                    x10_complex ret__67080;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(parentExpansion->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__67074) * (((l__67074) + (((x10_long)1ll)))))) + (m__67075)),
                      v__67076);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67080 = v__67076;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__67080;
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
