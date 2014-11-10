#ifndef __AU_EDU_ANU_CHEM_BONDTYPE_H
#define __AU_EDU_ANU_CHEM_BONDTYPE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class BondType_Strings {
  public:
    static ::x10::lang::String sl__32512;
    static ::x10::lang::String sl__32508;
    static ::x10::lang::String sl__32510;
    static ::x10::lang::String sl__32511;
    static ::x10::lang::String sl__32504;
    static ::x10::lang::String sl__32509;
    static ::x10::lang::String sl__32506;
    static ::x10::lang::String sl__32507;
    static ::x10::lang::String sl__32505;
};

class BondType   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::chem::BondType* operator->() { return this; }
    
    ::x10::lang::String* FMGL(description);
    
    x10_double FMGL(bondOrder);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::chem::BondType > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::chem::BondType _alloc(){::au::edu::anu::chem::BondType t; return t; }
    
    void _constructor(::x10::lang::String* description, x10_double bondOrder);
    
    static ::au::edu::anu::chem::BondType _make(::x10::lang::String* description,
                                                x10_double bondOrder);
    
    /* Static field: FMGL(WEAK_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(WEAK_BOND);
    static void FMGL(WEAK_BOND__do_init)();
    static void FMGL(WEAK_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(WEAK_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(WEAK_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(WEAK_BOND__get)();
    
    /* Static field: FMGL(NO_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(NO_BOND);
    static void FMGL(NO_BOND__do_init)();
    static void FMGL(NO_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(NO_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(NO_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(NO_BOND__get)();
    
    /* Static field: FMGL(SINGLE_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(SINGLE_BOND);
    static void FMGL(SINGLE_BOND__do_init)();
    static void FMGL(SINGLE_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SINGLE_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(SINGLE_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(SINGLE_BOND__get)();
    
    /* Static field: FMGL(DOUBLE_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(DOUBLE_BOND);
    static void FMGL(DOUBLE_BOND__do_init)();
    static void FMGL(DOUBLE_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DOUBLE_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(DOUBLE_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(DOUBLE_BOND__get)();
    
    /* Static field: FMGL(TRIPLE_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(TRIPLE_BOND);
    static void FMGL(TRIPLE_BOND__do_init)();
    static void FMGL(TRIPLE_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(TRIPLE_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(TRIPLE_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(TRIPLE_BOND__get)();
    
    /* Static field: FMGL(QUADRUPLE_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(QUADRUPLE_BOND);
    static void FMGL(QUADRUPLE_BOND__do_init)();
    static void FMGL(QUADRUPLE_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(QUADRUPLE_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(QUADRUPLE_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(QUADRUPLE_BOND__get)();
    
    /* Static field: FMGL(AROMATIC_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(AROMATIC_BOND);
    static void FMGL(AROMATIC_BOND__do_init)();
    static void FMGL(AROMATIC_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(AROMATIC_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(AROMATIC_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(AROMATIC_BOND__get)();
    
    /* Static field: FMGL(AMIDE_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(AMIDE_BOND);
    static void FMGL(AMIDE_BOND__do_init)();
    static void FMGL(AMIDE_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(AMIDE_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(AMIDE_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(AMIDE_BOND__get)();
    
    /* Static field: FMGL(IONIC_BOND) */
    static ::au::edu::anu::chem::BondType FMGL(IONIC_BOND);
    static void FMGL(IONIC_BOND__do_init)();
    static void FMGL(IONIC_BOND__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(IONIC_BOND__status);
    static ::x10::lang::CheckedThrowable* FMGL(IONIC_BOND__exception);
    static ::au::edu::anu::chem::BondType FMGL(IONIC_BOND__get)();
    
    x10_boolean isStrongBond() {
        
        //#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/BondType.x10"
        return ((!::x10aux::struct_equals((*this), ::au::edu::anu::chem::BondType::FMGL(NO_BOND__get)())) &&
        (!::x10aux::struct_equals((*this), ::au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)())));
        
    }
    ::x10::lang::String* toString() {
        return (*this)->FMGL(description);
        
    }
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::chem::BondType other) {
        return ((::x10aux::struct_equals((*this)->FMGL(description),
                                         other->FMGL(description))) &&
        (::x10aux::struct_equals((*this)->FMGL(bondOrder),
                                 other->FMGL(bondOrder))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::chem::BondType other) {
        return ((::x10aux::struct_equals((*this)->FMGL(description),
                                         other->FMGL(description))) &&
        (::x10aux::struct_equals((*this)->FMGL(bondOrder),
                                 other->FMGL(bondOrder))));
        
    }
    ::au::edu::anu::chem::BondType au__edu__anu__chem__BondType____this__au__edu__anu__chem__BondType(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_chem_BondType() {
     
    }
    
    static void _serialize(::au::edu::anu::chem::BondType this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::chem::BondType _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::chem::BondType this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_CHEM_BONDTYPE_H

namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 

#ifndef AU_EDU_ANU_CHEM_BONDTYPE_H_NODEPS
#define AU_EDU_ANU_CHEM_BONDTYPE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_CHEM_BONDTYPE_H_GENERICS
#define AU_EDU_ANU_CHEM_BONDTYPE_H_GENERICS
inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)() {
    if (FMGL(WEAK_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(WEAK_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(WEAK_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(NO_BOND__get)() {
    if (FMGL(NO_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(NO_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(NO_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__get)() {
    if (FMGL(SINGLE_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SINGLE_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(SINGLE_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__get)() {
    if (FMGL(DOUBLE_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DOUBLE_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND__get)() {
    if (FMGL(TRIPLE_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(TRIPLE_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND__get)() {
    if (FMGL(QUADRUPLE_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(QUADRUPLE_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(QUADRUPLE_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND__get)() {
    if (FMGL(AROMATIC_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(AROMATIC_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(AMIDE_BOND__get)() {
    if (FMGL(AMIDE_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(AMIDE_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(AMIDE_BOND);
}

inline ::au::edu::anu::chem::BondType au::edu::anu::chem::BondType::FMGL(IONIC_BOND__get)() {
    if (FMGL(IONIC_BOND__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(IONIC_BOND__init)();
    }
    return au::edu::anu::chem::BondType::FMGL(IONIC_BOND);
}

#endif // AU_EDU_ANU_CHEM_BONDTYPE_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_BONDTYPE_H_NODEPS
