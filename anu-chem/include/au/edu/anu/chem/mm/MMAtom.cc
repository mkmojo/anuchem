/*************************************************/
/* START of MMAtom */
#include <au/edu/anu/chem/mm/MMAtom.h>

#include <au/edu/anu/chem/Atom.h>
#include <x10x/vector/Vector3d.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Zero.h>
#include <x10/util/ArrayList.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/lang/Math.h>
#include <au/edu/anu/chem/mm/MMAtom__PackedRepresentation.h>
#include <x10/compiler/Synthetic.h>

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
/** The current force acting upon this atom. */

//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
/** The current velocity of this atom. */

//#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
/** The mass in atomic units. */

//#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
/** The effective charge in atomic units. */

//#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
void au::edu::anu::chem::mm::MMAtom::_constructor(x10_int species, ::x10x::vector::Point3d centre,
                                                  x10_double mass,
                                                  x10_double charge) {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    ::au::edu::anu::chem::Atom* this__24895 = this;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    x10_int species__24896 = species;
    ::x10x::vector::Point3d centre__24897 = centre;
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__24895)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__24895)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__24895)->FMGL(index) = ((x10_long)0ll);
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__24895)->FMGL(species) = species__24896;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__24895)->FMGL(centre) = centre__24897;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->au::edu::anu::chem::mm::MMAtom::__fieldInitializers_au_edu_anu_chem_mm_MMAtom();
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(mass) = mass;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(charge) = charge;
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(force) = ::x10x::vector::Vector3d::FMGL(NULL__get)();
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(velocity) = ::x10x::vector::Vector3d::FMGL(NULL__get)();
}
::au::edu::anu::chem::mm::MMAtom* au::edu::anu::chem::mm::MMAtom::_make(
  x10_int species, ::x10x::vector::Point3d centre, x10_double mass,
  x10_double charge) {
    ::au::edu::anu::chem::mm::MMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom();
    this_->_constructor(species, centre, mass, charge);
    return this_;
}



//#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
void au::edu::anu::chem::mm::MMAtom::_constructor(::x10x::vector::Point3d centre,
                                                  x10_double mass,
                                                  x10_double charge) {
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    ::au::edu::anu::chem::Atom* this__24898 = this;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10x::vector::Point3d centre__24899 = centre;
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__24898)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__24898)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__24898)->FMGL(index) = ((x10_long)0ll);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__24898)->FMGL(species) = ((x10_int)-1);
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__24898)->FMGL(centre) = centre__24899;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->au::edu::anu::chem::mm::MMAtom::__fieldInitializers_au_edu_anu_chem_mm_MMAtom();
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(mass) = mass;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(charge) = charge;
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(force) = ::x10x::vector::Vector3d::FMGL(NULL__get)();
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(velocity) = ::x10x::vector::Vector3d::FMGL(NULL__get)();
}
::au::edu::anu::chem::mm::MMAtom* au::edu::anu::chem::mm::MMAtom::_make(
  ::x10x::vector::Point3d centre, x10_double mass, x10_double charge)
{
    ::au::edu::anu::chem::mm::MMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom();
    this_->_constructor(centre, mass, charge);
    return this_;
}



//#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
void au::edu::anu::chem::mm::MMAtom::_constructor(::au::edu::anu::chem::mm::MMAtom* atom) {
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    (this)->::au::edu::anu::chem::Atom::_constructor(reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom));
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->au::edu::anu::chem::mm::MMAtom::__fieldInitializers_au_edu_anu_chem_mm_MMAtom();
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(mass) = ::x10aux::nullCheck(atom)->FMGL(mass);
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(charge) = ::x10aux::nullCheck(atom)->FMGL(charge);
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(force) = ::x10aux::nullCheck(atom)->FMGL(force);
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    this->FMGL(velocity) = ::x10aux::nullCheck(atom)->FMGL(velocity);
}
::au::edu::anu::chem::mm::MMAtom* au::edu::anu::chem::mm::MMAtom::_make(
  ::au::edu::anu::chem::mm::MMAtom* atom) {
    ::au::edu::anu::chem::mm::MMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom();
    this_->_constructor(atom);
    return this_;
}



//#line 66 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
void au::edu::anu::chem::mm::MMAtom::_constructor(::x10x::vector::Point3d centre) {
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    (this)->::au::edu::anu::chem::mm::MMAtom::_constructor(
      centre, 0.0, 0.0);
    
}
::au::edu::anu::chem::mm::MMAtom* au::edu::anu::chem::mm::MMAtom::_make(
  ::x10x::vector::Point3d centre) {
    ::au::edu::anu::chem::mm::MMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom();
    this_->_constructor(centre);
    return this_;
}



//#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
x10_double au::edu::anu::chem::mm::MMAtom::pairEnergy(::au::edu::anu::chem::mm::MMAtom* atom2) {
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    return ((((this->FMGL(charge)) * (::x10aux::nullCheck(atom2)->FMGL(charge)))) / ((__extension__ ({
        ::x10x::vector::Point3d this__24879 = this->FMGL(centre);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d b__24878 = ::x10aux::nullCheck(atom2)->FMGL(centre);
        ::x10::lang::MathNatives::sqrt((__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__24880 = b__24878;
            x10_double ret__24884;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__24900 = ((this__24879->FMGL(i)) - (b__24880->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__24901 = ((this__24879->FMGL(j)) - (b__24880->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__24902 = ((this__24879->FMGL(k)) - (b__24880->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__24884 = ((((((di__24900) * (di__24900))) + (((dj__24901) * (dj__24901))))) + (((dk__24902) * (dk__24902))));
            ret__24884;
        }))
        );
    }))
    ));
    
}

//#line 86 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
::au::edu::anu::chem::mm::MMAtom__PackedRepresentation au::edu::anu::chem::mm::MMAtom::getPackedRepresentation(
  ) {
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation alloc__24907 =
       ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_alloc();
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    x10_int species__24904 = this->FMGL(species);
    x10_double charge__24905 = this->FMGL(charge);
    ::x10x::vector::Point3d centre__24906 = this->FMGL(centre);
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    alloc__24907->FMGL(species) = species__24904;
    alloc__24907->FMGL(charge) = charge__24905;
    alloc__24907->FMGL(centre) = centre__24906;
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    return alloc__24907;
    
}

//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
::au::edu::anu::chem::mm::MMAtom* au::edu::anu::chem::mm::MMAtom::au__edu__anu__chem__mm__MMAtom____this__au__edu__anu__chem__mm__MMAtom(
  ) {
    return this;
    
}
void au::edu::anu::chem::mm::MMAtom::__fieldInitializers_au_edu_anu_chem_mm_MMAtom(
  ) {
    this->FMGL(force) = ::x10aux::zeroValue< ::x10x::vector::Vector3d >();
    this->FMGL(velocity) = ::x10aux::zeroValue< ::x10x::vector::Vector3d >();
}
const ::x10aux::serialization_id_t au::edu::anu::chem::mm::MMAtom::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::mm::MMAtom::_deserializer);

void au::edu::anu::chem::mm::MMAtom::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::chem::Atom::_serialize_body(buf);
    buf.write(this->FMGL(force));
    buf.write(this->FMGL(velocity));
    buf.write(this->FMGL(mass));
    buf.write(this->FMGL(charge));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::mm::MMAtom::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::MMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::mm::MMAtom::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::Atom::_deserialize_body(buf);
    FMGL(force) = buf.read< ::x10x::vector::Vector3d>();
    FMGL(velocity) = buf.read< ::x10x::vector::Vector3d>();
    FMGL(mass) = buf.read<x10_double>();
    FMGL(charge) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::chem::mm::MMAtom::rtt;
void au::edu::anu::chem::mm::MMAtom::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::chem::Atom>()};
    rtt.initStageTwo("au.edu.anu.chem.mm.MMAtom",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of MMAtom */
/*************************************************/
/*************************************************/
/* START of MMAtom$PackedRepresentation */
#include <au/edu/anu/chem/mm/MMAtom__PackedRepresentation.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>

//#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class MMAtom__PackedRepresentation_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation> {
public:
    static ::x10::lang::Any::itable< MMAtom__PackedRepresentation_ibox0 > itable;
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
::x10::lang::Any::itable< MMAtom__PackedRepresentation_ibox0 >  MMAtom__PackedRepresentation_ibox0::itable(&MMAtom__PackedRepresentation_ibox0::equals, &MMAtom__PackedRepresentation_ibox0::hashCode, &MMAtom__PackedRepresentation_ibox0::toString, &MMAtom__PackedRepresentation_ibox0::typeName);
} } } } } 
::x10::lang::Any::itable< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation >  au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_itable_0(&au::edu::anu::chem::mm::MMAtom__PackedRepresentation::equals, &au::edu::anu::chem::mm::MMAtom__PackedRepresentation::hashCode, &au::edu::anu::chem::mm::MMAtom__PackedRepresentation::toString, &au::edu::anu::chem::mm::MMAtom__PackedRepresentation::typeName);
::x10aux::itable_entry au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::mm::MMAtom__PackedRepresentation")};
::x10aux::itable_entry au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::mm::MMAtom__PackedRepresentation_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::mm::MMAtom__PackedRepresentation")};

//#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
void au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_constructor(x10_int species,
                                                                        x10_double charge,
                                                                        ::x10x::vector::Point3d centre) {
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    FMGL(species) = species;
    FMGL(charge) = charge;
    FMGL(centre) = centre;
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
    ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation this__24903 =
      (*this);
    
}
::au::edu::anu::chem::mm::MMAtom__PackedRepresentation au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_make(
  x10_int species, x10_double charge, ::x10x::vector::Point3d centre)
{
    ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation this_; 
    this_->_constructor(species, charge, centre);
    return this_;
}



//#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/MMAtom.x10"
::x10::lang::String* au::edu::anu::chem::mm::MMAtom__PackedRepresentation::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::chem::mm::MMAtom__PackedRepresentation::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32651), (&::au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32652)), (*this)->FMGL(species)), (&::au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32653)), (*this)->FMGL(charge)), (&::au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32654)), (*this)->FMGL(centre));
    
}
x10_int au::edu::anu::chem::mm::MMAtom__PackedRepresentation::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(species))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(charge))));
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(centre)->x10x::vector::Point3d::hashCode()));
    return result;
    
}
x10_boolean au::edu::anu::chem::mm::MMAtom__PackedRepresentation::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::chem::mm::MMAtom__PackedRepresentation::equals(
             ::x10aux::class_cast< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation>(other));
    
}
x10_boolean au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation>(other));
    
}
void ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_serialize(::au::edu::anu::chem::mm::MMAtom__PackedRepresentation this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(species));
    buf.write(this_->FMGL(charge));
    buf.write(this_->FMGL(centre));
    
}

void ::au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(species) = buf.read<x10_int>();
    FMGL(charge) = buf.read<x10_double>();
    FMGL(centre) = buf.read< ::x10x::vector::Point3d>();
}


::x10aux::RuntimeType au::edu::anu::chem::mm::MMAtom__PackedRepresentation::rtt;
void au::edu::anu::chem::mm::MMAtom__PackedRepresentation::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.chem.mm.MMAtom.PackedRepresentation",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32651("struct au.edu.anu.chem.mm.MMAtom.PackedRepresentation:");
::x10::lang::String au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32652(" species=");
::x10::lang::String au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32654(" centre=");
::x10::lang::String au::edu::anu::chem::mm::MMAtom__PackedRepresentation_Strings::sl__32653(" charge=");

/* END of MMAtom$PackedRepresentation */
/*************************************************/
