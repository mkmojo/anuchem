#ifndef __AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H
#define __AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H

#include <x10rt.h>


#define X10X_VECTOR_VECTOR3D_H_NODEPS
#include <x10x/vector/Vector3d.h>
#undef X10X_VECTOR_VECTOR3D_H_NODEPS
#define X10X_VECTOR_VECTOR3D_H_NODEPS
#include <x10x/vector/Vector3d.h>
#undef X10X_VECTOR_VECTOR3D_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
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
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class GromacsStructureFileReader_Strings {
  public:
    static ::x10::lang::String sl__32645;
    static ::x10::lang::String sl__32646;
    static ::x10::lang::String sl__32648;
    static ::x10::lang::String sl__32649;
    static ::x10::lang::String sl__32647;
};

class GromacsStructureFileReader : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(fileName);
    
    ::x10x::vector::Vector3d FMGL(boxEdges);
    
    void _constructor(::x10::lang::String* fileName);
    
    static ::au::edu::anu::chem::mm::GromacsStructureFileReader* _make(::x10::lang::String* fileName);
    
    virtual ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>*
      readMolecule();
    virtual void setFileName(::x10::lang::String* fileName);
    virtual ::au::edu::anu::chem::mm::GromacsStructureFileReader* au__edu__anu__chem__mm__GromacsStructureFileReader____this__au__edu__anu__chem__mm__GromacsStructureFileReader(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_mm_GromacsStructureFileReader(
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
#endif // AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class GromacsStructureFileReader;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H_GENERICS
#endif // AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_GROMACSSTRUCTUREFILEREADER_H_NODEPS
