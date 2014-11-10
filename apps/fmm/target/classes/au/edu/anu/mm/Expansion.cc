/*************************************************/
/* START of Expansion */
#include <au/edu/anu/mm/Expansion.h>

#include <x10/lang/Complex.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/regionarray/Array.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
/** The terms X_{lm} (with m >= 0) in this expansion */

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
/** The number of terms in the expansion. */

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::_constructor(x10_long p) {
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::au::edu::anu::mm::Expansion* this__47703 = this;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    this->FMGL(terms) = ::x10::lang::Rail< x10_complex >::_make(((((p) + (((x10_long)1ll)))) * (((p) + (((x10_long)1ll))))));
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    this->FMGL(p) = p;
}
::au::edu::anu::mm::Expansion* au::edu::anu::mm::Expansion::_make(x10_long p)
{
    ::au::edu::anu::mm::Expansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Expansion>()) ::au::edu::anu::mm::Expansion();
    this_->_constructor(p);
    return this_;
}



//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::_constructor(::au::edu::anu::mm::Expansion* e) {
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::au::edu::anu::mm::Expansion* this__47704 = this;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    this->FMGL(terms) = ::x10::lang::Rail< x10_complex >::_make(::x10aux::nullCheck(e)->FMGL(terms));
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    this->FMGL(p) = ::x10aux::nullCheck(e)->FMGL(p);
}
::au::edu::anu::mm::Expansion* au::edu::anu::mm::Expansion::_make(::au::edu::anu::mm::Expansion* e)
{
    ::au::edu::anu::mm::Expansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Expansion>()) ::au::edu::anu::mm::Expansion();
    this_->_constructor(e);
    return this_;
}



//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
x10_complex au::edu::anu::mm::Expansion::__apply(x10_long l, x10_long m) {
    return ::x10aux::nullCheck(this->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
             ((((l) * (((l) + (((x10_long)1ll)))))) + (m)));
    
}

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
x10_complex au::edu::anu::mm::Expansion::__set(x10_long l,
                                               x10_long m,
                                               x10_complex v) {
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(this->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((l) * (((l) + (((x10_long)1ll)))))) + (m)), v);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    return v;
    
}

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::clear() {
    ::x10aux::nullCheck(this->FMGL(terms))->x10::lang::Rail< x10_complex >::clear();
}

//#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::add(::au::edu::anu::mm::Expansion* e) {
    {
        ::x10::lang::CheckedThrowable* throwable__47844 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                ::x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    this->unsafeAdd(e);
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc163) {
            {
                ::x10::lang::CheckedThrowable* formal__47845 =
                  __exc163;
                {
                    throwable__47844 = formal__47845;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__47844, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__47844))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__47844));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__47844, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__47844)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__47844));
            }
            
        }
        
    }
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::unsafeAdd(::au::edu::anu::mm::Expansion* e) {
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__27013max__47708 = (((x10_long)(::x10aux::nullCheck(this->FMGL(terms))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__47709;
        for (i__47709 = ((x10_long)0ll); ((i__47709) <= (i__27013max__47708));
             i__47709 = ((i__47709) + (((x10_long)1ll))))
        {
            x10_long i__47710 = i__47709;
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::lang::Rail< x10_complex >* a__47705 = this->FMGL(terms);
            x10_long i__47706 = i__47710;
            x10_complex r__47707 = ::x10::lang::ComplexNatives::_plus(::x10aux::nullCheck(a__47705)->x10::lang::Rail< x10_complex >::__apply(
                                                                        i__47706), ::x10aux::nullCheck(::x10aux::nullCheck(e)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                                                     i__47710));
            ::x10aux::nullCheck(a__47705)->x10::lang::Rail< x10_complex >::__set(
              i__47706, r__47707);
        }
    }
    
}

//#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
::x10::lang::String* au::edu::anu::mm::Expansion::toString(
  ) {
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10::util::StringBuilder* s =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (s)->::x10::util::StringBuilder::_constructor();
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__27049max__47717 = this->FMGL(p);
    {
        x10_long i__47718;
        for (i__47718 = ((x10_long)0ll); ((i__47718) <= (i__27049max__47717));
             i__47718 = ((i__47718) + (((x10_long)1ll))))
        {
            x10_long i__47719 = i__47718;
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27031max__47714 = i__47719;
            {
                x10_long i__47715;
                for (i__47715 = ((x10_long)0ll); ((i__47715) <= (i__27031max__47714));
                     i__47715 = ((i__47715) + (((x10_long)1ll))))
                {
                    x10_long j__47716 = i__47715;
                    
                    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    s->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::Expansion_Strings::sl__48676), (__extension__ ({
                               ::au::edu::anu::mm::Expansion* this__47711 =
                                 this;
                               
                               //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                               x10_long l__47712 = i__47719;
                               x10_long m__47713 = j__47716;
                               ::x10aux::nullCheck(::x10aux::nullCheck(this__47711)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                 ((((l__47712) * (((l__47712) + (((x10_long)1ll)))))) + (m__47713)));
                           }))
                           ), (&::au::edu::anu::mm::Expansion_Strings::sl__48677)));
                }
            }
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            s->add((&::au::edu::anu::mm::Expansion_Strings::sl__48678));
        }
    }
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    return s->toString();
    
}

//#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* au::edu::anu::mm::Expansion::genComplexK(
  x10_double phi, x10_long p) {
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* complexK =
      ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::_make(((x10_long)2ll));
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    {
        x10_long i__47723;
        for (i__47723 = ((x10_long)0ll); ((i__47723) <= (((x10_long)1ll)));
             i__47723 = ((i__47723) + (((x10_long)1ll))))
        {
            x10_long r__47724 = i__47723;
            
            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            complexK->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__set(
              r__47724, ::x10::lang::Rail< x10_complex >::_make(((p) + (((x10_long)1ll)))));
            
            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27067max__47720 = p;
            {
                x10_long i__47721;
                for (i__47721 = ((x10_long)0ll); ((i__47721) <= (i__27067max__47720));
                     i__47721 = ((i__47721) + (((x10_long)1ll))))
                {
                    x10_long k__47722 = i__47721;
                    ::x10aux::nullCheck(complexK->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                          r__47724))->x10::lang::Rail< x10_complex >::__set(
                      k__47722, ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(x10_complex(0.0,1.0), ((x10_double) (k__47722))), phi), ((x10_double) ((::x10aux::struct_equals(r__47724,
                                                                                                                                                                                                                                                                          ((x10_long)0ll)))
                        ? (((x10_long)1ll)) : (((x10_long)-1ll)))))));
                }
            }
            
        }
    }
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    return complexK;
    
}

//#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::rotate(::x10::lang::Rail< x10_complex >* temp,
                                         ::x10::lang::Rail< x10_complex >* complexK,
                                         ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* wigner,
                                         ::au::edu::anu::mm::Expansion* target) {
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__47758 = (__extension__ ({
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
        ::au::edu::anu::mm::Expansion* this__47759 = this;
        ::x10aux::nullCheck(::x10aux::nullCheck(this__47759)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    ;
    x10_complex ret__47760;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(target)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__47758);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47760 = v__47758;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47760;
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__27157max__47761 = this->FMGL(p);
    {
        x10_long i__47762;
        for (i__47762 = ((x10_long)1ll); ((i__47762) <= (i__27157max__47761));
             i__47762 = ((i__47762) + (((x10_long)1ll))))
        {
            x10_long l__47763 = i__47762;
            
            //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__47754 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__47763);
            
            //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_complex t_l__47755 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__47756 =
                  this;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__47757 = l__47763;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__47756)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__47757) * (((l__47757) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27103max__47748 = l__47763;
            {
                x10_long i__47749;
                for (i__47749 = ((x10_long)1ll); ((i__47749) <= (i__27103max__47748));
                     i__47749 = ((i__47749) + (((x10_long)1ll))))
                {
                    x10_long k__47750 = i__47749;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      k__47750, ::x10::lang::ComplexNatives::_times((__extension__ ({
                          ::au::edu::anu::mm::Expansion* this__47725 =
                            this;
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__47726 = l__47763;
                          x10_long m__47727 = k__47750;
                          ::x10aux::nullCheck(::x10aux::nullCheck(this__47725)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__47726) * (((l__47726) + (((x10_long)1ll)))))) + (m__47727)));
                      }))
                      , ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                          k__47750)));
                }
            }
            
            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27139max__47751 = l__47763;
            {
                x10_long i__47752;
                for (i__47752 = ((x10_long)0ll); ((i__47752) <= (i__27139max__47751));
                     i__47752 = ((i__47752) + (((x10_long)1ll))))
                {
                    x10_long m__47753 = i__47752;
                    
                    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__47744 = ::x10::lang::ComplexNatives::_times(t_l__47755, (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__47745 = m__47753;
                        x10_double ret__47746;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__47728 = ((i__47745) - (::x10aux::nullCheck(Dl__47754)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__47728 = ((((((offset__47728) * (::x10aux::nullCheck(Dl__47754)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__47754)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__47746 = ::x10aux::nullCheck(Dl__47754)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__47728);
                        ret__47746;
                    }))
                    );
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__47747 = -1.0;
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__27121max__47737 = l__47763;
                    {
                        x10_long i__47738;
                        for (i__47738 = ((x10_long)1ll); ((i__47738) <= (i__27121max__47737));
                             i__47738 = ((i__47738) + (((x10_long)1ll))))
                        {
                            x10_long k__47739 = i__47738;
                            
                            //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__47744 = ::x10::lang::ComplexNatives::_plus(O_lm__47744, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                                                   k__47739), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__47731 = m__47753;
                                x10_long i__47732 = k__47739;
                                x10_double ret__47733;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__47729 = ((i__47731) - (::x10aux::nullCheck(Dl__47754)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__47729 = ((((((offset__47729) * (::x10aux::nullCheck(Dl__47754)->FMGL(layout_stride1)))) + (i__47732))) - (::x10aux::nullCheck(Dl__47754)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__47733 = ::x10aux::nullCheck(Dl__47754)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__47729);
                                ret__47733;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__47747, ::x10::lang::ComplexNatives::conj(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                                          k__47739))), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__47734 = m__47753;
                                x10_long i__47735 = (-(k__47739));
                                x10_double ret__47736;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__47730 = ((i__47734) - (::x10aux::nullCheck(Dl__47754)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__47730 = ((((((offset__47730) * (::x10aux::nullCheck(Dl__47754)->FMGL(layout_stride1)))) + (i__47735))) - (::x10aux::nullCheck(Dl__47754)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__47736 = ::x10aux::nullCheck(Dl__47754)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__47730);
                                ret__47736;
                            }))
                            )));
                            
                            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__47747 = (-(m_sign__47747));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47740 = l__47763;
                    x10_long m__47741 = m__47753;
                    x10_complex v__47742 = O_lm__47744;
                    x10_complex ret__47743;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(target)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47740) * (((l__47740) + (((x10_long)1ll)))))) + (m__47741)),
                      v__47742);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47743 = v__47742;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47743;
                }
            }
            
        }
    }
    
}

//#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::backRotate(::x10::lang::Rail< x10_complex >* temp,
                                             ::x10::lang::Rail< x10_complex >* complexK,
                                             ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* wigner) {
    
    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__27229max__47796 = this->FMGL(p);
    {
        x10_long i__47797;
        for (i__47797 = ((x10_long)1ll); ((i__47797) <= (i__27229max__47796));
             i__47797 = ((i__47797) + (((x10_long)1ll))))
        {
            x10_long l__47798 = i__47797;
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__47795 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__47798);
            
            //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27175max__47789 = l__47798;
            {
                x10_long i__47790;
                for (i__47790 = ((x10_long)0ll); ((i__47790) <= (i__27175max__47789));
                     i__47790 = ((i__47790) + (((x10_long)1ll))))
                {
                    x10_long k__47791 = i__47790;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      k__47791, (__extension__ ({
                          ::au::edu::anu::mm::Expansion* this__47764 =
                            this;
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__47765 = l__47798;
                          x10_long m__47766 = k__47791;
                          ::x10aux::nullCheck(::x10aux::nullCheck(this__47764)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__47765) * (((l__47765) + (((x10_long)1ll)))))) + (m__47766)));
                      }))
                      );
                }
            }
            
            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27211max__47792 = l__47798;
            {
                x10_long i__47793;
                for (i__47793 = ((x10_long)0ll); ((i__47793) <= (i__27211max__47792));
                     i__47793 = ((i__47793) + (((x10_long)1ll))))
                {
                    x10_long m__47794 = i__47793;
                    
                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__47785 = ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                    ((x10_long)0ll)), (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__47786 = m__47794;
                        x10_double ret__47787;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__47767 = ((i__47786) - (::x10aux::nullCheck(Dl__47795)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__47767 = ((((((offset__47767) * (::x10aux::nullCheck(Dl__47795)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__47795)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__47787 = ::x10aux::nullCheck(Dl__47795)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__47767);
                        ret__47787;
                    }))
                    );
                    
                    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__47788 = -1.0;
                    
                    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__27193max__47777 = l__47798;
                    {
                        x10_long i__47778;
                        for (i__47778 = ((x10_long)1ll); ((i__47778) <= (i__27193max__47777));
                             i__47778 = ((i__47778) + (((x10_long)1ll))))
                        {
                            x10_long k__47779 = i__47778;
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            x10_complex temp_k__47770 = ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                          k__47779);
                            
                            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__47785 = ::x10::lang::ComplexNatives::_plus(O_lm__47785, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(temp_k__47770, (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__47771 = m__47794;
                                x10_long i__47772 = k__47779;
                                x10_double ret__47773;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__47768 = ((i__47771) - (::x10aux::nullCheck(Dl__47795)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__47768 = ((((((offset__47768) * (::x10aux::nullCheck(Dl__47795)->FMGL(layout_stride1)))) + (i__47772))) - (::x10aux::nullCheck(Dl__47795)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__47773 = ::x10aux::nullCheck(Dl__47795)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__47768);
                                ret__47773;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__47788, ::x10::lang::ComplexNatives::conj(temp_k__47770)), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__47774 = m__47794;
                                x10_long i__47775 = (-(k__47779));
                                x10_double ret__47776;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__47769 = ((i__47774) - (::x10aux::nullCheck(Dl__47795)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__47769 = ((((((offset__47769) * (::x10aux::nullCheck(Dl__47795)->FMGL(layout_stride1)))) + (i__47775))) - (::x10aux::nullCheck(Dl__47795)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__47776 = ::x10aux::nullCheck(Dl__47795)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__47769);
                                ret__47776;
                            }))
                            )));
                            
                            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__47788 = (-(m_sign__47788));
                        }
                    }
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    O_lm__47785 = ::x10::lang::ComplexNatives::_times(O_lm__47785, ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                                                                                     m__47794));
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::au::edu::anu::mm::Expansion* this__47780 =
                      this;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47781 = l__47798;
                    x10_long m__47782 = m__47794;
                    x10_complex v__47783 = O_lm__47785;
                    x10_complex ret__47784;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__47780)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47781) * (((l__47781) + (((x10_long)1ll)))))) + (m__47782)),
                      v__47783);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47784 = v__47783;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47784;
                }
            }
            
        }
    }
    
}

//#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::backRotateAndAdd(::x10::lang::Rail< x10_complex >* complexK,
                                                   ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* wigner,
                                                   ::au::edu::anu::mm::Expansion* target) {
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::au::edu::anu::mm::Expansion* a__47838 = target;
    x10_complex r__47839 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
        ::x10aux::nullCheck(::x10aux::nullCheck(a__47838)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    , (__extension__ ({
        ::au::edu::anu::mm::Expansion* this__47840 = this;
        ::x10aux::nullCheck(::x10aux::nullCheck(this__47840)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    );
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__47799 = r__47839;
    x10_complex ret__47800;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__47838)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__47799);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47800 = v__47799;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__47800;
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__27283max__47841 = this->FMGL(p);
    {
        x10_long i__47842;
        for (i__47842 = ((x10_long)1ll); ((i__47842) <= (i__27283max__47841));
             i__47842 = ((i__47842) + (((x10_long)1ll))))
        {
            x10_long l__47843 = i__47842;
            
            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__47834 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__47843);
            
            //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_complex t_l__47835 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__47836 =
                  this;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__47837 = l__47843;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__47836)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__47837) * (((l__47837) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__27265max__47831 = l__47843;
            {
                x10_long i__47832;
                for (i__47832 = ((x10_long)0ll); ((i__47832) <= (i__27265max__47831));
                     i__47832 = ((i__47832) + (((x10_long)1ll))))
                {
                    x10_long m__47833 = i__47832;
                    
                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__47827 = ::x10::lang::ComplexNatives::_times(t_l__47835, (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__47828 = m__47833;
                        x10_double ret__47829;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__47801 = ((i__47828) - (::x10aux::nullCheck(Dl__47834)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__47801 = ((((((offset__47801) * (::x10aux::nullCheck(Dl__47834)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__47834)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__47829 = ::x10aux::nullCheck(Dl__47834)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__47801);
                        ret__47829;
                    }))
                    );
                    
                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__47830 = -1.0;
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__27247max__47818 = l__47843;
                    {
                        x10_long i__47819;
                        for (i__47819 = ((x10_long)1ll); ((i__47819) <= (i__27247max__47818));
                             i__47819 = ((i__47819) + (((x10_long)1ll))))
                        {
                            x10_long k__47820 = i__47819;
                            
                            //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            x10_complex t_lk__47804 = (__extension__ ({
                                ::au::edu::anu::mm::Expansion* this__47805 =
                                  this;
                                
                                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                x10_long l__47806 = l__47843;
                                x10_long m__47807 = k__47820;
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__47805)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                  ((((l__47806) * (((l__47806) + (((x10_long)1ll)))))) + (m__47807)));
                            }))
                            ;
                            
                            //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__47827 = ::x10::lang::ComplexNatives::_plus(O_lm__47827, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(t_lk__47804, (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__47808 = m__47833;
                                x10_long i__47809 = k__47820;
                                x10_double ret__47810;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__47802 = ((i__47808) - (::x10aux::nullCheck(Dl__47834)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__47802 = ((((((offset__47802) * (::x10aux::nullCheck(Dl__47834)->FMGL(layout_stride1)))) + (i__47809))) - (::x10aux::nullCheck(Dl__47834)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__47810 = ::x10aux::nullCheck(Dl__47834)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__47802);
                                ret__47810;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__47830, ::x10::lang::ComplexNatives::conj(t_lk__47804)), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__47811 = m__47833;
                                x10_long i__47812 = (-(k__47820));
                                x10_double ret__47813;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__47803 = ((i__47811) - (::x10aux::nullCheck(Dl__47834)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__47803 = ((((((offset__47803) * (::x10aux::nullCheck(Dl__47834)->FMGL(layout_stride1)))) + (i__47812))) - (::x10aux::nullCheck(Dl__47834)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__47813 = ::x10aux::nullCheck(Dl__47834)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__47803);
                                ret__47813;
                            }))
                            )));
                            
                            //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__47830 = (-(m_sign__47830));
                        }
                    }
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    O_lm__47827 = ::x10::lang::ComplexNatives::_times(O_lm__47827, ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                                                                                     m__47833));
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::au::edu::anu::mm::Expansion* a__47821 =
                      target;
                    x10_long i__47822 = l__47843;
                    x10_long i__47823 = m__47833;
                    x10_complex r__47824 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__47825 = i__47822;
                        x10_long m__47826 = i__47823;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__47821)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__47825) * (((l__47825) + (((x10_long)1ll)))))) + (m__47826)));
                    }))
                    , O_lm__47827);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__47814 = i__47822;
                    x10_long m__47815 = i__47823;
                    x10_complex v__47816 = r__47824;
                    x10_complex ret__47817;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__47821)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__47814) * (((l__47814) + (((x10_long)1ll)))))) + (m__47815)),
                      v__47816);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47817 = v__47816;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__47817;
                }
            }
            
        }
    }
    
}

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
::au::edu::anu::mm::Expansion* au::edu::anu::mm::Expansion::au__edu__anu__mm__Expansion____this__au__edu__anu__mm__Expansion(
  ) {
    return this;
    
}
void au::edu::anu::mm::Expansion::__fieldInitializers_au_edu_anu_mm_Expansion(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::Expansion::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::Expansion::_deserializer);

void au::edu::anu::mm::Expansion::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(terms));
    buf.write(this->FMGL(p));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::Expansion::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Expansion* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Expansion>()) ::au::edu::anu::mm::Expansion();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::Expansion::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(terms) = buf.read< ::x10::lang::Rail< x10_complex >*>();
    FMGL(p) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::mm::Expansion::rtt;
void au::edu::anu::mm::Expansion::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.Expansion",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__48676("");
::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__48677(" ");
::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__48678("\n");

/* END of Expansion */
/*************************************************/
