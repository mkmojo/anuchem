#ifndef __AU_EDU_ANU_UTIL_STATISTICALTIMER_H
#define __AU_EDU_ANU_UTIL_STATISTICALTIMER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Math;
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
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace util { 

class StatisticalTimer_Strings {
  public:
    static ::x10::lang::String sl__32696;
    static ::x10::lang::String sl__32697;
    static ::x10::lang::String sl__32692;
    static ::x10::lang::String sl__32693;
    static ::x10::lang::String sl__32694;
    static ::x10::lang::String sl__32695;
    static ::x10::lang::String sl__32691;
};

class StatisticalTimer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_long >* FMGL(current);
    
    ::x10::lang::Rail< x10_long >* FMGL(count);
    
    ::x10::lang::Rail< x10_long >* FMGL(total);
    
    ::x10::lang::Rail< x10_long >* FMGL(min);
    
    ::x10::lang::Rail< x10_long >* FMGL(max);
    
    ::x10::lang::Rail< x10_double >* FMGL(sumOfSquares);
    
    void _constructor(x10_long n);
    
    static ::au::edu::anu::util::StatisticalTimer* _make(x10_long n);
    
    virtual void start(x10_long id);
    virtual void clear(x10_long id);
    virtual void stop(x10_long id);
    virtual x10_long last(x10_long id);
    virtual x10_long mean(x10_long id);
    virtual x10_long tot(x10_long id);
    virtual x10_double stdDev(x10_long id);
    virtual void printSeconds(x10_long id);
    virtual void printHeader();
    virtual void printSeconds();
    virtual ::au::edu::anu::util::StatisticalTimer* au__edu__anu__util__StatisticalTimer____this__au__edu__anu__util__StatisticalTimer(
      );
    virtual void __fieldInitializers_au_edu_anu_util_StatisticalTimer(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_UTIL_STATISTICALTIMER_H

namespace au { namespace edu { namespace anu { namespace util { 
class StatisticalTimer;
} } } } 

#ifndef AU_EDU_ANU_UTIL_STATISTICALTIMER_H_NODEPS
#define AU_EDU_ANU_UTIL_STATISTICALTIMER_H_NODEPS
#ifndef AU_EDU_ANU_UTIL_STATISTICALTIMER_H_GENERICS
#define AU_EDU_ANU_UTIL_STATISTICALTIMER_H_GENERICS
#endif // AU_EDU_ANU_UTIL_STATISTICALTIMER_H_GENERICS
#endif // __AU_EDU_ANU_UTIL_STATISTICALTIMER_H_NODEPS
