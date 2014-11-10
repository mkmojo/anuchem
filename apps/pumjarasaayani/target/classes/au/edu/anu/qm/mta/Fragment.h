#ifndef __AU_EDU_ANU_QM_MTA_FRAGMENT_H
#define __AU_EDU_ANU_QM_MTA_FRAGMENT_H

#include <x10rt.h>


#define AU_EDU_ANU_CHEM_MOLECULE_H_NODEPS
#include <au/edu/anu/chem/Molecule.h>
#undef AU_EDU_ANU_CHEM_MOLECULE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 

class Fragment : public ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>
  {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::lang::X10Class::equals;
    
    x10_long FMGL(centredOn);
    
    x10_double FMGL(energy);
    
    x10_int FMGL(cardinalitySign);
    
    void _constructor();
    
    static ::au::edu::anu::qm::mta::Fragment* _make();
    
    virtual x10_long getNumberOfTrueAtoms();
    virtual ::au::edu::anu::qm::mta::Fragment* intersection(::au::edu::anu::qm::mta::Fragment* frag);
    virtual ::au::edu::anu::qm::mta::Fragment* _kwd__union(::au::edu::anu::qm::mta::Fragment* frag);
    virtual x10_boolean equals(::au::edu::anu::qm::mta::Fragment* frag);
    virtual x10_boolean contains(::au::edu::anu::qm::QMAtom* atm);
    virtual x10_int getBondOrder(::au::edu::anu::qm::QMAtom* atm);
    virtual ::au::edu::anu::qm::mta::Fragment* au__edu__anu__qm__mta__Fragment____this__au__edu__anu__qm__mta__Fragment(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_mta_Fragment(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } } 
#endif // AU_EDU_ANU_QM_MTA_FRAGMENT_H

namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class Fragment;
} } } } } 

#ifndef AU_EDU_ANU_QM_MTA_FRAGMENT_H_NODEPS
#define AU_EDU_ANU_QM_MTA_FRAGMENT_H_NODEPS
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENT_H_GENERICS
#define AU_EDU_ANU_QM_MTA_FRAGMENT_H_GENERICS
#endif // AU_EDU_ANU_QM_MTA_FRAGMENT_H_GENERICS
#endif // __AU_EDU_ANU_QM_MTA_FRAGMENT_H_NODEPS
