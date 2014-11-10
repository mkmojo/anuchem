/*************************************************/
/* START of TestElectrostatic */
#include <au/edu/anu/chem/mm/TestElectrostatic.h>

#ifndef AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_TestElectrostatic__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_TestElectrostatic__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 75 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        x10_long chunkSize = ((((numAtoms) / ::x10aux::zeroCheck(((x10_long)::x10aux::num_hosts)))) + (((((numAtoms) % ::x10aux::zeroCheck(((x10_long)::x10aux::num_hosts)))) > (((x10_long)0ll)))
          ? (((x10_long)1ll)) : (((x10_long)0ll))));
        
        //#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        x10_long startHere = ((::x10::lang::Place::_make(::x10aux::here)->FMGL(id)) * (chunkSize));
        
        //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        x10_long endHere = (__extension__ ({
            
            //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
            x10_long a__25777 = numAtoms;
            x10_long b__25778 = ((((::x10::lang::Place::_make(::x10aux::here)->FMGL(id)) + (((x10_long)1ll)))) * (chunkSize));
            ((a__25777) < (b__25778)) ? (a__25777) : (b__25778);
        }))
        ;
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        x10_long numAtomsHere = (__extension__ ({
            
            //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
            x10_long b__25780 = ((((endHere) - (startHere))) - (((x10_long)1ll)));
            ((((x10_long)0ll)) < (b__25780)) ? (b__25780) : (((x10_long)0ll));
        }))
        ;
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* atomsHere =
          ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::_make(numAtomsHere);
        
        //#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        x10_long i = ((x10_long)0ll);
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        x10_long i__25754min__27466 = startHere;
        x10_long i__25754max__27467 = ((endHere) - (((x10_long)1ll)));
        {
            x10_long i__27468;
            for (i__27468 = i__25754min__27466; ((i__27468) <= (i__25754max__27467));
                 i__27468 = ((i__27468) + (((x10_long)1ll))))
            {
                x10_long gridPoint__27469 = i__27468;
                
                //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                x10_long gridX__27457 = ((gridPoint__27469) / ::x10aux::zeroCheck(((x10_long)(((gridSize) * (gridSize))))));
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                x10_long gridY__27458 = ((((gridPoint__27469) - (((((gridX__27457) * (((x10_long)(gridSize))))) * (((x10_long)(gridSize))))))) / ::x10aux::zeroCheck(((x10_long)(gridSize))));
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                x10_long gridZ__27459 = ((((gridPoint__27469) - (((((gridX__27457) * (((x10_long)(gridSize))))) * (((x10_long)(gridSize))))))) - (((gridY__27458) * (((x10_long)(gridSize))))));
                
                //#line 85 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                x10_double x__27460 = ((((clusterStart) + (((((((x10_double) (gridX__27457))) + (0.5))) * (((saved_this->sizeOfCentralCluster()) / (((x10_double) (gridSize))))))))) + (perturb
                  ? (::au::edu::anu::chem::mm::TestElectrostatic::randomNoise())
                  : (0.0)));
                
                //#line 86 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                x10_double y__27461 = ((((clusterStart) + (((((((x10_double) (gridY__27458))) + (0.5))) * (((saved_this->sizeOfCentralCluster()) / (((x10_double) (gridSize))))))))) + (perturb
                  ? (::au::edu::anu::chem::mm::TestElectrostatic::randomNoise())
                  : (0.0)));
                
                //#line 87 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                x10_double z__27462 = ((((clusterStart) + (((((((x10_double) (gridZ__27459))) + (0.5))) * (((saved_this->sizeOfCentralCluster()) / (((x10_double) (gridSize))))))))) + (perturb
                  ? (::au::edu::anu::chem::mm::TestElectrostatic::randomNoise())
                  : (0.0)));
                
                //#line 89 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
                atomsHere->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__set(
                  (__extension__ ({
                      x10_long pre__27463 = i;
                      i = ((i) + (((x10_long)1ll)));
                      pre__27463;
                  }))
                  , (__extension__ ({
                      ::au::edu::anu::chem::mm::MMAtom* alloc__27464 =
                         (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
                      (alloc__27464)->::au::edu::anu::chem::mm::MMAtom::_constructor(
                        (__extension__ ({
                            ::x10x::vector::Point3d alloc__27465 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__27454 = x__27460;
                            x10_double j__27455 = y__27461;
                            x10_double k__27456 = z__27462;
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            alloc__27465->FMGL(i) = i__27454;
                            alloc__27465->FMGL(j) = j__27455;
                            alloc__27465->FMGL(k) = k__27456;
                            alloc__27465;
                        }))
                        , 1.0, charge);
                      alloc__27464;
                  }))
                  );
            }
        }
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        atoms->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__set(
          ::x10::lang::Place::_make(::x10aux::here)->FMGL(id),
          atomsHere);
    }
    
    // captured environment
    x10_long numAtoms;
    x10_int gridSize;
    x10_double clusterStart;
    ::au::edu::anu::chem::mm::TestElectrostatic* saved_this;
    x10_boolean perturb;
    x10_double charge;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->numAtoms);
        buf.write(this->gridSize);
        buf.write(this->clusterStart);
        buf.write(this->saved_this);
        buf.write(this->perturb);
        buf.write(this->charge);
        buf.write(this->atoms);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_TestElectrostatic__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_TestElectrostatic__closure__2>();
        buf.record_reference(storage);
        x10_long that_numAtoms = buf.read<x10_long>();
        x10_int that_gridSize = buf.read<x10_int>();
        x10_double that_clusterStart = buf.read<x10_double>();
        ::au::edu::anu::chem::mm::TestElectrostatic* that_saved_this = buf.read< ::au::edu::anu::chem::mm::TestElectrostatic*>();
        x10_boolean that_perturb = buf.read<x10_boolean>();
        x10_double that_charge = buf.read<x10_double>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        au_edu_anu_chem_mm_TestElectrostatic__closure__2* this_ = new (storage) au_edu_anu_chem_mm_TestElectrostatic__closure__2(that_numAtoms, that_gridSize, that_clusterStart, that_saved_this, that_perturb, that_charge, that_atoms);
        return this_;
    }
    
    au_edu_anu_chem_mm_TestElectrostatic__closure__2(x10_long numAtoms, x10_int gridSize, x10_double clusterStart, ::au::edu::anu::chem::mm::TestElectrostatic* saved_this, x10_boolean perturb, x10_double charge, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms) : numAtoms(numAtoms), gridSize(gridSize), clusterStart(clusterStart), saved_this(saved_this), perturb(perturb), charge(charge), atoms(atoms) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10:74-92";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_TestElectrostatic__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_TestElectrostatic__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__27479;
            for (place__27479 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                          ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__27479));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__27479));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_TestElectrostatic__closure__2)))au_edu_anu_chem_mm_TestElectrostatic__closure__2(numAtoms, gridSize, clusterStart, saved_this, perturb, charge, atoms))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    x10_long numAtoms;
    x10_int gridSize;
    x10_double clusterStart;
    ::au::edu::anu::chem::mm::TestElectrostatic* saved_this;
    x10_boolean perturb;
    x10_double charge;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->numAtoms);
        buf.write(this->gridSize);
        buf.write(this->clusterStart);
        buf.write(this->saved_this);
        buf.write(this->perturb);
        buf.write(this->charge);
        buf.write(this->atoms);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_TestElectrostatic__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_TestElectrostatic__closure__1>();
        buf.record_reference(storage);
        x10_long that_numAtoms = buf.read<x10_long>();
        x10_int that_gridSize = buf.read<x10_int>();
        x10_double that_clusterStart = buf.read<x10_double>();
        ::au::edu::anu::chem::mm::TestElectrostatic* that_saved_this = buf.read< ::au::edu::anu::chem::mm::TestElectrostatic*>();
        x10_boolean that_perturb = buf.read<x10_boolean>();
        x10_double that_charge = buf.read<x10_double>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_chem_mm_TestElectrostatic__closure__1* this_ = new (storage) au_edu_anu_chem_mm_TestElectrostatic__closure__1(that_numAtoms, that_gridSize, that_clusterStart, that_saved_this, that_perturb, that_charge, that_atoms, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_chem_mm_TestElectrostatic__closure__1(x10_long numAtoms, x10_int gridSize, x10_double clusterStart, ::au::edu::anu::chem::mm::TestElectrostatic* saved_this, x10_boolean perturb, x10_double charge, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::regionarray::Dist* __lowerer__var__0__) : numAtoms(numAtoms), gridSize(gridSize), clusterStart(clusterStart), saved_this(saved_this), perturb(perturb), charge(charge), atoms(atoms), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10:74-92";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_TESTELECTROSTATIC__CLOSURE__1_CLOSURE

//#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
::x10::util::Random* au::edu::anu::chem::mm::TestElectrostatic::FMGL(R);
void au::edu::anu::chem::mm::TestElectrostatic::FMGL(R__do_init)() {
    FMGL(R__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::mm::TestElectrostatic.R");
    ::x10::util::Random* __var141__ = ::x10::util::Random::_make(((x10_long)10101110ll));
    FMGL(R) = __var141__;
    FMGL(R__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::mm::TestElectrostatic::FMGL(R__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(R__status), &FMGL(R__do_init), &FMGL(R__exception), "au::edu::anu::chem::mm::TestElectrostatic.R");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::mm::TestElectrostatic::FMGL(R__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::mm::TestElectrostatic::FMGL(R__exception);


//#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
x10_double au::edu::anu::chem::mm::TestElectrostatic::FMGL(NOISE) = 0.25;

//#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"

//#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
x10_double au::edu::anu::chem::mm::TestElectrostatic::sizeOfCentralCluster(
  ) {
    return 80.0;
    
}

//#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
x10_double au::edu::anu::chem::mm::TestElectrostatic::boxSize() {
    return 80.0;
    
}

//#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
void au::edu::anu::chem::mm::TestElectrostatic::logTime(::x10::lang::String* desc,
                                                        x10_long timerIndex,
                                                        ::au::edu::anu::util::Timer* timer,
                                                        x10_boolean printNewline) {
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    if (printNewline) {
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf(::x10::lang::String::__plus(desc, (&::au::edu::anu::chem::mm::TestElectrostatic_Strings::sl__32677)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer)->au::edu::anu::util::Timer::mean(
                                                                                                                           timerIndex)))) / (1.0E9))));
    } else {
        
        //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf(::x10::lang::String::__plus(desc, (&::au::edu::anu::chem::mm::TestElectrostatic_Strings::sl__32678)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer)->au::edu::anu::util::Timer::mean(
                                                                                                                           timerIndex)))) / (1.0E9))));
    }
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
void au::edu::anu::chem::mm::TestElectrostatic::logTime(::x10::lang::String* desc,
                                                        x10_long timerIndex,
                                                        ::au::edu::anu::util::Timer* timer) {
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    this->logTime(desc, timerIndex, timer, true);
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
  au::edu::anu::chem::mm::TestElectrostatic::generateAtoms(
  x10_long numAtoms) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    return this->generateAtoms(numAtoms, true);
    
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
  au::edu::anu::chem::mm::TestElectrostatic::generateAtoms(
  x10_long numAtoms, x10_boolean perturb) {
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    x10_double charge = ((1.0) / (((x10_double) (numAtoms))));
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    x10_int gridSize = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(::x10::lang::MathNatives::cbrt(((x10_double) (numAtoms)))));
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    x10_double clusterStart = (((-(this->sizeOfCentralCluster()))) / (2.0));
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
      (__extension__ ({
        
        //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__25773 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__25771 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__25771)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__25771;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* alloc__25774 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >()) ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>());
            (alloc__25774)->::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::_constructor(
              dist__25773);
            alloc__25774;
        }))
        ;
    }))
    ;
    {
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__27484 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__25775 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__25775)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__25775;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____27481;
                        for (__lowerer__var__1____27481 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____27481));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____27481));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_TestElectrostatic__closure__1)))au_edu_anu_chem_mm_TestElectrostatic__closure__1(numAtoms, gridSize, clusterStart, this, perturb, charge, atoms, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc148) {
            {
                ::x10::lang::CheckedThrowable* ct__27482 =
                  __exc148;
                {
                    ::x10::lang::Runtime::pushException(ct__27482);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__27484);
    }
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    return atoms;
    
}

//#line 101 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
x10_long au::edu::anu::chem::mm::TestElectrostatic::getPlaceId(
  x10_double x, x10_double y, x10_double z) {
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    return ::x10::lang::DoubleNatives::toLong(((((((x) + (((this->boxSize()) / (2.0))))) / (this->boxSize()))) * (((x10_double) (((x10_long)::x10aux::num_hosts))))));
    
}

//#line 109 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
x10_double au::edu::anu::chem::mm::TestElectrostatic::randomNoise(
  ) {
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
    return ((((::au::edu::anu::chem::mm::TestElectrostatic::FMGL(R__get)()->nextDouble()) - (0.5))) * (0.25));
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/TestElectrostatic.x10"
::au::edu::anu::chem::mm::TestElectrostatic* au::edu::anu::chem::mm::TestElectrostatic::au__edu__anu__chem__mm__TestElectrostatic____this__au__edu__anu__chem__mm__TestElectrostatic(
  ) {
    return this;
    
}
void au::edu::anu::chem::mm::TestElectrostatic::_constructor(
  ) {
    ::au::edu::anu::chem::mm::TestElectrostatic* this__27470 =
      this;
    ::x10aux::nullCheck(this__27470)->FMGL(SIZE) = 80.0;
}
::au::edu::anu::chem::mm::TestElectrostatic* au::edu::anu::chem::mm::TestElectrostatic::_make(
  ) {
    ::au::edu::anu::chem::mm::TestElectrostatic* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::TestElectrostatic>()) ::au::edu::anu::chem::mm::TestElectrostatic();
    this_->_constructor();
    return this_;
}


void au::edu::anu::chem::mm::TestElectrostatic::__fieldInitializers_au_edu_anu_chem_mm_TestElectrostatic(
  ) {
    this->FMGL(SIZE) = 80.0;
}
const ::x10aux::serialization_id_t au::edu::anu::chem::mm::TestElectrostatic::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::mm::TestElectrostatic::_deserializer);

void au::edu::anu::chem::mm::TestElectrostatic::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(SIZE));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::mm::TestElectrostatic::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::TestElectrostatic* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::TestElectrostatic>()) ::au::edu::anu::chem::mm::TestElectrostatic();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::mm::TestElectrostatic::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(SIZE) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::chem::mm::TestElectrostatic::rtt;
void au::edu::anu::chem::mm::TestElectrostatic::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.mm.TestElectrostatic",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::chem::mm::TestElectrostatic_Strings::sl__32677(": %g seconds\n");
::x10::lang::String au::edu::anu::chem::mm::TestElectrostatic_Strings::sl__32678(": %g seconds");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_TestElectrostatic__closure__2>au_edu_anu_chem_mm_TestElectrostatic__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_TestElectrostatic__closure__2::__apply, &au_edu_anu_chem_mm_TestElectrostatic__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_TestElectrostatic__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_TestElectrostatic__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_TestElectrostatic__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_TestElectrostatic__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_chem_mm_TestElectrostatic__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_mm_TestElectrostatic__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_TestElectrostatic__closure__1>au_edu_anu_chem_mm_TestElectrostatic__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_TestElectrostatic__closure__1::__apply, &au_edu_anu_chem_mm_TestElectrostatic__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_TestElectrostatic__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_TestElectrostatic__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_TestElectrostatic__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_TestElectrostatic__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_chem_mm_TestElectrostatic__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_mm_TestElectrostatic__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of TestElectrostatic */
/*************************************************/
