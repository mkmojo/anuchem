/*************************************************/
/* START of PumjaRasaayani */
#include <au/edu/anu/qm/PumjaRasaayani.h>

#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/lang/String.h>
#include <au/edu/anu/qm/JobInput.h>
#include <x10/lang/Exception.h>
#include <x10/lang/CheckedThrowable.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Place.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/util/Timer.h>
#include <au/edu/anu/qm/BasisFunctions.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/OneElectronIntegrals.h>
#include <au/edu/anu/qm/HartreeFockSCFMethod.h>
#include <au/edu/anu/qm/mta/Fragment.h>
#include <au/edu/anu/qm/SCFMethod.h>
#include <au/edu/anu/qm/mta/Fragmentor.h>
#include <x10/util/ListIterator.h>
#include <x10/io/File.h>
#include <x10/lang/System.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
void au::edu::anu::qm::PumjaRasaayani::_constructor(::x10::lang::String* inpFile) {
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::PumjaRasaayani* this__54241 = this;
    ::x10aux::nullCheck(this__54241)->FMGL(mol) = (::x10aux::class_cast_unchecked< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__54241)->FMGL(basisName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    this->FMGL(inputFileName) = inpFile;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    try {
        
        //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        ::au::edu::anu::qm::JobInput* inp =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::JobInput>()) ::au::edu::anu::qm::JobInput());
        
        //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        inp->FMGL(molecule) = (::x10aux::class_cast_unchecked< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        inp->FMGL(basisName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        inp->make(inpFile);
        
        //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        this->FMGL(mol) = inp->getMolecule();
        
        //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        this->FMGL(basisName) = inp->getBasisName();
    }
    catch (::x10::lang::CheckedThrowable* __exc0) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc0)) {
            ::x10::lang::Exception* e = static_cast< ::x10::lang::Exception*>(__exc0);
            {
                
                //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148845), inpFile),
                                                                                           reinterpret_cast< ::x10::lang::CheckedThrowable*>(e))));
            }
        } else {
            throw;
        }
    }
}
::au::edu::anu::qm::PumjaRasaayani* au::edu::anu::qm::PumjaRasaayani::_make(
  ::x10::lang::String* inpFile) {
    ::au::edu::anu::qm::PumjaRasaayani* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::PumjaRasaayani>()) ::au::edu::anu::qm::PumjaRasaayani();
    this_->_constructor(inpFile);
    return this_;
}



//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
void au::edu::anu::qm::PumjaRasaayani::runHF() {
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148846)));
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148847), ((x10_long)::x10aux::num_hosts)), (&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148848)), ::x10::lang::Runtime::FMGL(NTHREADS__get)()), (&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148849))));
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10aux::nullCheck(this->FMGL(mol))->transformToSNO(jd->FMGL(roZ));
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    jd->FMGL(rad) = ::x10aux::nullCheck(this->FMGL(mol))->getRadius(
                      jd->FMGL(roZ));
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148850),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((jd->FMGL(rad)) / (3.1415926535))));
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    if ((((!::x10aux::struct_equals(jd->FMGL(roOn), ((x10_int)0))) &&
        ((jd->FMGL(rad)) > (3.1415926535))) && ((jd->FMGL(maxIterations)) > (((x10_int)0)))))
    {
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148851));
    }
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    if (((::x10aux::struct_equals(jd->FMGL(roOn), ((x10_int)0))) &&
        (!::x10aux::struct_equals(jd->FMGL(roZ), 1.0)))) {
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148852),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(jd->FMGL(roZ)));
    }
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    this->printInput();
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    if (jd->FMGL(useMta)) {
        this->runMTA();
        return;
    }
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148853), ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms())));
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148854), ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfElectrons())));
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::util::Timer* timer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
    (timer)->::au::edu::anu::util::Timer::_constructor(((x10_long)3ll));
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)0ll));
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)1ll));
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::BasisFunctions bsf =  ::au::edu::anu::qm::BasisFunctions::_alloc();
    (bsf)->::au::edu::anu::qm::BasisFunctions::_constructor(
      this->FMGL(mol), this->FMGL(basisName), ::au::edu::anu::qm::PumjaRasaayani::getBasisDirName(
                                                this->FMGL(inputFileName)));
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)1ll));
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148855), ::x10aux::nullCheck(bsf->FMGL(basisFunctions))->size())));
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148856),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)1ll))))) / (1.0E9))));
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)2ll));
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148857));
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::OneElectronIntegrals* oneE =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::OneElectronIntegrals>()) ::au::edu::anu::qm::OneElectronIntegrals());
    (oneE)->::au::edu::anu::qm::OneElectronIntegrals::_constructor(
      bsf, this->FMGL(mol), this->FMGL(inputFileName));
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)2ll));
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148858),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)2ll))))) / (1.0E9))));
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::HartreeFockSCFMethod* hfscf =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::HartreeFockSCFMethod>()) ::au::edu::anu::qm::HartreeFockSCFMethod());
    (hfscf)->::au::edu::anu::qm::HartreeFockSCFMethod::_constructor(
      this->FMGL(mol), oneE, bsf);
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    hfscf->scf();
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148859),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
}

//#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
void au::edu::anu::qm::PumjaRasaayani::runHF(::au::edu::anu::qm::mta::Fragment* fragment) {
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::util::Timer* timer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
    (timer)->::au::edu::anu::util::Timer::_constructor(((x10_long)3ll));
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)0ll));
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148860)));
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(fragment));
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)1ll));
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::BasisFunctions bsf =  ::au::edu::anu::qm::BasisFunctions::_alloc();
    (bsf)->::au::edu::anu::qm::BasisFunctions::_constructor(
      reinterpret_cast< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(fragment),
      this->FMGL(basisName), ::au::edu::anu::qm::PumjaRasaayani::getBasisDirName(
                               this->FMGL(inputFileName)));
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148861), ::x10aux::nullCheck(bsf->FMGL(basisFunctions))->size()), (&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148862))));
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)1ll));
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148863),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)1ll))))) / (1.0E9))));
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)2ll));
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::OneElectronIntegrals* oneE =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::OneElectronIntegrals>()) ::au::edu::anu::qm::OneElectronIntegrals());
    (oneE)->::au::edu::anu::qm::OneElectronIntegrals::_constructor(
      bsf, reinterpret_cast< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(fragment),
      this->FMGL(inputFileName));
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148864)));
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)2ll));
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148865),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)2ll))))) / (1.0E9))));
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::HartreeFockSCFMethod* hfscf =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::HartreeFockSCFMethod>()) ::au::edu::anu::qm::HartreeFockSCFMethod());
    (hfscf)->::au::edu::anu::qm::HartreeFockSCFMethod::_constructor(
      reinterpret_cast< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(fragment),
      oneE, bsf);
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    hfscf->scf();
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
    
    //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148866),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10aux::nullCheck(fragment)->FMGL(energy) = hfscf->getEnergy();
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
void au::edu::anu::qm::PumjaRasaayani::runMTA() {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::util::Timer* timer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
    (timer)->::au::edu::anu::util::Timer::_constructor(((x10_long)1ll));
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::start(((x10_long)0ll));
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::mta::Fragmentor* fragmentor =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragmentor>()) ::au::edu::anu::qm::mta::Fragmentor());
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    fragmentor->FMGL(rGoodness) = 5.67;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    fragmentor->FMGL(maxFragSize) = ((x10_int)30);
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragments =
      fragmentor->fragment(this->FMGL(mol));
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* fragment__47191;
        for (fragment__47191 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(::x10aux::nullCheck(fragments)->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(fragment__47191));
             ) {
            ::au::edu::anu::qm::mta::Fragment* fragment =
              ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(fragment__47191));
            
            //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
            this->runHF(fragment);
        }
    }
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    x10_double ene = 0.0;
    
    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* fragment__47193;
        for (fragment__47193 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(::x10aux::nullCheck(fragments)->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(fragment__47193));
             ) {
            ::au::edu::anu::qm::mta::Fragment* fragment =
              ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(fragment__47193));
            
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
            ene = ((ene) + (((::x10aux::nullCheck(fragment)->FMGL(energy)) * (((x10_double) (::x10aux::nullCheck(fragment)->FMGL(cardinalitySign)))))));
        }
    }
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    timer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148867),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(ene));
    
    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148868),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
}

//#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
void au::edu::anu::qm::PumjaRasaayani::printInput() {
    
    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148869));
    
    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148870)));
    
    //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148869));
    
    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(mol))->getName()));
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148871), this->FMGL(basisName))));
    
    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148872)));
    
    //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(this->FMGL(mol), (&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148873))));
    
    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148874), jd->FMGL(scfMethod))));
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148875), jd->FMGL(maxIterations))));
    
    //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148876), jd->FMGL(energyTolerance))));
    
    //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148877), jd->FMGL(diisStartThreshold))));
    
    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148878), jd->FMGL(diisConvergenceThreshold))));
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148879), jd->FMGL(diisSubspaceSize))));
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148880), jd->FMGL(guess))));
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    if ((!::x10aux::struct_equals(jd->FMGL(gMatrixParallelScheme),
                                  ((x10_int)4)))) {
        
        //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148881), jd->FMGL(gMatrixParallelScheme))));
    }
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    if (jd->FMGL(useMta)) {
        
        //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148882)));
    }
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148869));
}

//#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
::x10::lang::String* au::edu::anu::qm::PumjaRasaayani::getBasisDirName(
  ::x10::lang::String* inpFile) {
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::File* inputFile =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
    (inputFile)->::x10::io::File::_constructor(inpFile);
    
    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::io::File* parent = inputFile->getParentFile();
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    ::x10::lang::String* inputFileDir = (::x10aux::struct_equals(parent,
                                                                 reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? ((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148847))
      : (::x10::lang::String::__plus(::x10aux::nullCheck(parent)->getPath(), ((x10_char)'/')));
    
    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    return ::x10::lang::String::__plus(inputFileDir, (&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148883));
    
}

//#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
void au::edu::anu::qm::PumjaRasaayani::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
    if ((!::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(args)->FMGL(size)),
                                  ((x10_long)1ll)))) {
        
        //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::PumjaRasaayani_Strings::sl__148884)));
        
        //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        ::x10::lang::System::setExitCode(((x10_int)1));
    } else {
        
        //#line 180 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        ::au::edu::anu::qm::PumjaRasaayani* qmApp =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::PumjaRasaayani>()) ::au::edu::anu::qm::PumjaRasaayani());
        (qmApp)->::au::edu::anu::qm::PumjaRasaayani::_constructor(
          ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
            ((x10_long)0ll)));
        
        //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
        qmApp->runHF();
    }
    
}

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PumjaRasaayani.x10"
::au::edu::anu::qm::PumjaRasaayani* au::edu::anu::qm::PumjaRasaayani::au__edu__anu__qm__PumjaRasaayani____this__au__edu__anu__qm__PumjaRasaayani(
  ) {
    return this;
    
}
void au::edu::anu::qm::PumjaRasaayani::__fieldInitializers_au_edu_anu_qm_PumjaRasaayani(
  ) {
    this->FMGL(mol) = (::x10aux::class_cast_unchecked< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(basisName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::PumjaRasaayani::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::PumjaRasaayani::_deserializer);

void au::edu::anu::qm::PumjaRasaayani::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mol));
    buf.write(this->FMGL(inputFileName));
    buf.write(this->FMGL(basisName));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::PumjaRasaayani::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::PumjaRasaayani* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::PumjaRasaayani>()) ::au::edu::anu::qm::PumjaRasaayani();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::PumjaRasaayani::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(mol) = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
    FMGL(inputFileName) = buf.read< ::x10::lang::String*>();
    FMGL(basisName) = buf.read< ::x10::lang::String*>();
}

::x10aux::RuntimeType au::edu::anu::qm::PumjaRasaayani::rtt;
void au::edu::anu::qm::PumjaRasaayani::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.PumjaRasaayani",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148847("");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148860("\nfragment:");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148876("scf_converge ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148867("Final MTA energy: %.6f a.u.\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148845("Unable to read input file: ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148875("scf_max ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148852("WARNING: Coulomb RO is off: roZ=%f is not necessary.\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148848(" places, ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148883("basis");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148863("\tTime for setting up basis functions: %.3f seconds\n\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148856("\tTime for setting up basis functions: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148853("Number of atoms: ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148868("\n-End of MTA run-\n\nTotal time since start: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148850("rad/PI=%f\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148849(" threads per place");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148879("diis_subspace_size ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148862(" basis functions.");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148846("PumjaRasaayani shunya.tri, Quantum Chemistry program in x10, v0.4");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148855("Number of basis functions: ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148864("\nComputed one-electron integrals.");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148854("Number of electrons: ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148882("fragment mta");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148872("molecule");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148884("usage: pumjarasaayani <inputFile>");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148873("end");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148861("\nUsing ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148878("diis_converge ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148857("Computing 1e integrals...\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148866("\nTotal time since start: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148865("\tTime for computing 1E integrals: %.3f seconds\n\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148859("\n\nTotal time since start: %.3f seconds\n\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148870("Input (including defaults):");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148874("scf_method ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148871("basis ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148880("guess ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148877("diis_start ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148869("----------------------------------------------------------\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148851("WARNING: Full-Coulomb RO is not valid for rad>PI\n");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148881("gmat_parallel_scheme ");
::x10::lang::String au::edu::anu::qm::PumjaRasaayani_Strings::sl__148858("\tTime for computing 1E integrals: %.3f seconds\n");

/* END of PumjaRasaayani */
/*************************************************/
