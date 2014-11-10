/*************************************************/
/* START of Atom */
#include <au/edu/anu/chem/Atom.h>

#include <x10x/vector/Point3d.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Zero.h>
#include <x10/util/Container.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Any.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
/** The location of the atomic nucleus. */

//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
/** A list of atoms to which this atom is bonded. */

//#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
/** The unique identifier for this atom species within a given simulation. */

//#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
/** Index of this atom within a molecule or system. */

//#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
void au::edu::anu::chem::Atom::setIndex(x10_long i) {
    this->FMGL(index) = i;
}

//#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
x10_long au::edu::anu::chem::Atom::getIndex() {
    return this->FMGL(index);
    
}

//#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
void au::edu::anu::chem::Atom::_constructor(x10_int species, ::x10x::vector::Point3d centre) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::au::edu::anu::chem::Atom* this__8780 = this;
    ::x10aux::nullCheck(this__8780)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__8780)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8780)->FMGL(index) = ((x10_long)0ll);
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->FMGL(species) = species;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->FMGL(centre) = centre;
}
::au::edu::anu::chem::Atom* au::edu::anu::chem::Atom::_make(x10_int species,
                                                            ::x10x::vector::Point3d centre)
{
    ::au::edu::anu::chem::Atom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Atom>()) ::au::edu::anu::chem::Atom();
    this_->_constructor(species, centre);
    return this_;
}



//#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
void au::edu::anu::chem::Atom::_constructor(::x10x::vector::Point3d centre) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::au::edu::anu::chem::Atom* this__8781 = this;
    ::x10aux::nullCheck(this__8781)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__8781)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8781)->FMGL(index) = ((x10_long)0ll);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->FMGL(species) = ((x10_int)-1);
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->FMGL(centre) = centre;
}
::au::edu::anu::chem::Atom* au::edu::anu::chem::Atom::_make(::x10x::vector::Point3d centre)
{
    ::au::edu::anu::chem::Atom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Atom>()) ::au::edu::anu::chem::Atom();
    this_->_constructor(centre);
    return this_;
}



//#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
void au::edu::anu::chem::Atom::_constructor(::au::edu::anu::chem::Atom* atom) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::au::edu::anu::chem::Atom* this__8782 = this;
    ::x10aux::nullCheck(this__8782)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__8782)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8782)->FMGL(index) = ((x10_long)0ll);
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->FMGL(species) = ::x10aux::nullCheck(atom)->FMGL(species);
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->FMGL(centre) = ::x10aux::nullCheck(atom)->FMGL(centre);
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(atom)->FMGL(bonds),
                                  reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
        this->FMGL(bonds) = ::x10::util::ArrayList<void>::make< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >(
                              reinterpret_cast< ::x10::util::Container< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(atom)->FMGL(bonds)));
    }
    
}
::au::edu::anu::chem::Atom* au::edu::anu::chem::Atom::_make(
  ::au::edu::anu::chem::Atom* atom) {
    ::au::edu::anu::chem::Atom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Atom>()) ::au::edu::anu::chem::Atom();
    this_->_constructor(atom);
    return this_;
}



//#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*
  au::edu::anu::chem::Atom::getBonds() {
    return this->FMGL(bonds);
    
}

//#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
void au::edu::anu::chem::Atom::addBond(::au::edu::anu::chem::BondType bondType,
                                       ::au::edu::anu::chem::Atom* atom) {
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    this->addBondInternal(bondType, atom);
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(atom)->addBondInternal(bondType, this);
}

//#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
void au::edu::anu::chem::Atom::addBondInternal(::au::edu::anu::chem::BondType bondType,
                                               ::au::edu::anu::chem::Atom* atom) {
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    if ((::x10aux::struct_equals(this->FMGL(bonds), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
        this->FMGL(bonds) = (__extension__ ({
            ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* alloc__6994 =
               (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> > >()) ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >());
            (alloc__6994)->::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::_constructor();
            alloc__6994;
        }))
        ;
    }
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this->FMGL(bonds))->add((__extension__ ({
                                                    ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> alloc__6995 =
                                                       ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*>::_alloc();
                                                    
                                                    //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                                                    ::au::edu::anu::chem::BondType first__8783 =
                                                      bondType;
                                                    ::au::edu::anu::chem::Atom* second__8784 =
                                                      atom;
                                                    
                                                    //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                                                    alloc__6995->FMGL(first) =
                                                      first__8783;
                                                    
                                                    //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                                                    alloc__6995->FMGL(second) =
                                                      second__8784;
                                                    alloc__6995;
                                                }))
                                                );
}

//#line 87 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
::x10::lang::String* au::edu::anu::chem::Atom::toString() {
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    return ::x10::lang::String::format((&::au::edu::anu::chem::Atom_Strings::sl__32432),(__extension__ ({
        ::x10::lang::Rail< ::x10::lang::Any* >* t__32423 =
          ::x10::lang::Rail< ::x10::lang::Any* >::_makeUnsafe(((x10_long)4ll), false);
        t__32423->x10::lang::Rail< ::x10::lang::Any* >::__set(
          ((x10_long)0ll), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(species)));
        t__32423->x10::lang::Rail< ::x10::lang::Any* >::__set(
          ((x10_long)1ll), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(centre)->FMGL(i)));
        t__32423->x10::lang::Rail< ::x10::lang::Any* >::__set(
          ((x10_long)2ll), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(centre)->FMGL(j)));
        t__32423->x10::lang::Rail< ::x10::lang::Any* >::__set(
          ((x10_long)3ll), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(centre)->FMGL(k)));
        t__32423;
    }))
    );
    
}

//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
::au::edu::anu::chem::Atom* au::edu::anu::chem::Atom::au__edu__anu__chem__Atom____this__au__edu__anu__chem__Atom(
  ) {
    return this;
    
}
void au::edu::anu::chem::Atom::__fieldInitializers_au_edu_anu_chem_Atom(
  ) {
    this->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    this->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(index) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t au::edu::anu::chem::Atom::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::Atom::_deserializer);

void au::edu::anu::chem::Atom::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(centre));
    buf.write(this->FMGL(bonds));
    buf.write(this->FMGL(species));
    buf.write(this->FMGL(index));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::Atom::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::Atom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Atom>()) ::au::edu::anu::chem::Atom();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::Atom::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(centre) = buf.read< ::x10x::vector::Point3d>();
    FMGL(bonds) = buf.read< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>();
    FMGL(species) = buf.read<x10_int>();
    FMGL(index) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::chem::Atom::rtt;
void au::edu::anu::chem::Atom::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.Atom",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::chem::Atom_Strings::sl__32432("%d %#10.5f %#10.5f %#10.5f");

/* END of Atom */
/*************************************************/
