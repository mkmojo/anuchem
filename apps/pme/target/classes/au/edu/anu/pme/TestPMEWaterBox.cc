/*************************************************/
/* START of TestPMEWaterBox */
#include <au/edu/anu/pme/TestPMEWaterBox.h>

#include <au/edu/anu/chem/mm/TestElectrostatic.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <au/edu/anu/chem/mm/GromacsStructureFileReader.h>
#include <x10/lang/Zero.h>
#include <x10x/vector/Vector3d.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/lang/Unsafe.h>
#include <x10/util/ArrayList.h>
#include <x10/regionarray/DistArray.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <au/edu/anu/pme/PME_SPMD.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_TestPMEWaterBox__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::itable<au_edu_anu_pme_TestPMEWaterBox__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* __apply(::x10::lang::Point* id__0){
        
        //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* alloc__29944 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>());
        (alloc__29944)->::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>::_constructor();
        return alloc__29944;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_TestPMEWaterBox__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_pme_TestPMEWaterBox__closure__1>();
        buf.record_reference(storage);
        au_edu_anu_pme_TestPMEWaterBox__closure__1* this_ = new (storage) au_edu_anu_pme_TestPMEWaterBox__closure__1();
        return this_;
    }
    
    au_edu_anu_pme_TestPMEWaterBox__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10:89";
    }

};

#endif // AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_TestPMEWaterBox__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_TestPMEWaterBox__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        ::x10aux::nullCheck(atom)->FMGL(centre) = (__extension__ ({
            ::x10x::vector::Point3d alloc__13352 =  ::x10x::vector::Point3d::_alloc();
            
            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double i__29945 = x;
            x10_double j__29946 = y;
            x10_double k__29947 = z;
            
            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            alloc__13352->FMGL(i) = i__29945;
            alloc__13352->FMGL(j) = j__29946;
            alloc__13352->FMGL(k) = k__29947;
            alloc__13352;
        }))
        ;
        {
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
            ::x10::lang::CheckedThrowable* throwable__29960 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(tempAtoms->x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::__apply(
                                              p))->add(atom);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc4) {
                {
                    ::x10::lang::CheckedThrowable* formal__29961 =
                      __exc4;
                    {
                        throwable__29960 = formal__29961;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__29960, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__29960))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__29960));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__29960,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__29960)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__29960));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::au::edu::anu::chem::mm::MMAtom* atom;
    x10_double x;
    x10_double y;
    x10_double z;
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms;
    x10_long p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atom);
        buf.write(this->x);
        buf.write(this->y);
        buf.write(this->z);
        buf.write(this->tempAtoms);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_TestPMEWaterBox__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_pme_TestPMEWaterBox__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::chem::mm::MMAtom* that_atom = buf.read< ::au::edu::anu::chem::mm::MMAtom*>();
        x10_double that_x = buf.read<x10_double>();
        x10_double that_y = buf.read<x10_double>();
        x10_double that_z = buf.read<x10_double>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* that_tempAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>*>();
        x10_long that_p = buf.read<x10_long>();
        au_edu_anu_pme_TestPMEWaterBox__closure__2* this_ = new (storage) au_edu_anu_pme_TestPMEWaterBox__closure__2(that_atom, that_x, that_y, that_z, that_tempAtoms, that_p);
        return this_;
    }
    
    au_edu_anu_pme_TestPMEWaterBox__closure__2(::au::edu::anu::chem::mm::MMAtom* atom, x10_double x, x10_double y, x10_double z, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms, x10_long p) : atom(atom), x(x), y(y), z(z), tempAtoms(tempAtoms), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10:102-106";
    }

};

#endif // AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_TestPMEWaterBox__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::itable<au_edu_anu_pme_TestPMEWaterBox__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* __apply(::x10::lang::Point* t__1){
        
        //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        x10_long p = ::x10aux::nullCheck(t__1)->x10::lang::Point::__apply(
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
        au_edu_anu_pme_TestPMEWaterBox__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_pme_TestPMEWaterBox__closure__3>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* that_tempAtoms = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>*>();
        au_edu_anu_pme_TestPMEWaterBox__closure__3* this_ = new (storage) au_edu_anu_pme_TestPMEWaterBox__closure__3(that_tempAtoms);
        return this_;
    }
    
    au_edu_anu_pme_TestPMEWaterBox__closure__3(::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms) : tempAtoms(tempAtoms) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10:111";
    }

};

#endif // AU_EDU_ANU_PME_TESTPMEWATERBOX__CLOSURE__3_CLOSURE

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
x10_double au::edu::anu::pme::TestPMEWaterBox::sizeOfCentralCluster() {
    return this->FMGL(size);
    
}

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
x10_double au::edu::anu::pme::TestPMEWaterBox::boxSize() {
    return this->FMGL(size);
    
}

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
void au::edu::anu::pme::TestPMEWaterBox::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::lang::String* structureFileName;
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    x10_double ewaldCoefficient = 0.35;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    x10_double cutoff = 10.0;
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    x10_long gridSize = ((x10_long)72ll);
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    x10_int splineOrder = ((x10_int)4);
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)0ll))))
    {
        
        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        structureFileName = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                              ((x10_long)0ll));
        
        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)1ll))))
        {
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
            ewaldCoefficient = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                         ((x10_long)1ll)));
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
            if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)2ll))))
            {
                
                //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                cutoff = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                   ((x10_long)2ll)));
                
                //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)3ll))))
                {
                    
                    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                    gridSize = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                     ((x10_long)3ll)));
                    
                    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                    if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)4ll))))
                    {
                        
                        //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        splineOrder = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)4ll)));
                    }
                    
                }
                
            }
            
        }
        
    } else {
        
        //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65827)));
        
        //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        return;
    }
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    if (((((x10_long)(splineOrder))) > (gridSize))) {
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65828)));
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        return;
    }
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    (__extension__ ({
        ::au::edu::anu::pme::TestPMEWaterBox* alloc__13346 =
           (new (::x10aux::alloc_z< ::au::edu::anu::pme::TestPMEWaterBox>()) ::au::edu::anu::pme::TestPMEWaterBox());
        (alloc__13346)->::au::edu::anu::pme::TestPMEWaterBox::_constructor();
        alloc__13346;
    }))
    ->test(structureFileName, ewaldCoefficient, cutoff, gridSize,
           splineOrder);
}

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
void au::edu::anu::pme::TestPMEWaterBox::test(::x10::lang::String* structureFileName,
                                              x10_double ewaldCoefficient,
                                              x10_double cutoff,
                                              x10_long gridSize,
                                              x10_int splineOrder) {
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::au::edu::anu::chem::mm::GromacsStructureFileReader* gmxFileReader =
       (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::GromacsStructureFileReader>()) ::au::edu::anu::chem::mm::GromacsStructureFileReader());
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    ::x10::lang::String* fileName__29948 = structureFileName;
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    gmxFileReader->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    gmxFileReader->FMGL(boxEdges) = ::x10aux::zeroValue< ::x10x::vector::Vector3d >();
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    gmxFileReader->FMGL(fileName) = fileName__29948;
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule =
      gmxFileReader->readMolecule();
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->FMGL(size) = gmxFileReader->FMGL(boxEdges)->FMGL(i);
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edges =
      (__extension__ ({
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* t__65794 =
          ::x10::lang::Rail< ::x10x::vector::Vector3d >::_makeUnsafe(((x10_long)3ll), false);
        t__65794->x10::lang::Rail< ::x10x::vector::Vector3d >::__set(
          ((x10_long)0ll), (__extension__ ({
              ::x10x::vector::Vector3d alloc__13347 =  ::x10x::vector::Vector3d::_alloc();
              
              //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              x10_double i__29941 = this->FMGL(size);
              
              //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              alloc__13347->FMGL(i) = i__29941;
              alloc__13347->FMGL(j) = 0.0;
              alloc__13347->FMGL(k) = 0.0;
              alloc__13347;
          }))
          );
        t__65794->x10::lang::Rail< ::x10x::vector::Vector3d >::__set(
          ((x10_long)1ll), (__extension__ ({
              ::x10x::vector::Vector3d alloc__13348 =  ::x10x::vector::Vector3d::_alloc();
              
              //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              x10_double j__29942 = this->FMGL(size);
              
              //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              alloc__13348->FMGL(i) = 0.0;
              alloc__13348->FMGL(j) = j__29942;
              alloc__13348->FMGL(k) = 0.0;
              alloc__13348;
          }))
          );
        t__65794->x10::lang::Rail< ::x10x::vector::Vector3d >::__set(
          ((x10_long)2ll), (__extension__ ({
              ::x10x::vector::Vector3d alloc__13349 =  ::x10x::vector::Vector3d::_alloc();
              
              //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              x10_double k__29943 = this->FMGL(size);
              
              //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
              alloc__13349->FMGL(i) = 0.0;
              alloc__13349->FMGL(j) = 0.0;
              alloc__13349->FMGL(k) = k__29943;
              alloc__13349;
          }))
          );
        t__65794;
    }))
    ;
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    x10_long g = gridSize;
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::lang::Rail< x10_long >* gridSizes = ::x10::lang::Rail< x10_long >::_make(((x10_long)3ll),
                                                                                    g);
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65829), structureFileName), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65830)), edges->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_long)0ll))), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65831)), edges->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ((x10_long)1ll))), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65831)), edges->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ((x10_long)2ll))), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65832)), gridSize), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65833)), splineOrder), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65834)), ewaldCoefficient), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65835)), cutoff)));
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>* molAtoms =
      ::x10aux::nullCheck(molecule)->getAtoms();
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65836), molAtoms->size()), (&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65837))));
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* tempAtoms =
      (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__22997 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__21307 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__21307)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__21307;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>* alloc__22999 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >()) ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>());
            (alloc__22999)->::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::_constructor(
              dist__22997, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >(sizeof(au_edu_anu_pme_TestPMEWaterBox__closure__1)))au_edu_anu_pme_TestPMEWaterBox__closure__1())));
            alloc__22999;
        }))
        ;
    }))
    ;
    {
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__29958 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    x10_long i;
                    for (i = ((x10_long)0ll); ((i) < (molAtoms->size()));
                         i = ((i) + (((x10_long)1ll)))) {
                        
                        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        ::au::edu::anu::chem::mm::MMAtom* atom =
                          molAtoms->__apply(i);
                        
                        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        ::x10x::vector::Point3d centre = ::x10aux::nullCheck(atom)->FMGL(centre);
                        
                        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        x10_double x = (((((-(this->FMGL(size)))) / (2.0))) + (((centre->FMGL(i)) < (0.0))
                          ? (((centre->FMGL(i)) + (this->FMGL(size))))
                          : (((centre->FMGL(i)) >= (this->FMGL(size)))
                               ? (((centre->FMGL(i)) - (this->FMGL(size))))
                               : (centre->FMGL(i)))));
                        
                        //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        x10_double y = (((((-(this->FMGL(size)))) / (2.0))) + (((centre->FMGL(j)) < (0.0))
                          ? (((centre->FMGL(j)) + (this->FMGL(size))))
                          : (((centre->FMGL(j)) >= (this->FMGL(size)))
                               ? (((centre->FMGL(j)) - (this->FMGL(size))))
                               : (centre->FMGL(j)))));
                        
                        //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        x10_double z = (((((-(this->FMGL(size)))) / (2.0))) + (((centre->FMGL(k)) < (0.0))
                          ? (((centre->FMGL(k)) + (this->FMGL(size))))
                          : (((centre->FMGL(k)) >= (this->FMGL(size)))
                               ? (((centre->FMGL(k)) - (this->FMGL(size))))
                               : (centre->FMGL(k)))));
                        
                        //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        x10_double charge = ::x10aux::nullCheck(atom)->FMGL(charge);
                        
                        //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        x10_long p = this->getPlaceId(x, y,
                                                      z);
                        
                        //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                        if ((((p) >= (((x10_long)0ll))) &&
                            ((p) < (((x10_long)::x10aux::num_hosts)))))
                        {
                            
                            //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                            ::x10::lang::Runtime::runAsync(
                              (__extension__ ({
                                  ::x10::lang::Place alloc__13351 =
                                     ::x10::lang::Place::_alloc();
                                  (alloc__13351)->::x10::lang::Place::_constructor(
                                    p);
                                  alloc__13351;
                              }))
                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_TestPMEWaterBox__closure__2)))au_edu_anu_pme_TestPMEWaterBox__closure__2(atom, x, y, z, tempAtoms, p))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        } else {
                            
                            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
                            ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65838), ::x10aux::nullCheck(atom)->FMGL(centre))));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc5) {
            {
                ::x10::lang::CheckedThrowable* ct__29956 =
                  __exc5;
                {
                    ::x10::lang::Runtime::pushException(ct__29956);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__29958);
    }
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
      (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__26734 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__24545 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__24545)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__24545;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* alloc__26736 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >()) ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>());
            (alloc__26736)->::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::_constructor(
              dist__26734, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >(sizeof(au_edu_anu_pme_TestPMEWaterBox__closure__3)))au_edu_anu_pme_TestPMEWaterBox__closure__3(tempAtoms))));
            alloc__26736;
        }))
        ;
    }))
    ;
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::au::edu::anu::pme::PME_SPMD* pme =  (new (::x10aux::alloc_z< ::au::edu::anu::pme::PME_SPMD>()) ::au::edu::anu::pme::PME_SPMD());
    (pme)->::au::edu::anu::pme::PME_SPMD::_constructor(edges,
                                                       gridSizes,
                                                       atoms,
                                                       splineOrder,
                                                       ewaldCoefficient,
                                                       cutoff);
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    pme->setup();
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    x10_double energy = pme->getEnergy();
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    {
        x10_long i__29949;
        for (i__29949 = ((x10_long)1ll); ((i__29949) <= (((x10_long)10ll)));
             i__29949 = ((i__29949) + (((x10_long)1ll))))
        {
            x10_long i__29950 = i__29949;
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
            pme->getEnergy();
        }
    }
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65839), energy)));
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65840),
                  ((x10_long)(((x10_int)1))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65841),
                  ((x10_long)(((x10_int)2))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65842),
                  ((x10_long)(((x10_int)3))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65843),
                  ((x10_long)(((x10_int)4))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65844),
                  ((x10_long)(((x10_int)5))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65845),
                  ((x10_long)(((x10_int)6))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65846),
                  ((x10_long)(((x10_int)0))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65847),
                  ((x10_long)(((x10_int)7))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    this->logTime((&::au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65848),
                  ((x10_long)(((x10_int)8))), ((void)(pme),::au::edu::anu::pme::PME_SPMD::FMGL(timer__get)()));
}

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
::au::edu::anu::pme::TestPMEWaterBox* au::edu::anu::pme::TestPMEWaterBox::au__edu__anu__pme__TestPMEWaterBox____this__au__edu__anu__pme__TestPMEWaterBox(
  ) {
    return this;
    
}
void au::edu::anu::pme::TestPMEWaterBox::_constructor() {
    ::au::edu::anu::chem::mm::TestElectrostatic* this__29952 =
      this;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/mm/TestElectrostatic.x10"
    ::x10aux::nullCheck(this__29952)->FMGL(SIZE) = 80.0;
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pme/test/au/edu/anu/pme/TestPMEWaterBox.x10"
    ::au::edu::anu::pme::TestPMEWaterBox* this__29951 = this;
    ::x10aux::nullCheck(this__29951)->FMGL(size) = 80.0;
}
::au::edu::anu::pme::TestPMEWaterBox* au::edu::anu::pme::TestPMEWaterBox::_make(
  ) {
    ::au::edu::anu::pme::TestPMEWaterBox* this_ = new (::x10aux::alloc_z< ::au::edu::anu::pme::TestPMEWaterBox>()) ::au::edu::anu::pme::TestPMEWaterBox();
    this_->_constructor();
    return this_;
}


void au::edu::anu::pme::TestPMEWaterBox::__fieldInitializers_au_edu_anu_pme_TestPMEWaterBox(
  ) {
    this->FMGL(size) = 80.0;
}
const ::x10aux::serialization_id_t au::edu::anu::pme::TestPMEWaterBox::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::pme::TestPMEWaterBox::_deserializer);

void au::edu::anu::pme::TestPMEWaterBox::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::au::edu::anu::chem::mm::TestElectrostatic::_serialize_body(buf);
    buf.write(this->FMGL(size));
    
}

::x10::lang::Reference* ::au::edu::anu::pme::TestPMEWaterBox::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::pme::TestPMEWaterBox* this_ = new (::x10aux::alloc_z< ::au::edu::anu::pme::TestPMEWaterBox>()) ::au::edu::anu::pme::TestPMEWaterBox();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::pme::TestPMEWaterBox::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::TestElectrostatic::_deserialize_body(buf);
    FMGL(size) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::pme::TestPMEWaterBox::rtt;
void au::edu::anu::pme::TestPMEWaterBox::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::au::edu::anu::chem::mm::TestElectrostatic>()};
    rtt.initStageTwo("au.edu.anu.pme.TestPMEWaterBox",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65845("Direct");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65839("energy = ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65843("Reciprocal energy");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65830("\nBox edges: ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65834(" Beta: ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65848("Setup");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65841("Inverse FFT");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65828("pme: splineOrder must not be greater than gridSize");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65836("read ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65833("\nspline order: ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65847("Prefetch");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65831(",");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65840("Grid charges");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65832("\nGrid size: ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65837(" atoms.");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65827("usage: pme myStructureFile.gro [ewaldCoefficient] [cutoff] [gridSize] [splineOrder]");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65842("ThetaRecConvQ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65829("Testing PME with structure file ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65835(" Cutoff: ");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65846("Total");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65844("Self energy");
::x10::lang::String au::edu::anu::pme::TestPMEWaterBox_Strings::sl__65838("could not map atom to place: ");

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*>::itable<au_edu_anu_pme_TestPMEWaterBox__closure__1>au_edu_anu_pme_TestPMEWaterBox__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_TestPMEWaterBox__closure__1::__apply, &au_edu_anu_pme_TestPMEWaterBox__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_TestPMEWaterBox__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::mm::MMAtom*>*> >, &au_edu_anu_pme_TestPMEWaterBox__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_TestPMEWaterBox__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_TestPMEWaterBox__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_TestPMEWaterBox__closure__2>au_edu_anu_pme_TestPMEWaterBox__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_TestPMEWaterBox__closure__2::__apply, &au_edu_anu_pme_TestPMEWaterBox__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_TestPMEWaterBox__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_TestPMEWaterBox__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_TestPMEWaterBox__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_TestPMEWaterBox__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_TestPMEWaterBox__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_TestPMEWaterBox__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::itable<au_edu_anu_pme_TestPMEWaterBox__closure__3>au_edu_anu_pme_TestPMEWaterBox__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_TestPMEWaterBox__closure__3::__apply, &au_edu_anu_pme_TestPMEWaterBox__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_TestPMEWaterBox__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*> >, &au_edu_anu_pme_TestPMEWaterBox__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_TestPMEWaterBox__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_TestPMEWaterBox__closure__3::_deserialize);

/* END of TestPMEWaterBox */
/*************************************************/
