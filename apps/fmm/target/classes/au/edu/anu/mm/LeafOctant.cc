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
    ::au::edu::anu::mm::LeafOctant* this__69669 = this;
    ::x10aux::nullCheck(this__69669)->FMGL(atoms) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__69669)->FMGL(sources) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__69669)->FMGL(uList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::LeafOctant__UList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    x10_long i__50613max__69672 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__69673;
        for (i__69673 = ((x10_long)0ll); ((i__69673) <= (i__50613max__69672));
             i__69673 = ((i__69673) + (((x10_long)1ll))))
        {
            x10_long i__69674 = i__69673;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__69670 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                i__69674);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long idx__69671 = ((i__69674) * (((x10_long)4ll)));
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              idx__69671, ::x10aux::nullCheck(atom__69670)->FMGL(centre)->FMGL(i));
            
            //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__69671) + (((x10_long)1ll))), ::x10aux::nullCheck(atom__69670)->FMGL(centre)->FMGL(j));
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__69671) + (((x10_long)2ll))), ::x10aux::nullCheck(atom__69670)->FMGL(centre)->FMGL(k));
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__69671) + (((x10_long)3ll))), ::x10aux::nullCheck(atom__69670)->FMGL(charge));
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
        x10_long i__50631max__69684 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
        {
            x10_long i__69685;
            for (i__69685 = ((x10_long)0ll); ((i__69685) <= (i__50631max__69684));
                 i__69685 = ((i__69685) + (((x10_long)1ll))))
            {
                x10_long i__69686 = i__69685;
                
                //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::au::edu::anu::chem::mm::MMAtom* atom__69678 =
                  ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                    i__69686);
                
                //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::x10x::vector::Vector3d atomLocation__69679 =
                  (__extension__ ({
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Point3d b__69680 = ::x10aux::nullCheck(atom__69678)->FMGL(centre);
                    (__extension__ ({
                        
                        //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Vector3d alloc__69681 =
                           ::x10x::vector::Vector3d::_alloc();
                        
                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double i__69675 = ((centre->FMGL(i)) - (b__69680->FMGL(i)));
                        x10_double j__69676 = ((centre->FMGL(j)) - (b__69680->FMGL(j)));
                        x10_double k__69677 = ((centre->FMGL(k)) - (b__69680->FMGL(k)));
                        
                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        alloc__69681->FMGL(i) = i__69675;
                        alloc__69681->FMGL(j) = j__69676;
                        alloc__69681->FMGL(k) = k__69677;
                        alloc__69681;
                    }))
                    ;
                }))
                ;
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::x10aux::nullCheck(this->FMGL(multipoleExp))->addOlm(
                  ::x10aux::nullCheck(atom__69678)->FMGL(charge),
                  atomLocation__69679, plm);
            }
        }
        {
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::CheckedThrowable* throwable__69861 =
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
            catch (::x10::lang::CheckedThrowable* __exc92) {
                {
                    ::x10::lang::CheckedThrowable* formal__69862 =
                      __exc92;
                    {
                        throwable__69861 = formal__69862;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__69861,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__69861))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__69861));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__69861,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__69861)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__69861));
                }
                
            }
            
        }
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->sendMultipole();
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__69687 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        x10_long first__69682 = ::x10aux::nullCheck(this->FMGL(atoms))->size();
        ::au::edu::anu::mm::MultipoleExpansion* second__69683 =
          this->FMGL(multipoleExp);
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__69687->FMGL(first) = first__69682;
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__69687->FMGL(second) = second__69683;
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return alloc__69687;
        
    } else {
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__69689 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        ::au::edu::anu::mm::MultipoleExpansion* second__69688 =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__69689->FMGL(first) = ((x10_long)0ll);
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__69689->FMGL(second) = (reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(X10_NULL)));
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return alloc__69689;
        
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
    x10_long i__50649max__69698 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__69699;
        for (i__69699 = ((x10_long)0ll); ((i__69699) <= (i__50649max__69698));
             i__69699 = ((i__69699) + (((x10_long)1ll))))
        {
            x10_long atomIndex__69700 = i__69699;
            
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__69693 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                atomIndex__69700);
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(atom__69693)->FMGL(force) =
              ::x10x::vector::Vector3d::FMGL(NULL__get)();
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10x::vector::Vector3d locationWithinBox__69694 =
              (__extension__ ({
                ::x10x::vector::Point3d this__69695 = ::x10aux::nullCheck(atom__69693)->FMGL(centre);
                
                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                ::x10x::vector::Point3d b__69696 = boxCentre;
                (__extension__ ({
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Vector3d alloc__69697 =
                       ::x10x::vector::Vector3d::_alloc();
                    
                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    x10_double i__69690 = ((this__69695->FMGL(i)) - (b__69696->FMGL(i)));
                    x10_double j__69691 = ((this__69695->FMGL(j)) - (b__69696->FMGL(j)));
                    x10_double k__69692 = ((this__69695->FMGL(k)) - (b__69696->FMGL(k)));
                    
                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    alloc__69697->FMGL(i) = i__69690;
                    alloc__69697->FMGL(j) = j__69691;
                    alloc__69697->FMGL(k) = k__69692;
                    alloc__69697;
                }))
                ;
            }))
            ;
            
            //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            potential = ((potential) + (::x10aux::nullCheck(this->FMGL(localExp))->calculatePotentialAndForces(
                                          atom__69693, locationWithinBox__69694,
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
        ::au::edu::anu::mm::LeafOctant__UList__UListIterator* mortonId__50667;
        for (mortonId__50667 = reinterpret_cast< ::au::edu::anu::mm::LeafOctant__UList__UListIterator*>(::x10aux::nullCheck(this->FMGL(uList))->iterator());
             mortonId__50667->hasNext(); ) {
            x10_uint mortonId = mortonId__50667->next();
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::Rail< x10_double >* oct2Data = ::x10aux::nullCheck(myLET)->getAtomDataForOctant(
                                                          mortonId);
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            if ((!::x10aux::struct_equals(oct2Data, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                directEnergy = ((directEnergy) + ((__extension__ ({
                    ::au::edu::anu::mm::LeafOctant* this__67217 =
                      this;
                    
                    //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10::lang::Rail< x10_double >* oct2Data__67187 =
                      oct2Data;
                    x10_double ret__67218;
                    
                    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double directEnergy__69731 = 0.0;
                    
                    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_long i__50705max__69728 = ((::x10aux::nullCheck(::x10aux::nullCheck(this__67217)->FMGL(atoms))->size()) - (((x10_long)1ll)));
                    {
                        x10_long i__69729;
                        for (i__69729 = ((x10_long)0ll); ((i__69729) <= (i__50705max__69728));
                             i__69729 = ((i__69729) + (((x10_long)1ll))))
                        {
                            x10_long i__69730 = i__69729;
                            
                            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::au::edu::anu::chem::mm::MMAtom* atomI__69704 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(this__67217)->FMGL(atoms))->__apply(
                                i__69730);
                            
                            //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::x10x::vector::Point3d ci__69705 =
                              ::x10aux::nullCheck(atomI__69704)->FMGL(centre);
                            
                            //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double xi__69706 = ci__69705->FMGL(i);
                            
                            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double yi__69707 = ci__69705->FMGL(j);
                            
                            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double zi__69708 = ci__69705->FMGL(k);
                            
                            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qi__69709 = ::x10aux::nullCheck(atomI__69704)->FMGL(charge);
                            
                            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fix__69710 = ::x10aux::nullCheck(atomI__69704)->FMGL(force)->FMGL(i);
                            
                            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fiy__69711 = ::x10aux::nullCheck(atomI__69704)->FMGL(force)->FMGL(j);
                            
                            //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fiz__69712 = ::x10aux::nullCheck(atomI__69704)->FMGL(force)->FMGL(k);
                            
                            //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            {
                                x10_long j__69713;
                                for (j__69713 = ((x10_long)0ll);
                                     ((j__69713) < ((x10_long)(::x10aux::nullCheck(oct2Data__67187)->FMGL(size))));
                                     j__69713 = ((j__69713) + (((x10_long)4ll))))
                                {
                                    
                                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double xj__69714 =
                                      ::x10aux::nullCheck(oct2Data__67187)->x10::lang::Rail< x10_double >::__apply(
                                        j__69713);
                                    
                                    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double yj__69715 =
                                      ::x10aux::nullCheck(oct2Data__67187)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__69713) + (((x10_long)1ll))));
                                    
                                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double zj__69716 =
                                      ::x10aux::nullCheck(oct2Data__67187)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__69713) + (((x10_long)2ll))));
                                    
                                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double qj__69717 =
                                      ::x10aux::nullCheck(oct2Data__67187)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__69713) + (((x10_long)3ll))));
                                    
                                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dx__69718 =
                                      ((xj__69714) - (xi__69706));
                                    
                                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dy__69719 =
                                      ((yj__69715) - (yi__69707));
                                    
                                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dz__69720 =
                                      ((zj__69716) - (zi__69708));
                                    
                                    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double r__69721 =
                                      ((((((dx__69718) * (dx__69718))) + (((dy__69719) * (dy__69719))))) + (((dz__69720) * (dz__69720))));
                                    
                                    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double invR__69722;
                                    
                                    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double invR__69723;
                                    {
                                        
                                        //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                        invR__69723 = ((1.0) / (r__69721));
                                        
                                        //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                        invR__69722 = ::x10::lang::MathNatives::sqrt(invR__69723);
                                    }
                                    
                                    //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double qq__69724 =
                                      ((qi__69709) * (qj__69717));
                                    
                                    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double e__69725 =
                                      ((invR__69722) * (qq__69724));
                                    
                                    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    directEnergy__69731 =
                                      ((directEnergy__69731) + (e__69725));
                                    
                                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double forceScaling__69726 =
                                      ((e__69725) * (invR__69723));
                                    
                                    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fix__69710 = ((fix__69710) + (((forceScaling__69726) * (dx__69718))));
                                    
                                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fiy__69711 = ((fiy__69711) + (((forceScaling__69726) * (dy__69719))));
                                    
                                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fiz__69712 = ((fiz__69712) + (((forceScaling__69726) * (dz__69720))));
                                }
                            }
                            
                            //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::x10aux::nullCheck(atomI__69704)->FMGL(force) =
                              (__extension__ ({
                                ::x10x::vector::Vector3d alloc__69727 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__69701 = fix__69710;
                                x10_double j__69702 = fiy__69711;
                                x10_double k__69703 = fiz__69712;
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__69727->FMGL(i) = i__69701;
                                alloc__69727->FMGL(j) = j__69702;
                                alloc__69727->FMGL(k) = k__69703;
                                alloc__69727;
                            }))
                            ;
                        }
                    }
                    
                    //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ret__67218 = directEnergy__69731;
                    ret__67218;
                }))
                ));
            }
            
        }
    }
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__50687max__69771 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__69772;
        for (i__69772 = ((x10_long)0ll); ((i__69772) <= (i__50687max__69771));
             i__69772 = ((i__69772) + (((x10_long)1ll))))
        {
            x10_long atomIndex__69773 = i__69772;
            
            //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__69770 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                atomIndex__69773);
            
            //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long i__50669max__69767 = ((atomIndex__69773) - (((x10_long)1ll)));
            {
                x10_long i__69768;
                for (i__69768 = ((x10_long)0ll); ((i__69768) <= (i__50669max__69767));
                     i__69768 = ((i__69768) + (((x10_long)1ll))))
                {
                    x10_long sameBoxAtomIndex__69769 = i__69768;
                    
                    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::au::edu::anu::chem::mm::MMAtom* sameBoxAtom__69744 =
                      ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                        sameBoxAtomIndex__69769);
                    
                    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Vector3d rVec__69745 =
                      (__extension__ ({
                        ::x10x::vector::Point3d this__69746 =
                          ::x10aux::nullCheck(sameBoxAtom__69744)->FMGL(centre);
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__69747 =
                          ::x10aux::nullCheck(atom__69770)->FMGL(centre);
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__69748 =
                              that__69747;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__69749 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__69732 = ((this__69746->FMGL(i)) - (b__69748->FMGL(i)));
                                x10_double j__69733 = ((this__69746->FMGL(j)) - (b__69748->FMGL(j)));
                                x10_double k__69734 = ((this__69746->FMGL(k)) - (b__69748->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__69749->FMGL(i) = i__69732;
                                alloc__69749->FMGL(j) = j__69733;
                                alloc__69749->FMGL(k) = k__69734;
                                alloc__69749;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__69750;
                    
                    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__69751;
                    {
                        
                        //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__69751 = ((1.0) / (((((((rVec__69745->FMGL(i)) * (rVec__69745->FMGL(i)))) + (((rVec__69745->FMGL(j)) * (rVec__69745->FMGL(j)))))) + (((rVec__69745->FMGL(k)) * (rVec__69745->FMGL(k)))))));
                        
                        //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__69750 = ::x10::lang::MathNatives::sqrt(invR__69751);
                    }
                    
                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double e__69752 = ((((::x10aux::nullCheck(atom__69770)->FMGL(charge)) * (::x10aux::nullCheck(sameBoxAtom__69744)->FMGL(charge)))) * (invR__69750));
                    
                    //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    directEnergy = ((directEnergy) + (((2.0) * (e__69752))));
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Vector3d pairForce__69753 =
                      (__extension__ ({
                        
                        //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double x__69754 = ((e__69752) * (invR__69751));
                        ::x10x::vector::Vector3d y__69755 =
                          rVec__69745;
                        (__extension__ ({
                            
                            //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double that__69756 = x__69754;
                            (__extension__ ({
                                
                                //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double c__69757 = that__69756;
                                (__extension__ ({
                                    
                                    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d alloc__69758 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__69735 =
                                      ((y__69755->FMGL(i)) * (c__69757));
                                    x10_double j__69736 =
                                      ((y__69755->FMGL(j)) * (c__69757));
                                    x10_double k__69737 =
                                      ((y__69755->FMGL(k)) * (c__69757));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__69758->FMGL(i) =
                                      i__69735;
                                    alloc__69758->FMGL(j) =
                                      j__69736;
                                    alloc__69758->FMGL(k) =
                                      k__69737;
                                    alloc__69758;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(atom__69770)->FMGL(force) =
                      (__extension__ ({
                        ::x10x::vector::Vector3d this__69759 =
                          ::x10aux::nullCheck(atom__69770)->FMGL(force);
                        
                        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d that__69760 =
                          pairForce__69753;
                        (__extension__ ({
                            
                            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d b__69761 =
                              that__69760;
                            (__extension__ ({
                                
                                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__69762 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__69738 = ((this__69759->FMGL(i)) + (b__69761->FMGL(i)));
                                x10_double j__69739 = ((this__69759->FMGL(j)) + (b__69761->FMGL(j)));
                                x10_double k__69740 = ((this__69759->FMGL(k)) + (b__69761->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__69762->FMGL(i) = i__69738;
                                alloc__69762->FMGL(j) = j__69739;
                                alloc__69762->FMGL(k) = k__69740;
                                alloc__69762;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(sameBoxAtom__69744)->FMGL(force) =
                      (__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d x__69763 =
                          ::x10aux::nullCheck(sameBoxAtom__69744)->FMGL(force);
                        ::x10x::vector::Vector3d y__69764 =
                          pairForce__69753;
                        (__extension__ ({
                            
                            //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d b__69765 =
                              y__69764;
                            (__extension__ ({
                                
                                //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__69766 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__69741 = ((x__69763->FMGL(i)) - (b__69765->FMGL(i)));
                                x10_double j__69742 = ((x__69763->FMGL(j)) - (b__69765->FMGL(j)));
                                x10_double k__69743 = ((x__69763->FMGL(k)) - (b__69765->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__69766->FMGL(i) = i__69741;
                                alloc__69766->FMGL(j) = j__69742;
                                alloc__69766->FMGL(k) = k__69743;
                                alloc__69766;
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
    x10_long i__50705max__69801 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__69802;
        for (i__69802 = ((x10_long)0ll); ((i__69802) <= (i__50705max__69801));
             i__69802 = ((i__69802) + (((x10_long)1ll))))
        {
            x10_long i__69803 = i__69802;
            
            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atomI__69777 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                i__69803);
            
            //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10x::vector::Point3d ci__69778 = ::x10aux::nullCheck(atomI__69777)->FMGL(centre);
            
            //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double xi__69779 = ci__69778->FMGL(i);
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double yi__69780 = ci__69778->FMGL(j);
            
            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double zi__69781 = ci__69778->FMGL(k);
            
            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double qi__69782 = ::x10aux::nullCheck(atomI__69777)->FMGL(charge);
            
            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fix__69783 = ::x10aux::nullCheck(atomI__69777)->FMGL(force)->FMGL(i);
            
            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fiy__69784 = ::x10aux::nullCheck(atomI__69777)->FMGL(force)->FMGL(j);
            
            //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fiz__69785 = ::x10aux::nullCheck(atomI__69777)->FMGL(force)->FMGL(k);
            
            //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            {
                x10_long j__69786;
                for (j__69786 = ((x10_long)0ll); ((j__69786) < ((x10_long)(::x10aux::nullCheck(oct2Data)->FMGL(size))));
                     j__69786 = ((j__69786) + (((x10_long)4ll))))
                {
                    
                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double xj__69787 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             j__69786);
                    
                    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double yj__69788 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__69786) + (((x10_long)1ll))));
                    
                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double zj__69789 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__69786) + (((x10_long)2ll))));
                    
                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qj__69790 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__69786) + (((x10_long)3ll))));
                    
                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dx__69791 = ((xj__69787) - (xi__69779));
                    
                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dy__69792 = ((yj__69788) - (yi__69780));
                    
                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dz__69793 = ((zj__69789) - (zi__69781));
                    
                    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double r__69794 = ((((((dx__69791) * (dx__69791))) + (((dy__69792) * (dy__69792))))) + (((dz__69793) * (dz__69793))));
                    
                    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__69795;
                    
                    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__69796;
                    {
                        
                        //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__69796 = ((1.0) / (r__69794));
                        
                        //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__69795 = ::x10::lang::MathNatives::sqrt(invR__69796);
                    }
                    
                    //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qq__69797 = ((qi__69782) * (qj__69790));
                    
                    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double e__69798 = ((invR__69795) * (qq__69797));
                    
                    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    directEnergy = ((directEnergy) + (e__69798));
                    
                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double forceScaling__69799 = ((e__69798) * (invR__69796));
                    
                    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fix__69783 = ((fix__69783) + (((forceScaling__69799) * (dx__69791))));
                    
                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fiy__69784 = ((fiy__69784) + (((forceScaling__69799) * (dy__69792))));
                    
                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fiz__69785 = ((fiz__69785) + (((forceScaling__69799) * (dz__69793))));
                }
            }
            
            //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(atomI__69777)->FMGL(force) =
              (__extension__ ({
                ::x10x::vector::Vector3d alloc__69800 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__69774 = fix__69783;
                x10_double j__69775 = fiy__69784;
                x10_double k__69776 = fiz__69785;
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__69800->FMGL(i) = i__69774;
                alloc__69800->FMGL(j) = j__69775;
                alloc__69800->FMGL(k) = k__69776;
                alloc__69800;
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
    ::x10x::vector::Vector3d alloc__69807 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    x10_double i__69804 = translationX;
    x10_double j__69805 = translationY;
    x10_double k__69806 = translationZ;
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    alloc__69807->FMGL(i) = i__69804;
    alloc__69807->FMGL(j) = j__69805;
    alloc__69807->FMGL(k) = k__69806;
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return alloc__69807;
    
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
          ::au::edu::anu::mm::OctantId alloc__50607 =  ::au::edu::anu::mm::OctantId::_alloc();
          
          //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
          alloc__50607->FMGL(x) = ((x10_ubyte)0);
          alloc__50607->FMGL(y) = ((x10_ubyte)0);
          alloc__50607->FMGL(z) = ((x10_ubyte)0);
          alloc__50607->FMGL(level) = ((x10_ubyte)0);
          alloc__50607;
      }))
      , ((x10_int)1), ((x10_int)1), ((x10_ubyte)0));
    
    //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    dummyOctant->FMGL(atoms) = (__extension__ ({
        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__50608 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
        (alloc__50608)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
          ((x10_long)(q)));
        alloc__50608;
    }))
    ;
    
    //#line 295 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10::util::Random* rand =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    
    //#line 32 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    (rand)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__50723max__69846 = ((((x10_long)(q))) - (((x10_long)1ll)));
    {
        x10_long i__69847;
        for (i__69847 = ((x10_long)0ll); ((i__69847) <= (i__50723max__69846));
             i__69847 = ((i__69847) + (((x10_long)1ll))))
        {
            x10_long i__69848 = i__69847;
            
            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__69811 =
               (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
            (atom__69811)->::au::edu::anu::chem::mm::MMAtom::_constructor(
              (__extension__ ({
                  ::x10x::vector::Point3d alloc__69812 = 
                  ::x10x::vector::Point3d::_alloc();
                  
                  //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                  x10_double i__69808 = ((rand->nextDouble()) + (40.0));
                  x10_double j__69809 = ((rand->nextDouble()) + (40.0));
                  x10_double k__69810 = ((rand->nextDouble()) + (40.0));
                  
                  //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                  alloc__69812->FMGL(i) = i__69808;
                  alloc__69812->FMGL(j) = j__69809;
                  alloc__69812->FMGL(k) = k__69810;
                  alloc__69812;
              }))
              , 1.0, 1.0);
            
            //#line 299 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(dummyOctant->FMGL(atoms))->__set(
              i__69848, atom__69811);
        }
    }
    
    //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10::lang::Rail< x10_double >* dummyData = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(q))) * (((x10_long)4ll))),
                                                                                        reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(au_edu_anu_mm_LeafOctant__closure__1)))au_edu_anu_mm_LeafOctant__closure__1(rand))));
    
    //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long start = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 307 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    {
        x10_long i__69849;
        for (i__69849 = ((x10_long)0ll); ((i__69849) <= (((x10_long)1000ll)));
             i__69849 = ((i__69849) + (((x10_long)1ll))))
        {
            x10_long i__69850 = i__69849;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::Rail< x10_double >* oct2Data__69844 =
              dummyData;
            x10_double ret__69845;
            
            //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double directEnergy__69843 = 0.0;
            
            //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long i__50705max__69840 = ((::x10aux::nullCheck(dummyOctant->FMGL(atoms))->size()) - (((x10_long)1ll)));
            {
                x10_long i__69841;
                for (i__69841 = ((x10_long)0ll); ((i__69841) <= (i__50705max__69840));
                     i__69841 = ((i__69841) + (((x10_long)1ll))))
                {
                    x10_long i__69842 = i__69841;
                    
                    //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::au::edu::anu::chem::mm::MMAtom* atomI__69816 =
                      ::x10aux::nullCheck(dummyOctant->FMGL(atoms))->__apply(
                        i__69842);
                    
                    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Point3d ci__69817 = ::x10aux::nullCheck(atomI__69816)->FMGL(centre);
                    
                    //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double xi__69818 = ci__69817->FMGL(i);
                    
                    //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double yi__69819 = ci__69817->FMGL(j);
                    
                    //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double zi__69820 = ci__69817->FMGL(k);
                    
                    //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qi__69821 = ::x10aux::nullCheck(atomI__69816)->FMGL(charge);
                    
                    //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fix__69822 = ::x10aux::nullCheck(atomI__69816)->FMGL(force)->FMGL(i);
                    
                    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fiy__69823 = ::x10aux::nullCheck(atomI__69816)->FMGL(force)->FMGL(j);
                    
                    //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fiz__69824 = ::x10aux::nullCheck(atomI__69816)->FMGL(force)->FMGL(k);
                    
                    //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    {
                        x10_long j__69825;
                        for (j__69825 = ((x10_long)0ll); ((j__69825) < ((x10_long)(::x10aux::nullCheck(oct2Data__69844)->FMGL(size))));
                             j__69825 = ((j__69825) + (((x10_long)4ll))))
                        {
                            
                            //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double xj__69826 = ::x10aux::nullCheck(oct2Data__69844)->x10::lang::Rail< x10_double >::__apply(
                                                     j__69825);
                            
                            //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double yj__69827 = ::x10aux::nullCheck(oct2Data__69844)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__69825) + (((x10_long)1ll))));
                            
                            //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double zj__69828 = ::x10aux::nullCheck(oct2Data__69844)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__69825) + (((x10_long)2ll))));
                            
                            //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qj__69829 = ::x10aux::nullCheck(oct2Data__69844)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__69825) + (((x10_long)3ll))));
                            
                            //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dx__69830 = ((xj__69826) - (xi__69818));
                            
                            //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dy__69831 = ((yj__69827) - (yi__69819));
                            
                            //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dz__69832 = ((zj__69828) - (zi__69820));
                            
                            //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double r__69833 = ((((((dx__69830) * (dx__69830))) + (((dy__69831) * (dy__69831))))) + (((dz__69832) * (dz__69832))));
                            
                            //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double invR__69834;
                            
                            //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double invR__69835;
                            {
                                
                                //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                invR__69835 = ((1.0) / (r__69833));
                                
                                //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                invR__69834 = ::x10::lang::MathNatives::sqrt(invR__69835);
                            }
                            
                            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qq__69836 = ((qi__69821) * (qj__69829));
                            
                            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double e__69837 = ((invR__69834) * (qq__69836));
                            
                            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            directEnergy__69843 = ((directEnergy__69843) + (e__69837));
                            
                            //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double forceScaling__69838 =
                              ((e__69837) * (invR__69835));
                            
                            //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fix__69822 = ((fix__69822) + (((forceScaling__69838) * (dx__69830))));
                            
                            //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fiy__69823 = ((fiy__69823) + (((forceScaling__69838) * (dy__69831))));
                            
                            //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fiz__69824 = ((fiz__69824) + (((forceScaling__69838) * (dz__69832))));
                        }
                    }
                    
                    //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(atomI__69816)->FMGL(force) =
                      (__extension__ ({
                        ::x10x::vector::Vector3d alloc__69839 =
                           ::x10x::vector::Vector3d::_alloc();
                        
                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double i__69813 = fix__69822;
                        x10_double j__69814 = fiy__69823;
                        x10_double k__69815 = fiz__69824;
                        
                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        alloc__69839->FMGL(i) = i__69813;
                        alloc__69839->FMGL(j) = j__69814;
                        alloc__69839->FMGL(k) = k__69815;
                        alloc__69839;
                    }))
                    ;
                }
            }
            
            //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ret__69845 = directEnergy__69843;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ret__69845;
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
        ::au::edu::anu::mm::LeafOctant__UList* alloc__50610 =
           (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList>()) ::au::edu::anu::mm::LeafOctant__UList());
        (alloc__50610)->::au::edu::anu::mm::LeafOctant__UList::_constructor(
          this, this->FMGL(id), ws);
        alloc__50610;
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
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::LeafOctant_Strings::sl__73022), this->FMGL(id));
    
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

::x10::lang::String au::edu::anu::mm::LeafOctant_Strings::sl__73022("LeafOctant ");

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
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* this__69853 = this;
    ::x10aux::nullCheck(this__69853)->FMGL(x) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__69853)->FMGL(y) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__69853)->FMGL(z) = ((x10_ubyte)0);
    
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
            x10_uint x__69654 = ((x10_uint) (this->FMGL(x)));
            x10_uint y__69655 = ((x10_uint) (this->FMGL(y)));
            x10_uint z__69656 = ((x10_uint) (this->FMGL(z)));
            x10_uint level__69657 = ((x10_uint) (::x10aux::nullCheck(this->FMGL(out__))->FMGL(level)));
            x10_uint ret__69667;
            
            //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint id__69858 = ((x10_uint)0u);
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint bitmask__69859 = ((x10_uint)1u);
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_int shift__69860 = ((x10_int)0);
            
            //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            {
                x10_long i__69856;
                for (i__69856 = ((x10_long)0ll); ((i__69856) <= (((x10_long)7ll)));
                     i__69856 = ((i__69856) + (((x10_long)1ll))))
                {
                    x10_long i__69857 = i__69856;
                    
                    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__69858 = ((x10_uint) ((id__69858) | (((x10_uint) ((((x10_uint) ((bitmask__69859) & (z__69656)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                        x10_int pre__69854 = shift__69860;
                        shift__69860 = ((shift__69860) + (((x10_int)1)));
                        pre__69854;
                    }))
                    )))))))));
                    
                    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__69858 = ((x10_uint) ((id__69858) | (((x10_uint) ((((x10_uint) ((bitmask__69859) & (y__69655)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                        x10_int pre__69855 = shift__69860;
                        shift__69860 = ((shift__69860) + (((x10_int)1)));
                        pre__69855;
                    }))
                    )))))))));
                    
                    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__69858 = ((x10_uint) ((id__69858) | (((x10_uint) ((((x10_uint) ((bitmask__69859) & (x__69654)))) << (x10_int)(0x1f & (((x10_long)(shift__69860)))))))));
                    
                    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    bitmask__69859 = ((x10_uint) ((bitmask__69859) << (x10_int)(0x1f & (((x10_long)1ll)))));
                }
            }
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id__69858 = ((x10_uint) ((id__69858) | (((x10_uint) ((level__69657) << (x10_int)(0x1f & (((x10_long)24ll))))))));
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            ret__69667 = id__69858;
            ret__69667;
        }))
        ;
        
        //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->moveToNext();
        
        //#line 375 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return res;
        
    } else {
        
        //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus((&::au::edu::anu::mm::LeafOctant__UList__UListIterator_Strings::sl__73073), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)))));
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

::x10::lang::String au::edu::anu::mm::LeafOctant__UList__UListIterator_Strings::sl__73073("reached end of uList for ");

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
    ::au::edu::anu::mm::LeafOctant__UList* this__69851 = this;
    
    //#line 337 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_ubyte levelDim = ((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(id->FMGL(level)))))));
    
    //#line 338 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__69640 = ((((x10_int)(id->FMGL(x)))) - (ws));
        ((((x10_int)0)) < (b__69640)) ? (b__69640) : (((x10_int)0));
    }))
    ));
    
    //#line 339 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__69641 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__69642 = ((((x10_int)(id->FMGL(x)))) + (ws));
        ((a__69641) < (b__69642)) ? (a__69641) : (b__69642);
    }))
    ));
    
    //#line 340 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__69644 = ((((x10_int)(id->FMGL(y)))) - (ws));
        ((((x10_int)0)) < (b__69644)) ? (b__69644) : (((x10_int)0));
    }))
    ));
    
    //#line 341 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__69645 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__69646 = ((((x10_int)(id->FMGL(y)))) + (ws));
        ((a__69645) < (b__69646)) ? (a__69645) : (b__69646);
    }))
    ));
    
    //#line 342 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__69648 = ((((x10_int)(id->FMGL(z)))) - (ws));
        ((((x10_int)0)) < (b__69648)) ? (b__69648) : (((x10_int)0));
    }))
    ));
    
    //#line 343 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__69649 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__69650 = ((((x10_int)(id->FMGL(z)))) + (ws));
        ((a__69649) < (b__69650)) ? (a__69649) : (b__69650);
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
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* alloc__69852 =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList__UListIterator>()) ::au::edu::anu::mm::LeafOctant__UList__UListIterator());
    (alloc__69852)->::au::edu::anu::mm::LeafOctant__UList__UListIterator::_constructor(
      this);
    return reinterpret_cast< ::x10::lang::Iterator<x10_uint>*>(alloc__69852);
    
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
