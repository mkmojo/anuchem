#ifndef __AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H
#define __AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class ConnectivityBuilder__ConnectivitySupport;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo__AtomProps;
} } } } 
namespace au { namespace edu { namespace anu { namespace chem { 
class BondType;
} } } } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Ring;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

template<class TPMGL(T)> class ConnectivityBuilder;
template <> class ConnectivityBuilder<void>;
template<class TPMGL(T)> class ConnectivityBuilder : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* _make(
             );
    
    virtual void buildConnectivity(::au::edu::anu::chem::Molecule<TPMGL(T)>* mol);
    virtual void detectWeakBonds(::au::edu::anu::chem::Molecule<TPMGL(T)>* mol);
    ::x10x::vector::Vector3d computeAxis(::au::edu::anu::chem::Atom* atom);
    x10_int FMGL(WHITE);
    
    x10_int FMGL(GRAY);
    
    x10_int FMGL(BLACK);
    
    x10_double FMGL(TORSSIAN_ANGLE_TOLERANCE);
    
    virtual void identifyRings(::au::edu::anu::chem::Molecule<TPMGL(T)>* mol);
    void traverseAndRecordRing(::au::edu::anu::chem::Molecule<TPMGL(T)>* mol,
                               x10_long v, ::x10::lang::Rail< x10_int >* color,
                               ::x10::lang::Rail< x10_long >* parent);
    virtual ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* au__edu__anu__chem__ConnectivityBuilder____this__au__edu__anu__chem__ConnectivityBuilder(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_ConnectivityBuilder(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::rtt;
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::au::edu::anu::chem::ConnectivityBuilder<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "au.edu.anu.chem.ConnectivityBuilder";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class ConnectivityBuilder<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H

namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class ConnectivityBuilder;
} } } } 

#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_NODEPS
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/chem/Atom.h>
#include <au/edu/anu/chem/Molecule.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/util/ListIterator.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <au/edu/anu/chem/ConnectivityBuilder__ConnectivitySupport.h>
#include <au/edu/anu/chem/AtomInfo__AtomProps.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/Pair.h>
#include <x10x/vector/Vector3d.h>
#include <x10/lang/Math.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/Ring.h>
#include <x10/compiler/Synthetic.h>
#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_GENERICS
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_GENERICS
#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_GENERICS
#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_IMPLEMENTATION
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_IMPLEMENTATION
#include <au/edu/anu/chem/ConnectivityBuilder.h>

#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class au_edu_anu_chem_ConnectivityBuilder__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* conn =
           (new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport>()) ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport());
        
        //#line 239 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        conn->FMGL(x) = 0.0;
        conn->FMGL(y) = 0.0;
        conn->FMGL(z) = 0.0;
        conn->FMGL(distance) = 0.0;
        conn->FMGL(covalentRadiusSum) = 0.0;
        conn->FMGL(vdwRadiusSum) = 0.0;
        
        //#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        x10_long idx = ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->getIndex();
        
        //#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        ::au::edu::anu::chem::AtomInfo__AtomProps* species = ai->getSpecies(
                                                               ::x10aux::nullCheck(atom)->FMGL(species));
        
        //#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((((x10_long)(i))) < (idx)); i = ((i) + (((x10_int)1))))
            {
                
                //#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                TPMGL(T) atomI = ::x10aux::nullCheck(mol)->getAtom(
                                   ((x10_long)(i)));
                
                //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                ::au::edu::anu::chem::AtomInfo__AtomProps* speciesI =
                  ai->getSpecies(::x10aux::nullCheck(atomI)->FMGL(species));
                
                //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                if (conn->canFormBond(reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom),
                                      reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI)))
                {
                    
                    //#line 43 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    conn->FMGL(covalentRadiusSum) = ((::x10aux::nullCheck(species)->FMGL(covalentRadius)) + (::x10aux::nullCheck(speciesI)->FMGL(covalentRadius)));
                    
                    //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    conn->FMGL(vdwRadiusSum) = ((::x10aux::nullCheck(species)->FMGL(vdWRadius)) + (::x10aux::nullCheck(speciesI)->FMGL(vdWRadius)));
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    if (conn->isSingleBondPresent()) {
                        
                        //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if (conn->isDoubleBondPresent()) {
                            
                            //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->addBond(
                              ::au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__get)(),
                              reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI));
                        } else {
                            
                            //#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->addBond(
                              ::au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__get)(),
                              reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI));
                        }
                        
                    }
                    
                }
                
            }
        }
        
    }
    
    // captured environment
    TPMGL(T) atom;
    ::au::edu::anu::chem::AtomInfo* ai;
    ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atom);
        buf.write(this->ai);
        buf.write(this->mol);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_atom = buf.read<TPMGL(T)>();
        ::au::edu::anu::chem::AtomInfo* that_ai = buf.read< ::au::edu::anu::chem::AtomInfo*>();
        ::au::edu::anu::chem::Molecule<TPMGL(T)>* that_mol = buf.read< ::au::edu::anu::chem::Molecule<TPMGL(T)>*>();
        au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >* this_ = new (storage) au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >(that_atom, that_ai, that_mol);
        return this_;
    }
    
    au_edu_anu_chem_ConnectivityBuilder__closure__1(TPMGL(T) atom, ::au::edu::anu::chem::AtomInfo* ai, ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol) : atom(atom), ai(ai), mol(mol) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10:32-56";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) > >au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::__apply, &au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class au_edu_anu_chem_ConnectivityBuilder__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* conn =
           (new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport>()) ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport());
        
        //#line 239 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        conn->FMGL(x) = 0.0;
        conn->FMGL(y) = 0.0;
        conn->FMGL(z) = 0.0;
        conn->FMGL(distance) = 0.0;
        conn->FMGL(covalentRadiusSum) = 0.0;
        conn->FMGL(vdwRadiusSum) = 0.0;
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        x10_long idx = ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->getIndex();
        
        //#line 72 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        ::au::edu::anu::chem::AtomInfo__AtomProps* species = ai->getSpecies(
                                                               ::x10aux::nullCheck(atom)->FMGL(species));
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((((x10_long)(i))) < (idx)); i = ((i) + (((x10_int)1))))
            {
                
                //#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                TPMGL(T) atomI = ::x10aux::nullCheck(mol)->getAtom(
                                   ((x10_long)(i)));
                
                //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                ::au::edu::anu::chem::AtomInfo__AtomProps* speciesI =
                  ai->getSpecies(::x10aux::nullCheck(atomI)->FMGL(species));
                
                //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                if (conn->canFormBond(reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom),
                                      reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI)))
                {
                    
                    //#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    conn->FMGL(covalentRadiusSum) = ((::x10aux::nullCheck(species)->FMGL(covalentRadius)) + (::x10aux::nullCheck(speciesI)->FMGL(covalentRadius)));
                    
                    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    conn->FMGL(vdwRadiusSum) = ((::x10aux::nullCheck(species)->FMGL(vdWRadius)) + (::x10aux::nullCheck(speciesI)->FMGL(vdWRadius)));
                    
                    //#line 83 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    if ((conn->isWeekBondPresent() && !(conn->isSingleBondPresent())))
                    {
                        
                        //#line 85 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds1 =
                          ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->getBonds();
                        
                        //#line 86 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds2 =
                          ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI)))->getBonds();
                        
                        //#line 88 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if (((::x10aux::struct_equals(::x10aux::nullCheck(bonds1)->size(),
                                                      ((x10_long)0ll))) ||
                            (::x10aux::struct_equals(::x10aux::nullCheck(bonds2)->size(),
                                                     ((x10_long)0ll)))))
                        {
                            
                            //#line 89 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->addBond(
                              ::au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)(),
                              reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI));
                            
                            //#line 90 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            continue;
                        }
                        
                        //#line 93 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10x::vector::Vector3d axis1 = saved_this->computeAxis(
                                                           reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom));
                        
                        //#line 94 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10x::vector::Vector3d axis2 = saved_this->computeAxis(
                                                           reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI));
                        
                        //#line 96 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if (((::x10aux::struct_equals(axis1,
                                                      ::x10x::vector::Vector3d::FMGL(NULL__get)())) ||
                            (::x10aux::struct_equals(axis2,
                                                     ::x10x::vector::Vector3d::FMGL(NULL__get)()))))
                        {
                            continue;
                        }
                        
                        //#line 98 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if ((((::x10::lang::MathNatives::sqrt(((((((axis1->FMGL(i)) * (axis1->FMGL(i)))) + (((axis1->FMGL(j)) * (axis1->FMGL(j)))))) + (((axis1->FMGL(k)) * (axis1->FMGL(k))))))) < (0.1)) ||
                            ((::x10::lang::MathNatives::sqrt(((((((axis2->FMGL(i)) * (axis2->FMGL(i)))) + (((axis2->FMGL(j)) * (axis2->FMGL(j)))))) + (((axis2->FMGL(k)) * (axis2->FMGL(k))))))) < (0.1))))
                        {
                            
                            //#line 100 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            continue;
                        }
                        
                        //#line 103 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10x::vector::Vector3d v12 = (__extension__ ({
                            ::x10x::vector::Point3d this__14572 =
                              ::x10aux::nullCheck(atomI)->FMGL(centre);
                            
                            //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d that__14571 =
                              ::x10aux::nullCheck(atom)->FMGL(centre);
                            (__extension__ ({
                                
                                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__14573 =
                                  that__14571;
                                (__extension__ ({
                                    
                                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Vector3d alloc__14574 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__14808 =
                                      ((this__14572->FMGL(i)) - (b__14573->FMGL(i)));
                                    x10_double j__14809 =
                                      ((this__14572->FMGL(j)) - (b__14573->FMGL(j)));
                                    x10_double k__14810 =
                                      ((this__14572->FMGL(k)) - (b__14573->FMGL(k)));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__14574->FMGL(i) =
                                      i__14808;
                                    alloc__14574->FMGL(j) =
                                      j__14809;
                                    alloc__14574->FMGL(k) =
                                      k__14810;
                                    alloc__14574;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                        
                        //#line 104 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10x::vector::Vector3d v21 = (__extension__ ({
                            ::x10x::vector::Point3d this__14582 =
                              ::x10aux::nullCheck(atom)->FMGL(centre);
                            
                            //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d that__14581 =
                              ::x10aux::nullCheck(atomI)->FMGL(centre);
                            (__extension__ ({
                                
                                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__14583 =
                                  that__14581;
                                (__extension__ ({
                                    
                                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Vector3d alloc__14584 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__14811 =
                                      ((this__14582->FMGL(i)) - (b__14583->FMGL(i)));
                                    x10_double j__14812 =
                                      ((this__14582->FMGL(j)) - (b__14583->FMGL(j)));
                                    x10_double k__14813 =
                                      ((this__14582->FMGL(k)) - (b__14583->FMGL(k)));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__14584->FMGL(i) =
                                      i__14811;
                                    alloc__14584->FMGL(j) =
                                      j__14812;
                                    alloc__14584->FMGL(k) =
                                      k__14813;
                                    alloc__14584;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                        
                        //#line 106 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        x10_double angle1 = (__extension__ ({
                            
                            //#line 106 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d vec__14591 =
                              v12;
                            x10_double ret__14594;
                            
                            //#line 107 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double aDotb__14814 = (__extension__ ({
                                
                                //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d vec__14815 =
                                  vec__14591;
                                ((((((axis1->FMGL(i)) * (vec__14815->FMGL(i)))) + (((axis1->FMGL(j)) * (vec__14815->FMGL(j)))))) + (((axis1->FMGL(k)) * (vec__14815->FMGL(k)))));
                            }))
                            ;
                            
                            //#line 108 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double ab__14816 = ((::x10::lang::MathNatives::sqrt(((((((axis1->FMGL(i)) * (axis1->FMGL(i)))) + (((axis1->FMGL(j)) * (axis1->FMGL(j)))))) + (((axis1->FMGL(k)) * (axis1->FMGL(k))))))) * (::x10::lang::MathNatives::sqrt(((((((vec__14591->FMGL(i)) * (vec__14591->FMGL(i)))) + (((vec__14591->FMGL(j)) * (vec__14591->FMGL(j)))))) + (((vec__14591->FMGL(k)) * (vec__14591->FMGL(k))))))));
                            
                            //#line 110 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ret__14594 = ::x10::lang::MathNatives::acos(((aDotb__14814) / (ab__14816)));
                            ret__14594;
                        }))
                        ;
                        
                        //#line 107 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        x10_double angle2 = (__extension__ ({
                            
                            //#line 106 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d vec__14597 =
                              v21;
                            x10_double ret__14600;
                            
                            //#line 107 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double aDotb__14817 = (__extension__ ({
                                
                                //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d vec__14818 =
                                  vec__14597;
                                ((((((axis2->FMGL(i)) * (vec__14818->FMGL(i)))) + (((axis2->FMGL(j)) * (vec__14818->FMGL(j)))))) + (((axis2->FMGL(k)) * (vec__14818->FMGL(k)))));
                            }))
                            ;
                            
                            //#line 108 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double ab__14819 = ((::x10::lang::MathNatives::sqrt(((((((axis2->FMGL(i)) * (axis2->FMGL(i)))) + (((axis2->FMGL(j)) * (axis2->FMGL(j)))))) + (((axis2->FMGL(k)) * (axis2->FMGL(k))))))) * (::x10::lang::MathNatives::sqrt(((((((vec__14597->FMGL(i)) * (vec__14597->FMGL(i)))) + (((vec__14597->FMGL(j)) * (vec__14597->FMGL(j)))))) + (((vec__14597->FMGL(k)) * (vec__14597->FMGL(k))))))));
                            
                            //#line 110 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ret__14600 = ::x10::lang::MathNatives::acos(((aDotb__14817) / (ab__14819)));
                            ret__14600;
                        }))
                        ;
                        
                        //#line 109 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if ((((angle1) < (1.222)) && ((angle2) < (1.222))))
                        {
                            
                            //#line 111 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom)))->addBond(
                              ::au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)(),
                              reinterpret_cast< ::au::edu::anu::chem::Atom*>(atomI));
                        }
                        
                    }
                    
                }
                
            }
        }
        
    }
    
    // captured environment
    TPMGL(T) atom;
    ::au::edu::anu::chem::AtomInfo* ai;
    ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol;
    ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atom);
        buf.write(this->ai);
        buf.write(this->mol);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_atom = buf.read<TPMGL(T)>();
        ::au::edu::anu::chem::AtomInfo* that_ai = buf.read< ::au::edu::anu::chem::AtomInfo*>();
        ::au::edu::anu::chem::Molecule<TPMGL(T)>* that_mol = buf.read< ::au::edu::anu::chem::Molecule<TPMGL(T)>*>();
        ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* that_saved_this = buf.read< ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>*>();
        au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >* this_ = new (storage) au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >(that_atom, that_ai, that_mol, that_saved_this);
        return this_;
    }
    
    au_edu_anu_chem_ConnectivityBuilder__closure__2(TPMGL(T) atom, ::au::edu::anu::chem::AtomInfo* ai, ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol, ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* saved_this) : atom(atom), ai(ai), mol(mol), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10:69-116";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) > >au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::__apply, &au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CLOSURE__2_CLOSURE

//#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* this__14807 =
      this;
    ::x10aux::nullCheck(this__14807)->FMGL(WHITE) = ((x10_int)0);
    ::x10aux::nullCheck(this__14807)->FMGL(GRAY) = ((x10_int)1);
    ::x10aux::nullCheck(this__14807)->FMGL(BLACK) = ((x10_int)2);
    ::x10aux::nullCheck(this__14807)->FMGL(TORSSIAN_ANGLE_TOLERANCE) =
      0.08726646259971647;
}
template<class TPMGL(T)> ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_make(
                           ) {
    ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)> >()) ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::buildConnectivity(
  ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol) {
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    {
        
        //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__14849 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator<TPMGL(T)>* atom__10367;
                    for (atom__10367 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(::x10aux::nullCheck(mol)->getAtoms()->iterator());
                         ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atom__10367));
                         ) {
                        TPMGL(T) atom = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atom__10367));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T)>)))au_edu_anu_chem_ConnectivityBuilder__closure__1<TPMGL(T)>(atom, ai, mol))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc44) {
            {
                ::x10::lang::CheckedThrowable* ct__14847 =
                  __exc44;
                {
                    ::x10::lang::Runtime::pushException(ct__14847);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__14849);
    }
}

//#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::detectWeakBonds(
  ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol) {
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    {
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__14854 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::util::ListIterator<TPMGL(T)>* atom__10369;
                    for (atom__10369 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(::x10aux::nullCheck(mol)->getAtoms()->iterator());
                         ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atom__10369));
                         ) {
                        TPMGL(T) atom = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atom__10369));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T)>)))au_edu_anu_chem_ConnectivityBuilder__closure__2<TPMGL(T)>(atom, ai, mol, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc46) {
            {
                ::x10::lang::CheckedThrowable* ct__14852 =
                  __exc46;
                {
                    ::x10::lang::Runtime::pushException(ct__14852);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__14854);
    }
}

//#line 119 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> ::x10x::vector::Vector3d au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::computeAxis(
  ::au::edu::anu::chem::Atom* atom) {
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
      ::x10aux::nullCheck(atom)->getBonds();
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10x::vector::Vector3d axis = ::x10x::vector::Vector3d::FMGL(NULL__get)();
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    {
        ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__10371;
        for (bond__10371 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(bonds)->iterator());
             ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__10371));
             ) {
            ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond =
              ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__10371));
            
            //#line 124 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            if (((::x10aux::struct_equals(bond->FMGL(first),
                                          ::au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__get)())) ||
                (::x10aux::struct_equals(bond->FMGL(first),
                                         ::au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__get)()))))
            {
                
                //#line 125 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                axis = (__extension__ ({
                    
                    //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                    ::x10x::vector::Vector3d that__14613 =
                      (__extension__ ({
                        
                        //#line 125 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10x::vector::Point3d this__14604 =
                          ::x10aux::nullCheck(atom)->FMGL(centre);
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__14603 =
                          ::x10aux::nullCheck(bond->FMGL(second))->FMGL(centre);
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__14605 =
                              that__14603;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__14606 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__14820 = ((this__14604->FMGL(i)) - (b__14605->FMGL(i)));
                                x10_double j__14821 = ((this__14604->FMGL(j)) - (b__14605->FMGL(j)));
                                x10_double k__14822 = ((this__14604->FMGL(k)) - (b__14605->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__14606->FMGL(i) = i__14820;
                                alloc__14606->FMGL(j) = j__14821;
                                alloc__14606->FMGL(k) = k__14822;
                                alloc__14606;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    (__extension__ ({
                        
                        //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d b__14614 =
                          that__14613;
                        (__extension__ ({
                            
                            //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d alloc__14615 =
                               ::x10x::vector::Vector3d::_alloc();
                            
                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double i__14823 = ((axis->FMGL(i)) + (b__14614->FMGL(i)));
                            x10_double j__14824 = ((axis->FMGL(j)) + (b__14614->FMGL(j)));
                            x10_double k__14825 = ((axis->FMGL(k)) + (b__14614->FMGL(k)));
                            
                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            alloc__14615->FMGL(i) = i__14823;
                            alloc__14615->FMGL(j) = j__14824;
                            alloc__14615->FMGL(k) = k__14825;
                            alloc__14615;
                        }))
                        ;
                    }))
                    ;
                }))
                ;
            }
            
        }
    }
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    return axis;
    
}

//#line 132 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 133 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 134 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 135 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 141 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::identifyRings(
  ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol) {
    
    //#line 142 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    
    //#line 144 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10::lang::Rail< x10_int >* color = ::x10::lang::Rail< x10_int >::_make(noOfAtoms,
                                                                              ((x10_int)0));
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10::lang::Rail< x10_long >* parent = ::x10::lang::Rail< x10_long >::_make(noOfAtoms,
                                                                                 ((x10_long)-1ll));
    
    //#line 148 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (noOfAtoms)); i =
                                                         ((i) + (((x10_long)1ll))))
        {
            
            //#line 149 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            if ((::x10aux::struct_equals(color->x10::lang::template Rail< x10_int >::__apply(
                                           i), ((x10_int)0))))
            {
                
                //#line 150 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                this->traverseAndRecordRing(mol, i, color,
                                            parent);
            }
            
        }
    }
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::chem::Ring<TPMGL(T)>*>* ring__10373;
        for (ring__10373 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::chem::Ring<TPMGL(T)>*>*>(::x10aux::nullCheck(::x10aux::nullCheck(mol)->getRings())->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::chem::Ring<TPMGL(T)>*>::hasNext(::x10aux::nullCheck(ring__10373));
             ) {
            ::au::edu::anu::chem::Ring<TPMGL(T)>* ring = ::x10::util::ListIterator< ::au::edu::anu::chem::Ring<TPMGL(T)>*>::next(::x10aux::nullCheck(ring__10373));
            
            //#line 158 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            x10_long n = ::x10aux::nullCheck(ring)->getSize();
            
            //#line 160 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            if (((n) < (((x10_long)4ll)))) {
                
                //#line 161 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                ::x10aux::nullCheck(ring)->setPlanar(true);
                
                //#line 162 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                continue;
            }
            
            //#line 165 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            ::x10::lang::Rail< ::x10x::vector::Point3d >* points =
              ::x10::lang::Rail< ::x10x::vector::Point3d >::_make(n);
            
            //#line 167 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (n));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 168 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    points->x10::lang::template Rail< ::x10x::vector::Point3d >::__set(
                      ((x10_long)(i)), ::x10aux::nullCheck(::x10aux::nullCheck(ring)->getAtom(
                                                             i))->FMGL(centre));
                }
            }
            
            //#line 171 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (((n) - (((x10_long)1ll)))));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10x::vector::Vector3d a12 = (__extension__ ({
                        ::x10x::vector::Point3d this__14749 =
                          points->x10::lang::template Rail< ::x10x::vector::Point3d >::__apply(
                            ((((x10_long)(i))) + (((x10_long)1ll))));
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__14748 =
                          points->x10::lang::template Rail< ::x10x::vector::Point3d >::__apply(
                            ((x10_long)(i)));
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__14750 =
                              that__14748;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__14751 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__14826 = ((this__14749->FMGL(i)) - (b__14750->FMGL(i)));
                                x10_double j__14827 = ((this__14749->FMGL(j)) - (b__14750->FMGL(j)));
                                x10_double k__14828 = ((this__14749->FMGL(k)) - (b__14750->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__14751->FMGL(i) = i__14826;
                                alloc__14751->FMGL(j) = j__14827;
                                alloc__14751->FMGL(k) = k__14828;
                                alloc__14751;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 173 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    x10_long i2 = ((((((x10_long)(i))) + (((x10_long)2ll)))) >= (n))
                      ? (((x10_long)0ll)) : (((((x10_long)(i))) + (((x10_long)2ll))));
                    
                    //#line 175 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10x::vector::Vector3d a23 = (__extension__ ({
                        ::x10x::vector::Point3d this__14759 =
                          points->x10::lang::template Rail< ::x10x::vector::Point3d >::__apply(
                            i2);
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__14758 =
                          points->x10::lang::template Rail< ::x10x::vector::Point3d >::__apply(
                            ((((x10_long)(i))) + (((x10_long)1ll))));
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__14760 =
                              that__14758;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__14761 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__14829 = ((this__14759->FMGL(i)) - (b__14760->FMGL(i)));
                                x10_double j__14830 = ((this__14759->FMGL(j)) - (b__14760->FMGL(j)));
                                x10_double k__14831 = ((this__14759->FMGL(k)) - (b__14760->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__14761->FMGL(i) = i__14829;
                                alloc__14761->FMGL(j) = j__14830;
                                alloc__14761->FMGL(k) = k__14831;
                                alloc__14761;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 176 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    x10_long i3 = ((((((x10_long)(i))) + (((x10_long)3ll)))) >= (n))
                      ? (((x10_long)0ll)) : (((((x10_long)(i))) + (((x10_long)3ll))));
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10x::vector::Vector3d a34 = (__extension__ ({
                        ::x10x::vector::Point3d this__14769 =
                          points->x10::lang::template Rail< ::x10x::vector::Point3d >::__apply(
                            i3);
                        
                        //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d that__14768 =
                          points->x10::lang::template Rail< ::x10x::vector::Point3d >::__apply(
                            i2);
                        (__extension__ ({
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__14770 =
                              that__14768;
                            (__extension__ ({
                                
                                //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Vector3d alloc__14771 =
                                   ::x10x::vector::Vector3d::_alloc();
                                
                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                x10_double i__14832 = ((this__14769->FMGL(i)) - (b__14770->FMGL(i)));
                                x10_double j__14833 = ((this__14769->FMGL(j)) - (b__14770->FMGL(j)));
                                x10_double k__14834 = ((this__14769->FMGL(k)) - (b__14770->FMGL(k)));
                                
                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                alloc__14771->FMGL(i) = i__14832;
                                alloc__14771->FMGL(j) = j__14833;
                                alloc__14771->FMGL(k) = k__14834;
                                alloc__14771;
                            }))
                            ;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 180 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10x::vector::Vector3d n1 = (__extension__ ({
                        
                        //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d vec__14778 =
                          a23;
                        (__extension__ ({
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d alloc__14779 =
                               ::x10x::vector::Vector3d::_alloc();
                            
                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double i__14835 = ((((a12->FMGL(j)) * (vec__14778->FMGL(k)))) - (((a12->FMGL(k)) * (vec__14778->FMGL(j)))));
                            x10_double j__14836 = ((((a12->FMGL(k)) * (vec__14778->FMGL(i)))) - (((a12->FMGL(i)) * (vec__14778->FMGL(k)))));
                            x10_double k__14837 = ((((a12->FMGL(i)) * (vec__14778->FMGL(j)))) - (((a12->FMGL(j)) * (vec__14778->FMGL(i)))));
                            
                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            alloc__14779->FMGL(i) = i__14835;
                            alloc__14779->FMGL(j) = j__14836;
                            alloc__14779->FMGL(k) = k__14837;
                            alloc__14779;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 181 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10x::vector::Vector3d n2 = (__extension__ ({
                        
                        //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                        ::x10x::vector::Vector3d vec__14786 =
                          a34;
                        (__extension__ ({
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d alloc__14787 =
                               ::x10x::vector::Vector3d::_alloc();
                            
                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double i__14838 = ((((a23->FMGL(j)) * (vec__14786->FMGL(k)))) - (((a23->FMGL(k)) * (vec__14786->FMGL(j)))));
                            x10_double j__14839 = ((((a23->FMGL(k)) * (vec__14786->FMGL(i)))) - (((a23->FMGL(i)) * (vec__14786->FMGL(k)))));
                            x10_double k__14840 = ((((a23->FMGL(i)) * (vec__14786->FMGL(j)))) - (((a23->FMGL(j)) * (vec__14786->FMGL(i)))));
                            
                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            alloc__14787->FMGL(i) = i__14838;
                            alloc__14787->FMGL(j) = j__14839;
                            alloc__14787->FMGL(k) = k__14840;
                            alloc__14787;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 183 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    if ((((__extension__ ({
                            
                            //#line 106 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ::x10x::vector::Vector3d vec__14794 =
                              n2;
                            x10_double ret__14797;
                            
                            //#line 107 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double aDotb__14841 = (__extension__ ({
                                
                                //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                ::x10x::vector::Vector3d vec__14842 =
                                  vec__14794;
                                ((((((n1->FMGL(i)) * (vec__14842->FMGL(i)))) + (((n1->FMGL(j)) * (vec__14842->FMGL(j)))))) + (((n1->FMGL(k)) * (vec__14842->FMGL(k)))));
                            }))
                            ;
                            
                            //#line 108 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            x10_double ab__14843 = ((::x10::lang::MathNatives::sqrt(((((((n1->FMGL(i)) * (n1->FMGL(i)))) + (((n1->FMGL(j)) * (n1->FMGL(j)))))) + (((n1->FMGL(k)) * (n1->FMGL(k))))))) * (::x10::lang::MathNatives::sqrt(((((((vec__14794->FMGL(i)) * (vec__14794->FMGL(i)))) + (((vec__14794->FMGL(j)) * (vec__14794->FMGL(j)))))) + (((vec__14794->FMGL(k)) * (vec__14794->FMGL(k))))))));
                            
                            //#line 110 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                            ret__14797 = ::x10::lang::MathNatives::acos(((aDotb__14841) / (ab__14843)));
                            ret__14797;
                        }))
                        ) > (0.08726646259971647))) {
                        
                        //#line 184 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        ::x10aux::nullCheck(ring)->setPlanar(
                          false);
                        
                        //#line 185 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        break;
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 192 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::traverseAndRecordRing(
  ::au::edu::anu::chem::Molecule<TPMGL(T)>* mol, x10_long v,
  ::x10::lang::Rail< x10_int >* color, ::x10::lang::Rail< x10_long >* parent) {
    
    //#line 193 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10aux::nullCheck(color)->x10::lang::template Rail< x10_int >::__set(
      v, ((x10_int)1));
    
    //#line 195 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10::util::ArrayList< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bonds =
      ::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(::x10aux::nullCheck(mol)->getAtom(
                                                                            v))))->getBonds();
    
    //#line 196 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    x10_long atomIndex;
    
    //#line 199 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    {
        ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >* bond__10375;
        for (bond__10375 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >*>(::x10aux::nullCheck(bonds)->iterator());
             ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::hasNext(::x10aux::nullCheck(bond__10375));
             ) {
            ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> bond =
              ::x10::util::ListIterator< ::x10::util::Pair< ::au::edu::anu::chem::BondType, ::au::edu::anu::chem::Atom*> >::next(::x10aux::nullCheck(bond__10375));
            
            //#line 200 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            atomIndex = ::x10aux::nullCheck(bond->FMGL(second))->getIndex();
            
            //#line 202 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
            if (((!::x10aux::struct_equals(bond->FMGL(first),
                                           ::au::edu::anu::chem::BondType::FMGL(WEAK_BOND__get)())) ||
                (!::x10aux::struct_equals(bond->FMGL(first),
                                          ::au::edu::anu::chem::BondType::FMGL(NO_BOND__get)()))))
            {
                
                //#line 203 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(color)->x10::lang::template Rail< x10_int >::__apply(
                                               atomIndex),
                                             ((x10_int)0))))
                {
                    
                    //#line 204 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10aux::nullCheck(parent)->x10::lang::template Rail< x10_long >::__set(
                      atomIndex, v);
                    
                    //#line 205 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    this->traverseAndRecordRing(mol, atomIndex,
                                                color, parent);
                } else 
                //#line 206 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(color)->x10::lang::template Rail< x10_int >::__apply(
                                               atomIndex),
                                             ((x10_int)2))))
                {
                    
                    //#line 207 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::au::edu::anu::chem::Ring<TPMGL(T)>* theRing =
                       (new (::x10aux::alloc_z< ::au::edu::anu::chem::Ring<TPMGL(T)> >()) ::au::edu::anu::chem::Ring<TPMGL(T)>());
                    
                    //#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
                    theRing->FMGL(atomList) = (__extension__ ({
                        
                        //#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
                        ::x10::util::ArrayList<TPMGL(T)>* alloc__14844 =
                           (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
                        (alloc__14844)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
                        alloc__14844;
                    }))
                    ;
                    theRing->FMGL(planar) = false;
                    
                    //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
                    theRing->FMGL(planar) = true;
                    
                    //#line 209 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    theRing->addAtom(::x10aux::nullCheck(mol)->getAtom(
                                       atomIndex));
                    
                    //#line 211 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    x10_long vertex = atomIndex;
                    
                    //#line 214 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    while (true) {
                        
                        //#line 215 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        vertex = ::x10aux::nullCheck(parent)->x10::lang::template Rail< x10_long >::__apply(
                                   vertex);
                        
                        //#line 217 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if ((::x10aux::struct_equals(vertex,
                                                     ((x10_long)-1ll))))
                        {
                            
                            //#line 218 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            break;
                        } else 
                        //#line 219 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                        if ((::x10aux::struct_equals(vertex,
                                                     v)))
                        {
                            
                            //#line 220 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            theRing->addAtom(::x10aux::nullCheck(mol)->getAtom(
                                               vertex));
                            
                            //#line 221 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            break;
                        } else {
                            
                            //#line 223 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                            theRing->addAtom(::x10aux::nullCheck(mol)->getAtom(
                                               vertex));
                        }
                        
                    }
                    
                    //#line 228 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
                    ::x10aux::nullCheck(mol)->addRing(theRing);
                }
                
            }
            
        }
    }
    
    //#line 235 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::x10aux::nullCheck(color)->x10::lang::template Rail< x10_int >::__set(
      v, ((x10_int)2));
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
template<class TPMGL(T)> ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>*
  au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::au__edu__anu__chem__ConnectivityBuilder____this__au__edu__anu__chem__ConnectivityBuilder(
  ) {
    return this;
    
}
template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::__fieldInitializers_au_edu_anu_chem_ConnectivityBuilder(
  ) {
    this->FMGL(WHITE) = ((x10_int)0);
    this->FMGL(GRAY) = ((x10_int)1);
    this->FMGL(BLACK) = ((x10_int)2);
    this->FMGL(TORSSIAN_ANGLE_TOLERANCE) = 0.08726646259971647;
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(WHITE));
    buf.write(this->FMGL(GRAY));
    buf.write(this->FMGL(BLACK));
    buf.write(this->FMGL(TORSSIAN_ANGLE_TOLERANCE));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)> >()) ::au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void au::edu::anu::chem::ConnectivityBuilder<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(WHITE) = buf.read<x10_int>();
    FMGL(GRAY) = buf.read<x10_int>();
    FMGL(BLACK) = buf.read<x10_int>();
    FMGL(TORSSIAN_ANGLE_TOLERANCE) = buf.read<x10_double>();
}

#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_IMPLEMENTATION
#endif // __AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER_H_NODEPS
