#ifndef __AU_EDU_ANU_MM_EXPANSION_H
#define __AU_EDU_ANU_MM_EXPANSION_H

#include <x10rt.h>


#define X10_LANG_COMPLEX_H_NODEPS
#include <x10/lang/Complex.h>
#undef X10_LANG_COMPLEX_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime;
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
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class Expansion_Strings {
  public:
    static ::x10::lang::String sl__68069;
    static ::x10::lang::String sl__68070;
    static ::x10::lang::String sl__68071;
};

class Expansion : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_complex >* FMGL(terms);
    
    x10_long FMGL(p);
    
    void _constructor(x10_long p);
    
    static ::au::edu::anu::mm::Expansion* _make(x10_long p);
    
    void _constructor(::au::edu::anu::mm::Expansion* e);
    
    static ::au::edu::anu::mm::Expansion* _make(::au::edu::anu::mm::Expansion* e);
    
    virtual x10_complex __apply(x10_long l, x10_long m);
    virtual x10_complex __set(x10_long l, x10_long m, x10_complex v);
    virtual void clear();
    virtual void add(::au::edu::anu::mm::Expansion* e);
    virtual void unsafeAdd(::au::edu::anu::mm::Expansion* e);
    virtual ::x10::lang::String* toString();
    static ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* genComplexK(
      x10_double phi, x10_long p);
    virtual void rotate(::x10::lang::Rail< x10_complex >* temp, ::x10::lang::Rail< x10_complex >* complexK,
                        ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* wigner,
                        ::au::edu::anu::mm::Expansion* target);
    virtual void backRotate(::x10::lang::Rail< x10_complex >* temp,
                            ::x10::lang::Rail< x10_complex >* complexK,
                            ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* wigner);
    virtual void backRotateAndAdd(::x10::lang::Rail< x10_complex >* complexK,
                                  ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* wigner,
                                  ::au::edu::anu::mm::Expansion* target);
    virtual ::au::edu::anu::mm::Expansion* au__edu__anu__mm__Expansion____this__au__edu__anu__mm__Expansion(
      );
    virtual void __fieldInitializers_au_edu_anu_mm_Expansion(
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
#endif // AU_EDU_ANU_MM_EXPANSION_H

namespace au { namespace edu { namespace anu { namespace mm { 
class Expansion;
} } } } 

#ifndef AU_EDU_ANU_MM_EXPANSION_H_NODEPS
#define AU_EDU_ANU_MM_EXPANSION_H_NODEPS
#ifndef AU_EDU_ANU_MM_EXPANSION_H_GENERICS
#define AU_EDU_ANU_MM_EXPANSION_H_GENERICS
#endif // AU_EDU_ANU_MM_EXPANSION_H_GENERICS
#endif // __AU_EDU_ANU_MM_EXPANSION_H_NODEPS
