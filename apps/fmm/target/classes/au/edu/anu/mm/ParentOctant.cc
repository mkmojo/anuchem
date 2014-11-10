/*************************************************/
/* START of ParentOctant */
#include <au/edu/anu/mm/ParentOctant.h>

#include <au/edu/anu/mm/Octant.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/Int.h>
#include <x10/lang/UByte.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <au/edu/anu/mm/Expansion.h>
#include <au/edu/anu/mm/LocalExpansion.h>
#include <x10/lang/CheckedThrowable.h>
#include <au/edu/anu/mm/FmmLocalData.h>
#include <au/edu/anu/mm/FastMultipoleMethod.h>
#include <au/edu/anu/mm/FmmOperators.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <au/edu/anu/mm/FmmScratch.h>
#include <x10x/vector/Vector3d.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <au/edu/anu/mm/GhostOctant.h>
#include <x10/lang/Reducible.h>
#include <au/edu/anu/mm/Octant__SumReducer.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_ParentOctant__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_ParentOctant__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        childExpansions->x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >::__set(
          i__44463, ::x10aux::nullCheck(child__44460)->upward());
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* childExpansions;
    x10_long i__44463;
    ::au::edu::anu::mm::Octant* child__44460;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->childExpansions);
        buf.write(this->i__44463);
        buf.write(this->child__44460);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_ParentOctant__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_ParentOctant__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* that_childExpansions = buf.read< ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >*>();
        x10_long that_i__44463 = buf.read<x10_long>();
        ::au::edu::anu::mm::Octant* that_child__44460 = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_ParentOctant__closure__1* this_ = new (storage) au_edu_anu_mm_ParentOctant__closure__1(that_childExpansions, that_i__44463, that_child__44460);
        return this_;
    }
    
    au_edu_anu_mm_ParentOctant__closure__1(::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* childExpansions, x10_long i__44463, ::au::edu::anu::mm::Octant* child__44460) : childExpansions(childExpansions), i__44463(i__44463), child__44460(child__44460) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10:74-76";
    }

};

#endif // AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_ParentOctant__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_ParentOctant__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(child__44511)->multipolesToLocal();
    }
    
    // captured environment
    ::au::edu::anu::mm::Octant* child__44511;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->child__44511);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_ParentOctant__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_ParentOctant__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Octant* that_child__44511 = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_ParentOctant__closure__2* this_ = new (storage) au_edu_anu_mm_ParentOctant__closure__2(that_child__44511);
        return this_;
    }
    
    au_edu_anu_mm_ParentOctant__closure__2(::au::edu::anu::mm::Octant* child__44511) : child__44511(child__44511) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10:122";
    }

};

#endif // AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_ParentOctant__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_ParentOctant__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long dx__44513 = ((i__44521) / ::x10aux::zeroCheck(((x10_long)4ll)));
        
        //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long dy__44514 = ((((i__44521) % ::x10aux::zeroCheck(((x10_long)4ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long dz__44515 = ((i__44521) % ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long childX__44516 = ((((((x10_long)2ll)) * (((x10_long)(saved_this->FMGL(id)->FMGL(x)))))) + (dx__44513));
        
        //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long childY__44517 = ((((((x10_long)2ll)) * (((x10_long)(saved_this->FMGL(id)->FMGL(y)))))) + (dy__44514));
        
        //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long childZ__44518 = ((((((x10_long)2ll)) * (((x10_long)(saved_this->FMGL(id)->FMGL(z)))))) + (dz__44515));
        
        //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(::x10aux::nullCheck(childOctant__44512)->downward(
                                                        parentExp));
    }
    
    // captured environment
    x10_long i__44521;
    ::au::edu::anu::mm::ParentOctant* saved_this;
    ::au::edu::anu::mm::Octant* childOctant__44512;
    ::au::edu::anu::mm::LocalExpansion* parentExp;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->i__44521);
        buf.write(this->saved_this);
        buf.write(this->childOctant__44512);
        buf.write(this->parentExp);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_ParentOctant__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_mm_ParentOctant__closure__3>();
        buf.record_reference(storage);
        x10_long that_i__44521 = buf.read<x10_long>();
        ::au::edu::anu::mm::ParentOctant* that_saved_this = buf.read< ::au::edu::anu::mm::ParentOctant*>();
        ::au::edu::anu::mm::Octant* that_childOctant__44512 = buf.read< ::au::edu::anu::mm::Octant*>();
        ::au::edu::anu::mm::LocalExpansion* that_parentExp = buf.read< ::au::edu::anu::mm::LocalExpansion*>();
        au_edu_anu_mm_ParentOctant__closure__3* this_ = new (storage) au_edu_anu_mm_ParentOctant__closure__3(that_i__44521, that_saved_this, that_childOctant__44512, that_parentExp);
        return this_;
    }
    
    au_edu_anu_mm_ParentOctant__closure__3(x10_long i__44521, ::au::edu::anu::mm::ParentOctant* saved_this, ::au::edu::anu::mm::Octant* childOctant__44512, ::au::edu::anu::mm::LocalExpansion* parentExp) : i__44521(i__44521), saved_this(saved_this), childOctant__44512(childOctant__44512), parentExp(parentExp) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10:140-148";
    }

};

#endif // AU_EDU_ANU_MM_PARENTOCTANT__CLOSURE__3_CLOSURE
::x10::lang::Comparable< ::au::edu::anu::mm::Octant* >::itable< ::au::edu::anu::mm::ParentOctant >  au::edu::anu::mm::ParentOctant::_itable_0(&::au::edu::anu::mm::Octant::compareTo, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::ParentOctant::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::ParentOctant >  au::edu::anu::mm::ParentOctant::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::ParentOctant::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::ParentOctant::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* > >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::ParentOctant")};

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
/** The number of atoms in all boxes below this box. */

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
void au::edu::anu::mm::ParentOctant::_constructor(::au::edu::anu::mm::OctantId id,
                                                  x10_int numTerms,
                                                  x10_int ws, x10_ubyte dMax) {
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    (this)->::au::edu::anu::mm::Octant::_constructor(id, numTerms,
                                                     ws, dMax);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::au::edu::anu::mm::ParentOctant* this__44451 = this;
    ::x10aux::nullCheck(this__44451)->FMGL(children) = ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >::_make(((x10_long)8ll));
    ::x10aux::nullCheck(this__44451)->FMGL(numAtoms) = ((x10_long)0ll);
}
::au::edu::anu::mm::ParentOctant* au::edu::anu::mm::ParentOctant::_make(
  ::au::edu::anu::mm::OctantId id, x10_int numTerms, x10_int ws, x10_ubyte dMax)
{
    ::au::edu::anu::mm::ParentOctant* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::ParentOctant>()) ::au::edu::anu::mm::ParentOctant();
    this_->_constructor(id, numTerms, ws, dMax);
    return this_;
}



//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
x10_int au::edu::anu::mm::ParentOctant::countOctants() {
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_int octants = ((x10_int)0);
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >* rail__44452 =
      this->FMGL(children);
    x10_long size__44453 = (x10_long)(::x10aux::nullCheck(rail__44452)->FMGL(size));
    {
        x10_long idx__44454;
        for (idx__44454 = ((x10_long)0ll); ((idx__44454) < (size__44453));
             idx__44454 = ((idx__44454) + (((x10_long)1ll)))) {
            ::au::edu::anu::mm::Octant* child__44455 = ::x10aux::nullCheck(rail__44452)->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                                         idx__44454);
            
            //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            if ((!::x10aux::struct_equals(child__44455, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                octants = ((octants) + (::x10aux::nullCheck(child__44455)->countOctants()));
            }
            
        }
    }
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    return octants;
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
x10_int au::edu::anu::mm::ParentOctant::ghostOctants() {
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_int ghostOctants = ((x10_int)0);
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >* rail__44456 =
      this->FMGL(children);
    x10_long size__44457 = (x10_long)(::x10aux::nullCheck(rail__44456)->FMGL(size));
    {
        x10_long idx__44458;
        for (idx__44458 = ((x10_long)0ll); ((idx__44458) < (size__44457));
             idx__44458 = ((idx__44458) + (((x10_long)1ll))))
        {
            ::au::edu::anu::mm::Octant* child__44459 = ::x10aux::nullCheck(rail__44456)->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                                         idx__44458);
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            if ((!::x10aux::struct_equals(child__44459, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ghostOctants = ((ghostOctants) + (::x10aux::nullCheck(child__44459)->ghostOctants()));
            }
            
        }
    }
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    return ghostOctants;
    
}

//#line 60 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
x10_long au::edu::anu::mm::ParentOctant::numAtoms() {
    return this->FMGL(numAtoms);
    
}

//#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>
  au::edu::anu::mm::ParentOctant::upward() {
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    this->FMGL(numAtoms) = ((x10_long)0ll);
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* childExpansions =
      ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >::_make(((x10_long)8ll));
    {
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__44525 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                x10_long i__44293max__44461 = (((x10_long)(::x10aux::nullCheck(this->FMGL(children))->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__44462;
                    for (i__44462 = ((x10_long)0ll); ((i__44462) <= (i__44293max__44461));
                         i__44462 = ((i__44462) + (((x10_long)1ll))))
                    {
                        x10_long i__44463 = i__44462;
                        
                        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                        ::au::edu::anu::mm::Octant* child__44460 =
                          ::x10aux::nullCheck(this->FMGL(children))->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                            i__44463);
                        
                        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                        if ((!::x10aux::struct_equals(child__44460,
                                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                        {
                            ::x10::lang::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_ParentOctant__closure__1)))au_edu_anu_mm_ParentOctant__closure__1(childExpansions, i__44463, child__44460))));
                        }
                        
                    }
                }
                
                //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ::x10aux::nullCheck(this->FMGL(multipoleExp))->clear();
                
                //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ::x10aux::nullCheck(this->FMGL(localExp))->clear();
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc111) {
            {
                ::x10::lang::CheckedThrowable* ct__44523 =
                  __exc111;
                {
                    ::x10::lang::Runtime::pushException(ct__44523);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__44525);
    }
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::au::edu::anu::mm::FmmOperators* fmmOperators = local->FMGL(fmmOperators);
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >*>* myComplexK =
      ::x10aux::nullCheck(fmmOperators)->FMGL(complexK);
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::regionarray::Array< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >*>* myWignerA =
      ::x10aux::nullCheck(fmmOperators)->FMGL(wignerA);
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_double halfSideLength = ((local->FMGL(size)) / (((x10_double) (::x10::lang::Math::pow2(
                                                                         ((((x10_long)(this->FMGL(id)->FMGL(level)))) + (((x10_long)2ll))))))));
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_long numTerms = ::x10aux::nullCheck(this->FMGL(multipoleExp))->FMGL(p);
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::au::edu::anu::mm::FmmScratch* scratch = ::au::edu::anu::mm::FmmScratch::getWorkerLocal();
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_long i = ((x10_long)0ll);
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_boolean nonNullChildren = false;
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    x10_long i__44347min__44503 = ((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(x)))));
    x10_long i__44347max__44504 = ((((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(x)))))) + (((x10_long)1ll)));
    {
        x10_long i__44505;
        for (i__44505 = i__44347min__44503; ((i__44505) <= (i__44347max__44504));
             i__44505 = ((i__44505) + (((x10_long)1ll))))
        {
            x10_long x__44506 = i__44505;
            
            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            x10_long i__44329min__44495 = ((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(y)))));
            x10_long i__44329max__44496 = ((((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(y)))))) + (((x10_long)1ll)));
            {
                x10_long i__44497;
                for (i__44497 = i__44329min__44495; ((i__44497) <= (i__44329max__44496));
                     i__44497 = ((i__44497) + (((x10_long)1ll))))
                {
                    x10_long y__44498 = i__44497;
                    
                    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                    x10_long i__44311min__44491 = ((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(z)))));
                    x10_long i__44311max__44492 = ((((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(z)))))) + (((x10_long)1ll)));
                    {
                        x10_long i__44493;
                        for (i__44493 = i__44311min__44491;
                             ((i__44493) <= (i__44311max__44492));
                             i__44493 = ((i__44493) + (((x10_long)1ll))))
                        {
                            x10_long z__44494 = i__44493;
                            
                            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> childExp__44477 =
                              childExpansions->x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >::__apply(
                                (__extension__ ({
                                    x10_long pre__44478 =
                                      i;
                                    i = ((i) + (((x10_long)1ll)));
                                    pre__44478;
                                }))
                                );
                            
                            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            this->FMGL(numAtoms) = ((this->FMGL(numAtoms)) + (childExp__44477->FMGL(first)));
                            
                            //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            if ((!::x10aux::struct_equals(childExp__44477->FMGL(second),
                                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                            {
                                
                                //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                nonNullChildren = true;
                                
                                //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                x10_long dx__44479 = ((((((((x__44506) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)2ll)))) * (((x10_long)2ll)))) - (((x10_long)1ll)));
                                
                                //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                x10_long dy__44480 = ((((((((y__44498) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)2ll)))) * (((x10_long)2ll)))) - (((x10_long)1ll)));
                                
                                //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                x10_long dz__44481 = ((((((((z__44494) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)2ll)))) * (((x10_long)2ll)))) - (((x10_long)1ll)));
                                
                                //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                ::x10aux::nullCheck(this->FMGL(multipoleExp))->translateAndAddMultipole(
                                  ::x10aux::nullCheck(scratch)->FMGL(exp),
                                  ::x10aux::nullCheck(scratch)->FMGL(array),
                                  (__extension__ ({
                                      
                                      //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                      ::x10x::vector::Vector3d alloc__44482 =
                                         ::x10x::vector::Vector3d::_alloc();
                                      
                                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      x10_double i__44464 =
                                        ((((x10_double) (dx__44479))) * (halfSideLength));
                                      x10_double j__44465 =
                                        ((((x10_double) (dy__44480))) * (halfSideLength));
                                      x10_double k__44466 =
                                        ((((x10_double) (dz__44481))) * (halfSideLength));
                                      
                                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      alloc__44482->FMGL(i) =
                                        i__44464;
                                      alloc__44482->FMGL(j) =
                                        j__44465;
                                      alloc__44482->FMGL(k) =
                                        k__44466;
                                      alloc__44482;
                                  }))
                                  , (__extension__ ({
                                      
                                      //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long i__44483 =
                                        dx__44479;
                                      x10_long i__44484 =
                                        dy__44480;
                                      x10_long i__44485 =
                                        dz__44481;
                                      ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__44486;
                                      
                                      //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      ret__44486 = ::x10aux::nullCheck(myComplexK)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__apply(
                                                     (__extension__ ({
                                                         
                                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long i__44468 =
                                                           i__44483;
                                                         x10_long i__44469 =
                                                           i__44484;
                                                         x10_long i__44470 =
                                                           i__44485;
                                                         x10_long ret__44471;
                                                         
                                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long offset__44467 =
                                                           ((i__44468) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min0)));
                                                         
                                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__44467 =
                                                           ((((((offset__44467) * (::x10aux::nullCheck(myComplexK)->FMGL(layout_stride1)))) + (i__44469))) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min1)));
                                                         
                                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__44467 =
                                                           ((((((offset__44467) * (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                     ((x10_long)0ll))))) + (i__44470))) - (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                             ((x10_long)1ll))));
                                                         
                                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         ret__44471 =
                                                           offset__44467;
                                                         ret__44471;
                                                     }))
                                                     );
                                      ret__44486;
                                  }))
                                  , childExp__44477->FMGL(second),
                                  (__extension__ ({
                                      
                                      //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long i__44487 =
                                        ((((dx__44479) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                      x10_long i__44488 =
                                        ((((dy__44480) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                      x10_long i__44489 =
                                        ((((dz__44481) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                      ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__44490;
                                      
                                      //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      ret__44490 = ::x10aux::nullCheck(myWignerA)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__apply(
                                                     (__extension__ ({
                                                         
                                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long i__44473 =
                                                           i__44487;
                                                         x10_long i__44474 =
                                                           i__44488;
                                                         x10_long i__44475 =
                                                           i__44489;
                                                         x10_long ret__44476;
                                                         
                                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long offset__44472 =
                                                           ((i__44473) - (::x10aux::nullCheck(myWignerA)->FMGL(layout_min0)));
                                                         
                                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__44472 =
                                                           ((((((offset__44472) * (::x10aux::nullCheck(myWignerA)->FMGL(layout_stride1)))) + (i__44474))) - (::x10aux::nullCheck(myWignerA)->FMGL(layout_min1)));
                                                         
                                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__44472 =
                                                           ((((((offset__44472) * (::x10aux::nullCheck(::x10aux::nullCheck(myWignerA)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                     ((x10_long)0ll))))) + (i__44475))) - (::x10aux::nullCheck(::x10aux::nullCheck(myWignerA)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                             ((x10_long)1ll))));
                                                         
                                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         ret__44476 =
                                                           offset__44472;
                                                         ret__44476;
                                                     }))
                                                     );
                                      ret__44490;
                                  }))
                                  );
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    {
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::x10::lang::CheckedThrowable* throwable__44536 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                ::x10::lang::Runtime::enterAtomic();
                {
                    this->FMGL(multipoleReady) = true;
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc112) {
            {
                ::x10::lang::CheckedThrowable* formal__44537 =
                  __exc112;
                {
                    throwable__44536 = formal__44537;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__44536, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__44536))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__44536));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__44536, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__44536)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__44536));
            }
            
        }
        
    }
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    if (nonNullChildren) {
        
        //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        this->sendMultipole();
    } else {
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__44500 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        ::au::edu::anu::mm::MultipoleExpansion* second__44499 =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__44500->FMGL(first) = ((x10_long)0ll);
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__44500->FMGL(second) = (reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(X10_NULL)));
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        return alloc__44500;
        
    }
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__44507 =
       ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
    
    //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
    x10_long first__44501 = this->FMGL(numAtoms);
    ::au::edu::anu::mm::MultipoleExpansion* second__44502 =
      this->FMGL(multipoleExp);
    
    //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
    alloc__44507->FMGL(first) = first__44501;
    
    //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
    alloc__44507->FMGL(second) = second__44502;
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    return alloc__44507;
    
}

//#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
void au::edu::anu::mm::ParentOctant::multipolesToLocal() {
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >* rail__44508 =
      this->FMGL(children);
    x10_long size__44509 = (x10_long)(::x10aux::nullCheck(rail__44508)->FMGL(size));
    {
        x10_long idx__44510;
        for (idx__44510 = ((x10_long)0ll); ((idx__44510) < (size__44509));
             idx__44510 = ((idx__44510) + (((x10_long)1ll))))
        {
            ::au::edu::anu::mm::Octant* child__44511 = ::x10aux::nullCheck(rail__44508)->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                                         idx__44510);
            
            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            if (((!::x10aux::struct_equals(child__44511, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                !(::x10aux::instanceof< ::au::edu::anu::mm::GhostOctant*>(child__44511))))
            {
                
                //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_ParentOctant__closure__2)))au_edu_anu_mm_ParentOctant__closure__2(child__44511))));
            }
            
        }
    }
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::au::edu::anu::mm::Octant::multipolesToLocal();
}

//#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
x10_double au::edu::anu::mm::ParentOctant::downward(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion) {
    
    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    this->FMGL(multipoleReady) = false;
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    if (((this->FMGL(numAtoms)) > (((x10_long)0ll)))) {
        
        //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        this->addParentExpansion(parentLocalExpansion);
        
        //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::au::edu::anu::mm::LocalExpansion* parentExp = this->FMGL(localExp);
        
        //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_double farField;
        {
            ::x10::lang::FinishState* fs__44533 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                               ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                                   ::au::edu::anu::mm::Octant__SumReducer alloc__44241 =
                                                                                                                     
                                                                                                                   ::au::edu::anu::mm::Octant__SumReducer::_alloc();
                                                                                                                   alloc__44241;
                                                                                                               }))
                                                                                                               )));
            try {
                {
                    
                    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                    x10_long i__44390max__44519 = (((x10_long)(::x10aux::nullCheck(this->FMGL(children))->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__44520;
                        for (i__44520 = ((x10_long)0ll); ((i__44520) <= (i__44390max__44519));
                             i__44520 = ((i__44520) + (((x10_long)1ll))))
                        {
                            x10_long i__44521 = i__44520;
                            
                            //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            ::au::edu::anu::mm::Octant* childOctant__44512 =
                              ::x10aux::nullCheck(this->FMGL(children))->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                i__44521);
                            
                            //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            if ((!::x10aux::struct_equals(childOctant__44512,
                                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                            {
                                ::x10::lang::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_ParentOctant__closure__3)))au_edu_anu_mm_ParentOctant__closure__3(i__44521, this, childOctant__44512, parentExp))));
                            }
                            
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc115) {
                {
                    ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                      __exc115;
                    {
                        ::x10::lang::Runtime::pushException(
                          __lowerer__var__0__);
                    }
                }
            }
            farField = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                         fs__44533);
        }
        
        //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        return farField;
        
    } else {
        
        //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        return 0.0;
        
    }
    
}

//#line 157 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
::x10::lang::String* au::edu::anu::mm::ParentOctant::toString(
  ) {
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::ParentOctant_Strings::sl__48563), this->FMGL(id));
    
}

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
::au::edu::anu::mm::ParentOctant* au::edu::anu::mm::ParentOctant::au__edu__anu__mm__ParentOctant____this__au__edu__anu__mm__ParentOctant(
  ) {
    return this;
    
}
void au::edu::anu::mm::ParentOctant::__fieldInitializers_au_edu_anu_mm_ParentOctant(
  ) {
    this->FMGL(children) = ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >::_make(((x10_long)8ll));
    this->FMGL(numAtoms) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t au::edu::anu::mm::ParentOctant::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::ParentOctant::_deserializer);

void au::edu::anu::mm::ParentOctant::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::mm::Octant::_serialize_body(buf);
    buf.write(this->FMGL(children));
    buf.write(this->FMGL(numAtoms));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::ParentOctant::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::ParentOctant* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::ParentOctant>()) ::au::edu::anu::mm::ParentOctant();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::ParentOctant::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Octant::_deserialize_body(buf);
    FMGL(children) = buf.read< ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >*>();
    FMGL(numAtoms) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::mm::ParentOctant::rtt;
void au::edu::anu::mm::ParentOctant::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::mm::Octant>()};
    rtt.initStageTwo("au.edu.anu.mm.ParentOctant",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::ParentOctant_Strings::sl__48563("ParentOctant ");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_ParentOctant__closure__1>au_edu_anu_mm_ParentOctant__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_ParentOctant__closure__1::__apply, &au_edu_anu_mm_ParentOctant__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_ParentOctant__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_ParentOctant__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_ParentOctant__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_ParentOctant__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_ParentOctant__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_ParentOctant__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_ParentOctant__closure__2>au_edu_anu_mm_ParentOctant__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_ParentOctant__closure__2::__apply, &au_edu_anu_mm_ParentOctant__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_ParentOctant__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_ParentOctant__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_ParentOctant__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_ParentOctant__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_ParentOctant__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_ParentOctant__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_ParentOctant__closure__3>au_edu_anu_mm_ParentOctant__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_ParentOctant__closure__3::__apply, &au_edu_anu_mm_ParentOctant__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_ParentOctant__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_ParentOctant__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_ParentOctant__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_ParentOctant__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_ParentOctant__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_ParentOctant__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of ParentOctant */
/*************************************************/
