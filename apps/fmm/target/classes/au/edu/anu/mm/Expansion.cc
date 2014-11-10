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
    ::au::edu::anu::mm::Expansion* this__72103 = this;
    
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
    ::au::edu::anu::mm::Expansion* this__72104 = this;
    
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
        ::x10::lang::CheckedThrowable* throwable__72244 =
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
        catch (::x10::lang::CheckedThrowable* __exc237) {
            {
                ::x10::lang::CheckedThrowable* formal__72245 =
                  __exc237;
                {
                    throwable__72244 = formal__72245;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__72244, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__72244))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__72244));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__72244, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__72244)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__72244));
            }
            
        }
        
    }
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::unsafeAdd(::au::edu::anu::mm::Expansion* e) {
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__61362max__72108 = (((x10_long)(::x10aux::nullCheck(this->FMGL(terms))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__72109;
        for (i__72109 = ((x10_long)0ll); ((i__72109) <= (i__61362max__72108));
             i__72109 = ((i__72109) + (((x10_long)1ll))))
        {
            x10_long i__72110 = i__72109;
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::lang::Rail< x10_complex >* a__72105 = this->FMGL(terms);
            x10_long i__72106 = i__72110;
            x10_complex r__72107 = ::x10::lang::ComplexNatives::_plus(::x10aux::nullCheck(a__72105)->x10::lang::Rail< x10_complex >::__apply(
                                                                        i__72106), ::x10aux::nullCheck(::x10aux::nullCheck(e)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                                                     i__72110));
            ::x10aux::nullCheck(a__72105)->x10::lang::Rail< x10_complex >::__set(
              i__72106, r__72107);
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
    x10_long i__61398max__72117 = this->FMGL(p);
    {
        x10_long i__72118;
        for (i__72118 = ((x10_long)0ll); ((i__72118) <= (i__61398max__72117));
             i__72118 = ((i__72118) + (((x10_long)1ll))))
        {
            x10_long i__72119 = i__72118;
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61380max__72114 = i__72119;
            {
                x10_long i__72115;
                for (i__72115 = ((x10_long)0ll); ((i__72115) <= (i__61380max__72114));
                     i__72115 = ((i__72115) + (((x10_long)1ll))))
                {
                    x10_long j__72116 = i__72115;
                    
                    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    s->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::Expansion_Strings::sl__73312), (__extension__ ({
                               ::au::edu::anu::mm::Expansion* this__72111 =
                                 this;
                               
                               //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                               x10_long l__72112 = i__72119;
                               x10_long m__72113 = j__72116;
                               ::x10aux::nullCheck(::x10aux::nullCheck(this__72111)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                 ((((l__72112) * (((l__72112) + (((x10_long)1ll)))))) + (m__72113)));
                           }))
                           ), (&::au::edu::anu::mm::Expansion_Strings::sl__73313)));
                }
            }
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            s->add((&::au::edu::anu::mm::Expansion_Strings::sl__73314));
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
        x10_long i__72123;
        for (i__72123 = ((x10_long)0ll); ((i__72123) <= (((x10_long)1ll)));
             i__72123 = ((i__72123) + (((x10_long)1ll))))
        {
            x10_long r__72124 = i__72123;
            
            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            complexK->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__set(
              r__72124, ::x10::lang::Rail< x10_complex >::_make(((p) + (((x10_long)1ll)))));
            
            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61416max__72120 = p;
            {
                x10_long i__72121;
                for (i__72121 = ((x10_long)0ll); ((i__72121) <= (i__61416max__72120));
                     i__72121 = ((i__72121) + (((x10_long)1ll))))
                {
                    x10_long k__72122 = i__72121;
                    ::x10aux::nullCheck(complexK->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                          r__72124))->x10::lang::Rail< x10_complex >::__set(
                      k__72122, ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(x10_complex(0.0,1.0), ((x10_double) (k__72122))), phi), ((x10_double) ((::x10aux::struct_equals(r__72124,
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
    x10_complex v__72158 = (__extension__ ({
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
        ::au::edu::anu::mm::Expansion* this__72159 = this;
        ::x10aux::nullCheck(::x10aux::nullCheck(this__72159)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    ;
    x10_complex ret__72160;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(target)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__72158);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72160 = v__72158;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72160;
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__61506max__72161 = this->FMGL(p);
    {
        x10_long i__72162;
        for (i__72162 = ((x10_long)1ll); ((i__72162) <= (i__61506max__72161));
             i__72162 = ((i__72162) + (((x10_long)1ll))))
        {
            x10_long l__72163 = i__72162;
            
            //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__72154 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__72163);
            
            //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_complex t_l__72155 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__72156 =
                  this;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__72157 = l__72163;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__72156)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__72157) * (((l__72157) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61452max__72148 = l__72163;
            {
                x10_long i__72149;
                for (i__72149 = ((x10_long)1ll); ((i__72149) <= (i__61452max__72148));
                     i__72149 = ((i__72149) + (((x10_long)1ll))))
                {
                    x10_long k__72150 = i__72149;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      k__72150, ::x10::lang::ComplexNatives::_times((__extension__ ({
                          ::au::edu::anu::mm::Expansion* this__72125 =
                            this;
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__72126 = l__72163;
                          x10_long m__72127 = k__72150;
                          ::x10aux::nullCheck(::x10aux::nullCheck(this__72125)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__72126) * (((l__72126) + (((x10_long)1ll)))))) + (m__72127)));
                      }))
                      , ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                          k__72150)));
                }
            }
            
            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61488max__72151 = l__72163;
            {
                x10_long i__72152;
                for (i__72152 = ((x10_long)0ll); ((i__72152) <= (i__61488max__72151));
                     i__72152 = ((i__72152) + (((x10_long)1ll))))
                {
                    x10_long m__72153 = i__72152;
                    
                    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__72144 = ::x10::lang::ComplexNatives::_times(t_l__72155, (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__72145 = m__72153;
                        x10_double ret__72146;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__72128 = ((i__72145) - (::x10aux::nullCheck(Dl__72154)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__72128 = ((((((offset__72128) * (::x10aux::nullCheck(Dl__72154)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__72154)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__72146 = ::x10aux::nullCheck(Dl__72154)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__72128);
                        ret__72146;
                    }))
                    );
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__72147 = -1.0;
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__61470max__72137 = l__72163;
                    {
                        x10_long i__72138;
                        for (i__72138 = ((x10_long)1ll); ((i__72138) <= (i__61470max__72137));
                             i__72138 = ((i__72138) + (((x10_long)1ll))))
                        {
                            x10_long k__72139 = i__72138;
                            
                            //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__72144 = ::x10::lang::ComplexNatives::_plus(O_lm__72144, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                                                   k__72139), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72131 = m__72153;
                                x10_long i__72132 = k__72139;
                                x10_double ret__72133;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72129 = ((i__72131) - (::x10aux::nullCheck(Dl__72154)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72129 = ((((((offset__72129) * (::x10aux::nullCheck(Dl__72154)->FMGL(layout_stride1)))) + (i__72132))) - (::x10aux::nullCheck(Dl__72154)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72133 = ::x10aux::nullCheck(Dl__72154)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72129);
                                ret__72133;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__72147, ::x10::lang::ComplexNatives::conj(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                                          k__72139))), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72134 = m__72153;
                                x10_long i__72135 = (-(k__72139));
                                x10_double ret__72136;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72130 = ((i__72134) - (::x10aux::nullCheck(Dl__72154)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72130 = ((((((offset__72130) * (::x10aux::nullCheck(Dl__72154)->FMGL(layout_stride1)))) + (i__72135))) - (::x10aux::nullCheck(Dl__72154)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72136 = ::x10aux::nullCheck(Dl__72154)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72130);
                                ret__72136;
                            }))
                            )));
                            
                            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__72147 = (-(m_sign__72147));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72140 = l__72163;
                    x10_long m__72141 = m__72153;
                    x10_complex v__72142 = O_lm__72144;
                    x10_complex ret__72143;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(target)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72140) * (((l__72140) + (((x10_long)1ll)))))) + (m__72141)),
                      v__72142);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72143 = v__72142;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72143;
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
    x10_long i__61578max__72196 = this->FMGL(p);
    {
        x10_long i__72197;
        for (i__72197 = ((x10_long)1ll); ((i__72197) <= (i__61578max__72196));
             i__72197 = ((i__72197) + (((x10_long)1ll))))
        {
            x10_long l__72198 = i__72197;
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__72195 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__72198);
            
            //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61524max__72189 = l__72198;
            {
                x10_long i__72190;
                for (i__72190 = ((x10_long)0ll); ((i__72190) <= (i__61524max__72189));
                     i__72190 = ((i__72190) + (((x10_long)1ll))))
                {
                    x10_long k__72191 = i__72190;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      k__72191, (__extension__ ({
                          ::au::edu::anu::mm::Expansion* this__72164 =
                            this;
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__72165 = l__72198;
                          x10_long m__72166 = k__72191;
                          ::x10aux::nullCheck(::x10aux::nullCheck(this__72164)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__72165) * (((l__72165) + (((x10_long)1ll)))))) + (m__72166)));
                      }))
                      );
                }
            }
            
            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61560max__72192 = l__72198;
            {
                x10_long i__72193;
                for (i__72193 = ((x10_long)0ll); ((i__72193) <= (i__61560max__72192));
                     i__72193 = ((i__72193) + (((x10_long)1ll))))
                {
                    x10_long m__72194 = i__72193;
                    
                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__72185 = ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                    ((x10_long)0ll)), (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__72186 = m__72194;
                        x10_double ret__72187;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__72167 = ((i__72186) - (::x10aux::nullCheck(Dl__72195)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__72167 = ((((((offset__72167) * (::x10aux::nullCheck(Dl__72195)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__72195)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__72187 = ::x10aux::nullCheck(Dl__72195)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__72167);
                        ret__72187;
                    }))
                    );
                    
                    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__72188 = -1.0;
                    
                    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__61542max__72177 = l__72198;
                    {
                        x10_long i__72178;
                        for (i__72178 = ((x10_long)1ll); ((i__72178) <= (i__61542max__72177));
                             i__72178 = ((i__72178) + (((x10_long)1ll))))
                        {
                            x10_long k__72179 = i__72178;
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            x10_complex temp_k__72170 = ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                          k__72179);
                            
                            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__72185 = ::x10::lang::ComplexNatives::_plus(O_lm__72185, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(temp_k__72170, (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72171 = m__72194;
                                x10_long i__72172 = k__72179;
                                x10_double ret__72173;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72168 = ((i__72171) - (::x10aux::nullCheck(Dl__72195)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72168 = ((((((offset__72168) * (::x10aux::nullCheck(Dl__72195)->FMGL(layout_stride1)))) + (i__72172))) - (::x10aux::nullCheck(Dl__72195)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72173 = ::x10aux::nullCheck(Dl__72195)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72168);
                                ret__72173;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__72188, ::x10::lang::ComplexNatives::conj(temp_k__72170)), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72174 = m__72194;
                                x10_long i__72175 = (-(k__72179));
                                x10_double ret__72176;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72169 = ((i__72174) - (::x10aux::nullCheck(Dl__72195)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72169 = ((((((offset__72169) * (::x10aux::nullCheck(Dl__72195)->FMGL(layout_stride1)))) + (i__72175))) - (::x10aux::nullCheck(Dl__72195)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72176 = ::x10aux::nullCheck(Dl__72195)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72169);
                                ret__72176;
                            }))
                            )));
                            
                            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__72188 = (-(m_sign__72188));
                        }
                    }
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    O_lm__72185 = ::x10::lang::ComplexNatives::_times(O_lm__72185, ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                                                                                     m__72194));
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::au::edu::anu::mm::Expansion* this__72180 =
                      this;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72181 = l__72198;
                    x10_long m__72182 = m__72194;
                    x10_complex v__72183 = O_lm__72185;
                    x10_complex ret__72184;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__72180)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72181) * (((l__72181) + (((x10_long)1ll)))))) + (m__72182)),
                      v__72183);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72184 = v__72183;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72184;
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
    ::au::edu::anu::mm::Expansion* a__72238 = target;
    x10_complex r__72239 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
        ::x10aux::nullCheck(::x10aux::nullCheck(a__72238)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    , (__extension__ ({
        ::au::edu::anu::mm::Expansion* this__72240 = this;
        ::x10aux::nullCheck(::x10aux::nullCheck(this__72240)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    );
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__72199 = r__72239;
    x10_complex ret__72200;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__72238)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__72199);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72200 = v__72199;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__72200;
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__61632max__72241 = this->FMGL(p);
    {
        x10_long i__72242;
        for (i__72242 = ((x10_long)1ll); ((i__72242) <= (i__61632max__72241));
             i__72242 = ((i__72242) + (((x10_long)1ll))))
        {
            x10_long l__72243 = i__72242;
            
            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__72234 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__72243);
            
            //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_complex t_l__72235 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__72236 =
                  this;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__72237 = l__72243;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__72236)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__72237) * (((l__72237) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__61614max__72231 = l__72243;
            {
                x10_long i__72232;
                for (i__72232 = ((x10_long)0ll); ((i__72232) <= (i__61614max__72231));
                     i__72232 = ((i__72232) + (((x10_long)1ll))))
                {
                    x10_long m__72233 = i__72232;
                    
                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__72227 = ::x10::lang::ComplexNatives::_times(t_l__72235, (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__72228 = m__72233;
                        x10_double ret__72229;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__72201 = ((i__72228) - (::x10aux::nullCheck(Dl__72234)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__72201 = ((((((offset__72201) * (::x10aux::nullCheck(Dl__72234)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__72234)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__72229 = ::x10aux::nullCheck(Dl__72234)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__72201);
                        ret__72229;
                    }))
                    );
                    
                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__72230 = -1.0;
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__61596max__72218 = l__72243;
                    {
                        x10_long i__72219;
                        for (i__72219 = ((x10_long)1ll); ((i__72219) <= (i__61596max__72218));
                             i__72219 = ((i__72219) + (((x10_long)1ll))))
                        {
                            x10_long k__72220 = i__72219;
                            
                            //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            x10_complex t_lk__72204 = (__extension__ ({
                                ::au::edu::anu::mm::Expansion* this__72205 =
                                  this;
                                
                                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                x10_long l__72206 = l__72243;
                                x10_long m__72207 = k__72220;
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__72205)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                  ((((l__72206) * (((l__72206) + (((x10_long)1ll)))))) + (m__72207)));
                            }))
                            ;
                            
                            //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__72227 = ::x10::lang::ComplexNatives::_plus(O_lm__72227, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(t_lk__72204, (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72208 = m__72233;
                                x10_long i__72209 = k__72220;
                                x10_double ret__72210;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72202 = ((i__72208) - (::x10aux::nullCheck(Dl__72234)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72202 = ((((((offset__72202) * (::x10aux::nullCheck(Dl__72234)->FMGL(layout_stride1)))) + (i__72209))) - (::x10aux::nullCheck(Dl__72234)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72210 = ::x10aux::nullCheck(Dl__72234)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72202);
                                ret__72210;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__72230, ::x10::lang::ComplexNatives::conj(t_lk__72204)), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__72211 = m__72233;
                                x10_long i__72212 = (-(k__72220));
                                x10_double ret__72213;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__72203 = ((i__72211) - (::x10aux::nullCheck(Dl__72234)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__72203 = ((((((offset__72203) * (::x10aux::nullCheck(Dl__72234)->FMGL(layout_stride1)))) + (i__72212))) - (::x10aux::nullCheck(Dl__72234)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__72213 = ::x10aux::nullCheck(Dl__72234)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__72203);
                                ret__72213;
                            }))
                            )));
                            
                            //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__72230 = (-(m_sign__72230));
                        }
                    }
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    O_lm__72227 = ::x10::lang::ComplexNatives::_times(O_lm__72227, ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                                                                                     m__72233));
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::au::edu::anu::mm::Expansion* a__72221 =
                      target;
                    x10_long i__72222 = l__72243;
                    x10_long i__72223 = m__72233;
                    x10_complex r__72224 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__72225 = i__72222;
                        x10_long m__72226 = i__72223;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__72221)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__72225) * (((l__72225) + (((x10_long)1ll)))))) + (m__72226)));
                    }))
                    , O_lm__72227);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__72214 = i__72222;
                    x10_long m__72215 = i__72223;
                    x10_complex v__72216 = r__72224;
                    x10_complex ret__72217;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__72221)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__72214) * (((l__72214) + (((x10_long)1ll)))))) + (m__72215)),
                      v__72216);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72217 = v__72216;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__72217;
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

::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__73312("");
::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__73313(" ");
::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__73314("\n");

/* END of Expansion */
/*************************************************/
