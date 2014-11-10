#ifndef __AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H
#define __AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H

#include <x10rt.h>


namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace mm { 
class Factorial;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace mm { 

class WignerRotationMatrix_Strings {
  public:
    static ::x10::lang::String sl__73388;
};

class WignerRotationMatrix : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(OPERATOR_A) */
    static const x10_int FMGL(OPERATOR_A) = 0;
    static x10_int FMGL(OPERATOR_A__get)();
    
    /* Static field: FMGL(OPERATOR_B) */
    static const x10_int FMGL(OPERATOR_B) = -1;
    static x10_int FMGL(OPERATOR_B__get)();
    
    /* Static field: FMGL(OPERATOR_C) */
    static const x10_int FMGL(OPERATOR_C) = 2;
    static x10_int FMGL(OPERATOR_C__get)();
    
    static ::x10::regionarray::Array<x10_double>* getDmk(x10_double theta,
                                                         x10_long l);
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
      getCollection(x10_double theta, x10_long numTerms);
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
      getExpandedCollection(x10_double theta, x10_long numTerms,
                            x10_int op);
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
      getACollection(x10_double theta, x10_long numTerms);
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
      getBCollection(x10_double theta, x10_long numTerms);
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*
      getCCollection(x10_double theta, x10_long numTerms);
    virtual ::au::edu::anu::mm::WignerRotationMatrix* au__edu__anu__mm__WignerRotationMatrix____this__au__edu__anu__mm__WignerRotationMatrix(
      );
    void _constructor();
    
    static ::au::edu::anu::mm::WignerRotationMatrix* _make(
             );
    
    virtual void __fieldInitializers_au_edu_anu_mm_WignerRotationMatrix(
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
#endif // AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H

namespace au { namespace edu { namespace anu { namespace mm { 
class WignerRotationMatrix;
} } } } 

#ifndef AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H_NODEPS
#define AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H_NODEPS
#ifndef AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H_GENERICS
#define AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H_GENERICS
inline x10_int au::edu::anu::mm::WignerRotationMatrix::FMGL(OPERATOR_A__get)() {
    return au::edu::anu::mm::WignerRotationMatrix::FMGL(OPERATOR_A);
}

inline x10_int au::edu::anu::mm::WignerRotationMatrix::FMGL(OPERATOR_B__get)() {
    return au::edu::anu::mm::WignerRotationMatrix::FMGL(OPERATOR_B);
}

inline x10_int au::edu::anu::mm::WignerRotationMatrix::FMGL(OPERATOR_C__get)() {
    return au::edu::anu::mm::WignerRotationMatrix::FMGL(OPERATOR_C);
}

#endif // AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H_GENERICS
#endif // __AU_EDU_ANU_MM_WIGNERROTATIONMATRIX_H_NODEPS
