#ifndef __AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H
#define __AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H

#include <x10rt.h>


#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#include <au/edu/anu/qm/BasisFunctions.h>
#undef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#include <au/edu/anu/qm/BasisFunctions.h>
#undef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace au { namespace edu { namespace anu { namespace qm { 
class HCore;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Overlap;
} } } } 
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
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace io { 
class FileWriter;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace io { 
class OutputStreamWriter;
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
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class OneElectronIntegrals_Strings {
  public:
    static ::x10::lang::String sl__149194;
    static ::x10::lang::String sl__149193;
    static ::x10::lang::String sl__149195;
    static ::x10::lang::String sl__149190;
    static ::x10::lang::String sl__149192;
    static ::x10::lang::String sl__149191;
};

class OneElectronIntegrals : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numBasisFunctions);
    
    ::au::edu::anu::qm::BasisFunctions FMGL(basisFunctions);
    
    ::au::edu::anu::qm::HCore* FMGL(hCore);
    
    ::au::edu::anu::qm::Overlap* FMGL(overlap);
    
    x10_double FMGL(roZ);
    
    void _constructor(::au::edu::anu::qm::BasisFunctions bfs, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                      ::x10::lang::String* inpFile);
    
    static ::au::edu::anu::qm::OneElectronIntegrals* _make(::au::edu::anu::qm::BasisFunctions bfs,
                                                           ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                           ::x10::lang::String* inpFile);
    
    virtual ::au::edu::anu::qm::HCore* getHCore();
    virtual ::au::edu::anu::qm::Overlap* getOverlap();
    virtual ::au::edu::anu::qm::BasisFunctions getBasisFunctions(
      );
    void compute1E(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule);
    virtual ::au::edu::anu::qm::OneElectronIntegrals* au__edu__anu__qm__OneElectronIntegrals____this__au__edu__anu__qm__OneElectronIntegrals(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_OneElectronIntegrals(
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
#endif // AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class OneElectronIntegrals;
} } } } 

#ifndef AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H_NODEPS
#define AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H_NODEPS
#ifndef AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H_GENERICS
#define AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H_GENERICS
#endif // AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H_GENERICS
#endif // __AU_EDU_ANU_QM_ONEELECTRONINTEGRALS_H_NODEPS
