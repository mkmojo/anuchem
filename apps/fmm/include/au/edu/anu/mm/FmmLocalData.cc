/*************************************************/
/* START of FmmLocalData */
#include <au/edu/anu/mm/FmmLocalData.h>

#include <x10/lang/UByte.h>
#include <x10/lang/Double.h>
#include <x10/lang/UInt.h>
#include <x10/lang/Long.h>
#include <x10/util/HashMap.h>
#include <au/edu/anu/mm/Octant.h>
#include <x10/lang/Rail.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/mm/LeafOctant.h>
#include <au/edu/anu/mm/LET.h>
#include <au/edu/anu/mm/FmmOperators.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/lang/Int.h>
#include <x10/lang/Math.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Boolean.h>
#include <x10/util/HashSet.h>
#include <x10/util/ListIterator.h>
#include <au/edu/anu/mm/LeafOctant__UList.h>
#include <au/edu/anu/mm/LeafOctant__UList__UListIterator.h>
#include <x10/util/MapSet.h>
#include <x10/lang/Iterator.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Place.h>

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** The maximum number of levels in the octree. */

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/**
     * The side length of the cube. 
     * To ensure balanced rounding errors within the multipole and local 
     * calculations, all force/energy calculations are performed within 
     * an origin-centred cube.
     */

//#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** All octants held at this place. */

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** The load on each leaf octant across all places. */

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** All leaf octants held at this place. */

//#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** The top-level octants at this place. */

//#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** 
     * A Rail holding the Octant ID of the first leaf octant at each place.
     * The final elements is the ID of the last leaf octant plus one.
     */

//#line 68 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** 
     * The locally essential tree at this place. 
     * @see Lashuk et al. (2009).
     */

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** The operator arrays for transformations and translations. */

//#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** cost estimates (in ns) per interaction = [P2P, M2L] */

//#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"

//#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
/** A multi-timer for the several segments of a single getEnergy invocation, indexed by the constants above. */

//#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
void au::edu::anu::mm::FmmLocalData::init(x10_int numTerms, x10_ubyte dMax,
                                          x10_int ws, x10_double size) {
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    this->FMGL(dMax) = dMax;
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    this->FMGL(size) = size;
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    this->FMGL(fmmOperators) = (__extension__ ({
        ::au::edu::anu::mm::FmmOperators* alloc__50167 =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmOperators>()) ::au::edu::anu::mm::FmmOperators());
        (alloc__50167)->::au::edu::anu::mm::FmmOperators::_constructor(numTerms,
                                                                       ws);
        alloc__50167;
    }))
    ;
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    x10_int maxLeafOctants = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::pow(8.0,((((x10_double) (dMax))) / (1.0))));
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    this->FMGL(octantLoads) = ::x10::lang::Rail< x10_long >::_make(((x10_long)(maxLeafOctants)));
}

//#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
x10_long au::edu::anu::mm::FmmLocalData::getPlaceId(::au::edu::anu::mm::OctantId leafOctantId) {
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    return this->getPlaceId(leafOctantId->au::edu::anu::mm::OctantId::getMortonId());
    
}

//#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
x10_long au::edu::anu::mm::FmmLocalData::getPlaceId(x10_uint mortonId) {
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    x10_long placeId = ::x10::util::RailUtils::binarySearch< x10_uint >(this->FMGL(firstLeafOctant),
                                                                        ((x10_uint) ((mortonId) & (((x10_uint)16777215u)))));
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    if (((placeId) < (((x10_long)0ll)))) {
        placeId = (-(((placeId) + (((x10_long)2ll)))));
    }
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    return placeId;
    
}

//#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
::au::edu::anu::mm::Octant* au::edu::anu::mm::FmmLocalData::getOctant(
  x10_uint mortonId) {
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    return this->FMGL(octants)->getOrElse(mortonId, ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
::au::edu::anu::mm::Octant* au::edu::anu::mm::FmmLocalData::getOctant(
  ::au::edu::anu::mm::OctantId octantId) {
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    return this->FMGL(octants)->getOrElse(octantId->au::edu::anu::mm::OctantId::getMortonId(),
                                          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
::x10::lang::Rail< x10_uint >* au::edu::anu::mm::FmmLocalData::getCombinedUList(
  x10_int ws) {
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    ::x10::util::HashSet<x10_uint>* combinedUSet =  (new (::x10aux::alloc_z< ::x10::util::HashSet<x10_uint> >()) ::x10::util::HashSet<x10_uint>());
    (combinedUSet)->::x10::util::HashSet<x10_uint>::_constructor();
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>* octant__50175;
        for (octant__50175 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>*>(this->FMGL(leafOctants)->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::hasNext(::x10aux::nullCheck(octant__50175));
             ) {
            ::au::edu::anu::mm::LeafOctant* octant = ::x10::util::ListIterator< ::au::edu::anu::mm::LeafOctant*>::next(::x10aux::nullCheck(octant__50175));
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
            ::au::edu::anu::mm::LeafOctant__UList* uList =
              ::x10aux::nullCheck(octant)->getUList();
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
            {
                ::au::edu::anu::mm::LeafOctant__UList__UListIterator* mortonId__50173;
                for (mortonId__50173 = reinterpret_cast< ::au::edu::anu::mm::LeafOctant__UList__UListIterator*>(::x10aux::nullCheck(uList)->iterator());
                     mortonId__50173->hasNext(); ) {
                    x10_uint mortonId = mortonId__50173->next();
                    
                    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
                    combinedUSet->add(mortonId);
                }
            }
            
        }
    }
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    ::x10::lang::Rail< x10_uint >* combinedUList = ::x10::lang::Rail< x10_uint >::_make(combinedUSet->size());
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    {
        ::x10::lang::Iterator<x10_uint>* mortonId__50177;
        for (mortonId__50177 = combinedUSet->iterator(); ::x10::lang::Iterator<x10_uint>::hasNext(::x10aux::nullCheck(mortonId__50177));
             ) {
            x10_uint mortonId = ::x10::lang::Iterator<x10_uint>::next(::x10aux::nullCheck(mortonId__50177));
            
            //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
            combinedUList->x10::lang::Rail< x10_uint >::__set(
              (__extension__ ({
                  x10_long pre__50152 = j;
                  j = ((j) + (((x10_long)1ll)));
                  pre__50152;
              }))
              , mortonId);
        }
    }
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    ::x10::util::RailUtils::sort< x10_uint >(combinedUList);
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
    return combinedUList;
    
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
::au::edu::anu::mm::FmmLocalData* au::edu::anu::mm::FmmLocalData::au__edu__anu__mm__FmmLocalData____this__au__edu__anu__mm__FmmLocalData(
  ) {
    return this;
    
}
void au::edu::anu::mm::FmmLocalData::_constructor() {
    this->au::edu::anu::mm::FmmLocalData::__fieldInitializers_au_edu_anu_mm_FmmLocalData();
}
::au::edu::anu::mm::FmmLocalData* au::edu::anu::mm::FmmLocalData::_make(
  ) {
    ::au::edu::anu::mm::FmmLocalData* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmLocalData>()) ::au::edu::anu::mm::FmmLocalData();
    this_->_constructor();
    return this_;
}


void au::edu::anu::mm::FmmLocalData::__fieldInitializers_au_edu_anu_mm_FmmLocalData(
  ) {
    this->FMGL(dMax) = ((x10_ubyte)0);
    this->FMGL(size) = 0.0;
    this->FMGL(octants) = (__extension__ ({
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
        ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>* alloc__50168 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*> >()) ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>());
        (alloc__50168)->::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>::_constructor();
        alloc__50168;
    }))
    ;
    this->FMGL(octantLoads) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(leafOctants) = (__extension__ ({
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
        ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>* alloc__50169 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*> >()) ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>());
        (alloc__50169)->::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>::_constructor();
        alloc__50169;
    }))
    ;
    this->FMGL(topLevelOctants) = (__extension__ ({
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
        ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>* alloc__50170 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*> >()) ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>());
        (alloc__50170)->::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>::_constructor();
        alloc__50170;
    }))
    ;
    this->FMGL(firstLeafOctant) = ::x10::lang::Rail< x10_uint >::_make(((((x10_long)::x10aux::num_hosts)) + (((x10_long)1ll))));
    this->FMGL(locallyEssentialTree) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::LET*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(fmmOperators) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::FmmOperators*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cost) = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    this->FMGL(timer) = (__extension__ ({
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/FmmLocalData.x10"
        ::au::edu::anu::util::Timer* alloc__50171 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__50171)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)11ll));
        alloc__50171;
    }))
    ;
}
const ::x10aux::serialization_id_t au::edu::anu::mm::FmmLocalData::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::FmmLocalData::_deserializer);

void au::edu::anu::mm::FmmLocalData::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(dMax));
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(octants));
    buf.write(this->FMGL(octantLoads));
    buf.write(this->FMGL(leafOctants));
    buf.write(this->FMGL(topLevelOctants));
    buf.write(this->FMGL(firstLeafOctant));
    buf.write(this->FMGL(locallyEssentialTree));
    buf.write(this->FMGL(fmmOperators));
    buf.write(this->FMGL(cost));
    buf.write(this->FMGL(timer));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::FmmLocalData::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::FmmLocalData* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::FmmLocalData>()) ::au::edu::anu::mm::FmmLocalData();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::FmmLocalData::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(dMax) = buf.read<x10_ubyte>();
    FMGL(size) = buf.read<x10_double>();
    FMGL(octants) = buf.read< ::x10::util::HashMap<x10_uint, ::au::edu::anu::mm::Octant*>*>();
    FMGL(octantLoads) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(leafOctants) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::mm::LeafOctant*>*>();
    FMGL(topLevelOctants) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::mm::Octant*>*>();
    FMGL(firstLeafOctant) = buf.read< ::x10::lang::Rail< x10_uint >*>();
    FMGL(locallyEssentialTree) = buf.read< ::au::edu::anu::mm::LET*>();
    FMGL(fmmOperators) = buf.read< ::au::edu::anu::mm::FmmOperators*>();
    FMGL(cost) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(timer) = buf.read< ::au::edu::anu::util::Timer*>();
}

::x10aux::RuntimeType au::edu::anu::mm::FmmLocalData::rtt;
void au::edu::anu::mm::FmmLocalData::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.FmmLocalData",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of FmmLocalData */
/*************************************************/
