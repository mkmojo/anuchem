#ifndef __AU_EDU_ANU_QM_GMATRIX_H
#define __AU_EDU_ANU_QM_GMATRIX_H

#include <x10rt.h>


#define X10_MATRIX_DENSEMATRIX_H_NODEPS
#include <x10/matrix/DenseMatrix.h>
#undef X10_MATRIX_DENSEMATRIX_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#include <au/edu/anu/qm/BasisFunctions.h>
#undef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#include <au/edu/anu/qm/BasisFunctions.h>
#undef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace util { 
class StatisticalTimer;
} } } } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix__ComputePlace;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace x10 { namespace lang { 
class Place;
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
class String;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ShellList;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class TwoElectronIntegrals;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix__ComputeThread;
} } } } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
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
namespace au { namespace edu { namespace anu { namespace util { 
class SharedCounter;
} } } } 
namespace au { namespace edu { namespace anu { namespace util { 
class Timer;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class GMatrix_Strings {
  public:
    static ::x10::lang::String sl__149022;
    static ::x10::lang::String sl__149000;
    static ::x10::lang::String sl__149006;
    static ::x10::lang::String sl__149015;
    static ::x10::lang::String sl__149014;
    static ::x10::lang::String sl__149021;
    static ::x10::lang::String sl__149002;
    static ::x10::lang::String sl__149001;
    static ::x10::lang::String sl__149025;
    static ::x10::lang::String sl__149012;
    static ::x10::lang::String sl__149004;
    static ::x10::lang::String sl__149009;
    static ::x10::lang::String sl__149005;
    static ::x10::lang::String sl__149019;
    static ::x10::lang::String sl__149023;
    static ::x10::lang::String sl__149018;
    static ::x10::lang::String sl__149026;
    static ::x10::lang::String sl__149011;
    static ::x10::lang::String sl__149020;
    static ::x10::lang::String sl__149013;
    static ::x10::lang::String sl__149010;
    static ::x10::lang::String sl__149003;
    static ::x10::lang::String sl__149007;
    static ::x10::lang::String sl__149017;
    static ::x10::lang::String sl__149024;
    static ::x10::lang::String sl__149016;
    static ::x10::lang::String sl__149008;
};

class GMatrix : public ::x10::matrix::DenseMatrix   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(DEFAULT_GMATTYPE) */
    static const x10_int FMGL(DEFAULT_GMATTYPE) = 4;
    static x10_int FMGL(DEFAULT_GMATTYPE__get)();
    
    ::au::edu::anu::util::StatisticalTimer* FMGL(timer);
    
    /* Static field: FMGL(TIMER_IDX_TOTAL) */
    static const x10_long FMGL(TIMER_IDX_TOTAL) = 0;
    static x10_long FMGL(TIMER_IDX_TOTAL__get)();
    
    x10_int FMGL(gMatType);
    
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*
      FMGL(computeInst);
    
    ::au::edu::anu::qm::BasisFunctions FMGL(bfs);
    
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* FMGL(mol);
    
    x10_double FMGL(omega);
    
    x10_double FMGL(thresh);
    
    x10_double FMGL(thresh2);
    
    ::x10::matrix::DenseMatrix* FMGL(jMatrix);
    
    ::x10::matrix::DenseMatrix* FMGL(kMatrix);
    
    void _constructor(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                      ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule,
                      x10_double omega, x10_double thresh);
    
    static ::au::edu::anu::qm::GMatrix* _make(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                                              ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule,
                                              x10_double omega,
                                              x10_double thresh);
    
    virtual void compute(::au::edu::anu::qm::Density* density);
    void computeSerial(::au::edu::anu::qm::Density* density);
    void computeThreadedLowMemNoAtomicByBF(::au::edu::anu::qm::Density* density);
    void computeDistNoAtomicByBF(::au::edu::anu::qm::Density* density);
    virtual void gatherAndReduceGMatrix();
    void computeDistStaticByAtoms(::au::edu::anu::qm::Density* density);
    void computeDistDynamicByShells(::au::edu::anu::qm::Density* density);
    void computeDistStaticByShells(::au::edu::anu::qm::Density* density);
    void computeDistStaticByShellsReduce(::au::edu::anu::qm::Density* density);
    void computeDistThreadedDynamicByShells(::au::edu::anu::qm::Density* density);
    virtual ::au::edu::anu::qm::GMatrix* au__edu__anu__qm__GMatrix____this__au__edu__anu__qm__GMatrix(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_GMatrix(
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
#endif // AU_EDU_ANU_QM_GMATRIX_H

namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix;
} } } } 

#ifndef AU_EDU_ANU_QM_GMATRIX_H_NODEPS
#define AU_EDU_ANU_QM_GMATRIX_H_NODEPS
#ifndef AU_EDU_ANU_QM_GMATRIX_H_GENERICS
#define AU_EDU_ANU_QM_GMATRIX_H_GENERICS
inline x10_int au::edu::anu::qm::GMatrix::FMGL(DEFAULT_GMATTYPE__get)() {
    return au::edu::anu::qm::GMatrix::FMGL(DEFAULT_GMATTYPE);
}

inline x10_long au::edu::anu::qm::GMatrix::FMGL(TIMER_IDX_TOTAL__get)() {
    return au::edu::anu::qm::GMatrix::FMGL(TIMER_IDX_TOTAL);
}

#endif // AU_EDU_ANU_QM_GMATRIX_H_GENERICS
#endif // __AU_EDU_ANU_QM_GMATRIX_H_NODEPS
