#ifndef __AU_EDU_ANU_MM_FMMLOCALDATA_H
#define __AU_EDU_ANU_MM_FMMLOCALDATA_H

#include <x10rt.h>


#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_UBYTE_H_NODEPS
#include <x10/lang/UByte.h>
#undef X10_LANG_UBYTE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_UINT_H_NODEPS
#include <x10/lang/UInt.h>
#undef X10_LANG_UINT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LET;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class FmmOperators;
} } } } 
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class OctantId;
} } } } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList;
} } } } 
namespace au { namespace edu { namespace anu { namespace mm { 
class LeafOctant__UList__UListIterator;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class Place;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class FmmLocalData : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(TIMER_INDEX_TOTAL) */
    static const x10_long FMGL(TIMER_INDEX_TOTAL) = 0;
    static x10_long FMGL(TIMER_INDEX_TOTAL__get)();
    
    /* Static field: FMGL(TIMER_INDEX_PREFETCH) */
    static const x10_long FMGL(TIMER_INDEX_PREFETCH) = 1;
    static x10_long FMGL(TIMER_INDEX_PREFETCH__get)();
    
    /* Static field: FMGL(TIMER_INDEX_UPWARD) */
    static const x10_long FMGL(TIMER_INDEX_UPWARD) = 2;
    static x10_long FMGL(TIMER_INDEX_UPWARD__get)();
    
    /* Static field: FMGL(TIMER_INDEX_M2L) */
    static const x10_long FMGL(TIMER_INDEX_M2L) = 3;
    static x10_long FMGL(TIMER_INDEX_M2L__get)();
    
    /* Static field: FMGL(TIMER_INDEX_DOWNWARD) */
    static const x10_long FMGL(TIMER_INDEX_DOWNWARD) = 4;
    static x10_long FMGL(TIMER_INDEX_DOWNWARD__get)();
    
    /* Static field: FMGL(TIMER_INDEX_TREE) */
    static const x10_long FMGL(TIMER_INDEX_TREE) = 5;
    static x10_long FMGL(TIMER_INDEX_TREE__get)();
    
    /* Static field: FMGL(TIMER_INDEX_SORT) */
    static const x10_long FMGL(TIMER_INDEX_SORT) = 6;
    static x10_long FMGL(TIMER_INDEX_SORT__get)();
    
    /* Static field: FMGL(TIMER_INDEX_BALANCE) */
    static const x10_long FMGL(TIMER_INDEX_BALANCE) = 7;
    static x10_long FMGL(TIMER_INDEX_BALANCE__get)();
    
    /* Static field: FMGL(TIMER_INDEX_REDIST) */
    static const x10_long FMGL(TIMER_INDEX_REDIST) = 8;
    static x10_long FMGL(TIMER_INDEX_REDIST__get)();
    
    /* Static field: FMGL(TIMER_INDEX_PARENTS) */
    static const x10_long FMGL(TIMER_INDEX_PARENTS) = 9;
    static x10_long FMGL(TIMER_INDEX_PARENTS__get)();
    
    /* Static field: FMGL(TIMER_INDEX_LET) */
    static const x10_long FMGL(TIMER_INDEX_LET) = 10;
    static x10_long FMGL(TIMER_INDEX_LET__get)();
    
    x10_ubyte FMGL(dMax);
    
    x10_double FMGL(size);
    
    ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>* FMGL(octants);
    
    ::x10::lang::Rail< x10_long >* FMGL(octantLoads);
    
    ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>* FMGL(leafOctants);
    
    ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>* FMGL(topLevelOctants);
    
    ::x10::lang::Rail< x10_uint >* FMGL(firstLeafOctant);
    
    ::au::edu::anu::mm::LET* FMGL(locallyEssentialTree);
    
    ::au::edu::anu::mm::FmmOperators* FMGL(fmmOperators);
    
    ::x10::lang::Rail< x10_long >* FMGL(cost);
    
    /* Static field: FMGL(ESTIMATE_P2P) */
    static const x10_long FMGL(ESTIMATE_P2P) = 0;
    static x10_long FMGL(ESTIMATE_P2P__get)();
    
    /* Static field: FMGL(ESTIMATE_M2L) */
    static const x10_long FMGL(ESTIMATE_M2L) = 1;
    static x10_long FMGL(ESTIMATE_M2L__get)();
    
    ::au::edu::anu::util::Timer* FMGL(timer);
    
    virtual void init(x10_int numTerms, x10_ubyte dMax, x10_int ws, x10_double size);
    virtual x10_long getPlaceId(::au::edu::anu::mm::OctantId leafOctantId);
    virtual x10_long getPlaceId(x10_uint mortonId);
    virtual ::au::edu::anu::mm::Octant* getOctant(x10_uint mortonId);
    virtual ::au::edu::anu::mm::Octant* getOctant(::au::edu::anu::mm::OctantId octantId);
    virtual ::x10::lang::Rail< x10_uint >* getCombinedUList(x10_int ws);
    virtual ::au::edu::anu::mm::FmmLocalData* au__edu__anu__mm__FmmLocalData____this__au__edu__anu__mm__FmmLocalData(
      );
    void _constructor();
    
    static ::au::edu::anu::mm::FmmLocalData* _make();
    
    virtual void __fieldInitializers_au_edu_anu_mm_FmmLocalData();
    
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
#endif // AU_EDU_ANU_MM_FMMLOCALDATA_H

namespace au { namespace edu { namespace anu { namespace mm { 
class FmmLocalData;
} } } } 

#ifndef AU_EDU_ANU_MM_FMMLOCALDATA_H_NODEPS
#define AU_EDU_ANU_MM_FMMLOCALDATA_H_NODEPS
#ifndef AU_EDU_ANU_MM_FMMLOCALDATA_H_GENERICS
#define AU_EDU_ANU_MM_FMMLOCALDATA_H_GENERICS
inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_TOTAL__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_TOTAL);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_PREFETCH__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_PREFETCH);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_UPWARD__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_UPWARD);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_M2L__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_M2L);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_DOWNWARD__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_DOWNWARD);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_TREE__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_TREE);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_SORT__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_SORT);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_BALANCE__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_BALANCE);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_REDIST__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_REDIST);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_PARENTS__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_PARENTS);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_LET__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(TIMER_INDEX_LET);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(ESTIMATE_P2P__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(ESTIMATE_P2P);
}

inline x10_long au::edu::anu::mm::FmmLocalData::FMGL(ESTIMATE_M2L__get)() {
    return au::edu::anu::mm::FmmLocalData::FMGL(ESTIMATE_M2L);
}

#endif // AU_EDU_ANU_MM_FMMLOCALDATA_H_GENERICS
#endif // __AU_EDU_ANU_MM_FMMLOCALDATA_H_NODEPS
