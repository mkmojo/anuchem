/*************************************************/
/* START of LeafOctant */
#include <au/edu/anu/mm/LeafOctant.h>

#include <au/edu/anu/mm/Octant.h>
#include <x10/lang/Double.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/mm/LeafOctant__UList.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/Int.h>
#include <x10/lang/UByte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <au/edu/anu/mm/Expansion.h>
#include <au/edu/anu/mm/LocalExpansion.h>
#include <au/edu/anu/mm/FmmLocalData.h>
#include <au/edu/anu/mm/FastMultipoleMethod.h>
#include <au/edu/anu/mm/AssociatedLegendrePolynomial.h>
#include <au/edu/anu/mm/FmmScratch.h>
#include <x10x/vector/Vector3d.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <au/edu/anu/mm/LET.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Inline.h>
#include <au/edu/anu/mm/LeafOctant__UList__UListIterator.h>
#include <x10/lang/UInt.h>
#include <x10/lang/Math.h>
#include <x10/lang/ULong.h>
#include <x10/util/Random.h>
#include <x10/util/Timer.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_LEAFOCTANT__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_LEAFOCTANT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_mm_LeafOctant__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_double>::itable<au_edu_anu_mm_LeafOctant__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(x10_long i){
        
        //#line 304 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return (::x10aux::struct_equals(((i) % ::x10aux::zeroCheck(((x10_long)4ll))),
                                        ((x10_long)3ll))) ? (1.0)
          : (((rand->nextDouble()) + (39.0)));
        
    }
    
    // captured environment
    ::x10::util::Random* rand;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rand);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_LeafOctant__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_LeafOctant__closure__1>();
        buf.record_reference(storage);
        ::x10::util::Random* that_rand = buf.read< ::x10::util::Random*>();
        au_edu_anu_mm_LeafOctant__closure__1* this_ = new (storage) au_edu_anu_mm_LeafOctant__closure__1(that_rand);
        return this_;
    }
    
    au_edu_anu_mm_LeafOctant__closure__1(::x10::util::Random* rand) : rand(rand) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10:304";
    }

};

#endif // AU_EDU_ANU_MM_LEAFOCTANT__CLOSURE__1_CLOSURE
::x10::lang::Comparable< ::au::edu::anu::mm::Octant* >::itable< ::au::edu::anu::mm::LeafOctant >  au::edu::anu::mm::LeafOctant::_itable_0(&::au::edu::anu::mm::Octant::compareTo, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::LeafOctant::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::LeafOctant >  au::edu::anu::mm::LeafOctant::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::LeafOctant::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::LeafOctant::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* > >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::LeafOctant")};

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
/** The U-list consists of all leaf octants not well-separated from this octant. */

//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
void au::edu::anu::mm::LeafOctant::_constructor(::au::edu::anu::mm::OctantId id,
                                                x10_int numTerms, x10_int ws,
                                                x10_ubyte dMax) {
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    (this)->::au::edu::anu::mm::Octant::_constructor(id, numTerms, ws, dMax);
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::au::edu::anu::mm::LeafOctant* this__66628 = this;
    ::x10aux::nullCheck(this__66628)->FMGL(atoms) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__66628)->FMGL(sources) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__66628)->FMGL(uList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::LeafOctant__UList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::au::edu::anu::mm::LeafOctant* au::edu::anu::mm::LeafOctant::_make(::au::edu::anu::mm::OctantId id,
                                                                    x10_int numTerms,
                                                                    x10_int ws,
                                                                    x10_ubyte dMax)
{
    ::au::edu::anu::mm::LeafOctant* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant>()) ::au::edu::anu::mm::LeafOctant();
    this_->_constructor(id, numTerms, ws, dMax);
    return this_;
}



//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
void au::edu::anu::mm::LeafOctant::makeSources() {
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(sources) = ::x10::lang::Rail< x10_double >::_make(((::x10aux::nullCheck(this->FMGL(atoms))->size()) * (((x10_long)4ll))));
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__53343max__66631 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__66632;
        for (i__66632 = ((x10_long)0ll); ((i__66632) <= (i__53343max__66631));
             i__66632 = ((i__66632) + (((x10_long)1ll))))
        {
            x10_long i__66633 = i__66632;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__66629 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                i__66633);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long idx__66630 = ((i__66633) * (((x10_long)4ll)));
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              idx__66630, ::x10aux::nullCheck(atom__66629)->FMGL(centre)->FMGL(i));
            
            //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__66630) + (((x10_long)1ll))), ::x10aux::nullCheck(atom__66629)->FMGL(centre)->FMGL(j));
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__66630) + (((x10_long)2ll))), ::x10aux::nullCheck(atom__66629)->FMGL(centre)->FMGL(k));
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__66630) + (((x10_long)3ll))), ::x10aux::nullCheck(atom__66629)->FMGL(charge));
        }
    }
    
}

//#line 56 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_long au::edu::anu::mm::LeafOctant::numAtoms() {
    return ::x10aux::nullCheck(this->FMGL(atoms))->size();
    
}

//#line 58 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::mm::LeafOctant::getSources(
  ) {
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return this->FMGL(sources);
    
}

//#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_int au::edu::anu::mm::LeafOctant::countOctants() {
    return ((x10_int)1);
    
}

//#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_int au::edu::anu::mm::LeafOctant::ghostOctants() {
    return ((x10_int)0);
    
}

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>
  au::edu::anu::mm::LeafOctant::upward() {
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((::x10aux::nullCheck(this->FMGL(atoms))->size()) > (((x10_long)0ll))))
    {
        
        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10aux::nullCheck(this->FMGL(multipoleExp))->clear();
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10aux::nullCheck(this->FMGL(localExp))->clear();
        
        //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        x10_double size = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->FMGL(size);
        
        //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10x::vector::Point3d centre = this->getCentre(
                                           size);
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::au::edu::anu::mm::AssociatedLegendrePolynomial* plm =
          ::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::getWorkerLocal())->FMGL(plm);
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        x10_long i__53361max__66643 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
        {
            x10_long i__66644;
            for (i__66644 = ((x10_long)0ll); ((i__66644) <= (i__53361max__66643));
                 i__66644 = ((i__66644) + (((x10_long)1ll))))
            {
                x10_long i__66645 = i__66644;
                
                //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::au::edu::anu::chem::mm::MMAtom* atom__66637 =
                  ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                    i__66645);
                
                //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::x10x::vector::Vector3d atomLocation__66638 =
                  (__extension__ ({
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Point3d b__66639 = ::x10aux::nullCheck(atom__66637)->FMGL(centre);
                    (__extension__ ({
                        
                        //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Vector3d alloc__66640 =
                           ::x10x::vector::Vector3d::_alloc();
                        
                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double i__66634 = ((centre->FMGL(i)) - (b__66639->FMGL(i)));
                        x10_double j__66635 = ((centre->FMGL(j)) - (b__66639->FMGL(j)));
                        x10_double k__66636 = ((centre->FMGL(k)) - (b__66639->FMGL(k)));
                        
                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        alloc__66640->FMGL(i) = i__66634;
                        alloc__66640->FMGL(j) = j__66635;
                        alloc__66640->FMGL(k) = k__66636;
                        alloc__66640;
                    }))
                    ;
                }))
                ;
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::x10aux::nullCheck(this->FMGL(multipoleExp))->addOlm(
                  ::x10aux::nullCheck(atom__66637)->FMGL(charge),
                  atomLocation__66638, plm);
            }
        }
        {
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::CheckedThrowable* throwable__66820 =
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
            catch (::x10::lang::CheckedThrowable* __exc132) {
                {
                    ::x10::lang::CheckedThrowable* formal__66821 =
                      __exc132;
                    {
                        throwable__66820 = formal__66821;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__66820,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__66820))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__66820));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__66820,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__66820)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__66820));
                }
                
            }
            
        }
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->sendMultipole();
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__66646 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        x10_long first__66641 = ::x10aux::nullCheck(this->FMGL(atoms))->size();
        ::au::edu::anu::mm::MultipoleExpansion* second__66642 =
          this->FMGL(multipoleExp);
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__66646->FMGL(first) = first__66641;
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__66646->FMGL(second) = second__66642;
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return alloc__66646;
        
    } else {
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__66648 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        ::au::edu::anu::mm::MultipoleExpansion* second__66647 =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__66648->FMGL(first) = ((x10_long)0ll);
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__66648->FMGL(second) = (reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(X10_NULL)));
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return alloc__66648;
        
    }
    
}

//#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_double au::edu::anu::mm::LeafOctant::downward(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion) {
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(multipoleReady) = false;
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((::x10aux::nullCheck(this->FMGL(atoms))->size()) > (((x10_long)0ll))))
    {
        
        //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->addParentExpansion(parentLocalExpansion);
        
        //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::au::edu::anu::mm::FmmLocalData* local = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)();
        
        //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        x10_double potential = this->farField(local->FMGL(size));
        {
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            potential = ((potential) + (this->nearField(local->FMGL(size),
                                                        local->FMGL(locallyEssentialTree),
                                                        local->FMGL(dMax))));
        }
        
        //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return potential;
        
    } else {
        
        //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return 0.0;
        
    }
    
}

//#line 121 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_double au::edu::anu::mm::LeafOctant::farField(x10_double size) {
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10x::vector::Point3d boxCentre = this->getCentre(size);
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::au::edu::anu::mm::AssociatedLegendrePolynomial* plm =
      ::x10aux::nullCheck(::au::edu::anu::mm::FmmScratch::getWorkerLocal())->FMGL(plm);
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_double potential = 0.0;
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__53379max__66657 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__66658;
        for (i__66658 = ((x10_long)0ll); ((i__66658) <= (i__53379max__66657));
             i__66658 = ((i__66658) + (((x10_long)1ll))))
        {
            x10_long atomIndex__66659 = i__66658;
            
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__66652 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                atomIndex__66659);
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(atom__66652)->FMGL(force) =
              ::x10x::vector::Vector3d::FMGL(NULL__get)();
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10x::vector::Vector3d locationWithinBox__66653 =
              (__extension__ ({
                ::x10x::vector::Point3d this__66654 = ::x10aux::nullCheck(atom__66652)->FMGL(centre);
                
                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                ::x10x::vector::Point3d b__66655 = boxCentre;
                (__extension__ ({
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Vector3d alloc__66656 =
                       ::x10x::vector::Vector3d::_alloc();
                    
                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    x10_double i__66649 = ((this__66654->FMGL(i)) - (b__66655->FMGL(i)));
                    x10_double j__66650 = ((this__66654->FMGL(j)) - (b__66655->FMGL(j)));
                    x10_double k__66651 = ((this__66654->FMGL(k)) - (b__66655->FMGL(k)));
                    
                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    alloc__66656->FMGL(i) = i__66649;
                    alloc__66656->FMGL(j) = j__66650;
                    alloc__66656->FMGL(k) = k__66651;
                    alloc__66656;
                }))
                ;
            }))
            ;
            
            //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            potential = ((potential) + (::x10aux::nullCheck(this->FMGL(localExp))->calculatePotentialAndForces(
                                          atom__66652, locationWithinBox__66653,
                                          plm)));
        }
    }
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return potential;
    
}

//#line 136 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 147 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_double au::edu::anu::mm::LeafOctant::nearField(x10_double size,
                                                   ::au::edu::anu::mm::LET* myLET,
                                                   x10_ubyte dMax) {
    
    //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_double directEnergy = 0.0;
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    {
        ::au::edu::anu::mm::LeafOctant__UList__UListIterator* mortonId__53397;
        for (mortonId__53397 = reinterpret_cast< ::au::edu::anu::mm::LeafOctant__UList__UListIterator*>(::x10aux::nullCheck(this->FMGL(uList))->iterator());
             mortonId__53397->hasNext(); ) {
            x10_uint mortonId = mortonId__53397->next();
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::Rail< x10_double >* oct2Data = ::x10aux::nullCheck(myLET)->getAtomDataForOctant(
                                                          mortonId);
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            if ((!::x10aux::struct_equals(oct2Data, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                directEnergy = ((directEnergy) + ((__extension__ ({
                    ::au::edu::anu::mm::LeafOctant* this__64176 =
                      this;
                    
                    //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10::lang::Rail< x10_double >* oct2Data__64146 =
                      oct2Data;
                    x10_double ret__64177;
                    
                    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double directEnergy__66690 = 0.0;
                    
                    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_long i__53435max__66687 = ((::x10aux::nullCheck(::x10aux::nullCheck(this__64176)->FMGL(atoms))->size()) - (((x10_long)1ll)));
                    {
                        x10_long i__66688;
                        for (i__66688 = ((x10_long)0ll); ((i__66688) <= (i__53435max__66687));
                             i__66688 = ((i__66688) + (((x10_long)1ll))))
                        {
                            x10_long i__66689 = i__66688;
                            
                            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::au::edu::anu::chem::mm::MMAtom* atomI__66663 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(this__64176)->FMGL(atoms))->__apply(
                                i__66689);
                            
                            //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::x10x::vector::Point3d ci__66664 =
                              ::x10aux::nullCheck(atomI__66663)->FMGL(centre);
                            
                            //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double xi__66665 = ci__66664->FMGL(i);
                            
                            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double yi__66666 = ci__66664->FMGL(j);
                            
                            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double zi__66667 = ci__66664->FMGL(k);
                            
                            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qi__66668 = ::x10aux::nullCheck(atomI__66663)->FMGL(charge);
                            
                            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fix__66669 = ::x10aux::nullCheck(atomI__66663)->FMGL(force)->FMGL(i);
                            
                            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fiy__66670 = ::x10aux::nullCheck(atomI__66663)->FMGL(force)->FMGL(j);
                            
                            //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fiz__66671 = ::x10aux::nullCheck(atomI__66663)->FMGL(force)->FMGL(k);
                            
                            //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            {
                                x10_long j__66672;
                                for (j__66672 = ((x10_long)0ll);
                                     ((j__66672) < ((x10_long)(::x10aux::nullCheck(oct2Data__64146)->FMGL(size))));
                                     j__66672 = ((j__66672) + (((x10_long)4ll))))
                                {
                                    
                                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double xj__66673 =
                                      ::x10aux::nullCheck(oct2Data__64146)->x10::lang::Rail< x10_double >::__apply(
                                        j__66672);
                                    
                                    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double yj__66674 =
                                      ::x10aux::nullCheck(oct2Data__64146)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__66672) + (((x10_long)1ll))));
                                    
                                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double zj__66675 =
                                      ::x10aux::nullCheck(oct2Data__64146)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__66672) + (((x10_long)2ll))));
                                    
                                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double qj__66676 =
                                      ::x10aux::nullCheck(oct2Data__64146)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__66672) + (((x10_long)3ll))));
                                    
                                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dx__66677 =
                                      ((xj__66673) - (xi__66665));
                                    
                                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dy__66678 =
                                      ((yj__66674) - (yi__66666));
                                    
                                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dz__66679 =
                                      ((zj__66675) - (zi__66667));
                                    
                                    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double r__66680 =
                                      ((((((dx__66677) * (dx__66677))) + (((dy__66678) * (dy__66678))))) + (((dz__66679) * (dz__66679))));
                                    
                                    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double invR__66681;
                                    
                                    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double invR__66682;
                                    {
                                        
                                        //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                        invR__66682 = ((1.0) / (r__66680));
                                        
                                        //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                        invR__66681 = ::x10::lang::MathNatives::sqrt(invR__66682);
                                    }
                                    
                                    //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double qq__66683 =
                                      ((qi__66668) * (qj__66676));
                                    
                                    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double e__66684 =
                                      ((invR__66681) * (qq__66683));
                                    
                                    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    directEnergy__66690 =
                                      ((directEnergy__66690) + (e__66684));
                                    
                                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double forceScaling__66685 =
                                      ((e__66684) * (invR__66682));
                                    
                                    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fix__66669 = ((fix__66669) + (((forceScaling__66685) * (dx__66677))));
                                    
                                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fiy__66670 = ((fiy__66670) + (((forceScaling__66685) * (dy__66678))));
                                    
                                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fiz__66671 = ((fiz__66671) + (((forceScaling__66685) * (dz__66679))));
                                }
                            }
                            
                            //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::x10aux::nullCheck(atomI__66663)->FMGL(force) =
                              (__extension__ ({
                                ::x10x::vector::Vector3d alloc__66686 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__66660 = fix__66669;
                                x10_double j__66661 = fiy__66670;
                                x10_double k__66662 = fiz__66671;
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__66686->FMGL(i) = i__66660;
                                alloc__66686->FMGL(j) = j__66661;
                                alloc__66686->FMGL(k) = k__66662;
                                alloc__66686;
                            }))
                            ;
                        }
                    }
                    
                    //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ret__64177 = directEnergy__66690;
                    ret__64177;
                }))
                ));
            }
            
        }
    }
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__53417max__66730 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__66731;
        for (i__66731 = ((x10_long)0ll); ((i__66731) <= (i__53417max__66730));
             i__66731 = ((i__66731) + (((x10_long)1ll))))
        {
            x10_long atomIndex__66732 = i__66731;
            
            //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__66729 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                atomIndex__66732);
            
            //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long i__53399max__66726 = ((atomIndex__66732) - (((x10_long)1ll)));
            {
                x10_long i__66727;
                for (i__66727 = ((x10_long)0ll); ((i__66727) <= (i__53399max__66726));
                     i__66727 = ((i__66727) + (((x10_long)1ll))))
                {
                    x10_long sameBoxAtomIndex__66728 = i__66727;
                    
                    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::au::edu::anu::chem::mm::MMAtom* sameBoxAtom__66703 =
                      ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                        sameBoxAtomIndex__66728);
                    
                    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Vector3d rVec__66704 =
                      (__extension__ ({
                        ::x10x::vector::Point3d this__66705 =
                          ::x10aux::nullCheck(sameBoxAtom__66703)->FMGL(centre);
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__66706 =
                          ::x10aux::nullCheck(atom__66729)->FMGL(centre);
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__66707 =
                              that__66706;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__66708 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__66691 = ((this__66705->FMGL(i)) - (b__66707->FMGL(i)));
                                x10_double j__66692 = ((this__66705->FMGL(j)) - (b__66707->FMGL(j)));
                                x10_double k__66693 = ((this__66705->FMGL(k)) - (b__66707->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__66708->FMGL(i) = i__66691;
                                alloc__66708->FMGL(j) = j__66692;
                                alloc__66708->FMGL(k) = k__66693;
                                alloc__66708;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__66709;
                    
                    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__66710;
                    {
                        
                        //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__66710 = ((1.0) / (((((((rVec__66704->FMGL(i)) * (rVec__66704->FMGL(i)))) + (((rVec__66704->FMGL(j)) * (rVec__66704->FMGL(j)))))) + (((rVec__66704->FMGL(k)) * (rVec__66704->FMGL(k)))))));
                        
                        //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__66709 = ::x10::lang::MathNatives::sqrt(invR__66710);
                    }
                    
                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double e__66711 = ((((::x10aux::nullCheck(atom__66729)->FMGL(charge)) * (::x10aux::nullCheck(sameBoxAtom__66703)->FMGL(charge)))) * (invR__66709));
                    
                    //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    directEnergy = ((directEnergy) + (((2.0) * (e__66711))));
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Vector3d pairForce__66712 =
                      (__extension__ ({
                        
                        //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double x__66713 = ((e__66711) * (invR__66710));
                        ::x10x::vector::Vector3d y__66714 =
                          rVec__66704;
                        (__extension__ ({
                            
                            //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double that__66715 = x__66713;
                            (__extension__ ({
                                
                                //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double c__66716 = that__66715;
                                (__extension__ ({
                                    
                                    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d alloc__66717 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__66694 =
                                      ((y__66714->FMGL(i)) * (c__66716));
                                    x10_double j__66695 =
                                      ((y__66714->FMGL(j)) * (c__66716));
                                    x10_double k__66696 =
                                      ((y__66714->FMGL(k)) * (c__66716));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__66717->FMGL(i) =
                                      i__66694;
                                    alloc__66717->FMGL(j) =
                                      j__66695;
                                    alloc__66717->FMGL(k) =
                                      k__66696;
                                    alloc__66717;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(atom__66729)->FMGL(force) =
                      (__extension__ ({
                        ::x10x::vector::Vector3d this__66718 =
                          ::x10aux::nullCheck(atom__66729)->FMGL(force);
                        
                        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d that__66719 =
                          pairForce__66712;
                        (__extension__ ({
                            
                            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d b__66720 =
                              that__66719;
                            (__extension__ ({
                                
                                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__66721 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__66697 = ((this__66718->FMGL(i)) + (b__66720->FMGL(i)));
                                x10_double j__66698 = ((this__66718->FMGL(j)) + (b__66720->FMGL(j)));
                                x10_double k__66699 = ((this__66718->FMGL(k)) + (b__66720->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__66721->FMGL(i) = i__66697;
                                alloc__66721->FMGL(j) = j__66698;
                                alloc__66721->FMGL(k) = k__66699;
                                alloc__66721;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(sameBoxAtom__66703)->FMGL(force) =
                      (__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d x__66722 =
                          ::x10aux::nullCheck(sameBoxAtom__66703)->FMGL(force);
                        ::x10x::vector::Vector3d y__66723 =
                          pairForce__66712;
                        (__extension__ ({
                            
                            //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d b__66724 =
                              y__66723;
                            (__extension__ ({
                                
                                //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__66725 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__66700 = ((x__66722->FMGL(i)) - (b__66724->FMGL(i)));
                                x10_double j__66701 = ((x__66722->FMGL(j)) - (b__66724->FMGL(j)));
                                x10_double k__66702 = ((x__66722->FMGL(k)) - (b__66724->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__66725->FMGL(i) = i__66700;
                                alloc__66725->FMGL(j) = j__66701;
                                alloc__66725->FMGL(k) = k__66702;
                                alloc__66725;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                }
            }
            
        }
    }
    
    //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return directEnergy;
    
}

//#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_double au::edu::anu::mm::LeafOctant::p2pKernel(::x10::lang::Rail< x10_double >* oct2Data) {
    
    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_double directEnergy = 0.0;
    
    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__53435max__66760 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__66761;
        for (i__66761 = ((x10_long)0ll); ((i__66761) <= (i__53435max__66760));
             i__66761 = ((i__66761) + (((x10_long)1ll))))
        {
            x10_long i__66762 = i__66761;
            
            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atomI__66736 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                i__66762);
            
            //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10x::vector::Point3d ci__66737 = ::x10aux::nullCheck(atomI__66736)->FMGL(centre);
            
            //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double xi__66738 = ci__66737->FMGL(i);
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double yi__66739 = ci__66737->FMGL(j);
            
            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double zi__66740 = ci__66737->FMGL(k);
            
            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double qi__66741 = ::x10aux::nullCheck(atomI__66736)->FMGL(charge);
            
            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fix__66742 = ::x10aux::nullCheck(atomI__66736)->FMGL(force)->FMGL(i);
            
            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fiy__66743 = ::x10aux::nullCheck(atomI__66736)->FMGL(force)->FMGL(j);
            
            //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fiz__66744 = ::x10aux::nullCheck(atomI__66736)->FMGL(force)->FMGL(k);
            
            //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            {
                x10_long j__66745;
                for (j__66745 = ((x10_long)0ll); ((j__66745) < ((x10_long)(::x10aux::nullCheck(oct2Data)->FMGL(size))));
                     j__66745 = ((j__66745) + (((x10_long)4ll))))
                {
                    
                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double xj__66746 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             j__66745);
                    
                    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double yj__66747 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__66745) + (((x10_long)1ll))));
                    
                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double zj__66748 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__66745) + (((x10_long)2ll))));
                    
                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qj__66749 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__66745) + (((x10_long)3ll))));
                    
                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dx__66750 = ((xj__66746) - (xi__66738));
                    
                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dy__66751 = ((yj__66747) - (yi__66739));
                    
                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dz__66752 = ((zj__66748) - (zi__66740));
                    
                    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double r__66753 = ((((((dx__66750) * (dx__66750))) + (((dy__66751) * (dy__66751))))) + (((dz__66752) * (dz__66752))));
                    
                    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__66754;
                    
                    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__66755;
                    {
                        
                        //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__66755 = ((1.0) / (r__66753));
                        
                        //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__66754 = ::x10::lang::MathNatives::sqrt(invR__66755);
                    }
                    
                    //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qq__66756 = ((qi__66741) * (qj__66749));
                    
                    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double e__66757 = ((invR__66754) * (qq__66756));
                    
                    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    directEnergy = ((directEnergy) + (e__66757));
                    
                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double forceScaling__66758 = ((e__66757) * (invR__66755));
                    
                    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fix__66742 = ((fix__66742) + (((forceScaling__66758) * (dx__66750))));
                    
                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fiy__66743 = ((fiy__66743) + (((forceScaling__66758) * (dy__66751))));
                    
                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fiz__66744 = ((fiz__66744) + (((forceScaling__66758) * (dz__66752))));
                }
            }
            
            //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(atomI__66736)->FMGL(force) =
              (__extension__ ({
                ::x10x::vector::Vector3d alloc__66759 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__66733 = fix__66742;
                x10_double j__66734 = fiy__66743;
                x10_double k__66735 = fiz__66744;
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__66759->FMGL(i) = i__66733;
                alloc__66759->FMGL(j) = j__66734;
                alloc__66759->FMGL(k) = k__66735;
                alloc__66759;
            }))
            ;
        }
    }
    
    //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return directEnergy;
    
}

//#line 247 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::x10x::vector::Vector3d au::edu::anu::mm::LeafOctant::getTranslation(
  x10_int lowestLevelDim, x10_double size, x10_int x, x10_int y,
  x10_int z) {
    
    //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_double translationX = 0.0;
    
    //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((x) >= (lowestLevelDim))) {
        
        //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        translationX = size;
    } else 
    //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((((x10_long)(x))) < (((x10_long)0ll)))) {
        
        //#line 252 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        translationX = (-(size));
    }
    
    //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_double translationY = ((x10_double) (((x10_long)0ll)));
    
    //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((y) >= (lowestLevelDim))) {
        
        //#line 257 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        translationY = size;
    } else 
    //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((((x10_long)(y))) < (((x10_long)0ll)))) {
        
        //#line 259 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        translationY = (-(size));
    }
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_double translationZ = ((x10_double) (((x10_long)0ll)));
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((z) >= (lowestLevelDim))) {
        
        //#line 264 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        translationZ = size;
    } else 
    //#line 265 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((((x10_long)(z))) < (((x10_long)0ll)))) {
        
        //#line 266 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        translationZ = (-(size));
    }
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10x::vector::Vector3d alloc__66766 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    x10_double i__66763 = translationX;
    x10_double j__66764 = translationY;
    x10_double k__66765 = translationZ;
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    alloc__66766->FMGL(i) = i__66763;
    alloc__66766->FMGL(j) = j__66764;
    alloc__66766->FMGL(k) = k__66765;
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return alloc__66766;
    
}

//#line 275 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_int au::edu::anu::mm::LeafOctant::estimateUListSize(x10_uint mortonId,
                                                        x10_ubyte dMax) {
    
    //#line 276 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::au::edu::anu::mm::OctantId id = ::au::edu::anu::mm::OctantId::getFromMortonId(
                                        mortonId);
    
    //#line 277 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return ::au::edu::anu::mm::LeafOctant::estimateUListSize(
             id, dMax);
    
}

//#line 280 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_int au::edu::anu::mm::LeafOctant::estimateUListSize(::au::edu::anu::mm::OctantId id,
                                                        x10_ubyte dMax) {
    
    //#line 281 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_uint maxExtent = ((x10_uint) ((((x10_uint) ((((x10_uint)1u)) << (x10_int)(0x1f & (((x10_long)(dMax))))))) - (((x10_uint)1u))));
    
    //#line 282 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_int xExtent = (((((x10_ulong) (id->FMGL(x)))) > (((x10_ulong)0ull))) &&
    ((((x10_uint) (id->FMGL(x)))) < (maxExtent))) ? (((x10_int)3))
      : (((x10_int)2));
    
    //#line 283 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_int yExtent = (((((x10_ulong) (id->FMGL(y)))) > (((x10_ulong)0ull))) &&
    ((((x10_uint) (id->FMGL(y)))) < (maxExtent))) ? (((x10_int)3))
      : (((x10_int)2));
    
    //#line 284 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_int zExtent = (((((x10_ulong) (id->FMGL(z)))) > (((x10_ulong)0ull))) &&
    ((((x10_uint) (id->FMGL(z)))) < (maxExtent))) ? (((x10_int)3))
      : (((x10_int)2));
    
    //#line 285 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return ((((xExtent) * (yExtent))) * (zExtent));
    
}

//#line 292 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_long au::edu::anu::mm::LeafOctant::estimateUListCost(
  x10_int q) {
    
    //#line 293 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::au::edu::anu::mm::LeafOctant* dummyOctant =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant>()) ::au::edu::anu::mm::LeafOctant());
    (dummyOctant)->::au::edu::anu::mm::LeafOctant::_constructor(
      (__extension__ ({
          ::au::edu::anu::mm::OctantId alloc__53337 =  ::au::edu::anu::mm::OctantId::_alloc();
          
          //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
          alloc__53337->FMGL(x) = ((x10_ubyte)0);
          alloc__53337->FMGL(y) = ((x10_ubyte)0);
          alloc__53337->FMGL(z) = ((x10_ubyte)0);
          alloc__53337->FMGL(level) = ((x10_ubyte)0);
          alloc__53337;
      }))
      , ((x10_int)1), ((x10_int)1), ((x10_ubyte)0));
    
    //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    dummyOctant->FMGL(atoms) = (__extension__ ({
        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__53338 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
        (alloc__53338)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
          ((x10_long)(q)));
        alloc__53338;
    }))
    ;
    
    //#line 295 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10::util::Random* rand =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    
    //#line 32 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    (rand)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__53453max__66805 = ((((x10_long)(q))) - (((x10_long)1ll)));
    {
        x10_long i__66806;
        for (i__66806 = ((x10_long)0ll); ((i__66806) <= (i__53453max__66805));
             i__66806 = ((i__66806) + (((x10_long)1ll))))
        {
            x10_long i__66807 = i__66806;
            
            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__66770 =
               (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
            (atom__66770)->::au::edu::anu::chem::mm::MMAtom::_constructor(
              (__extension__ ({
                  ::x10x::vector::Point3d alloc__66771 = 
                  ::x10x::vector::Point3d::_alloc();
                  
                  //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                  x10_double i__66767 = ((rand->nextDouble()) + (40.0));
                  x10_double j__66768 = ((rand->nextDouble()) + (40.0));
                  x10_double k__66769 = ((rand->nextDouble()) + (40.0));
                  
                  //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                  alloc__66771->FMGL(i) = i__66767;
                  alloc__66771->FMGL(j) = j__66768;
                  alloc__66771->FMGL(k) = k__66769;
                  alloc__66771;
              }))
              , 1.0, 1.0);
            
            //#line 299 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(dummyOctant->FMGL(atoms))->__set(
              i__66807, atom__66770);
        }
    }
    
    //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10::lang::Rail< x10_double >* dummyData = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(q))) * (((x10_long)4ll))),
                                                                                        reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(au_edu_anu_mm_LeafOctant__closure__1)))au_edu_anu_mm_LeafOctant__closure__1(rand))));
    
    //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long start = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 307 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    {
        x10_long i__66808;
        for (i__66808 = ((x10_long)0ll); ((i__66808) <= (((x10_long)1000ll)));
             i__66808 = ((i__66808) + (((x10_long)1ll))))
        {
            x10_long i__66809 = i__66808;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::Rail< x10_double >* oct2Data__66803 =
              dummyData;
            x10_double ret__66804;
            
            //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double directEnergy__66802 = 0.0;
            
            //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long i__53435max__66799 = ((::x10aux::nullCheck(dummyOctant->FMGL(atoms))->size()) - (((x10_long)1ll)));
            {
                x10_long i__66800;
                for (i__66800 = ((x10_long)0ll); ((i__66800) <= (i__53435max__66799));
                     i__66800 = ((i__66800) + (((x10_long)1ll))))
                {
                    x10_long i__66801 = i__66800;
                    
                    //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::au::edu::anu::chem::mm::MMAtom* atomI__66775 =
                      ::x10aux::nullCheck(dummyOctant->FMGL(atoms))->__apply(
                        i__66801);
                    
                    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Point3d ci__66776 = ::x10aux::nullCheck(atomI__66775)->FMGL(centre);
                    
                    //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double xi__66777 = ci__66776->FMGL(i);
                    
                    //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double yi__66778 = ci__66776->FMGL(j);
                    
                    //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double zi__66779 = ci__66776->FMGL(k);
                    
                    //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qi__66780 = ::x10aux::nullCheck(atomI__66775)->FMGL(charge);
                    
                    //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fix__66781 = ::x10aux::nullCheck(atomI__66775)->FMGL(force)->FMGL(i);
                    
                    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fiy__66782 = ::x10aux::nullCheck(atomI__66775)->FMGL(force)->FMGL(j);
                    
                    //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fiz__66783 = ::x10aux::nullCheck(atomI__66775)->FMGL(force)->FMGL(k);
                    
                    //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    {
                        x10_long j__66784;
                        for (j__66784 = ((x10_long)0ll); ((j__66784) < ((x10_long)(::x10aux::nullCheck(oct2Data__66803)->FMGL(size))));
                             j__66784 = ((j__66784) + (((x10_long)4ll))))
                        {
                            
                            //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double xj__66785 = ::x10aux::nullCheck(oct2Data__66803)->x10::lang::Rail< x10_double >::__apply(
                                                     j__66784);
                            
                            //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double yj__66786 = ::x10aux::nullCheck(oct2Data__66803)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__66784) + (((x10_long)1ll))));
                            
                            //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double zj__66787 = ::x10aux::nullCheck(oct2Data__66803)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__66784) + (((x10_long)2ll))));
                            
                            //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qj__66788 = ::x10aux::nullCheck(oct2Data__66803)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__66784) + (((x10_long)3ll))));
                            
                            //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dx__66789 = ((xj__66785) - (xi__66777));
                            
                            //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dy__66790 = ((yj__66786) - (yi__66778));
                            
                            //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dz__66791 = ((zj__66787) - (zi__66779));
                            
                            //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double r__66792 = ((((((dx__66789) * (dx__66789))) + (((dy__66790) * (dy__66790))))) + (((dz__66791) * (dz__66791))));
                            
                            //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double invR__66793;
                            
                            //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double invR__66794;
                            {
                                
                                //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                invR__66794 = ((1.0) / (r__66792));
                                
                                //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                invR__66793 = ::x10::lang::MathNatives::sqrt(invR__66794);
                            }
                            
                            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qq__66795 = ((qi__66780) * (qj__66788));
                            
                            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double e__66796 = ((invR__66793) * (qq__66795));
                            
                            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            directEnergy__66802 = ((directEnergy__66802) + (e__66796));
                            
                            //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double forceScaling__66797 =
                              ((e__66796) * (invR__66794));
                            
                            //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fix__66781 = ((fix__66781) + (((forceScaling__66797) * (dx__66789))));
                            
                            //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fiy__66782 = ((fiy__66782) + (((forceScaling__66797) * (dy__66790))));
                            
                            //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fiz__66783 = ((fiz__66783) + (((forceScaling__66797) * (dz__66791))));
                        }
                    }
                    
                    //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(atomI__66775)->FMGL(force) =
                      (__extension__ ({
                        ::x10x::vector::Vector3d alloc__66798 =
                           ::x10x::vector::Vector3d::_alloc();
                        
                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double i__66772 = fix__66781;
                        x10_double j__66773 = fiy__66782;
                        x10_double k__66774 = fiz__66783;
                        
                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        alloc__66798->FMGL(i) = i__66772;
                        alloc__66798->FMGL(j) = j__66773;
                        alloc__66798->FMGL(k) = k__66774;
                        alloc__66798;
                    }))
                    ;
                }
            }
            
            //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ret__66804 = directEnergy__66802;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ret__66804;
        }
    }
    
    //#line 310 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long stop = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 312 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long interactions = ((((((x10_long)1000ll)) * (((x10_long)(q))))) * (((x10_long)(q))));
    
    //#line 313 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long perInt = ((((stop) - (start))) / ::x10aux::zeroCheck(interactions));
    
    //#line 315 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return perInt;
    
}

//#line 318 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
void au::edu::anu::mm::LeafOctant::createUList(x10_int ws) {
    
    //#line 319 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(uList) = (__extension__ ({
        ::au::edu::anu::mm::LeafOctant__UList* alloc__53340 =
           (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList>()) ::au::edu::anu::mm::LeafOctant__UList());
        (alloc__53340)->::au::edu::anu::mm::LeafOctant__UList::_constructor(
          this, this->FMGL(id), ws);
        alloc__53340;
    }))
    ;
}

//#line 322 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::au::edu::anu::mm::LeafOctant__UList* au::edu::anu::mm::LeafOctant::getUList(
  ) {
    return this->FMGL(uList);
    
}

//#line 398 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::x10::lang::String* au::edu::anu::mm::LeafOctant::toString(
  ) {
    
    //#line 399 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::LeafOctant_Strings::sl__68350), this->FMGL(id));
    
}

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::au::edu::anu::mm::LeafOctant* au::edu::anu::mm::LeafOctant::au__edu__anu__mm__LeafOctant____this__au__edu__anu__mm__LeafOctant(
  ) {
    return this;
    
}
void au::edu::anu::mm::LeafOctant::__fieldInitializers_au_edu_anu_mm_LeafOctant(
  ) {
    this->FMGL(atoms) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(sources) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(uList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::LeafOctant__UList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::mm::LeafOctant::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::LeafOctant::_deserializer);

void au::edu::anu::mm::LeafOctant::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::mm::Octant::_serialize_body(buf);
    buf.write(this->FMGL(atoms));
    buf.write(this->FMGL(sources));
    buf.write(this->FMGL(uList));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::LeafOctant::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::LeafOctant* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant>()) ::au::edu::anu::mm::LeafOctant();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::LeafOctant::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Octant::_deserialize_body(buf);
    FMGL(atoms) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>();
    FMGL(sources) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(uList) = buf.read< ::au::edu::anu::mm::LeafOctant__UList*>();
}

::x10aux::RuntimeType au::edu::anu::mm::LeafOctant::rtt;
void au::edu::anu::mm::LeafOctant::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::mm::Octant>()};
    rtt.initStageTwo("au.edu.anu.mm.LeafOctant",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::LeafOctant_Strings::sl__68350("LeafOctant ");

::x10::lang::Fun_0_1<x10_long, x10_double>::itable<au_edu_anu_mm_LeafOctant__closure__1>au_edu_anu_mm_LeafOctant__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_LeafOctant__closure__1::__apply, &au_edu_anu_mm_LeafOctant__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_LeafOctant__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >, &au_edu_anu_mm_LeafOctant__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_LeafOctant__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_LeafOctant__closure__1::_deserialize);

/* END of LeafOctant */
/*************************************************/
/*************************************************/
/* START of LeafOctant$UList$UListIterator */
#include <au/edu/anu/mm/LeafOctant__UList__UListIterator.h>

#include <x10/lang/Iterator.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UInt.h>
#include <au/edu/anu/mm/LeafOctant__UList.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/mm/OctantId.h>
#include <au/edu/anu/mm/Octant.h>
#include <au/edu/anu/mm/LeafOctant.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
::x10::lang::Iterator<x10_uint>::itable< ::au::edu::anu::mm::LeafOctant__UList__UListIterator >  au::edu::anu::mm::LeafOctant__UList__UListIterator::_itable_0(&::x10::lang::X10Class::equals, &au::edu::anu::mm::LeafOctant__UList__UListIterator::hasNext, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::LeafOctant__UList__UListIterator::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::LeafOctant__UList__UListIterator >  au::edu::anu::mm::LeafOctant__UList__UListIterator::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::LeafOctant__UList__UListIterator::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator<x10_uint> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::LeafOctant__UList__UListIterator")};

//#line 327 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 350 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 351 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 352 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 353 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
void au::edu::anu::mm::LeafOctant__UList__UListIterator::_constructor(::au::edu::anu::mm::LeafOctant__UList* out__) {
    
    //#line 327 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(out__) = out__;
    
    //#line 353 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    
    //#line 349 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* this__66812 = this;
    ::x10aux::nullCheck(this__66812)->FMGL(x) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__66812)->FMGL(y) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__66812)->FMGL(z) = ((x10_ubyte)0);
    
    //#line 354 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(x) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minX);
    
    //#line 355 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(y) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minY);
    
    //#line 356 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(z) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minZ);
}
::au::edu::anu::mm::LeafOctant__UList__UListIterator* au::edu::anu::mm::LeafOctant__UList__UListIterator::_make(
  ::au::edu::anu::mm::LeafOctant__UList* out__) {
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList__UListIterator>()) ::au::edu::anu::mm::LeafOctant__UList__UListIterator();
    this_->_constructor(out__);
    return this_;
}



//#line 359 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_boolean au::edu::anu::mm::LeafOctant__UList__UListIterator::hasNext(
  ) {
    
    //#line 360 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if (((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))))
    {
        
        //#line 361 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        if (!((((::x10aux::struct_equals(this->FMGL(x), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(x))) &&
            (::x10aux::struct_equals(this->FMGL(y), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(y)))) &&
            (::x10aux::struct_equals(this->FMGL(z), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(z))))))
        {
            
            //#line 362 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            return true;
            
        } else {
            
            //#line 364 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->moveToNext();
            
            //#line 365 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            if ((((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))) &&
                !((((::x10aux::struct_equals(this->FMGL(x),
                                             ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(x))) &&
                (::x10aux::struct_equals(this->FMGL(y), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(y)))) &&
                (::x10aux::struct_equals(this->FMGL(z), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(z)))))))
            {
                return true;
                
            }
            
        }
        
    }
    
    //#line 368 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return false;
    
}

//#line 371 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
x10_uint au::edu::anu::mm::LeafOctant__UList__UListIterator::next(
  ) {
    
    //#line 372 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    if ((((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))) &&
        !((((::x10aux::struct_equals(this->FMGL(x), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(x))) &&
        (::x10aux::struct_equals(this->FMGL(y), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(y)))) &&
        (::x10aux::struct_equals(this->FMGL(z), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(z)))))))
    {
        
        //#line 373 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        x10_uint res = (__extension__ ({
            
            //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint x__66613 = ((x10_uint) (this->FMGL(x)));
            x10_uint y__66614 = ((x10_uint) (this->FMGL(y)));
            x10_uint z__66615 = ((x10_uint) (this->FMGL(z)));
            x10_uint level__66616 = ((x10_uint) (::x10aux::nullCheck(this->FMGL(out__))->FMGL(level)));
            x10_uint ret__66626;
            
            //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint id__66817 = ((x10_uint)0u);
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint bitmask__66818 = ((x10_uint)1u);
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_int shift__66819 = ((x10_int)0);
            
            //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            {
                x10_long i__66815;
                for (i__66815 = ((x10_long)0ll); ((i__66815) <= (((x10_long)7ll)));
                     i__66815 = ((i__66815) + (((x10_long)1ll))))
                {
                    x10_long i__66816 = i__66815;
                    
                    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__66817 = ((x10_uint) ((id__66817) | (((x10_uint) ((((x10_uint) ((bitmask__66818) & (z__66615)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                        x10_int pre__66813 = shift__66819;
                        shift__66819 = ((shift__66819) + (((x10_int)1)));
                        pre__66813;
                    }))
                    )))))))));
                    
                    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__66817 = ((x10_uint) ((id__66817) | (((x10_uint) ((((x10_uint) ((bitmask__66818) & (y__66614)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                        x10_int pre__66814 = shift__66819;
                        shift__66819 = ((shift__66819) + (((x10_int)1)));
                        pre__66814;
                    }))
                    )))))))));
                    
                    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__66817 = ((x10_uint) ((id__66817) | (((x10_uint) ((((x10_uint) ((bitmask__66818) & (x__66613)))) << (x10_int)(0x1f & (((x10_long)(shift__66819)))))))));
                    
                    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    bitmask__66818 = ((x10_uint) ((bitmask__66818) << (x10_int)(0x1f & (((x10_long)1ll)))));
                }
            }
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id__66817 = ((x10_uint) ((id__66817) | (((x10_uint) ((level__66616) << (x10_int)(0x1f & (((x10_long)24ll))))))));
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            ret__66626 = id__66817;
            ret__66626;
        }))
        ;
        
        //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->moveToNext();
        
        //#line 375 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return res;
        
    } else {
        
        //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus((&::au::edu::anu::mm::LeafOctant__UList__UListIterator_Strings::sl__68401), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)))));
    }
    
}

//#line 381 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
void au::edu::anu::mm::LeafOctant__UList__UListIterator::moveToNext(
  ) {
    
    //#line 382 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    do {
        
        //#line 383 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        if (((this->FMGL(z)) < (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxZ))))
        {
            
            //#line 384 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->FMGL(z) = ((x10_ubyte) ((this->FMGL(z)) + (((x10_ubyte)1))));
        } else 
        //#line 385 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        if (((this->FMGL(y)) < (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxY))))
        {
            
            //#line 386 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->FMGL(z) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minZ);
            
            //#line 387 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->FMGL(y) = ((x10_ubyte) ((this->FMGL(y)) + (((x10_ubyte)1))));
        } else {
            
            //#line 389 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->FMGL(z) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minZ);
            
            //#line 390 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->FMGL(y) = ::x10aux::nullCheck(this->FMGL(out__))->FMGL(minY);
            
            //#line 391 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            this->FMGL(x) = ((x10_ubyte) ((this->FMGL(x)) + (((x10_ubyte)1))));
        }
        
    } while ((((this->FMGL(x)) <= (::x10aux::nullCheck(this->FMGL(out__))->FMGL(maxX))) &&
             ((((::x10aux::struct_equals(this->FMGL(x), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(x))) &&
              (::x10aux::struct_equals(this->FMGL(y), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(y)))) &&
              (::x10aux::struct_equals(this->FMGL(z), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)->FMGL(z)))))));
    
}

//#line 349 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::au::edu::anu::mm::LeafOctant__UList__UListIterator* au::edu::anu::mm::LeafOctant__UList__UListIterator::au__edu__anu__mm__LeafOctant__UList__UListIterator____this__au__edu__anu__mm__LeafOctant__UList__UListIterator(
  ) {
    return this;
    
}
::au::edu::anu::mm::LeafOctant__UList* au::edu::anu::mm::LeafOctant__UList__UListIterator::au__edu__anu__mm__LeafOctant__UList__UListIterator____this__au__edu__anu__mm__LeafOctant__UList(
  ) {
    return this->FMGL(out__);
    
}
::au::edu::anu::mm::LeafOctant* au::edu::anu::mm::LeafOctant__UList__UListIterator::au__edu__anu__mm__LeafOctant__UList__UListIterator____this__au__edu__anu__mm__LeafOctant(
  ) {
    return ::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__);
    
}
void au::edu::anu::mm::LeafOctant__UList__UListIterator::__fieldInitializers_au_edu_anu_mm_LeafOctant_UList_UListIterator(
  ) {
    this->FMGL(x) = ((x10_ubyte)0);
    this->FMGL(y) = ((x10_ubyte)0);
    this->FMGL(z) = ((x10_ubyte)0);
}
const ::x10aux::serialization_id_t au::edu::anu::mm::LeafOctant__UList__UListIterator::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::LeafOctant__UList__UListIterator::_deserializer);

void au::edu::anu::mm::LeafOctant__UList__UListIterator::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(y));
    buf.write(this->FMGL(z));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::LeafOctant__UList__UListIterator::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList__UListIterator>()) ::au::edu::anu::mm::LeafOctant__UList__UListIterator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::LeafOctant__UList__UListIterator::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_ubyte>();
    FMGL(y) = buf.read<x10_ubyte>();
    FMGL(z) = buf.read<x10_ubyte>();
    FMGL(out__) = buf.read< ::au::edu::anu::mm::LeafOctant__UList*>();
}

::x10aux::RuntimeType au::edu::anu::mm::LeafOctant__UList__UListIterator::rtt;
void au::edu::anu::mm::LeafOctant__UList__UListIterator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterator<x10_uint> >()};
    rtt.initStageTwo("au.edu.anu.mm.LeafOctant.UList.UListIterator",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::LeafOctant__UList__UListIterator_Strings::sl__68401("reached end of uList for ");

/* END of LeafOctant$UList$UListIterator */
/*************************************************/
/*************************************************/
/* START of LeafOctant$UList */
#include <au/edu/anu/mm/LeafOctant__UList.h>

#include <x10/lang/Iterable.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UInt.h>
#include <au/edu/anu/mm/LeafOctant.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/mm/LeafOctant__UList__UListIterator.h>
#include <x10/compiler/Synthetic.h>
::x10::lang::Iterable<x10_uint>::itable< ::au::edu::anu::mm::LeafOctant__UList >  au::edu::anu::mm::LeafOctant__UList::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::LeafOctant__UList::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::LeafOctant__UList >  au::edu::anu::mm::LeafOctant__UList::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::LeafOctant__UList::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<x10_uint> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::LeafOctant__UList")};

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 328 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 329 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 330 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 331 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 332 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 333 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 334 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"

//#line 336 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
void au::edu::anu::mm::LeafOctant__UList::_constructor(::au::edu::anu::mm::LeafOctant* out__,
                                                       ::au::edu::anu::mm::OctantId id,
                                                       x10_int ws) {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(out__) = out__;
    
    //#line 336 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    
    //#line 327 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::au::edu::anu::mm::LeafOctant__UList* this__66810 = this;
    
    //#line 337 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_ubyte levelDim = ((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(id->FMGL(level)))))));
    
    //#line 338 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__66599 = ((((x10_int)(id->FMGL(x)))) - (ws));
        ((((x10_int)0)) < (b__66599)) ? (b__66599) : (((x10_int)0));
    }))
    ));
    
    //#line 339 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__66600 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__66601 = ((((x10_int)(id->FMGL(x)))) + (ws));
        ((a__66600) < (b__66601)) ? (a__66600) : (b__66601);
    }))
    ));
    
    //#line 340 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__66603 = ((((x10_int)(id->FMGL(y)))) - (ws));
        ((((x10_int)0)) < (b__66603)) ? (b__66603) : (((x10_int)0));
    }))
    ));
    
    //#line 341 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__66604 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__66605 = ((((x10_int)(id->FMGL(y)))) + (ws));
        ((a__66604) < (b__66605)) ? (a__66604) : (b__66605);
    }))
    ));
    
    //#line 342 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__66607 = ((((x10_int)(id->FMGL(z)))) - (ws));
        ((((x10_int)0)) < (b__66607)) ? (b__66607) : (((x10_int)0));
    }))
    ));
    
    //#line 343 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__66608 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__66609 = ((((x10_int)(id->FMGL(z)))) + (ws));
        ((a__66608) < (b__66609)) ? (a__66608) : (b__66609);
    }))
    ));
    
    //#line 344 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(level) = id->FMGL(level);
}
::au::edu::anu::mm::LeafOctant__UList* au::edu::anu::mm::LeafOctant__UList::_make(
  ::au::edu::anu::mm::LeafOctant* out__, ::au::edu::anu::mm::OctantId id,
  x10_int ws) {
    ::au::edu::anu::mm::LeafOctant__UList* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList>()) ::au::edu::anu::mm::LeafOctant__UList();
    this_->_constructor(out__, id, ws);
    return this_;
}



//#line 347 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::x10::lang::Iterator<x10_uint>* au::edu::anu::mm::LeafOctant__UList::iterator(
  ) {
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* alloc__66811 =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList__UListIterator>()) ::au::edu::anu::mm::LeafOctant__UList__UListIterator());
    (alloc__66811)->::au::edu::anu::mm::LeafOctant__UList__UListIterator::_constructor(
      this);
    return reinterpret_cast< ::x10::lang::Iterator<x10_uint>*>(alloc__66811);
    
}

//#line 327 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
::au::edu::anu::mm::LeafOctant__UList* au::edu::anu::mm::LeafOctant__UList::au__edu__anu__mm__LeafOctant__UList____this__au__edu__anu__mm__LeafOctant__UList(
  ) {
    return this;
    
}
::au::edu::anu::mm::LeafOctant* au::edu::anu::mm::LeafOctant__UList::au__edu__anu__mm__LeafOctant__UList____this__au__edu__anu__mm__LeafOctant(
  ) {
    return this->FMGL(out__);
    
}
void au::edu::anu::mm::LeafOctant__UList::__fieldInitializers_au_edu_anu_mm_LeafOctant_UList(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::LeafOctant__UList::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::LeafOctant__UList::_deserializer);

void au::edu::anu::mm::LeafOctant__UList::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(level));
    buf.write(this->FMGL(minX));
    buf.write(this->FMGL(maxX));
    buf.write(this->FMGL(minY));
    buf.write(this->FMGL(maxY));
    buf.write(this->FMGL(minZ));
    buf.write(this->FMGL(maxZ));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::LeafOctant__UList::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::LeafOctant__UList* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList>()) ::au::edu::anu::mm::LeafOctant__UList();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::LeafOctant__UList::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(level) = buf.read<x10_ubyte>();
    FMGL(minX) = buf.read<x10_ubyte>();
    FMGL(maxX) = buf.read<x10_ubyte>();
    FMGL(minY) = buf.read<x10_ubyte>();
    FMGL(maxY) = buf.read<x10_ubyte>();
    FMGL(minZ) = buf.read<x10_ubyte>();
    FMGL(maxZ) = buf.read<x10_ubyte>();
    FMGL(out__) = buf.read< ::au::edu::anu::mm::LeafOctant*>();
}

::x10aux::RuntimeType au::edu::anu::mm::LeafOctant__UList::rtt;
void au::edu::anu::mm::LeafOctant__UList::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterable<x10_uint> >()};
    rtt.initStageTwo("au.edu.anu.mm.LeafOctant.UList",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of LeafOctant$UList */
/*************************************************/
