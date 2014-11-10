#ifndef __AU_EDU_ANU_CHEM_ATOMINFO_H
#define __AU_EDU_ANU_CHEM_ATOMINFO_H

#include <x10rt.h>


namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo__AtomProps;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class AtomInfo_Strings {
  public:
    static ::x10::lang::String sl__32445;
    static ::x10::lang::String sl__32454;
    static ::x10::lang::String sl__32450;
    static ::x10::lang::String sl__32441;
    static ::x10::lang::String sl__32457;
    static ::x10::lang::String sl__32442;
    static ::x10::lang::String sl__32456;
    static ::x10::lang::String sl__32443;
    static ::x10::lang::String sl__32444;
    static ::x10::lang::String sl__32437;
    static ::x10::lang::String sl__32455;
    static ::x10::lang::String sl__32453;
    static ::x10::lang::String sl__32448;
    static ::x10::lang::String sl__32451;
    static ::x10::lang::String sl__32440;
    static ::x10::lang::String sl__32452;
    static ::x10::lang::String sl__32439;
    static ::x10::lang::String sl__32446;
    static ::x10::lang::String sl__32458;
    static ::x10::lang::String sl__32447;
    static ::x10::lang::String sl__32438;
    static ::x10::lang::String sl__32449;
};

class AtomInfo : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(_instance) */
    static ::au::edu::anu::chem::AtomInfo* FMGL(_instance);
    static void FMGL(_instance__do_init)();
    static void FMGL(_instance__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(_instance__status);
    static ::x10::lang::CheckedThrowable* FMGL(_instance__exception);
    static ::au::edu::anu::chem::AtomInfo* FMGL(_instance__get)();
    
    static ::au::edu::anu::chem::AtomInfo* getInstance();
    ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>*
      FMGL(bySymbol);
    
    ::x10::lang::Rail< ::au::edu::anu::chem::AtomInfo__AtomProps* >*
      FMGL(bySpecies);
    
    void _constructor();
    
    static ::au::edu::anu::chem::AtomInfo* _make();
    
    virtual ::au::edu::anu::chem::AtomInfo__AtomProps* getSpecies(
      x10_int speciesId);
    virtual ::au::edu::anu::chem::AtomInfo__AtomProps* getSpecies(
      ::x10::lang::String* symbol);
    virtual x10_int getAtomicNumber(::x10::lang::String* symbol);
    virtual x10_double getCovalentRadius(::x10::lang::String* symbol);
    virtual x10_double getVdWRadius(::x10::lang::String* symbol);
    virtual x10_double getAtomicMass(::x10::lang::String* symbol);
    virtual x10_int getAtomicNumber(x10_int species);
    virtual x10_double getCovalentRadius(x10_int species);
    virtual x10_double getVdWRadius(x10_int species);
    virtual x10_double getAtomicMass(x10_int species);
    virtual ::au::edu::anu::chem::AtomInfo* au__edu__anu__chem__AtomInfo____this__au__edu__anu__chem__AtomInfo(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_AtomInfo(
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
#endif // AU_EDU_ANU_CHEM_ATOMINFO_H

namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 

#ifndef AU_EDU_ANU_CHEM_ATOMINFO_H_NODEPS
#define AU_EDU_ANU_CHEM_ATOMINFO_H_NODEPS
#include <x10/util/HashMap.h>
#include <x10/lang/String.h>
#include <au/edu/anu/chem/AtomInfo__AtomProps.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Iterator.h>
#include <x10/util/Map__Entry.h>
#include <x10/util/Map.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_CHEM_ATOMINFO_H_GENERICS
#define AU_EDU_ANU_CHEM_ATOMINFO_H_GENERICS
inline ::au::edu::anu::chem::AtomInfo* au::edu::anu::chem::AtomInfo::FMGL(_instance__get)() {
    if (FMGL(_instance__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(_instance__init)();
    }
    return au::edu::anu::chem::AtomInfo::FMGL(_instance);
}

#endif // AU_EDU_ANU_CHEM_ATOMINFO_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_ATOMINFO_H_NODEPS
