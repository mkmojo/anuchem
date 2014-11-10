#ifndef __AU_EDU_ANU_QM_JOBINPUT_H
#define __AU_EDU_ANU_QM_JOBINPUT_H

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
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace util { 
class StringSplitter;
} } } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo__AtomProps;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace io { 
class EOFException;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class JobInput_Strings {
  public:
    static ::x10::lang::String sl__148972;
    static ::x10::lang::String sl__148957;
    static ::x10::lang::String sl__148963;
    static ::x10::lang::String sl__148971;
    static ::x10::lang::String sl__148960;
    static ::x10::lang::String sl__148978;
    static ::x10::lang::String sl__148975;
    static ::x10::lang::String sl__148974;
    static ::x10::lang::String sl__148976;
    static ::x10::lang::String sl__148965;
    static ::x10::lang::String sl__148970;
    static ::x10::lang::String sl__148973;
    static ::x10::lang::String sl__148984;
    static ::x10::lang::String sl__148964;
    static ::x10::lang::String sl__148967;
    static ::x10::lang::String sl__148966;
    static ::x10::lang::String sl__148982;
    static ::x10::lang::String sl__148968;
    static ::x10::lang::String sl__148958;
    static ::x10::lang::String sl__148969;
    static ::x10::lang::String sl__148961;
    static ::x10::lang::String sl__148977;
    static ::x10::lang::String sl__148962;
    static ::x10::lang::String sl__148979;
    static ::x10::lang::String sl__148959;
    static ::x10::lang::String sl__148980;
    static ::x10::lang::String sl__148983;
    static ::x10::lang::String sl__148981;
};

class JobInput : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* FMGL(molecule);
    
    ::x10::lang::String* FMGL(basisName);
    
    virtual void make(::x10::lang::String* inpFile);
    void readInp(::x10::lang::String* inpFile);
    static x10_int getIntParam(::x10::lang::String* line);
    static x10_double getDoubleParam(::x10::lang::String* line);
    static ::x10::lang::String* getStringParam(::x10::lang::String* line);
    virtual ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*
      getMolecule();
    virtual ::x10::lang::String* getBasisName();
    virtual ::au::edu::anu::qm::JobInput* au__edu__anu__qm__JobInput____this__au__edu__anu__qm__JobInput(
      );
    void _constructor();
    
    static ::au::edu::anu::qm::JobInput* _make();
    
    virtual void __fieldInitializers_au_edu_anu_qm_JobInput();
    
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
#endif // AU_EDU_ANU_QM_JOBINPUT_H

namespace au { namespace edu { namespace anu { namespace qm { 
class JobInput;
} } } } 

#ifndef AU_EDU_ANU_QM_JOBINPUT_H_NODEPS
#define AU_EDU_ANU_QM_JOBINPUT_H_NODEPS
#ifndef AU_EDU_ANU_QM_JOBINPUT_H_GENERICS
#define AU_EDU_ANU_QM_JOBINPUT_H_GENERICS
#endif // AU_EDU_ANU_QM_JOBINPUT_H_GENERICS
#endif // __AU_EDU_ANU_QM_JOBINPUT_H_NODEPS
