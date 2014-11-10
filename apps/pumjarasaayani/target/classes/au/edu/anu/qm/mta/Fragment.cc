/*************************************************/
/* START of Fragment */
#include <au/edu/anu/qm/mta/Fragment.h>

#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/util/ListIterator.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/compiler/Synthetic.h>

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
void au::edu::anu::qm::mta::Fragment::_constructor() {
    (this)->::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>::_constructor();
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    ::au::edu::anu::qm::mta::Fragment* this__54298 = this;
    ::x10aux::nullCheck(this__54298)->FMGL(centredOn) = ((x10_long)0ll);
    ::x10aux::nullCheck(this__54298)->FMGL(energy) = 0.0;
    ::x10aux::nullCheck(this__54298)->FMGL(cardinalitySign) = ((x10_int)0);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    this->FMGL(centredOn) = ((x10_long)-1ll);
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    this->FMGL(cardinalitySign) = ((x10_int)1);
}
::au::edu::anu::qm::mta::Fragment* au::edu::anu::qm::mta::Fragment::_make(
  ) {
    ::au::edu::anu::qm::mta::Fragment* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragment>()) ::au::edu::anu::qm::mta::Fragment();
    this_->_constructor();
    return this_;
}



//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
x10_long au::edu::anu::qm::mta::Fragment::getNumberOfTrueAtoms() {
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    x10_long nAtoms = ((x10_long)0ll);
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__54257;
        for (atom__54257 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(this->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__54257));
             ) {
            ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__54257));
            
            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (!(::x10aux::nullCheck((atom))->isDummy()))
            {
                nAtoms = ((nAtoms) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    return nAtoms;
    
}

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
::au::edu::anu::qm::mta::Fragment* au::edu::anu::qm::mta::Fragment::intersection(
  ::au::edu::anu::qm::mta::Fragment* frag) {
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    ::au::edu::anu::qm::mta::Fragment* newFrag =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragment>()) ::au::edu::anu::qm::mta::Fragment());
    (newFrag)->::au::edu::anu::qm::mta::Fragment::_constructor();
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    x10_boolean foundAtom;
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom1__54261;
        for (atom1__54261 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(this->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom1__54261));
             ) {
            ::au::edu::anu::qm::QMAtom* atom1 = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom1__54261));
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (::x10aux::nullCheck((atom1))->isDummy()) {
                continue;
            }
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            x10_long idx = ::x10aux::nullCheck(atom1)->getIndex();
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            foundAtom = false;
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            {
                ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom2__54259;
                for (atom2__54259 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(frag)->getAtoms()->iterator());
                     ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom2__54259));
                     ) {
                    ::au::edu::anu::qm::QMAtom* atom2 = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom2__54259));
                    
                    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
                    if (::x10aux::nullCheck((atom2))->isDummy())
                    {
                        continue;
                    }
                    
                    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(atom2)->getIndex(),
                                                 idx))) {
                        
                        //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
                        foundAtom = true;
                        break;
                    }
                    
                }
            }
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (foundAtom) {
                newFrag->addAtom(atom1);
            }
            
        }
    }
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    return newFrag;
    
}

//#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
::au::edu::anu::qm::mta::Fragment* au::edu::anu::qm::mta::Fragment::_kwd__union(
  ::au::edu::anu::qm::mta::Fragment* frag) {
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    ::au::edu::anu::qm::mta::Fragment* newFrag =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragment>()) ::au::edu::anu::qm::mta::Fragment());
    (newFrag)->::au::edu::anu::qm::mta::Fragment::_constructor();
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    x10_boolean foundAtom;
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom1__54263;
        for (atom1__54263 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(frag)->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom1__54263));
             ) {
            ::au::edu::anu::qm::QMAtom* atom1 = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom1__54263));
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (::x10aux::nullCheck((atom1))->isDummy()) {
                continue;
            }
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            newFrag->addAtom(atom1);
        }
    }
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom1__54267;
        for (atom1__54267 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(this->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom1__54267));
             ) {
            ::au::edu::anu::qm::QMAtom* atom1 = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom1__54267));
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (::x10aux::nullCheck((atom1))->isDummy()) {
                continue;
            }
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            x10_long idx = ::x10aux::nullCheck(atom1)->getIndex();
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            foundAtom = false;
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            {
                ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom2__54265;
                for (atom2__54265 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(newFrag->getAtoms()->iterator());
                     ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom2__54265));
                     ) {
                    ::au::edu::anu::qm::QMAtom* atom2 = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom2__54265));
                    
                    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
                    if (::x10aux::nullCheck((atom2))->isDummy())
                    {
                        continue;
                    }
                    
                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(atom2)->getIndex(),
                                                 idx))) {
                        
                        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
                        foundAtom = true;
                        break;
                    }
                    
                }
            }
            
            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (!(foundAtom)) {
                newFrag->addAtom(atom1);
            }
            
        }
    }
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    return newFrag;
    
}

//#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
x10_boolean au::edu::anu::qm::mta::Fragment::equals(::au::edu::anu::qm::mta::Fragment* frag) {
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    if ((!::x10aux::struct_equals(this->getNumberOfTrueAtoms(),
                                  ::x10aux::nullCheck(frag)->getNumberOfTrueAtoms())))
    {
        return false;
        
    }
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom1__54269;
        for (atom1__54269 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(frag)->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom1__54269));
             ) {
            ::au::edu::anu::qm::QMAtom* atom1 = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom1__54269));
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            ::au::edu::anu::qm::QMAtom* atm = atom1;
            
            //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (::x10aux::nullCheck(atm)->isDummy()) {
                continue;
            }
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (!(this->contains(atm))) {
                return false;
                
            }
            
        }
    }
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    return true;
    
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
x10_boolean au::edu::anu::qm::mta::Fragment::contains(::au::edu::anu::qm::QMAtom* atm) {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    x10_long idx = ::x10aux::nullCheck(atm)->getIndex();
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__54271;
        for (atom__54271 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(this->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__54271));
             ) {
            ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__54271));
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck((atom))->getIndex(),
                                         idx))) {
                return true;
                
            }
            
        }
    }
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    return false;
    
}

//#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
x10_int au::edu::anu::qm::mta::Fragment::getBondOrder(::au::edu::anu::qm::QMAtom* atm) {
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    if (!(this->contains(atm))) {
        return ((x10_int)0);
        
    }
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
      ::x10aux::nullCheck(atm)->getBonds();
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    x10_int nBonds = ((x10_int)0);
    
    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    {
        ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__54273;
        for (bond__54273 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(bonds)->iterator());
             ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__54273));
             ) {
            ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond =
              ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__54273));
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
            if (this->contains(::x10aux::class_cast< ::au::edu::anu::qm::QMAtom*>(bond->FMGL(second))))
            {
                nBonds = ((nBonds) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
    return nBonds;
    
}

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragment.x10"
::au::edu::anu::qm::mta::Fragment* au::edu::anu::qm::mta::Fragment::au__edu__anu__qm__mta__Fragment____this__au__edu__anu__qm__mta__Fragment(
  ) {
    return this;
    
}
void au::edu::anu::qm::mta::Fragment::__fieldInitializers_au_edu_anu_qm_mta_Fragment(
  ) {
    this->FMGL(centredOn) = ((x10_long)0ll);
    this->FMGL(energy) = 0.0;
    this->FMGL(cardinalitySign) = ((x10_int)0);
}
const ::x10aux::serialization_id_t au::edu::anu::qm::mta::Fragment::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::mta::Fragment::_deserializer);

void au::edu::anu::qm::mta::Fragment::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>::_serialize_body(buf);
    buf.write(this->FMGL(centredOn));
    buf.write(this->FMGL(energy));
    buf.write(this->FMGL(cardinalitySign));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::mta::Fragment::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::mta::Fragment* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragment>()) ::au::edu::anu::qm::mta::Fragment();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::mta::Fragment::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>::_deserialize_body(buf);
    FMGL(centredOn) = buf.read<x10_long>();
    FMGL(energy) = buf.read<x10_double>();
    FMGL(cardinalitySign) = buf.read<x10_int>();
}

::x10aux::RuntimeType au::edu::anu::qm::mta::Fragment::rtt;
void au::edu::anu::qm::mta::Fragment::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*> >()};
    rtt.initStageTwo("au.edu.anu.qm.mta.Fragment",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Fragment */
/*************************************************/
