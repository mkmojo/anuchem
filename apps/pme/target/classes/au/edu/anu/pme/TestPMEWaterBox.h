#ifndef __AU_EDU_ANU_PME_TESTPMEWATERBOX_H
#define __AU_EDU_ANU_PME_TESTPMEWATERBOX_H

#include <x10rt.h>


#define AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
#include <au/edu/anu/chem/mm/TestElectrostatic.h>
#undef AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
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
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class GromacsStructureFileReader;
} } } } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace au { namespace edu { namespace anu { namespace pme { 
class PME_SPMD;
} } } } 
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace pme { 

class TestPMEWaterBox_Strings {
  public:
    static ::x10::lang::String sl__65845;
    static ::x10::lang::String sl__65839;
    static ::x10::lang::String sl__65843;
    static ::x10::lang::String sl__65830;
    static ::x10::lang::String sl__65834;
    static ::x10::lang::String sl__65848;
    static ::x10::lang::String sl__65841;
    static ::x10::lang::String sl__65828;
    static ::x10::lang::String sl__65836;
    static ::x10::lang::String sl__65833;
    static ::x10::lang::String sl__65847;
    static ::x10::lang::String sl__65831;
    static ::x10::lang::String sl__65840;
    static ::x10::lang::String sl__65832;
    static ::x10::lang::String sl__65837;
    static ::x10::lang::String sl__65827;
    static ::x10::lang::String sl__65842;
    static ::x10::lang::String sl__65829;
    static ::x10::lang::String sl__65835;
    static ::x10::lang::String sl__65846;
    static ::x10::lang::String sl__65844;
    static ::x10::lang::String sl__65838;
};

class TestPMEWaterBox : public ::au::edu::anu::chem::mm::TestElectrostatic
  {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(ITERS) */
    static const x10_long FMGL(ITERS) = 10;
    static x10_long FMGL(ITERS__get)();
    
    x10_double FMGL(size);
    
    virtual x10_double sizeOfCentralCluster();
    virtual x10_double boxSize();
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void test(::x10::lang::String* structureFileName, x10_double ewaldCoefficient,
                      x10_double cutoff, x10_long gridSize, x10_int splineOrder);
    virtual ::au::edu::anu::pme::TestPMEWaterBox* au__edu__anu__pme__TestPMEWaterBox____this__au__edu__anu__pme__TestPMEWaterBox(
      );
    void _constructor();
    
    static ::au::edu::anu::pme::TestPMEWaterBox* _make();
    
    virtual void __fieldInitializers_au_edu_anu_pme_TestPMEWaterBox(
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
#endif // AU_EDU_ANU_PME_TESTPMEWATERBOX_H

namespace au { namespace edu { namespace anu { namespace pme { 
class TestPMEWaterBox;
} } } } 

#ifndef AU_EDU_ANU_PME_TESTPMEWATERBOX_H_NODEPS
#define AU_EDU_ANU_PME_TESTPMEWATERBOX_H_NODEPS
#ifndef AU_EDU_ANU_PME_TESTPMEWATERBOX_H_GENERICS
#define AU_EDU_ANU_PME_TESTPMEWATERBOX_H_GENERICS
inline x10_long au::edu::anu::pme::TestPMEWaterBox::FMGL(ITERS__get)() {
    return au::edu::anu::pme::TestPMEWaterBox::FMGL(ITERS);
}

#endif // AU_EDU_ANU_PME_TESTPMEWATERBOX_H_GENERICS
#endif // __AU_EDU_ANU_PME_TESTPMEWATERBOX_H_NODEPS
