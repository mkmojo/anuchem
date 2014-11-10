#ifndef __AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H
#define __AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Math;
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
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class ShellList;
} } } } 
namespace x10 { namespace matrix { 
class DenseMatrix;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Density;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace qm { 
class Power;
} } } } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace matrix { 
class Matrix;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class TwoElectronIntegrals : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(SQ2PI) */
    static x10_double FMGL(SQ2PI);
    static x10_double FMGL(SQ2PI__get)();
    
    ::x10::lang::Rail< x10_double >* FMGL(gmt);
    
    ::x10::lang::Rail< x10_double >* FMGL(zeroM);
    
    ::x10::regionarray::Array<x10_double>* FMGL(rM);
    
    ::x10::regionarray::Array<x10_double>* FMGL(pqInts);
    
    ::x10::regionarray::Array<x10_double>* FMGL(npint);
    
    ::x10::regionarray::Array<x10_double>* FMGL(pcdint);
    
    x10_long FMGL(maxam);
    
    x10_long FMGL(maxam2);
    
    x10_long FMGL(maxam2M);
    
    x10_long FMGL(maxam2N);
    
    ::x10::lang::Rail< x10_double >* FMGL(normFactors);
    
    x10_double FMGL(THRESH);
    
    x10_double FMGL(TCrit);
    
    x10_double FMGL(omega);
    
    void _constructor(x10_int maxam, ::x10::lang::Rail< x10_double >* normFactors,
                      x10_double omega, x10_double Th);
    
    static ::au::edu::anu::qm::TwoElectronIntegrals* _make(x10_int maxam,
                                                           ::x10::lang::Rail< x10_double >* normFactors,
                                                           x10_double omega,
                                                           x10_double Th);
    
    virtual x10_int compute2EAndRecord(::au::edu::anu::qm::ContractedGaussian a,
                                       ::au::edu::anu::qm::ContractedGaussian b,
                                       ::au::edu::anu::qm::ContractedGaussian c,
                                       ::au::edu::anu::qm::ContractedGaussian d,
                                       ::au::edu::anu::qm::ShellList shellList,
                                       ::x10::matrix::DenseMatrix* jMat,
                                       ::x10::matrix::DenseMatrix* kMat,
                                       ::au::edu::anu::qm::Density* dMat);
    virtual x10_int compute2EAndRecord2(::au::edu::anu::qm::ContractedGaussian a,
                                        ::au::edu::anu::qm::ContractedGaussian b,
                                        ::au::edu::anu::qm::ContractedGaussian c,
                                        ::au::edu::anu::qm::ContractedGaussian d,
                                        ::au::edu::anu::qm::ShellList shellList,
                                        ::x10::matrix::DenseMatrix* jMat,
                                        ::x10::matrix::DenseMatrix* kMat,
                                        ::au::edu::anu::qm::Density* dMat,
                                        x10_double radiusABSquared,
                                        x10_int aAng, x10_int bAng,
                                        x10_int cAng, x10_int dAng,
                                        x10_int angMomAB,
                                        x10_int aStrt, x10_int bStrt,
                                        x10_int cStrt, x10_int dStrt,
                                        x10_int aLim, x10_int bLim);
    x10_double mdRecurse(::x10x::vector::Vector3d r, x10_int i,
                         x10_int j, x10_int k, x10_int m);
    x10_double mdHrr(x10_int xa, x10_int ya, x10_int za, x10_int xb,
                     x10_int yb, x10_int zb, x10_int xp, x10_int yp,
                     x10_int zp, x10_double pai, x10_double paj,
                     x10_double pak, x10_double pbi, x10_double pbj,
                     x10_double pbk, x10_double sigma);
    virtual ::x10::lang::Rail< x10_double >* computeZeroM(
      x10_int angMomABCD, x10_double Ti, x10_double Upq, x10_double etai);
    void computeGmt(x10_int angMomABCD, x10_double T);
    void computeRm(x10_int angMomABCD, ::au::edu::anu::qm::ShellList shellList,
                   ::x10x::vector::Vector3d r);
    void computePq(x10_int angMomAB, x10_int angMomCD, ::au::edu::anu::qm::ShellList shellList);
    void computePcd(x10_int angMomAB, x10_double sigmaQ, ::x10x::vector::Point3d q,
                    x10_int dLim, x10_int cLim, ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellD,
                    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellC,
                    ::x10x::vector::Point3d dCen, ::x10x::vector::Point3d cCen);
    void computeAbcd(x10_int dLim, x10_int cLim, x10_int bLim,
                     x10_int aLim, x10_int dStrt, x10_int cStrt,
                     x10_int bStrt, x10_int aStrt, ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellB,
                     ::x10::lang::Rail< ::au::edu::anu::qm::Power >* shellA,
                     ::x10x::vector::Point3d aCen, ::x10x::vector::Point3d bCen,
                     ::x10x::vector::Point3d p, x10_double sigmaP,
                     ::x10::matrix::DenseMatrix* jMatrix,
                     ::x10::matrix::DenseMatrix* kMatrix,
                     ::x10::matrix::DenseMatrix* dMatrix);
    void fillJKMatrices(x10_double twoEIntVal, x10_int ii,
                        x10_int jj, x10_int kk, x10_int ll,
                        ::x10::matrix::DenseMatrix* jMatrix,
                        ::x10::matrix::DenseMatrix* kMatrix,
                        ::x10::matrix::DenseMatrix* dMatrix);
    virtual ::au::edu::anu::qm::TwoElectronIntegrals* au__edu__anu__qm__TwoElectronIntegrals____this__au__edu__anu__qm__TwoElectronIntegrals(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_TwoElectronIntegrals(
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
#endif // AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H

namespace au { namespace edu { namespace anu { namespace qm { 
class TwoElectronIntegrals;
} } } } 

#ifndef AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H_NODEPS
#define AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H_NODEPS
#ifndef AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H_GENERICS
#define AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H_GENERICS
inline x10_double au::edu::anu::qm::TwoElectronIntegrals::FMGL(SQ2PI__get)() {
    return au::edu::anu::qm::TwoElectronIntegrals::FMGL(SQ2PI);
}

#endif // AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H_GENERICS
#endif // __AU_EDU_ANU_QM_TWOELECTRONINTEGRALS_H_NODEPS
