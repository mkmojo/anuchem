#ifndef __AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H
#define __AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_REDUCIBLE_H_NODEPS
#include <x10/lang/Reducible.h>
#undef X10_LANG_REDUCIBLE_H_NODEPS
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

namespace au { namespace edu { namespace anu { namespace mm { 

class Octant__SumReducer_Strings {
  public:
    static ::x10::lang::String sl__73107;
};

class Octant__SumReducer   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::mm::Octant__SumReducer* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[3];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::mm::Octant__SumReducer > _itable_0;
    
    static ::x10::lang::Reducible<x10_double>::itable< ::au::edu::anu::mm::Octant__SumReducer > _itable_1;
    
    static ::x10aux::itable_entry _iboxitables[3];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::mm::Octant__SumReducer _alloc(){::au::edu::anu::mm::Octant__SumReducer t; return t; }
    
    x10_double zero() {
        return 0.0;
        
    }
    x10_double __apply(x10_double a, x10_double b);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::mm::Octant__SumReducer other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::mm::Octant__SumReducer other) {
        return true;
        
    }
    ::au::edu::anu::mm::Octant__SumReducer au__edu__anu__mm__Octant__SumReducer____this__au__edu__anu__mm__Octant__SumReducer(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::au::edu::anu::mm::Octant__SumReducer this__70061 = (*this);
        
    }
    static ::au::edu::anu::mm::Octant__SumReducer _make() {
        ::au::edu::anu::mm::Octant__SumReducer this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_au_edu_anu_mm_Octant_SumReducer() {
     
    }
    
    static void _serialize(::au::edu::anu::mm::Octant__SumReducer this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::mm::Octant__SumReducer _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::mm::Octant__SumReducer this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__SumReducer;
} } } } 

#ifndef AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H_NODEPS
#define AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H_NODEPS
#ifndef AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H_GENERICS
#define AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H_GENERICS
#endif // AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H_GENERICS
#endif // __AU_EDU_ANU_MM_OCTANT__SUMREDUCER_H_NODEPS
