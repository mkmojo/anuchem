#ifndef __AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H
#define __AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
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

class ROFockMethod__RecursiveBisection1D_Strings {
  public:
    static ::x10::lang::String sl__149969;
    static ::x10::lang::String sl__149970;
    static ::x10::lang::String sl__149968;
    static ::x10::lang::String sl__149967;
};

class ROFockMethod__RecursiveBisection1D   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D* operator->() { return this; }
    
    x10_long FMGL(start);
    
    x10_long FMGL(end);
    
    x10_long FMGL(grainSize);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D _alloc(){::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D t; return t; }
    
    void _constructor(x10_long start, x10_long end) {
        
        //#line 757 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        FMGL(start) = start;
        FMGL(end) = end;
        FMGL(grainSize) = ((x10_long)1ll);
        
        //#line 755 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this__148611 =
          (*this);
        
    }
    static ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D _make(x10_long start,
                                                                        x10_long end)
    {
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this_; 
        this_->_constructor(start, end);
        return this_;
    }
    
    void _constructor(x10_long start, x10_long end, x10_long grainSize) {
        
        //#line 761 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        FMGL(start) = start;
        FMGL(end) = end;
        FMGL(grainSize) = grainSize;
        
        //#line 755 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this__148612 =
          (*this);
        
    }
    static ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D _make(
             x10_long start, x10_long end, x10_long grainSize)
    {
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this_; 
        this_->_constructor(start, end, grainSize);
        return this_;
    }
    
    void execute(::x10::lang::VoidFun_0_1<x10_long>* body);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D other) {
        return (((::x10aux::struct_equals((*this)->FMGL(start),
                                          other->FMGL(start))) &&
        (::x10aux::struct_equals((*this)->FMGL(end), other->FMGL(end)))) &&
        (::x10aux::struct_equals((*this)->FMGL(grainSize),
                                 other->FMGL(grainSize))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D other) {
        return (((::x10aux::struct_equals((*this)->FMGL(start),
                                          other->FMGL(start))) &&
        (::x10aux::struct_equals((*this)->FMGL(end), other->FMGL(end)))) &&
        (::x10aux::struct_equals((*this)->FMGL(grainSize),
                                 other->FMGL(grainSize))));
        
    }
    ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D
      au__edu__anu__qm__ROFockMethod__RecursiveBisection1D____this__au__edu__anu__qm__ROFockMethod__RecursiveBisection1D(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_ROFockMethod_RecursiveBisection1D(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H

namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod__RecursiveBisection1D;
} } } } 

#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H_NODEPS
#define AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H_NODEPS
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H_GENERICS
#define AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H_GENERICS
#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H_GENERICS
#endif // __AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D_H_NODEPS
