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
    ::au::edu::anu::mm::Expansion* this__24275 = this;
    
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
    ::au::edu::anu::mm::Expansion* this__24276 = this;
    
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
        ::x10::lang::CheckedThrowable* throwable__24416 =
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
        catch (::x10::lang::CheckedThrowable* __exc12) {
            {
                ::x10::lang::CheckedThrowable* formal__24417 =
                  __exc12;
                {
                    throwable__24416 = formal__24417;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__24416, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__24416))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__24416));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__24416, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__24416)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__24416));
            }
            
        }
        
    }
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
void au::edu::anu::mm::Expansion::unsafeAdd(::au::edu::anu::mm::Expansion* e) {
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__18530max__24280 = (((x10_long)(::x10aux::nullCheck(this->FMGL(terms))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__24281;
        for (i__24281 = ((x10_long)0ll); ((i__24281) <= (i__18530max__24280));
             i__24281 = ((i__24281) + (((x10_long)1ll))))
        {
            x10_long i__24282 = i__24281;
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::lang::Rail< x10_complex >* a__24277 = this->FMGL(terms);
            x10_long i__24278 = i__24282;
            x10_complex r__24279 = ::x10::lang::ComplexNatives::_plus(::x10aux::nullCheck(a__24277)->x10::lang::Rail< x10_complex >::__apply(
                                                                        i__24278), ::x10aux::nullCheck(::x10aux::nullCheck(e)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                                                                     i__24282));
            ::x10aux::nullCheck(a__24277)->x10::lang::Rail< x10_complex >::__set(
              i__24278, r__24279);
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
    x10_long i__18566max__24289 = this->FMGL(p);
    {
        x10_long i__24290;
        for (i__24290 = ((x10_long)0ll); ((i__24290) <= (i__18566max__24289));
             i__24290 = ((i__24290) + (((x10_long)1ll))))
        {
            x10_long i__24291 = i__24290;
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18548max__24286 = i__24291;
            {
                x10_long i__24287;
                for (i__24287 = ((x10_long)0ll); ((i__24287) <= (i__18548max__24286));
                     i__24287 = ((i__24287) + (((x10_long)1ll))))
                {
                    x10_long j__24288 = i__24287;
                    
                    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    s->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::Expansion_Strings::sl__68069), (__extension__ ({
                               ::au::edu::anu::mm::Expansion* this__24283 =
                                 this;
                               
                               //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                               x10_long l__24284 = i__24291;
                               x10_long m__24285 = j__24288;
                               ::x10aux::nullCheck(::x10aux::nullCheck(this__24283)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                 ((((l__24284) * (((l__24284) + (((x10_long)1ll)))))) + (m__24285)));
                           }))
                           ), (&::au::edu::anu::mm::Expansion_Strings::sl__68070)));
                }
            }
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            s->add((&::au::edu::anu::mm::Expansion_Strings::sl__68071));
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
        x10_long i__24295;
        for (i__24295 = ((x10_long)0ll); ((i__24295) <= (((x10_long)1ll)));
             i__24295 = ((i__24295) + (((x10_long)1ll))))
        {
            x10_long r__24296 = i__24295;
            
            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            complexK->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__set(
              r__24296, ::x10::lang::Rail< x10_complex >::_make(((p) + (((x10_long)1ll)))));
            
            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18584max__24292 = p;
            {
                x10_long i__24293;
                for (i__24293 = ((x10_long)0ll); ((i__24293) <= (i__18584max__24292));
                     i__24293 = ((i__24293) + (((x10_long)1ll))))
                {
                    x10_long k__24294 = i__24293;
                    ::x10aux::nullCheck(complexK->x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >::__apply(
                                          r__24296))->x10::lang::Rail< x10_complex >::__set(
                      k__24294, ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(x10_complex(0.0,1.0), ((x10_double) (k__24294))), phi), ((x10_double) ((::x10aux::struct_equals(r__24296,
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
    x10_complex v__24330 = (__extension__ ({
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
        ::au::edu::anu::mm::Expansion* this__24331 = this;
        ::x10aux::nullCheck(::x10aux::nullCheck(this__24331)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    ;
    x10_complex ret__24332;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(target)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__24330);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__24332 = v__24330;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__24332;
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__18674max__24333 = this->FMGL(p);
    {
        x10_long i__24334;
        for (i__24334 = ((x10_long)1ll); ((i__24334) <= (i__18674max__24333));
             i__24334 = ((i__24334) + (((x10_long)1ll))))
        {
            x10_long l__24335 = i__24334;
            
            //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__24326 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__24335);
            
            //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_complex t_l__24327 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__24328 =
                  this;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__24329 = l__24335;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__24328)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__24329) * (((l__24329) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18620max__24320 = l__24335;
            {
                x10_long i__24321;
                for (i__24321 = ((x10_long)1ll); ((i__24321) <= (i__18620max__24320));
                     i__24321 = ((i__24321) + (((x10_long)1ll))))
                {
                    x10_long k__24322 = i__24321;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      k__24322, ::x10::lang::ComplexNatives::_times((__extension__ ({
                          ::au::edu::anu::mm::Expansion* this__24297 =
                            this;
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__24298 = l__24335;
                          x10_long m__24299 = k__24322;
                          ::x10aux::nullCheck(::x10aux::nullCheck(this__24297)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__24298) * (((l__24298) + (((x10_long)1ll)))))) + (m__24299)));
                      }))
                      , ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                          k__24322)));
                }
            }
            
            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18656max__24323 = l__24335;
            {
                x10_long i__24324;
                for (i__24324 = ((x10_long)0ll); ((i__24324) <= (i__18656max__24323));
                     i__24324 = ((i__24324) + (((x10_long)1ll))))
                {
                    x10_long m__24325 = i__24324;
                    
                    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__24316 = ::x10::lang::ComplexNatives::_times(t_l__24327, (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__24317 = m__24325;
                        x10_double ret__24318;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__24300 = ((i__24317) - (::x10aux::nullCheck(Dl__24326)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__24300 = ((((((offset__24300) * (::x10aux::nullCheck(Dl__24326)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__24326)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__24318 = ::x10aux::nullCheck(Dl__24326)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__24300);
                        ret__24318;
                    }))
                    );
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__24319 = -1.0;
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__18638max__24309 = l__24335;
                    {
                        x10_long i__24310;
                        for (i__24310 = ((x10_long)1ll); ((i__24310) <= (i__18638max__24309));
                             i__24310 = ((i__24310) + (((x10_long)1ll))))
                        {
                            x10_long k__24311 = i__24310;
                            
                            //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__24316 = ::x10::lang::ComplexNatives::_plus(O_lm__24316, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                                                   k__24311), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__24303 = m__24325;
                                x10_long i__24304 = k__24311;
                                x10_double ret__24305;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__24301 = ((i__24303) - (::x10aux::nullCheck(Dl__24326)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__24301 = ((((((offset__24301) * (::x10aux::nullCheck(Dl__24326)->FMGL(layout_stride1)))) + (i__24304))) - (::x10aux::nullCheck(Dl__24326)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__24305 = ::x10aux::nullCheck(Dl__24326)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__24301);
                                ret__24305;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__24319, ::x10::lang::ComplexNatives::conj(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                                                                                          k__24311))), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__24306 = m__24325;
                                x10_long i__24307 = (-(k__24311));
                                x10_double ret__24308;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__24302 = ((i__24306) - (::x10aux::nullCheck(Dl__24326)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__24302 = ((((((offset__24302) * (::x10aux::nullCheck(Dl__24326)->FMGL(layout_stride1)))) + (i__24307))) - (::x10aux::nullCheck(Dl__24326)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__24308 = ::x10aux::nullCheck(Dl__24326)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__24302);
                                ret__24308;
                            }))
                            )));
                            
                            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__24319 = (-(m_sign__24319));
                        }
                    }
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__24312 = l__24335;
                    x10_long m__24313 = m__24325;
                    x10_complex v__24314 = O_lm__24316;
                    x10_complex ret__24315;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(target)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__24312) * (((l__24312) + (((x10_long)1ll)))))) + (m__24313)),
                      v__24314);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__24315 = v__24314;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__24315;
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
    x10_long i__18746max__24368 = this->FMGL(p);
    {
        x10_long i__24369;
        for (i__24369 = ((x10_long)1ll); ((i__24369) <= (i__18746max__24368));
             i__24369 = ((i__24369) + (((x10_long)1ll))))
        {
            x10_long l__24370 = i__24369;
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__24367 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__24370);
            
            //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18692max__24361 = l__24370;
            {
                x10_long i__24362;
                for (i__24362 = ((x10_long)0ll); ((i__24362) <= (i__18692max__24361));
                     i__24362 = ((i__24362) + (((x10_long)1ll))))
                {
                    x10_long k__24363 = i__24362;
                    ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__set(
                      k__24363, (__extension__ ({
                          ::au::edu::anu::mm::Expansion* this__24336 =
                            this;
                          
                          //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                          x10_long l__24337 = l__24370;
                          x10_long m__24338 = k__24363;
                          ::x10aux::nullCheck(::x10aux::nullCheck(this__24336)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                            ((((l__24337) * (((l__24337) + (((x10_long)1ll)))))) + (m__24338)));
                      }))
                      );
                }
            }
            
            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18728max__24364 = l__24370;
            {
                x10_long i__24365;
                for (i__24365 = ((x10_long)0ll); ((i__24365) <= (i__18728max__24364));
                     i__24365 = ((i__24365) + (((x10_long)1ll))))
                {
                    x10_long m__24366 = i__24365;
                    
                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__24357 = ::x10::lang::ComplexNatives::_times(::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                                                    ((x10_long)0ll)), (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__24358 = m__24366;
                        x10_double ret__24359;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__24339 = ((i__24358) - (::x10aux::nullCheck(Dl__24367)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__24339 = ((((((offset__24339) * (::x10aux::nullCheck(Dl__24367)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__24367)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__24359 = ::x10aux::nullCheck(Dl__24367)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__24339);
                        ret__24359;
                    }))
                    );
                    
                    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__24360 = -1.0;
                    
                    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__18710max__24349 = l__24370;
                    {
                        x10_long i__24350;
                        for (i__24350 = ((x10_long)1ll); ((i__24350) <= (i__18710max__24349));
                             i__24350 = ((i__24350) + (((x10_long)1ll))))
                        {
                            x10_long k__24351 = i__24350;
                            
                            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            x10_complex temp_k__24342 = ::x10aux::nullCheck(temp)->x10::lang::Rail< x10_complex >::__apply(
                                                          k__24351);
                            
                            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__24357 = ::x10::lang::ComplexNatives::_plus(O_lm__24357, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(temp_k__24342, (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__24343 = m__24366;
                                x10_long i__24344 = k__24351;
                                x10_double ret__24345;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__24340 = ((i__24343) - (::x10aux::nullCheck(Dl__24367)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__24340 = ((((((offset__24340) * (::x10aux::nullCheck(Dl__24367)->FMGL(layout_stride1)))) + (i__24344))) - (::x10aux::nullCheck(Dl__24367)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__24345 = ::x10aux::nullCheck(Dl__24367)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__24340);
                                ret__24345;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__24360, ::x10::lang::ComplexNatives::conj(temp_k__24342)), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__24346 = m__24366;
                                x10_long i__24347 = (-(k__24351));
                                x10_double ret__24348;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__24341 = ((i__24346) - (::x10aux::nullCheck(Dl__24367)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__24341 = ((((((offset__24341) * (::x10aux::nullCheck(Dl__24367)->FMGL(layout_stride1)))) + (i__24347))) - (::x10aux::nullCheck(Dl__24367)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__24348 = ::x10aux::nullCheck(Dl__24367)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__24341);
                                ret__24348;
                            }))
                            )));
                            
                            //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__24360 = (-(m_sign__24360));
                        }
                    }
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    O_lm__24357 = ::x10::lang::ComplexNatives::_times(O_lm__24357, ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                                                                                     m__24366));
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::au::edu::anu::mm::Expansion* this__24352 =
                      this;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__24353 = l__24370;
                    x10_long m__24354 = m__24366;
                    x10_complex v__24355 = O_lm__24357;
                    x10_complex ret__24356;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__24352)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__24353) * (((l__24353) + (((x10_long)1ll)))))) + (m__24354)),
                      v__24355);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__24356 = v__24355;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__24356;
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
    ::au::edu::anu::mm::Expansion* a__24410 = target;
    x10_complex r__24411 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
        ::x10aux::nullCheck(::x10aux::nullCheck(a__24410)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    , (__extension__ ({
        ::au::edu::anu::mm::Expansion* this__24412 = this;
        ::x10aux::nullCheck(::x10aux::nullCheck(this__24412)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
          ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
    }))
    );
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_complex v__24371 = r__24411;
    x10_complex ret__24372;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(a__24410)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
      ((((((x10_long)0ll)) * (((((x10_long)0ll)) + (((x10_long)1ll)))))) + (((x10_long)0ll))),
      v__24371);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__24372 = v__24371;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    ret__24372;
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
    x10_long i__18800max__24413 = this->FMGL(p);
    {
        x10_long i__24414;
        for (i__24414 = ((x10_long)1ll); ((i__24414) <= (i__18800max__24413));
             i__24414 = ((i__24414) + (((x10_long)1ll))))
        {
            x10_long l__24415 = i__24414;
            
            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            ::x10::regionarray::Array<x10_double>* Dl__24406 =
              ::x10aux::nullCheck(wigner)->x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >::__apply(
                l__24415);
            
            //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_complex t_l__24407 = (__extension__ ({
                ::au::edu::anu::mm::Expansion* this__24408 =
                  this;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                x10_long l__24409 = l__24415;
                ::x10aux::nullCheck(::x10aux::nullCheck(this__24408)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                  ((((l__24409) * (((l__24409) + (((x10_long)1ll)))))) + (((x10_long)0ll))));
            }))
            ;
            
            //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
            x10_long i__18782max__24403 = l__24415;
            {
                x10_long i__24404;
                for (i__24404 = ((x10_long)0ll); ((i__24404) <= (i__18782max__24403));
                     i__24404 = ((i__24404) + (((x10_long)1ll))))
                {
                    x10_long m__24405 = i__24404;
                    
                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_complex O_lm__24399 = ::x10::lang::ComplexNatives::_times(t_l__24407, (__extension__ ({
                        
                        //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long i__24400 = m__24405;
                        x10_double ret__24401;
                        
                        //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        x10_long offset__24373 = ((i__24400) - (::x10aux::nullCheck(Dl__24406)->FMGL(layout_min0)));
                        
                        //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        offset__24373 = ((((((offset__24373) * (::x10aux::nullCheck(Dl__24406)->FMGL(layout_stride1)))) + (((x10_long)0ll)))) - (::x10aux::nullCheck(Dl__24406)->FMGL(layout_min1)));
                        
                        //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__24401 = ::x10aux::nullCheck(Dl__24406)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                       offset__24373);
                        ret__24401;
                    }))
                    );
                    
                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_double m_sign__24402 = -1.0;
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long i__18764max__24390 = l__24415;
                    {
                        x10_long i__24391;
                        for (i__24391 = ((x10_long)1ll); ((i__24391) <= (i__18764max__24390));
                             i__24391 = ((i__24391) + (((x10_long)1ll))))
                        {
                            x10_long k__24392 = i__24391;
                            
                            //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            x10_complex t_lk__24376 = (__extension__ ({
                                ::au::edu::anu::mm::Expansion* this__24377 =
                                  this;
                                
                                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                                x10_long l__24378 = l__24415;
                                x10_long m__24379 = k__24392;
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__24377)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                                  ((((l__24378) * (((l__24378) + (((x10_long)1ll)))))) + (m__24379)));
                            }))
                            ;
                            
                            //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            O_lm__24399 = ::x10::lang::ComplexNatives::_plus(O_lm__24399, ::x10::lang::ComplexNatives::_plus(::x10::lang::ComplexNatives::_times(t_lk__24376, (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__24380 = m__24405;
                                x10_long i__24381 = k__24392;
                                x10_double ret__24382;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__24374 = ((i__24380) - (::x10aux::nullCheck(Dl__24406)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__24374 = ((((((offset__24374) * (::x10aux::nullCheck(Dl__24406)->FMGL(layout_stride1)))) + (i__24381))) - (::x10aux::nullCheck(Dl__24406)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__24382 = ::x10aux::nullCheck(Dl__24406)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__24374);
                                ret__24382;
                            }))
                            ), ::x10::lang::ComplexNatives::_times(::x10::lang::ComplexNatives::_times(m_sign__24402, ::x10::lang::ComplexNatives::conj(t_lk__24376)), (__extension__ ({
                                
                                //#line 466 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long i__24383 = m__24405;
                                x10_long i__24384 = (-(k__24392));
                                x10_double ret__24385;
                                
                                //#line 470 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                x10_long offset__24375 = ((i__24383) - (::x10aux::nullCheck(Dl__24406)->FMGL(layout_min0)));
                                
                                //#line 471 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                offset__24375 = ((((((offset__24375) * (::x10aux::nullCheck(Dl__24406)->FMGL(layout_stride1)))) + (i__24384))) - (::x10aux::nullCheck(Dl__24406)->FMGL(layout_min1)));
                                
                                //#line 472 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__24385 = ::x10aux::nullCheck(Dl__24406)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               offset__24375);
                                ret__24385;
                            }))
                            )));
                            
                            //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                            m_sign__24402 = (-(m_sign__24402));
                        }
                    }
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    O_lm__24399 = ::x10::lang::ComplexNatives::_times(O_lm__24399, ::x10aux::nullCheck(complexK)->x10::lang::Rail< x10_complex >::__apply(
                                                                                     m__24405));
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::au::edu::anu::mm::Expansion* a__24393 =
                      target;
                    x10_long i__24394 = l__24415;
                    x10_long i__24395 = m__24405;
                    x10_complex r__24396 = ::x10::lang::ComplexNatives::_plus((__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                        x10_long l__24397 = i__24394;
                        x10_long m__24398 = i__24395;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__24393)->FMGL(terms))->x10::lang::Rail< x10_complex >::__apply(
                          ((((l__24397) * (((l__24397) + (((x10_long)1ll)))))) + (m__24398)));
                    }))
                    , O_lm__24399);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    x10_long l__24386 = i__24394;
                    x10_long m__24387 = i__24395;
                    x10_complex v__24388 = r__24396;
                    x10_complex ret__24389;
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(a__24393)->FMGL(terms))->x10::lang::Rail< x10_complex >::__set(
                      ((((l__24386) * (((l__24386) + (((x10_long)1ll)))))) + (m__24387)),
                      v__24388);
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__24389 = v__24388;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Expansion.x10"
                    ret__24389;
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

::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__68069("");
::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__68070(" ");
::x10::lang::String au::edu::anu::mm::Expansion_Strings::sl__68071("\n");

/* END of Expansion */
/*************************************************/
