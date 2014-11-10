/*************************************************/
/* START of ShellList */
#include <au/edu/anu/qm/ShellList.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/qm/Power.h>
#include <x10/util/HashMap.h>
#include <au/edu/anu/qm/Shell.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/qm/PowerList.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace qm { 
class ShellList_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::ShellList> {
public:
    static ::x10::lang::Any::itable< ShellList_ibox0 > itable;
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
::x10::lang::Any::itable< ShellList_ibox0 >  ShellList_ibox0::itable(&ShellList_ibox0::equals, &ShellList_ibox0::hashCode, &ShellList_ibox0::toString, &ShellList_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::ShellList >  au::edu::anu::qm::ShellList::_itable_0(&au::edu::anu::qm::ShellList::equals, &au::edu::anu::qm::ShellList::hashCode, &au::edu::anu::qm::ShellList::toString, &au::edu::anu::qm::ShellList::typeName);
::x10aux::itable_entry au::edu::anu::qm::ShellList::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ShellList::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ShellList")};
::x10aux::itable_entry au::edu::anu::qm::ShellList::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ShellList_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ShellList")};

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
void au::edu::anu::qm::ShellList::_constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule) {
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    ::au::edu::anu::qm::ShellList this__109408 = (*this);
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::Shell*>* shellList =
       (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::Shell*> >()) ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::Shell*>());
    (shellList)->::x10::util::HashMap<x10_int, ::au::edu::anu::qm::Shell*>::_constructor();
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    x10_int maxam = ((x10_int)0);
    x10_int maxDcon = ((x10_int)0);
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    {
        x10_int atmno;
        for (atmno = ((x10_int)0); ((((x10_long)(atmno))) < (::x10aux::nullCheck(molecule)->getNumberOfAtoms()));
             atmno = ((atmno) + (((x10_int)1)))) {
            
            //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            ::au::edu::anu::qm::QMAtom* atom = ::x10aux::nullCheck(molecule)->getAtom(
                                                 ((x10_long)(atmno)));
            
            //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bfs =
              ::x10aux::nullCheck(atom)->getBasisFunctions();
            
            //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            x10_long nbf = ::x10aux::nullCheck(bfs)->size();
            
            //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (nbf));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    ::au::edu::anu::qm::ContractedGaussian cg =
                      ::x10aux::nullCheck(bfs)->get(((x10_long)(i)));
                    
                    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    x10_int am = (__extension__ ({
                        
                        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                        ::au::edu::anu::qm::Power this__109401 =
                          cg->FMGL(power);
                        this__109401->FMGL(maxam);
                    }))
                    ;
                    
                    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    x10_int dcon = ((x10_int) ((x10_long)(::x10aux::nullCheck(cg->FMGL(coefficients))->FMGL(size))));
                    
                    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    maxam = (__extension__ ({
                        
                        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_int a__109402 = am;
                        x10_int b__109403 = maxam;
                        ((a__109402) < (b__109403)) ? (b__109403)
                          : (a__109402);
                    }))
                    ;
                    
                    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    maxDcon = (__extension__ ({
                        
                        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_int a__109404 = dcon;
                        x10_int b__109405 = maxDcon;
                        ((a__109404) < (b__109405)) ? (b__109405)
                          : (a__109404);
                    }))
                    ;
                    
                    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    ::au::edu::anu::qm::Shell* shell = shellList->getOrElse(
                                                         am,
                                                         ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Shell*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    if ((::x10aux::struct_equals(shell, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                    {
                        
                        //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                        shell = (__extension__ ({
                            ::au::edu::anu::qm::Shell* alloc__68773 =
                               (new (::x10aux::alloc_z< ::au::edu::anu::qm::Shell>()) ::au::edu::anu::qm::Shell());
                            (alloc__68773)->::au::edu::anu::qm::Shell::_constructor(
                              am);
                            alloc__68773;
                        }))
                        ;
                        
                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                        shellList->put(am, shell);
                    }
                    
                    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                    ::x10aux::nullCheck(shell)->addShellPrimitive(
                      cg);
                }
            }
            
        }
    }
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    x10_int maxam4 = ((((maxam) * (((x10_int)4)))) + (((x10_int)2)));
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >* powerList =
      ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::_make(((x10_long)(((maxam4) + (((x10_int)1))))));
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    ::au::edu::anu::qm::PowerList* pList = (__extension__ ({
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
        ::au::edu::anu::qm::PowerList* alloc__109407 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::PowerList>()) ::au::edu::anu::qm::PowerList());
        (alloc__109407)->::au::edu::anu::qm::PowerList::_constructor();
        alloc__109407;
    }))
    ;
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    x10_int i__68775max__109409 = maxam4;
    {
        x10_int i__109410;
        for (i__109410 = ((x10_int)0); ((i__109410) <= (i__68775max__109409));
             i__109410 = ((i__109410) + (((x10_int)1)))) {
            x10_int i__109411 = i__109410;
            powerList->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__set(
              ((x10_long)(i__109411)), ::x10aux::nullCheck(pList)->au::edu::anu::qm::PowerList::generatePowerList(
                                         i__109411));
        }
    }
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    (*this)->FMGL(maxam) = maxam;
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    (*this)->FMGL(maxDcon) = maxDcon;
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    (*this)->FMGL(shellList) = shellList;
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    (*this)->FMGL(powerList) = powerList;
}
::au::edu::anu::qm::ShellList au::edu::anu::qm::ShellList::_make(
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule)
{
    ::au::edu::anu::qm::ShellList this_; 
    this_->_constructor(molecule);
    return this_;
}



//#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
x10_int au::edu::anu::qm::ShellList::getNumberOfShellPrimitives(
  ) {
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    x10_int n = ((x10_int)0);
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    {
        ::x10::lang::Iterator<x10_int>* shell__68793;
        for (shell__68793 = ::x10::util::Set<x10_int>::iterator(::x10aux::nullCheck(::x10aux::nullCheck((*this)->FMGL(shellList))->keySet()));
             ::x10::lang::Iterator<x10_int>::hasNext(::x10aux::nullCheck(shell__68793));
             ) {
            x10_int shell = ::x10::lang::Iterator<x10_int>::next(::x10aux::nullCheck(shell__68793));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            n = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(n))) + (::x10aux::nullCheck(::x10aux::nullCheck((*this)->FMGL(shellList))->getOrElse(
                                                                                                     shell,
                                                                                                     ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Shell*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))->getNumberOfShellPrimitives()))));
        }
    }
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    return n;
    
}

//#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >*
  au::edu::anu::qm::ShellList::getShellPrimitives() {
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* shellPrimitives =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>());
    (shellPrimitives)->::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>::_constructor();
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    {
        ::x10::lang::Iterator<x10_int>* shell__68795;
        for (shell__68795 = ::x10::util::Set<x10_int>::iterator(::x10aux::nullCheck(::x10aux::nullCheck((*this)->FMGL(shellList))->keySet()));
             ::x10::lang::Iterator<x10_int>::hasNext(::x10aux::nullCheck(shell__68795));
             ) {
            x10_int shell = ::x10::lang::Iterator<x10_int>::next(::x10aux::nullCheck(shell__68795));
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* sp =
              ::x10aux::nullCheck(::x10aux::nullCheck((*this)->FMGL(shellList))->getOrElse(
                                    shell, ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Shell*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))->getShellPrimitives();
            
            //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(sp)->size()));
                     i = ((i) + (((x10_int)1)))) {
                    shellPrimitives->add(::x10aux::nullCheck(sp)->__apply(
                                           ((x10_long)(i))));
                }
            }
            
        }
    }
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    return shellPrimitives->toRail();
    
}

//#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
x10_int au::edu::anu::qm::ShellList::getNumberOfShellPairs(
  ) {
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    x10_int nPrimitives = (*this)->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
    return ((nPrimitives) * (nPrimitives));
    
}

//#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"

//#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"

//#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
::au::edu::anu::qm::Shell* au::edu::anu::qm::ShellList::getShell(
  x10_int am) {
    return ::x10aux::nullCheck((*this)->FMGL(shellList))->getOrElse(
             am, ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Shell*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
::x10::lang::Rail< ::au::edu::anu::qm::Power >* au::edu::anu::qm::ShellList::getPowers(
  x10_int am) {
    return ::x10aux::nullCheck((*this)->FMGL(powerList))->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >::__apply(
             ((x10_long)(am)));
    
}

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
::x10::lang::String* au::edu::anu::qm::ShellList::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::ShellList::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::ShellList_Strings::sl__149259), (&::au::edu::anu::qm::ShellList_Strings::sl__149260)), (*this)->FMGL(shellList)), (&::au::edu::anu::qm::ShellList_Strings::sl__149261)), (*this)->FMGL(powerList)), (&::au::edu::anu::qm::ShellList_Strings::sl__149262)), (*this)->FMGL(maxam)), (&::au::edu::anu::qm::ShellList_Strings::sl__149263)), (*this)->FMGL(maxDcon));
    
}
x10_int au::edu::anu::qm::ShellList::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(shellList))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(powerList))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(maxam))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(maxDcon))));
    return result;
    
}
x10_boolean au::edu::anu::qm::ShellList::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ShellList>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ShellList::equals(::x10aux::class_cast< ::au::edu::anu::qm::ShellList>(other));
    
}
x10_boolean au::edu::anu::qm::ShellList::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ShellList>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ShellList::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::ShellList>(other));
    
}
void ::au::edu::anu::qm::ShellList::_serialize(::au::edu::anu::qm::ShellList this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(shellList));
    buf.write(this_->FMGL(powerList));
    buf.write(this_->FMGL(maxam));
    buf.write(this_->FMGL(maxDcon));
    
}

void ::au::edu::anu::qm::ShellList::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(shellList) = buf.read< ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::Shell*>*>();
    FMGL(powerList) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::qm::Power >* >*>();
    FMGL(maxam) = buf.read<x10_int>();
    FMGL(maxDcon) = buf.read<x10_int>();
}


::x10aux::RuntimeType au::edu::anu::qm::ShellList::rtt;
void au::edu::anu::qm::ShellList::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.ShellList",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::ShellList_Strings::sl__149263(" maxDcon=");
::x10::lang::String au::edu::anu::qm::ShellList_Strings::sl__149262(" maxam=");
::x10::lang::String au::edu::anu::qm::ShellList_Strings::sl__149259("struct au.edu.anu.qm.ShellList:");
::x10::lang::String au::edu::anu::qm::ShellList_Strings::sl__149261(" powerList=");
::x10::lang::String au::edu::anu::qm::ShellList_Strings::sl__149260(" shellList=");

/* END of ShellList */
/*************************************************/
