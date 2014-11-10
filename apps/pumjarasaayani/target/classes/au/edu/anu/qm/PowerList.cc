/*************************************************/
/* START of PowerList */
#include <au/edu/anu/qm/PowerList.h>


//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
void au::edu::anu::qm::PowerList::_constructor() {
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    ::au::edu::anu::qm::PowerList* this__128290 = this;
    ::x10aux::nullCheck(this__128290)->FMGL(powerList) = (__extension__ ({
        
        //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
        ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>* alloc__128289 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*> >()) ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>());
        (alloc__128289)->::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>::_constructor();
        alloc__128289;
    }))
    ;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    this->FMGL(powerList)->put((&::au::edu::anu::qm::PowerList_Strings::sl__149627),
                               this->au::edu::anu::qm::PowerList::generatePowerList(
                                 ((x10_int)0)));
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    this->FMGL(powerList)->put((&::au::edu::anu::qm::PowerList_Strings::sl__149628),
                               this->au::edu::anu::qm::PowerList::generatePowerList(
                                 ((x10_int)1)));
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    this->FMGL(powerList)->put((&::au::edu::anu::qm::PowerList_Strings::sl__149629),
                               this->au::edu::anu::qm::PowerList::generatePowerList(
                                 ((x10_int)2)));
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    this->FMGL(powerList)->put((&::au::edu::anu::qm::PowerList_Strings::sl__149630),
                               this->au::edu::anu::qm::PowerList::generatePowerList(
                                 ((x10_int)3)));
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    this->FMGL(powerList)->put((&::au::edu::anu::qm::PowerList_Strings::sl__149631),
                               this->au::edu::anu::qm::PowerList::generatePowerList(
                                 ((x10_int)4)));
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    this->FMGL(powerList)->put((&::au::edu::anu::qm::PowerList_Strings::sl__149632),
                               this->au::edu::anu::qm::PowerList::generatePowerList(
                                 ((x10_int)5)));
}
::au::edu::anu::qm::PowerList* au::edu::anu::qm::PowerList::_make(
  ) {
    ::au::edu::anu::qm::PowerList* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::PowerList>()) ::au::edu::anu::qm::PowerList();
    this_->_constructor();
    return this_;
}



//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
::x10::lang::Rail< ::au::edu::anu::qm::Power >* au::edu::anu::qm::PowerList::generatePowerList(
  x10_int maxAngularMomentum) {
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    x10_int n = ((((((maxAngularMomentum) + (((x10_int)1)))) * (((maxAngularMomentum) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* pList =
      ::x10::lang::Rail< ::au::edu::anu::qm::Power >::_make(((x10_long)(n)));
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    x10_long idx = ((x10_long)0ll);
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) <= (maxAngularMomentum));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((j) <= (((maxAngularMomentum) - (i))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
                    pList->x10::lang::Rail< ::au::edu::anu::qm::Power >::__set(
                      (__extension__ ({
                          x10_long pre__101558 = idx;
                          idx = ((idx) + (((x10_long)1ll)));
                          pre__101558;
                      }))
                      , (__extension__ ({
                          ::au::edu::anu::qm::Power alloc__101580 =
                             ::au::edu::anu::qm::Power::_alloc();
                          (alloc__101580)->::au::edu::anu::qm::Power::_constructor(
                            i, j, ((((maxAngularMomentum) - (i))) - (j)));
                          alloc__101580;
                      }))
                      );
                }
            }
            
        }
    }
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    return pList;
    
}

//#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
::au::edu::anu::qm::PowerList* au::edu::anu::qm::PowerList::FMGL(_theInstance);
void au::edu::anu::qm::PowerList::FMGL(_theInstance__do_init)() {
    FMGL(_theInstance__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::qm::PowerList._theInstance");
    ::au::edu::anu::qm::PowerList* __var256__ = ::au::edu::anu::qm::PowerList::_make();
    FMGL(_theInstance) = __var256__;
    FMGL(_theInstance__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::qm::PowerList::FMGL(_theInstance__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(_theInstance__status), &FMGL(_theInstance__do_init), &FMGL(_theInstance__exception), "au::edu::anu::qm::PowerList._theInstance");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::qm::PowerList::FMGL(_theInstance__status);
::x10::lang::CheckedThrowable* au::edu::anu::qm::PowerList::FMGL(_theInstance__exception);


//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
::au::edu::anu::qm::PowerList* au::edu::anu::qm::PowerList::getInstance(
  ) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
    ::au::edu::anu::qm::PowerList* alloc__128291 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::PowerList>()) ::au::edu::anu::qm::PowerList());
    (alloc__128291)->::au::edu::anu::qm::PowerList::_constructor();
    return alloc__128291;
    
}

//#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
::x10::lang::Rail< ::au::edu::anu::qm::Power >* au::edu::anu::qm::PowerList::getPowers(
  ::x10::lang::String* orbitalType) {
    return this->FMGL(powerList)->getOrElse(orbitalType, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
::au::edu::anu::qm::PowerList* au::edu::anu::qm::PowerList::au__edu__anu__qm__PowerList____this__au__edu__anu__qm__PowerList(
  ) {
    return this;
    
}
void au::edu::anu::qm::PowerList::__fieldInitializers_au_edu_anu_qm_PowerList(
  ) {
    this->FMGL(powerList) = (__extension__ ({
        
        //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
        ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>* alloc__101582 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*> >()) ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>());
        (alloc__101582)->::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>::_constructor();
        alloc__101582;
    }))
    ;
}
const ::x10aux::serialization_id_t au::edu::anu::qm::PowerList::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::PowerList::_deserializer);

void au::edu::anu::qm::PowerList::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(powerList));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::PowerList::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::PowerList* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::PowerList>()) ::au::edu::anu::qm::PowerList();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::PowerList::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(powerList) = buf.read< ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::au::edu::anu::qm::Power >*>*>();
    
}

::x10aux::RuntimeType au::edu::anu::qm::PowerList::rtt;
void au::edu::anu::qm::PowerList::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.PowerList",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::PowerList_Strings::sl__149629("D");
::x10::lang::String au::edu::anu::qm::PowerList_Strings::sl__149630("F");
::x10::lang::String au::edu::anu::qm::PowerList_Strings::sl__149631("G");
::x10::lang::String au::edu::anu::qm::PowerList_Strings::sl__149628("P");
::x10::lang::String au::edu::anu::qm::PowerList_Strings::sl__149627("S");
::x10::lang::String au::edu::anu::qm::PowerList_Strings::sl__149632("H");

/* END of PowerList */
/*************************************************/
