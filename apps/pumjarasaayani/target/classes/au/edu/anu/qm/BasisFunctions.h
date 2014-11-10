#ifndef __AU_EDU_ANU_QM_BASISFUNCTIONS_H
#define __AU_EDU_ANU_QM_BASISFUNCTIONS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#include <au/edu/anu/qm/ContractedGaussian.h>
#undef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#define AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#include <au/edu/anu/qm/ShellList.h>
#undef AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#define AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#include <au/edu/anu/qm/ShellList.h>
#undef AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisSet;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class PowerList;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class AtomicBasis;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Orbital;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Power;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class PrimitiveGaussian;
} } } } 
namespace x10 { namespace lang { 
class Math;
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

class BasisFunctions_Strings {
  public:
    static ::x10::lang::String sl__149111;
    static ::x10::lang::String sl__149110;
    static ::x10::lang::String sl__149115;
    static ::x10::lang::String sl__149109;
    static ::x10::lang::String sl__149112;
    static ::x10::lang::String sl__149108;
    static ::x10::lang::String sl__149113;
    static ::x10::lang::String sl__149114;
};

class BasisFunctions   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::au::edu::anu::qm::BasisFunctions* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::au::edu::anu::qm::BasisFunctions > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::au::edu::anu::qm::BasisFunctions _alloc(){::au::edu::anu::qm::BasisFunctions t; return t; }
    
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* FMGL(molecule);
    
    ::x10::lang::String* FMGL(basisName);
    
    ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* FMGL(basisFunctions);
    
    ::au::edu::anu::qm::ShellList FMGL(shellList);
    
    ::x10::matrix::DenseMatrix* FMGL(SADMatrix);
    
    void _constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                      ::x10::lang::String* basNam, ::x10::lang::String* basisDir);
    
    static ::au::edu::anu::qm::BasisFunctions _make(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                    ::x10::lang::String* basNam,
                                                    ::x10::lang::String* basisDir);
    
    void initDensity(::au::edu::anu::qm::BasisSet* basisSet);
    x10_int initBasisFunctions(::au::edu::anu::qm::BasisSet* basisSet);
    ::x10::lang::Rail< x10_double >* getNormalizationFactors(
      );
    ::x10::lang::String* getBasisName() {
        return (*this)->FMGL(basisName);
        
    }
    ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*
      getBasisFunctions() {
        return (*this)->FMGL(basisFunctions);
        
    }
    ::x10::matrix::DenseMatrix* getSAD() {
        return (*this)->FMGL(SADMatrix);
        
    }
    ::au::edu::anu::qm::ShellList getShellList() {
        return (*this)->FMGL(shellList);
        
    }
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::au::edu::anu::qm::BasisFunctions other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(molecule),
                                            other->FMGL(molecule))) &&
        (::x10aux::struct_equals((*this)->FMGL(basisName),
                                 other->FMGL(basisName)))) &&
        (::x10aux::struct_equals((*this)->FMGL(basisFunctions),
                                 other->FMGL(basisFunctions)))) &&
        (::x10aux::struct_equals((*this)->FMGL(shellList),
                                 other->FMGL(shellList)))) &&
        (::x10aux::struct_equals((*this)->FMGL(SADMatrix),
                                 other->FMGL(SADMatrix))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::au::edu::anu::qm::BasisFunctions other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(molecule),
                                            other->FMGL(molecule))) &&
        (::x10aux::struct_equals((*this)->FMGL(basisName),
                                 other->FMGL(basisName)))) &&
        (::x10aux::struct_equals((*this)->FMGL(basisFunctions),
                                 other->FMGL(basisFunctions)))) &&
        (::x10aux::struct_equals((*this)->FMGL(shellList),
                                 other->FMGL(shellList)))) &&
        (::x10aux::struct_equals((*this)->FMGL(SADMatrix),
                                 other->FMGL(SADMatrix))));
        
    }
    ::au::edu::anu::qm::BasisFunctions au__edu__anu__qm__BasisFunctions____this__au__edu__anu__qm__BasisFunctions(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_au_edu_anu_qm_BasisFunctions(
      ) {
     
    }
    
    static void _serialize(::au::edu::anu::qm::BasisFunctions this_, ::x10aux::serialization_buffer& buf);
    
    static ::au::edu::anu::qm::BasisFunctions _deserialize(::x10aux::deserialization_buffer& buf) {
        ::au::edu::anu::qm::BasisFunctions this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_BASISFUNCTIONS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions;
} } } } 

#ifndef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#ifndef AU_EDU_ANU_QM_BASISFUNCTIONS_H_GENERICS
#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_GENERICS
#endif // AU_EDU_ANU_QM_BASISFUNCTIONS_H_GENERICS
#endif // __AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
