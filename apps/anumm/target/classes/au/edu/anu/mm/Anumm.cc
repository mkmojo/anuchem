/*************************************************/
/* START of Anumm */
#include <au/edu/anu/mm/Anumm.h>

#include <x10/lang/Boolean.h>
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <au/edu/anu/mm/ForceField.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/VoidFun_0_0.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/lang/Int.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/regionarray/Dist.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <x10x/vector/Vector3d.h>
#include <x10/compiler/AsyncClosure.h>
#include <au/edu/anu/mm/uff/UniversalForceField.h>
#include <au/edu/anu/mm/SpeciesSpec.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/mm/XYZStructureFileReader.h>
#include <x10/io/IOException.h>
#include <au/edu/anu/mm/MOLStructureFileReader.h>
#include <x10/util/ArrayList.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Anumm__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        try {
            
            //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms =
              ::x10aux::nullCheck(saved_this->FMGL(atoms))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
                ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
            
            //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            x10_long i__3756max__17071 = (((x10_long)(::x10aux::nullCheck(myAtoms)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__17072;
                for (i__17072 = ((x10_long)0ll); ((i__17072) <= (i__3756max__17071));
                     i__17072 = ((i__17072) + (((x10_long)1ll))))
                {
                    x10_long i__17073 = i__17072;
                    
                    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                    ::au::edu::anu::chem::mm::MMAtom* atom__17070 =
                      ::x10aux::nullCheck(myAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                        i__17073);
                    
                    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10aux::nullCheck(atom__17070)->FMGL(species), (&::au::edu::anu::mm::Anumm_Strings::sl__20036)), ::x10aux::nullCheck(atom__17070)->FMGL(centre)->FMGL(i)), (&::au::edu::anu::mm::Anumm_Strings::sl__20036)), ::x10aux::nullCheck(atom__17070)->FMGL(centre)->FMGL(j)), (&::au::edu::anu::mm::Anumm_Strings::sl__20036)), ::x10aux::nullCheck(atom__17070)->FMGL(centre)->FMGL(k)), (&::au::edu::anu::mm::Anumm_Strings::sl__20036))));
                }
            }
            
        }
        catch (::x10::lang::CheckedThrowable* __exc2) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc2;
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            }
        }
    }
    
    // captured environment
    ::au::edu::anu::mm::Anumm* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__1>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Anumm* that_saved_this = buf.read< ::au::edu::anu::mm::Anumm*>();
        au_edu_anu_mm_Anumm__closure__1* this_ = new (storage) au_edu_anu_mm_Anumm__closure__1(that_saved_this);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__1(::au::edu::anu::mm::Anumm* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:72-79";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Anumm__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms =
          ::x10aux::nullCheck(saved_this->FMGL(atoms))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p);
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        x10_long i__3776max__17105 = (((x10_long)(::x10aux::nullCheck(myAtoms)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__17106;
            for (i__17106 = ((x10_long)0ll); ((i__17106) <= (i__3776max__17105));
                 i__17106 = ((i__17106) + (((x10_long)1ll))))
            {
                x10_long i__17107 = i__17106;
                
                //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                ::au::edu::anu::chem::mm::MMAtom* atom__17086 =
                  ::x10aux::nullCheck(myAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                    i__17107);
                
                //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                x10_double invMass__17087 = ((1.0) / (::au::edu::anu::mm::ForceField::getAtomMass(::x10aux::nullCheck(saved_this->FMGL(forceField)), 
                                                        ::x10aux::nullCheck(atom__17086)->FMGL(species))));
                
                //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                ::x10aux::nullCheck(atom__17086)->FMGL(velocity) =
                  (__extension__ ({
                    ::x10x::vector::Vector3d this__17088 =
                      ::x10aux::nullCheck(atom__17086)->FMGL(velocity);
                    
                    //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    ::x10x::vector::Vector3d that__17089 =
                      (__extension__ ({
                        
                        //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double x__17090 = ((((0.5) * (t))) * (invMass__17087));
                        ::x10x::vector::Vector3d y__17091 =
                          ::x10aux::nullCheck(atom__17086)->FMGL(force);
                        (__extension__ ({
                            
                            //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double that__17092 = x__17090;
                            (__extension__ ({
                                
                                //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double c__17093 = that__17092;
                                (__extension__ ({
                                    
                                    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d alloc__17094 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__17074 =
                                      ((y__17091->FMGL(i)) * (c__17093));
                                    x10_double j__17075 =
                                      ((y__17091->FMGL(j)) * (c__17093));
                                    x10_double k__17076 =
                                      ((y__17091->FMGL(k)) * (c__17093));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__17094->FMGL(i) =
                                      i__17074;
                                    alloc__17094->FMGL(j) =
                                      j__17075;
                                    alloc__17094->FMGL(k) =
                                      k__17076;
                                    alloc__17094;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    (__extension__ ({
                        
                        //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d b__17095 =
                          that__17089;
                        (__extension__ ({
                            
                            //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d alloc__17096 =
                               ::x10x::vector::Vector3d::_alloc();
                            
                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double i__17077 = ((this__17088->FMGL(i)) + (b__17095->FMGL(i)));
                            x10_double j__17078 = ((this__17088->FMGL(j)) + (b__17095->FMGL(j)));
                            x10_double k__17079 = ((this__17088->FMGL(k)) + (b__17095->FMGL(k)));
                            
                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            alloc__17096->FMGL(i) = i__17077;
                            alloc__17096->FMGL(j) = j__17078;
                            alloc__17096->FMGL(k) = k__17079;
                            alloc__17096;
                        }))
                        ;
                    }))
                    ;
                }))
                ;
                
                //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                ::x10aux::nullCheck(atom__17086)->FMGL(centre) =
                  (__extension__ ({
                    ::x10x::vector::Point3d this__17097 =
                      ::x10aux::nullCheck(atom__17086)->FMGL(centre);
                    
                    //#line 31 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Vector3d that__17098 =
                      (__extension__ ({
                        
                        //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                        ::x10x::vector::Vector3d this__17099 =
                          ::x10aux::nullCheck(atom__17086)->FMGL(velocity);
                        
                        //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double that__17100 = t;
                        (__extension__ ({
                            
                            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double c__17101 = that__17100;
                            (__extension__ ({
                                
                                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d alloc__17102 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__17080 = ((this__17099->FMGL(i)) * (c__17101));
                                x10_double j__17081 = ((this__17099->FMGL(j)) * (c__17101));
                                x10_double k__17082 = ((this__17099->FMGL(k)) * (c__17101));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__17102->FMGL(i) = i__17080;
                                alloc__17102->FMGL(j) = j__17081;
                                alloc__17102->FMGL(k) = k__17082;
                                alloc__17102;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    (__extension__ ({
                        
                        //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Vector3d b__17103 =
                          that__17098;
                        (__extension__ ({
                            
                            //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d alloc__17104 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__17083 = ((this__17097->FMGL(i)) + (b__17103->FMGL(i)));
                            x10_double j__17084 = ((this__17097->FMGL(j)) + (b__17103->FMGL(j)));
                            x10_double k__17085 = ((this__17097->FMGL(k)) + (b__17103->FMGL(k)));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            alloc__17104->FMGL(i) = i__17083;
                            alloc__17104->FMGL(j) = j__17084;
                            alloc__17104->FMGL(k) = k__17085;
                            alloc__17104;
                        }))
                        ;
                    }))
                    ;
                }))
                ;
                
                //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                ::x10aux::nullCheck(atom__17086)->FMGL(force) =
                  ::x10x::vector::Vector3d::FMGL(NULL__get)();
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::Anumm* saved_this;
    x10_long p;
    x10_double t;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->p);
        buf.write(this->t);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__3>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Anumm* that_saved_this = buf.read< ::au::edu::anu::mm::Anumm*>();
        x10_long that_p = buf.read<x10_long>();
        x10_double that_t = buf.read<x10_double>();
        au_edu_anu_mm_Anumm__closure__3* this_ = new (storage) au_edu_anu_mm_Anumm__closure__3(that_saved_this, that_p, that_t);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__3(::au::edu::anu::mm::Anumm* saved_this, x10_long p, x10_double t) : saved_this(saved_this), p(p), t(t) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:90-100";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Anumm__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* t__17169;
            for (t__17169 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__17169));
                 ) {
                ::x10::lang::Point* t__0 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__17169));
                x10_long p = ::x10aux::nullCheck(t__0)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)0))));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Anumm__closure__3)))au_edu_anu_mm_Anumm__closure__3(saved_this, p, t))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::Anumm* saved_this;
    x10_double t;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->t);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Anumm* that_saved_this = buf.read< ::au::edu::anu::mm::Anumm*>();
        x10_double that_t = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_Anumm__closure__2* this_ = new (storage) au_edu_anu_mm_Anumm__closure__2(that_saved_this, that_t, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__2(::au::edu::anu::mm::Anumm* saved_this, x10_double t, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), t(t), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:90-100";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Anumm__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* myAtoms =
          ::x10aux::nullCheck(saved_this->FMGL(atoms))->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p);
        
        //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        x10_long i__3794max__17125 = (((x10_long)(::x10aux::nullCheck(myAtoms)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__17126;
            for (i__17126 = ((x10_long)0ll); ((i__17126) <= (i__3794max__17125));
                 i__17126 = ((i__17126) + (((x10_long)1ll))))
            {
                x10_long i__17127 = i__17126;
                
                //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                ::au::edu::anu::chem::mm::MMAtom* atom__17114 =
                  ::x10aux::nullCheck(myAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                    i__17127);
                
                //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                x10_double invMass__17115 = ((1.0) / (::au::edu::anu::mm::ForceField::getAtomMass(::x10aux::nullCheck(saved_this->FMGL(forceField)), 
                                                        ::x10aux::nullCheck(atom__17114)->FMGL(species))));
                
                //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                ::x10aux::nullCheck(atom__17114)->FMGL(velocity) =
                  (__extension__ ({
                    ::x10x::vector::Vector3d this__17116 =
                      ::x10aux::nullCheck(atom__17114)->FMGL(velocity);
                    
                    //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    ::x10x::vector::Vector3d that__17117 =
                      (__extension__ ({
                        
                        //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        x10_double x__17118 = ((((0.5) * (t))) * (invMass__17115));
                        ::x10x::vector::Vector3d y__17119 =
                          ::x10aux::nullCheck(atom__17114)->FMGL(force);
                        (__extension__ ({
                            
                            //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double that__17120 = x__17118;
                            (__extension__ ({
                                
                                //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double c__17121 = that__17120;
                                (__extension__ ({
                                    
                                    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d alloc__17122 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__17108 =
                                      ((y__17119->FMGL(i)) * (c__17121));
                                    x10_double j__17109 =
                                      ((y__17119->FMGL(j)) * (c__17121));
                                    x10_double k__17110 =
                                      ((y__17119->FMGL(k)) * (c__17121));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__17122->FMGL(i) =
                                      i__17108;
                                    alloc__17122->FMGL(j) =
                                      j__17109;
                                    alloc__17122->FMGL(k) =
                                      k__17110;
                                    alloc__17122;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    (__extension__ ({
                        
                        //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d b__17123 =
                          that__17117;
                        (__extension__ ({
                            
                            //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d alloc__17124 =
                               ::x10x::vector::Vector3d::_alloc();
                            
                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double i__17111 = ((this__17116->FMGL(i)) + (b__17123->FMGL(i)));
                            x10_double j__17112 = ((this__17116->FMGL(j)) + (b__17123->FMGL(j)));
                            x10_double k__17113 = ((this__17116->FMGL(k)) + (b__17123->FMGL(k)));
                            
                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            alloc__17124->FMGL(i) = i__17111;
                            alloc__17124->FMGL(j) = j__17112;
                            alloc__17124->FMGL(k) = k__17113;
                            alloc__17124;
                        }))
                        ;
                    }))
                    ;
                }))
                ;
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::Anumm* saved_this;
    x10_long p;
    x10_double t;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->p);
        buf.write(this->t);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__5>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Anumm* that_saved_this = buf.read< ::au::edu::anu::mm::Anumm*>();
        x10_long that_p = buf.read<x10_long>();
        x10_double that_t = buf.read<x10_double>();
        au_edu_anu_mm_Anumm__closure__5* this_ = new (storage) au_edu_anu_mm_Anumm__closure__5(that_saved_this, that_p, that_t);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__5(::au::edu::anu::mm::Anumm* saved_this, x10_long p, x10_double t) : saved_this(saved_this), p(p), t(t) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:102-110";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Anumm__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* t__17210;
            for (t__17210 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__17210));
                 ) {
                ::x10::lang::Point* t__1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__17210));
                x10_long p = ::x10aux::nullCheck(t__1)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)0))));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Anumm__closure__5)))au_edu_anu_mm_Anumm__closure__5(saved_this, p, t))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::mm::Anumm* saved_this;
    x10_double t;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->t);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__4>();
        buf.record_reference(storage);
        ::au::edu::anu::mm::Anumm* that_saved_this = buf.read< ::au::edu::anu::mm::Anumm*>();
        x10_double that_t = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_mm_Anumm__closure__4* this_ = new (storage) au_edu_anu_mm_Anumm__closure__4(that_saved_this, that_t, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__4(::au::edu::anu::mm::Anumm* saved_this, x10_double t, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), t(t), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:102-110";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_mm_Anumm__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::itable<au_edu_anu_mm_Anumm__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* __apply(::x10::lang::Point* id__2){
        
        //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__17130 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
        (alloc__17130)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor();
        return alloc__17130;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__6>();
        buf.record_reference(storage);
        au_edu_anu_mm_Anumm__closure__6* this_ = new (storage) au_edu_anu_mm_Anumm__closure__6();
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:169";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_mm_Anumm__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::au::edu::anu::chem::mm::MMAtom* remoteAtom =  (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
        (remoteAtom)->::au::edu::anu::chem::mm::MMAtom::_constructor(atom);
        {
            
            //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            ::x10::lang::CheckedThrowable* throwable__17237 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(tempAtoms->x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::__apply(
                                              ((x10_long)(p))))->add(
                          remoteAtom);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc11) {
                {
                    ::x10::lang::CheckedThrowable* formal__17238 =
                      __exc11;
                    {
                        throwable__17237 = formal__17238;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__17237, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__17237))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__17237));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__17237,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__17237)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__17237));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::au::edu::anu::chem::mm::MMAtom* atom;
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms;
    x10_int p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atom);
        buf.write(this->tempAtoms);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__7>();
        buf.record_reference(storage);
        ::au::edu::anu::chem::mm::MMAtom* that_atom = buf.read< ::au::edu::anu::chem::mm::MMAtom*>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* that_tempAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>*>();
        x10_int that_p = buf.read<x10_int>();
        au_edu_anu_mm_Anumm__closure__7* this_ = new (storage) au_edu_anu_mm_Anumm__closure__7(that_atom, that_tempAtoms, that_p);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__7(::au::edu::anu::chem::mm::MMAtom* atom, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms, x10_int p) : atom(atom), tempAtoms(tempAtoms), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:176-179";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__7_CLOSURE
#ifndef AU_EDU_ANU_MM_ANUMM__CLOSURE__8_CLOSURE
#define AU_EDU_ANU_MM_ANUMM__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_mm_Anumm__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::itable<au_edu_anu_mm_Anumm__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* __apply(::x10::lang::Point* t__3){
        
        //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        x10_long p = ::x10aux::nullCheck(t__3)->x10::lang::Point::__apply(
                       ((x10_long)(((x10_int)0))));
        return ::x10aux::nullCheck(tempAtoms->x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::__apply(
                                     p))->toRail();
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->tempAtoms);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_mm_Anumm__closure__8* storage = ::x10aux::alloc_z<au_edu_anu_mm_Anumm__closure__8>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* that_tempAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>*>();
        au_edu_anu_mm_Anumm__closure__8* this_ = new (storage) au_edu_anu_mm_Anumm__closure__8(that_tempAtoms);
        return this_;
    }
    
    au_edu_anu_mm_Anumm__closure__8(::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms) : tempAtoms(tempAtoms) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10:181";
    }

};

#endif // AU_EDU_ANU_MM_ANUMM__CLOSURE__8_CLOSURE

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
/** The atoms in the simulation, divided up into a distributed array of Arrays, one for each place. */

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
/** The force field applied to the atoms in this simulation. */

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
void au::edu::anu::mm::Anumm::_constructor(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                                           ::au::edu::anu::mm::ForceField* forceField,
                                           x10_boolean verbose) {
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::mm::Anumm* this__17069 = this;
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    this->FMGL(atoms) = atoms;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    this->FMGL(forceField) = forceField;
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    this->FMGL(verbose) = verbose;
}
::au::edu::anu::mm::Anumm* au::edu::anu::mm::Anumm::_make(
  ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
  ::au::edu::anu::mm::ForceField* forceField, x10_boolean verbose)
{
    ::au::edu::anu::mm::Anumm* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Anumm>()) ::au::edu::anu::mm::Anumm();
    this_->_constructor(atoms, forceField, verbose);
    return this_;
}



//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
  au::edu::anu::mm::Anumm::getAtoms() {
    return this->FMGL(atoms);
    
}

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
void au::edu::anu::mm::Anumm::mdRun(x10_double timestep, x10_long numSteps) {
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::Anumm_Strings::sl__20032), timestep), (&::au::edu::anu::mm::Anumm_Strings::sl__20033)), numSteps)));
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    x10_long step = ((x10_long)0ll);
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    if (this->FMGL(verbose)) {
        
        //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::mm::Anumm_Strings::sl__20034),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(0.0));
    }
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::mm::ForceField::getPotentialAndForces(::x10aux::nullCheck(this->FMGL(forceField)), 
      this->FMGL(atoms));
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    while (((step) < (numSteps))) {
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        step = ((step) + (((x10_long)1ll)));
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        if (this->FMGL(verbose)) {
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::mm::Anumm_Strings::sl__20034),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (step))) * (timestep))));
        }
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        this->mdStep(timestep);
    }
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    if (this->FMGL(verbose)) {
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::mm::Anumm_Strings::sl__20035)));
        {
            
            //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__17137 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* place__3774;
                        for (place__3774 = ::x10::lang::Place::places()->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(place__3774));
                             ) {
                            ::x10::lang::Place place = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(place__3774));
                            {
                                ::x10::lang::Runtime::runAt(
                                  place, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Anumm__closure__1)))au_edu_anu_mm_Anumm__closure__1(this))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc3) {
                {
                    ::x10::lang::CheckedThrowable* ct__17135 =
                      __exc3;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__17135);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__17137);
        }
    }
    
}

//#line 88 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
void au::edu::anu::mm::Anumm::mdStep(x10_double timestep) {
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    x10_double t = ((timestep) * (0.001));
    {
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__17187 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(this->FMGL(atoms))->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____17184;
                        for (__lowerer__var__1____17184 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____17184));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____17184));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Anumm__closure__2)))au_edu_anu_mm_Anumm__closure__2(this, t, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc5) {
            {
                ::x10::lang::CheckedThrowable* ct__17185 =
                  __exc5;
                {
                    ::x10::lang::Runtime::pushException(ct__17185);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__17187);
    }
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::mm::ForceField::getPotentialAndForces(::x10aux::nullCheck(this->FMGL(forceField)), 
      this->FMGL(atoms));
    {
        
        //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__17228 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(this->FMGL(atoms))->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____17225;
                        for (__lowerer__var__1____17225 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____17225));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____17225));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Anumm__closure__4)))au_edu_anu_mm_Anumm__closure__4(this, t, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            {
                ::x10::lang::CheckedThrowable* ct__17226 =
                  __exc6;
                {
                    ::x10::lang::Runtime::pushException(ct__17226);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__17228);
    }
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
void au::edu::anu::mm::Anumm::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::lang::String* structureFileName = ::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    x10_double timestep = 0.2;
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    x10_int numSteps = ((x10_int)200);
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)0ll))))
    {
        
        //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        structureFileName = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                              ((x10_long)0ll));
        
        //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)1ll))))
        {
            
            //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            timestep = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                 ((x10_long)1ll)));
            
            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)2ll))))
            {
                
                //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                numSteps = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                               ((x10_long)2ll)));
            }
            
        }
        
    } else {
        
        //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::mm::Anumm_Strings::sl__20037)));
        
        //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        return;
    }
    
    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::mm::uff::UniversalForceField* uff =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::uff::UniversalForceField>()) ::au::edu::anu::mm::uff::UniversalForceField());
    (uff)->::au::edu::anu::mm::uff::UniversalForceField::_constructor();
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* dummySpeciesList =
      uff->getSpecies();
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* moleculeTemp =
      ::x10aux::class_cast_unchecked< ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
    //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    if (((((x10_long)(::x10aux::nullCheck(structureFileName)->x10::lang::String::length()))) > (((x10_long)4ll))))
    {
        
        //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::lang::String* fileExtension = ::x10aux::nullCheck(structureFileName)->x10::lang::String::substring(
                                               ((::x10aux::nullCheck(structureFileName)->x10::lang::String::length()) - (((x10_int)4))),
                                               ::x10aux::nullCheck(structureFileName)->x10::lang::String::length());
        
        //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        if (::x10aux::equals(fileExtension,(&::au::edu::anu::mm::Anumm_Strings::sl__20038)))
        {
            
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            try {
                
                //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                moleculeTemp = (__extension__ ({
                                   ::au::edu::anu::mm::XYZStructureFileReader* alloc__3751 =
                                      (new (::x10aux::alloc_z< ::au::edu::anu::mm::XYZStructureFileReader>()) ::au::edu::anu::mm::XYZStructureFileReader());
                                   
                                   //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                                   ::x10::lang::String* fileName__17128 =
                                     structureFileName;
                                   
                                   //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                                   alloc__3751->FMGL(fileName) =
                                     (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                   
                                   //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                                   alloc__3751->FMGL(fileName) =
                                     fileName__17128;
                                   alloc__3751;
                               }))
                               ->readMolecule(dummySpeciesList);
            }
            catch (::x10::lang::CheckedThrowable* __exc8) {
                if (::x10aux::instanceof< ::x10::io::IOException*>(__exc8)) {
                    ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc8);
                    {
                        
                        //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
                    }
                } else {
                    throw;
                }
            }
        } else 
        //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        if ((::x10aux::equals(fileExtension,(&::au::edu::anu::mm::Anumm_Strings::sl__20039)) ||
            ::x10aux::equals(fileExtension,(&::au::edu::anu::mm::Anumm_Strings::sl__20040))))
        {
            
            //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
            try {
                
                //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                moleculeTemp = (__extension__ ({
                                   ::au::edu::anu::mm::MOLStructureFileReader* alloc__3752 =
                                      (new (::x10aux::alloc_z< ::au::edu::anu::mm::MOLStructureFileReader>()) ::au::edu::anu::mm::MOLStructureFileReader());
                                   
                                   //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                                   ::x10::lang::String* fileName__17129 =
                                     structureFileName;
                                   
                                   //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                                   alloc__3752->FMGL(fileName) =
                                     (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                   
                                   //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                                   alloc__3752->FMGL(fileName) =
                                     fileName__17129;
                                   alloc__3752;
                               }))
                               ->readMolecule(dummySpeciesList);
            }
            catch (::x10::lang::CheckedThrowable* __exc9) {
                if (::x10aux::instanceof< ::x10::io::IOException*>(__exc9)) {
                    ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc9);
                    {
                        
                        //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
                    }
                } else {
                    throw;
                }
            }
        }
        
    }
    
    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    if ((::x10aux::struct_equals(moleculeTemp, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::mm::Anumm_Strings::sl__20041), structureFileName)));
        
        //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        return;
    }
    
    //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule =
      moleculeTemp;
    
    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::Anumm_Strings::sl__20042), ::x10aux::nullCheck(molecule)->getName()), (&::au::edu::anu::mm::Anumm_Strings::sl__20043)), ::x10aux::nullCheck(molecule)->getAtoms()->size()), (&::au::edu::anu::mm::Anumm_Strings::sl__20044))));
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::au::edu::anu::mm::Anumm* anumm =  (new (::x10aux::alloc_z< ::au::edu::anu::mm::Anumm>()) ::au::edu::anu::mm::Anumm());
    (anumm)->::au::edu::anu::mm::Anumm::_constructor(::au::edu::anu::mm::Anumm::assignAtoms(
                                                       molecule),
                                                     reinterpret_cast< ::au::edu::anu::mm::ForceField*>(uff),
                                                     true);
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    anumm->mdRun(timestep, ((x10_long)(numSteps)));
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::Anumm_Strings::sl__20045), numSteps), (&::au::edu::anu::mm::Anumm_Strings::sl__20046))));
    
    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    return;
}

//#line 168 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*
  au::edu::anu::mm::Anumm::assignAtoms(::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule) {
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms =
      (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__14444 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__14175 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__14175)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__14175;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* alloc__14446 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >()) ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>());
            (alloc__14446)->::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::_constructor(
              dist__14444, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >(sizeof(au_edu_anu_mm_Anumm__closure__6)))au_edu_anu_mm_Anumm__closure__6())));
            alloc__14446;
        }))
        ;
    }))
    ;
    
    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* atomList =
      ::x10aux::nullCheck(molecule)->getAtoms();
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    x10_double maxExtent = ::x10aux::nullCheck(molecule)->getMaxExtent();
    {
        
        //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__17235 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    x10_long i;
                    for (i = ((x10_long)0ll); ((i) < (atomList->size()));
                         i = ((i) + (((x10_long)1ll)))) {
                        
                        //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                        ::au::edu::anu::chem::mm::MMAtom* atom =
                          atomList->__apply(i);
                        
                        //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                        x10_int p = ::au::edu::anu::mm::Anumm::getPlaceId(
                                      ::x10aux::nullCheck(atom)->FMGL(centre)->FMGL(i),
                                      ::x10aux::nullCheck(atom)->FMGL(centre)->FMGL(j),
                                      ::x10aux::nullCheck(atom)->FMGL(centre)->FMGL(k),
                                      maxExtent);
                        
                        //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
                        ::x10::lang::Runtime::runAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__3754 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__3754)->::x10::lang::Place::_constructor(
                                                             ((x10_long)(p)));
                                                           alloc__3754;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_mm_Anumm__closure__7)))au_edu_anu_mm_Anumm__closure__7(atom, tempAtoms, p))),
                                                       ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            {
                ::x10::lang::CheckedThrowable* ct__17233 =
                  __exc12;
                {
                    ::x10::lang::Runtime::pushException(ct__17233);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__17235);
    }
    
    //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
      (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__17066 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__14877 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__14877)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__14877;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* alloc__17068 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >()) ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>());
            (alloc__17068)->::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::_constructor(
              dist__17066, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >(sizeof(au_edu_anu_mm_Anumm__closure__8)))au_edu_anu_mm_Anumm__closure__8(tempAtoms))));
            alloc__17068;
        }))
        ;
    }))
    ;
    
    //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    return atoms;
    
}

//#line 189 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
x10_int au::edu::anu::mm::Anumm::getPlaceId(x10_double x,
                                            x10_double y,
                                            x10_double z,
                                            x10_double size) {
    
    //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
    return ::x10::lang::DoubleNatives::toInt(((((((x) / (((size) * (((x10_double) (((x10_long)2ll)))))))) + (0.5))) * (((x10_double) (((x10_long)::x10aux::num_hosts))))));
    
}

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/Anumm.x10"
::au::edu::anu::mm::Anumm* au::edu::anu::mm::Anumm::au__edu__anu__mm__Anumm____this__au__edu__anu__mm__Anumm(
  ) {
    return this;
    
}
void au::edu::anu::mm::Anumm::__fieldInitializers_au_edu_anu_mm_Anumm(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::mm::Anumm::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::Anumm::_deserializer);

void au::edu::anu::mm::Anumm::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(atoms));
    buf.write(this->FMGL(forceField));
    buf.write(this->FMGL(verbose));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::Anumm::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::Anumm* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::Anumm>()) ::au::edu::anu::mm::Anumm();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::Anumm::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(atoms) = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
    FMGL(forceField) = buf.read< ::au::edu::anu::mm::ForceField*>();
    FMGL(verbose) = buf.read<x10_boolean>();
}

::x10aux::RuntimeType au::edu::anu::mm::Anumm::rtt;
void au::edu::anu::mm::Anumm::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.Anumm",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20041("error: could not read structure file: ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20039(".mol");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20036(" ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20045("\n# Run completed after ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20042("# MD for ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20040(".sdf");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20035("\n# final positions:");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20034("\n%.3f ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20032("# Timestep = ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20044(" atoms");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20043(": ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20038(".xyz");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20033("fs, number of steps = ");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20037("usage: anumm structureFile [timestep(fs)] [numSteps]");
::x10::lang::String au::edu::anu::mm::Anumm_Strings::sl__20046(" steps");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__1>au_edu_anu_mm_Anumm__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__1::__apply, &au_edu_anu_mm_Anumm__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Anumm__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__3>au_edu_anu_mm_Anumm__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__3::__apply, &au_edu_anu_mm_Anumm__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Anumm__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_Anumm__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__2>au_edu_anu_mm_Anumm__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__2::__apply, &au_edu_anu_mm_Anumm__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Anumm__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_Anumm__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__5>au_edu_anu_mm_Anumm__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__5::__apply, &au_edu_anu_mm_Anumm__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Anumm__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__5::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_Anumm__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__4>au_edu_anu_mm_Anumm__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__4::__apply, &au_edu_anu_mm_Anumm__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Anumm__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_Anumm__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::itable<au_edu_anu_mm_Anumm__closure__6>au_edu_anu_mm_Anumm__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__6::__apply, &au_edu_anu_mm_Anumm__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >, &au_edu_anu_mm_Anumm__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__6::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_mm_Anumm__closure__7>au_edu_anu_mm_Anumm__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__7::__apply, &au_edu_anu_mm_Anumm__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_mm_Anumm__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__7::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_mm_Anumm__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::itable<au_edu_anu_mm_Anumm__closure__8>au_edu_anu_mm_Anumm__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_mm_Anumm__closure__8::__apply, &au_edu_anu_mm_Anumm__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_mm_Anumm__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >, &au_edu_anu_mm_Anumm__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_mm_Anumm__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_mm_Anumm__closure__8::_deserialize);

/* END of Anumm */
/*************************************************/
