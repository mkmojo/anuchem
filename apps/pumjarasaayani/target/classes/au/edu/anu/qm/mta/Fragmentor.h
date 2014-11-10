#ifndef __AU_EDU_ANU_QM_MTA_FRAGMENTOR_H
#define __AU_EDU_ANU_QM_MTA_FRAGMENTOR_H

#include <x10rt.h>


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
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class Fragment;
} } } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class ConnectivityBuilder;
} } } } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Ring;
} } } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class CardinalityExpression;
} } } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 

class Fragmentor_Strings {
  public:
    static ::x10::lang::String sl__148908;
    static ::x10::lang::String sl__148910;
    static ::x10::lang::String sl__148898;
    static ::x10::lang::String sl__148897;
    static ::x10::lang::String sl__148902;
    static ::x10::lang::String sl__148911;
    static ::x10::lang::String sl__148901;
    static ::x10::lang::String sl__148912;
    static ::x10::lang::String sl__148906;
    static ::x10::lang::String sl__148899;
    static ::x10::lang::String sl__148903;
    static ::x10::lang::String sl__148909;
    static ::x10::lang::String sl__148905;
    static ::x10::lang::String sl__148907;
    static ::x10::lang::String sl__148904;
    static ::x10::lang::String sl__148900;
};

class Fragmentor : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_double FMGL(rGoodness);
    
    x10_int FMGL(maxFragSize);
    
    void _constructor(x10_double rGoodness, x10_int maxFragSize);
    
    static ::au::edu::anu::qm::mta::Fragmentor* _make(x10_double rGoodness,
                                                      x10_int maxFragSize);
    
    virtual ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragment(
      ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol);
    virtual void generateAtomcentreedFragments(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                               ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual void mergeAlongConnectivity(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                        ::x10::lang::Rail< x10_int >* sortedAtomIndices,
                                        ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual void traverseAndMergeFragments(x10_int v, ::x10::lang::Rail< x10_int >* sortedAtomIndices,
                                           ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                           ::x10::lang::Rail< x10_boolean >* visited,
                                           ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual void mergeFragmentscentredOn(x10_int a, x10_int b,
                                         ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual ::au::edu::anu::qm::mta::Fragment* findFragmentCentredOn(
      x10_long idx, ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual void mergeCommonFragments(::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual x10_boolean includeMissedAtoms(::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList);
    virtual void removeDanglingAtoms(::au::edu::anu::qm::mta::Fragment* fragment);
    virtual void addDummyAtoms(::au::edu::anu::qm::mta::Fragment* fragment);
    virtual ::au::edu::anu::qm::mta::Fragmentor* au__edu__anu__qm__mta__Fragmentor____this__au__edu__anu__qm__mta__Fragmentor(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_mta_Fragmentor(
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
#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR_H

namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class Fragmentor;
} } } } } 

#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR_H_NODEPS
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR_H_NODEPS
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR_H_GENERICS
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR_H_GENERICS
#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR_H_GENERICS
#endif // __AU_EDU_ANU_QM_MTA_FRAGMENTOR_H_NODEPS
