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
          i__67653, ::x10aux::nullCheck(child__67650)->upward());
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* childExpansions;
    x10_long i__67653;
    ::au::edu::anu::mm::Octant* child__67650;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->childExpansions);
        buf.write(this->i__67653);
        buf.write(this->child__67650);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_ParentOctant__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_ParentOctant__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* that_childExpansions = buf.read< ::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >*>();
        x10_long that_i__67653 = buf.read<x10_long>();
        ::au::edu::anu::mm::Octant* that_child__67650 = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_ParentOctant__closure__1* this_ = new (storage) au_edu_anu_mm_ParentOctant__closure__1(that_childExpansions, that_i__67653, that_child__67650);
        return this_;
    }
    
    au_edu_anu_mm_ParentOctant__closure__1(::x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >* childExpansions, x10_long i__67653, ::au::edu::anu::mm::Octant* child__67650) : childExpansions(childExpansions), i__67653(i__67653), child__67650(child__67650) { }
    
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
        ::x10aux::nullCheck(child__67701)->multipolesToLocal();
    }
    
    // captured environment
    ::au::edu::anu::mm::Octant* child__67701;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->child__67701);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_ParentOctant__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_ParentOctant__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Octant* that_child__67701 = buf.read< ::au::edu::anu::mm::Octant*>();
        au_edu_anu_mm_ParentOctant__closure__2* this_ = new (storage) au_edu_anu_mm_ParentOctant__closure__2(that_child__67701);
        return this_;
    }
    
    au_edu_anu_mm_ParentOctant__closure__2(::au::edu::anu::mm::Octant* child__67701) : child__67701(child__67701) { }
    
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
        x10_long dx__67703 = ((i__67711) / ::x10aux::zeroCheck(((x10_long)4ll)));
        
        //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long dy__67704 = ((((i__67711) % ::x10aux::zeroCheck(((x10_long)4ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long dz__67705 = ((i__67711) % ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long childX__67706 = ((((((x10_long)2ll)) * (((x10_long)(saved_this->FMGL(id)->FMGL(x)))))) + (dx__67703));
        
        //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long childY__67707 = ((((((x10_long)2ll)) * (((x10_long)(saved_this->FMGL(id)->FMGL(y)))))) + (dy__67704));
        
        //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        x10_long childZ__67708 = ((((((x10_long)2ll)) * (((x10_long)(saved_this->FMGL(id)->FMGL(z)))))) + (dz__67705));
        
        //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(::x10aux::nullCheck(childOctant__67702)->downward(
                                                        parentExp));
    }
    
    // captured environment
    x10_long i__67711;
    ::au::edu::anu::mm::ParentOctant* saved_this;
    ::au::edu::anu::mm::Octant* childOctant__67702;
    ::au::edu::anu::mm::LocalExpansion* parentExp;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->i__67711);
        buf.write(this->saved_this);
        buf.write(this->childOctant__67702);
        buf.write(this->parentExp);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_ParentOctant__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_mm_ParentOctant__closure__3>();
        buf.record_reference(storage);
        x10_long that_i__67711 = buf.read<x10_long>();
        ::au::edu::anu::mm::ParentOctant* that_saved_this = buf.read< ::au::edu::anu::mm::ParentOctant*>();
        ::au::edu::anu::mm::Octant* that_childOctant__67702 = buf.read< ::au::edu::anu::mm::Octant*>();
        ::au::edu::anu::mm::LocalExpansion* that_parentExp = buf.read< ::au::edu::anu::mm::LocalExpansion*>();
        au_edu_anu_mm_ParentOctant__closure__3* this_ = new (storage) au_edu_anu_mm_ParentOctant__closure__3(that_i__67711, that_saved_this, that_childOctant__67702, that_parentExp);
        return this_;
    }
    
    au_edu_anu_mm_ParentOctant__closure__3(x10_long i__67711, ::au::edu::anu::mm::ParentOctant* saved_this, ::au::edu::anu::mm::Octant* childOctant__67702, ::au::edu::anu::mm::LocalExpansion* parentExp) : i__67711(i__67711), saved_this(saved_this), childOctant__67702(childOctant__67702), parentExp(parentExp) { }
    
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
    ::au::edu::anu::mm::ParentOctant* this__67641 = this;
    ::x10aux::nullCheck(this__67641)->FMGL(children) = ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >::_make(((x10_long)8ll));
    ::x10aux::nullCheck(this__67641)->FMGL(numAtoms) = ((x10_long)0ll);
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
    ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >* rail__67642 =
      this->FMGL(children);
    x10_long size__67643 = (x10_long)(::x10aux::nullCheck(rail__67642)->FMGL(size));
    {
        x10_long idx__67644;
        for (idx__67644 = ((x10_long)0ll); ((idx__67644) < (size__67643));
             idx__67644 = ((idx__67644) + (((x10_long)1ll)))) {
            ::au::edu::anu::mm::Octant* child__67645 = ::x10aux::nullCheck(rail__67642)->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                                         idx__67644);
            
            //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            if ((!::x10aux::struct_equals(child__67645, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                octants = ((octants) + (::x10aux::nullCheck(child__67645)->countOctants()));
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
    ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >* rail__67646 =
      this->FMGL(children);
    x10_long size__67647 = (x10_long)(::x10aux::nullCheck(rail__67646)->FMGL(size));
    {
        x10_long idx__67648;
        for (idx__67648 = ((x10_long)0ll); ((idx__67648) < (size__67647));
             idx__67648 = ((idx__67648) + (((x10_long)1ll))))
        {
            ::au::edu::anu::mm::Octant* child__67649 = ::x10aux::nullCheck(rail__67646)->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                                         idx__67648);
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            if ((!::x10aux::struct_equals(child__67649, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ghostOctants = ((ghostOctants) + (::x10aux::nullCheck(child__67649)->ghostOctants()));
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
        ::x10::lang::FinishState* fs__67715 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                x10_long i__54863max__67651 = (((x10_long)(::x10aux::nullCheck(this->FMGL(children))->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__67652;
                    for (i__67652 = ((x10_long)0ll); ((i__67652) <= (i__54863max__67651));
                         i__67652 = ((i__67652) + (((x10_long)1ll))))
                    {
                        x10_long i__67653 = i__67652;
                        
                        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                        ::au::edu::anu::mm::Octant* child__67650 =
                          ::x10aux::nullCheck(this->FMGL(children))->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                            i__67653);
                        
                        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                        if ((!::x10aux::struct_equals(child__67650,
                                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                        {
                            ::x10::lang::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_ParentOctant__closure__1)))au_edu_anu_mm_ParentOctant__closure__1(childExpansions, i__67653, child__67650))));
                        }
                        
                    }
                }
                
                //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ::x10aux::nullCheck(this->FMGL(multipoleExp))->clear();
                
                //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ::x10aux::nullCheck(this->FMGL(localExp))->clear();
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc245) {
            {
                ::x10::lang::CheckedThrowable* ct__67713 =
                  __exc245;
                {
                    ::x10::lang::Runtime::pushException(ct__67713);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__67715);
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
    x10_long i__54917min__67693 = ((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(x)))));
    x10_long i__54917max__67694 = ((((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(x)))))) + (((x10_long)1ll)));
    {
        x10_long i__67695;
        for (i__67695 = i__54917min__67693; ((i__67695) <= (i__54917max__67694));
             i__67695 = ((i__67695) + (((x10_long)1ll))))
        {
            x10_long x__67696 = i__67695;
            
            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            x10_long i__54899min__67685 = ((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(y)))));
            x10_long i__54899max__67686 = ((((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(y)))))) + (((x10_long)1ll)));
            {
                x10_long i__67687;
                for (i__67687 = i__54899min__67685; ((i__67687) <= (i__54899max__67686));
                     i__67687 = ((i__67687) + (((x10_long)1ll))))
                {
                    x10_long y__67688 = i__67687;
                    
                    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                    x10_long i__54881min__67681 = ((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(z)))));
                    x10_long i__54881max__67682 = ((((((x10_long)2ll)) * (((x10_long)(this->FMGL(id)->FMGL(z)))))) + (((x10_long)1ll)));
                    {
                        x10_long i__67683;
                        for (i__67683 = i__54881min__67681;
                             ((i__67683) <= (i__54881max__67682));
                             i__67683 = ((i__67683) + (((x10_long)1ll))))
                        {
                            x10_long z__67684 = i__67683;
                            
                            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> childExp__67667 =
                              childExpansions->x10::lang::Rail< ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> >::__apply(
                                (__extension__ ({
                                    x10_long pre__67668 =
                                      i;
                                    i = ((i) + (((x10_long)1ll)));
                                    pre__67668;
                                }))
                                );
                            
                            //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            this->FMGL(numAtoms) = ((this->FMGL(numAtoms)) + (childExp__67667->FMGL(first)));
                            
                            //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            if ((!::x10aux::struct_equals(childExp__67667->FMGL(second),
                                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                            {
                                
                                //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                nonNullChildren = true;
                                
                                //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                x10_long dx__67669 = ((((((((x__67696) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)2ll)))) * (((x10_long)2ll)))) - (((x10_long)1ll)));
                                
                                //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                x10_long dy__67670 = ((((((((y__67688) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)2ll)))) * (((x10_long)2ll)))) - (((x10_long)1ll)));
                                
                                //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                x10_long dz__67671 = ((((((((z__67684) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((x10_long)2ll)))) * (((x10_long)2ll)))) - (((x10_long)1ll)));
                                
                                //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                ::x10aux::nullCheck(this->FMGL(multipoleExp))->translateAndAddMultipole(
                                  ::x10aux::nullCheck(scratch)->FMGL(exp),
                                  ::x10aux::nullCheck(scratch)->FMGL(array),
                                  (__extension__ ({
                                      
                                      //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                                      ::x10x::vector::Vector3d alloc__67672 =
                                         ::x10x::vector::Vector3d::_alloc();
                                      
                                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      x10_double i__67654 =
                                        ((((x10_double) (dx__67669))) * (halfSideLength));
                                      x10_double j__67655 =
                                        ((((x10_double) (dy__67670))) * (halfSideLength));
                                      x10_double k__67656 =
                                        ((((x10_double) (dz__67671))) * (halfSideLength));
                                      
                                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      alloc__67672->FMGL(i) =
                                        i__67654;
                                      alloc__67672->FMGL(j) =
                                        j__67655;
                                      alloc__67672->FMGL(k) =
                                        k__67656;
                                      alloc__67672;
                                  }))
                                  , (__extension__ ({
                                      
                                      //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long i__67673 =
                                        dx__67669;
                                      x10_long i__67674 =
                                        dy__67670;
                                      x10_long i__67675 =
                                        dz__67671;
                                      ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* ret__67676;
                                      
                                      //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      ret__67676 = ::x10aux::nullCheck(myComplexK)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_complex >* >* >::__apply(
                                                     (__extension__ ({
                                                         
                                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long i__67658 =
                                                           i__67673;
                                                         x10_long i__67659 =
                                                           i__67674;
                                                         x10_long i__67660 =
                                                           i__67675;
                                                         x10_long ret__67661;
                                                         
                                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long offset__67657 =
                                                           ((i__67658) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min0)));
                                                         
                                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__67657 =
                                                           ((((((offset__67657) * (::x10aux::nullCheck(myComplexK)->FMGL(layout_stride1)))) + (i__67659))) - (::x10aux::nullCheck(myComplexK)->FMGL(layout_min1)));
                                                         
                                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__67657 =
                                                           ((((((offset__67657) * (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                     ((x10_long)0ll))))) + (i__67660))) - (::x10aux::nullCheck(::x10aux::nullCheck(myComplexK)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                             ((x10_long)1ll))));
                                                         
                                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         ret__67661 =
                                                           offset__67657;
                                                         ret__67661;
                                                     }))
                                                     );
                                      ret__67676;
                                  }))
                                  , childExp__67667->FMGL(second),
                                  (__extension__ ({
                                      
                                      //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      x10_long i__67677 =
                                        ((((dx__67669) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                      x10_long i__67678 =
                                        ((((dy__67670) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                      x10_long i__67679 =
                                        ((((dz__67671) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                      ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* ret__67680;
                                      
                                      //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      ret__67680 = ::x10aux::nullCheck(myWignerA)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::regionarray::Array<x10_double>* >* >* >::__apply(
                                                     (__extension__ ({
                                                         
                                                         //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long i__67663 =
                                                           i__67677;
                                                         x10_long i__67664 =
                                                           i__67678;
                                                         x10_long i__67665 =
                                                           i__67679;
                                                         x10_long ret__67666;
                                                         
                                                         //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         x10_long offset__67662 =
                                                           ((i__67663) - (::x10aux::nullCheck(myWignerA)->FMGL(layout_min0)));
                                                         
                                                         //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__67662 =
                                                           ((((((offset__67662) * (::x10aux::nullCheck(myWignerA)->FMGL(layout_stride1)))) + (i__67664))) - (::x10aux::nullCheck(myWignerA)->FMGL(layout_min1)));
                                                         
                                                         //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         offset__67662 =
                                                           ((((((offset__67662) * (::x10aux::nullCheck(::x10aux::nullCheck(myWignerA)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                     ((x10_long)0ll))))) + (i__67665))) - (::x10aux::nullCheck(::x10aux::nullCheck(myWignerA)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                             ((x10_long)1ll))));
                                                         
                                                         //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                         ret__67666 =
                                                           offset__67662;
                                                         ret__67666;
                                                     }))
                                                     );
                                      ret__67680;
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
        ::x10::lang::CheckedThrowable* throwable__67726 =
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
        catch (::x10::lang::CheckedThrowable* __exc246) {
            {
                ::x10::lang::CheckedThrowable* formal__67727 =
                  __exc246;
                {
                    throwable__67726 = formal__67727;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__67726, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__67726))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__67726));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__67726, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__67726)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__67726));
            }
            
        }
        
    }
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    if (nonNullChildren) {
        
        //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        this->sendMultipole();
    } else {
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__67690 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        ::au::edu::anu::mm::MultipoleExpansion* second__67689 =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__67690->FMGL(first) = ((x10_long)0ll);
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__67690->FMGL(second) = (reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(X10_NULL)));
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
        return alloc__67690;
        
    }
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__67697 =
       ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
    
    //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
    x10_long first__67691 = this->FMGL(numAtoms);
    ::au::edu::anu::mm::MultipoleExpansion* second__67692 =
      this->FMGL(multipoleExp);
    
    //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
    alloc__67697->FMGL(first) = first__67691;
    
    //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
    alloc__67697->FMGL(second) = second__67692;
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    return alloc__67697;
    
}

//#line 119 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
void au::edu::anu::mm::ParentOctant::multipolesToLocal() {
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
    ::x10::lang::Rail< ::au::edu::anu::mm::Octant* >* rail__67698 =
      this->FMGL(children);
    x10_long size__67699 = (x10_long)(::x10aux::nullCheck(rail__67698)->FMGL(size));
    {
        x10_long idx__67700;
        for (idx__67700 = ((x10_long)0ll); ((idx__67700) < (size__67699));
             idx__67700 = ((idx__67700) + (((x10_long)1ll))))
        {
            ::au::edu::anu::mm::Octant* child__67701 = ::x10aux::nullCheck(rail__67698)->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                                         idx__67700);
            
            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
            if (((!::x10aux::struct_equals(child__67701, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                !(::x10aux::instanceof< ::au::edu::anu::mm::GhostOctant*>(child__67701))))
            {
                
                //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_ParentOctant__closure__2)))au_edu_anu_mm_ParentOctant__closure__2(child__67701))));
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
            ::x10::lang::FinishState* fs__67723 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                               ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                                   ::au::edu::anu::mm::Octant__SumReducer alloc__54811 =
                                                                                                                     
                                                                                                                   ::au::edu::anu::mm::Octant__SumReducer::_alloc();
                                                                                                                   alloc__54811;
                                                                                                               }))
                                                                                                               )));
            try {
                {
                    
                    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                    x10_long i__54960max__67709 = (((x10_long)(::x10aux::nullCheck(this->FMGL(children))->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__67710;
                        for (i__67710 = ((x10_long)0ll); ((i__67710) <= (i__54960max__67709));
                             i__67710 = ((i__67710) + (((x10_long)1ll))))
                        {
                            x10_long i__67711 = i__67710;
                            
                            //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            ::au::edu::anu::mm::Octant* childOctant__67702 =
                              ::x10aux::nullCheck(this->FMGL(children))->x10::lang::Rail< ::au::edu::anu::mm::Octant* >::__apply(
                                i__67711);
                            
                            //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/ParentOctant.x10"
                            if ((!::x10aux::struct_equals(childOctant__67702,
                                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                            {
                                ::x10::lang::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_ParentOctant__closure__3)))au_edu_anu_mm_ParentOctant__closure__3(i__67711, this, childOctant__67702, parentExp))));
                            }
                            
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc249) {
                {
                    ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                      __exc249;
                    {
                        ::x10::lang::Runtime::pushException(
                          __lowerer__var__0__);
                    }
                }
            }
            farField = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                         fs__67723);
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
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::ParentOctant_Strings::sl__68581), this->FMGL(id));
    
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

::x10::lang::String au::edu::anu::mm::ParentOctant_Strings::sl__68581("ParentOctant ");

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
