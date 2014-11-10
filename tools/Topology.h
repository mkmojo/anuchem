#ifndef __TOPOLOGY_H
#define __TOPOLOGY_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace io { 
class Reader;
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
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class Topology_Strings {
  public:
    static ::x10::lang::String sl__4980;
    static ::x10::lang::String sl__4981;
    static ::x10::lang::String sl__4979;
    static ::x10::lang::String sl__4982;
};

class Topology : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::Topology* Topology____this__Topology();
    void _constructor();
    
    static ::Topology* _make();
    
    virtual void __fieldInitializers_Topology();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // TOPOLOGY_H

class Topology;

#ifndef TOPOLOGY_H_NODEPS
#define TOPOLOGY_H_NODEPS
#ifndef TOPOLOGY_H_GENERICS
#define TOPOLOGY_H_GENERICS
#endif // TOPOLOGY_H_GENERICS
#endif // __TOPOLOGY_H_NODEPS
