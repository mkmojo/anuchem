#ifndef __AU_EDU_ANU_QM_BASISSET_H
#define __AU_EDU_ANU_QM_BASISSET_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class AtomicBasis;
} } } } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace util { 
class StringSplitter;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Orbital;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo__AtomProps;
} } } } 
namespace x10 { namespace io { 
class EOFException;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class BasisSet_Strings {
  public:
    static ::x10::lang::String sl__149586;
    static ::x10::lang::String sl__149588;
    static ::x10::lang::String sl__149593;
    static ::x10::lang::String sl__149592;
    static ::x10::lang::String sl__149589;
    static ::x10::lang::String sl__149594;
    static ::x10::lang::String sl__149587;
    static ::x10::lang::String sl__149591;
    static ::x10::lang::String sl__149590;
};

class BasisSet : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(name);
    
    ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::AtomicBasis*>* FMGL(basisInfo);
    
    ::x10::util::HashMap<x10_int, ::x10::matrix::DenseMatrix*>* FMGL(basisAtomicDensity);
    
    x10_double FMGL(roZ);
    
    void _constructor(::x10::lang::String* name, ::x10::lang::String* basisDir);
    
    static ::au::edu::anu::qm::BasisSet* _make(::x10::lang::String* name,
                                               ::x10::lang::String* basisDir);
    
    void init(::x10::lang::String* name, ::x10::lang::String* basisDir);
    x10_boolean isComment(::x10::lang::String* line);
    x10_boolean isSectionDivider(::x10::lang::String* line);
    ::au::edu::anu::qm::AtomicBasis* readCenterDefinitionBlock(::x10::io::FileReader* fil);
    void initDensity(::x10::lang::String* name, ::x10::lang::String* basisDir);
    virtual ::x10::lang::String* getName();
    virtual ::au::edu::anu::qm::AtomicBasis* getBasis(::au::edu::anu::chem::Atom* atom);
    virtual ::x10::matrix::DenseMatrix* getDensity(::au::edu::anu::chem::Atom* atom);
    virtual ::au::edu::anu::qm::BasisSet* au__edu__anu__qm__BasisSet____this__au__edu__anu__qm__BasisSet(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_BasisSet();
    
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
#endif // AU_EDU_ANU_QM_BASISSET_H

namespace au { namespace edu { namespace anu { namespace qm { 
class BasisSet;
} } } } 

#ifndef AU_EDU_ANU_QM_BASISSET_H_NODEPS
#define AU_EDU_ANU_QM_BASISSET_H_NODEPS
#ifndef AU_EDU_ANU_QM_BASISSET_H_GENERICS
#define AU_EDU_ANU_QM_BASISSET_H_GENERICS
#endif // AU_EDU_ANU_QM_BASISSET_H_GENERICS
#endif // __AU_EDU_ANU_QM_BASISSET_H_NODEPS
