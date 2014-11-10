#ifndef __AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H
#define __AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H

#include <x10rt.h>


#define AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
#include <au/edu/anu/chem/mm/TestElectrostatic.h>
#undef AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC_H_NODEPS
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
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom;
} } } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FastMultipoleMethod;
} } } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
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
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmLocalData;
} } } } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class ElectrostaticDirectMethod;
} } } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class TestFastMultipoleMethod_Strings {
  public:
    static ::x10::lang::String sl__72806;
    static ::x10::lang::String sl__72802;
    static ::x10::lang::String sl__72779;
    static ::x10::lang::String sl__72797;
    static ::x10::lang::String sl__72801;
    static ::x10::lang::String sl__72778;
    static ::x10::lang::String sl__72783;
    static ::x10::lang::String sl__72798;
    static ::x10::lang::String sl__72799;
    static ::x10::lang::String sl__72780;
    static ::x10::lang::String sl__72794;
    static ::x10::lang::String sl__72791;
    static ::x10::lang::String sl__72784;
    static ::x10::lang::String sl__72800;
    static ::x10::lang::String sl__72782;
    static ::x10::lang::String sl__72805;
    static ::x10::lang::String sl__72792;
    static ::x10::lang::String sl__72795;
    static ::x10::lang::String sl__72803;
    static ::x10::lang::String sl__72786;
    static ::x10::lang::String sl__72789;
    static ::x10::lang::String sl__72785;
    static ::x10::lang::String sl__72793;
    static ::x10::lang::String sl__72804;
    static ::x10::lang::String sl__72781;
    static ::x10::lang::String sl__72796;
    static ::x10::lang::String sl__72790;
    static ::x10::lang::String sl__72777;
    static ::x10::lang::String sl__72788;
    static ::x10::lang::String sl__72787;
};

class TestFastMultipoleMethod : public ::au::edu::anu::chem::mm::TestElectrostatic
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual x10_double sizeOfCentralCluster();
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void test(x10_int numAtoms, x10_int dMax, x10_int numTerms,
                      x10_int wellSpaced, x10_boolean verbose, x10_boolean compare,
                      x10_boolean rms);
    virtual ::au::edu::anu::mm::TestFastMultipoleMethod* au__edu__anu__mm__TestFastMultipoleMethod____this__au__edu__anu__mm__TestFastMultipoleMethod(
      );
    void _constructor();
    
    static ::au::edu::anu::mm::TestFastMultipoleMethod* _make(
             );
    
    virtual void __fieldInitializers_au_edu_anu_mm_TestFastMultipoleMethod(
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
#endif // AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H

namespace au { namespace edu { namespace anu { namespace mm { 
class TestFastMultipoleMethod;
} } } } 

#ifndef AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H_NODEPS
#define AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H_NODEPS
#ifndef AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H_GENERICS
#define AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H_GENERICS
#endif // AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_MM_TESTFASTMULTIPOLEMETHOD_H_NODEPS
