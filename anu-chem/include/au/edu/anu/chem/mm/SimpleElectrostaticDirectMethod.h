#ifndef __AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H
#define __AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H

#include <x10rt.h>


namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class SimpleElectrostaticDirectMethod__Atom;
} } } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 

class SimpleElectrostaticDirectMethod : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(SIZE) */
    static x10_double FMGL(SIZE);
    static x10_double FMGL(SIZE__get)();
    
    /* Static field: FMGL(TIMER_INDEX_TOTAL) */
    static const x10_long FMGL(TIMER_INDEX_TOTAL) = 0;
    static x10_long FMGL(TIMER_INDEX_TOTAL__get)();
    
    ::au::edu::anu::util::Timer* FMGL(timer);
    
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >*
      FMGL(atoms);
    
    void _constructor(::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >* atoms);
    
    static ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod* _make(
             ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >* atoms);
    
    virtual x10_double getEnergy();
    static ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >*
      generateAtoms(x10_long numAtoms);
    virtual ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod*
      au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod____this__au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod(
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
#endif // AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H

namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class SimpleElectrostaticDirectMethod;
} } } } } 

#ifndef AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H_NODEPS
#define AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H_GENERICS
#define AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H_GENERICS
inline x10_double au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::FMGL(SIZE__get)() {
    return au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::FMGL(SIZE);
}

inline x10_long au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::FMGL(TIMER_INDEX_TOTAL__get)() {
    return au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::FMGL(TIMER_INDEX_TOTAL);
}

#endif // AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD_H_NODEPS
