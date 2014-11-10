#ifndef __AU_EDU_ANU_QM_SHELLLIST_H
#define __AU_EDU_ANU_QM_SHELLLIST_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define AU_EDU_ANU_QM_POWER_H_NODEPS
#include <au/edu/anu/qm/Power.h>
#undef AU_EDU_ANU_QM_POWER_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Shell;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class PowerList;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class Inline;
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

class ShellList_Strings {
  public:
    static ::x10::lang::String sl__149263;
    static ::x10::lang::String sl__149262;
    static ::x10::lang::String sl__149259;
    static ::x10::lang::String sl__149261;
    static ::x10::lang::String sl__149260;
};

class ShellList   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::ShellList* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::ShellList > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::ShellList _alloc(){::au::edu::anu::qm::ShellList t; return t; }
    
    ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::Shell*>* FMGL(shellList);
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >*
      FMGL(powerList);
    
    x10_int FMGL(maxam);
    
    x10_int FMGL(maxDcon);
    
    void _constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule);
    
    static ::au::edu::anu::qm::ShellList _make(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule);
    
    x10_int getNumberOfShellPrimitives();
    ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* getShellPrimitives(
      );
    x10_int getNumberOfShellPairs();
    x10_int getMaximumAngularMomentum() {
        return (*this)->FMGL(maxam);
        
    }
    x10_int getMaximumDegreeOfContraction() {
        return (*this)->FMGL(maxDcon);
        
    }
    ::au::edu::anu::qm::Shell* getShell(x10_int am);
    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* getPowers(x10_int am);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::ShellList other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(shellList),
                                           other->FMGL(shellList))) &&
        (::x10aux::struct_equals((*this)->FMGL(powerList), other->FMGL(powerList)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxam), other->FMGL(maxam)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxDcon), other->FMGL(maxDcon))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::ShellList other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(shellList),
                                           other->FMGL(shellList))) &&
        (::x10aux::struct_equals((*this)->FMGL(powerList),
                                 other->FMGL(powerList)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxam), other->FMGL(maxam)))) &&
        (::x10aux::struct_equals((*this)->FMGL(maxDcon), other->FMGL(maxDcon))));
        
    }
    ::au::edu::anu::qm::ShellList au__edu__anu__qm__ShellList____this__au__edu__anu__qm__ShellList(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_ShellList() {
     
    }
    
    static void _serialize(::au::edu::anu::qm::ShellList this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::ShellList _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::ShellList this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_SHELLLIST_H

namespace au { namespace edu { namespace anu { namespace qm { 
class ShellList;
} } } } 

#ifndef AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#define AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#ifndef AU_EDU_ANU_QM_SHELLLIST_H_GENERICS
#define AU_EDU_ANU_QM_SHELLLIST_H_GENERICS
#endif // AU_EDU_ANU_QM_SHELLLIST_H_GENERICS
#endif // __AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
