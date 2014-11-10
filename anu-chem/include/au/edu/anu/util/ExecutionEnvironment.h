#ifndef __AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H
#define __AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H

#include <x10rt.h>

#include "mkl_math.h"
#include "omp.h"

namespace x10 { namespace compiler { 
class Native;
} } 
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
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
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
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace au { namespace edu { namespace anu { namespace util { 

class ExecutionEnvironment_Strings {
  public:
    static ::x10::lang::String sl__32681;
    static ::x10::lang::String sl__32680;
    static ::x10::lang::String sl__32689;
    static ::x10::lang::String sl__32684;
    static ::x10::lang::String sl__32683;
    static ::x10::lang::String sl__32682;
    static ::x10::lang::String sl__32690;
    static ::x10::lang::String sl__32685;
    static ::x10::lang::String sl__32688;
    static ::x10::lang::String sl__32686;
    static ::x10::lang::String sl__32687;
    static ::x10::lang::String sl__32679;
};

class ExecutionEnvironment : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void setBlasThreads(x10_int numThreads);
    static void printThreadingVariables();
    virtual ::au::edu::anu::util::ExecutionEnvironment* au__edu__anu__util__ExecutionEnvironment____this__au__edu__anu__util__ExecutionEnvironment(
      );
    void _constructor();
    
    static ::au::edu::anu::util::ExecutionEnvironment* _make();
    
    virtual void __fieldInitializers_au_edu_anu_util_ExecutionEnvironment(
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
#endif // AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H

namespace au { namespace edu { namespace anu { namespace util { 
class ExecutionEnvironment;
} } } } 

#ifndef AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H_NODEPS
#define AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H_NODEPS
#ifndef AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H_GENERICS
#define AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H_GENERICS
#endif // AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H_GENERICS
#endif // __AU_EDU_ANU_UTIL_EXECUTIONENVIRONMENT_H_NODEPS
