#ifndef __AU_EDU_ANU_QM_SCFMETHOD_H
#define __AU_EDU_ANU_QM_SCFMETHOD_H

#include <x10rt.h>


#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#include <au/edu/anu/qm/BasisFunctions.h>
#undef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#include <au/edu/anu/qm/BasisFunctions.h>
#undef AU_EDU_ANU_QM_BASISFUNCTIONS_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class QMAtom;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class OneElectronIntegrals;
} } } } 
namespace au { namespace edu { namespace anu { namespace qm { 
class JobDefaults;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace qm { 

class SCFMethod : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* FMGL(molecule);
    
    ::au::edu::anu::qm::OneElectronIntegrals* FMGL(oneE);
    
    ::au::edu::anu::qm::BasisFunctions FMGL(bfs);
    
    x10_int FMGL(maxIteration);
    
    x10_double FMGL(energyTolerance);
    
    x10_double FMGL(energy);
    
    void _constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                      ::au::edu::anu::qm::OneElectronIntegrals* oneE,
                      ::au::edu::anu::qm::BasisFunctions bfs);
    
    virtual void scf() = 0;
    virtual x10_int getMaxIteration();
    virtual void setMaxIteration(x10_int mxIter);
    virtual x10_double getEnergyTolerance();
    virtual void setEnergyTolerance(x10_double eneTol);
    virtual x10_double getEnergy();
    virtual x10_double getNuclearEnergy();
    virtual ::au::edu::anu::qm::SCFMethod* au__edu__anu__qm__SCFMethod____this__au__edu__anu__qm__SCFMethod(
      );
    virtual void __fieldInitializers_au_edu_anu_qm_SCFMethod(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_QM_SCFMETHOD_H

namespace au { namespace edu { namespace anu { namespace qm { 
class SCFMethod;
} } } } 

#ifndef AU_EDU_ANU_QM_SCFMETHOD_H_NODEPS
#define AU_EDU_ANU_QM_SCFMETHOD_H_NODEPS
#ifndef AU_EDU_ANU_QM_SCFMETHOD_H_GENERICS
#define AU_EDU_ANU_QM_SCFMETHOD_H_GENERICS
#endif // AU_EDU_ANU_QM_SCFMETHOD_H_GENERICS
#endif // __AU_EDU_ANU_QM_SCFMETHOD_H_NODEPS
