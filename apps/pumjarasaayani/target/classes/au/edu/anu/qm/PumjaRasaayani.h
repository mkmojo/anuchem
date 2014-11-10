#ifndef __AU_EDU_ANU_QM_PUMJARASAAYANI_H
#define __AU_EDU_ANU_QM_PUMJARASAAYANI_H

#include <x10rt.h>


namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobInput;
} } } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
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
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class OneElectronIntegrals;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class HartreeFockSCFMethod;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class Fragment;
} } } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class SCFMethod;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { namespace mta { 
class Fragmentor;
} } } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class PumjaRasaayani_Strings {
  public:
    static ::x10::lang::String sl__148847;
    static ::x10::lang::String sl__148860;
    static ::x10::lang::String sl__148876;
    static ::x10::lang::String sl__148867;
    static ::x10::lang::String sl__148845;
    static ::x10::lang::String sl__148875;
    static ::x10::lang::String sl__148852;
    static ::x10::lang::String sl__148848;
    static ::x10::lang::String sl__148883;
    static ::x10::lang::String sl__148863;
    static ::x10::lang::String sl__148856;
    static ::x10::lang::String sl__148853;
    static ::x10::lang::String sl__148868;
    static ::x10::lang::String sl__148850;
    static ::x10::lang::String sl__148849;
    static ::x10::lang::String sl__148879;
    static ::x10::lang::String sl__148862;
    static ::x10::lang::String sl__148846;
    static ::x10::lang::String sl__148855;
    static ::x10::lang::String sl__148864;
    static ::x10::lang::String sl__148854;
    static ::x10::lang::String sl__148882;
    static ::x10::lang::String sl__148872;
    static ::x10::lang::String sl__148884;
    static ::x10::lang::String sl__148873;
    static ::x10::lang::String sl__148861;
    static ::x10::lang::String sl__148878;
    static ::x10::lang::String sl__148857;
    static ::x10::lang::String sl__148866;
    static ::x10::lang::String sl__148865;
    static ::x10::lang::String sl__148859;
    static ::x10::lang::String sl__148870;
    static ::x10::lang::String sl__148874;
    static ::x10::lang::String sl__148871;
    static ::x10::lang::String sl__148880;
    static ::x10::lang::String sl__148877;
    static ::x10::lang::String sl__148869;
    static ::x10::lang::String sl__148851;
    static ::x10::lang::String sl__148881;
    static ::x10::lang::String sl__148858;
};

class PumjaRasaayani : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* FMGL(mol);
    
    ::x10::lang::String* FMGL(inputFileName);
    
    ::x10::lang::String* FMGL(basisName);
    
    void _constructor(::x10::lang::String* inpFile);
    
    static ::au::edu::anu::qm::PumjaRasaayani* _make(::x10::lang::String* inpFile);
    
    virtual void runHF();
    void runHF(::au::edu::anu::qm::mta::Fragment* fragment);
    virtual void runMTA();
    void printInput();
    static ::x10::lang::String* getBasisDirName(::x10::lang::String* inpFile);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::au::edu::anu::qm::PumjaRasaayani* au__edu__anu__qm__PumjaRasaayani____this__au__edu__anu__qm__PumjaRasaayani(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_PumjaRasaayani(
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
#endif // AU_EDU_ANU_QM_PUMJARASAAYANI_H

namespace au { namespace edu { namespace anu { namespace qm { 
class PumjaRasaayani;
} } } } 

#ifndef AU_EDU_ANU_QM_PUMJARASAAYANI_H_NODEPS
#define AU_EDU_ANU_QM_PUMJARASAAYANI_H_NODEPS
#ifndef AU_EDU_ANU_QM_PUMJARASAAYANI_H_GENERICS
#define AU_EDU_ANU_QM_PUMJARASAAYANI_H_GENERICS
#endif // AU_EDU_ANU_QM_PUMJARASAAYANI_H_GENERICS
#endif // __AU_EDU_ANU_QM_PUMJARASAAYANI_H_NODEPS
