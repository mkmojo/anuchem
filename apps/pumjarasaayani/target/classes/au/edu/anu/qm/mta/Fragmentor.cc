/*************************************************/
/* START of Fragmentor */
#include <au/edu/anu/qm/mta/Fragmentor.h>

#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/mta/Fragment.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/chem/Atom.h>
#include <au/edu/anu/chem/ConnectivityBuilder.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/ListIterator.h>
#include <au/edu/anu/chem/Ring.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <au/edu/anu/qm/mta/CardinalityExpression.h>
#include <x10/lang/String.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/util/Pair.h>
#include <au/edu/anu/chem/BondType.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <x10x/vector/Vector3d.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_mta_Fragmentor__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        saved_this->removeDanglingAtoms(fragment);
    }
    
    // captured environment
    ::au::edu::anu::qm::mta::Fragmentor* saved_this;
    ::au::edu::anu::qm::mta::Fragment* fragment;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->fragment);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_mta_Fragmentor__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_qm_mta_Fragmentor__closure__1>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::mta::Fragmentor* that_saved_this = buf.read< ::au::edu::anu::qm::mta::Fragmentor*>();
        ::au::edu::anu::qm::mta::Fragment* that_fragment = buf.read< ::au::edu::anu::qm::mta::Fragment*>();
        au_edu_anu_qm_mta_Fragmentor__closure__1* this_ = new (storage) au_edu_anu_qm_mta_Fragmentor__closure__1(that_saved_this, that_fragment);
        return this_;
    }
    
    au_edu_anu_qm_mta_Fragmentor__closure__1(::au::edu::anu::qm::mta::Fragmentor* saved_this, ::au::edu::anu::qm::mta::Fragment* fragment) : saved_this(saved_this), fragment(fragment) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10:95-97";
    }

};

#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_mta_Fragmentor__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        saved_this->addDummyAtoms(fragment);
    }
    
    // captured environment
    ::au::edu::anu::qm::mta::Fragmentor* saved_this;
    ::au::edu::anu::qm::mta::Fragment* fragment;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->fragment);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_mta_Fragmentor__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_qm_mta_Fragmentor__closure__2>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::mta::Fragmentor* that_saved_this = buf.read< ::au::edu::anu::qm::mta::Fragmentor*>();
        ::au::edu::anu::qm::mta::Fragment* that_fragment = buf.read< ::au::edu::anu::qm::mta::Fragment*>();
        au_edu_anu_qm_mta_Fragmentor__closure__2* this_ = new (storage) au_edu_anu_qm_mta_Fragmentor__closure__2(that_saved_this, that_fragment);
        return this_;
    }
    
    au_edu_anu_qm_mta_Fragmentor__closure__2(::au::edu::anu::qm::mta::Fragmentor* saved_this, ::au::edu::anu::qm::mta::Fragment* fragment) : saved_this(saved_this), fragment(fragment) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10:106-108";
    }

};

#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_mta_Fragmentor__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::CheckedThrowable* throwable__59266 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(fragList)->add(aFragment);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc21) {
                {
                    ::x10::lang::CheckedThrowable* formal__59267 = __exc21;
                    {
                        throwable__59266 = formal__59267;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__59266, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__59266))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__59266));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__59266,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__59266)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__59266));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList;
    ::au::edu::anu::qm::mta::Fragment* aFragment;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->fragList);
        buf.write(this->aFragment);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_mta_Fragmentor__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_qm_mta_Fragmentor__closure__4>();
        buf.record_reference(storage);
        ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* that_fragList = buf.read< ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>*>();
        ::au::edu::anu::qm::mta::Fragment* that_aFragment = buf.read< ::au::edu::anu::qm::mta::Fragment*>();
        au_edu_anu_qm_mta_Fragmentor__closure__4* this_ = new (storage) au_edu_anu_qm_mta_Fragmentor__closure__4(that_fragList, that_aFragment);
        return this_;
    }
    
    au_edu_anu_qm_mta_Fragmentor__closure__4(::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList, ::au::edu::anu::qm::mta::Fragment* aFragment) : fragList(fragList), aFragment(aFragment) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10:145";
    }

};

#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_mta_Fragmentor__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::au::edu::anu::qm::mta::Fragment* aFragment =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragment>()) ::au::edu::anu::qm::mta::Fragment());
        (aFragment)->::au::edu::anu::qm::mta::Fragment::_constructor();
        
        //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        aFragment->FMGL(centredOn) = ::x10aux::nullCheck(atom1)->getIndex();
        
        //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        aFragment->addAtom(atom1);
        
        //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfAtoms)); i =
                                                                        ((i) + (((x10_int)1))))
            {
                
                //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                ::au::edu::anu::qm::QMAtom* atom2 = ::x10aux::nullCheck(mol)->getAtom(
                                                      ((x10_long)(i)));
                
                //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(atom2)->getIndex(),
                                             ::x10aux::nullCheck(atom1)->getIndex())))
                {
                    continue;
                }
                
                //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                x10_double dist = (__extension__ ({
                    ::x10x::vector::Point3d this__56032 =
                      ::x10aux::nullCheck(atom2)->FMGL(centre);
                    
                    //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Point3d b__56031 = ::x10aux::nullCheck(atom1)->FMGL(centre);
                    ::x10::lang::MathNatives::sqrt((__extension__ ({
                        
                        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d b__56033 =
                          b__56031;
                        x10_double ret__56037;
                        
                        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double di__59231 = ((this__56032->FMGL(i)) - (b__56033->FMGL(i)));
                        
                        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double dj__59232 = ((this__56032->FMGL(j)) - (b__56033->FMGL(j)));
                        
                        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double dk__59233 = ((this__56032->FMGL(k)) - (b__56033->FMGL(k)));
                        
                        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ret__56037 = ((((((di__59231) * (di__59231))) + (((dj__59232) * (dj__59232))))) + (((dk__59233) * (dk__59233))));
                        ret__56037;
                    }))
                    );
                }))
                ;
                
                //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                if (((dist) <= (saved_this->FMGL(rGoodness))))
                {
                    
                    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                    aFragment->addAtom(atom2);
                }
                
            }
        }
        
        //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_mta_Fragmentor__closure__4)))au_edu_anu_qm_mta_Fragmentor__closure__4(fragList, aFragment))));
    }
    
    // captured environment
    ::au::edu::anu::qm::QMAtom* atom1;
    x10_long noOfAtoms;
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol;
    ::au::edu::anu::qm::mta::Fragmentor* saved_this;
    ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atom1);
        buf.write(this->noOfAtoms);
        buf.write(this->mol);
        buf.write(this->saved_this);
        buf.write(this->fragList);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_mta_Fragmentor__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_qm_mta_Fragmentor__closure__3>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::QMAtom* that_atom1 = buf.read< ::au::edu::anu::qm::QMAtom*>();
        x10_long that_noOfAtoms = buf.read<x10_long>();
        ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* that_mol = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
        ::au::edu::anu::qm::mta::Fragmentor* that_saved_this = buf.read< ::au::edu::anu::qm::mta::Fragmentor*>();
        ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* that_fragList = buf.read< ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>*>();
        au_edu_anu_qm_mta_Fragmentor__closure__3* this_ = new (storage) au_edu_anu_qm_mta_Fragmentor__closure__3(that_atom1, that_noOfAtoms, that_mol, that_saved_this, that_fragList);
        return this_;
    }
    
    au_edu_anu_qm_mta_Fragmentor__closure__3(::au::edu::anu::qm::QMAtom* atom1, x10_long noOfAtoms, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol, ::au::edu::anu::qm::mta::Fragmentor* saved_this, ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) : atom1(atom1), noOfAtoms(noOfAtoms), mol(mol), saved_this(saved_this), fragList(fragList) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10:127-146";
    }

};

#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_mta_Fragmentor__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>* missedAtoms =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>());
        (missedAtoms)->::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>::_constructor();
        
        //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        {
            ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__53876;
            for (atom__53876 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(fragment)->getAtoms()->iterator());
                 ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__53876));
                 ) {
                ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__53876));
                
                //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                {
                    ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__53874;
                    for (bond__53874 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(::x10aux::nullCheck(atom)->getBonds())->iterator());
                         ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__53874));
                         ) {
                        ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond =
                          ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__53874));
                        
                        //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::au::edu::anu::chem::Atom* bondedAtom =
                          bond->FMGL(second);
                        
                        //#line 252 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        x10_int nBonds = ((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(bondedAtom)->getBonds())->size()));
                        
                        //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        if (((::x10aux::struct_equals(nBonds,
                                                      ((x10_int)1))) &&
                            (!::x10aux::struct_equals(bond->FMGL(first),
                                                      ::au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)()))))
                        {
                            
                            //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                            if (!(::x10aux::nullCheck(fragment)->contains(
                                    ::x10aux::class_cast< ::au::edu::anu::qm::QMAtom*>(bondedAtom))))
                            {
                                
                                //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                                missedAtoms->add(::x10aux::class_cast< ::au::edu::anu::qm::QMAtom*>(bondedAtom));
                            }
                            
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        if (((missedAtoms->size()) > (((x10_long)0ll)))) {
            
            //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            includedMissedAtoms->x10::lang::Rail< x10_boolean >::__set(
              ((x10_long)0ll), true);
            
            //#line 265 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            {
                ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* matm__53878;
                for (matm__53878 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(missedAtoms->iterator());
                     ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(matm__53878));
                     ) {
                    ::au::edu::anu::qm::QMAtom* matm = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(matm__53878));
                    
                    //#line 266 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                    ::x10aux::nullCheck(fragment)->addAtom(
                      matm);
                }
            }
            
        }
        
    }
    
    // captured environment
    ::au::edu::anu::qm::mta::Fragment* fragment;
    ::x10::lang::Rail< x10_boolean >* includedMissedAtoms;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->fragment);
        buf.write(this->includedMissedAtoms);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_mta_Fragmentor__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_qm_mta_Fragmentor__closure__5>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::mta::Fragment* that_fragment = buf.read< ::au::edu::anu::qm::mta::Fragment*>();
        ::x10::lang::Rail< x10_boolean >* that_includedMissedAtoms = buf.read< ::x10::lang::Rail< x10_boolean >*>();
        au_edu_anu_qm_mta_Fragmentor__closure__5* this_ = new (storage) au_edu_anu_qm_mta_Fragmentor__closure__5(that_fragment, that_includedMissedAtoms);
        return this_;
    }
    
    au_edu_anu_qm_mta_Fragmentor__closure__5(::au::edu::anu::qm::mta::Fragment* fragment, ::x10::lang::Rail< x10_boolean >* includedMissedAtoms) : fragment(fragment), includedMissedAtoms(includedMissedAtoms) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10:247-269";
    }

};

#endif // AU_EDU_ANU_QM_MTA_FRAGMENTOR__CLOSURE__5_CLOSURE

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"

//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::_constructor(x10_double rGoodness,
                                                     x10_int maxFragSize) {
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::qm::mta::Fragmentor* this__59230 = this;
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    this->FMGL(rGoodness) = rGoodness;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    this->FMGL(maxFragSize) = maxFragSize;
}
::au::edu::anu::qm::mta::Fragmentor* au::edu::anu::qm::mta::Fragmentor::_make(
  x10_double rGoodness, x10_int maxFragSize) {
    ::au::edu::anu::qm::mta::Fragmentor* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragmentor>()) ::au::edu::anu::qm::mta::Fragmentor();
    this_->_constructor(rGoodness, maxFragSize);
    return this_;
}



//#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* au::edu::anu::qm::mta::Fragmentor::fragment(
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>());
    (fragList)->::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>::_constructor();
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::lang::Rail< x10_int >* sortedAtomIndices = ::x10::lang::Rail< x10_int >::_make(noOfAtoms);
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfAtoms));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                                  ((x10_long)(i))))->setIndex(((x10_long)(i)));
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            sortedAtomIndices->x10::lang::Rail< x10_int >::__set(
              ((x10_long)(i)), i);
        }
    }
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::chem::ConnectivityBuilder< ::au::edu::anu::qm::QMAtom*>* conn =
       (new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder< ::au::edu::anu::qm::QMAtom*> >()) ::au::edu::anu::chem::ConnectivityBuilder< ::au::edu::anu::qm::QMAtom*>());
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/ConnectivityBuilder.x10"
    conn->FMGL(WHITE) = ((x10_int)0);
    conn->FMGL(GRAY) = ((x10_int)1);
    conn->FMGL(BLACK) = ((x10_int)2);
    conn->FMGL(TORSSIAN_ANGLE_TOLERANCE) = 0.08726646259971647;
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    conn->buildConnectivity(mol);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    conn->identifyRings(mol);
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148897)));
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::chem::Ring< ::au::edu::anu::qm::QMAtom*>*>* ring__53862;
        for (ring__53862 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::Ring< ::au::edu::anu::qm::QMAtom*>*>*>(::x10aux::nullCheck(::x10aux::nullCheck(mol)->getRings())->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::chem::Ring< ::au::edu::anu::qm::QMAtom*>*>::hasNext(::x10aux::nullCheck(ring__53862));
             ) {
            ::au::edu::anu::chem::Ring< ::au::edu::anu::qm::QMAtom*>* ring =
              ::x10::util::ListIterator< ::au::edu::anu::chem::Ring< ::au::edu::anu::qm::QMAtom*>*>::next(::x10aux::nullCheck(ring__53862));
            
            //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(ring)->isPlanar()));
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(ring));
        }
    }
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    this->generateAtomcentreedFragments(mol, fragList);
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    this->mergeAlongConnectivity(mol, sortedAtomIndices, fragList);
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    this->mergeCommonFragments(fragList);
    {
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59248 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* fragment__53864;
                    for (fragment__53864 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(fragList->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(fragment__53864));
                         ) {
                        ::au::edu::anu::qm::mta::Fragment* fragment =
                          ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(fragment__53864));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_mta_Fragmentor__closure__1)))au_edu_anu_qm_mta_Fragmentor__closure__1(this, fragment))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc18) {
            {
                ::x10::lang::CheckedThrowable* ct__59246 =
                  __exc18;
                {
                    ::x10::lang::Runtime::pushException(ct__59246);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59248);
    }
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    while (this->includeMissedAtoms(fragList)) {
        ;
    }
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    (__extension__ ({
        ::au::edu::anu::qm::mta::CardinalityExpression* alloc__53859 =
           (new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::CardinalityExpression>()) ::au::edu::anu::qm::mta::CardinalityExpression());
        
        //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/CardinalityExpression.x10"
        alloc__53859->FMGL(mergedIntoPreviousTerm) = false;
        alloc__53859;
    }))
    ->addCardinalityFragments(fragList);
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148898)));
    {
        
        //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59253 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* fragment__53866;
                    for (fragment__53866 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(fragList->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(fragment__53866));
                         ) {
                        ::au::edu::anu::qm::mta::Fragment* fragment =
                          ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(fragment__53866));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_mta_Fragmentor__closure__2)))au_edu_anu_qm_mta_Fragmentor__closure__2(this, fragment))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc19) {
            {
                ::x10::lang::CheckedThrowable* ct__59251 =
                  __exc19;
                {
                    ::x10::lang::Runtime::pushException(ct__59251);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59253);
    }
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148899), fragList->size())));
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    x10_long idx = ((x10_long)0ll);
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* frag__53868;
        for (frag__53868 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(fragList->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(frag__53868));
             ) {
            ::au::edu::anu::qm::mta::Fragment* frag = ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(frag__53868));
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148900), idx), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148901)), ::x10aux::nullCheck(frag)->getNumberOfTrueAtoms()), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148902)), ::x10aux::nullCheck(frag)->getNumberOfAtoms()), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148903)), ::x10aux::nullCheck(frag)->FMGL(cardinalitySign)), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148904))));
            
            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(frag));
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            idx = ((idx) + (((x10_long)1ll)));
        }
    }
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    return fragList;
    
}

//#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::generateAtomcentreedFragments(
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    {
        
        //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59259 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom1__53870;
                    for (atom1__53870 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(mol)->getAtoms()->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom1__53870));
                         ) {
                        ::au::edu::anu::qm::QMAtom* atom1 =
                          ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom1__53870));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_mta_Fragmentor__closure__3)))au_edu_anu_qm_mta_Fragmentor__closure__3(atom1, noOfAtoms, mol, this, fragList))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc22) {
            {
                ::x10::lang::CheckedThrowable* ct__59257 =
                  __exc22;
                {
                    ::x10::lang::Runtime::pushException(ct__59257);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59259);
    }
}

//#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::mergeAlongConnectivity(
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::x10::lang::Rail< x10_int >* sortedAtomIndices, ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::lang::Rail< x10_boolean >* visited = ::x10::lang::Rail< x10_boolean >::_make(noOfAtoms,
                                                                                        false);
    
    //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfAtoms));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            x10_int idx = ::x10aux::nullCheck(sortedAtomIndices)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(i)));
            
            //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::au::edu::anu::qm::QMAtom* atom1 = ::x10aux::nullCheck(mol)->getAtom(
                                                  ((x10_long)(idx)));
            
            //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
              ::x10aux::nullCheck(atom1)->getBonds();
            
            //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            if (!(visited->x10::lang::Rail< x10_boolean >::__apply(
                    ((x10_long)(idx))))) {
                
                //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                visited->x10::lang::Rail< x10_boolean >::__set(
                  ((x10_long)(idx)), true);
                
                //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                this->traverseAndMergeFragments(idx, sortedAtomIndices,
                                                mol, visited,
                                                fragList);
            }
            
        }
    }
    
}

//#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::traverseAndMergeFragments(
  x10_int v, ::x10::lang::Rail< x10_int >* sortedAtomIndices,
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::x10::lang::Rail< x10_boolean >* visited, ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
      ::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                            ((x10_long)(v))))->getBonds();
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148905), v), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148906)), ::x10aux::nullCheck(bonds)->size())));
    
    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(bonds)->size()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148907), i)));
            
            //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            x10_int bondedAtom = ::x10aux::nullCheck(sortedAtomIndices)->x10::lang::Rail< x10_int >::__apply(
                                   ::x10aux::nullCheck((::x10aux::class_cast< ::au::edu::anu::qm::QMAtom*>(::x10aux::nullCheck(bonds)->get(
                                                                                                             ((x10_long)(i)))->FMGL(second))))->getIndex());
            
            //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            this->mergeFragmentscentredOn(v, bondedAtom, fragList);
            
            //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10aux::nullCheck(visited)->x10::lang::Rail< x10_boolean >::__set(
              ((x10_long)(bondedAtom)), true);
            
            //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148908), i)));
        }
    }
    
}

//#line 184 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::mergeFragmentscentredOn(
  x10_int a, x10_int b, ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148909), a), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148910)), b), (&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148911))));
    
    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::qm::mta::Fragment* f1 = this->findFragmentCentredOn(
                                              ((x10_long)(a)),
                                              fragList);
    
    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::qm::mta::Fragment* f2 = this->findFragmentCentredOn(
                                              ((x10_long)(b)),
                                              fragList);
    
    //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    if (((::x10aux::struct_equals(f1, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) ||
        (::x10aux::struct_equals(f2, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
    {
        return;
    }
    
    //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::qm::mta::Fragment* f1f2 = ::x10aux::nullCheck(f1)->_kwd__union(
                                                f2);
    
    //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    if (((::x10aux::nullCheck(f1f2)->getNumberOfAtoms()) > (((x10_long)(this->FMGL(maxFragSize))))))
    {
        return;
    }
    
    //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10aux::nullCheck(fragList)->remove(f1);
    
    //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10aux::nullCheck(fragList)->remove(f2);
    
    //#line 199 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10aux::nullCheck(f1f2)->FMGL(centredOn) = ::x10aux::nullCheck(f1)->FMGL(centredOn);
    
    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10aux::nullCheck(fragList)->add(f1f2);
}

//#line 204 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
::au::edu::anu::qm::mta::Fragment* au::edu::anu::qm::mta::Fragmentor::findFragmentCentredOn(
  x10_long idx, ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* frag__53872;
        for (frag__53872 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(::x10aux::nullCheck(fragList)->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(frag__53872));
             ) {
            ::au::edu::anu::qm::mta::Fragment* frag = ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(frag__53872));
            
            //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(frag)->FMGL(centredOn),
                                         idx))) {
                return frag;
                
            }
            
        }
    }
    
    //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    return ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::mta::Fragment*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 213 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::mergeCommonFragments(
  ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 214 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    x10_boolean doneMerging = false;
    
    //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    while (!(doneMerging)) {
        
        //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        goto outer_loop; outer_loop: {
            x10_long i;
            for (i = ((x10_long)0ll); ((i) < (::x10aux::nullCheck(fragList)->size()));
                 i = ((i) + (((x10_long)1ll)))) {
            {
                
                //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                ::au::edu::anu::qm::mta::Fragment* fi = ::x10aux::nullCheck(fragList)->get(
                                                          i);
                
                //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                {
                    x10_long j;
                    for (j = ((x10_long)0ll); ((j) < (::x10aux::nullCheck(fragList)->size()));
                         j = ((j) + (((x10_long)1ll)))) {
                        
                        //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::au::edu::anu::qm::mta::Fragment* fj =
                          ::x10aux::nullCheck(fragList)->get(
                            j);
                        
                        //#line 221 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        doneMerging = ((::x10aux::struct_equals(i,
                                                                ((::x10aux::nullCheck(fragList)->size()) - (((x10_long)1ll))))) &&
                        (::x10aux::struct_equals(j, ((::x10aux::nullCheck(fragList)->size()) - (((x10_long)1ll))))));
                        
                        //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        if ((::x10aux::struct_equals(i, j)))
                        {
                            continue;
                        }
                        
                        //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::au::edu::anu::qm::mta::Fragment* fifj =
                          ::x10aux::nullCheck(fi)->_kwd__union(
                            fj);
                        
                        //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        if (((::x10aux::nullCheck(fifj)->getNumberOfAtoms()) > (((x10_long)(this->FMGL(maxFragSize))))))
                        {
                            continue;
                        }
                        
                        //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::x10aux::nullCheck(fragList)->remove(
                          fi);
                        
                        //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::x10aux::nullCheck(fragList)->remove(
                          fj);
                        
                        //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::x10aux::nullCheck(fragList)->add(
                          fifj);
                        
                        //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        goto outer_loop_end_;
                    }
                }
                
            }
            goto outer_loop_next_; outer_loop_next_: ;
            }
            goto outer_loop_end_; outer_loop_end_: ;
        }
        
    }
    
}

//#line 241 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
x10_boolean au::edu::anu::qm::mta::Fragmentor::includeMissedAtoms(
  ::x10::util::ArrayList< ::au::edu::anu::qm::mta::Fragment*>* fragList) {
    
    //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::lang::Rail< x10_boolean >* includedMissedAtoms =
      ::x10::lang::Rail< x10_boolean >::_make(((x10_long)1ll),
                                              false);
    {
        
        //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__59264 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>* fragment__53880;
                    for (fragment__53880 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>*>(::x10aux::nullCheck(fragList)->iterator());
                         ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::hasNext(::x10aux::nullCheck(fragment__53880));
                         ) {
                        ::au::edu::anu::qm::mta::Fragment* fragment =
                          ::x10::util::ListIterator< ::au::edu::anu::qm::mta::Fragment*>::next(::x10aux::nullCheck(fragment__53880));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_mta_Fragmentor__closure__5)))au_edu_anu_qm_mta_Fragmentor__closure__5(fragment, includedMissedAtoms))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc29) {
            {
                ::x10::lang::CheckedThrowable* ct__59262 =
                  __exc29;
                {
                    ::x10::lang::Runtime::pushException(ct__59262);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__59264);
    }
    
    //#line 271 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    return includedMissedAtoms->x10::lang::Rail< x10_boolean >::__apply(
             ((x10_long)0ll));
    
}

//#line 275 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::removeDanglingAtoms(
  ::au::edu::anu::qm::mta::Fragment* fragment) {
    
    //#line 276 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 277 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>* atoms =
      ::x10aux::nullCheck(fragment)->getAtoms();
    
    //#line 279 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__53884;
        for (atom__53884 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(atoms->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__53884));
             ) {
            ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__53884));
            
            //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            if (((((x10_long)(ai->getAtomicNumber(::x10aux::nullCheck(atom)->FMGL(species))))) > (((x10_long)2ll))))
            {
                continue;
            }
            
            //#line 283 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
              ::x10aux::nullCheck(atom)->getBonds();
            
            //#line 284 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            x10_int nBonds = ((x10_int)0);
            
            //#line 285 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            {
                ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__53882;
                for (bond__53882 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(bonds)->iterator());
                     ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__53882));
                     ) {
                    ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond =
                      ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__53882));
                    
                    //#line 286 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                    ::au::edu::anu::qm::QMAtom* bondedAtom =
                      ::x10aux::class_cast< ::au::edu::anu::qm::QMAtom*>(bond->FMGL(second));
                    
                    //#line 288 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                    if (::x10aux::nullCheck(fragment)->contains(
                          bondedAtom)) {
                        nBonds = ((nBonds) + (((x10_int)1)));
                    }
                    
                }
            }
            
            //#line 291 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            if ((::x10aux::struct_equals(nBonds, ((x10_int)0))))
            {
                
                //#line 293 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                atoms->remove(atom);
            }
            
        }
    }
    
}

//#line 299 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
void au::edu::anu::qm::mta::Fragmentor::addDummyAtoms(::au::edu::anu::qm::mta::Fragment* fragment) {
    
    //#line 300 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>* boundaryAtoms =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>());
    (boundaryAtoms)->::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>::_constructor();
    
    //#line 302 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    x10_double hRadius = ai->getCovalentRadius((&::au::edu::anu::qm::mta::Fragmentor_Strings::sl__148912));
    
    //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__53886;
        for (atom__53886 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(fragment)->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__53886));
             ) {
            ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__53886));
            
            //#line 307 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            x10_int nBonds = ((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(atom)->getBonds())->size()));
            
            //#line 308 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            x10_int nfBonds = ::x10aux::nullCheck(fragment)->getBondOrder(
                                atom);
            
            //#line 310 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            if ((!::x10aux::struct_equals(nBonds, nfBonds)))
            {
                boundaryAtoms->add(atom);
            }
            
        }
    }
    
    //#line 314 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__53890;
        for (atom__53890 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(boundaryAtoms->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__53890));
             ) {
            ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__53890));
            
            //#line 315 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
              ::x10aux::nullCheck(atom)->getBonds();
            
            //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            x10_double bondDistance = ((hRadius) + (ai->getCovalentRadius(
                                                      ::x10aux::nullCheck(atom)->FMGL(species))));
            
            //#line 318 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
            {
                ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__53888;
                for (bond__53888 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(bonds)->iterator());
                     ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__53888));
                     ) {
                    ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond =
                      ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__53888));
                    
                    //#line 319 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                    ::au::edu::anu::qm::QMAtom* bondedAtom =
                      ::x10aux::class_cast< ::au::edu::anu::qm::QMAtom*>(bond->FMGL(second));
                    
                    //#line 321 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                    if (!(::x10aux::nullCheck(fragment)->contains(
                            bondedAtom))) {
                        
                        //#line 322 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::x10x::vector::Vector3d vec = (__extension__ ({
                            ::x10x::vector::Vector3d this__59215 =
                              (__extension__ ({
                                ::x10x::vector::Point3d this__57976 =
                                  ::x10aux::nullCheck(bondedAtom)->FMGL(centre);
                                
                                //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d that__57975 =
                                  ::x10aux::nullCheck(atom)->FMGL(centre);
                                (__extension__ ({
                                    
                                    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Point3d b__57977 =
                                      that__57975;
                                    (__extension__ ({
                                        
                                        //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                        ::x10x::vector::Vector3d alloc__57978 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__59234 =
                                          ((this__57976->FMGL(i)) - (b__57977->FMGL(i)));
                                        x10_double j__59235 =
                                          ((this__57976->FMGL(j)) - (b__57977->FMGL(j)));
                                        x10_double k__59236 =
                                          ((this__57976->FMGL(k)) - (b__57977->FMGL(k)));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__57978->FMGL(i) =
                                          i__59234;
                                        alloc__57978->FMGL(j) =
                                          j__59235;
                                        alloc__57978->FMGL(k) =
                                          k__59236;
                                        alloc__57978;
                                    }))
                                    ;
                                }))
                                ;
                            }))
                            ;
                            
                            //#line 113 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d ret__59216;
                            
                            //#line 114 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double norm__59240 = ((1.0) / (::x10::lang::MathNatives::sqrt(((((((this__59215->FMGL(i)) * (this__59215->FMGL(i)))) + (((this__59215->FMGL(j)) * (this__59215->FMGL(j)))))) + (((this__59215->FMGL(k)) * (this__59215->FMGL(k))))))));
                            
                            //#line 115 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ret__59216 = (__extension__ ({
                                ::x10x::vector::Vector3d alloc__59241 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__59237 = ((this__59215->FMGL(i)) * (norm__59240));
                                x10_double j__59238 = ((this__59215->FMGL(j)) * (norm__59240));
                                x10_double k__59239 = ((this__59215->FMGL(k)) * (norm__59240));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__59241->FMGL(i) = i__59237;
                                alloc__59241->FMGL(j) = j__59238;
                                alloc__59241->FMGL(k) = k__59239;
                                alloc__59241;
                            }))
                            ;
                            ret__59216;
                        }))
                        ;
                        
                        //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::x10x::vector::Point3d newcentre =
                           ::x10x::vector::Point3d::_alloc();
                        
                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double i__59242 = ((((vec->FMGL(i)) * (bondDistance))) + (::x10aux::nullCheck(atom)->FMGL(centre)->FMGL(i)));
                        x10_double j__59243 = ((((vec->FMGL(j)) * (bondDistance))) + (::x10aux::nullCheck(atom)->FMGL(centre)->FMGL(j)));
                        x10_double k__59244 = ((((vec->FMGL(k)) * (bondDistance))) + (::x10aux::nullCheck(atom)->FMGL(centre)->FMGL(k)));
                        
                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        newcentre->FMGL(i) = i__59242;
                        newcentre->FMGL(j) = j__59243;
                        newcentre->FMGL(k) = k__59244;
                        
                        //#line 327 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
                        ::x10aux::nullCheck(fragment)->addAtom(
                          (__extension__ ({
                              ::au::edu::anu::qm::QMAtom* alloc__53860 =
                                 (new (::x10aux::alloc_z< ::au::edu::anu::qm::QMAtom>()) ::au::edu::anu::qm::QMAtom());
                              (alloc__53860)->::au::edu::anu::qm::QMAtom::_constructor(
                                ((x10_int)1), newcentre, true);
                              alloc__53860;
                          }))
                          );
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/mta/Fragmentor.x10"
::au::edu::anu::qm::mta::Fragmentor* au::edu::anu::qm::mta::Fragmentor::au__edu__anu__qm__mta__Fragmentor____this__au__edu__anu__qm__mta__Fragmentor(
  ) {
    return this;
    
}
void au::edu::anu::qm::mta::Fragmentor::__fieldInitializers_au_edu_anu_qm_mta_Fragmentor(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::mta::Fragmentor::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::mta::Fragmentor::_deserializer);

void au::edu::anu::qm::mta::Fragmentor::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(rGoodness));
    buf.write(this->FMGL(maxFragSize));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::mta::Fragmentor::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::mta::Fragmentor* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::mta::Fragmentor>()) ::au::edu::anu::qm::mta::Fragmentor();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::mta::Fragmentor::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(rGoodness) = buf.read<x10_double>();
    FMGL(maxFragSize) = buf.read<x10_int>();
}

::x10aux::RuntimeType au::edu::anu::qm::mta::Fragmentor::rtt;
void au::edu::anu::qm::mta::Fragmentor::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.mta.Fragmentor",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148908("Done processing ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148910(" and ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148898("Adding dummy atoms ...");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148897("Detected rings: ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148902(", ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148911(" ...");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148901(" : ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148912("H");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148906(" is ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148899("Number of final fragments: ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148903(" [");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148909("Merging ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148905("Number of bonds for atom ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148907("Processing ");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148904("]");
::x10::lang::String au::edu::anu::qm::mta::Fragmentor_Strings::sl__148900("Fragment # ");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__1>au_edu_anu_qm_mta_Fragmentor__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_mta_Fragmentor__closure__1::__apply, &au_edu_anu_qm_mta_Fragmentor__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_mta_Fragmentor__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_mta_Fragmentor__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__1::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__2>au_edu_anu_qm_mta_Fragmentor__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_mta_Fragmentor__closure__2::__apply, &au_edu_anu_qm_mta_Fragmentor__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_mta_Fragmentor__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_mta_Fragmentor__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__4>au_edu_anu_qm_mta_Fragmentor__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_mta_Fragmentor__closure__4::__apply, &au_edu_anu_qm_mta_Fragmentor__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_mta_Fragmentor__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_mta_Fragmentor__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__3>au_edu_anu_qm_mta_Fragmentor__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_mta_Fragmentor__closure__3::__apply, &au_edu_anu_qm_mta_Fragmentor__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_mta_Fragmentor__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_mta_Fragmentor__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_mta_Fragmentor__closure__5>au_edu_anu_qm_mta_Fragmentor__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_mta_Fragmentor__closure__5::__apply, &au_edu_anu_qm_mta_Fragmentor__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_mta_Fragmentor__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_mta_Fragmentor__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__5::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_mta_Fragmentor__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_mta_Fragmentor__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of Fragmentor */
/*************************************************/
