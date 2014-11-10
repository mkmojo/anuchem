/*************************************************/
/* START of UniversalForceField */
#include <au/edu/anu/mm/uff/UniversalForceField.h>

#include <au/edu/anu/mm/ForceField.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/mm/uff/UffParameters.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <au/edu/anu/mm/LennardJonesParameters.h>
#include <au/edu/anu/mm/SpeciesSpec.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/regionarray/DistArray.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Reducible.h>
#include <au/edu/anu/mm/uff/UniversalForceField__SumReducer.h>
#include <x10/regionarray/Dist.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/util/ArrayList.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/util/ListIterator.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10x/vector/Vector3d.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_uff_UniversalForceField__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_uff_UniversalForceField__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
        x10_double myEnergy = 0.0;
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms =
          ::x10aux::nullCheck(atoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p);
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
        x10_long i__7856max__19730 = (((x10_long)(::x10aux::nullCheck(myAtoms)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__19731;
            for (i__19731 = ((x10_long)0ll); ((i__19731) <= (i__7856max__19730));
                 i__19731 = ((i__19731) + (((x10_long)1ll))))
            {
                x10_long i__19732 = i__19731;
                
                //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                ::au::edu::anu::chem::mm::MMAtom* atomI__19722 =
                  ::x10aux::nullCheck(myAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                    i__19732);
                
                //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                if ((!::x10aux::struct_equals(::x10aux::nullCheck(atomI__19722)->getBonds(),
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    
                    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                    {
                        ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__19723;
                        for (bond__19723 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(::x10aux::nullCheck(atomI__19722)->getBonds())->iterator());
                             ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__19723));
                             ) {
                            ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond__19724 =
                              ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__19723));
                            
                            //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                            if ((__extension__ ({
                                    ::au::edu::anu::chem::BondType this__19725 =
                                      bond__19724->FMGL(first);
                                    ((!::x10aux::struct_equals(this__19725,
                                                               ::au::edu::anu::chem::BondType::FMGL(NO_BOND__get)())) &&
                                    (!::x10aux::struct_equals(this__19725,
                                                              ::au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)())));
                                }))
                                ) {
                                
                                //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                                ::au::edu::anu::chem::mm::MMAtom* atomJ__19726 =
                                  ::x10aux::class_cast< ::au::edu::anu::chem::mm::MMAtom*>(bond__19724->FMGL(second));
                                
                                //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                                ::au::edu::anu::mm::uff::UffParameters paramsI__19727 =
                                  ::x10aux::nullCheck(saved_this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__apply(
                                    ((x10_long)(::x10aux::nullCheck(atomI__19722)->FMGL(species))));
                                
                                //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                                ::au::edu::anu::mm::uff::UffParameters paramsJ__19728 =
                                  ::x10aux::nullCheck(saved_this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__apply(
                                    ((x10_long)(::x10aux::nullCheck(atomJ__19726)->FMGL(species))));
                                
                                //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                                x10_double bondStretch__19729 =
                                  saved_this->getBondStretchTerm(
                                    bond__19724->FMGL(first),
                                    atomI__19722, paramsI__19727,
                                    atomJ__19726, paramsJ__19728);
                                
                                //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                                myEnergy = ((myEnergy) + (bondStretch__19729));
                            }
                            
                        }
                    }
                    
                }
                
            }
        }
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(myEnergy);
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::x10::lang::Point* p;
    ::au::edu::anu::mm::uff::UniversalForceField* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atoms);
        buf.write(this->p);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_uff_UniversalForceField__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_uff_UniversalForceField__closure__2>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        ::au::edu::anu::mm::uff::UniversalForceField* that_saved_this = buf.read< ::au::edu::anu::mm::uff::UniversalForceField*>();
        au_edu_anu_mm_uff_UniversalForceField__closure__2* this_ = new (storage) au_edu_anu_mm_uff_UniversalForceField__closure__2(that_atoms, that_p, that_saved_this);
        return this_;
    }
    
    au_edu_anu_mm_uff_UniversalForceField__closure__2(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::lang::Point* p, ::au::edu::anu::mm::uff::UniversalForceField* saved_this) : atoms(atoms), p(p), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10:65-85";
    }

};

#endif // AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_uff_UniversalForceField__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_uff_UniversalForceField__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__19773;
            for (p__19773 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__19773));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__19773));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_uff_UniversalForceField__closure__2)))au_edu_anu_mm_uff_UniversalForceField__closure__2(atoms, p, saved_this))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::au::edu::anu::mm::uff::UniversalForceField* saved_this;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atoms);
        buf.write(this->saved_this);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_uff_UniversalForceField__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_uff_UniversalForceField__closure__1>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::au::edu::anu::mm::uff::UniversalForceField* that_saved_this = buf.read< ::au::edu::anu::mm::uff::UniversalForceField*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_uff_UniversalForceField__closure__1* this_ = new (storage) au_edu_anu_mm_uff_UniversalForceField__closure__1(that_atoms, that_saved_this, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_uff_UniversalForceField__closure__1(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::au::edu::anu::mm::uff::UniversalForceField* saved_this, ::x10::regionarray::Dist* __lowerer__var__0__) : atoms(atoms), saved_this(saved_this), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10:65-85";
    }

};

#endif // AU_EDU_ANU_MM_UFF_UNIVERSALFORCEFIELD__CLOSURE__1_CLOSURE
::au::edu::anu::mm::ForceField::itable< ::au::edu::anu::mm::uff::UniversalForceField >  au::edu::anu::mm::uff::UniversalForceField::_itable_0(&::x10::lang::X10Class::equals, &au::edu::anu::mm::uff::UniversalForceField::getAtomMass, &au::edu::anu::mm::uff::UniversalForceField::getPotentialAndForces, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::uff::UniversalForceField >  au::edu::anu::mm::uff::UniversalForceField::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::uff::UniversalForceField::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::au::edu::anu::mm::ForceField>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::uff::UniversalForceField")};

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
void au::edu::anu::mm::uff::UniversalForceField::_constructor() {
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    this->au::edu::anu::mm::uff::UniversalForceField::__fieldInitializers_au_edu_anu_mm_uff_UniversalForceField();
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    this->FMGL(atomParameters) = ::x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::_make(((x10_long)9ll));
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10aux::nullCheck(this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__set(
      ((x10_long)1ll), (__extension__ ({
          ::au::edu::anu::mm::uff::UffParameters alloc__7824 =  ::au::edu::anu::mm::uff::UffParameters::_alloc();
          
          //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          ::x10::lang::String* description__19702 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20081);
          ::au::edu::anu::mm::LennardJonesParameters vdwParams__19703 =
            (__extension__ ({
              
              //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
              ::au::edu::anu::mm::LennardJonesParameters alloc__19704 =
                 ::au::edu::anu::mm::LennardJonesParameters::_alloc();
              
              //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              ::x10::lang::String* description__19701 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20082);
              
              //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              alloc__19704->FMGL(description) = description__19701;
              alloc__19704->FMGL(scale) = 12.0;
              alloc__19704->FMGL(equlibrium) = 2.886;
              alloc__19704->FMGL(wellDepth) = 0.044;
              alloc__19704;
          }))
          ;
          
          //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          alloc__7824->FMGL(description) = description__19702;
          alloc__7824->FMGL(mass) = 1.00794;
          alloc__7824->FMGL(bondRadius) = 0.354;
          alloc__7824->FMGL(bondAngle) = 180.0;
          alloc__7824->FMGL(vdwParams) = vdwParams__19703;
          alloc__7824->FMGL(effectiveCharge) = 0.712;
          alloc__7824->FMGL(electronegativity) = 4.53;
          alloc__7824;
      }))
      );
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10aux::nullCheck(this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__set(
      ((x10_long)6ll), (__extension__ ({
          ::au::edu::anu::mm::uff::UffParameters alloc__7826 =
             ::au::edu::anu::mm::uff::UffParameters::_alloc();
          
          //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          ::x10::lang::String* description__19706 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20083);
          ::au::edu::anu::mm::LennardJonesParameters vdwParams__19707 =
            (__extension__ ({
              
              //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
              ::au::edu::anu::mm::LennardJonesParameters alloc__19708 =
                 ::au::edu::anu::mm::LennardJonesParameters::_alloc();
              
              //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              ::x10::lang::String* description__19705 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20084);
              
              //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              alloc__19708->FMGL(description) = description__19705;
              alloc__19708->FMGL(scale) = 12.73;
              alloc__19708->FMGL(equlibrium) = 3.851;
              alloc__19708->FMGL(wellDepth) = 0.105;
              alloc__19708;
          }))
          ;
          
          //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          alloc__7826->FMGL(description) = description__19706;
          alloc__7826->FMGL(mass) = 12.0;
          alloc__7826->FMGL(bondRadius) = 0.757;
          alloc__7826->FMGL(bondAngle) = 109.47;
          alloc__7826->FMGL(vdwParams) = vdwParams__19707;
          alloc__7826->FMGL(effectiveCharge) = 1.912;
          alloc__7826->FMGL(electronegativity) = 5.34;
          alloc__7826;
      }))
      );
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10aux::nullCheck(this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__set(
      ((x10_long)7ll), (__extension__ ({
          ::au::edu::anu::mm::uff::UffParameters alloc__7828 =
             ::au::edu::anu::mm::uff::UffParameters::_alloc();
          
          //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          ::x10::lang::String* description__19710 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20085);
          ::au::edu::anu::mm::LennardJonesParameters vdwParams__19711 =
            (__extension__ ({
              
              //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
              ::au::edu::anu::mm::LennardJonesParameters alloc__19712 =
                 ::au::edu::anu::mm::LennardJonesParameters::_alloc();
              
              //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              ::x10::lang::String* description__19709 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20086);
              
              //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              alloc__19712->FMGL(description) = description__19709;
              alloc__19712->FMGL(scale) = 13.407;
              alloc__19712->FMGL(equlibrium) = 3.66;
              alloc__19712->FMGL(wellDepth) = 0.069;
              alloc__19712;
          }))
          ;
          
          //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          alloc__7828->FMGL(description) = description__19710;
          alloc__7828->FMGL(mass) = 14.0031;
          alloc__7828->FMGL(bondRadius) = 0.7;
          alloc__7828->FMGL(bondAngle) = 106.7;
          alloc__7828->FMGL(vdwParams) = vdwParams__19711;
          alloc__7828->FMGL(effectiveCharge) = 2.544;
          alloc__7828->FMGL(electronegativity) = 6.899;
          alloc__7828;
      }))
      );
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10aux::nullCheck(this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__set(
      ((x10_long)8ll), (__extension__ ({
          ::au::edu::anu::mm::uff::UffParameters alloc__7830 =
             ::au::edu::anu::mm::uff::UffParameters::_alloc();
          
          //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          ::x10::lang::String* description__19714 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20087);
          ::au::edu::anu::mm::LennardJonesParameters vdwParams__19715 =
            (__extension__ ({
              
              //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
              ::au::edu::anu::mm::LennardJonesParameters alloc__19716 =
                 ::au::edu::anu::mm::LennardJonesParameters::_alloc();
              
              //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              ::x10::lang::String* description__19713 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20088);
              
              //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
              alloc__19716->FMGL(description) = description__19713;
              alloc__19716->FMGL(scale) = 14.085;
              alloc__19716->FMGL(equlibrium) = 3.5;
              alloc__19716->FMGL(wellDepth) = 0.06;
              alloc__19716;
          }))
          ;
          
          //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
          alloc__7830->FMGL(description) = description__19714;
          alloc__7830->FMGL(mass) = 15.9994;
          alloc__7830->FMGL(bondRadius) = 0.658;
          alloc__7830->FMGL(bondAngle) = 104.51;
          alloc__7830->FMGL(vdwParams) = vdwParams__19715;
          alloc__7830->FMGL(effectiveCharge) = 2.3;
          alloc__7830->FMGL(electronegativity) = 8.741;
          alloc__7830;
      }))
      );
}
::au::edu::anu::mm::uff::UniversalForceField* au::edu::anu::mm::uff::UniversalForceField::_make(
  ) {
    ::au::edu::anu::mm::uff::UniversalForceField* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::uff::UniversalForceField>()) ::au::edu::anu::mm::uff::UniversalForceField();
    this_->_constructor();
    return this_;
}



//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* au::edu::anu::mm::uff::UniversalForceField::getSpecies(
  ) {
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* specs =
      ::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >::_make((x10_long)(::x10aux::nullCheck(this->FMGL(atomParameters))->FMGL(size)));
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_long i__7836max__19719 = (((x10_long)(::x10aux::nullCheck(this->FMGL(atomParameters))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__19720;
        for (i__19720 = ((x10_long)0ll); ((i__19720) <= (i__7836max__19719));
             i__19720 = ((i__19720) + (((x10_long)1ll))))
        {
            x10_long i__19721 = i__19720;
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
            ::au::edu::anu::mm::uff::UffParameters atom__19717 =
              ::x10aux::nullCheck(this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__apply(
                i__19721);
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
            if ((!::x10aux::struct_equals(atom__19717->FMGL(description),
                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                specs->x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >::__set(
                  i__19721, (__extension__ ({
                      ::au::edu::anu::mm::SpeciesSpec* alloc__19718 =
                         (new (::x10aux::alloc_z< ::au::edu::anu::mm::SpeciesSpec>()) ::au::edu::anu::mm::SpeciesSpec());
                      (alloc__19718)->::au::edu::anu::mm::SpeciesSpec::_constructor(
                        atom__19717->FMGL(description), atom__19717->FMGL(mass),
                        atom__19717->FMGL(effectiveCharge),
                        ((x10_int) (i__19721)));
                      alloc__19718;
                  }))
                  );
            }
            
        }
    }
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    return specs;
    
}

//#line 59 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
x10_double au::edu::anu::mm::uff::UniversalForceField::getAtomMass(
  x10_int species) {
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    return ::x10aux::nullCheck(this->FMGL(atomParameters))->x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >::__apply(
             ((x10_long)(species)))->FMGL(mass);
    
}

//#line 63 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
x10_double au::edu::anu::mm::uff::UniversalForceField::getPotentialAndForces(
  ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms) {
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double energy;
    {
        ::x10::lang::FinishState* fs__19777 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::au::edu::anu::mm::uff::UniversalForceField__SumReducer alloc__7832 =
                                                                                                                 
                                                                                                               ::au::edu::anu::mm::uff::UniversalForceField__SumReducer::_alloc();
                                                                                                               alloc__7832;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(atoms)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____19775;
                        for (__lowerer__var__1____19775 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____19775));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____19775));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_uff_UniversalForceField__closure__1)))au_edu_anu_mm_uff_UniversalForceField__closure__1(atoms, this, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc19) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc19;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        energy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                   fs__19777);
    }
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    return energy;
    
}

//#line 98 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
x10_double au::edu::anu::mm::uff::UniversalForceField::getBondStretchTerm(
  ::au::edu::anu::chem::BondType bond, ::au::edu::anu::chem::mm::MMAtom* atomI,
  ::au::edu::anu::mm::uff::UffParameters paramsI, ::au::edu::anu::chem::mm::MMAtom* atomJ,
  ::au::edu::anu::mm::uff::UffParameters paramsJ) {
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10x::vector::Vector3d direction = (__extension__ ({
        ::x10x::vector::Point3d this__18152 = ::x10aux::nullCheck(atomJ)->FMGL(centre);
        
        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d that__18151 = ::x10aux::nullCheck(atomI)->FMGL(centre);
        (__extension__ ({
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__18153 = that__18151;
            (__extension__ ({
                
                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                ::x10x::vector::Vector3d alloc__18154 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__19733 = ((this__18152->FMGL(i)) - (b__18153->FMGL(i)));
                x10_double j__19734 = ((this__18152->FMGL(j)) - (b__18153->FMGL(j)));
                x10_double k__19735 = ((this__18152->FMGL(k)) - (b__18153->FMGL(k)));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__18154->FMGL(i) = i__19733;
                alloc__18154->FMGL(j) = j__19734;
                alloc__18154->FMGL(k) = k__19735;
                alloc__18154;
            }))
            ;
        }))
        ;
    }))
    ;
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double distance = ((((((direction->FMGL(i)) * (direction->FMGL(i)))) + (((direction->FMGL(j)) * (direction->FMGL(j)))))) + (((direction->FMGL(k)) * (direction->FMGL(k)))));
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double naturalDistance = this->getNaturalBondRadius(
                                   bond, atomI, paramsI, atomJ,
                                   paramsJ);
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double forceConstant = ((((paramsI->FMGL(effectiveCharge)) * (paramsJ->FMGL(effectiveCharge)))) / (((((naturalDistance) * (naturalDistance))) * (naturalDistance))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double stretch = ((distance) - (naturalDistance));
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10x::vector::Vector3d force = (__extension__ ({
        ::x10x::vector::Vector3d this__19634 = (__extension__ ({
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d ret__18163;
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double norm__19739 = ((1.0) / (::x10::lang::MathNatives::sqrt(((((((direction->FMGL(i)) * (direction->FMGL(i)))) + (((direction->FMGL(j)) * (direction->FMGL(j)))))) + (((direction->FMGL(k)) * (direction->FMGL(k))))))));
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ret__18163 = (__extension__ ({
                ::x10x::vector::Vector3d alloc__19740 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__19736 = ((direction->FMGL(i)) * (norm__19739));
                x10_double j__19737 = ((direction->FMGL(j)) * (norm__19739));
                x10_double k__19738 = ((direction->FMGL(k)) * (norm__19739));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__19740->FMGL(i) = i__19736;
                alloc__19740->FMGL(j) = j__19737;
                alloc__19740->FMGL(k) = k__19738;
                alloc__19740;
            }))
            ;
            ret__18163;
        }))
        ;
        
        //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        x10_double that__19633 = ((((2.0) * (forceConstant))) * (stretch));
        (__extension__ ({
            
            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double c__19635 = that__19633;
            (__extension__ ({
                
                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                ::x10x::vector::Vector3d alloc__19636 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__19741 = ((this__19634->FMGL(i)) * (c__19635));
                x10_double j__19742 = ((this__19634->FMGL(j)) * (c__19635));
                x10_double k__19743 = ((this__19634->FMGL(k)) * (c__19635));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__19636->FMGL(i) = i__19741;
                alloc__19636->FMGL(j) = j__19742;
                alloc__19636->FMGL(k) = k__19743;
                alloc__19636;
            }))
            ;
        }))
        ;
    }))
    ;
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10aux::nullCheck(atomI)->FMGL(force) = (__extension__ ({
        ::x10x::vector::Vector3d this__19644 = ::x10aux::nullCheck(atomI)->FMGL(force);
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d that__19643 = force;
        (__extension__ ({
            
            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d b__19645 = that__19643;
            (__extension__ ({
                
                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                ::x10x::vector::Vector3d alloc__19646 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__19744 = ((this__19644->FMGL(i)) + (b__19645->FMGL(i)));
                x10_double j__19745 = ((this__19644->FMGL(j)) + (b__19645->FMGL(j)));
                x10_double k__19746 = ((this__19644->FMGL(k)) + (b__19645->FMGL(k)));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__19646->FMGL(i) = i__19744;
                alloc__19646->FMGL(j) = j__19745;
                alloc__19646->FMGL(k) = k__19746;
                alloc__19646;
            }))
            ;
        }))
        ;
    }))
    ;
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    ::x10aux::nullCheck(atomJ)->FMGL(force) = (__extension__ ({
        ::x10x::vector::Vector3d this__19661 = ::x10aux::nullCheck(atomJ)->FMGL(force);
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d that__19660 = (__extension__ ({
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d alloc__19653 =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double i__19747 = (-(force->FMGL(i)));
            x10_double j__19748 = (-(force->FMGL(j)));
            x10_double k__19749 = (-(force->FMGL(k)));
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            alloc__19653->FMGL(i) = i__19747;
            alloc__19653->FMGL(j) = j__19748;
            alloc__19653->FMGL(k) = k__19749;
            alloc__19653;
        }))
        ;
        (__extension__ ({
            
            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d b__19662 = that__19660;
            (__extension__ ({
                
                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                ::x10x::vector::Vector3d alloc__19663 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__19750 = ((this__19661->FMGL(i)) + (b__19662->FMGL(i)));
                x10_double j__19751 = ((this__19661->FMGL(j)) + (b__19662->FMGL(j)));
                x10_double k__19752 = ((this__19661->FMGL(k)) + (b__19662->FMGL(k)));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__19663->FMGL(i) = i__19750;
                alloc__19663->FMGL(j) = j__19751;
                alloc__19663->FMGL(k) = k__19752;
                alloc__19663;
            }))
            ;
        }))
        ;
    }))
    ;
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    return ((((forceConstant) * (stretch))) * (stretch));
    
}

//#line 135 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
x10_double au::edu::anu::mm::uff::UniversalForceField::getNaturalBondRadius(
  ::au::edu::anu::chem::BondType bond, ::au::edu::anu::chem::mm::MMAtom* atomI,
  ::au::edu::anu::mm::uff::UffParameters paramsI, ::au::edu::anu::chem::mm::MMAtom* atomJ,
  ::au::edu::anu::mm::uff::UffParameters paramsJ) {
    
    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double radiusI = paramsI->FMGL(bondRadius);
    
    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double radiusJ = paramsJ->FMGL(bondRadius);
    
    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double naturalRadius = ((radiusI) + (radiusJ));
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double bondOrderCorrection = ((((-0.1332) * (naturalRadius))) * (::x10::lang::MathNatives::log(bond->FMGL(bondOrder))));
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double chiI = paramsI->FMGL(electronegativity);
    
    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double chiJ = paramsJ->FMGL(electronegativity);
    
    //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double dSqrtChi = ((::x10::lang::MathNatives::sqrt(chiI)) - (::x10::lang::MathNatives::sqrt(chiJ)));
    
    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    x10_double electronegativityCorrection = ((((((radiusI) * (radiusJ))) * (((dSqrtChi) * (dSqrtChi))))) / (((((chiI) * (radiusI))) + (((chiJ) * (radiusJ))))));
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
    return ((((naturalRadius) + (bondOrderCorrection))) - (electronegativityCorrection));
    
}

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
::au::edu::anu::mm::uff::UniversalForceField* au::edu::anu::mm::uff::UniversalForceField::au__edu__anu__mm__uff__UniversalForceField____this__au__edu__anu__mm__uff__UniversalForceField(
  ) {
    return this;
    
}
void au::edu::anu::mm::uff::UniversalForceField::__fieldInitializers_au_edu_anu_mm_uff_UniversalForceField(
  ) {
    this->FMGL(BOND_ORDER_PROPORTIONALITY_CONSTANT) = -0.1332;
    this->FMGL(defaultParams) = (__extension__ ({
        
        //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
        ::au::edu::anu::mm::uff::UffParameters alloc__7834 =
           ::au::edu::anu::mm::uff::UffParameters::_alloc();
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
        ::x10::lang::String* description__19759 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20089);
        ::au::edu::anu::mm::LennardJonesParameters vdwParams__19760 =
          (__extension__ ({
            
            //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
            ::au::edu::anu::mm::LennardJonesParameters alloc__19761 =
               ::au::edu::anu::mm::LennardJonesParameters::_alloc();
            
            //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
            ::x10::lang::String* description__19758 = (&::au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20089);
            
            //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/LennardJonesParameters.x10"
            alloc__19761->FMGL(description) = description__19758;
            alloc__19761->FMGL(scale) = 0.0;
            alloc__19761->FMGL(equlibrium) = 0.0;
            alloc__19761->FMGL(wellDepth) = 0.0;
            alloc__19761;
        }))
        ;
        
        //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UffParameters.x10"
        alloc__7834->FMGL(description) = description__19759;
        alloc__7834->FMGL(mass) = 1.0;
        alloc__7834->FMGL(bondRadius) = 0.0;
        alloc__7834->FMGL(bondAngle) = 0.0;
        alloc__7834->FMGL(vdwParams) = vdwParams__19760;
        alloc__7834->FMGL(effectiveCharge) = 0.0;
        alloc__7834->FMGL(electronegativity) = 0.0;
        alloc__7834;
    }))
    ;
    this->FMGL(energy) = 0.0;
}
const ::x10aux::serialization_id_t au::edu::anu::mm::uff::UniversalForceField::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::uff::UniversalForceField::_deserializer);

void au::edu::anu::mm::uff::UniversalForceField::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(BOND_ORDER_PROPORTIONALITY_CONSTANT));
    buf.write(this->FMGL(defaultParams));
    buf.write(this->FMGL(atomParameters));
    buf.write(this->FMGL(energy));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::uff::UniversalForceField::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::uff::UniversalForceField* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::uff::UniversalForceField>()) ::au::edu::anu::mm::uff::UniversalForceField();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::uff::UniversalForceField::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(BOND_ORDER_PROPORTIONALITY_CONSTANT) = buf.read<x10_double>();
    FMGL(defaultParams) = buf.read< ::au::edu::anu::mm::uff::UffParameters>();
    FMGL(atomParameters) = buf.read< ::x10::lang::Rail< ::au::edu::anu::mm::uff::UffParameters >*>();
    FMGL(energy) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::mm::uff::UniversalForceField::rtt;
void au::edu::anu::mm::uff::UniversalForceField::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::mm::ForceField>()};
    rtt.initStageTwo("au.edu.anu.mm.uff.UniversalForceField",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20089("default");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20082("H_");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20083("C");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20086("N_3");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20085("N");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20087("O");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20084("C_3");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20081("H");
::x10::lang::String au::edu::anu::mm::uff::UniversalForceField_Strings::sl__20088("O_3");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_uff_UniversalForceField__closure__2>au_edu_anu_mm_uff_UniversalForceField__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_uff_UniversalForceField__closure__2::__apply, &au_edu_anu_mm_uff_UniversalForceField__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_uff_UniversalForceField__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_uff_UniversalForceField__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_uff_UniversalForceField__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_uff_UniversalForceField__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_uff_UniversalForceField__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_uff_UniversalForceField__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_uff_UniversalForceField__closure__1>au_edu_anu_mm_uff_UniversalForceField__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_uff_UniversalForceField__closure__1::__apply, &au_edu_anu_mm_uff_UniversalForceField__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_uff_UniversalForceField__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_uff_UniversalForceField__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_uff_UniversalForceField__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_uff_UniversalForceField__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_uff_UniversalForceField__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_uff_UniversalForceField__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of UniversalForceField */
/*************************************************/
/*************************************************/
/* START of UniversalForceField$SumReducer */
#include <au/edu/anu/mm/uff/UniversalForceField__SumReducer.h>

#include <x10/lang/Any.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UniversalForceField__SumReducer_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer> {
public:
    static ::x10::lang::Any::itable< UniversalForceField__SumReducer_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< UniversalForceField__SumReducer_ibox0 >  UniversalForceField__SumReducer_ibox0::itable(&UniversalForceField__SumReducer_ibox0::equals, &UniversalForceField__SumReducer_ibox0::hashCode, &UniversalForceField__SumReducer_ibox0::toString, &UniversalForceField__SumReducer_ibox0::typeName);
} } } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer >  au::edu::anu::mm::uff::UniversalForceField__SumReducer::_itable_0(&au::edu::anu::mm::uff::UniversalForceField__SumReducer::equals, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::hashCode, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::toString, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::typeName);
namespace au { namespace edu { namespace anu { namespace mm { namespace uff { 
class UniversalForceField__SumReducer_ibox1 : public ::x10::lang::IBox< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer> {
public:
    static ::x10::lang::Reducible<x10_double>::itable< UniversalForceField__SumReducer_ibox1 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10_double __apply(x10_double arg0, x10_double arg1) {
        return this->value->__apply(arg0, arg1);
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    x10_double zero() {
        return this->value->zero();
    }
    
};
::x10::lang::Reducible<x10_double>::itable< UniversalForceField__SumReducer_ibox1 >  UniversalForceField__SumReducer_ibox1::itable(&UniversalForceField__SumReducer_ibox1::equals, &UniversalForceField__SumReducer_ibox1::hashCode, &UniversalForceField__SumReducer_ibox1::__apply, &UniversalForceField__SumReducer_ibox1::toString, &UniversalForceField__SumReducer_ibox1::typeName, &UniversalForceField__SumReducer_ibox1::zero);
} } } } } 
::x10::lang::Reducible<x10_double>::itable< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer >  au::edu::anu::mm::uff::UniversalForceField__SumReducer::_itable_1(&au::edu::anu::mm::uff::UniversalForceField__SumReducer::equals, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::hashCode, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::__apply, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::toString, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::typeName, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::zero);
::x10aux::itable_entry au::edu::anu::mm::uff::UniversalForceField__SumReducer::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::mm::uff::UniversalForceField__SumReducer::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::uff::UniversalForceField__SumReducer")};
::x10aux::itable_entry au::edu::anu::mm::uff::UniversalForceField__SumReducer::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::uff::UniversalForceField__SumReducer_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::mm::uff::UniversalForceField__SumReducer_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::uff::UniversalForceField__SumReducer")};

//#line 155 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"

//#line 156 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
x10_double au::edu::anu::mm::uff::UniversalForceField__SumReducer::__apply(
  x10_double a, x10_double b) {
    return ((a) + (b));
    
}

//#line 154 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/uff/UniversalForceField.x10"
::x10::lang::String* au::edu::anu::mm::uff::UniversalForceField__SumReducer::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::mm::uff::UniversalForceField__SumReducer::toString(
  ) {
    return (&::au::edu::anu::mm::uff::UniversalForceField__SumReducer_Strings::sl__20116);
    
}
x10_boolean au::edu::anu::mm::uff::UniversalForceField__SumReducer::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::uff::UniversalForceField__SumReducer this__19753 =
      (*this);
    ::au::edu::anu::mm::uff::UniversalForceField__SumReducer other__19754 =
      ::x10aux::class_cast< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer>(other);
    return true;
    
}
x10_boolean au::edu::anu::mm::uff::UniversalForceField__SumReducer::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::uff::UniversalForceField__SumReducer this__19755 =
      (*this);
    ::au::edu::anu::mm::uff::UniversalForceField__SumReducer other__19756 =
      ::x10aux::class_cast< ::au::edu::anu::mm::uff::UniversalForceField__SumReducer>(other);
    return true;
    
}

void ::au::edu::anu::mm::uff::UniversalForceField__SumReducer::_serialize(::au::edu::anu::mm::uff::UniversalForceField__SumReducer this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::au::edu::anu::mm::uff::UniversalForceField__SumReducer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType au::edu::anu::mm::uff::UniversalForceField__SumReducer::rtt;
void au::edu::anu::mm::uff::UniversalForceField__SumReducer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >()};
    rtt.initStageTwo("au.edu.anu.mm.uff.UniversalForceField.SumReducer",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::mm::uff::UniversalForceField__SumReducer_Strings::sl__20116("struct au.edu.anu.mm.uff.UniversalForceField.SumReducer");

/* END of UniversalForceField$SumReducer */
/*************************************************/
