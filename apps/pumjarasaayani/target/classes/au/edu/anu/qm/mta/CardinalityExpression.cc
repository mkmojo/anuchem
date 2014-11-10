/*************************************************/
/* START of CardinalityExpression */
#include <au/edu/anu/qm/mta/CardinalityExpression.h>

#include <x10/lang/Boolean.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/mta/Fragment.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/util/ListIterator.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
void au::edu::anu::qm::mta::CardinalityExpression::_constructor() {
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    ::au::edu::anu::qm::mta::CardinalityExpression* this__108486 = this;
    ::x10aux::nullCheck(this__108486)->FMGL(mergedIntoPreviousTerm) = false;
}
::au::edu::anu::qm::mta::CardinalityExpression* au::edu::anu::qm::mta::CardinalityExpression::_make(
  ) {
    ::au::edu::anu::qm::mta::CardinalityExpression* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::CardinalityExpression>()) ::au::edu::anu::qm::mta::CardinalityExpression();
    this_->_constructor();
    return this_;
}



//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
void au::edu::anu::qm::mta::CardinalityExpression::addCardinalityFragments(
  ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    x10_int noOfFragments = ((x10_int) (::x10aux::nullCheck(fragList)->size()));
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    ::x10::lang::Rail< x10_int >* combs = ::x10::lang::Rail< x10_int >::_make(((x10_long)(noOfFragments)),
                                                                              ((x10_int)-1));
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* cfList =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>());
    (cfList)->::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>::_constructor();
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    x10_int l;
    x10_int pos;
    x10_int m;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (noOfFragments)); i =
                                                          ((i) + (((x10_int)1))))
        {
            
            //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
            {
                x10_int j;
                for (j = ((i) + (((x10_int)1))); ((j) < (noOfFragments));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    combs->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)0ll), i);
                    combs->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)1ll), j);
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    if (!(this->computeIntersections(fragList,
                                                     cfList,
                                                     combs,
                                                     ((x10_int)1),
                                                     (__extension__ ({
                                                         ::au::edu::anu::qm::mta::CardinalityExpression* this__108478 =
                                                           this;
                                                         
                                                         //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                         x10_int ret__108479;
                                                         goto __ret__108480; __ret__108480: {
                                                         {
                                                             
                                                             //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                             x10_int n__108477 =
                                                               ((((x10_int)1)) + (((x10_int)1)));
                                                             
                                                             //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                             if ((::x10aux::struct_equals(((n__108477) % ::x10aux::zeroCheck(((x10_int)2))),
                                                                                          ((x10_int)0))))
                                                             {
                                                                 ret__108479 =
                                                                   ((x10_int)-1);
                                                                 goto __ret__108480_end_;
                                                             }
                                                             else
                                                             {
                                                                 
                                                                 //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                                 ret__108479 =
                                                                   ((x10_int)1);
                                                                 goto __ret__108480_end_;
                                                             }
                                                             
                                                         }goto __ret__108480_end_; __ret__108480_end_: ;
                                                         }
                                                         ret__108479;
                                                         }))
                                                         )))
                        {
                            continue;
                        }
                        
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    if ((((noOfFragments) <= (((x10_int)2))) ||
                        (::x10aux::struct_equals(combs->x10::lang::Rail< x10_int >::__apply(
                                                   ((x10_long)1ll)),
                                                 ((noOfFragments) - (((x10_int)1)))))))
                    {
                        continue;
                    }
                    
                    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    l = ((x10_int)1);
                    pos = ((x10_int)1);
                    m = ((pos) + (((x10_int)1)));
                    
                    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    while (true) {
                        
                        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                        x10_int i__55362min__108492 = ((combs->x10::lang::Rail< x10_int >::__apply(
                                                          ((x10_long)(pos)))) + (((x10_int)1)));
                        x10_int i__55362max__108493 = ((noOfFragments) - (((x10_int)1)));
                        {
                            x10_int i__108494;
                            for (i__108494 = i__55362min__108492;
                                 ((i__108494) <= (i__55362max__108493));
                                 i__108494 = ((i__108494) + (((x10_int)1))))
                            {
                                x10_int k__108495 = i__108494;
                                
                                //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                combs->x10::lang::Rail< x10_int >::__set(
                                  ((x10_long)(m)), k__108495);
                                
                                //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                if (((m) > (((x10_int)0))))
                                {
                                    
                                    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                    if (((combs->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(m)))) <= (combs->x10::lang::Rail< x10_int >::__apply(
                                                                    ((((x10_long)(m))) - (((x10_long)1ll)))))))
                                    {
                                        break;
                                    }
                                    
                                }
                                
                                //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                if (!(this->computeIntersections(
                                        fragList, cfList,
                                        combs, m, (__extension__ ({
                                            ::au::edu::anu::qm::mta::CardinalityExpression* this__108487 =
                                              this;
                                            
                                            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                            x10_int n__108488 =
                                              m;
                                            x10_int ret__108489;
                                            goto __ret__108490; __ret__108490: {
                                            {
                                                
                                                //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                x10_int n__108491 =
                                                  ((n__108488) + (((x10_int)1)));
                                                
                                                //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                if ((::x10aux::struct_equals(((n__108491) % ::x10aux::zeroCheck(((x10_int)2))),
                                                                             ((x10_int)0))))
                                                {
                                                    ret__108489 =
                                                      ((x10_int)-1);
                                                    goto __ret__108490_end_;
                                                } else {
                                                    
                                                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                                    ret__108489 =
                                                      ((x10_int)1);
                                                    goto __ret__108490_end_;
                                                }
                                                
                                            }goto __ret__108490_end_; __ret__108490_end_: ;
                                            }
                                            ret__108489;
                                            }))
                                            ))) {
                                        
                                        //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                        if ((::x10aux::struct_equals(combs->x10::lang::Rail< x10_int >::__apply(
                                                                       ((x10_long)(m))),
                                                                     ((noOfFragments) - (((x10_int)1))))))
                                        {
                                            break;
                                        }
                                        
                                        //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                        m = ((m) - (((x10_int)1)));
                                    }
                                    
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                                m = ((m) + (((x10_int)1)));
                                }
                            }
                            
                        
                        //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                        pos = ((noOfFragments) - (l));
                        m = pos;
                        
                        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                        if ((::x10aux::struct_equals(combs->x10::lang::Rail< x10_int >::__apply(
                                                       ((x10_long)(pos))),
                                                     ((noOfFragments) - (((x10_int)1))))))
                        {
                            l = ((l) + (((x10_int)1)));
                        } else {
                            
                            //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                            l = ((x10_int)1);
                        }
                        
                        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                        if ((::x10aux::struct_equals(pos,
                                                     ((x10_int)1))))
                        {
                            break;
                        }
                        }
                        
                    }
                    }
                    
            }
            }
            
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::CardinalityExpression_Strings::sl__149241), cfList->size())));
        
        //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        {
            ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* cf__55380;
            for (cf__55380 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(cfList->iterator());
                 ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(cf__55380));
                 ) {
                ::au::edu::anu::qm::mta::Fragment* cf = ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(cf__55380));
                
                //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                if ((!::x10aux::struct_equals(::x10aux::nullCheck(cf)->FMGL(cardinalitySign),
                                              ((x10_int)0))))
                {
                    ::x10aux::nullCheck(fragList)->add(cf);
                }
                
            }
        }
        
    }
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    x10_int au::edu::anu::qm::mta::CardinalityExpression::getSignOfTerm(
      x10_int n) {
        
        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        x10_int n1 = ((n) + (((x10_int)1)));
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        if ((::x10aux::struct_equals(((n1) % ::x10aux::zeroCheck(((x10_int)2))),
                                     ((x10_int)0)))) {
            return ((x10_int)-1);
            
        } else {
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
            return ((x10_int)1);
            
        }
        
    }
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    x10_boolean au::edu::anu::qm::mta::CardinalityExpression::computeIntersections(
      ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList,
      ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* cfList,
      ::x10::lang::Rail< x10_int >* combs, x10_int nTerms,
      x10_int sign) {
        
        //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        ::au::edu::anu::qm::mta::Fragment* fInter = ::x10aux::nullCheck(fragList)->get(
                                                      ((x10_long)(::x10aux::nullCheck(combs)->x10::lang::Rail< x10_int >::__apply(
                                                                    ((x10_long)0ll)))));
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        {
            x10_int i;
            for (i = ((x10_int)1); ((i) <= (nTerms)); i =
                                                        ((i) + (((x10_int)1))))
            {
                
                //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                fInter = ::x10aux::nullCheck(fInter)->intersection(
                           ::x10aux::nullCheck(fragList)->get(
                             ((x10_long)(::x10aux::nullCheck(combs)->x10::lang::Rail< x10_int >::__apply(
                                           ((x10_long)(i)))))));
                
                //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(fInter)->getNumberOfTrueAtoms(),
                                             ((x10_long)0ll))))
                {
                    return false;
                    
                }
                
            }
        }
        
        //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        this->addFragmentToList(fragList, cfList, fInter,
                                sign);
        
        //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        return true;
        
    }
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    void au::edu::anu::qm::mta::CardinalityExpression::addFragmentToList(
      ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList,
      ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* cfList,
      ::au::edu::anu::qm::mta::Fragment* fragment, x10_int sign) {
        
        //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        this->FMGL(mergedIntoPreviousTerm) = false;
        
        //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        {
            ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* frag__55382;
            for (frag__55382 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(::x10aux::nullCheck(cfList)->iterator());
                 ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(frag__55382));
                 ) {
                ::au::edu::anu::qm::mta::Fragment* frag =
                  ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(frag__55382));
                
                //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                if (::x10aux::nullCheck(frag)->equals(fragment))
                {
                    
                    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    this->FMGL(mergedIntoPreviousTerm) = true;
                    
                    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    ::x10aux::nullCheck(frag)->FMGL(cardinalitySign) =
                      ((::x10aux::nullCheck(frag)->FMGL(cardinalitySign)) + (sign));
                    
                    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
                    break;
                }
                
            }
        }
        
        //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        if (!(this->FMGL(mergedIntoPreviousTerm))) {
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
            ::x10aux::nullCheck(fragment)->FMGL(cardinalitySign) =
              sign;
            
            //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
            ::x10aux::nullCheck(cfList)->add(fragment);
        }
        
    }
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
    ::au::edu::anu::qm::mta::CardinalityExpression* au::edu::anu::qm::mta::CardinalityExpression::au__edu__anu__qm__mta__CardinalityExpression____this__au__edu__anu__qm__mta__CardinalityExpression(
      ) {
        return this;
        
    }
    void au::edu::anu::qm::mta::CardinalityExpression::__fieldInitializers_au_edu_anu_qm_mta_CardinalityExpression(
      ) {
        this->FMGL(mergedIntoPreviousTerm) = false;
    }
    const ::x10aux::serialization_id_t au::edu::anu::qm::mta::CardinalityExpression::_serialization_id = 
        ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::mta::CardinalityExpression::_deserializer);
    
    void au::edu::anu::qm::mta::CardinalityExpression::_serialize_body(::x10aux::serialization_buffer& buf) {
        buf.write(this->FMGL(mergedIntoPreviousTerm));
        
    }
    
    ::x10::lang::Reference* ::au::edu::anu::qm::mta::CardinalityExpression::_deserializer(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::mta::CardinalityExpression* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::CardinalityExpression>()) ::au::edu::anu::qm::mta::CardinalityExpression();
        buf.record_reference(this_);
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void au::edu::anu::qm::mta::CardinalityExpression::_deserialize_body(::x10aux::deserialization_buffer& buf) {
        FMGL(mergedIntoPreviousTerm) = buf.read<x10_boolean>();
    }
    
    
::x10aux::RuntimeType au::edu::anu::qm::mta::CardinalityExpression::rtt;
void au::edu::anu::qm::mta::CardinalityExpression::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.mta.CardinalityExpression",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::mta::CardinalityExpression_Strings::sl__149241("No. of cardinality fragments: ");

/* END of CardinalityExpression */
/*************************************************/
