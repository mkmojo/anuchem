/*************************************************/
/* START of ElectrostaticDirectMethod */
#include <au/edu/anu/chem/mm/ElectrostaticDirectMethod.h>

#include <x10/lang/Boolean.h>
#include <au/edu/anu/chem/PointCharge.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Double.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Reducible.h>
#include <au/edu/anu/chem/mm/ElectrostaticDirectMethod__SumReducer.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/regionarray/Region.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Uncounted.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/Math.h>
#include <x10x/vector/Vector3d.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* __apply(::x10::lang::Point* t__3){
        
        //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        x10_long p = ::x10aux::nullCheck(t__3)->x10::lang::Point::__apply(
                       ((x10_long)(((x10_int)0))));
        return ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::_make(((x10_long)::x10aux::num_hosts));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1>();
        buf.record_reference(storage);
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1();
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:48";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge>::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::chem::PointCharge __apply(x10_long i__24221){
        ::au::edu::anu::chem::PointCharge alloc__24148 =  ::au::edu::anu::chem::PointCharge::_alloc();
        
        //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
        ::x10x::vector::Point3d centre__24146 = ::x10aux::nullCheck(::x10aux::nullCheck(myAtoms__24219)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                                                                      i__24221))->FMGL(centre);
        x10_double charge__24147 = ::x10aux::nullCheck(::x10aux::nullCheck(myAtoms__24219)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                                                         i__24221))->FMGL(charge);
        
        //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
        alloc__24148->FMGL(centre) = centre__24146;
        
        //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/PointCharge.x10"
        alloc__24148->FMGL(charge) = charge__24147;
        
        //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        return alloc__24148;
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms__24219;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->myAtoms__24219);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* that_myAtoms__24219 = buf.read< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>();
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4(that_myAtoms__24219);
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4(::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms__24219) : myAtoms__24219(myAtoms__24219) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:77";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            ::x10::lang::CheckedThrowable* throwable__24301 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        
                        //#line 85 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(otherAtoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::__apply(
                                              nextPlace__24223->FMGL(id)))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__set(
                          p__24218, myCharges__24220);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc99) {
                {
                    ::x10::lang::CheckedThrowable* formal__24302 =
                      __exc99;
                    {
                        throwable__24301 = formal__24302;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__24301,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__24301))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__24301));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__24301,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__24301)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__24301));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms;
    ::x10::lang::Place nextPlace__24223;
    x10_long p__24218;
    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* myCharges__24220;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->otherAtoms);
        buf.write(this->nextPlace__24223);
        buf.write(this->p__24218);
        buf.write(this->myCharges__24220);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* that_otherAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>();
        ::x10::lang::Place that_nextPlace__24223 = buf.read< ::x10::lang::Place>();
        x10_long that_p__24218 = buf.read<x10_long>();
        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* that_myCharges__24220 = buf.read< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>();
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5(that_otherAtoms, that_nextPlace__24223, that_p__24218, that_myCharges__24220);
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5(::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms, ::x10::lang::Place nextPlace__24223, x10_long p__24218, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* myCharges__24220) : otherAtoms(otherAtoms), nextPlace__24223(nextPlace__24223), p__24218(p__24218), myCharges__24220(myCharges__24220) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:83-87";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            ::x10::lang::CheckedThrowable* throwable__24304 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        
                        //#line 139 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(otherAtoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::__apply(
                                              targetPlace__24226->FMGL(id)))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__set(
                          p__24218, myCharges__24220);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc100) {
                {
                    ::x10::lang::CheckedThrowable* formal__24305 =
                      __exc100;
                    {
                        throwable__24304 = formal__24305;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__24304,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__24304))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__24304));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__24304,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__24304)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__24304));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms;
    ::x10::lang::Place targetPlace__24226;
    x10_long p__24218;
    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* myCharges__24220;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->otherAtoms);
        buf.write(this->targetPlace__24226);
        buf.write(this->p__24218);
        buf.write(this->myCharges__24220);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* that_otherAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>();
        ::x10::lang::Place that_targetPlace__24226 = buf.read< ::x10::lang::Place>();
        x10_long that_p__24218 = buf.read<x10_long>();
        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* that_myCharges__24220 = buf.read< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>();
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6(that_otherAtoms, that_targetPlace__24226, that_p__24218, that_myCharges__24220);
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6(::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms, ::x10::lang::Place targetPlace__24226, x10_long p__24218, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* myCharges__24220) : otherAtoms(otherAtoms), targetPlace__24226(targetPlace__24226), p__24218(p__24218), myCharges__24220(myCharges__24220) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:137-141";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms__24219 =
          ::x10aux::nullCheck(atoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p__24218);
        
        //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* myCharges__24220 =
          ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::_make((x10_long)(::x10aux::nullCheck(myAtoms__24219)->FMGL(size)),
                                                                        reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge> >(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4(myAtoms__24219))));
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        x10_double energyThisPlace__24222 = 0.0;
        
        //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::x10::lang::Place nextPlace__24223 = ::x10::lang::Place::places()->next(
                                                ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        if ((!::x10aux::struct_equals(nextPlace__24223, ::x10::lang::Place::_make(::x10aux::here))))
        {
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            ::x10::lang::Runtime::runAsync(nextPlace__24223,
                                           reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5(otherAtoms, nextPlace__24223, p__24218, myCharges__24220))),
                                           ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        x10_long i__15850max__24214 = (((x10_long)(::x10aux::nullCheck(myAtoms__24219)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__24215;
            for (i__24215 = ((x10_long)0ll); ((i__24215) <= (i__15850max__24214));
                 i__24215 = ((i__24215) + (((x10_long)1ll))))
            {
                x10_long i__24216 = i__24215;
                
                //#line 92 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::au::edu::anu::chem::mm::MMAtom* atomI__24169 =
                  ::x10aux::nullCheck(myAtoms__24219)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                    i__24216);
                
                //#line 93 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10x::vector::Point3d ci__24170 = ::x10aux::nullCheck(atomI__24169)->FMGL(centre);
                
                //#line 94 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double xi__24171 = ci__24170->FMGL(i);
                
                //#line 95 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double yi__24172 = ci__24170->FMGL(j);
                
                //#line 96 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double zi__24173 = ci__24170->FMGL(k);
                
                //#line 97 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double qi__24174 = ::x10aux::nullCheck(atomI__24169)->FMGL(charge);
                
                //#line 98 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double fix__24175 = 0.0;
                
                //#line 99 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double fiy__24176 = 0.0;
                
                //#line 100 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_double fiz__24177 = 0.0;
                
                //#line 101 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                x10_long i__15832max__24166 = (((x10_long)(::x10aux::nullCheck(myAtoms__24219)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__24167;
                    for (i__24167 = ((x10_long)0ll); ((i__24167) <= (i__15832max__24166));
                         i__24167 = ((i__24167) + (((x10_long)1ll))))
                    {
                        x10_long j__24168 = i__24167;
                        
                        //#line 102 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        if ((::x10aux::struct_equals(i__24216,
                                                     j__24168)))
                        {
                            continue;
                        }
                        
                        //#line 103 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        ::au::edu::anu::chem::mm::MMAtom* atomJ__24149 =
                          ::x10aux::nullCheck(myAtoms__24219)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                            j__24168);
                        
                        //#line 104 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        ::x10x::vector::Point3d cj__24150 =
                          ::x10aux::nullCheck(atomJ__24149)->FMGL(centre);
                        
                        //#line 106 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double dx__24151 = ((cj__24150->FMGL(i)) - (xi__24171));
                        
                        //#line 107 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double dy__24152 = ((cj__24150->FMGL(j)) - (yi__24172));
                        
                        //#line 108 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double dz__24153 = ((cj__24150->FMGL(k)) - (zi__24173));
                        
                        //#line 110 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double r__24154 = ((((((dx__24151) * (dx__24151))) + (((dy__24152) * (dy__24152))))) + (((dz__24153) * (dz__24153))));
                        
                        //#line 111 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double invR__24155 = ((1.0) / (r__24154));
                        
                        //#line 112 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double qq__24156 = ((qi__24174) * (::x10aux::nullCheck(atomJ__24149)->FMGL(charge)));
                        
                        //#line 113 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double invR__24157 = ::x10::lang::MathNatives::sqrt(invR__24155);
                        
                        //#line 115 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double e__24158 = ((invR__24157) * (qq__24156));
                        
                        //#line 116 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double forceScaling__24159 = ((e__24158) * (invR__24155));
                        
                        //#line 117 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        energyThisPlace__24222 = ((energyThisPlace__24222) + (e__24158));
                        
                        //#line 119 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double fx__24160 = ((forceScaling__24159) * (dx__24151));
                        
                        //#line 120 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double fy__24161 = ((forceScaling__24159) * (dy__24152));
                        
                        //#line 121 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        x10_double fz__24162 = ((forceScaling__24159) * (dz__24153));
                        
                        //#line 123 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        fix__24175 = ((fix__24175) + (fx__24160));
                        
                        //#line 124 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        fiy__24176 = ((fiy__24176) + (fy__24161));
                        
                        //#line 125 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        fiz__24177 = ((fiz__24177) + (fz__24162));
                    }
                }
                
                //#line 128 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10aux::nullCheck(atomI__24169)->FMGL(force) =
                  (__extension__ ({
                    ::x10x::vector::Vector3d alloc__24178 =
                       ::x10x::vector::Vector3d::_alloc();
                    
                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    x10_double i__24163 = fix__24175;
                    x10_double j__24164 = fiy__24176;
                    x10_double k__24165 = fiz__24177;
                    
                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    alloc__24178->FMGL(i) = i__24163;
                    alloc__24178->FMGL(j) = j__24164;
                    alloc__24178->FMGL(k) = k__24165;
                    alloc__24178;
                }))
                ;
            }
        }
        
        //#line 131 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::x10::lang::Place target__24224 = ::x10::lang::Place::places()->next(
                                             nextPlace__24223);
        
        //#line 132 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::x10::lang::Place source__24225 = ::x10::lang::Place::places()->prev(
                                             ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 133 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        while ((!::x10aux::struct_equals(source__24225, ::x10::lang::Place::_make(::x10aux::here))))
        {
            
            //#line 134 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            if ((!::x10aux::struct_equals(target__24224, ::x10::lang::Place::_make(::x10aux::here))))
            {
                
                //#line 136 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10::lang::Place targetPlace__24226 = target__24224;
                
                //#line 137 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10::lang::Runtime::runAsync(targetPlace__24226,
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6(otherAtoms, targetPlace__24226, p__24218, myCharges__24220))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            {
                
                //#line 145 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10::lang::Runtime::ensureNotInAtomic();
                {
                    ::x10::lang::CheckedThrowable* throwable__24307 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    try {
                        {
                            ::x10::lang::Runtime::enterAtomic();
                            while (true) {
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(otherAtoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::__apply(
                                                                                    ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                                                source__24225->FMGL(id)),
                                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
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
                    catch (::x10::lang::CheckedThrowable* __exc101) {
                        {
                            ::x10::lang::CheckedThrowable* formal__24308 =
                              __exc101;
                            {
                                throwable__24307 = formal__24308;
                            }
                        }
                    }
                    if ((!::x10aux::struct_equals(throwable__24307,
                                                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                    {
                        if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__24307))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__24307));
                        }
                        
                    }
                    if (true) {
                        ::x10::lang::Runtime::exitAtomic();
                    }
                    if ((!::x10aux::struct_equals(throwable__24307,
                                                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                    {
                        if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__24307)))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__24307));
                        }
                        
                    }
                    
                }
            }
            
            //#line 148 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* other__24227 =
              ::x10aux::nullCheck(::x10aux::nullCheck(otherAtoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::__apply(
                                    ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                source__24225->FMGL(id));
            
            //#line 149 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            x10_long i__15886max__24211 = (((x10_long)(::x10aux::nullCheck(other__24227)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__24212;
                for (i__24212 = ((x10_long)0ll); ((i__24212) <= (i__15886max__24211));
                     i__24212 = ((i__24212) + (((x10_long)1ll))))
                {
                    x10_long j__24213 = i__24212;
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                    ::au::edu::anu::chem::PointCharge atomJ__24210 =
                      ::x10aux::nullCheck(other__24227)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                        j__24213);
                    
                    //#line 151 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                    x10_long i__15868max__24207 = (((x10_long)(::x10aux::nullCheck(myAtoms__24219)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__24208;
                        for (i__24208 = ((x10_long)0ll); ((i__24208) <= (i__15868max__24207));
                             i__24208 = ((i__24208) + (((x10_long)1ll))))
                        {
                            x10_long i__24209 = i__24208;
                            
                            //#line 152 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            ::au::edu::anu::chem::mm::MMAtom* atomI__24188 =
                              ::x10aux::nullCheck(myAtoms__24219)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                                i__24209);
                            
                            //#line 153 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            ::x10x::vector::Vector3d rVec__24189 =
                              (__extension__ ({
                                ::x10x::vector::Point3d this__24190 =
                                  atomJ__24210->FMGL(centre);
                                
                                //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d that__24191 =
                                  ::x10aux::nullCheck(atomI__24188)->FMGL(centre);
                                (__extension__ ({
                                    
                                    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Point3d b__24192 =
                                      that__24191;
                                    (__extension__ ({
                                        
                                        //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                        ::x10x::vector::Vector3d alloc__24193 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__24179 =
                                          ((this__24190->FMGL(i)) - (b__24192->FMGL(i)));
                                        x10_double j__24180 =
                                          ((this__24190->FMGL(j)) - (b__24192->FMGL(j)));
                                        x10_double k__24181 =
                                          ((this__24190->FMGL(k)) - (b__24192->FMGL(k)));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__24193->FMGL(i) =
                                          i__24179;
                                        alloc__24193->FMGL(j) =
                                          j__24180;
                                        alloc__24193->FMGL(k) =
                                          k__24181;
                                        alloc__24193;
                                    }))
                                    ;
                                }))
                                ;
                            }))
                            ;
                            
                            //#line 154 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            x10_double invR__24194 = ((1.0) / (((((((rVec__24189->FMGL(i)) * (rVec__24189->FMGL(i)))) + (((rVec__24189->FMGL(j)) * (rVec__24189->FMGL(j)))))) + (((rVec__24189->FMGL(k)) * (rVec__24189->FMGL(k)))))));
                            
                            //#line 155 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            x10_double invR__24195 = ::x10::lang::MathNatives::sqrt(invR__24194);
                            
                            //#line 156 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            x10_double e__24196 = ((((::x10aux::nullCheck(atomI__24188)->FMGL(charge)) * (atomJ__24210->FMGL(charge)))) * (invR__24195));
                            
                            //#line 157 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            energyThisPlace__24222 = ((energyThisPlace__24222) + (e__24196));
                            
                            //#line 158 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            ::x10x::vector::Vector3d pairForce__24197 =
                              (__extension__ ({
                                
                                //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double x__24198 = ((e__24196) * (invR__24194));
                                ::x10x::vector::Vector3d y__24199 =
                                  rVec__24189;
                                (__extension__ ({
                                    
                                    //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double that__24200 =
                                      x__24198;
                                    (__extension__ ({
                                        
                                        //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double c__24201 =
                                          that__24200;
                                        (__extension__ ({
                                            
                                            //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d alloc__24202 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__24182 =
                                              ((y__24199->FMGL(i)) * (c__24201));
                                            x10_double j__24183 =
                                              ((y__24199->FMGL(j)) * (c__24201));
                                            x10_double k__24184 =
                                              ((y__24199->FMGL(k)) * (c__24201));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__24202->FMGL(i) =
                                              i__24182;
                                            alloc__24202->FMGL(j) =
                                              j__24183;
                                            alloc__24202->FMGL(k) =
                                              k__24184;
                                            alloc__24202;
                                        }))
                                        ;
                                    }))
                                    ;
                                }))
                                ;
                            }))
                            ;
                            
                            //#line 159 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                            ::x10aux::nullCheck(atomI__24188)->FMGL(force) =
                              (__extension__ ({
                                ::x10x::vector::Vector3d this__24203 =
                                  ::x10aux::nullCheck(atomI__24188)->FMGL(force);
                                
                                //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d that__24204 =
                                  pairForce__24197;
                                (__extension__ ({
                                    
                                    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d b__24205 =
                                      that__24204;
                                    (__extension__ ({
                                        
                                        //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        ::x10x::vector::Vector3d alloc__24206 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__24185 =
                                          ((this__24203->FMGL(i)) + (b__24205->FMGL(i)));
                                        x10_double j__24186 =
                                          ((this__24203->FMGL(j)) + (b__24205->FMGL(j)));
                                        x10_double k__24187 =
                                          ((this__24203->FMGL(k)) + (b__24205->FMGL(k)));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__24206->FMGL(i) =
                                          i__24185;
                                        alloc__24206->FMGL(j) =
                                          j__24186;
                                        alloc__24206->FMGL(k) =
                                          k__24187;
                                        alloc__24206;
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
            
            //#line 162 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            target__24224 = ::x10::lang::Place::places()->next(
                              target__24224);
            
            //#line 163 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            source__24225 = ::x10::lang::Place::places()->prev(
                              source__24225);
        }
        
        //#line 166 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(energyThisPlace__24222);
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    x10_long p__24218;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atoms);
        buf.write(this->p__24218);
        buf.write(this->otherAtoms);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        x10_long that_p__24218 = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* that_otherAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>();
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3(that_atoms, that_p__24218, that_otherAtoms);
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, x10_long p__24218, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms) : atoms(atoms), p__24218(p__24218), otherAtoms(otherAtoms) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:75-167";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* t__24277;
            for (t__24277 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__24277));
                 ) {
                ::x10::lang::Point* t__24217 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__24277));
                x10_long p__24218 = ::x10aux::nullCheck(t__24217)->x10::lang::Point::__apply(
                                      ((x10_long)(((x10_int)0))));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3(atoms, p__24218, otherAtoms))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atoms);
        buf.write(this->otherAtoms);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* that_otherAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2(that_atoms, that_otherAtoms, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms, ::x10::regionarray::Dist* __lowerer__var__0__) : atoms(atoms), otherAtoms(otherAtoms), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:75-167";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        try {
            
            //#line 224 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* atomsHere =
              ::x10aux::nullCheck(saved_this->FMGL(atoms))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
                p1);
            
            //#line 225 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            x10_long i__15992max__24230 = (((x10_long)(::x10aux::nullCheck(atomsHere)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__24231;
                for (i__24231 = ((x10_long)0ll); ((i__24231) <= (i__15992max__24230));
                     i__24231 = ((i__24231) + (((x10_long)1ll))))
                {
                    x10_long i__24232 = i__24231;
                    
                    //#line 226 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                    ::au::edu::anu::chem::mm::MMAtom* atom__24228 =
                      ::x10aux::nullCheck(atomsHere)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                        i__24232);
                    
                    //#line 227 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10aux::nullCheck(atom__24228)->FMGL(species), (&::au::edu::anu::chem::mm::ElectrostaticDirectMethod_Strings::sl__32583)), ::x10aux::nullCheck(atom__24228)->FMGL(force)), (&::au::edu::anu::chem::mm::ElectrostaticDirectMethod_Strings::sl__32584)), (__extension__ ({
                          ::x10x::vector::Vector3d this__24229 =
                            ::x10aux::nullCheck(atom__24228)->FMGL(force);
                          ::x10::lang::MathNatives::sqrt(((((((this__24229->FMGL(i)) * (this__24229->FMGL(i)))) + (((this__24229->FMGL(j)) * (this__24229->FMGL(j)))))) + (((this__24229->FMGL(k)) * (this__24229->FMGL(k))))));
                      }))
                      )));
                }
            }
            
        }
        catch (::x10::lang::CheckedThrowable* __exc104) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc104;
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            }
        }
    }
    
    // captured environment
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* saved_this;
    ::x10::lang::Point* p1;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->p1);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7>();
        buf.record_reference(storage);
        ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* that_saved_this = buf.read< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod*>();
        ::x10::lang::Point* that_p1 = buf.read< ::x10::lang::Point*>();
        au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7* this_ = new (storage) au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7(that_saved_this, that_p1);
        return this_;
    }
    
    au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7(::au::edu::anu::chem::mm::ElectrostaticDirectMethod* saved_this, ::x10::lang::Point* p1) : saved_this(saved_this), p1(p1) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10:223-229";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_ELECTROSTATICDIRECTMETHOD__CLOSURE__7_CLOSURE

//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
/** A multi-timer for the several segments of a single getEnergy invocation, indexed by the constants above. */

//#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
/** The charges in the simulation, divided into separate Rails for each place. */

//#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"

//#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
void au::edu::anu::chem::mm::ElectrostaticDirectMethod::_constructor(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms) {
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* this__24139 = this;
    ::x10aux::nullCheck(this__24139)->FMGL(timer) = (__extension__ ({
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::au::edu::anu::util::Timer* alloc__24138 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__24138)->::au::edu::anu::util::Timer::_constructor(((x10_long)1ll));
        alloc__24138;
    }))
    ;
    ::x10aux::nullCheck(this__24139)->FMGL(asyncComms) = true;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    this->FMGL(atoms) = atoms;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    this->FMGL(otherAtoms) = (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__22622 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__18717 =  (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__18717)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__18717;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* alloc__22624 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >()) ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>());
            (alloc__22624)->::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::_constructor(
              dist__22622, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1())));
            alloc__22624;
        }))
        ;
    }))
    ;
}
::au::edu::anu::chem::mm::ElectrostaticDirectMethod* au::edu::anu::chem::mm::ElectrostaticDirectMethod::_make(
  ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms)
{
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod>()) ::au::edu::anu::chem::mm::ElectrostaticDirectMethod();
    this_->_constructor(atoms);
    return this_;
}



//#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
x10_double au::edu::anu::chem::mm::ElectrostaticDirectMethod::expectationValue(
  ::x10::lang::Fun_0_2< ::au::edu::anu::chem::mm::MMAtom*, ::au::edu::anu::chem::mm::MMAtom*, x10_double>* twoParticleFunction) {
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    x10_double total = 0.0;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* a =
      ::x10aux::nullCheck(this->FMGL(atoms))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
        ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    x10_long i__15814max__24143 = (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__24144;
        for (i__24144 = ((x10_long)0ll); ((i__24144) <= (i__15814max__24143));
             i__24144 = ((i__24144) + (((x10_long)1ll))))
        {
            x10_long i__24145 = i__24144;
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
            x10_long i__15796max__24140 = (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__24141;
                for (i__24141 = ((x10_long)0ll); ((i__24141) <= (i__15796max__24140));
                     i__24141 = ((i__24141) + (((x10_long)1ll))))
                {
                    x10_long j__24142 = i__24141;
                    
                    //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                    if ((!::x10aux::struct_equals(i__24145,
                                                  j__24142)))
                    {
                        
                        //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                        total = ((total) + (::x10::lang::Fun_0_2< ::au::edu::anu::chem::mm::MMAtom*, ::au::edu::anu::chem::mm::MMAtom*, x10_double>::__apply(::x10aux::nullCheck(twoParticleFunction), 
                          ::x10aux::nullCheck(a)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                            i__24145), ::x10aux::nullCheck(a)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                                         j__24142))));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    x10_long N = (x10_long)(::x10aux::nullCheck(a)->FMGL(size));
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    return ((total) / (((x10_double) (((N) * (((N) - (((x10_long)1ll)))))))));
    
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
x10_double au::edu::anu::chem::mm::ElectrostaticDirectMethod::getEnergy(
  ) {
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)0ll));
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    x10_double directEnergy;
    {
        ::x10::lang::FinishState* fs__24294 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer alloc__15790 =
                                                                                                                 
                                                                                                               ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_alloc();
                                                                                                               alloc__15790;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                
                //#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
                  this->FMGL(atoms);
                
                //#line 72 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>* otherAtoms =
                  this->FMGL(otherAtoms);
                {
                    
                    //#line 75 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(atoms)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____24292;
                        for (__lowerer__var__1____24292 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____24292));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____24292));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2(atoms, otherAtoms, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc102) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc102;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        directEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                         fs__24294);
    }
    
    //#line 218 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)0ll));
    
    //#line 219 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    return ((0.5) * (directEnergy));
    
}

//#line 222 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
void au::edu::anu::chem::mm::ElectrostaticDirectMethod::printForces(
  ) {
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p1__16010;
        for (p1__16010 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(atoms))->FMGL(dist))->FMGL(region))->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p1__16010));
             ) {
            ::x10::lang::Point* p1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p1__16010));
            {
                ::x10::lang::Runtime::runAt(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(atoms))->FMGL(dist))->__apply(
                                              p1), reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7)))au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7(this, p1))),
                                            ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
    }
    
}

//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
::au::edu::anu::chem::mm::ElectrostaticDirectMethod* au::edu::anu::chem::mm::ElectrostaticDirectMethod::au__edu__anu__chem__mm__ElectrostaticDirectMethod____this__au__edu__anu__chem__mm__ElectrostaticDirectMethod(
  ) {
    return this;
    
}
void au::edu::anu::chem::mm::ElectrostaticDirectMethod::__fieldInitializers_au_edu_anu_chem_mm_ElectrostaticDirectMethod(
  ) {
    this->FMGL(timer) = (__extension__ ({
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
        ::au::edu::anu::util::Timer* alloc__15794 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__15794)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)1ll));
        alloc__15794;
    }))
    ;
    this->FMGL(asyncComms) = true;
}
const ::x10aux::serialization_id_t au::edu::anu::chem::mm::ElectrostaticDirectMethod::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::mm::ElectrostaticDirectMethod::_deserializer);

void au::edu::anu::chem::mm::ElectrostaticDirectMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(timer));
    buf.write(this->FMGL(asyncComms));
    buf.write(this->FMGL(atoms));
    buf.write(this->FMGL(otherAtoms));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::mm::ElectrostaticDirectMethod::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod>()) ::au::edu::anu::chem::mm::ElectrostaticDirectMethod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::mm::ElectrostaticDirectMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(timer) = buf.read< ::au::edu::anu::util::Timer*>();
    FMGL(asyncComms) = buf.read<x10_boolean>();
    FMGL(atoms) = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
    FMGL(otherAtoms) = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>();
}

::x10aux::RuntimeType au::edu::anu::chem::mm::ElectrostaticDirectMethod::rtt;
void au::edu::anu::chem::mm::ElectrostaticDirectMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.mm.ElectrostaticDirectMethod",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::chem::mm::ElectrostaticDirectMethod_Strings::sl__32584(" magnitude ");
::x10::lang::String au::edu::anu::chem::mm::ElectrostaticDirectMethod_Strings::sl__32583(" force = ");

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__1::_deserialize);

::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge>::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::PointCharge> >, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__4::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7>au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::__apply, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_ElectrostaticDirectMethod__closure__7::_deserialize);

/* END of ElectrostaticDirectMethod */
/*************************************************/
/*************************************************/
/* START of ElectrostaticDirectMethod$SumReducer */
#include <au/edu/anu/chem/mm/ElectrostaticDirectMethod__SumReducer.h>

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
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class ElectrostaticDirectMethod__SumReducer_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer> {
public:
    static ::x10::lang::Any::itable< ElectrostaticDirectMethod__SumReducer_ibox0 > itable;
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
::x10::lang::Any::itable< ElectrostaticDirectMethod__SumReducer_ibox0 >  ElectrostaticDirectMethod__SumReducer_ibox0::itable(&ElectrostaticDirectMethod__SumReducer_ibox0::equals, &ElectrostaticDirectMethod__SumReducer_ibox0::hashCode, &ElectrostaticDirectMethod__SumReducer_ibox0::toString, &ElectrostaticDirectMethod__SumReducer_ibox0::typeName);
} } } } } 
::x10::lang::Any::itable< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer >  au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_itable_0(&au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::equals, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::hashCode, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::toString, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::typeName);
namespace au { namespace edu { namespace anu { namespace chem { namespace mm { 
class ElectrostaticDirectMethod__SumReducer_ibox1 : public ::x10::lang::IBox< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer> {
public:
    static ::x10::lang::Reducible<x10_double>::itable< ElectrostaticDirectMethod__SumReducer_ibox1 > itable;
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
::x10::lang::Reducible<x10_double>::itable< ElectrostaticDirectMethod__SumReducer_ibox1 >  ElectrostaticDirectMethod__SumReducer_ibox1::itable(&ElectrostaticDirectMethod__SumReducer_ibox1::equals, &ElectrostaticDirectMethod__SumReducer_ibox1::hashCode, &ElectrostaticDirectMethod__SumReducer_ibox1::__apply, &ElectrostaticDirectMethod__SumReducer_ibox1::toString, &ElectrostaticDirectMethod__SumReducer_ibox1::typeName, &ElectrostaticDirectMethod__SumReducer_ibox1::zero);
} } } } } 
::x10::lang::Reducible<x10_double>::itable< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer >  au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_itable_1(&au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::equals, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::hashCode, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::__apply, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::toString, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::typeName, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::zero);
::x10aux::itable_entry au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer")};
::x10aux::itable_entry au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >, &au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer")};

//#line 233 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"

//#line 234 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
x10_double au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::__apply(
  x10_double a, x10_double b) {
    return ((a) + (b));
    
}

//#line 232 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/ElectrostaticDirectMethod.x10"
::x10::lang::String* au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::toString(
  ) {
    return (&::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer_Strings::sl__32602);
    
}
x10_boolean au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer this__24233 =
      (*this);
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer other__24234 =
      ::x10aux::class_cast< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer>(other);
    return true;
    
}
x10_boolean au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer>(other)))
    {
        return false;
        
    }
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer this__24235 =
      (*this);
    ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer other__24236 =
      ::x10aux::class_cast< ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer>(other);
    return true;
    
}

void ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_serialize(::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::rtt;
void au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<x10_double> >()};
    rtt.initStageTwo("au.edu.anu.chem.mm.ElectrostaticDirectMethod.SumReducer",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::chem::mm::ElectrostaticDirectMethod__SumReducer_Strings::sl__32602("struct au.edu.anu.chem.mm.ElectrostaticDirectMethod.SumReducer");

/* END of ElectrostaticDirectMethod$SumReducer */
/*************************************************/
