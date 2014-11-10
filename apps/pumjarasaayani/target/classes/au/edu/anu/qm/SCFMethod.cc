/*************************************************/
/* START of SCFMethod */
#include <au/edu/anu/qm/SCFMethod.h>

#include <au/edu/anu/qm/BasisFunctions.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <au/edu/anu/qm/OneElectronIntegrals.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
void au::edu::anu::qm::SCFMethod::_constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                               ::au::edu::anu::qm::OneElectronIntegrals* oneE,
                                               ::au::edu::anu::qm::BasisFunctions bfs) {
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    ::au::edu::anu::qm::SCFMethod* this__108469 = this;
    ::x10aux::nullCheck(this__108469)->FMGL(maxIteration) =
      ((x10_int)0);
    ::x10aux::nullCheck(this__108469)->FMGL(energyTolerance) =
      0.0;
    ::x10aux::nullCheck(this__108469)->FMGL(energy) = 0.0;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(molecule) = mol;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(oneE) = oneE;
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(bfs) = bfs;
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(maxIteration) = jd->FMGL(maxIterations);
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(energyTolerance) = jd->FMGL(energyTolerance);
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(energy) = 0.0;
}


//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"

//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
x10_int au::edu::anu::qm::SCFMethod::getMaxIteration() {
    return this->FMGL(maxIteration);
    
}

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
void au::edu::anu::qm::SCFMethod::setMaxIteration(x10_int mxIter) {
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(maxIteration) = mxIter;
}

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
x10_double au::edu::anu::qm::SCFMethod::getEnergyTolerance(
  ) {
    return this->FMGL(energyTolerance);
    
}

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
void au::edu::anu::qm::SCFMethod::setEnergyTolerance(x10_double eneTol) {
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    this->FMGL(energyTolerance) = eneTol;
}

//#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
x10_double au::edu::anu::qm::SCFMethod::getEnergy() {
    return this->FMGL(energy);
    
}

//#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
x10_double au::edu::anu::qm::SCFMethod::getNuclearEnergy(
  ) {
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    x10_double eNuke = 0.0;
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    x10_int i;
    x10_int j;
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(molecule))->getNumberOfAtoms();
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    ::au::edu::anu::qm::QMAtom* atomI;
    ::au::edu::anu::qm::QMAtom* atomJ;
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    ::x10::lang::Rail< x10_int >* atomicNumbers = ::x10::lang::Rail< x10_int >::_make(noOfAtoms);
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfAtoms));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
            atomicNumbers->x10::lang::Rail< x10_int >::__set(
              ((x10_long)(i)), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(molecule))->getAtom(
                                                     ((x10_long)(i))))->FMGL(species));
        }
    }
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfAtoms));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
            atomI = ::x10aux::nullCheck(this->FMGL(molecule))->getAtom(
                      ((x10_long)(i)));
            
            //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
            {
                for (j = ((x10_int)0); ((j) < (i)); j = ((j) + (((x10_int)1))))
                {
                    
                    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
                    atomJ = ::x10aux::nullCheck(this->FMGL(molecule))->getAtom(
                              ((x10_long)(j)));
                    
                    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
                    eNuke = ((eNuke) + (((((x10_double) (((atomicNumbers->x10::lang::Rail< x10_int >::__apply(
                                                             ((x10_long)(i)))) * (atomicNumbers->x10::lang::Rail< x10_int >::__apply(
                                                                                    ((x10_long)(j)))))))) / ((__extension__ ({
                        
                        //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
                        ::x10x::vector::Point3d this__108462 =
                          ::x10aux::nullCheck(atomI)->FMGL(centre);
                        
                        //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d b__108461 =
                          ::x10aux::nullCheck(atomJ)->FMGL(centre);
                        ::x10::lang::MathNatives::sqrt((__extension__ ({
                            
                            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__108463 =
                              b__108461;
                            x10_double ret__108467;
                            
                            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double di__108470 = ((this__108462->FMGL(i)) - (b__108463->FMGL(i)));
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double dj__108471 = ((this__108462->FMGL(j)) - (b__108463->FMGL(j)));
                            
                            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double dk__108472 = ((this__108462->FMGL(k)) - (b__108463->FMGL(k)));
                            
                            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ret__108467 = ((((((di__108470) * (di__108470))) + (((dj__108471) * (dj__108471))))) + (((dk__108472) * (dk__108472))));
                            ret__108467;
                        }))
                        );
                    }))
                    ))));
                }
            }
            
        }
    }
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
    return eNuke;
    
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/SCFMethod.x10"
::au::edu::anu::qm::SCFMethod* au::edu::anu::qm::SCFMethod::au__edu__anu__qm__SCFMethod____this__au__edu__anu__qm__SCFMethod(
  ) {
    return this;
    
}
void au::edu::anu::qm::SCFMethod::__fieldInitializers_au_edu_anu_qm_SCFMethod(
  ) {
    this->FMGL(maxIteration) = ((x10_int)0);
    this->FMGL(energyTolerance) = 0.0;
    this->FMGL(energy) = 0.0;
}
void au::edu::anu::qm::SCFMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(molecule));
    buf.write(this->FMGL(oneE));
    buf.write(this->FMGL(bfs));
    buf.write(this->FMGL(maxIteration));
    buf.write(this->FMGL(energyTolerance));
    buf.write(this->FMGL(energy));
    
}

void au::edu::anu::qm::SCFMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(molecule) = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
    FMGL(oneE) = buf.read< ::au::edu::anu::qm::OneElectronIntegrals*>();
    FMGL(bfs) = buf.read< ::au::edu::anu::qm::BasisFunctions>();
    FMGL(maxIteration) = buf.read<x10_int>();
    FMGL(energyTolerance) = buf.read<x10_double>();
    FMGL(energy) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::qm::SCFMethod::rtt;
void au::edu::anu::qm::SCFMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.SCFMethod",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SCFMethod */
/*************************************************/
