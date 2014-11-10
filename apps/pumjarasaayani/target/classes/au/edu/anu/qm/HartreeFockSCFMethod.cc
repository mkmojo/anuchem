/*************************************************/
/* START of HartreeFockSCFMethod */
#include <au/edu/anu/qm/HartreeFockSCFMethod.h>

#include <au/edu/anu/qm/SCFMethod.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <au/edu/anu/qm/OneElectronIntegrals.h>
#include <au/edu/anu/qm/BasisFunctions.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <au/edu/anu/util/StatisticalTimer.h>
#include <x10/lang/Int.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/qm/HCore.h>
#include <au/edu/anu/qm/Overlap.h>
#include <x10/matrix/Matrix.h>
#include <au/edu/anu/qm/GMatrix.h>
#include <au/edu/anu/qm/ROFockMethod.h>
#include <x10/matrix/DenseMatrix.h>
#include <au/edu/anu/qm/MolecularOrbitals.h>
#include <au/edu/anu/qm/Density.h>
#include <au/edu/anu/qm/Fock.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/DIISFockExtrapolator.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
void au::edu::anu::qm::HartreeFockSCFMethod::_constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                          ::au::edu::anu::qm::OneElectronIntegrals* oneE,
                                                          ::au::edu::anu::qm::BasisFunctions bfs) {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    (this)->::au::edu::anu::qm::SCFMethod::_constructor(mol,
                                                        oneE,
                                                        bfs);
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::HartreeFockSCFMethod* this__108453 =
      this;
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    this->FMGL(roZ) = jd->FMGL(roZ);
}
::au::edu::anu::qm::HartreeFockSCFMethod* au::edu::anu::qm::HartreeFockSCFMethod::_make(
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::au::edu::anu::qm::OneElectronIntegrals* oneE, ::au::edu::anu::qm::BasisFunctions bfs)
{
    ::au::edu::anu::qm::HartreeFockSCFMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::HartreeFockSCFMethod>()) ::au::edu::anu::qm::HartreeFockSCFMethod();
    this_->_constructor(mol, oneE, bfs);
    return this_;
}



//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
void au::edu::anu::qm::HartreeFockSCFMethod::scf() {
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::util::StatisticalTimer* timer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer());
    (timer)->::au::edu::anu::util::StatisticalTimer::_constructor(
      ((x10_long)6ll));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_int noOfElectrons = ::x10aux::nullCheck(this->FMGL(molecule))->getNumberOfElectrons();
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if (((!::x10aux::struct_equals(((noOfElectrons) % ::x10aux::zeroCheck(((x10_int)2))),
                                   ((x10_int)0))) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(molecule))->getMultiplicity(),
                                                                               ((x10_int)1)))))
    {
        
        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149200)));
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        return;
    }
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_long noOfOccupancies = ((((x10_long)(noOfElectrons))) / ::x10aux::zeroCheck(((x10_long)2ll)));
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_double nuclearEnergy = this->getNuclearEnergy();
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149201),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((nuclearEnergy) / (this->FMGL(roZ)))));
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    this->FMGL(energy) = 0.0;
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_boolean converged = false;
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_double oldEnergy = 0.0;
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::HCore* hCore = ::x10aux::nullCheck(this->FMGL(oneE))->getHCore();
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::Overlap* overlap = ::x10aux::nullCheck(this->FMGL(oneE))->getOverlap();
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_long N = ::x10aux::nullCheck(hCore)->FMGL(N);
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::GMatrix* gMatrix;
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::ROFockMethod* roFockMethod;
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::matrix::DenseMatrix* gMatrixRo;
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_double roThresh = jd->FMGL(roThresh);
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_double thresh = jd->FMGL(thresh);
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if ((((jd->FMGL(roOn)) > (((x10_int)0))) && ((this->FMGL(maxIteration)) > (((x10_int)0)))))
    {
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        roFockMethod = (__extension__ ({
            ::au::edu::anu::qm::ROFockMethod* alloc__53253 =
               (new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod>()) ::au::edu::anu::qm::ROFockMethod());
            (alloc__53253)->::au::edu::anu::qm::ROFockMethod::_constructor(
              N, this->FMGL(bfs), this->FMGL(molecule), noOfOccupancies,
              0.0, ((this->FMGL(roZ)) * (roThresh)));
            alloc__53253;
        }))
        ;
        
        //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        gMatrixRo = (__extension__ ({
            ::x10::matrix::DenseMatrix* alloc__53254 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
            (alloc__53254)->::x10::matrix::DenseMatrix::_constructor(
              N, N);
            alloc__53254;
        }))
        ;
    } else {
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        roFockMethod = (::x10aux::class_cast_unchecked< ::au::edu::anu::qm::ROFockMethod*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        gMatrixRo = (::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if (((((::x10aux::struct_equals(jd->FMGL(roOn), ((x10_int)0))) ||
          (::x10aux::struct_equals(jd->FMGL(compareRo), true)))) &&
        ((this->FMGL(maxIteration)) > (((x10_int)0))))) {
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        gMatrix = (__extension__ ({
            ::au::edu::anu::qm::GMatrix* alloc__53255 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix>()) ::au::edu::anu::qm::GMatrix());
            (alloc__53255)->::au::edu::anu::qm::GMatrix::_constructor(
              N, this->FMGL(bfs), this->FMGL(molecule), 0.0,
              ((this->FMGL(roZ)) * (thresh)));
            alloc__53255;
        }))
        ;
    } else {
        
        //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        gMatrix = (::x10aux::class_cast_unchecked< ::au::edu::anu::qm::GMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::MolecularOrbitals* mos =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::MolecularOrbitals>()) ::au::edu::anu::qm::MolecularOrbitals());
    (mos)->::au::edu::anu::qm::MolecularOrbitals::_constructor(
      N);
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::Density* density =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::Density>()) ::au::edu::anu::qm::Density());
    (density)->::au::edu::anu::qm::Density::_constructor(
      N, noOfOccupancies);
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::Fock* fock;
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::start(((x10_long)(((x10_int)5))));
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149202));
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if (::x10aux::equals(jd->FMGL(guess),::au::edu::anu::qm::JobDefaults::FMGL(GUESS_SAD__get)()))
    {
        
        //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149203));
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        density->applyGuess((__extension__ ({
                                ::au::edu::anu::qm::BasisFunctions this__108198 =
                                  this->FMGL(bfs);
                                this__108198->FMGL(SADMatrix);
                            }))
                            );
        
        //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        mos->compute(reinterpret_cast< ::x10::matrix::DenseMatrix*>(hCore),
                     overlap);
    } else 
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if (::x10aux::equals(jd->FMGL(guess),::au::edu::anu::qm::JobDefaults::FMGL(GUESS_CORE__get)()))
    {
        
        //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149204));
        
        //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        mos->compute(reinterpret_cast< ::x10::matrix::DenseMatrix*>(hCore),
                     overlap);
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        density->compute(mos);
    } else {
        
        //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149205));
    }
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::stop(((x10_long)(((x10_int)5))));
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149206), ((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                                       ((x10_long)(((x10_int)5))))))) / (1.0E9))), (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149207))));
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if (((this->FMGL(maxIteration)) > (((x10_int)0)))) {
        
        //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149208));
        
        //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        fock = (__extension__ ({
            ::au::edu::anu::qm::Fock* alloc__53256 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::Fock>()) ::au::edu::anu::qm::Fock());
            (alloc__53256)->::au::edu::anu::qm::Fock::_constructor(
              N);
            alloc__53256;
        }))
        ;
        
        //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::au::edu::anu::qm::DIISFockExtrapolator* diis = 
        (new (::x10aux::alloc_z< ::au::edu::anu::qm::DIISFockExtrapolator>()) ::au::edu::anu::qm::DIISFockExtrapolator());
        (diis)->::au::edu::anu::qm::DIISFockExtrapolator::_constructor(
          N);
        
        //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        {
            x10_int scfIteration;
            for (scfIteration = ((x10_int)0); ((scfIteration) < (this->FMGL(maxIteration)));
                 scfIteration = ((scfIteration) + (((x10_int)1))))
            {
                
                //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                if (((((x10_long)(scfIteration))) > (((x10_long)0ll))))
                {
                    
                    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    density->compute(mos);
                }
                
                //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                if (((((x10_long)(jd->FMGL(roOn)))) > (((x10_long)0ll))))
                {
                    
                    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    ::au::edu::anu::qm::ROFockMethod* t__108454 =
                      roFockMethod;
                    ::au::edu::anu::qm::Density* density__108455 =
                      density;
                    ::au::edu::anu::qm::MolecularOrbitals* mos__108456 =
                      mos;
                    ::x10::matrix::DenseMatrix* gMatrix__108457 =
                      gMatrixRo;
                    if (!(((((::x10aux::struct_equals(::x10aux::nullCheck(density__108455)->FMGL(N),
                                                      ::x10aux::nullCheck(t__108454)->FMGL(N))) &&
                        (::x10aux::struct_equals(::x10aux::nullCheck(mos__108456)->FMGL(N),
                                                 ::x10aux::nullCheck(t__108454)->FMGL(N)))) &&
                        (::x10aux::struct_equals(::x10aux::nullCheck(gMatrix__108457)->FMGL(M),
                                                 ::x10aux::nullCheck(t__108454)->FMGL(N)))) &&
                        (::x10aux::struct_equals(::x10aux::nullCheck(gMatrix__108457)->FMGL(N),
                                                 ::x10aux::nullCheck(t__108454)->FMGL(N))))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149209))));
                    }
                    ::x10aux::nullCheck(t__108454)->compute(
                      density__108455, mos__108456, gMatrix__108457);
                    
                    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if ((::x10aux::struct_equals(jd->FMGL(compareRo),
                                                 true))) {
                        
                        //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10aux::nullCheck(gMatrix)->compute(
                          density);
                        
                        //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149210)));
                        
                        //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::Any*>(gMatrix));
                        
                        //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149211)));
                        
                        //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::Any*>(gMatrixRo));
                    }
                    
                } else {
                    
                    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    ::x10aux::nullCheck(gMatrix)->compute(
                      density);
                }
                
                //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                timer->au::edu::anu::util::StatisticalTimer::start(
                  ((x10_long)(((x10_int)3))));
                
                //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                if (((((x10_long)(jd->FMGL(roOn)))) > (((x10_long)0ll))))
                {
                    ::x10aux::nullCheck(fock)->compute(hCore,
                                                       gMatrixRo);
                } else {
                    
                    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    ::x10aux::nullCheck(fock)->compute(hCore,
                                                       reinterpret_cast< ::x10::matrix::DenseMatrix*>(gMatrix));
                }
                
                //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                fock = diis->next(fock, overlap, density);
                
                //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                timer->au::edu::anu::util::StatisticalTimer::stop(
                  ((x10_long)(((x10_int)3))));
                
                //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149212), ((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                                                   ((x10_long)(((x10_int)3))))))) / (1.0E9))), (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149207))));
                
                //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                timer->au::edu::anu::util::StatisticalTimer::start(
                  ((x10_long)(((x10_int)4))));
                
                //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                mos->compute(reinterpret_cast< ::x10::matrix::DenseMatrix*>(fock),
                             overlap);
                
                //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                timer->au::edu::anu::util::StatisticalTimer::stop(
                  ((x10_long)(((x10_int)4))));
                
                //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149213), ((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                                                   ((x10_long)(((x10_int)4))))))) / (1.0E9))), (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149207))));
                
                //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                x10_double eOne = ((0.5) * (::x10aux::nullCheck(::x10aux::nullCheck(reinterpret_cast< ::x10::matrix::DenseMatrix*>(density->clone()))->mult(
                                                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(density),
                                                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(hCore)))->trace()));
                
                //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                x10_double eTwo = ((0.5) * (::x10aux::nullCheck(::x10aux::nullCheck(reinterpret_cast< ::x10::matrix::DenseMatrix*>(density->clone()))->mult(
                                                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(density),
                                                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(fock)))->trace()));
                
                //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                this->FMGL(energy) = ((((eOne) + (eTwo))) + (nuclearEnergy));
                
                //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                ::x10::io::Console::FMGL(OUT__get)()->printf(
                  (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149214),
                  ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(scfIteration),
                  ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(energy)) / (this->FMGL(roZ)))));
                
                //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                if (((((x10_long)(scfIteration))) > (((x10_long)0ll))))
                {
                    
                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->printf(
                      (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149215),
                      ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((this->FMGL(energy)) - (oldEnergy))) / (this->FMGL(roZ)))));
                } else {
                    
                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if (((::x10aux::struct_equals(jd->FMGL(roOn),
                                                  ((x10_int)0))) ||
                        (::x10aux::struct_equals(jd->FMGL(compareRo),
                                                 true))))
                    {
                        
                        //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10aux::nullCheck(gMatrix)->FMGL(timer)->au::edu::anu::util::StatisticalTimer::clear(
                          ((x10_long)0ll));
                    }
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if (((jd->FMGL(roOn)) > (((x10_int)0))))
                    {
                        
                        //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                        ::x10aux::nullCheck(roFockMethod)->FMGL(timer)->au::edu::anu::util::StatisticalTimer::clear(
                          ((x10_long)0ll));
                    }
                    
                }
                
                //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                ::x10::io::Console::FMGL(OUT__get)()->printf(
                  (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149216));
                
                //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                if ((((((x10_long)(scfIteration))) > (((x10_long)0ll))) &&
                    diis->isConverged())) {
                    
                    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    converged = true;
                    
                    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    break;
                }
                
                //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                oldEnergy = this->FMGL(energy);
            }
        }
        
        //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        if (!(converged)) {
            
            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149217), this->FMGL(maxIteration)), (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149218))));
        } else {
            
            //#line 195 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149219),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(energy)) / (this->FMGL(roZ)))),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(roZ)));
        }
        
        //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        if (((::x10aux::struct_equals(jd->FMGL(roOn), ((x10_int)0))) ||
            jd->FMGL(compareRo))) {
            
            //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149220)));
            
            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
            ::x10aux::nullCheck(gMatrix)->FMGL(timer)->au::edu::anu::util::StatisticalTimer::printSeconds();
        }
        
        //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        if (((jd->FMGL(roOn)) > (((x10_int)0)))) {
            
            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149221)));
            
            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
            ::x10aux::nullCheck(roFockMethod)->FMGL(timer)->au::edu::anu::util::StatisticalTimer::printSeconds();
        }
        
    }
    
    //#line 208 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149222));
    
    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    x10_double ecount = 0.0;
    x10_double maxDen = 0.0;
    x10_double minDen = 1.0E100;
    
    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (N));
             i = ((i) + (((x10_int)1)))) {
            {
                x10_int j;
                for (j = i; ((((x10_long)(j))) < (N)); j =
                                                         ((j) + (((x10_int)1))))
                {
                    
                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    x10_double contrib = (((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__108435 = ((x10_long)(i));
                        x10_long y__108436 = ((x10_long)(j));
                        ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__108436) * (density->FMGL(M)))) + (x__108435)));
                    }))
                    ) * ((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__108437 = ((x10_long)(i));
                        x10_long y__108438 = ((x10_long)(j));
                        ::x10aux::nullCheck(::x10aux::nullCheck(overlap)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__108438) * (::x10aux::nullCheck(overlap)->FMGL(M)))) + (x__108437)));
                    }))
                    ));
                    
                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    ecount = ((ecount) + (contrib));
                    
                    //#line 214 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if ((!::x10aux::struct_equals(i, j)))
                    {
                        ecount = ((ecount) + (contrib));
                    }
                    
                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if ((((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__108439 = ((x10_long)(i));
                            x10_long y__108440 = ((x10_long)(j));
                            ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__108440) * (density->FMGL(M)))) + (x__108439)));
                        }))
                        ) > (100.0))) {
                        ::x10::io::Console::FMGL(OUT__get)()->printf(
                          (&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149223),
                          ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(i),
                          ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(j),
                          ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((__extension__ ({
                              
                              //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                              x10_long x__108441 = ((x10_long)(i));
                              x10_long y__108442 = ((x10_long)(j));
                              ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                ((((y__108442) * (density->FMGL(M)))) + (x__108441)));
                          }))
                          ), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((__extension__ ({
                              
                              //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                              x10_long x__108443 = ((x10_long)(i));
                              x10_long y__108444 = ((x10_long)(j));
                              ::x10aux::nullCheck(::x10aux::nullCheck(overlap)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                ((((y__108444) * (::x10aux::nullCheck(overlap)->FMGL(M)))) + (x__108443)));
                          }))
                          ));
                    }
                    
                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if ((((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__108445 = ((x10_long)(i));
                            x10_long y__108446 = ((x10_long)(j));
                            ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__108446) * (density->FMGL(M)))) + (x__108445)));
                        }))
                        ) > (maxDen))) {
                        maxDen = (__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__108447 = ((x10_long)(i));
                            x10_long y__108448 = ((x10_long)(j));
                            ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__108448) * (density->FMGL(M)))) + (x__108447)));
                        }))
                        ;
                    } else 
                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
                    if ((((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__108449 = ((x10_long)(i));
                            x10_long y__108450 = ((x10_long)(j));
                            ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__108450) * (density->FMGL(M)))) + (x__108449)));
                        }))
                        ) < (minDen))) {
                        minDen = (__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__108451 = ((x10_long)(i));
                            x10_long y__108452 = ((x10_long)(j));
                            ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__108452) * (density->FMGL(M)))) + (x__108451)));
                        }))
                        ;
                    }
                    
                }
            }
            
        }
    }
    
    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149224),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(ecount),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(maxDen),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(minDen));
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149225));
    
    //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::au::edu::anu::qm::ROFockMethod* roFockMethodL =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod>()) ::au::edu::anu::qm::ROFockMethod());
    (roFockMethodL)->::au::edu::anu::qm::ROFockMethod::_constructor(
      N, this->FMGL(bfs), this->FMGL(molecule), noOfOccupancies,
      ((jd->FMGL(roZ)) * (jd->FMGL(omega))), ((this->FMGL(roZ)) * (jd->FMGL(roThresh))));
    
    //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    ::x10::matrix::DenseMatrix* gMatrixRoL =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (gMatrixRoL)->::x10::matrix::DenseMatrix::_constructor(
      N, N);
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    roFockMethodL->compute(density, mos, gMatrixRoL);
    
    //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
    if (jd->FMGL(compareRo)) {
        
        //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149226));
        
        //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        ::au::edu::anu::qm::GMatrix* gMatrixL =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix>()) ::au::edu::anu::qm::GMatrix());
        (gMatrixL)->::au::edu::anu::qm::GMatrix::_constructor(
          N, this->FMGL(bfs), this->FMGL(molecule), ((jd->FMGL(roZ)) * (jd->FMGL(omega))),
          ((this->FMGL(roZ)) * (jd->FMGL(thresh))));
        
        //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
        gMatrixL->compute(density);
    }
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/HartreeFockSCFMethod.x10"
::au::edu::anu::qm::HartreeFockSCFMethod* au::edu::anu::qm::HartreeFockSCFMethod::au__edu__anu__qm__HartreeFockSCFMethod____this__au__edu__anu__qm__HartreeFockSCFMethod(
  ) {
    return this;
    
}
void au::edu::anu::qm::HartreeFockSCFMethod::__fieldInitializers_au_edu_anu_qm_HartreeFockSCFMethod(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::HartreeFockSCFMethod::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::HartreeFockSCFMethod::_deserializer);

void au::edu::anu::qm::HartreeFockSCFMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::qm::SCFMethod::_serialize_body(buf);
    buf.write(this->FMGL(roZ));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::HartreeFockSCFMethod::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::HartreeFockSCFMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::HartreeFockSCFMethod>()) ::au::edu::anu::qm::HartreeFockSCFMethod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::HartreeFockSCFMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::SCFMethod::_deserialize_body(buf);
    FMGL(roZ) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::qm::HartreeFockSCFMethod::rtt;
void au::edu::anu::qm::HartreeFockSCFMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::qm::SCFMethod>()};
    rtt.initStageTwo("au.edu.anu.qm.HartreeFockSCFMethod",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149213("    Time to form MOS: ");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149214("Cycle #%i Total energy = %.10f\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149212("    Time to construct Fock: ");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149215(" (%.6f)");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149224("ecount=%e maxDen=%e minDen=%e\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149204(" (MOs & density = core)...\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149208("Starting SCF procedure...\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149218(" cycles!");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149211("G Mat RO");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149207(" seconds");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149219("SCF converged. Final SCF energy = %.6f a.u.\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149225("Long-range - RO\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149221("ROFockMethod construction timings:");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149209("!(density$52905.N == t$52904.N && mos$52906.N == t$52904.N && gMatrix$52907.M == t$52904.N && gMatrix$52907.N == t$52904.N)");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149223("density(%d,%d)=%e, s=%e\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149205("(no guess)...\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149200("Currently supports only closed shell calculations!");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149217("SCF did not converge in ");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149226("Long-range - Conventional\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149201("Nuclear repulsion energy = %.10f a.u.\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149203(" (density = SAD, MOs = core)...\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149216("\n----------------------------------------------------------\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149220("GMatrix construction timings:");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149206("    Time to construct guess density & MOs: ");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149222("==========================================================\n");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149210("G Mat");
::x10::lang::String au::edu::anu::qm::HartreeFockSCFMethod_Strings::sl__149202("Making guess orbitals ");

/* END of HartreeFockSCFMethod */
/*************************************************/
