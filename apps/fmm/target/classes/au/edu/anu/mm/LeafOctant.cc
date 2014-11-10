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
    ::au::edu::anu::mm::LeafOctant* this__43154 = this;
    ::x10aux::nullCheck(this__43154)->FMGL(atoms) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__43154)->FMGL(sources) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__43154)->FMGL(uList) = (::x10aux::class_cast_unchecked< ::au::edu::anu::mm::LeafOctant__UList*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    x10_long i__33558max__43157 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__43158;
        for (i__43158 = ((x10_long)0ll); ((i__43158) <= (i__33558max__43157));
             i__43158 = ((i__43158) + (((x10_long)1ll))))
        {
            x10_long i__43159 = i__43158;
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__43155 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                i__43159);
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long idx__43156 = ((i__43159) * (((x10_long)4ll)));
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              idx__43156, ::x10aux::nullCheck(atom__43155)->FMGL(centre)->FMGL(i));
            
            //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__43156) + (((x10_long)1ll))), ::x10aux::nullCheck(atom__43155)->FMGL(centre)->FMGL(j));
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__43156) + (((x10_long)2ll))), ::x10aux::nullCheck(atom__43155)->FMGL(centre)->FMGL(k));
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(this->FMGL(sources))->x10::lang::Rail< x10_double >::__set(
              ((idx__43156) + (((x10_long)3ll))), ::x10aux::nullCheck(atom__43155)->FMGL(charge));
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
        x10_long i__33576max__43169 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
        {
            x10_long i__43170;
            for (i__43170 = ((x10_long)0ll); ((i__43170) <= (i__33576max__43169));
                 i__43170 = ((i__43170) + (((x10_long)1ll))))
            {
                x10_long i__43171 = i__43170;
                
                //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::au::edu::anu::chem::mm::MMAtom* atom__43163 =
                  ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                    i__43171);
                
                //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::x10x::vector::Vector3d atomLocation__43164 =
                  (__extension__ ({
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Point3d b__43165 = ::x10aux::nullCheck(atom__43163)->FMGL(centre);
                    (__extension__ ({
                        
                        //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Vector3d alloc__43166 =
                           ::x10x::vector::Vector3d::_alloc();
                        
                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double i__43160 = ((centre->FMGL(i)) - (b__43165->FMGL(i)));
                        x10_double j__43161 = ((centre->FMGL(j)) - (b__43165->FMGL(j)));
                        x10_double k__43162 = ((centre->FMGL(k)) - (b__43165->FMGL(k)));
                        
                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        alloc__43166->FMGL(i) = i__43160;
                        alloc__43166->FMGL(j) = j__43161;
                        alloc__43166->FMGL(k) = k__43162;
                        alloc__43166;
                    }))
                    ;
                }))
                ;
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                ::x10aux::nullCheck(this->FMGL(multipoleExp))->addOlm(
                  ::x10aux::nullCheck(atom__43163)->FMGL(charge),
                  atomLocation__43164, plm);
            }
        }
        {
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::CheckedThrowable* throwable__43346 =
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
            catch (::x10::lang::CheckedThrowable* __exc18) {
                {
                    ::x10::lang::CheckedThrowable* formal__43347 =
                      __exc18;
                    {
                        throwable__43346 = formal__43347;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__43346,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__43346))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__43346));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__43346,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__43346)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__43346));
                }
                
            }
            
        }
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->sendMultipole();
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__43172 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        x10_long first__43167 = ::x10aux::nullCheck(this->FMGL(atoms))->size();
        ::au::edu::anu::mm::MultipoleExpansion* second__43168 =
          this->FMGL(multipoleExp);
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__43172->FMGL(first) = first__43167;
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__43172->FMGL(second) = second__43168;
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return alloc__43172;
        
    } else {
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*> alloc__43174 =
           ::x10::util::Pair<x10_long, ::au::edu::anu::mm::MultipoleExpansion*>::_alloc();
        
        //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        ::au::edu::anu::mm::MultipoleExpansion* second__43173 =
          ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
        //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__43174->FMGL(first) = ((x10_long)0ll);
        
        //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
        alloc__43174->FMGL(second) = (reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(reinterpret_cast< ::au::edu::anu::mm::MultipoleExpansion*>(X10_NULL)));
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return alloc__43174;
        
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
    x10_long i__33594max__43183 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__43184;
        for (i__43184 = ((x10_long)0ll); ((i__43184) <= (i__33594max__43183));
             i__43184 = ((i__43184) + (((x10_long)1ll))))
        {
            x10_long atomIndex__43185 = i__43184;
            
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__43178 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                atomIndex__43185);
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(atom__43178)->FMGL(force) =
              ::x10x::vector::Vector3d::FMGL(NULL__get)();
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10x::vector::Vector3d locationWithinBox__43179 =
              (__extension__ ({
                ::x10x::vector::Point3d this__43180 = ::x10aux::nullCheck(atom__43178)->FMGL(centre);
                
                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                ::x10x::vector::Point3d b__43181 = boxCentre;
                (__extension__ ({
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Vector3d alloc__43182 =
                       ::x10x::vector::Vector3d::_alloc();
                    
                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    x10_double i__43175 = ((this__43180->FMGL(i)) - (b__43181->FMGL(i)));
                    x10_double j__43176 = ((this__43180->FMGL(j)) - (b__43181->FMGL(j)));
                    x10_double k__43177 = ((this__43180->FMGL(k)) - (b__43181->FMGL(k)));
                    
                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    alloc__43182->FMGL(i) = i__43175;
                    alloc__43182->FMGL(j) = j__43176;
                    alloc__43182->FMGL(k) = k__43177;
                    alloc__43182;
                }))
                ;
            }))
            ;
            
            //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            potential = ((potential) + (::x10aux::nullCheck(this->FMGL(localExp))->calculatePotentialAndForces(
                                          atom__43178, locationWithinBox__43179,
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
        ::au::edu::anu::mm::LeafOctant__UList__UListIterator* mortonId__33612;
        for (mortonId__33612 = reinterpret_cast< ::au::edu::anu::mm::LeafOctant__UList__UListIterator*>(::x10aux::nullCheck(this->FMGL(uList))->iterator());
             mortonId__33612->hasNext(); ) {
            x10_uint mortonId = mortonId__33612->next();
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::Rail< x10_double >* oct2Data = ::x10aux::nullCheck(myLET)->getAtomDataForOctant(
                                                          mortonId);
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            if ((!::x10aux::struct_equals(oct2Data, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                directEnergy = ((directEnergy) + ((__extension__ ({
                    ::au::edu::anu::mm::LeafOctant* this__38174 =
                      this;
                    
                    //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10::lang::Rail< x10_double >* oct2Data__38144 =
                      oct2Data;
                    x10_double ret__38175;
                    
                    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double directEnergy__43216 = 0.0;
                    
                    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_long i__33650max__43213 = ((::x10aux::nullCheck(::x10aux::nullCheck(this__38174)->FMGL(atoms))->size()) - (((x10_long)1ll)));
                    {
                        x10_long i__43214;
                        for (i__43214 = ((x10_long)0ll); ((i__43214) <= (i__33650max__43213));
                             i__43214 = ((i__43214) + (((x10_long)1ll))))
                        {
                            x10_long i__43215 = i__43214;
                            
                            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::au::edu::anu::chem::mm::MMAtom* atomI__43189 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(this__38174)->FMGL(atoms))->__apply(
                                i__43215);
                            
                            //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::x10x::vector::Point3d ci__43190 =
                              ::x10aux::nullCheck(atomI__43189)->FMGL(centre);
                            
                            //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double xi__43191 = ci__43190->FMGL(i);
                            
                            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double yi__43192 = ci__43190->FMGL(j);
                            
                            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double zi__43193 = ci__43190->FMGL(k);
                            
                            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qi__43194 = ::x10aux::nullCheck(atomI__43189)->FMGL(charge);
                            
                            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fix__43195 = ::x10aux::nullCheck(atomI__43189)->FMGL(force)->FMGL(i);
                            
                            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fiy__43196 = ::x10aux::nullCheck(atomI__43189)->FMGL(force)->FMGL(j);
                            
                            //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double fiz__43197 = ::x10aux::nullCheck(atomI__43189)->FMGL(force)->FMGL(k);
                            
                            //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            {
                                x10_long j__43198;
                                for (j__43198 = ((x10_long)0ll);
                                     ((j__43198) < ((x10_long)(::x10aux::nullCheck(oct2Data__38144)->FMGL(size))));
                                     j__43198 = ((j__43198) + (((x10_long)4ll))))
                                {
                                    
                                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double xj__43199 =
                                      ::x10aux::nullCheck(oct2Data__38144)->x10::lang::Rail< x10_double >::__apply(
                                        j__43198);
                                    
                                    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double yj__43200 =
                                      ::x10aux::nullCheck(oct2Data__38144)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__43198) + (((x10_long)1ll))));
                                    
                                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double zj__43201 =
                                      ::x10aux::nullCheck(oct2Data__38144)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__43198) + (((x10_long)2ll))));
                                    
                                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double qj__43202 =
                                      ::x10aux::nullCheck(oct2Data__38144)->x10::lang::Rail< x10_double >::__apply(
                                        ((j__43198) + (((x10_long)3ll))));
                                    
                                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dx__43203 =
                                      ((xj__43199) - (xi__43191));
                                    
                                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dy__43204 =
                                      ((yj__43200) - (yi__43192));
                                    
                                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double dz__43205 =
                                      ((zj__43201) - (zi__43193));
                                    
                                    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double r__43206 =
                                      ((((((dx__43203) * (dx__43203))) + (((dy__43204) * (dy__43204))))) + (((dz__43205) * (dz__43205))));
                                    
                                    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double invR__43207;
                                    
                                    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double invR__43208;
                                    {
                                        
                                        //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                        invR__43208 = ((1.0) / (r__43206));
                                        
                                        //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                        invR__43207 = ::x10::lang::MathNatives::sqrt(invR__43208);
                                    }
                                    
                                    //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double qq__43209 =
                                      ((qi__43194) * (qj__43202));
                                    
                                    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double e__43210 =
                                      ((invR__43207) * (qq__43209));
                                    
                                    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    directEnergy__43216 =
                                      ((directEnergy__43216) + (e__43210));
                                    
                                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    x10_double forceScaling__43211 =
                                      ((e__43210) * (invR__43208));
                                    
                                    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fix__43195 = ((fix__43195) + (((forceScaling__43211) * (dx__43203))));
                                    
                                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fiy__43196 = ((fiy__43196) + (((forceScaling__43211) * (dy__43204))));
                                    
                                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                    fiz__43197 = ((fiz__43197) + (((forceScaling__43211) * (dz__43205))));
                                }
                            }
                            
                            //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            ::x10aux::nullCheck(atomI__43189)->FMGL(force) =
                              (__extension__ ({
                                ::x10x::vector::Vector3d alloc__43212 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__43186 = fix__43195;
                                x10_double j__43187 = fiy__43196;
                                x10_double k__43188 = fiz__43197;
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__43212->FMGL(i) = i__43186;
                                alloc__43212->FMGL(j) = j__43187;
                                alloc__43212->FMGL(k) = k__43188;
                                alloc__43212;
                            }))
                            ;
                        }
                    }
                    
                    //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ret__38175 = directEnergy__43216;
                    ret__38175;
                }))
                ));
            }
            
        }
    }
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__33632max__43256 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__43257;
        for (i__43257 = ((x10_long)0ll); ((i__43257) <= (i__33632max__43256));
             i__43257 = ((i__43257) + (((x10_long)1ll))))
        {
            x10_long atomIndex__43258 = i__43257;
            
            //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__43255 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                atomIndex__43258);
            
            //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long i__33614max__43252 = ((atomIndex__43258) - (((x10_long)1ll)));
            {
                x10_long i__43253;
                for (i__43253 = ((x10_long)0ll); ((i__43253) <= (i__33614max__43252));
                     i__43253 = ((i__43253) + (((x10_long)1ll))))
                {
                    x10_long sameBoxAtomIndex__43254 = i__43253;
                    
                    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::au::edu::anu::chem::mm::MMAtom* sameBoxAtom__43229 =
                      ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                        sameBoxAtomIndex__43254);
                    
                    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Vector3d rVec__43230 =
                      (__extension__ ({
                        ::x10x::vector::Point3d this__43231 =
                          ::x10aux::nullCheck(sameBoxAtom__43229)->FMGL(centre);
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__43232 =
                          ::x10aux::nullCheck(atom__43255)->FMGL(centre);
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__43233 =
                              that__43232;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__43234 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__43217 = ((this__43231->FMGL(i)) - (b__43233->FMGL(i)));
                                x10_double j__43218 = ((this__43231->FMGL(j)) - (b__43233->FMGL(j)));
                                x10_double k__43219 = ((this__43231->FMGL(k)) - (b__43233->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__43234->FMGL(i) = i__43217;
                                alloc__43234->FMGL(j) = j__43218;
                                alloc__43234->FMGL(k) = k__43219;
                                alloc__43234;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__43235;
                    
                    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__43236;
                    {
                        
                        //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__43236 = ((1.0) / (((((((rVec__43230->FMGL(i)) * (rVec__43230->FMGL(i)))) + (((rVec__43230->FMGL(j)) * (rVec__43230->FMGL(j)))))) + (((rVec__43230->FMGL(k)) * (rVec__43230->FMGL(k)))))));
                        
                        //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__43235 = ::x10::lang::MathNatives::sqrt(invR__43236);
                    }
                    
                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double e__43237 = ((((::x10aux::nullCheck(atom__43255)->FMGL(charge)) * (::x10aux::nullCheck(sameBoxAtom__43229)->FMGL(charge)))) * (invR__43235));
                    
                    //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    directEnergy = ((directEnergy) + (((2.0) * (e__43237))));
                    
                    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Vector3d pairForce__43238 =
                      (__extension__ ({
                        
                        //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double x__43239 = ((e__43237) * (invR__43236));
                        ::x10x::vector::Vector3d y__43240 =
                          rVec__43230;
                        (__extension__ ({
                            
                            //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double that__43241 = x__43239;
                            (__extension__ ({
                                
                                //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double c__43242 = that__43241;
                                (__extension__ ({
                                    
                                    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d alloc__43243 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__43220 =
                                      ((y__43240->FMGL(i)) * (c__43242));
                                    x10_double j__43221 =
                                      ((y__43240->FMGL(j)) * (c__43242));
                                    x10_double k__43222 =
                                      ((y__43240->FMGL(k)) * (c__43242));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__43243->FMGL(i) =
                                      i__43220;
                                    alloc__43243->FMGL(j) =
                                      j__43221;
                                    alloc__43243->FMGL(k) =
                                      k__43222;
                                    alloc__43243;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(atom__43255)->FMGL(force) =
                      (__extension__ ({
                        ::x10x::vector::Vector3d this__43244 =
                          ::x10aux::nullCheck(atom__43255)->FMGL(force);
                        
                        //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d that__43245 =
                          pairForce__43238;
                        (__extension__ ({
                            
                            //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d b__43246 =
                              that__43245;
                            (__extension__ ({
                                
                                //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__43247 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__43223 = ((this__43244->FMGL(i)) + (b__43246->FMGL(i)));
                                x10_double j__43224 = ((this__43244->FMGL(j)) + (b__43246->FMGL(j)));
                                x10_double k__43225 = ((this__43244->FMGL(k)) + (b__43246->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__43247->FMGL(i) = i__43223;
                                alloc__43247->FMGL(j) = j__43224;
                                alloc__43247->FMGL(k) = k__43225;
                                alloc__43247;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(sameBoxAtom__43229)->FMGL(force) =
                      (__extension__ ({
                        
                        //#line 44 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d x__43248 =
                          ::x10aux::nullCheck(sameBoxAtom__43229)->FMGL(force);
                        ::x10x::vector::Vector3d y__43249 =
                          pairForce__43238;
                        (__extension__ ({
                            
                            //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d b__43250 =
                              y__43249;
                            (__extension__ ({
                                
                                //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__43251 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__43226 = ((x__43248->FMGL(i)) - (b__43250->FMGL(i)));
                                x10_double j__43227 = ((x__43248->FMGL(j)) - (b__43250->FMGL(j)));
                                x10_double k__43228 = ((x__43248->FMGL(k)) - (b__43250->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__43251->FMGL(i) = i__43226;
                                alloc__43251->FMGL(j) = j__43227;
                                alloc__43251->FMGL(k) = k__43228;
                                alloc__43251;
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
    x10_long i__33650max__43286 = ((::x10aux::nullCheck(this->FMGL(atoms))->size()) - (((x10_long)1ll)));
    {
        x10_long i__43287;
        for (i__43287 = ((x10_long)0ll); ((i__43287) <= (i__33650max__43286));
             i__43287 = ((i__43287) + (((x10_long)1ll))))
        {
            x10_long i__43288 = i__43287;
            
            //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atomI__43262 =
              ::x10aux::nullCheck(this->FMGL(atoms))->__apply(
                i__43288);
            
            //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10x::vector::Point3d ci__43263 = ::x10aux::nullCheck(atomI__43262)->FMGL(centre);
            
            //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double xi__43264 = ci__43263->FMGL(i);
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double yi__43265 = ci__43263->FMGL(j);
            
            //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double zi__43266 = ci__43263->FMGL(k);
            
            //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double qi__43267 = ::x10aux::nullCheck(atomI__43262)->FMGL(charge);
            
            //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fix__43268 = ::x10aux::nullCheck(atomI__43262)->FMGL(force)->FMGL(i);
            
            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fiy__43269 = ::x10aux::nullCheck(atomI__43262)->FMGL(force)->FMGL(j);
            
            //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double fiz__43270 = ::x10aux::nullCheck(atomI__43262)->FMGL(force)->FMGL(k);
            
            //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            {
                x10_long j__43271;
                for (j__43271 = ((x10_long)0ll); ((j__43271) < ((x10_long)(::x10aux::nullCheck(oct2Data)->FMGL(size))));
                     j__43271 = ((j__43271) + (((x10_long)4ll))))
                {
                    
                    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double xj__43272 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             j__43271);
                    
                    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double yj__43273 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__43271) + (((x10_long)1ll))));
                    
                    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double zj__43274 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__43271) + (((x10_long)2ll))));
                    
                    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qj__43275 = ::x10aux::nullCheck(oct2Data)->x10::lang::Rail< x10_double >::__apply(
                                             ((j__43271) + (((x10_long)3ll))));
                    
                    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dx__43276 = ((xj__43272) - (xi__43264));
                    
                    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dy__43277 = ((yj__43273) - (yi__43265));
                    
                    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double dz__43278 = ((zj__43274) - (zi__43266));
                    
                    //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double r__43279 = ((((((dx__43276) * (dx__43276))) + (((dy__43277) * (dy__43277))))) + (((dz__43278) * (dz__43278))));
                    
                    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__43280;
                    
                    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double invR__43281;
                    {
                        
                        //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__43281 = ((1.0) / (r__43279));
                        
                        //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                        invR__43280 = ::x10::lang::MathNatives::sqrt(invR__43281);
                    }
                    
                    //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qq__43282 = ((qi__43267) * (qj__43275));
                    
                    //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double e__43283 = ((invR__43280) * (qq__43282));
                    
                    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    directEnergy = ((directEnergy) + (e__43283));
                    
                    //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double forceScaling__43284 = ((e__43283) * (invR__43281));
                    
                    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fix__43268 = ((fix__43268) + (((forceScaling__43284) * (dx__43276))));
                    
                    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fiy__43269 = ((fiy__43269) + (((forceScaling__43284) * (dy__43277))));
                    
                    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    fiz__43270 = ((fiz__43270) + (((forceScaling__43284) * (dz__43278))));
                }
            }
            
            //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(atomI__43262)->FMGL(force) =
              (__extension__ ({
                ::x10x::vector::Vector3d alloc__43285 =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__43259 = fix__43268;
                x10_double j__43260 = fiy__43269;
                x10_double k__43261 = fiz__43270;
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                alloc__43285->FMGL(i) = i__43259;
                alloc__43285->FMGL(j) = j__43260;
                alloc__43285->FMGL(k) = k__43261;
                alloc__43285;
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
    ::x10x::vector::Vector3d alloc__43292 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    x10_double i__43289 = translationX;
    x10_double j__43290 = translationY;
    x10_double k__43291 = translationZ;
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    alloc__43292->FMGL(i) = i__43289;
    alloc__43292->FMGL(j) = j__43290;
    alloc__43292->FMGL(k) = k__43291;
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    return alloc__43292;
    
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
          ::au::edu::anu::mm::OctantId alloc__33552 =  ::au::edu::anu::mm::OctantId::_alloc();
          
          //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
          alloc__33552->FMGL(x) = ((x10_ubyte)0);
          alloc__33552->FMGL(y) = ((x10_ubyte)0);
          alloc__33552->FMGL(z) = ((x10_ubyte)0);
          alloc__33552->FMGL(level) = ((x10_ubyte)0);
          alloc__33552;
      }))
      , ((x10_int)1), ((x10_int)1), ((x10_ubyte)0));
    
    //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    dummyOctant->FMGL(atoms) = (__extension__ ({
        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__33553 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
        (alloc__33553)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
          ((x10_long)(q)));
        alloc__33553;
    }))
    ;
    
    //#line 295 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10::util::Random* rand =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    
    //#line 32 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    (rand)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long i__33668max__43331 = ((((x10_long)(q))) - (((x10_long)1ll)));
    {
        x10_long i__43332;
        for (i__43332 = ((x10_long)0ll); ((i__43332) <= (i__33668max__43331));
             i__43332 = ((i__43332) + (((x10_long)1ll))))
        {
            x10_long i__43333 = i__43332;
            
            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::au::edu::anu::chem::mm::MMAtom* atom__43296 =
               (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
            (atom__43296)->::au::edu::anu::chem::mm::MMAtom::_constructor(
              (__extension__ ({
                  ::x10x::vector::Point3d alloc__43297 = 
                  ::x10x::vector::Point3d::_alloc();
                  
                  //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                  x10_double i__43293 = ((rand->nextDouble()) + (40.0));
                  x10_double j__43294 = ((rand->nextDouble()) + (40.0));
                  x10_double k__43295 = ((rand->nextDouble()) + (40.0));
                  
                  //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                  alloc__43297->FMGL(i) = i__43293;
                  alloc__43297->FMGL(j) = j__43294;
                  alloc__43297->FMGL(k) = k__43295;
                  alloc__43297;
              }))
              , 1.0, 1.0);
            
            //#line 299 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10aux::nullCheck(dummyOctant->FMGL(atoms))->__set(
              i__43333, atom__43296);
        }
    }
    
    //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    ::x10::lang::Rail< x10_double >* dummyData = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(q))) * (((x10_long)4ll))),
                                                                                        reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(au_edu_anu_mm_LeafOctant__closure__1)))au_edu_anu_mm_LeafOctant__closure__1(rand))));
    
    //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_long start = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 307 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    {
        x10_long i__43334;
        for (i__43334 = ((x10_long)0ll); ((i__43334) <= (((x10_long)1000ll)));
             i__43334 = ((i__43334) + (((x10_long)1ll))))
        {
            x10_long i__43335 = i__43334;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ::x10::lang::Rail< x10_double >* oct2Data__43329 =
              dummyData;
            x10_double ret__43330;
            
            //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_double directEnergy__43328 = 0.0;
            
            //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            x10_long i__33650max__43325 = ((::x10aux::nullCheck(dummyOctant->FMGL(atoms))->size()) - (((x10_long)1ll)));
            {
                x10_long i__43326;
                for (i__43326 = ((x10_long)0ll); ((i__43326) <= (i__33650max__43325));
                     i__43326 = ((i__43326) + (((x10_long)1ll))))
                {
                    x10_long i__43327 = i__43326;
                    
                    //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::au::edu::anu::chem::mm::MMAtom* atomI__43301 =
                      ::x10aux::nullCheck(dummyOctant->FMGL(atoms))->__apply(
                        i__43327);
                    
                    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10x::vector::Point3d ci__43302 = ::x10aux::nullCheck(atomI__43301)->FMGL(centre);
                    
                    //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double xi__43303 = ci__43302->FMGL(i);
                    
                    //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double yi__43304 = ci__43302->FMGL(j);
                    
                    //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double zi__43305 = ci__43302->FMGL(k);
                    
                    //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double qi__43306 = ::x10aux::nullCheck(atomI__43301)->FMGL(charge);
                    
                    //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fix__43307 = ::x10aux::nullCheck(atomI__43301)->FMGL(force)->FMGL(i);
                    
                    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fiy__43308 = ::x10aux::nullCheck(atomI__43301)->FMGL(force)->FMGL(j);
                    
                    //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    x10_double fiz__43309 = ::x10aux::nullCheck(atomI__43301)->FMGL(force)->FMGL(k);
                    
                    //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    {
                        x10_long j__43310;
                        for (j__43310 = ((x10_long)0ll); ((j__43310) < ((x10_long)(::x10aux::nullCheck(oct2Data__43329)->FMGL(size))));
                             j__43310 = ((j__43310) + (((x10_long)4ll))))
                        {
                            
                            //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double xj__43311 = ::x10aux::nullCheck(oct2Data__43329)->x10::lang::Rail< x10_double >::__apply(
                                                     j__43310);
                            
                            //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double yj__43312 = ::x10aux::nullCheck(oct2Data__43329)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__43310) + (((x10_long)1ll))));
                            
                            //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double zj__43313 = ::x10aux::nullCheck(oct2Data__43329)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__43310) + (((x10_long)2ll))));
                            
                            //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qj__43314 = ::x10aux::nullCheck(oct2Data__43329)->x10::lang::Rail< x10_double >::__apply(
                                                     ((j__43310) + (((x10_long)3ll))));
                            
                            //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dx__43315 = ((xj__43311) - (xi__43303));
                            
                            //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dy__43316 = ((yj__43312) - (yi__43304));
                            
                            //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double dz__43317 = ((zj__43313) - (zi__43305));
                            
                            //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double r__43318 = ((((((dx__43315) * (dx__43315))) + (((dy__43316) * (dy__43316))))) + (((dz__43317) * (dz__43317))));
                            
                            //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double invR__43319;
                            
                            //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double invR__43320;
                            {
                                
                                //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                invR__43320 = ((1.0) / (r__43318));
                                
                                //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                                invR__43319 = ::x10::lang::MathNatives::sqrt(invR__43320);
                            }
                            
                            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double qq__43321 = ((qi__43306) * (qj__43314));
                            
                            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double e__43322 = ((invR__43319) * (qq__43321));
                            
                            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            directEnergy__43328 = ((directEnergy__43328) + (e__43322));
                            
                            //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            x10_double forceScaling__43323 =
                              ((e__43322) * (invR__43320));
                            
                            //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fix__43307 = ((fix__43307) + (((forceScaling__43323) * (dx__43315))));
                            
                            //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fiy__43308 = ((fiy__43308) + (((forceScaling__43323) * (dy__43316))));
                            
                            //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                            fiz__43309 = ((fiz__43309) + (((forceScaling__43323) * (dz__43317))));
                        }
                    }
                    
                    //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
                    ::x10aux::nullCheck(atomI__43301)->FMGL(force) =
                      (__extension__ ({
                        ::x10x::vector::Vector3d alloc__43324 =
                           ::x10x::vector::Vector3d::_alloc();
                        
                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double i__43298 = fix__43307;
                        x10_double j__43299 = fiy__43308;
                        x10_double k__43300 = fiz__43309;
                        
                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        alloc__43324->FMGL(i) = i__43298;
                        alloc__43324->FMGL(j) = j__43299;
                        alloc__43324->FMGL(k) = k__43300;
                        alloc__43324;
                    }))
                    ;
                }
            }
            
            //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ret__43330 = directEnergy__43328;
            
            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
            ret__43330;
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
        ::au::edu::anu::mm::LeafOctant__UList* alloc__33555 =
           (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList>()) ::au::edu::anu::mm::LeafOctant__UList());
        (alloc__33555)->::au::edu::anu::mm::LeafOctant__UList::_constructor(
          this, this->FMGL(id), ws);
        alloc__33555;
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
    return ::x10::lang::String::__plus((&::au::edu::anu::mm::LeafOctant_Strings::sl__48386), this->FMGL(id));
    
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

::x10::lang::String au::edu::anu::mm::LeafOctant_Strings::sl__48386("LeafOctant ");

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
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* this__43338 = this;
    ::x10aux::nullCheck(this__43338)->FMGL(x) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__43338)->FMGL(y) = ((x10_ubyte)0);
    ::x10aux::nullCheck(this__43338)->FMGL(z) = ((x10_ubyte)0);
    
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
            x10_uint x__43051 = ((x10_uint) (this->FMGL(x)));
            x10_uint y__43052 = ((x10_uint) (this->FMGL(y)));
            x10_uint z__43053 = ((x10_uint) (this->FMGL(z)));
            x10_uint level__43054 = ((x10_uint) (::x10aux::nullCheck(this->FMGL(out__))->FMGL(level)));
            x10_uint ret__43064;
            
            //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint id__43343 = ((x10_uint)0u);
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_uint bitmask__43344 = ((x10_uint)1u);
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            x10_int shift__43345 = ((x10_int)0);
            
            //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            {
                x10_long i__43341;
                for (i__43341 = ((x10_long)0ll); ((i__43341) <= (((x10_long)7ll)));
                     i__43341 = ((i__43341) + (((x10_long)1ll))))
                {
                    x10_long i__43342 = i__43341;
                    
                    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__43343 = ((x10_uint) ((id__43343) | (((x10_uint) ((((x10_uint) ((bitmask__43344) & (z__43053)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                        x10_int pre__43339 = shift__43345;
                        shift__43345 = ((shift__43345) + (((x10_int)1)));
                        pre__43339;
                    }))
                    )))))))));
                    
                    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__43343 = ((x10_uint) ((id__43343) | (((x10_uint) ((((x10_uint) ((bitmask__43344) & (y__43052)))) << (x10_int)(0x1f & (((x10_long)((__extension__ ({
                        x10_int pre__43340 = shift__43345;
                        shift__43345 = ((shift__43345) + (((x10_int)1)));
                        pre__43340;
                    }))
                    )))))))));
                    
                    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    id__43343 = ((x10_uint) ((id__43343) | (((x10_uint) ((((x10_uint) ((bitmask__43344) & (x__43051)))) << (x10_int)(0x1f & (((x10_long)(shift__43345)))))))));
                    
                    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
                    bitmask__43344 = ((x10_uint) ((bitmask__43344) << (x10_int)(0x1f & (((x10_long)1ll)))));
                }
            }
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            id__43343 = ((x10_uint) ((id__43343) | (((x10_uint) ((level__43054) << (x10_int)(0x1f & (((x10_long)24ll))))))));
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/OctantId.x10"
            ret__43064 = id__43343;
            ret__43064;
        }))
        ;
        
        //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        this->moveToNext();
        
        //#line 375 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        return res;
        
    } else {
        
        //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus((&::au::edu::anu::mm::LeafOctant__UList__UListIterator_Strings::sl__48437), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->FMGL(id)))));
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

::x10::lang::String au::edu::anu::mm::LeafOctant__UList__UListIterator_Strings::sl__48437("reached end of uList for ");

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
    ::au::edu::anu::mm::LeafOctant__UList* this__43336 = this;
    
    //#line 337 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    x10_ubyte levelDim = ((x10_ubyte) ((((x10_ubyte)1)) << (0x7 & (x10_int)(((x10_long)(id->FMGL(level)))))));
    
    //#line 338 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43030 = ((((x10_int)(id->FMGL(x)))) - (ws));
        ((((x10_int)0)) < (b__43030)) ? (b__43030) : (((x10_int)0));
    }))
    ));
    
    //#line 339 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxX) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43031 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__43032 = ((((x10_int)(id->FMGL(x)))) + (ws));
        ((a__43031) < (b__43032)) ? (a__43031) : (b__43032);
    }))
    ));
    
    //#line 340 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43034 = ((((x10_int)(id->FMGL(y)))) - (ws));
        ((((x10_int)0)) < (b__43034)) ? (b__43034) : (((x10_int)0));
    }))
    ));
    
    //#line 341 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxY) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43035 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__43036 = ((((x10_int)(id->FMGL(y)))) + (ws));
        ((a__43035) < (b__43036)) ? (a__43035) : (b__43036);
    }))
    ));
    
    //#line 342 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(minZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int b__43038 = ((((x10_int)(id->FMGL(z)))) - (ws));
        ((((x10_int)0)) < (b__43038)) ? (b__43038) : (((x10_int)0));
    }))
    ));
    
    //#line 343 "/localdisk/qqiu/workspace/anuchem/apps/fmm/src/au/edu/anu/mm/LeafOctant.x10"
    this->FMGL(maxZ) = ((x10_ubyte) ((__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__43039 = ((((x10_int)(levelDim))) - (((x10_int)1)));
        x10_int b__43040 = ((((x10_int)(id->FMGL(z)))) + (ws));
        ((a__43039) < (b__43040)) ? (a__43039) : (b__43040);
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
    ::au::edu::anu::mm::LeafOctant__UList__UListIterator* alloc__43337 =
       (new (::x10aux::alloc_z< ::au::edu::anu::mm::LeafOctant__UList__UListIterator>()) ::au::edu::anu::mm::LeafOctant__UList__UListIterator());
    (alloc__43337)->::au::edu::anu::mm::LeafOctant__UList__UListIterator::_constructor(
      this);
    return reinterpret_cast< ::x10::lang::Iterator<x10_uint>*>(alloc__43337);
    
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
