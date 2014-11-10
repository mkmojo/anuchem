#ifndef __AU_EDU_ANU_CHEM_RING_H
#define __AU_EDU_ANU_CHEM_RING_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class Ring_Strings {
  public:
    static ::x10::lang::String sl__32576;
    static ::x10::lang::String sl__32577;
    static ::x10::lang::String sl__32578;
};

template<class TPMGL(T)> class Ring;
template <> class Ring<void>;
template<class TPMGL(T)> class Ring : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::ArrayList<TPMGL(T)>* FMGL(atomList);
    
    x10_boolean FMGL(planar);
    
    void _constructor();
    
    static ::au::edu::anu::chem::Ring<TPMGL(T)>* _make();
    
    virtual void addAtom(TPMGL(T) atm);
    virtual TPMGL(T) getAtom(x10_int index);
    virtual ::x10::util::ArrayList<TPMGL(T)>* getAtoms();
    virtual x10_long getSize();
    virtual x10_boolean isPlanar();
    virtual void setPlanar(x10_boolean p);
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::chem::Ring<TPMGL(T)>* au__edu__anu__chem__Ring____this__au__edu__anu__chem__Ring(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_Ring();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType au::edu::anu::chem::Ring<TPMGL(T)>::rtt;
template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::au::edu::anu::chem::Ring<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "au.edu.anu.chem.Ring";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Ring<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // AU_EDU_ANU_CHEM_RING_H

namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Ring;
} } } } 

#ifndef AU_EDU_ANU_CHEM_RING_H_NODEPS
#define AU_EDU_ANU_CHEM_RING_H_NODEPS
#include <x10/lang/Boolean.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/util/ListIterator.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_CHEM_RING_H_GENERICS
#define AU_EDU_ANU_CHEM_RING_H_GENERICS
#endif // AU_EDU_ANU_CHEM_RING_H_GENERICS
#ifndef AU_EDU_ANU_CHEM_RING_H_IMPLEMENTATION
#define AU_EDU_ANU_CHEM_RING_H_IMPLEMENTATION
#include <au/edu/anu/chem/Ring.h>


//#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    ::au::edu::anu::chem::Ring<TPMGL(T)>* this__15272 = this;
    ::x10aux::nullCheck(this__15272)->FMGL(atomList) = (__extension__ ({
        
        //#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
        ::x10::util::ArrayList<TPMGL(T)>* alloc__15271 =  (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
        (alloc__15271)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
        alloc__15271;
    }))
    ;
    ::x10aux::nullCheck(this__15272)->FMGL(planar) = false;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    this->FMGL(planar) = true;
}
template<class TPMGL(T)> ::au::edu::anu::chem::Ring<TPMGL(T)>* au::edu::anu::chem::Ring<TPMGL(T)>::_make(
                           ) {
    ::au::edu::anu::chem::Ring<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Ring<TPMGL(T)> >()) ::au::edu::anu::chem::Ring<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::addAtom(
  TPMGL(T) atm) {
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    this->FMGL(atomList)->add(atm);
}

//#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> TPMGL(T) au::edu::anu::chem::Ring<TPMGL(T)>::getAtom(
  x10_int index) {
    return this->FMGL(atomList)->get(((x10_long)(index)));
    
}

//#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>* au::edu::anu::chem::Ring<TPMGL(T)>::getAtoms(
  ) {
    return this->FMGL(atomList);
    
}

//#line 36 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> x10_long au::edu::anu::chem::Ring<TPMGL(T)>::getSize(
  ) {
    return this->FMGL(atomList)->size();
    
}

//#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> x10_boolean au::edu::anu::chem::Ring<TPMGL(T)>::isPlanar(
  ) {
    return this->FMGL(planar);
    
}

//#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::setPlanar(
  x10_boolean p) {
    this->FMGL(planar) = p;
}

//#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> ::x10::lang::String* au::edu::anu::chem::Ring<TPMGL(T)>::toString(
  ) {
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    ::x10::lang::String* str = (&::au::edu::anu::chem::Ring_Strings::sl__32576);
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__14747;
        for (atm__14747 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__14747));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__14747));
            
            //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
            str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atm)))->toString(), (&::au::edu::anu::chem::Ring_Strings::sl__32577)));
        }
    }
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    str = ::x10::lang::String::__plus(str, (&::au::edu::anu::chem::Ring_Strings::sl__32578));
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
    return str;
    
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
template<class TPMGL(T)> ::au::edu::anu::chem::Ring<TPMGL(T)>*
  au::edu::anu::chem::Ring<TPMGL(T)>::au__edu__anu__chem__Ring____this__au__edu__anu__chem__Ring(
  ) {
    return this;
    
}
template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::__fieldInitializers_au_edu_anu_chem_Ring(
  ) {
    this->FMGL(atomList) = (__extension__ ({
        
        //#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Ring.x10"
        ::x10::util::ArrayList<TPMGL(T)>* alloc__14745 = 
        (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
        (alloc__14745)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
        alloc__14745;
    }))
    ;
    this->FMGL(planar) = false;
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t au::edu::anu::chem::Ring<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::Ring<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(atomList));
    buf.write(this->FMGL(planar));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::au::edu::anu::chem::Ring<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::Ring<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Ring<TPMGL(T)> >()) ::au::edu::anu::chem::Ring<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void au::edu::anu::chem::Ring<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(atomList) = buf.read< ::x10::util::ArrayList<TPMGL(T)>*>();
    FMGL(planar) = buf.read<x10_boolean>();
}

#endif // AU_EDU_ANU_CHEM_RING_H_IMPLEMENTATION
#endif // __AU_EDU_ANU_CHEM_RING_H_NODEPS
