/*************************************************/
/* START of Octant */
#include <au/edu/anu/mm/Octant.h>

#include <x10/lang/Comparable.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <au/edu/anu/mm/LocalExpansion.h>
#include <au/edu/anu/mm/Octant__VList.h>
#include <x10/lang/Int.h>
#include <x10/lang/UByte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10x/vector/Point3d.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/mm/FmmLocalData.h>
#include <au/edu/anu/mm/FastMultipoleMethod.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Complex.h>
#include <au/edu/anu/mm/FmmOperators.h>
#include <au/edu/anu/mm/LET.h>
#include <au/edu/anu/mm/Expansion.h>
#include <au/edu/anu/mm/FmmScratch.h>
#include <au/edu/anu/mm/Octant__VList__VListIterator.h>
#include <x10/lang/UInt.h>
#include <x10x/vector/Vector3d.h>
#include <x10/util/HashSet.h>
#include <x10/lang/Place.h>
#include <x10/util/MapSet.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/util/Timer.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_OCTANT__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_OCTANT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Octant__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Octant__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::x10aux::nullCheck(::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(locallyEssentialTree))->setMultipoleForOctant(
          mortonId, multipoleExp);
    }
    
    // captured environment
    x10_uint mortonId;
    ::au::edu::anu::mm::MultipoleExpansion* multipoleExp;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->mortonId);
        buf.write(this->multipoleExp);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Octant__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_Octant__closure__1>();
        buf.record_reference(storage);
        x10_uint that_mortonId = buf.read<x10_uint>();
        ::au::edu::anu::mm::MultipoleExpansion* that_multipoleExp = buf.read< ::au::edu::anu::mm::MultipoleExpansion*>();
        au_edu_anu_mm_Octant__closure__1* this_ = new (storage) au_edu_anu_mm_Octant__closure__1(that_mortonId, that_multipoleExp);
        return this_;
    }
    
    au_edu_anu_mm_Octant__closure__1(x10_uint mortonId, ::au::edu::anu::mm::MultipoleExpansion* multipoleExp) : mortonId(mortonId), multipoleExp(multipoleExp) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10:157-159";
    }

};

#endif // AU_EDU_ANU_MM_OCTANT__CLOSURE__1_CLOSURE

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
/** The multipole expansion of the charges within this box. */

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
/** The Taylor expansion of the potential within this box due to particles in well separated boxes. */

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
/** The V-list for this octant, or null if this is a ghost octant. */

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
/** 
     * Flag set to true when octant multipole expansion is consistent i.e.
     * completed in upward pass, and set to false again during downward pass.
     */

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant::_constructor(::au::edu::anu::mm::OctantId id,
                                            x10_int numTerms, x10_int ws,
                                            x10_ubyte dMax) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::Octant* this__43755 = this;
    ::x10aux::nullCheck(this__43755)->FMGL(parent) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__43755)->FMGL(vList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant__VList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__43755)->FMGL(multipoleReady) = false;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(id) = id;
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(multipoleExp) = (__extension__ ({
        ::au::edu::anu::mm::MultipoleExpansion* alloc__34601 =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
        (alloc__34601)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
          ((x10_long)(numTerms)));
        alloc__34601;
    }))
    ;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(localExp) = (__extension__ ({
        ::au::edu::anu::mm::LocalExpansion* alloc__34602 =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion());
        (alloc__34602)->::au::edu::anu::mm::LocalExpansion::_constructor(
          ((x10_long)(numTerms)));
        alloc__34602;
    }))
    ;
}


//#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant::_constructor(::au::edu::anu::mm::OctantId id) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::Octant* this__43756 = this;
    ::x10aux::nullCheck(this__43756)->FMGL(parent) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__43756)->FMGL(vList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant__VList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__43756)->FMGL(multipoleReady) = false;
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(id) = id;
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(multipoleExp) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(localExp) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::LocalExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}


//#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_int au::edu::anu::mm::Octant::compareTo(::au::edu::anu::mm::Octant* b) {
    return this->FMGL(id)->au::edu::anu::mm::OctantId::compareTo(::x10aux::nullCheck(b)->FMGL(id));
    
}

//#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 69 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::x10x::vector::Point3d au::edu::anu::mm::Octant::getCentre(x10_double size) {
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_ubyte dim = ((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(this->FMGL(id)->FMGL(level)))))));
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_double sideLength = ((size) / (((x10_double) (dim))));
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_double offset = ((0.5) * (size));
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::x10x::vector::Point3d alloc__43760 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__43757 = ((((((((x10_double) (this->FMGL(id)->FMGL(x)))) + (0.5))) * (sideLength))) - (offset));
    x10_double j__43758 = ((((((((x10_double) (this->FMGL(id)->FMGL(y)))) + (0.5))) * (sideLength))) - (offset));
    x10_double k__43759 = ((((((((x10_double) (this->FMGL(id)->FMGL(z)))) + (0.5))) * (sideLength))) - (offset));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    alloc__43760->FMGL(i) = i__43757;
    alloc__43760->FMGL(j) = j__43758;
    alloc__43760->FMGL(k) = k__43759;
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return alloc__43760;
    
}

//#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant::multipolesToLocal() {
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_double sideLength = ((local->FMGL(size)) / (((x10_double) (((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(this->FMGL(id)->FMGL(level)))))))))));
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>* myComplexK =
      ::x10aux::nullCheck(local->FMGL(fmmOperators))->FMGL(complexK);
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* myWignerB =
      ::x10aux::nullCheck(local->FMGL(fmmOperators))->FMGL(wignerB);
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::LET* locallyEssentialTree = local->FMGL(locallyEssentialTree);
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long numTerms = ::x10aux::nullCheck(this->FMGL(localExp))->FMGL(p);
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::FmmScratch* scratch = ::au::edu::anu::mm::FmmScratch::getWorkerLocal();
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    {
        ::au::edu::anu::mm::Octant__VList__VListIterator* octantIndex2__34611;
        for (octantIndex2__34611 = reinterpret_cast< ::au::edu::anu::mm::Octant__VList__VListIterator*>(::x10aux::nullCheck(this->FMGL(vList))->iterator());
             octantIndex2__34611->hasNext(); ) {
            ::au::edu::anu::mm::OctantId octantIndex2 = octantIndex2__34611->next();
            
            //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            ::au::edu::anu::mm::MultipoleExpansion* box2MultipoleExp =
              ::x10aux::nullCheck(locallyEssentialTree)->getMultipoleForOctant(
                octantIndex2->au::edu::anu::mm::OctantId::getMortonId());
            
            //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            if ((!::x10aux::struct_equals(box2MultipoleExp,
                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                x10_long dx2 = ((((x10_long)(octantIndex2->FMGL(x)))) - (((x10_long)(this->FMGL(id)->FMGL(x)))));
                
                //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                x10_long dy2 = ((((x10_long)(octantIndex2->FMGL(y)))) - (((x10_long)(this->FMGL(id)->FMGL(y)))));
                
                //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                x10_long dz2 = ((((x10_long)(octantIndex2->FMGL(z)))) - (((x10_long)(this->FMGL(id)->FMGL(z)))));
                
                //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                ::x10aux::nullCheck(this->FMGL(localExp))->transformAndAddToLocal(
                  ::x10aux::nullCheck(scratch)->FMGL(exp),
                  ::x10aux::nullCheck(scratch)->FMGL(array),
                  (__extension__ ({
                      
                      //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                      ::x10x::vector::Vector3d alloc__34604 =
                         ::x10x::vector::Vector3d::_alloc();
                      
                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                      x10_double i__43761 = ((((x10_double) (dx2))) * (sideLength));
                      x10_double j__43762 = ((((x10_double) (dy2))) * (sideLength));
                      x10_double k__43763 = ((((x10_double) (dz2))) * (sideLength));
                      
                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                      alloc__34604->FMGL(i) = i__43761;
                      alloc__34604->FMGL(j) = j__43762;
                      alloc__34604->FMGL(k) = k__43763;
                      alloc__34604;
                  }))
                  , (__extension__ ({
                      
                      //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      x10_long i__43367 = dx2;
                      x10_long i__43368 = dy2;
                      x10_long i__43369 = dz2;
                      ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__43370;
                      
                      //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      ret__43370 = ::x10aux::nullCheck(myComplexK)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__apply(
                                     (__extension__ ({
                                         
                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         x10_long i__43765 =
                                           i__43367;
                                         x10_long i__43766 =
                                           i__43368;
                                         x10_long i__43767 =
                                           i__43369;
                                         x10_long ret__43768;
                                         
                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         x10_long offset__43764 =
                                           ((i__43765) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min0)));
                                         
                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         offset__43764 = ((((((offset__43764) * (::x10aux::nullCheck(myComplexK)->FMGL(layout_stride1)))) + (i__43766))) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min1)));
                                         
                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         offset__43764 = ((((((offset__43764) * (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                   ((x10_long)0ll))))) + (i__43767))) - (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)1ll))));
                                         
                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         ret__43768 = offset__43764;
                                         ret__43768;
                                     }))
                                     );
                      ret__43370;
                  }))
                  , box2MultipoleExp, (__extension__ ({
                      
                      //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      x10_long i__43378 = dx2;
                      x10_long i__43379 = dy2;
                      x10_long i__43380 = dz2;
                      ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__43381;
                      
                      //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      ret__43381 = ::x10aux::nullCheck(myWignerB)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__apply(
                                     (__extension__ ({
                                         
                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         x10_long i__43770 =
                                           i__43378;
                                         x10_long i__43771 =
                                           i__43379;
                                         x10_long i__43772 =
                                           i__43380;
                                         x10_long ret__43773;
                                         
                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         x10_long offset__43769 =
                                           ((i__43770) - (::x10aux::nullCheck(myWignerB)->FMGL(layout_min0)));
                                         
                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         offset__43769 = ((((((offset__43769) * (::x10aux::nullCheck(myWignerB)->FMGL(layout_stride1)))) + (i__43771))) - (::x10aux::nullCheck(myWignerB)->FMGL(layout_min1)));
                                         
                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         offset__43769 = ((((((offset__43769) * (::x10aux::nullCheck(::x10aux::nullCheck(myWignerB)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                   ((x10_long)0ll))))) + (i__43772))) - (::x10aux::nullCheck(::x10aux::nullCheck(myWignerB)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)1ll))));
                                         
                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                         ret__43773 = offset__43769;
                                         ret__43773;
                                     }))
                                     );
                      ret__43381;
                  }))
                  );
            }
            
        }
    }
    
}

//#line 118 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant::addParentExpansion(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion) {
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    if ((!::x10aux::struct_equals(parentLocalExpansion, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
        
        //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        x10_double sideLength = ((local->FMGL(size)) / (((x10_double) (((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(this->FMGL(id)->FMGL(level)))))))))));
        
        //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>* myComplexK =
          ::x10aux::nullCheck(local->FMGL(fmmOperators))->FMGL(complexK);
        
        //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* myWignerC =
          ::x10aux::nullCheck(local->FMGL(fmmOperators))->FMGL(wignerC);
        
        //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        x10_long numTerms = ::x10aux::nullCheck(this->FMGL(localExp))->FMGL(p);
        
        //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::au::edu::anu::mm::FmmScratch* scratch = ::au::edu::anu::mm::FmmScratch::getWorkerLocal();
        
        //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        x10_long dx = ((((((x10_long)2ll)) * (((((x10_long)(this->FMGL(id)->FMGL(x)))) % ::x10aux::zeroCheck(((x10_long)2ll)))))) - (((x10_long)1ll)));
        
        //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        x10_long dy = ((((((x10_long)2ll)) * (((((x10_long)(this->FMGL(id)->FMGL(y)))) % ::x10aux::zeroCheck(((x10_long)2ll)))))) - (((x10_long)1ll)));
        
        //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        x10_long dz = ((((((x10_long)2ll)) * (((((x10_long)(this->FMGL(id)->FMGL(z)))) % ::x10aux::zeroCheck(((x10_long)2ll)))))) - (((x10_long)1ll)));
        
        //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::x10aux::nullCheck(this->FMGL(localExp))->translateAndAddLocal(
          ::x10aux::nullCheck(scratch)->FMGL(exp), ::x10aux::nullCheck(scratch)->FMGL(array),
          (__extension__ ({
              
              //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
              ::x10x::vector::Vector3d alloc__34605 =  ::x10x::vector::Vector3d::_alloc();
              
              //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              x10_double i__43774 = ((((((x10_double) (dx))) * (0.5))) * (sideLength));
              x10_double j__43775 = ((((((x10_double) (dy))) * (0.5))) * (sideLength));
              x10_double k__43776 = ((((((x10_double) (dz))) * (0.5))) * (sideLength));
              
              //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              alloc__34605->FMGL(i) = i__43774;
              alloc__34605->FMGL(j) = j__43775;
              alloc__34605->FMGL(k) = k__43776;
              alloc__34605;
          }))
          , (__extension__ ({
              
              //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
              x10_long i__43395 = dx;
              x10_long i__43396 = dy;
              x10_long i__43397 = dz;
              ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__43398;
              
              //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
              ret__43398 = ::x10aux::nullCheck(myComplexK)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__apply(
                             (__extension__ ({
                                 
                                 //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 x10_long i__43778 = i__43395;
                                 x10_long i__43779 = i__43396;
                                 x10_long i__43780 = i__43397;
                                 x10_long ret__43781;
                                 
                                 //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 x10_long offset__43777 =
                                   ((i__43778) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min0)));
                                 
                                 //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 offset__43777 = ((((((offset__43777) * (::x10aux::nullCheck(myComplexK)->FMGL(layout_stride1)))) + (i__43779))) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min1)));
                                 
                                 //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 offset__43777 = ((((((offset__43777) * (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((x10_long)0ll))))) + (i__43780))) - (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                   ((x10_long)1ll))));
                                 
                                 //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 ret__43781 = offset__43777;
                                 ret__43781;
                             }))
                             );
              ret__43398;
          }))
          , parentLocalExpansion, (__extension__ ({
              
              //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
              x10_long i__43406 = ((((dx) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
              x10_long i__43407 = ((((dy) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
              x10_long i__43408 = ((((dz) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
              ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__43409;
              
              //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
              ret__43409 = ::x10aux::nullCheck(myWignerC)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__apply(
                             (__extension__ ({
                                 
                                 //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 x10_long i__43783 = i__43406;
                                 x10_long i__43784 = i__43407;
                                 x10_long i__43785 = i__43408;
                                 x10_long ret__43786;
                                 
                                 //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 x10_long offset__43782 =
                                   ((i__43783) - (::x10aux::nullCheck(myWignerC)->FMGL(layout_min0)));
                                 
                                 //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 offset__43782 = ((((((offset__43782) * (::x10aux::nullCheck(myWignerC)->FMGL(layout_stride1)))) + (i__43784))) - (::x10aux::nullCheck(myWignerC)->FMGL(layout_min1)));
                                 
                                 //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 offset__43782 = ((((((offset__43782) * (::x10aux::nullCheck(::x10aux::nullCheck(myWignerC)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((x10_long)0ll))))) + (i__43785))) - (::x10aux::nullCheck(::x10aux::nullCheck(myWignerC)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                   ((x10_long)1ll))));
                                 
                                 //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                 ret__43786 = offset__43782;
                                 ret__43786;
                             }))
                             );
              ret__43409;
          }))
          );
    }
    
}

//#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant::sendMultipole() {
    
    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    if ((!::x10aux::struct_equals(this->FMGL(vList), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
        
        //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        x10_uint mortonId = this->FMGL(id)->au::edu::anu::mm::OctantId::getMortonId();
        
        //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::au::edu::anu::mm::MultipoleExpansion* multipoleExp =
          this->FMGL(multipoleExp);
        
        //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::x10::util::HashSet<x10_long>* vListPlaces =  (new (::x10aux::alloc_z< ::x10::util::HashSet<x10_long> >()) ::x10::util::HashSet<x10_long>());
        (vListPlaces)->::x10::util::HashSet<x10_long>::_constructor();
        
        //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        {
            ::au::edu::anu::mm::Octant__VList__VListIterator* octantId__34613;
            for (octantId__34613 = reinterpret_cast< ::au::edu::anu::mm::Octant__VList__VListIterator*>(::x10aux::nullCheck(this->FMGL(vList))->iterator());
                 octantId__34613->hasNext(); ) {
                ::au::edu::anu::mm::OctantId octantId = octantId__34613->next();
                
                //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                x10_long placeId = local->getPlaceId(octantId->au::edu::anu::mm::OctantId::getAnchor(
                                                       local->FMGL(dMax)));
                
                //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                if ((((placeId) >= (((x10_long)0ll))) && ((placeId) < (((x10_long)::x10aux::num_hosts)))))
                {
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                    vListPlaces->add(placeId);
                }
                
            }
        }
        
        //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        {
            ::x10::lang::Iterator<x10_long>* placeId__34615;
            for (placeId__34615 = vListPlaces->iterator();
                 ::x10::lang::Iterator<x10_long>::hasNext(::x10aux::nullCheck(placeId__34615));
                 ) {
                x10_long placeId = ::x10::lang::Iterator<x10_long>::next(::x10aux::nullCheck(placeId__34615));
                
                //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                if ((::x10aux::struct_equals(placeId, ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))
                {
                    
                    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                    ::x10aux::nullCheck(local->FMGL(locallyEssentialTree))->setMultipoleForOctant(
                      mortonId, multipoleExp);
                } else {
                    
                    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                    ::x10::lang::Runtime::runAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__34606 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__34606)->::x10::lang::Place::_constructor(
                                                         placeId);
                                                       alloc__34606;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Octant__closure__1)))au_edu_anu_mm_Octant__closure__1(mortonId, multipoleExp))),
                                                   ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
                
            }
        }
        
    }
    
}

//#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_int au::edu::anu::mm::Octant::estimateVListSize(x10_uint mortonId) {
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::OctantId id = ::au::edu::anu::mm::OctantId::getFromMortonId(
                                        mortonId);
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return ::au::edu::anu::mm::Octant::estimateVListSize(
             id, ((x10_int)1));
    
}

//#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_int au::edu::anu::mm::Octant::estimateVListSize(::au::edu::anu::mm::OctantId id,
                                                    x10_int ws) {
    
    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int near = ((((((x10_int)2)) * (ws))) + (((x10_int)1)));
    
    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farHalo = ((((((x10_int)4)) * (ws))) + (((x10_int)2)));
    
    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int maxExtent = ((((((x10_int)1)) << (0x1f & (x10_int)(((x10_long)(id->FMGL(level))))))) - (((x10_int)1)));
    
    //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int x = ((x10_int)(id->FMGL(x)));
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int y = ((x10_int)(id->FMGL(y)));
    
    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int z = ((x10_int)(id->FMGL(z)));
    
    //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int xOffset = (::x10aux::struct_equals(((x) % ::x10aux::zeroCheck(((x10_int)2))),
                                               ((x10_int)1)))
      ? (((x10_int)-1)) : (((x10_int)0));
    
    //#line 180 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int yOffset = (::x10aux::struct_equals(((y) % ::x10aux::zeroCheck(((x10_int)2))),
                                               ((x10_int)1)))
      ? (((x10_int)-1)) : (((x10_int)0));
    
    //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int zOffset = (::x10aux::struct_equals(((z) % ::x10aux::zeroCheck(((x10_int)2))),
                                               ((x10_int)1)))
      ? (((x10_int)-1)) : (((x10_int)0));
    
    //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int nearMinX = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43672 = ((x) - (ws));
        ((((x10_int)0)) < (b__43672)) ? (b__43672) : (((x10_int)0));
    }))
    ;
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int nearMaxX = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43673 = maxExtent;
        x10_int b__43674 = ((x) + (ws));
        ((a__43673) < (b__43674)) ? (a__43673) : (b__43674);
    }))
    ;
    
    //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int nearMinY = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43676 = ((y) - (ws));
        ((((x10_int)0)) < (b__43676)) ? (b__43676) : (((x10_int)0));
    }))
    ;
    
    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int nearMaxY = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43677 = maxExtent;
        x10_int b__43678 = ((y) + (ws));
        ((a__43677) < (b__43678)) ? (a__43677) : (b__43678);
    }))
    ;
    
    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int nearMinZ = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43680 = ((z) - (ws));
        ((((x10_int)0)) < (b__43680)) ? (b__43680) : (((x10_int)0));
    }))
    ;
    
    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int nearMaxZ = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43681 = maxExtent;
        x10_int b__43682 = ((z) + (ws));
        ((a__43681) < (b__43682)) ? (a__43681) : (b__43682);
    }))
    ;
    
    //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int neighbours = ((((((((nearMaxX) - (nearMinX))) + (((x10_int)1)))) * (((((nearMaxY) - (nearMinY))) + (((x10_int)1)))))) * (((((nearMaxZ) - (nearMinZ))) + (((x10_int)1)))));
    
    //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farExtent = ((((x10_int)2)) * (ws));
    
    //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farMinX = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43684 = ((((x) + (xOffset))) - (farExtent));
        ((((x10_int)0)) < (b__43684)) ? (b__43684) : (((x10_int)0));
    }))
    ;
    
    //#line 194 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farMaxX = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43685 = maxExtent;
        x10_int b__43686 = ((((((x) + (xOffset))) + (farExtent))) + (((x10_int)1)));
        ((a__43685) < (b__43686)) ? (a__43685) : (b__43686);
    }))
    ;
    
    //#line 195 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farMinY = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43688 = ((((y) + (yOffset))) - (farExtent));
        ((((x10_int)0)) < (b__43688)) ? (b__43688) : (((x10_int)0));
    }))
    ;
    
    //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farMaxY = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43689 = maxExtent;
        x10_int b__43690 = ((((((y) + (yOffset))) + (farExtent))) + (((x10_int)1)));
        ((a__43689) < (b__43690)) ? (a__43689) : (b__43690);
    }))
    ;
    
    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farMinZ = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43692 = ((((z) + (zOffset))) - (farExtent));
        ((((x10_int)0)) < (b__43692)) ? (b__43692) : (((x10_int)0));
    }))
    ;
    
    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int farMaxZ = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43693 = maxExtent;
        x10_int b__43694 = ((((((z) + (zOffset))) + (farExtent))) + (((x10_int)1)));
        ((a__43693) < (b__43694)) ? (a__43693) : (b__43694);
    }))
    ;
    
    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_int colleagues = ((((((((farMaxX) - (farMinX))) + (((x10_int)1)))) * (((((farMaxY) - (farMinY))) + (((x10_int)1)))))) * (((((farMaxZ) - (farMinZ))) + (((x10_int)1)))));
    
    //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return ((colleagues) - (neighbours));
    
}

//#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant::createVList(x10_int ws, x10_ubyte dMax) {
    
    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(vList) = (__extension__ ({
        ::au::edu::anu::mm::Octant__VList* alloc__34607 =
           (new (::x10aux::alloc_z< ::au::edu::anu::mm::Octant__VList>()) ::au::edu::anu::mm::Octant__VList());
        (alloc__34607)->::au::edu::anu::mm::Octant__VList::_constructor(
          this, this->FMGL(id), ws, dMax);
        alloc__34607;
    }))
    ;
}

//#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_long au::edu::anu::mm::Octant::estimateVListCost(x10_int numTerms) {
    
    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 214 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>* myComplexK =
      ::x10aux::nullCheck(local->FMGL(fmmOperators))->FMGL(complexK);
    
    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* myWignerB =
      ::x10aux::nullCheck(local->FMGL(fmmOperators))->FMGL(wignerB);
    
    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::FmmScratch* scratch = ::au::edu::anu::mm::FmmScratch::getWorkerLocal();
    
    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::LocalExpansion* localExp =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::LocalExpansion>()) ::au::edu::anu::mm::LocalExpansion());
    (localExp)->::au::edu::anu::mm::LocalExpansion::_constructor(
      ((x10_long)(numTerms)));
    
    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::MultipoleExpansion* randomExp =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::MultipoleExpansion>()) ::au::edu::anu::mm::MultipoleExpansion());
    (randomExp)->::au::edu::anu::mm::MultipoleExpansion::_constructor(
      ((x10_long)(numTerms)));
    
    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long start = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 221 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    {
        x10_long i__43794;
        for (i__43794 = ((x10_long)1ll); ((i__43794) <= (((x10_long)10ll)));
             i__43794 = ((i__43794) + (((x10_long)1ll))))
        {
            x10_long i__43795 = i__43794;
            
            //#line 222 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            localExp->transformAndAddToLocal(::x10aux::nullCheck(scratch)->FMGL(exp),
                                             ::x10aux::nullCheck(scratch)->FMGL(array),
                                             (__extension__ ({
                                                 
                                                 //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
                                                 ::x10x::vector::Vector3d alloc__43791 =
                                                    ::x10x::vector::Vector3d::_alloc();
                                                 
                                                 //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                 alloc__43791->FMGL(i) =
                                                   1.0;
                                                 alloc__43791->FMGL(j) =
                                                   1.0;
                                                 alloc__43791->FMGL(k) =
                                                   1.0;
                                                 alloc__43791;
                                             }))
                                             , (__extension__ ({
                                                 
                                                 //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                 ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__43792;
                                                 
                                                 //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                 ret__43792 =
                                                   ::x10aux::nullCheck(myComplexK)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__apply(
                                                     (__extension__ ({
                                                         
                                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long ret__43788;
                                                         
                                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long offset__43787 =
                                                           ((((x10_long)1ll)) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min0)));
                                                         
                                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__43787 =
                                                           ((((((offset__43787) * (::x10aux::nullCheck(myComplexK)->FMGL(layout_stride1)))) + (((x10_long)1ll)))) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min1)));
                                                         
                                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__43787 =
                                                           ((((((offset__43787) * (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                     ((x10_long)0ll))))) + (((x10_long)1ll)))) - (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                    ((x10_long)1ll))));
                                                         
                                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         ret__43788 =
                                                           offset__43787;
                                                         ret__43788;
                                                     }))
                                                     );
                                                 ret__43792;
                                             }))
                                             , randomExp,
                                             (__extension__ ({
                                                 
                                                 //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                 ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__43793;
                                                 
                                                 //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                 ret__43793 =
                                                   ::x10aux::nullCheck(myWignerB)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__apply(
                                                     (__extension__ ({
                                                         
                                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long ret__43790;
                                                         
                                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long offset__43789 =
                                                           ((((x10_long)1ll)) - (::x10aux::nullCheck(myWignerB)->FMGL(layout_min0)));
                                                         
                                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__43789 =
                                                           ((((((offset__43789) * (::x10aux::nullCheck(myWignerB)->FMGL(layout_stride1)))) + (((x10_long)1ll)))) - (::x10aux::nullCheck(myWignerB)->FMGL(layout_min1)));
                                                         
                                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__43789 =
                                                           ((((((offset__43789) * (::x10aux::nullCheck(::x10aux::nullCheck(myWignerB)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                     ((x10_long)0ll))))) + (((x10_long)1ll)))) - (::x10aux::nullCheck(::x10aux::nullCheck(myWignerB)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                    ((x10_long)1ll))));
                                                         
                                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         ret__43790 =
                                                           offset__43789;
                                                         ret__43790;
                                                     }))
                                                     );
                                                 ret__43793;
                                             }))
                                             );
        }
    }
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long stop = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    localExp->clear();
    
    //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return ((((stop) - (start))) / ::x10aux::zeroCheck(((x10_long)10ll)));
    
}

//#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::x10::lang::String* au::edu::anu::mm::Octant::toString() {
    
    //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::Octant_Strings::sl__48442), this->FMGL(id));
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::au::edu::anu::mm::Octant* au::edu::anu::mm::Octant::au__edu__anu__mm__Octant____this__au__edu__anu__mm__Octant(
  ) {
    return this;
    
}
void au::edu::anu::mm::Octant::__fieldInitializers_au_edu_anu_mm_Octant(
  ) {
    this->FMGL(parent) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(vList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::Octant__VList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(multipoleReady) = false;
}
void au::edu::anu::mm::Octant::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(id));
    buf.write(this->FMGL(parent));
    buf.write(this->FMGL(multipoleExp));
    buf.write(this->FMGL(localExp));
    buf.write(this->FMGL(vList));
    buf.write(this->FMGL(multipoleReady));
    
}

void au::edu::anu::mm::Octant::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(id) = buf.read< ::au::edu::anu::mm::OctantId>();
    FMGL(parent) = buf.read< ::au::edu::anu::mm::Octant*>();
    FMGL(multipoleExp) = buf.read< ::au::edu::anu::mm::MultipoleExpansion*>();
    FMGL(localExp) = buf.read< ::au::edu::anu::mm::LocalExpansion*>();
    FMGL(vList) = buf.read< ::au::edu::anu::mm::Octant__VList*>();
    FMGL(multipoleReady) = buf.read<x10_boolean>();
}

::x10aux::RuntimeType au::edu::anu::mm::Octant::rtt;
void au::edu::anu::mm::Octant::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* > >()};
    rtt.initStageTwo("au.edu.anu.mm.Octant",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::Octant_Strings::sl__48442("Octant ");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Octant__closure__1>au_edu_anu_mm_Octant__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Octant__closure__1::__apply, &au_edu_anu_mm_Octant__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Octant__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Octant__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Octant__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Octant__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_Octant__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_Octant__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of Octant */
/*************************************************/
/*************************************************/
/* START of Octant$VList$VListIterator */
#include <au/edu/anu/mm/Octant__VList__VListIterator.h>

#include <x10/lang/Iterator.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/UByte.h>
#include <au/edu/anu/mm/Octant__VList.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/String.h>
#include <au/edu/anu/mm/Octant.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
::x10::lang::Iterator< ::au::edu::anu::mm::OctantId>::itable< ::au::edu::anu::mm::Octant__VList__VListIterator >  au::edu::anu::mm::Octant__VList__VListIterator::_itable_0(&::x10::lang::X10Class::equals, &au::edu::anu::mm::Octant__VList__VListIterator::hasNext, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::Octant__VList__VListIterator::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::Octant__VList__VListIterator >  au::edu::anu::mm::Octant__VList__VListIterator::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::Octant__VList__VListIterator::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator< ::au::edu::anu::mm::OctantId> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::Octant__VList__VListIterator")};

//#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 284 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 285 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 286 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 287 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant__VList__VListIterator::_constructor(::au::edu::anu::mm::Octant__VList* out__) {
    
    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(out__) = out__;
    
    //#line 287 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    
    //#line 283 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::Octant__VList__VListIterator* this__43803 = this;
    ::x10aux::nullCheck(this__43803)->FMGL(x) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__43803)->FMGL(y) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__43803)->FMGL(z) = ((x10_ubyte)0);
    
    //#line 288 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(x) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minX);
    
    //#line 289 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(y) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minY);
    
    //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(z) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minZ);
}
::au::edu::anu::mm::Octant__VList__VListIterator* au::edu::anu::mm::Octant__VList__VListIterator::_make(
  ::au::edu::anu::mm::Octant__VList* out__) {
    ::au::edu::anu::mm::Octant__VList__VListIterator* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Octant__VList__VListIterator>()) ::au::edu::anu::mm::Octant__VList__VListIterator();
    this_->_constructor(out__);
    return this_;
}



//#line 293 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_boolean au::edu::anu::mm::Octant__VList__VListIterator::hasNext(
  ) {
    
    //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    if (((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))))
    {
        
        //#line 295 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        if (::x10aux::nullCheck(this->FMGL(out__))->wellSeparated(
              ::x10aux::nullCheck(this->FMGL(out__))->FMGL(ws),
              ((x10_int)(this->FMGL(x))), ((x10_int)(this->FMGL(y))),
              ((x10_int)(this->FMGL(z))))) {
            
            //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            return true;
            
        } else {
            
            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->moveToNext();
            
            //#line 299 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            if ((((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))) &&
                ::x10aux::nullCheck(this->FMGL(out__))->wellSeparated(
                  ::x10aux::nullCheck(this->FMGL(out__))->FMGL(ws),
                  ((x10_int)(this->FMGL(x))), ((x10_int)(this->FMGL(y))),
                  ((x10_int)(this->FMGL(z)))))) {
                return true;
                
            }
            
        }
        
    }
    
    //#line 302 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return false;
    
}

//#line 305 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::au::edu::anu::mm::OctantId au::edu::anu::mm::Octant__VList__VListIterator::next(
  ) {
    
    //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    if ((((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))) &&
        ::x10aux::nullCheck(this->FMGL(out__))->wellSeparated(
          ::x10aux::nullCheck(this->FMGL(out__))->FMGL(ws),
          ((x10_int)(this->FMGL(x))), ((x10_int)(this->FMGL(y))),
          ((x10_int)(this->FMGL(z)))))) {
        
        //#line 307 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::au::edu::anu::mm::OctantId res =  ::au::edu::anu::mm::OctantId::_alloc();
        
        //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        x10_ubyte x__43804 = this->FMGL(x);
        x10_ubyte y__43805 = this->FMGL(y);
        x10_ubyte z__43806 = this->FMGL(z);
        x10_ubyte level__43807 = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(level);
        
        //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
        res->FMGL(x) = x__43804;
        res->FMGL(y) = y__43805;
        res->FMGL(z) = z__43806;
        res->FMGL(level) = level__43807;
        
        //#line 308 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        this->moveToNext();
        
        //#line 309 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        return res;
        
    } else {
        
        //#line 311 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus((&::au::edu::anu::mm::Octant__VList__VListIterator_Strings::sl__48468), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)))));
    }
    
}

//#line 315 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant__VList__VListIterator::moveToNext(
  ) {
    
    //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    do {
        
        //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        if (((this->FMGL(z)) < (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxZ))))
        {
            
            //#line 318 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->FMGL(z) = ((x10_ubyte) ((this->FMGL(z)) + (((x10_ubyte)1))));
        } else 
        //#line 319 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
        if (((this->FMGL(y)) < (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxY))))
        {
            
            //#line 320 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->FMGL(z) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minZ);
            
            //#line 321 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->FMGL(y) = ((x10_ubyte) ((this->FMGL(y)) + (((x10_ubyte)1))));
        } else {
            
            //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->FMGL(z) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minZ);
            
            //#line 324 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->FMGL(y) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minY);
            
            //#line 325 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
            this->FMGL(x) = ((x10_ubyte) ((this->FMGL(x)) + (((x10_ubyte)1))));
        }
        
    } while ((((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))) &&
             !(::x10aux::nullCheck(this->FMGL(out__))->wellSeparated(
                 ::x10aux::nullCheck(this->FMGL(out__))->FMGL(ws),
                 ((x10_int)(this->FMGL(x))), ((x10_int)(this->FMGL(y))),
                 ((x10_int)(this->FMGL(z)))))));
    
}

//#line 283 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::au::edu::anu::mm::Octant__VList__VListIterator* au::edu::anu::mm::Octant__VList__VListIterator::au__edu__anu__mm__Octant__VList__VListIterator____this__au__edu__anu__mm__Octant__VList__VListIterator(
  ) {
    return this;
    
}
::au::edu::anu::mm::Octant__VList* au::edu::anu::mm::Octant__VList__VListIterator::au__edu__anu__mm__Octant__VList__VListIterator____this__au__edu__anu__mm__Octant__VList(
  ) {
    return this->FMGL(out__);
    
}
::au::edu::anu::mm::Octant* au::edu::anu::mm::Octant__VList__VListIterator::au__edu__anu__mm__Octant__VList__VListIterator____this__au__edu__anu__mm__Octant(
  ) {
    return ::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__);
    
}
void au::edu::anu::mm::Octant__VList__VListIterator::__fieldInitializers_au_edu_anu_mm_Octant_VList_VListIterator(
  ) {
    this->FMGL(x) = ((x10_ubyte)0);
    this->FMGL(y) = ((x10_ubyte)0);
    this->FMGL(z) = ((x10_ubyte)0);
}
const ::x10aux::serialization_id_t au::edu::anu::mm::Octant__VList__VListIterator::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::Octant__VList__VListIterator::_deserializer);

void au::edu::anu::mm::Octant__VList__VListIterator::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(y));
    buf.write(this->FMGL(z));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::Octant__VList__VListIterator::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Octant__VList__VListIterator* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Octant__VList__VListIterator>()) ::au::edu::anu::mm::Octant__VList__VListIterator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::Octant__VList__VListIterator::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_ubyte>();
    FMGL(y) = buf.read<x10_ubyte>();
    FMGL(z) = buf.read<x10_ubyte>();
    FMGL(out__) = buf.read< ::au::edu::anu::mm::Octant__VList*>();
}

::x10aux::RuntimeType au::edu::anu::mm::Octant__VList__VListIterator::rtt;
void au::edu::anu::mm::Octant__VList__VListIterator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterator< ::au::edu::anu::mm::OctantId> >()};
    rtt.initStageTwo("au.edu.anu.mm.Octant.VList.VListIterator",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::Octant__VList__VListIterator_Strings::sl__48468("reached end of vList for ");

/* END of Octant$VList$VListIterator */
/*************************************************/
/*************************************************/
/* START of Octant$SumReducer */
#include <au/edu/anu/mm/Octant__SumReducer.h>

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
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__SumReducer_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::mm::Octant__SumReducer> {
public:
    static ::x10::lang::Any::itable< Octant__SumReducer_ibox0 > itable;
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
::x10::lang::Any::itable< Octant__SumReducer_ibox0 >  Octant__SumReducer_ibox0::itable(&Octant__SumReducer_ibox0::equals, &Octant__SumReducer_ibox0::hashCode, &Octant__SumReducer_ibox0::toString, &Octant__SumReducer_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::mm::Octant__SumReducer >  au::edu::anu::mm::Octant__SumReducer::_itable_0(&au::edu::anu::mm::Octant__SumReducer::equals, &au::edu::anu::mm::Octant__SumReducer::hashCode, &au::edu::anu::mm::Octant__SumReducer::toString, &au::edu::anu::mm::Octant__SumReducer::typeName);
namespace au { namespace edu { namespace anu { namespace mm { 
class Octant__SumReducer_ibox1 : public ::x10::lang::IBox< ::au::edu::anu::mm::Octant__SumReducer> {
public:
    static ::x10::lang::Reducible<x10_double>::itable< Octant__SumReducer_ibox1 > itable;
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
::x10::lang::Reducible<x10_double>::itable< Octant__SumReducer_ibox1 >  Octant__SumReducer_ibox1::itable(&Octant__SumReducer_ibox1::equals, &Octant__SumReducer_ibox1::hashCode, &Octant__SumReducer_ibox1::__apply, &Octant__SumReducer_ibox1::toString, &Octant__SumReducer_ibox1::typeName, &Octant__SumReducer_ibox1::zero);
} } } } 
::x10::lang::Reducible<x10_double>::itable< ::au::edu::anu::mm::Octant__SumReducer >  au::edu::anu::mm::Octant__SumReducer::_itable_1(&au::edu::anu::mm::Octant__SumReducer::equals, &au::edu::anu::mm::Octant__SumReducer::hashCode, &au::edu::anu::mm::Octant__SumReducer::__apply, &au::edu::anu::mm::Octant__SumReducer::toString, &au::edu::anu::mm::Octant__SumReducer::typeName, &au::edu::anu::mm::Octant__SumReducer::zero);
::x10aux::itable_entry au::edu::anu::mm::Octant__SumReducer::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::Octant__SumReducer::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::mm::Octant__SumReducer::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::Octant__SumReducer")};
::x10aux::itable_entry au::edu::anu::mm::Octant__SumReducer::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::mm::Octant__SumReducer_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::mm::Octant__SumReducer_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::Octant__SumReducer")};

//#line 232 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_double au::edu::anu::mm::Octant__SumReducer::__apply(x10_double a, x10_double b) {
    return ((a) + (b));
    
}

//#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::x10::lang::String* au::edu::anu::mm::Octant__SumReducer::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::mm::Octant__SumReducer::toString() {
    return (&::au::edu::anu::mm::Octant__SumReducer_Strings::sl__48471);
    
}
x10_boolean au::edu::anu::mm::Octant__SumReducer::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::Octant__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::Octant__SumReducer this__43796 = (*this);
    ::au::edu::anu::mm::Octant__SumReducer other__43797 = ::x10aux::class_cast< ::au::edu::anu::mm::Octant__SumReducer>(other);
    return true;
    
}
x10_boolean au::edu::anu::mm::Octant__SumReducer::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::mm::Octant__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::mm::Octant__SumReducer this__43798 = (*this);
    ::au::edu::anu::mm::Octant__SumReducer other__43799 = ::x10aux::class_cast< ::au::edu::anu::mm::Octant__SumReducer>(other);
    return true;
    
}

void ::au::edu::anu::mm::Octant__SumReducer::_serialize(::au::edu::anu::mm::Octant__SumReducer this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::au::edu::anu::mm::Octant__SumReducer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType au::edu::anu::mm::Octant__SumReducer::rtt;
void au::edu::anu::mm::Octant__SumReducer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >()};
    rtt.initStageTwo("au.edu.anu.mm.Octant.SumReducer",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::mm::Octant__SumReducer_Strings::sl__48471("struct au.edu.anu.mm.Octant.SumReducer");

/* END of Octant$SumReducer */
/*************************************************/
/*************************************************/
/* START of Octant$VList */
#include <au/edu/anu/mm/Octant__VList.h>

#include <x10/lang/Iterable.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/Int.h>
#include <x10/lang/UByte.h>
#include <au/edu/anu/mm/Octant.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <au/edu/anu/mm/Octant__VList__VListIterator.h>
#include <x10/compiler/Synthetic.h>
::x10::lang::Iterable< ::au::edu::anu::mm::OctantId>::itable< ::au::edu::anu::mm::Octant__VList >  au::edu::anu::mm::Octant__VList::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::Octant__VList::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::Octant__VList >  au::edu::anu::mm::Octant__VList::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::Octant__VList::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::au::edu::anu::mm::OctantId> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::Octant__VList")};

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 245 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 246 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 247 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 248 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 249 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 250 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 251 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 252 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"

//#line 254 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
void au::edu::anu::mm::Octant__VList::_constructor(::au::edu::anu::mm::Octant* out__,
                                                   ::au::edu::anu::mm::OctantId id,
                                                   x10_int ws,
                                                   x10_ubyte dMax) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(out__) = out__;
    
    //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    
    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    ::au::edu::anu::mm::Octant__VList* this__43801 = this;
    
    //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_ubyte levelDim = ((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(id->FMGL(level)))))));
    
    //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long xOffset = (::x10aux::struct_equals(((x10_ubyte) ((id->FMGL(x)) % ::x10aux::zeroCheck(((x10_ubyte)2)))),
                                                ((x10_ubyte)1)))
      ? (((x10_long)-1ll)) : (((x10_long)0ll));
    
    //#line 257 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long yOffset = (::x10aux::struct_equals(((x10_ubyte) ((id->FMGL(y)) % ::x10aux::zeroCheck(((x10_ubyte)2)))),
                                                ((x10_ubyte)1)))
      ? (((x10_long)-1ll)) : (((x10_long)0ll));
    
    //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long zOffset = (::x10aux::struct_equals(((x10_ubyte) ((id->FMGL(z)) % ::x10aux::zeroCheck(((x10_ubyte)2)))),
                                                ((x10_ubyte)1)))
      ? (((x10_long)-1ll)) : (((x10_long)0ll));
    
    //#line 259 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    x10_long extent = ((((x10_long)2ll)) * (((x10_long)(ws))));
    
    //#line 260 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(minX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long b__43734 = ((((((x10_long)(id->FMGL(x)))) + (xOffset))) - (extent));
        ((((x10_long)0ll)) < (b__43734)) ? (b__43734) : (((x10_long)0ll));
    }))
    ));
    
    //#line 261 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(maxX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long a__43735 = ((((x10_long)(levelDim))) - (((x10_long)1ll)));
        x10_long b__43736 = ((((((((x10_long)(id->FMGL(x)))) + (xOffset))) + (extent))) + (((x10_long)1ll)));
        ((a__43735) < (b__43736)) ? (a__43735) : (b__43736);
    }))
    ));
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(minY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long b__43738 = ((((((x10_long)(id->FMGL(y)))) + (yOffset))) - (extent));
        ((((x10_long)0ll)) < (b__43738)) ? (b__43738) : (((x10_long)0ll));
    }))
    ));
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(maxY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long a__43739 = ((((x10_long)(levelDim))) - (((x10_long)1ll)));
        x10_long b__43740 = ((((((((x10_long)(id->FMGL(y)))) + (yOffset))) + (extent))) + (((x10_long)1ll)));
        ((a__43739) < (b__43740)) ? (a__43739) : (b__43740);
    }))
    ));
    
    //#line 264 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(minZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long b__43742 = ((((((x10_long)(id->FMGL(z)))) + (zOffset))) - (extent));
        ((((x10_long)0ll)) < (b__43742)) ? (b__43742) : (((x10_long)0ll));
    }))
    ));
    
    //#line 265 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(maxZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 481 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long a__43743 = ((((x10_long)(levelDim))) - (((x10_long)1ll)));
        x10_long b__43744 = ((((((((x10_long)(id->FMGL(z)))) + (zOffset))) + (extent))) + (((x10_long)1ll)));
        ((a__43743) < (b__43744)) ? (a__43743) : (b__43744);
    }))
    ));
    
    //#line 266 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(ws) = ws;
    
    //#line 267 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    this->FMGL(level) = id->FMGL(level);
}
::au::edu::anu::mm::Octant__VList* au::edu::anu::mm::Octant__VList::_make(
  ::au::edu::anu::mm::Octant* out__, ::au::edu::anu::mm::OctantId id,
  x10_int ws, x10_ubyte dMax) {
    ::au::edu::anu::mm::Octant__VList* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Octant__VList>()) ::au::edu::anu::mm::Octant__VList();
    this_->_constructor(out__, id, ws, dMax);
    return this_;
}



//#line 275 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
x10_boolean au::edu::anu::mm::Octant__VList::wellSeparated(
  x10_int ws, x10_int x2, x10_int y2, x10_int z2) {
    
    //#line 276 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
    return ((((((x10_int)::labs(((((x10_int)(::x10aux::nullCheck(this->FMGL(out__))->FMGL(id)->FMGL(x)))) - (x2))))) > (ws)) ||
    ((((x10_int)::labs(((((x10_int)(::x10aux::nullCheck(this->FMGL(out__))->FMGL(id)->FMGL(y)))) - (y2))))) > (ws))) ||
    ((((x10_int)::labs(((((x10_int)(::x10aux::nullCheck(this->FMGL(out__))->FMGL(id)->FMGL(z)))) - (z2))))) > (ws)));
    
}

//#line 281 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::x10::lang::Iterator< ::au::edu::anu::mm::OctantId>* au::edu::anu::mm::Octant__VList::iterator(
  ) {
    ::au::edu::anu::mm::Octant__VList__VListIterator* alloc__43802 =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::Octant__VList__VListIterator>()) ::au::edu::anu::mm::Octant__VList__VListIterator());
    (alloc__43802)->::au::edu::anu::mm::Octant__VList__VListIterator::_constructor(
      this);
    return reinterpret_cast< ::x10::lang::Iterator< ::au::edu::anu::mm::OctantId>*>(alloc__43802);
    
}

//#line 244 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/Octant.x10"
::au::edu::anu::mm::Octant__VList* au::edu::anu::mm::Octant__VList::au__edu__anu__mm__Octant__VList____this__au__edu__anu__mm__Octant__VList(
  ) {
    return this;
    
}
::au::edu::anu::mm::Octant* au::edu::anu::mm::Octant__VList::au__edu__anu__mm__Octant__VList____this__au__edu__anu__mm__Octant(
  ) {
    return this->FMGL(out__);
    
}
void au::edu::anu::mm::Octant__VList::__fieldInitializers_au_edu_anu_mm_Octant_VList(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::Octant__VList::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::Octant__VList::_deserializer);

void au::edu::anu::mm::Octant__VList::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(ws));
    buf.write(this->FMGL(level));
    buf.write(this->FMGL(minX));
    buf.write(this->FMGL(maxX));
    buf.write(this->FMGL(minY));
    buf.write(this->FMGL(maxY));
    buf.write(this->FMGL(minZ));
    buf.write(this->FMGL(maxZ));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::Octant__VList::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Octant__VList* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Octant__VList>()) ::au::edu::anu::mm::Octant__VList();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::Octant__VList::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(ws) = buf.read<x10_int>();
    FMGL(level) = buf.read<x10_ubyte>();
    FMGL(minX) = buf.read<x10_ubyte>();
    FMGL(maxX) = buf.read<x10_ubyte>();
    FMGL(minY) = buf.read<x10_ubyte>();
    FMGL(maxY) = buf.read<x10_ubyte>();
    FMGL(minZ) = buf.read<x10_ubyte>();
    FMGL(maxZ) = buf.read<x10_ubyte>();
    FMGL(out__) = buf.read< ::au::edu::anu::mm::Octant*>();
}

::x10aux::RuntimeType au::edu::anu::mm::Octant__VList::rtt;
void au::edu::anu::mm::Octant__VList::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterable< ::au::edu::anu::mm::OctantId> >()};
    rtt.initStageTwo("au.edu.anu.mm.Octant.VList",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Octant$VList */
/*************************************************/
