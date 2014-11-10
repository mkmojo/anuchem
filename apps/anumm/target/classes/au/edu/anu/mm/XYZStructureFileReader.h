#ifndef __AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H
#define __AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class SpeciesSpec;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
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
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class XYZStructureFileReader_Strings {
  public:
    static ::x10::lang::String sl__20198;
    static ::x10::lang::String sl__20199;
    static ::x10::lang::String sl__20200;
};

class XYZStructureFileReader : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(fileName);
    
    void _constructor(::x10::lang::String* fileName);
    
    static ::au::edu::anu::mm::XYZStructureFileReader* _make(::x10::lang::String* fileName);
    
    virtual ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>*
      readMolecule(::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* speciesSpecs);
    virtual void setFileName(::x10::lang::String* fileName);
    virtual ::au::edu::anu::mm::XYZStructureFileReader* au__edu__anu__mm__XYZStructureFileReader____this__au__edu__anu__mm__XYZStructureFileReader(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_XYZStructureFileReader(
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
#endif // AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H

namespace au { namespace edu { namespace anu { namespace mm { 
class XYZStructureFileReader;
} } } } 

#ifndef AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H_NODEPS
#define AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H_NODEPS
#ifndef AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H_GENERICS
#define AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H_GENERICS
#endif // AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H_GENERICS
#endif // __AU_EDU_ANU_MM_XYZSTRUCTUREFILEREADER_H_NODEPS
