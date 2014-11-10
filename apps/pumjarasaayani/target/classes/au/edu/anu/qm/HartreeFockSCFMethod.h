#ifndef __AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H
#define __AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H

#include <x10rt.h>


#define AU_EDU_ANU_QM_SCFMETHOD_H_NODEPS
#include <au/edu/anu/qm/SCFMethod.h>
#undef AU_EDU_ANU_QM_SCFMETHOD_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class OneElectronIntegrals;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace au { namespace edu { namespace anu { namespace util { 
class StatisticalTimer;
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
namespace au { namespace edu { namespace anu { namespace qm { 
class HCore;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Overlap;
} } } } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod;
} } } } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class MolecularOrbitals;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Fock;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class DIISFockExtrapolator;
} } } } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class HartreeFockSCFMethod_Strings {
  public:
    static ::x10::lang::String sl__149213;
    static ::x10::lang::String sl__149214;
    static ::x10::lang::String sl__149212;
    static ::x10::lang::String sl__149215;
    static ::x10::lang::String sl__149224;
    static ::x10::lang::String sl__149204;
    static ::x10::lang::String sl__149208;
    static ::x10::lang::String sl__149218;
    static ::x10::lang::String sl__149211;
    static ::x10::lang::String sl__149207;
    static ::x10::lang::String sl__149219;
    static ::x10::lang::String sl__149225;
    static ::x10::lang::String sl__149221;
    static ::x10::lang::String sl__149209;
    static ::x10::lang::String sl__149223;
    static ::x10::lang::String sl__149205;
    static ::x10::lang::String sl__149200;
    static ::x10::lang::String sl__149217;
    static ::x10::lang::String sl__149226;
    static ::x10::lang::String sl__149201;
    static ::x10::lang::String sl__149203;
    static ::x10::lang::String sl__149216;
    static ::x10::lang::String sl__149220;
    static ::x10::lang::String sl__149206;
    static ::x10::lang::String sl__149222;
    static ::x10::lang::String sl__149210;
    static ::x10::lang::String sl__149202;
};

class HartreeFockSCFMethod : public ::au::edu::anu::qm::SCFMethod   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_double FMGL(roZ);
    
    void _constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                      ::au::edu::anu::qm::OneElectronIntegrals* oneE,
                      ::au::edu::anu::qm::BasisFunctions bfs);
    
    static ::au::edu::anu::qm::HartreeFockSCFMethod* _make(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                           ::au::edu::anu::qm::OneElectronIntegrals* oneE,
                                                           ::au::edu::anu::qm::BasisFunctions bfs);
    
    virtual void scf();
    virtual ::au::edu::anu::qm::HartreeFockSCFMethod* au__edu__anu__qm__HartreeFockSCFMethod____this__au__edu__anu__qm__HartreeFockSCFMethod(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_HartreeFockSCFMethod(
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


} } } } 
#endif // AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H

namespace au { namespace edu { namespace anu { namespace qm { 
class HartreeFockSCFMethod;
} } } } 

#ifndef AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H_NODEPS
#define AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H_NODEPS
#ifndef AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H_GENERICS
#define AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H_GENERICS
#endif // AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_QM_HARTREEFOCKSCFMETHOD_H_NODEPS
