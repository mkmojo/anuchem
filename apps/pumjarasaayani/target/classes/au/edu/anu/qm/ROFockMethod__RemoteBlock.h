#ifndef __AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H
#define __AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace x10 { namespace matrix { namespace dist { 
class DistDenseMatrix;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace matrix { 
class Matrix;
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
namespace x10 { namespace lang { 
class Zero;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class ROFockMethod__RemoteBlock_Strings {
  public:
    static ::x10::lang::String sl__149985;
};

class ROFockMethod__RemoteBlock : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_double >* FMGL(currentData);
    
    ::x10::lang::Rail< x10_double >* FMGL(nextData);
    
    ::x10::util::Pair<x10_long, x10_long> FMGL(currentDim);
    
    ::x10::util::Pair<x10_long, x10_long> FMGL(nextDim);
    
    void _constructor(x10_long blockSize);
    
    static ::au::edu::anu::qm::ROFockMethod__RemoteBlock* _make(x10_long blockSize);
    
    virtual ::x10::matrix::DenseMatrix* getCurrent();
    virtual void fetchNext(::x10::matrix::dist::DistDenseMatrix* ddm, x10_long nextBlockPlace,
                           x10_long size);
    virtual ::au::edu::anu::qm::ROFockMethod__RemoteBlock* au__edu__anu__qm__ROFockMethod__RemoteBlock____this__au__edu__anu__qm__ROFockMethod__RemoteBlock(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_ROFockMethod_RemoteBlock(
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
#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H

namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod__RemoteBlock;
} } } } 

#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H_NODEPS
#define AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H_NODEPS
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H_GENERICS
#define AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H_GENERICS
#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H_GENERICS
#endif // __AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK_H_NODEPS
