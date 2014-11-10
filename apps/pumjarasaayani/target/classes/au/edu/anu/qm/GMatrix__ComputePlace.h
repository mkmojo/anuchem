#ifndef __AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H
#define __AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix__ComputeThread;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions;
} } } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Place;
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
namespace x10 { namespace matrix { 
class Matrix;
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
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ShellList;
} } } } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 
namespace x10 { namespace lang { 
class FinishState;
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
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class GMatrix__ComputePlace_Strings {
  public:
    static ::x10::lang::String sl__149066;
    static ::x10::lang::String sl__149067;
    static ::x10::lang::String sl__149065;
};

class GMatrix__ComputePlace : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::qm::Density* FMGL(density);
    
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* FMGL(mol);
    
    ::x10::matrix::DenseMatrix* FMGL(gMatrixContribution);
    
    ::x10::matrix::DenseMatrix* FMGL(jMatrixContribution);
    
    ::x10::matrix::DenseMatrix* FMGL(kMatrixContribution);
    
    ::x10::matrix::DenseMatrix* FMGL(qCut);
    
    ::x10::matrix::DenseMatrix* FMGL(dCut);
    
    x10_double FMGL(maxEst);
    
    x10_double FMGL(thresh2);
    
    x10_double FMGL(thresh);
    
    ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* FMGL(computeThreads);
    
    void _constructor(x10_long N, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                      ::au::edu::anu::qm::BasisFunctions bfs, ::x10::matrix::DenseMatrix* qCut,
                      ::x10::matrix::DenseMatrix* dCut, x10_double maxEst,
                      x10_double omega, x10_double thresh);
    
    static ::au::edu::anu::qm::GMatrix__ComputePlace* _make(
             x10_long N, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
             ::au::edu::anu::qm::BasisFunctions bfs, ::x10::matrix::DenseMatrix* qCut,
             ::x10::matrix::DenseMatrix* dCut, x10_double maxEst,
             x10_double omega, x10_double thresh);
    
    virtual void reset(::au::edu::anu::qm::Density* density);
    virtual void reset();
    virtual void allreduceGMat();
    void recomputeDCut();
    virtual ::x10::matrix::DenseMatrix* getGMatContributionArray(
      );
    virtual x10_boolean setValue(x10_long a, x10_long b, x10_long c,
                                 x10_long d, x10_long i, x10_long j,
                                 x10_long k, x10_long l);
    virtual x10_long compute(x10_int start, x10_int end);
    virtual x10_long computeShells(x10_int nPairs);
    ::x10::matrix::DenseMatrix* computeJMatContribution();
    ::x10::matrix::DenseMatrix* computeKMatContribution();
    virtual x10_long computeOneShellPairThreaded(x10_long shellPair,
                                                 x10_int nPrimitives,
                                                 ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives);
    virtual x10_long computeOneShellPairThreaded(::au::edu::anu::qm::ContractedGaussian aFunc,
                                                 ::au::edu::anu::qm::ContractedGaussian bFunc,
                                                 x10_int nPrimitives,
                                                 ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives);
    virtual ::au::edu::anu::qm::GMatrix__ComputePlace* au__edu__anu__qm__GMatrix__ComputePlace____this__au__edu__anu__qm__GMatrix__ComputePlace(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_GMatrix_ComputePlace(
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
#endif // AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H

namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix__ComputePlace;
} } } } 

#ifndef AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H_NODEPS
#define AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H_NODEPS
#ifndef AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H_GENERICS
#define AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H_GENERICS
#endif // AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H_GENERICS
#endif // __AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE_H_NODEPS
