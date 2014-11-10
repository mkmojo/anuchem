#ifndef __AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H
#define __AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#include <au/edu/anu/qm/ContractedGaussian.h>
#undef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#define AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#include <au/edu/anu/qm/ContractedGaussian.h>
#undef AU_EDU_ANU_QM_CONTRACTEDGAUSSIAN_H_NODEPS
#define AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#include <au/edu/anu/qm/ShellList.h>
#undef AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#define AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#include <au/edu/anu/qm/ShellList.h>
#undef AU_EDU_ANU_QM_SHELLLIST_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class TwoElectronIntegrals;
} } } } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime;
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
namespace au { namespace edu { namespace anu { namespace qm { 
class Power;
} } } } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class GMatrix__ComputeThread : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::qm::Density* FMGL(density);
    
    x10_boolean FMGL(computing);
    
    ::au::edu::anu::qm::ContractedGaussian FMGL(i);
    
    ::au::edu::anu::qm::ContractedGaussian FMGL(j);
    
    ::au::edu::anu::qm::ContractedGaussian FMGL(k);
    
    ::au::edu::anu::qm::ContractedGaussian FMGL(l);
    
    ::au::edu::anu::qm::TwoElectronIntegrals* FMGL(twoEI);
    
    ::au::edu::anu::qm::ShellList FMGL(shellList);
    
    ::x10::matrix::DenseMatrix* FMGL(jMat);
    
    ::x10::matrix::DenseMatrix* FMGL(kMat);
    
    ::x10::matrix::DenseMatrix* FMGL(qCut);
    
    ::x10::matrix::DenseMatrix* FMGL(dCut);
    
    x10_double FMGL(thresh2);
    
    x10_double FMGL(thresh);
    
    void _constructor(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                      ::x10::matrix::DenseMatrix* qCut, ::x10::matrix::DenseMatrix* dCut,
                      x10_double omega, x10_double thresh);
    
    static ::au::edu::anu::qm::GMatrix__ComputeThread* _make(x10_long N,
                                                             ::au::edu::anu::qm::BasisFunctions bfs,
                                                             ::x10::matrix::DenseMatrix* qCut,
                                                             ::x10::matrix::DenseMatrix* dCut,
                                                             x10_double omega,
                                                             x10_double thresh);
    
    virtual void reset(::au::edu::anu::qm::Density* density,
                       x10_double thresh2);
    virtual void compute(::au::edu::anu::qm::Density* density);
    virtual x10_long computeSingle(::au::edu::anu::qm::ContractedGaussian i,
                                   ::au::edu::anu::qm::ContractedGaussian j,
                                   ::au::edu::anu::qm::ContractedGaussian k,
                                   ::au::edu::anu::qm::ContractedGaussian l,
                                   ::au::edu::anu::qm::Density* density);
    virtual x10_long computeSingle2(::au::edu::anu::qm::ContractedGaussian i,
                                    ::au::edu::anu::qm::ContractedGaussian j,
                                    ::au::edu::anu::qm::ContractedGaussian k,
                                    ::au::edu::anu::qm::ContractedGaussian l,
                                    x10_double radiusABSquared,
                                    x10_int aAng, x10_int bAng,
                                    x10_int cAng, x10_int dAng,
                                    x10_int angMomAB, x10_int aStrt,
                                    x10_int bStrt, x10_int cStrt,
                                    x10_int dStrt, x10_int aLim,
                                    x10_int bLim, ::au::edu::anu::qm::Density* density);
    virtual x10_boolean setValue(::au::edu::anu::qm::ContractedGaussian i,
                                 ::au::edu::anu::qm::ContractedGaussian j,
                                 ::au::edu::anu::qm::ContractedGaussian k,
                                 ::au::edu::anu::qm::ContractedGaussian l);
    virtual x10_long computeOneShellPair(x10_long shellPair,
                                         x10_int nPrimitives,
                                         ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives);
    virtual x10_long computeOneShellPair(::au::edu::anu::qm::ContractedGaussian aFunc,
                                         ::au::edu::anu::qm::ContractedGaussian bFunc,
                                         x10_int nPrimitives,
                                         ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives);
    virtual x10_long computeOneShellTriplet(::au::edu::anu::qm::ContractedGaussian aFunc,
                                            ::au::edu::anu::qm::ContractedGaussian bFunc,
                                            ::au::edu::anu::qm::ContractedGaussian cFunc,
                                            x10_double radiusABSquared,
                                            x10_int nPrimitives,
                                            ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives,
                                            ::x10::matrix::DenseMatrix* qCut,
                                            ::x10::matrix::DenseMatrix* dCut);
    virtual ::x10::matrix::DenseMatrix* getJMat();
    virtual ::x10::matrix::DenseMatrix* getKMat();
    virtual ::au::edu::anu::qm::GMatrix__ComputeThread* au__edu__anu__qm__GMatrix__ComputeThread____this__au__edu__anu__qm__GMatrix__ComputeThread(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_GMatrix_ComputeThread(
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
#endif // AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H

namespace au { namespace edu { namespace anu { namespace qm { 
class GMatrix__ComputeThread;
} } } } 

#ifndef AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H_NODEPS
#define AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H_NODEPS
#ifndef AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H_GENERICS
#define AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H_GENERICS
#endif // AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H_GENERICS
#endif // __AU_EDU_ANU_QM_GMATRIX__COMPUTETHREAD_H_NODEPS
