/*************************************************/
/* START of GhostOctant */
#include <au/edu/anu/mm/GhostOctant.h>

#include <au/edu/anu/mm/Octant.h>
#include <x10/lang/Comparable.h>
#include <x10/lang/Long.h>
#include <x10/lang/GlobalRef.h>
#include <au/edu/anu/mm/OctantId.h>
#include <x10/lang/Zero.h>
#include <x10/lang/Int.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <x10/lang/UInt.h>
#include <au/edu/anu/mm/GhostOctant__GhostUpward.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#include <au/edu/anu/mm/FmmLocalData.h>
#include <au/edu/anu/mm/FastMultipoleMethod.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <au/edu/anu/mm/LocalExpansion.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_GHOSTOCTANT__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_GHOSTOCTANT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_mm_GhostOctant__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*>::itable<au_edu_anu_mm_GhostOctant__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::mm::GhostOctant__GhostUpward* __apply(){
        try {
            return ::au::edu::anu::mm::GhostOctant::upwardRemote(mortonId);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc198) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc198;
                {
                    ::au::edu::anu::mm::GhostOctant__GhostUpward* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::au::edu::anu::mm::GhostOctant__GhostUpward* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    x10_uint mortonId;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->mortonId);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_GhostOctant__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_GhostOctant__closure__1>();
        buf.record_reference(storage);
        x10_uint that_mortonId = buf.read<x10_uint>();
        au_edu_anu_mm_GhostOctant__closure__1* this_ = new (storage) au_edu_anu_mm_GhostOctant__closure__1(that_mortonId);
        return this_;
    }
    
    au_edu_anu_mm_GhostOctant__closure__1(x10_uint mortonId) : mortonId(mortonId) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10:64";
    }

};

#endif // AU_EDU_ANU_MM_GHOSTOCTANT__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_MM_GHOSTOCTANT__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_MM_GHOSTOCTANT__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_mm_GhostOctant__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_mm_GhostOctant__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(){
        try {
            return ::x10aux::nullCheck((target)->__apply())->downward(parentLocalExpansion);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc202) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc202;
                {
                    x10_double __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_double>(::x10::lang::Runtime::wrapAtChecked< x10_double >(
                                                                                                  __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target;
    ::au::edu::anu::mm::LocalExpansion* parentLocalExpansion;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->target);
        buf.write(this->parentLocalExpansion);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_GhostOctant__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_GhostOctant__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > that_target = buf.read< ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > >();
        ::au::edu::anu::mm::LocalExpansion* that_parentLocalExpansion = buf.read< ::au::edu::anu::mm::LocalExpansion*>();
        au_edu_anu_mm_GhostOctant__closure__2* this_ = new (storage) au_edu_anu_mm_GhostOctant__closure__2(that_target, that_parentLocalExpansion);
        return this_;
    }
    
    au_edu_anu_mm_GhostOctant__closure__2(::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target, ::au::edu::anu::mm::LocalExpansion* parentLocalExpansion) : target(target), parentLocalExpansion(parentLocalExpansion) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10:91";
    }

};

#endif // AU_EDU_ANU_MM_GHOSTOCTANT__CLOSURE__2_CLOSURE
::x10::lang::Comparable< ::au::edu::anu::mm::Octant* >::itable< ::au::edu::anu::mm::GhostOctant >  au::edu::anu::mm::GhostOctant::_itable_0(&au::edu::anu::mm::GhostOctant::compareTo, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::GhostOctant::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::au::edu::anu::mm::GhostOctant >  au::edu::anu::mm::GhostOctant::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &au::edu::anu::mm::GhostOctant::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry au::edu::anu::mm::GhostOctant::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* > >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::mm::GhostOctant")};

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
/** The host place of the target octant for which this GhostOctant is a proxy. */

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
/** The target octant. */

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
/** The number of atoms in all boxes below this box. */

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
void au::edu::anu::mm::GhostOctant::_constructor(::au::edu::anu::mm::OctantId id,
                                                 x10_long placeId) {
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    (this)->::au::edu::anu::mm::Octant::_constructor(id);
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    ::au::edu::anu::mm::GhostOctant* this__70337 = this;
    ::x10aux::nullCheck(this__70337)->FMGL(target) = ::x10aux::zeroValue< ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > >();
    ::x10aux::nullCheck(this__70337)->FMGL(numAtoms) = ((x10_long)0ll);
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    this->FMGL(placeId) = placeId;
}
::au::edu::anu::mm::GhostOctant* au::edu::anu::mm::GhostOctant::_make(
  ::au::edu::anu::mm::OctantId id, x10_long placeId) {
    ::au::edu::anu::mm::GhostOctant* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::GhostOctant>()) ::au::edu::anu::mm::GhostOctant();
    this_->_constructor(id, placeId);
    return this_;
}



//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
x10_int au::edu::anu::mm::GhostOctant::compareTo(::au::edu::anu::mm::Octant* b) {
    return this->FMGL(id)->au::edu::anu::mm::OctantId::compareTo(
             ::x10aux::nullCheck(b)->FMGL(id));
    
}

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
x10_int au::edu::anu::mm::GhostOctant::countOctants() {
    return ((x10_int)0);
    
}

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
x10_int au::edu::anu::mm::GhostOctant::ghostOctants() {
    return ((x10_int)1);
    
}

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
x10_long au::edu::anu::mm::GhostOctant::numAtoms() {
    return this->FMGL(numAtoms);
    
}

//#line 62 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>
  au::edu::anu::mm::GhostOctant::upward() {
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    x10_uint mortonId = this->FMGL(id)->au::edu::anu::mm::OctantId::getMortonId();
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    ::au::edu::anu::mm::GhostOctant__GhostUpward* result = ::x10::lang::Runtime::evalAt< ::au::edu::anu::mm::GhostOctant__GhostUpward* >(
                                                             (__extension__ ({
                                                                 ::x10::lang::Place alloc__51745 =
                                                                   
                                                                 ::x10::lang::Place::_alloc();
                                                                 (alloc__51745)->::x10::lang::Place::_constructor(
                                                                   this->FMGL(placeId));
                                                                 alloc__51745;
                                                             }))
                                                             ,
                                                             reinterpret_cast< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*> >(sizeof(au_edu_anu_mm_GhostOctant__closure__1)))au_edu_anu_mm_GhostOctant__closure__1(mortonId))),
                                                             ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    if ((!::x10aux::struct_equals(result, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        this->FMGL(numAtoms) = ::x10aux::nullCheck(result)->FMGL(numAtoms);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        this->FMGL(target) = ::x10aux::nullCheck(result)->FMGL(target);
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__70341 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        x10_long first__70339 = ::x10aux::nullCheck(result)->FMGL(numAtoms);
        ::au::edu::anu::mm::MultipoleExpansion* second__70340 =
          ::x10aux::nullCheck(result)->FMGL(multipoleExp);
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__70341->FMGL(first) = first__70339;
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__70341->FMGL(second) = second__70340;
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        return alloc__70341;
        
    } else {
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__70343 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        ::au::edu::anu::mm::MultipoleExpansion* second__70342 =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__70343->FMGL(first) = ((x10_long)0ll);
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__70343->FMGL(second) = (reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(X10_NULL)));
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        return alloc__70343;
        
    }
    
}

//#line 75 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
::au::edu::anu::mm::GhostOctant__GhostUpward* au::edu::anu::mm::GhostOctant::upwardRemote(
  x10_uint mortonId) {
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    ::au::edu::anu::mm::Octant* octant = ::au::edu::anu::mm::FastMultipoleMethod::FMGL(localData__get)()->getOctant(
                                           mortonId);
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    if ((!::x10aux::struct_equals(octant, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        {
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            {
                ::x10::lang::CheckedThrowable* throwable__70356 =
                  ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::lang::Runtime::enterAtomic();
                        while (true) {
                            if (::x10aux::nullCheck(octant)->FMGL(multipoleReady))
                            {
                                {
                                 
                                }
                                break;
                            }
                            ::x10::lang::Runtime::awaitAtomic();
                        }
                        
                    }
                    ::x10::compiler::Finalization::plausibleThrow();
                }
                catch (::x10::lang::CheckedThrowable* __exc200) {
                    {
                        ::x10::lang::CheckedThrowable* formal__70357 =
                          __exc200;
                        {
                            throwable__70356 = formal__70357;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__70356,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__70356))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__70356));
                    }
                    
                }
                if (true) {
                    ::x10::lang::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__70356,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__70356)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__70356));
                    }
                    
                }
                
            }
        }
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        ::au::edu::anu::mm::GhostOctant__GhostUpward* alloc__70347 =
           (new (::x10aux::alloc_z< ::au::edu::anu::mm::GhostOctant__GhostUpward>()) ::au::edu::anu::mm::GhostOctant__GhostUpward());
        
        //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        x10_long numAtoms__70344 = ::x10aux::nullCheck(octant)->numAtoms();
        ::au::edu::anu::mm::MultipoleExpansion* multipoleExp__70345 =
          ::x10aux::nullCheck(octant)->FMGL(multipoleExp);
        ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target__70346 =
          ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* >(octant);
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        alloc__70347->FMGL(numAtoms) = numAtoms__70344;
        alloc__70347->FMGL(multipoleExp) = multipoleExp__70345;
        alloc__70347->FMGL(target) = target__70346;
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        return alloc__70347;
        
    } else {
        
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        return ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::GhostOctant__GhostUpward*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
x10_double au::edu::anu::mm::GhostOctant::downward(::au::edu::anu::mm::LocalExpansion* parentLocalExpansion) {
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    if (((this->FMGL(numAtoms)) > (((x10_long)0ll)))) {
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target =
          this->FMGL(target);
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
        return ::x10::lang::Runtime::evalAt< x10_double >(
                 ::x10::lang::Place::_make((target)->location),
                 reinterpret_cast< ::x10::lang::Fun_0_0<x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_double> >(sizeof(au_edu_anu_mm_GhostOctant__closure__2)))au_edu_anu_mm_GhostOctant__closure__2(target, parentLocalExpansion))),
                 ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    return 0.0;
    
}

//#line 96 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
::x10::lang::String* au::edu::anu::mm::GhostOctant::toString(
  ) {
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::GhostOctant_Strings::sl__73224), this->FMGL(id));
    
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
::au::edu::anu::mm::GhostOctant* au::edu::anu::mm::GhostOctant::au__edu__anu__mm__GhostOctant____this__au__edu__anu__mm__GhostOctant(
  ) {
    return this;
    
}
void au::edu::anu::mm::GhostOctant::__fieldInitializers_au_edu_anu_mm_GhostOctant(
  ) {
    this->FMGL(target) = ::x10aux::zeroValue< ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > >();
    this->FMGL(numAtoms) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t au::edu::anu::mm::GhostOctant::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::GhostOctant::_deserializer);

void au::edu::anu::mm::GhostOctant::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::mm::Octant::_serialize_body(buf);
    buf.write(this->FMGL(placeId));
    buf.write(this->FMGL(target));
    buf.write(this->FMGL(numAtoms));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::GhostOctant::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::GhostOctant* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::GhostOctant>()) ::au::edu::anu::mm::GhostOctant();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::GhostOctant::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Octant::_deserialize_body(buf);
    FMGL(placeId) = buf.read<x10_long>();
    FMGL(target) = buf.read< ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > >();
    FMGL(numAtoms) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::mm::GhostOctant::rtt;
void au::edu::anu::mm::GhostOctant::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::au::edu::anu::mm::Octant>(), ::x10aux::getRTT< ::x10::lang::Comparable< ::au::edu::anu::mm::Octant* > >()};
    rtt.initStageTwo("au.edu.anu.mm.GhostOctant",::x10aux::RuntimeType::class_kind, 2, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::GhostOctant_Strings::sl__73224("GhostOctant ");

::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*>::itable<au_edu_anu_mm_GhostOctant__closure__1>au_edu_anu_mm_GhostOctant__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_GhostOctant__closure__1::__apply, &au_edu_anu_mm_GhostOctant__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_GhostOctant__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::mm::GhostOctant__GhostUpward*> >, &au_edu_anu_mm_GhostOctant__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_GhostOctant__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_GhostOctant__closure__1::_deserialize);

::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_mm_GhostOctant__closure__2>au_edu_anu_mm_GhostOctant__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_GhostOctant__closure__2::__apply, &au_edu_anu_mm_GhostOctant__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_GhostOctant__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >, &au_edu_anu_mm_GhostOctant__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_GhostOctant__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_GhostOctant__closure__2::_deserialize);

/* END of GhostOctant */
/*************************************************/
/*************************************************/
/* START of GhostOctant$GhostUpward */
#include <au/edu/anu/mm/GhostOctant__GhostUpward.h>

#include <x10/lang/Long.h>
#include <x10/lang/GlobalRef.h>
#include <au/edu/anu/mm/MultipoleExpansion.h>
#include <au/edu/anu/mm/Octant.h>
#include <x10/compiler/Synthetic.h>

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
void au::edu::anu::mm::GhostOctant__GhostUpward::_constructor(x10_long numAtoms,
                                                              ::au::edu::anu::mm::MultipoleExpansion* multipoleExp,
                                                              ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target) {
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    FMGL(numAtoms) = numAtoms;
    FMGL(multipoleExp) = multipoleExp;
    FMGL(target) = target;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
    ::au::edu::anu::mm::GhostOctant__GhostUpward* this__70338 = this;
    
}
::au::edu::anu::mm::GhostOctant__GhostUpward* au::edu::anu::mm::GhostOctant__GhostUpward::_make(
  x10_long numAtoms, ::au::edu::anu::mm::MultipoleExpansion* multipoleExp,
  ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > target)
{
    ::au::edu::anu::mm::GhostOctant__GhostUpward* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::GhostOctant__GhostUpward>()) ::au::edu::anu::mm::GhostOctant__GhostUpward();
    this_->_constructor(numAtoms, multipoleExp, target);
    return this_;
}



//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/GhostOctant.x10"
::au::edu::anu::mm::GhostOctant__GhostUpward* au::edu::anu::mm::GhostOctant__GhostUpward::au__edu__anu__mm__GhostOctant__GhostUpward____this__au__edu__anu__mm__GhostOctant__GhostUpward(
  ) {
    return this;
    
}
void au::edu::anu::mm::GhostOctant__GhostUpward::__fieldInitializers_au_edu_anu_mm_GhostOctant_GhostUpward(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::GhostOctant__GhostUpward::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::GhostOctant__GhostUpward::_deserializer);

void au::edu::anu::mm::GhostOctant__GhostUpward::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(numAtoms));
    buf.write(this->FMGL(multipoleExp));
    buf.write(this->FMGL(target));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::GhostOctant__GhostUpward::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::GhostOctant__GhostUpward* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::GhostOctant__GhostUpward>()) ::au::edu::anu::mm::GhostOctant__GhostUpward();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::GhostOctant__GhostUpward::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(numAtoms) = buf.read<x10_long>();
    FMGL(multipoleExp) = buf.read< ::au::edu::anu::mm::MultipoleExpansion*>();
    FMGL(target) = buf.read< ::x10::lang::GlobalRef< ::au::edu::anu::mm::Octant* > >();
}

::x10aux::RuntimeType au::edu::anu::mm::GhostOctant__GhostUpward::rtt;
void au::edu::anu::mm::GhostOctant__GhostUpward::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.GhostOctant.GhostUpward",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of GhostOctant$GhostUpward */
/*************************************************/
