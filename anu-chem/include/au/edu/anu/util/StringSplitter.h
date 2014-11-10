#ifndef __AU_EDU_ANU_UTIL_STRINGSPLITTER_H
#define __AU_EDU_ANU_UTIL_STRINGSPLITTER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace util { 

class StringSplitter : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::lang::Rail< ::x10::lang::String* >* splitOnWhitespace(::x10::lang::String* s);
    virtual ::au::edu::anu::util::StringSplitter* au__edu__anu__util__StringSplitter____this__au__edu__anu__util__StringSplitter(
      );
    void _constructor();
    
    static ::au::edu::anu::util::StringSplitter* _make();
    
    virtual void __fieldInitializers_au_edu_anu_util_StringSplitter(
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
#endif // AU_EDU_ANU_UTIL_STRINGSPLITTER_H

namespace au { namespace edu { namespace anu { namespace util { 
class StringSplitter;
} } } } 

#ifndef AU_EDU_ANU_UTIL_STRINGSPLITTER_H_NODEPS
#define AU_EDU_ANU_UTIL_STRINGSPLITTER_H_NODEPS
#ifndef AU_EDU_ANU_UTIL_STRINGSPLITTER_H_GENERICS
#define AU_EDU_ANU_UTIL_STRINGSPLITTER_H_GENERICS
#endif // AU_EDU_ANU_UTIL_STRINGSPLITTER_H_GENERICS
#endif // __AU_EDU_ANU_UTIL_STRINGSPLITTER_H_NODEPS
