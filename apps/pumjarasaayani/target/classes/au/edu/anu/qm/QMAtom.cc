/*************************************************/
/* START of QMAtom */
#include <au/edu/anu/qm/QMAtom.h>

#include <au/edu/anu/chem/Atom.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <x10/lang/Int.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Zero.h>
#include <x10/util/ArrayList.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/compiler/Synthetic.h>

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
void au::edu::anu::qm::QMAtom::_constructor(x10_int species, ::x10x::vector::Point3d centre) {
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    ::au::edu::anu::chem::Atom* this__59296 = this;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    x10_int species__59297 = species;
    ::x10x::vector::Point3d centre__59298 = centre;
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59296)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__59296)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__59296)->FMGL(index) = ((x10_long)0ll);
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59296)->FMGL(species) = species__59297;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59296)->FMGL(centre) = centre__59298;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    ::au::edu::anu::qm::QMAtom* this__59295 = this;
    ::x10aux::nullCheck(this__59295)->FMGL(basisFunctions) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(index) = ((x10_long)0ll);
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(dummy) = false;
}
::au::edu::anu::qm::QMAtom* au::edu::anu::qm::QMAtom::_make(x10_int species,
                                                            ::x10x::vector::Point3d centre)
{
    ::au::edu::anu::qm::QMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::QMAtom>()) ::au::edu::anu::qm::QMAtom();
    this_->_constructor(species, centre);
    return this_;
}



//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
void au::edu::anu::qm::QMAtom::_constructor(::x10x::vector::Point3d centre) {
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    ::au::edu::anu::chem::Atom* this__59300 = this;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10x::vector::Point3d centre__59301 = centre;
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59300)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__59300)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__59300)->FMGL(index) = ((x10_long)0ll);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59300)->FMGL(species) = ((x10_int)-1);
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59300)->FMGL(centre) = centre__59301;
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    ::au::edu::anu::qm::QMAtom* this__59299 = this;
    ::x10aux::nullCheck(this__59299)->FMGL(basisFunctions) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(index) = ((x10_long)0ll);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(dummy) = false;
}
::au::edu::anu::qm::QMAtom* au::edu::anu::qm::QMAtom::_make(::x10x::vector::Point3d centre)
{
    ::au::edu::anu::qm::QMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::QMAtom>()) ::au::edu::anu::qm::QMAtom();
    this_->_constructor(centre);
    return this_;
}



//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
void au::edu::anu::qm::QMAtom::_constructor(x10_int species,
                                            ::x10x::vector::Point3d centre,
                                            x10_boolean dummy) {
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    ::au::edu::anu::chem::Atom* this__59303 = this;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    x10_int species__59304 = species;
    ::x10x::vector::Point3d centre__59305 = centre;
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59303)->FMGL(centre) = ::x10aux::zeroValue< ::x10x::vector::Point3d >();
    ::x10aux::nullCheck(this__59303)->FMGL(bonds) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__59303)->FMGL(index) = ((x10_long)0ll);
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59303)->FMGL(species) = species__59304;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Atom.x10"
    ::x10aux::nullCheck(this__59303)->FMGL(centre) = centre__59305;
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    ::au::edu::anu::qm::QMAtom* this__59302 = this;
    ::x10aux::nullCheck(this__59302)->FMGL(basisFunctions) =
      (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(index) = ((x10_long)0ll);
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(dummy) = dummy;
}
::au::edu::anu::qm::QMAtom* au::edu::anu::qm::QMAtom::_make(
  x10_int species, ::x10x::vector::Point3d centre, x10_boolean dummy)
{
    ::au::edu::anu::qm::QMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::QMAtom>()) ::au::edu::anu::qm::QMAtom();
    this_->_constructor(species, centre, dummy);
    return this_;
}



//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
x10_boolean au::edu::anu::qm::QMAtom::isDummy() {
    return this->FMGL(dummy);
    
}

//#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
void au::edu::anu::qm::QMAtom::setBasisFunctions(::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bfs) {
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
    this->FMGL(basisFunctions) = bfs;
}

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*
  au::edu::anu::qm::QMAtom::getBasisFunctions() {
    return this->FMGL(basisFunctions);
    
}

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/QMAtom.x10"
::au::edu::anu::qm::QMAtom* au::edu::anu::qm::QMAtom::au__edu__anu__qm__QMAtom____this__au__edu__anu__qm__QMAtom(
  ) {
    return this;
    
}
void au::edu::anu::qm::QMAtom::__fieldInitializers_au_edu_anu_qm_QMAtom(
  ) {
    this->FMGL(basisFunctions) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::QMAtom::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::QMAtom::_deserializer);

void au::edu::anu::qm::QMAtom::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::chem::Atom::_serialize_body(buf);
    buf.write(this->FMGL(dummy));
    buf.write(this->FMGL(basisFunctions));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::QMAtom::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::QMAtom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::QMAtom>()) ::au::edu::anu::qm::QMAtom();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::QMAtom::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::Atom::_deserialize_body(buf);
    FMGL(dummy) = buf.read<x10_boolean>();
    FMGL(basisFunctions) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>();
}

::x10aux::RuntimeType au::edu::anu::qm::QMAtom::rtt;
void au::edu::anu::qm::QMAtom::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::chem::Atom>()};
    rtt.initStageTwo("au.edu.anu.qm.QMAtom",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of QMAtom */
/*************************************************/
