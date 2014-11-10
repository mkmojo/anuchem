#ifndef __AU_EDU_ANU_CHEM_MOLECULE_H
#define __AU_EDU_ANU_CHEM_MOLECULE_H

#include <x10rt.h>


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
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Ring;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace au { namespace edu { namespace anu { namespace chem { 
class AtomInfo;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10x { namespace vector { 
class Vector3d;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class Molecule_Strings {
  public:
    static ::x10::lang::String sl__32539;
    static ::x10::lang::String sl__32542;
    static ::x10::lang::String sl__32540;
    static ::x10::lang::String sl__32537;
    static ::x10::lang::String sl__32541;
    static ::x10::lang::String sl__32536;
    static ::x10::lang::String sl__32538;
};

template<class TPMGL(T)> class Molecule;
template <> class Molecule<void>;
template<class TPMGL(T)> class Molecule : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::ArrayList<TPMGL(T)>* FMGL(atomList);
    
    ::x10::lang::String* FMGL(name);
    
    x10_int FMGL(charge);
    
    x10_int FMGL(multiplicity);
    
    ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>* FMGL(ringList);
    
    ::x10::util::ArrayList< ::x10::lang::String*>* FMGL(speciesList);
    
    x10_double FMGL(maxExtent);
    
    void _constructor();
    
    static ::au::edu::anu::chem::Molecule<TPMGL(T)>* _make();
    
    void _constructor(::x10::lang::String* name);
    
    static ::au::edu::anu::chem::Molecule<TPMGL(T)>* _make(::x10::lang::String* name);
    
    void _constructor(::x10::lang::String* name, x10_int c, x10_int m);
    
    static ::au::edu::anu::chem::Molecule<TPMGL(T)>* _make(::x10::lang::String* name,
                                                           x10_int c,
                                                           x10_int m);
    
    virtual ::x10::lang::String* getName();
    virtual void addAtom(TPMGL(T) atm);
    virtual TPMGL(T) getAtom(x10_long index);
    virtual ::x10::util::ArrayList<TPMGL(T)>* getAtoms();
    virtual x10_long getNumberOfAtoms();
    virtual x10_int getCharge();
    virtual x10_int getMultiplicity();
    virtual void addRing(::au::edu::anu::chem::Ring<TPMGL(T)>* r);
    virtual ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>*
      getRings();
    virtual x10_int getNumberOfElectrons();
    virtual x10_double getMaxExtent();
    virtual ::x10::lang::Rail< ::x10::util::Pair<x10_int, ::x10x::vector::Point3d> >*
      getCoords();
    virtual ::x10x::vector::Point3d centreOfMass();
    virtual ::x10x::vector::Point3d getCentreOfNuclearCharge(
      );
    virtual ::x10x::vector::Point3d getCentreOfVDW(x10_double roZ);
    virtual void transformToSNO(x10_double roZ);
    virtual x10_double getRadius(x10_double roZ);
    virtual x10_long lookupSpecies(::x10::lang::String* symbol);
    virtual ::x10::lang::String* toString();
    virtual ::au::edu::anu::chem::Molecule<TPMGL(T)>* au__edu__anu__chem__Molecule____this__au__edu__anu__chem__Molecule(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_Molecule(
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

template<class TPMGL(T)> ::x10aux::RuntimeType au::edu::anu::chem::Molecule<TPMGL(T)>::rtt;
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::au::edu::anu::chem::Molecule<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "au.edu.anu.chem.Molecule";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Molecule<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // AU_EDU_ANU_CHEM_MOLECULE_H

namespace au { namespace edu { namespace anu { namespace chem { 
template<class TPMGL(T)> class Molecule;
} } } } 

#ifndef AU_EDU_ANU_CHEM_MOLECULE_H_NODEPS
#define AU_EDU_ANU_CHEM_MOLECULE_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/String.h>
#include <au/edu/anu/chem/Ring.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Math.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/Rail.h>
#include <x10/util/Pair.h>
#include <x10x/vector/Vector3d.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_CHEM_MOLECULE_H_GENERICS
#define AU_EDU_ANU_CHEM_MOLECULE_H_GENERICS
#endif // AU_EDU_ANU_CHEM_MOLECULE_H_GENERICS
#ifndef AU_EDU_ANU_CHEM_MOLECULE_H_IMPLEMENTATION
#define AU_EDU_ANU_CHEM_MOLECULE_H_IMPLEMENTATION
#include <au/edu/anu/chem/Molecule.h>


//#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"

//#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
/** 
     * Measures the maximum absolute value of any coordinate x,y,z
     * of all atoms. This is used to estimate a rough cubic box size.
     */

//#line 43 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->au::edu::anu::chem::template Molecule<TPMGL(T)>::__fieldInitializers_au_edu_anu_chem_Molecule();
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(name) = (&::au::edu::anu::chem::Molecule_Strings::sl__32536);
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(charge) = ((x10_int)0);
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(multiplicity) = ((x10_int)1);
}
template<class TPMGL(T)> ::au::edu::anu::chem::Molecule<TPMGL(T)>* au::edu::anu::chem::Molecule<TPMGL(T)>::_make(
                           ) {
    ::au::edu::anu::chem::Molecule<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule<TPMGL(T)> >()) ::au::edu::anu::chem::Molecule<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::_constructor(
                           ::x10::lang::String* name) {
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    (this)->::au::edu::anu::chem::Molecule<TPMGL(T)>::_constructor(
      name, ((x10_int)0), ((x10_int)1));
    
}
template<class TPMGL(T)> ::au::edu::anu::chem::Molecule<TPMGL(T)>* au::edu::anu::chem::Molecule<TPMGL(T)>::_make(
                           ::x10::lang::String* name) {
    ::au::edu::anu::chem::Molecule<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule<TPMGL(T)> >()) ::au::edu::anu::chem::Molecule<TPMGL(T)>();
    this_->_constructor(name);
    return this_;
}



//#line 53 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::_constructor(
                           ::x10::lang::String* name, x10_int c,
                           x10_int m) {
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->au::edu::anu::chem::template Molecule<TPMGL(T)>::__fieldInitializers_au_edu_anu_chem_Molecule();
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(name) = name;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(charge) = c;
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(multiplicity) = m;
}
template<class TPMGL(T)> ::au::edu::anu::chem::Molecule<TPMGL(T)>* au::edu::anu::chem::Molecule<TPMGL(T)>::_make(
                           ::x10::lang::String* name, x10_int c,
                           x10_int m) {
    ::au::edu::anu::chem::Molecule<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule<TPMGL(T)> >()) ::au::edu::anu::chem::Molecule<TPMGL(T)>();
    this_->_constructor(name, c, m);
    return this_;
}



//#line 59 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10::lang::String* au::edu::anu::chem::Molecule<TPMGL(T)>::getName(
  ) {
    return this->FMGL(name);
    
}

//#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::addAtom(
  TPMGL(T) atm) {
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(atomList)->add(atm);
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10aux::nullCheck(atm)->FMGL(index) = this->FMGL(atomList)->size();
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(maxExtent) = ::x10::lang::MathNatives::fmax(this->FMGL(maxExtent),::fabs(::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i)));
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(maxExtent) = ::x10::lang::MathNatives::fmax(this->FMGL(maxExtent),::fabs(::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j)));
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(maxExtent) = ::x10::lang::MathNatives::fmax(this->FMGL(maxExtent),::fabs(::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k)));
}

//#line 69 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> TPMGL(T) au::edu::anu::chem::Molecule<TPMGL(T)>::getAtom(
  x10_long index) {
    return this->FMGL(atomList)->get(index);
    
}

//#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>*
  au::edu::anu::chem::Molecule<TPMGL(T)>::getAtoms() {
    return this->FMGL(atomList);
    
}

//#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_long au::edu::anu::chem::Molecule<TPMGL(T)>::getNumberOfAtoms(
  ) {
    return this->FMGL(atomList)->size();
    
}

//#line 72 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_int au::edu::anu::chem::Molecule<TPMGL(T)>::getCharge(
  ) {
    return this->FMGL(charge);
    
}

//#line 73 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_int au::edu::anu::chem::Molecule<TPMGL(T)>::getMultiplicity(
  ) {
    return this->FMGL(multiplicity);
    
}

//#line 75 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::addRing(
  ::au::edu::anu::chem::Ring<TPMGL(T)>* r) {
    this->FMGL(ringList)->add(r);
}

//#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>*
  au::edu::anu::chem::Molecule<TPMGL(T)>::getRings() {
    return this->FMGL(ringList);
    
}

//#line 78 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_int au::edu::anu::chem::Molecule<TPMGL(T)>::getNumberOfElectrons(
  ) {
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_int ne = ((x10_int)0);
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__11166;
        for (atm__11166 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11166));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11166));
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            ne = ((ne) + (ai->getAtomicNumber(::x10aux::nullCheck(atm)->FMGL(species))));
        }
    }
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return ((ne) - (this->FMGL(charge)));
    
}

//#line 87 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_double au::edu::anu::chem::Molecule<TPMGL(T)>::getMaxExtent(
  ) {
    return this->FMGL(maxExtent);
    
}

//#line 89 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10::lang::Rail< ::x10::util::Pair<x10_int, ::x10x::vector::Point3d> >*
  au::edu::anu::chem::Molecule<TPMGL(T)>::getCoords() {
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10::lang::Rail< ::x10::util::Pair<x10_int, ::x10x::vector::Point3d> >* coords =
      ::x10::lang::Rail< ::x10::util::Pair<x10_int, ::x10x::vector::Point3d> >::_make(this->FMGL(atomList)->size());
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_long i__11168max__15151 = ((this->FMGL(atomList)->size()) - (((x10_long)1ll)));
    {
        x10_long i__15152;
        for (i__15152 = ((x10_long)0ll); ((i__15152) <= (i__11168max__15151));
             i__15152 = ((i__15152) + (((x10_long)1ll))))
        {
            x10_long i__15153 = i__15152;
            
            //#line 92 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            TPMGL(T) atom__15149 = this->FMGL(atomList)->__apply(
                                     i__15153);
            
            //#line 93 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            coords->x10::lang::template Rail< ::x10::util::Pair<x10_int, ::x10x::vector::Point3d> >::__set(
              i__15153, (__extension__ ({
                  ::x10::util::Pair<x10_int, ::x10x::vector::Point3d> alloc__15150 =
                     ::x10::util::Pair<x10_int, ::x10x::vector::Point3d>::_alloc();
                  
                  //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                  x10_int first__15147 = ::x10aux::nullCheck(atom__15149)->FMGL(species);
                  ::x10x::vector::Point3d second__15148 =
                    ::x10aux::nullCheck(atom__15149)->FMGL(centre);
                  
                  //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                  alloc__15150->FMGL(first) = first__15147;
                  
                  //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
                  alloc__15150->FMGL(second) = second__15148;
                  alloc__15150;
              }))
              );
        }
    }
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return coords;
    
}

//#line 98 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10x::vector::Point3d au::edu::anu::chem::Molecule<TPMGL(T)>::centreOfMass(
  ) {
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double x = 0.0;
    x10_double y = 0.0;
    x10_double z = 0.0;
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double massSum = 0.0;
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__11186;
        for (atm__11186 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11186));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11186));
            
            //#line 104 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            x10_double mass = ai->getAtomicMass(::x10aux::nullCheck(atm)->FMGL(species));
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            x = ((x) + (((mass) * (::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i)))));
            
            //#line 106 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            y = ((y) + (((mass) * (::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j)))));
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            z = ((z) + (((mass) * (::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k)))));
            
            //#line 109 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            massSum = ((massSum) + (mass));
        }
    }
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10x::vector::Point3d alloc__15157 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__15154 = ((x) / (massSum));
    x10_double j__15155 = ((y) / (massSum));
    x10_double k__15156 = ((z) / (massSum));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    alloc__15157->FMGL(i) = i__15154;
    alloc__15157->FMGL(j) = j__15155;
    alloc__15157->FMGL(k) = k__15156;
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return alloc__15157;
    
}

//#line 115 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10x::vector::Point3d au::edu::anu::chem::Molecule<TPMGL(T)>::getCentreOfNuclearCharge(
  ) {
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double x = 0.0;
    x10_double y = 0.0;
    x10_double z = 0.0;
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double chargeSum = 0.0;
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__11188;
        for (atm__11188 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11188));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11188));
            
            //#line 121 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            x10_int nuclearCharge = ai->getAtomicNumber(::x10aux::nullCheck(atm)->FMGL(species));
            
            //#line 122 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            x = ((x) + (((((x10_double) (nuclearCharge))) * (::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i)))));
            
            //#line 123 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            y = ((y) + (((((x10_double) (nuclearCharge))) * (::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j)))));
            
            //#line 124 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            z = ((z) + (((((x10_double) (nuclearCharge))) * (::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k)))));
            
            //#line 126 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            chargeSum = ((chargeSum) + (((x10_double) (nuclearCharge))));
        }
    }
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10x::vector::Point3d alloc__15161 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__15158 = ((x) / (chargeSum));
    x10_double j__15159 = ((y) / (chargeSum));
    x10_double k__15160 = ((z) / (chargeSum));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    alloc__15161->FMGL(i) = i__15158;
    alloc__15161->FMGL(j) = j__15159;
    alloc__15161->FMGL(k) = k__15160;
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return alloc__15161;
    
}

//#line 132 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10x::vector::Point3d au::edu::anu::chem::Molecule<TPMGL(T)>::getCentreOfVDW(
  x10_double roZ) {
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 134 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double step = ((0.1) / (roZ));
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10x::vector::Point3d initialguess = this->centreOfMass();
    
    //#line 136 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double x = (-(initialguess->FMGL(i)));
    x10_double y = (-(initialguess->FMGL(j)));
    x10_double z = (-(initialguess->FMGL(k)));
    
    //#line 137 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_boolean isConverged = false;
    
    //#line 139 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    while (((::x10aux::struct_equals(isConverged, false)) ||
           ((step) > (((1.0E-4) / (roZ)))))) {
        
        //#line 140 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        x10_double rad1 = 0.0;
        x10_double rad2 = 0.0;
        x10_double dx = 0.0;
        x10_double dy = 0.0;
        x10_double dz = 0.0;
        
        //#line 142 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        {
            ::x10::util::ListIterator<TPMGL(T)>* atm__11190;
            for (atm__11190 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
                 ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11190));
                 ) {
                TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11190));
                
                //#line 143 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                ::x10x::vector::Vector3d atmvec =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__15162 = ((::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i)) + (x));
                x10_double j__15163 = ((::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j)) + (y));
                x10_double k__15164 = ((::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k)) + (z));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                atmvec->FMGL(i) = i__15162;
                atmvec->FMGL(j) = j__15163;
                atmvec->FMGL(k) = k__15164;
                
                //#line 144 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                x10_double distance = ((::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))) + (((ai->getVdWRadius(
                                                                                                                                                                                                                        ::x10aux::nullCheck(atm)->FMGL(species))) / (roZ))));
                
                //#line 145 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                if ((((rad1) < (distance)) && ((::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))) > (1.0E-15))))
                {
                    
                    //#line 146 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                    rad1 = distance;
                    
                    //#line 147 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                    dx = (((((-(::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i)))) / (::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))))) * (step));
                    
                    //#line 148 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                    dy = (((((-(::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j)))) / (::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))))) * (step));
                    
                    //#line 149 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                    dz = (((((-(::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k)))) / (::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))))) * (step));
                }
                
            }
        }
        
        //#line 152 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        {
            ::x10::util::ListIterator<TPMGL(T)>* atm__11192;
            for (atm__11192 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
                 ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11192));
                 ) {
                TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11192));
                
                //#line 153 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                ::x10x::vector::Vector3d atmvec =  ::x10x::vector::Vector3d::_alloc();
                
                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                x10_double i__15165 = ((((::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i)) + (x))) + (dx));
                x10_double j__15166 = ((((::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j)) + (y))) + (dy));
                x10_double k__15167 = ((((::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k)) + (z))) + (dz));
                
                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                atmvec->FMGL(i) = i__15165;
                atmvec->FMGL(j) = j__15166;
                atmvec->FMGL(k) = k__15167;
                
                //#line 154 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                x10_double distance = ((::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))) + (((ai->getVdWRadius(
                                                                                                                                                                                                                        ::x10aux::nullCheck(atm)->FMGL(species))) / (roZ))));
                
                //#line 155 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
                if (((rad2) < (distance))) {
                    rad2 = distance;
                }
                
            }
        }
        
        //#line 158 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        if (((rad2) < (rad1))) {
            x = ((x) + (dx));
            y = ((y) + (dy));
            z = ((z) + (dz));
            isConverged = false;
        } else {
            
            //#line 159 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            isConverged = true;
            step = ((step) * (0.1));
        }
        
    }
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10x::vector::Point3d alloc__15171 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__15168 = (-(x));
    x10_double j__15169 = (-(y));
    x10_double k__15170 = (-(z));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    alloc__15171->FMGL(i) = i__15168;
    alloc__15171->FMGL(j) = j__15169;
    alloc__15171->FMGL(k) = k__15170;
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return alloc__15171;
    
}

//#line 170 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::transformToSNO(
  x10_double roZ) {
    
    //#line 172 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10x::vector::Point3d molCentre = this->getCentreOfVDW(
                                          roZ);
    
    //#line 173 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10x::vector::Vector3d translation =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    x10_double i__15175 = (-(molCentre->FMGL(i)));
    x10_double j__15176 = (-(molCentre->FMGL(j)));
    x10_double k__15177 = (-(molCentre->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    translation->FMGL(i) = i__15175;
    translation->FMGL(j) = j__15176;
    translation->FMGL(k) = k__15177;
    
    //#line 174 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    if (((::x10::lang::MathNatives::sqrt(((((((translation->FMGL(i)) * (translation->FMGL(i)))) + (((translation->FMGL(j)) * (translation->FMGL(j)))))) + (((translation->FMGL(k)) * (translation->FMGL(k))))))) > (((1.0E-5) / (roZ)))))
    {
        
        //#line 175 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::chem::Molecule_Strings::sl__32537),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(translation->FMGL(i)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(translation->FMGL(j)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(translation->FMGL(k)));
    }
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__11194;
        for (atm__11194 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11194));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11194));
            
            //#line 178 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            ::x10aux::nullCheck(atm)->FMGL(centre) = (__extension__ ({
                ::x10x::vector::Point3d this__15132 = ::x10aux::nullCheck(atm)->FMGL(centre);
                
                //#line 31 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                ::x10x::vector::Vector3d that__15131 = translation;
                (__extension__ ({
                    
                    //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                    ::x10x::vector::Vector3d b__15133 = that__15131;
                    (__extension__ ({
                        
                        //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        ::x10x::vector::Point3d alloc__15134 =
                           ::x10x::vector::Point3d::_alloc();
                        
                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double i__15172 = ((this__15132->FMGL(i)) + (b__15133->FMGL(i)));
                        x10_double j__15173 = ((this__15132->FMGL(j)) + (b__15133->FMGL(j)));
                        x10_double k__15174 = ((this__15132->FMGL(k)) + (b__15133->FMGL(k)));
                        
                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        alloc__15134->FMGL(i) = i__15172;
                        alloc__15134->FMGL(j) = j__15173;
                        alloc__15134->FMGL(k) = k__15174;
                        alloc__15134;
                    }))
                    ;
                }))
                ;
            }))
            ;
        }
    }
    
}

//#line 183 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_double au::edu::anu::chem::Molecule<TPMGL(T)>::getRadius(
  x10_double roZ) {
    
    //#line 184 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 185 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_double rad = 0.0;
    
    //#line 186 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__11196;
        for (atm__11196 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11196));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11196));
            
            //#line 187 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            ::x10x::vector::Vector3d atmvec =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double i__15178 = ::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(i);
            x10_double j__15179 = ::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(j);
            x10_double k__15180 = ::x10aux::nullCheck(atm)->FMGL(centre)->FMGL(k);
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            atmvec->FMGL(i) = i__15178;
            atmvec->FMGL(j) = j__15179;
            atmvec->FMGL(k) = k__15180;
            
            //#line 188 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            x10_double distance = ((::x10::lang::MathNatives::sqrt(((((((atmvec->FMGL(i)) * (atmvec->FMGL(i)))) + (((atmvec->FMGL(j)) * (atmvec->FMGL(j)))))) + (((atmvec->FMGL(k)) * (atmvec->FMGL(k))))))) + (((ai->getVdWRadius(
                                                                                                                                                                                                                    ::x10aux::nullCheck(atm)->FMGL(species))) / (roZ))));
            
            //#line 189 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            if (((rad) < (distance))) {
                rad = distance;
            }
            
        }
    }
    
    //#line 191 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::chem::Molecule_Strings::sl__32538),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((rad) * (roZ))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(rad));
    
    //#line 192 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return rad;
    
}

//#line 195 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> x10_long au::edu::anu::chem::Molecule<TPMGL(T)>::lookupSpecies(
  ::x10::lang::String* symbol) {
    
    //#line 196 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    x10_long i__11198max__15181 = ((this->FMGL(speciesList)->size()) - (((x10_long)1ll)));
    {
        x10_long i__15182;
        for (i__15182 = ((x10_long)0ll); ((i__15182) <= (i__11198max__15181));
             i__15182 = ((i__15182) + (((x10_long)1ll))))
        {
            x10_long i__15183 = i__15182;
            
            //#line 197 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            if ((::x10aux::struct_equals(this->FMGL(speciesList)->__apply(
                                           i__15183), symbol)))
            {
                return i__15183;
                
            }
            
        }
    }
    
    //#line 199 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    this->FMGL(speciesList)->add(symbol);
    
    //#line 200 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return ((this->FMGL(speciesList)->size()) - (((x10_long)1ll)));
    
}

//#line 203 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::x10::lang::String* au::edu::anu::chem::Molecule<TPMGL(T)>::toString(
  ) {
    
    //#line 204 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10::lang::String* str = (&::au::edu::anu::chem::Molecule_Strings::sl__32539);
    
    //#line 206 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    if ((!::x10aux::struct_equals(this->FMGL(charge), ((x10_int)0))))
    {
        
        //#line 207 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::chem::Molecule_Strings::sl__32540), this->FMGL(charge)), (&::au::edu::anu::chem::Molecule_Strings::sl__32541)), (&::au::edu::anu::chem::Molecule_Strings::sl__32542)), this->FMGL(multiplicity)), (&::au::edu::anu::chem::Molecule_Strings::sl__32541)));
    }
    
    //#line 211 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* atm__11216;
        for (atm__11216 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(this->FMGL(atomList)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(atm__11216));
             ) {
            TPMGL(T) atm = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(atm__11216));
            
            //#line 212 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
            str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(::x10aux::nullCheck((reinterpret_cast< ::au::edu::anu::chem::Atom*>(atm)))->toString(), (&::au::edu::anu::chem::Molecule_Strings::sl__32541)));
        }
    }
    
    //#line 214 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    return str;
    
}

//#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
template<class TPMGL(T)> ::au::edu::anu::chem::Molecule<TPMGL(T)>*
  au::edu::anu::chem::Molecule<TPMGL(T)>::au__edu__anu__chem__Molecule____this__au__edu__anu__chem__Molecule(
  ) {
    return this;
    
}
template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::__fieldInitializers_au_edu_anu_chem_Molecule(
  ) {
    this->FMGL(atomList) = (__extension__ ({
        
        //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        ::x10::util::ArrayList<TPMGL(T)>* alloc__11162 = 
        (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
        (alloc__11162)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
        alloc__11162;
    }))
    ;
    this->FMGL(ringList) = (__extension__ ({
        
        //#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>* alloc__11163 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>());
        (alloc__11163)->::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>::_constructor();
        alloc__11163;
    }))
    ;
    this->FMGL(speciesList) = (__extension__ ({
        
        //#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* alloc__11164 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::lang::String*> >()) ::x10::util::ArrayList< ::x10::lang::String*>());
        (alloc__11164)->::x10::util::ArrayList< ::x10::lang::String*>::_constructor();
        alloc__11164;
    }))
    ;
    this->FMGL(maxExtent) = 0.0;
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t au::edu::anu::chem::Molecule<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::Molecule<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(atomList));
    buf.write(this->FMGL(name));
    buf.write(this->FMGL(charge));
    buf.write(this->FMGL(multiplicity));
    buf.write(this->FMGL(ringList));
    buf.write(this->FMGL(speciesList));
    buf.write(this->FMGL(maxExtent));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::au::edu::anu::chem::Molecule<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::Molecule<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule<TPMGL(T)> >()) ::au::edu::anu::chem::Molecule<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void au::edu::anu::chem::Molecule<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(atomList) = buf.read< ::x10::util::ArrayList<TPMGL(T)>*>();
    FMGL(name) = buf.read< ::x10::lang::String*>();
    FMGL(charge) = buf.read<x10_int>();
    FMGL(multiplicity) = buf.read<x10_int>();
    FMGL(ringList) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::chem::Ring<TPMGL(T)>*>*>();
    FMGL(speciesList) = buf.read< ::x10::util::ArrayList< ::x10::lang::String*>*>();
    FMGL(maxExtent) = buf.read<x10_double>();
}

#endif // AU_EDU_ANU_CHEM_MOLECULE_H_IMPLEMENTATION
#endif // __AU_EDU_ANU_CHEM_MOLECULE_H_NODEPS
