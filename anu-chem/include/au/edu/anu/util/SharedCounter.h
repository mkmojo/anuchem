#ifndef __AU_EDU_ANU_UTIL_SHAREDCOUNTER_H
#define __AU_EDU_ANU_UTIL_SHAREDCOUNTER_H

#include <x10rt.h>


#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace util { 

class SharedCounter : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::GlobalRef< ::x10::util::concurrent::AtomicLong* > FMGL(counter);
    
    void _constructor();
    
    static ::au::edu::anu::util::SharedCounter* _make();
    
    virtual x10_long getAndIncrement();
    virtual x10_long get();
    virtual void set(x10_long v);
    virtual ::au::edu::anu::util::SharedCounter* au__edu__anu__util__SharedCounter____this__au__edu__anu__util__SharedCounter(
      );
    virtual void __fieldInitializers_au_edu_anu_util_SharedCounter(
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
#endif // AU_EDU_ANU_UTIL_SHAREDCOUNTER_H

namespace au { namespace edu { namespace anu { namespace util { 
class SharedCounter;
} } } } 

#ifndef AU_EDU_ANU_UTIL_SHAREDCOUNTER_H_NODEPS
#define AU_EDU_ANU_UTIL_SHAREDCOUNTER_H_NODEPS
#ifndef AU_EDU_ANU_UTIL_SHAREDCOUNTER_H_GENERICS
#define AU_EDU_ANU_UTIL_SHAREDCOUNTER_H_GENERICS
#endif // AU_EDU_ANU_UTIL_SHAREDCOUNTER_H_GENERICS
#endif // __AU_EDU_ANU_UTIL_SHAREDCOUNTER_H_NODEPS
