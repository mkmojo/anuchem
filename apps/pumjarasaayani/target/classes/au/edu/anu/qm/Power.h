#ifndef __AU_EDU_ANU_QM_POWER_H
#define __AU_EDU_ANU_QM_POWER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
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

namespace au { namespace edu { namespace anu { namespace qm { 

class Power_Strings {
  public:
    static ::x10::lang::String sl__149303;
    static ::x10::lang::String sl__149306;
    static ::x10::lang::String sl__149305;
    static ::x10::lang::String sl__149302;
    static ::x10::lang::String sl__149307;
    static ::x10::lang::String sl__149308;
    static ::x10::lang::String sl__149304;
};

class Power   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::Power* operator->() { return this; }
    
    x10_int FMGL(l);
    
    x10_int FMGL(m);
    
    x10_int FMGL(n);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::Power > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::Power _alloc(){::au::edu::anu::qm::Power t; return t; }
    
    x10_int FMGL(maxam);
    
    x10_int FMGL(minam);
    
    x10_int FMGL(totam);
    
    void _constructor() {
        FMGL(l) = ((x10_int)0);
        FMGL(m) = ((x10_int)0);
        FMGL(n) = ((x10_int)0);
        
        //#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
        ::au::edu::anu::qm::Power this__109430 = (*this);
        
        //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
        (*this)->FMGL(maxam) = (*this)->FMGL(minam) = (*this)->FMGL(totam) =
          ((x10_int)0);
    }
    static ::au::edu::anu::qm::Power _make() {
        ::au::edu::anu::qm::Power this_; 
        this_->_constructor();
        return this_;
    }
    
    void _constructor(x10_int l, x10_int m, x10_int n);
    
    static ::au::edu::anu::qm::Power _make(x10_int l, x10_int m, x10_int n);
    
    x10_int getL() {
        return (*this)->FMGL(l);
        
    }
    x10_int getM() {
        return (*this)->FMGL(m);
        
    }
    x10_int getN() {
        return (*this)->FMGL(n);
        
    }
    x10_int getTotalAngularMomentum() {
        return (*this)->FMGL(totam);
        
    }
    x10_int getMaximumAngularMomentum() {
        return (*this)->FMGL(maxam);
        
    }
    x10_int getMinimumAngularMomentum() {
        return (*this)->FMGL(minam);
        
    }
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::Power other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(l), other->FMGL(l))) &&
        (::x10aux::struct_equals((*this)->FMGL(m), other->FMGL(m)))) &&
        (::x10aux::struct_equals((*this)->FMGL(n), other->FMGL(n)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxam), other->FMGL(maxam)))) &&
        (::x10aux::struct_equals((*this)->FMGL(minam), other->FMGL(minam)))) &&
        (::x10aux::struct_equals((*this)->FMGL(totam), other->FMGL(totam))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::Power other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(l), other->FMGL(l))) &&
        (::x10aux::struct_equals((*this)->FMGL(m), other->FMGL(m)))) &&
        (::x10aux::struct_equals((*this)->FMGL(n), other->FMGL(n)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxam), other->FMGL(maxam)))) &&
        (::x10aux::struct_equals((*this)->FMGL(minam), other->FMGL(minam)))) &&
        (::x10aux::struct_equals((*this)->FMGL(totam), other->FMGL(totam))));
        
    }
    ::au::edu::anu::qm::Power au__edu__anu__qm__Power____this__au__edu__anu__qm__Power(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_Power() {
     
    }
    
    static void _serialize(::au::edu::anu::qm::Power this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::Power _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::Power this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_POWER_H

namespace au { namespace edu { namespace anu { namespace qm { 
class Power;
} } } } 

#ifndef AU_EDU_ANU_QM_POWER_H_NODEPS
#define AU_EDU_ANU_QM_POWER_H_NODEPS
#ifndef AU_EDU_ANU_QM_POWER_H_GENERICS
#define AU_EDU_ANU_QM_POWER_H_GENERICS
#endif // AU_EDU_ANU_QM_POWER_H_GENERICS
#endif // __AU_EDU_ANU_QM_POWER_H_NODEPS
