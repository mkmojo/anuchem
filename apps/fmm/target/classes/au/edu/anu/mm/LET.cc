/*************************************************/
/* START of LET */
#include <au/edu/anu/mm/LET.h>

#include <x10/lang/UInt.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/util/HashMap.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <x10/lang/Long.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
/** 
     * The combined U-List for this place. 
     * Consists of the octant IDs for all lowest-level octants that are not
     * well separated from some octant held at this place.
     */

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
/**
     * A cache of multipole copies for the combined V-list of all
     * boxes at this place.  Used to overlap fetching of the multipole
     * expansions with other computation.
     */

//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
/**
     * A cache of PointCharge for the combined U-list of all
     * boxes at this place.  Used to store fetched atoms from 
     * non-well-separated boxes for use in direct evaluations 
     * with all atoms at a given place.
     */

//#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
void au::edu::anu::mm::LET::_constructor(::x10::lang::Rail< x10_uint >* combinedUList) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    ::au::edu::anu::mm::LET* this__45962 = this;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    this->FMGL(combinedUList) = combinedUList;
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    this->FMGL(multipoleCopies) = (__extension__ ({
        ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::MultipoleExpansion*>* alloc__38143 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::MultipoleExpansion*> >()) ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::MultipoleExpansion*>());
        (alloc__38143)->::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::MultipoleExpansion*>::_constructor(
          (x10_long)(::x10aux::nullCheck(combinedUList)->FMGL(size)));
        alloc__38143;
    }))
    ;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    this->FMGL(cachedAtoms) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(combinedUList)->FMGL(size)));
}
::au::edu::anu::mm::LET* au::edu::anu::mm::LET::_make(::x10::lang::Rail< x10_uint >* combinedUList)
{
    ::au::edu::anu::mm::LET* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LET>()) ::au::edu::anu::mm::LET();
    this_->_constructor(combinedUList);
    return this_;
}



//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
::au::edu::anu::mm::MultipoleExpansion* au::edu::anu::mm::LET::getMultipoleForOctant(
  x10_uint mortonId) {
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    return ::x10aux::nullCheck(this->FMGL(multipoleCopies))->getOrElse(
             mortonId, ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
void au::edu::anu::mm::LET::setMultipoleForOctant(x10_uint mortonId,
                                                  ::au::edu::anu::mm::MultipoleExpansion* multipoleExp) {
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    ::x10aux::nullCheck(this->FMGL(multipoleCopies))->put(
      mortonId, multipoleExp);
}

//#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::mm::LET::getAtomDataForOctant(
  x10_uint mortonId) {
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    x10_long cacheIndex = ::x10::util::RailUtils::binarySearch< x10_uint >(
                            this->FMGL(combinedUList), mortonId);
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    if (((cacheIndex) >= (((x10_long)0ll)))) {
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
        return ::x10aux::nullCheck(this->FMGL(cachedAtoms))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                 cacheIndex);
        
    } else {
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
void au::edu::anu::mm::LET::setAtomDataForOctant(x10_uint mortonId,
                                                 ::x10::lang::Rail< x10_double >* atoms) {
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    x10_long cacheIndex = ::x10::util::RailUtils::binarySearch< x10_uint >(
                            this->FMGL(combinedUList), mortonId);
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
    if (((cacheIndex) >= (((x10_long)0ll)))) {
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
        ::x10aux::nullCheck(this->FMGL(cachedAtoms))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__set(
          cacheIndex, atoms);
    }
    
}

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LET.x10"
::au::edu::anu::mm::LET* au::edu::anu::mm::LET::au__edu__anu__mm__LET____this__au__edu__anu__mm__LET(
  ) {
    return this;
    
}
void au::edu::anu::mm::LET::__fieldInitializers_au_edu_anu_mm_LET(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::LET::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::LET::_deserializer);

void au::edu::anu::mm::LET::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(combinedUList));
    buf.write(this->FMGL(multipoleCopies));
    buf.write(this->FMGL(cachedAtoms));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::LET::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::LET* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LET>()) ::au::edu::anu::mm::LET();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::LET::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(combinedUList) = buf.read< ::x10::lang::Rail< x10_uint >*>();
    FMGL(multipoleCopies) = buf.read< ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::MultipoleExpansion*>*>();
    FMGL(cachedAtoms) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
}

::x10aux::RuntimeType au::edu::anu::mm::LET::rtt;
void au::edu::anu::mm::LET::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.LET",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of LET */
/*************************************************/
