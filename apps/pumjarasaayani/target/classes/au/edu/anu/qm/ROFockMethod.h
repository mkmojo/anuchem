#ifndef __AU_EDU_ANU_QM_ROFOCKMETHOD_H
#define __AU_EDU_ANU_QM_ROFOCKMETHOD_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define AU_EDU_ANU_QM_SHELLPAIR_H_NODEPS
#include <au/edu/anu/qm/ShellPair.h>
#undef AU_EDU_ANU_QM_SHELLPAIR_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace util { 
class StatisticalTimer;
} } } } 
namespace x10 { namespace matrix { namespace dist { 
class DistDenseMatrix;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod__RemoteBlock;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class WorkerLocalHandle;
} } 
namespace au { namespace edu { namespace anu { namespace qm { namespace ro { 
class Integral_Pack;
} } } } } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
class Date;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ShellList;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Power;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace matrix { namespace block { 
class Grid;
} } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class MolecularOrbitals;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod__RecursiveBisection1D;
} } } } 
namespace x10 { namespace matrix { namespace blas { 
class DenseMatrixBLAS;
} } } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class ROFockMethod_Strings {
  public:
    static ::x10::lang::String sl__149783;
    static ::x10::lang::String sl__149787;
    static ::x10::lang::String sl__149799;
    static ::x10::lang::String sl__149796;
    static ::x10::lang::String sl__149800;
    static ::x10::lang::String sl__149792;
    static ::x10::lang::String sl__149788;
    static ::x10::lang::String sl__149790;
    static ::x10::lang::String sl__149793;
    static ::x10::lang::String sl__149784;
    static ::x10::lang::String sl__149795;
    static ::x10::lang::String sl__149786;
    static ::x10::lang::String sl__149802;
    static ::x10::lang::String sl__149805;
    static ::x10::lang::String sl__149791;
    static ::x10::lang::String sl__149789;
    static ::x10::lang::String sl__149797;
    static ::x10::lang::String sl__149801;
    static ::x10::lang::String sl__149794;
    static ::x10::lang::String sl__149803;
    static ::x10::lang::String sl__149804;
    static ::x10::lang::String sl__149798;
    static ::x10::lang::String sl__149785;
};

class ROFockMethod : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(N);
    
    ::au::edu::anu::util::StatisticalTimer* FMGL(timer);
    
    x10_long FMGL(TIMER_TOTAL);
    
    x10_long FMGL(TIMER_PERPLACE);
    
    x10_long FMGL(TIMER_AUX);
    
    x10_long FMGL(TIMER_JMATRIX);
    
    x10_long FMGL(TIMER_K);
    
    x10_long FMGL(TIMER_DSYRK);
    
    x10_long FMGL(TIMER_DGEMM);
    
    x10_long FMGL(TIMER_GATHER);
    
    ::x10::matrix::dist::DistDenseMatrix* FMGL(halfAuxMat);
    
    ::x10::matrix::dist::DistDenseMatrix* FMGL(distJ);
    
    ::x10::matrix::dist::DistDenseMatrix* FMGL(distK);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>
      FMGL(auxJ_plh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*>
      FMGL(auxKIdx_plh);
    
    ::x10::lang::PlaceLocalHandle< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>
      FMGL(remoteBlockK_plh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>
      FMGL(ylms_plh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>
      FMGL(shellPairs_plh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>
      FMGL(dlm_plh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>
      FMGL(e_plh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*>
      FMGL(shellPairRange_plh);
    
    ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>*
      FMGL(auxK_wlh);
    
    ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>*
      FMGL(intPack_wlh);
    
    ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>*
      FMGL(dlm_wlh);
    
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>
      FMGL(densityMos_plh);
    
    x10_long FMGL(nOrbitals);
    
    ::x10::lang::Rail< x10_double >* FMGL(norm);
    
    x10_int FMGL(roN);
    
    x10_int FMGL(roNK);
    
    x10_int FMGL(roK);
    
    x10_double FMGL(roZ);
    
    ::x10::lang::Rail< x10_long >* FMGL(shellAtPlace);
    
    ::x10::lang::Rail< x10_long >* FMGL(funcAtPlace);
    
    ::x10::lang::Rail< x10_long >* FMGL(offsetAtPlace);
    
    void _constructor(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                      ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                      x10_long nOrbitals, x10_double omega,
                      x10_double roThresh);
    
    static ::au::edu::anu::qm::ROFockMethod* _make(x10_long N,
                                                   ::au::edu::anu::qm::BasisFunctions bfs,
                                                   ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                   x10_long nOrbitals,
                                                   x10_double omega,
                                                   x10_double roThresh);
    
    virtual void compute(::au::edu::anu::qm::Density* density,
                         ::au::edu::anu::qm::MolecularOrbitals* mos,
                         ::x10::matrix::DenseMatrix* gMatrix);
    static x10_double traceOfSymmetricProduct(::x10::matrix::DenseMatrix* a,
                                              ::x10::matrix::DenseMatrix* b);
    void computeAuxBDlm(::x10::matrix::DenseMatrix* density,
                        ::x10::matrix::DenseMatrix* mos, x10_int ron,
                        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ,
                        ::x10::matrix::DenseMatrix* bMat,
                        ::x10::lang::Rail< x10_double >* dlm);
    void computeK(x10_int ron, ::x10::matrix::DenseMatrix* bMat,
                  ::x10::matrix::DenseMatrix* localK);
    void computeJ(x10_int ron, ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ,
                  ::x10::lang::Rail< x10_double >* dlm, ::x10::matrix::DenseMatrix* localJ);
    virtual ::au::edu::anu::qm::ROFockMethod* au__edu__anu__qm__ROFockMethod____this__au__edu__anu__qm__ROFockMethod(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_ROFockMethod(
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
#endif // AU_EDU_ANU_QM_ROFOCKMETHOD_H

namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod;
} } } } 

#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD_H_NODEPS
#define AU_EDU_ANU_QM_ROFOCKMETHOD_H_NODEPS
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD_H_GENERICS
#define AU_EDU_ANU_QM_ROFOCKMETHOD_H_GENERICS
#endif // AU_EDU_ANU_QM_ROFOCKMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_QM_ROFOCKMETHOD_H_NODEPS
