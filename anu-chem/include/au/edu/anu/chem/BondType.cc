/*************************************************/
/* START of BondType */
#include <au/edu/anu/chem/BondType.h>


//#line 16 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::chem::BondType> {
public:
    static ::x10::lang::Any::itable< BondType_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< BondType_ibox0 >  BondType_ibox0::itable(&BondType_ibox0::equals, &BondType_ibox0::hashCode, &BondType_ibox0::toString, &BondType_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::chem::BondType >  au::edu::anu::chem::BondType::_itable_0(&au::edu::anu::chem::BondType::equals, &au::edu::anu::chem::BondType::hashCode, &au::edu::anu::chem::BondType::toString, &au::edu::anu::chem::BondType::typeName);
::x10aux::itable_entry au::edu::anu::chem::BondType::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::BondType::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::BondType")};
::x10aux::itable_entry au::edu::anu::chem::BondType::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::BondType_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::BondType")};

//#line 17 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
void au::edu::anu::chem::BondType::_constructor(::x10::lang::String* description,
                                                x10_double bondOrder) {
    
    //#line 18 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
    FMGL(description) = description;
    FMGL(bondOrder) = bondOrder;
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
    ::au::edu::anu::chem::BondType this__10008 = (*this);
    
}
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::_make(
  ::x10::lang::String* description, x10_double bondOrder) {
    ::au::edu::anu::chem::BondType this_; 
    this_->_constructor(description, bondOrder);
    return this_;
}



//#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(WEAK_BOND);
void au::edu::anu::chem::BondType::FMGL(WEAK_BOND__do_init)() {
    FMGL(WEAK_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.WEAK_BOND");
    ::au::edu::anu::chem::BondType __var24__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32504),
                                                                                     0.0);
    FMGL(WEAK_BOND) = __var24__;
    FMGL(WEAK_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(WEAK_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(WEAK_BOND__status), &FMGL(WEAK_BOND__do_init), &FMGL(WEAK_BOND__exception), "au::edu::anu::chem::BondType.WEAK_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(WEAK_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(WEAK_BOND__exception);


//#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(NO_BOND);
void au::edu::anu::chem::BondType::FMGL(NO_BOND__do_init)() {
    FMGL(NO_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.NO_BOND");
    ::au::edu::anu::chem::BondType __var25__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32505),
                                                                                     0.0);
    FMGL(NO_BOND) = __var25__;
    FMGL(NO_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(NO_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(NO_BOND__status), &FMGL(NO_BOND__do_init), &FMGL(NO_BOND__exception), "au::edu::anu::chem::BondType.NO_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(NO_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(NO_BOND__exception);


//#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(SINGLE_BOND);
void au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__do_init)() {
    FMGL(SINGLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.SINGLE_BOND");
    ::au::edu::anu::chem::BondType __var26__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32506),
                                                                                     1.0);
    FMGL(SINGLE_BOND) = __var26__;
    FMGL(SINGLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(SINGLE_BOND__status), &FMGL(SINGLE_BOND__do_init), &FMGL(SINGLE_BOND__exception), "au::edu::anu::chem::BondType.SINGLE_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__exception);


//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND);
void au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__do_init)() {
    FMGL(DOUBLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.DOUBLE_BOND");
    ::au::edu::anu::chem::BondType __var27__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32507),
                                                                                     2.0);
    FMGL(DOUBLE_BOND) = __var27__;
    FMGL(DOUBLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(DOUBLE_BOND__status), &FMGL(DOUBLE_BOND__do_init), &FMGL(DOUBLE_BOND__exception), "au::edu::anu::chem::BondType.DOUBLE_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__exception);


//#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND);
void au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND__do_init)() {
    FMGL(TRIPLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.TRIPLE_BOND");
    ::au::edu::anu::chem::BondType __var28__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32508),
                                                                                     3.0);
    FMGL(TRIPLE_BOND) = __var28__;
    FMGL(TRIPLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(TRIPLE_BOND__status), &FMGL(TRIPLE_BOND__do_init), &FMGL(TRIPLE_BOND__exception), "au::edu::anu::chem::BondType.TRIPLE_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND__exception);


//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND);
void au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND__do_init)() {
    FMGL(QUADRUPLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.QUADRUPLE_BOND");
    ::au::edu::anu::chem::BondType __var29__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32509),
                                                                                     4.0);
    FMGL(QUADRUPLE_BOND) = __var29__;
    FMGL(QUADRUPLE_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(QUADRUPLE_BOND__status), &FMGL(QUADRUPLE_BOND__do_init), &FMGL(QUADRUPLE_BOND__exception), "au::edu::anu::chem::BondType.QUADRUPLE_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND__exception);


//#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND);
void au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND__do_init)() {
    FMGL(AROMATIC_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.AROMATIC_BOND");
    ::au::edu::anu::chem::BondType __var30__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32510),
                                                                                     1.5);
    FMGL(AROMATIC_BOND) = __var30__;
    FMGL(AROMATIC_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(AROMATIC_BOND__status), &FMGL(AROMATIC_BOND__do_init), &FMGL(AROMATIC_BOND__exception), "au::edu::anu::chem::BondType.AROMATIC_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND__exception);


//#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(AMIDE_BOND);
void au::edu::anu::chem::BondType::FMGL(AMIDE_BOND__do_init)() {
    FMGL(AMIDE_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.AMIDE_BOND");
    ::au::edu::anu::chem::BondType __var31__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32511),
                                                                                     1.41);
    FMGL(AMIDE_BOND) = __var31__;
    FMGL(AMIDE_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(AMIDE_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(AMIDE_BOND__status), &FMGL(AMIDE_BOND__do_init), &FMGL(AMIDE_BOND__exception), "au::edu::anu::chem::BondType.AMIDE_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(AMIDE_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(AMIDE_BOND__exception);


//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(IONIC_BOND);
void au::edu::anu::chem::BondType::FMGL(IONIC_BOND__do_init)() {
    FMGL(IONIC_BOND__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::BondType.IONIC_BOND");
    ::au::edu::anu::chem::BondType __var32__ = ::au::edu::anu::chem::BondType::_make((&::au::edu::anu::chem::BondType_Strings::sl__32512),
                                                                                     0.0);
    FMGL(IONIC_BOND) = __var32__;
    FMGL(IONIC_BOND__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::BondType::FMGL(IONIC_BOND__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(IONIC_BOND__status), &FMGL(IONIC_BOND__do_init), &FMGL(IONIC_BOND__exception), "au::edu::anu::chem::BondType.IONIC_BOND");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::BondType::FMGL(IONIC_BOND__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::BondType::FMGL(IONIC_BOND__exception);


//#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"

//#line 16 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
::x10::lang::String* au::edu::anu::chem::BondType::typeName(
  ){
    return ::x10aux::type_name((*this));
}
x10_int au::edu::anu::chem::BondType::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(description))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(bondOrder))));
    return result;
    
}
x10_boolean au::edu::anu::chem::BondType::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::BondType>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::chem::BondType::equals(
             ::x10aux::class_cast< ::au::edu::anu::chem::BondType>(other));
    
}
x10_boolean au::edu::anu::chem::BondType::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::BondType>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::chem::BondType::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::chem::BondType>(other));
    
}
void ::au::edu::anu::chem::BondType::_serialize(::au::edu::anu::chem::BondType this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(description));
    buf.write(this_->FMGL(bondOrder));
    
}

void ::au::edu::anu::chem::BondType::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(description) = buf.read< ::x10::lang::String*>();
    FMGL(bondOrder) = buf.read<x10_double>();
}


::x10aux::RuntimeType au::edu::anu::chem::BondType::rtt;
void au::edu::anu::chem::BondType::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.chem.BondType",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32512("Ionic bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32508("Triple bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32510("Aromatic bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32511("Amide bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32504("Weak bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32509("Quadruple bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32506("Single bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32507("Double bond");
::x10::lang::String au::edu::anu::chem::BondType_Strings::sl__32505("No bond");

/* END of BondType */
/*************************************************/
