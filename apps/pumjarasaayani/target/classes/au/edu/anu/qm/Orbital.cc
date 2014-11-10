/*************************************************/
/* START of Orbital */
#include <au/edu/anu/qm/Orbital.h>

#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace qm { 
class Orbital_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::Orbital> {
public:
    static ::x10::lang::Any::itable< Orbital_ibox0 > itable;
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
::x10::lang::Any::itable< Orbital_ibox0 >  Orbital_ibox0::itable(&Orbital_ibox0::equals, &Orbital_ibox0::hashCode, &Orbital_ibox0::toString, &Orbital_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::Orbital >  au::edu::anu::qm::Orbital::_itable_0(&au::edu::anu::qm::Orbital::equals, &au::edu::anu::qm::Orbital::hashCode, &au::edu::anu::qm::Orbital::toString, &au::edu::anu::qm::Orbital::typeName);
::x10aux::itable_entry au::edu::anu::qm::Orbital::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::Orbital::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::Orbital")};
::x10aux::itable_entry au::edu::anu::qm::Orbital::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::Orbital_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::Orbital")};

//#line 19 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"

//#line 20 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
void au::edu::anu::qm::Orbital::_constructor(::x10::lang::String* shape, ::x10::lang::Rail< x10_double >* exps,
                                             ::x10::lang::Rail< x10_double >* coeffs) {
    
    //#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    ::au::edu::anu::qm::Orbital this__128299 = (*this);
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    (*this)->FMGL(exponents) = exps;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    (*this)->FMGL(coefficients) = coeffs;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    (*this)->FMGL(shape) = shape;
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    if (::x10aux::equals(shape,(&::au::edu::anu::qm::Orbital_Strings::sl__149647)))
    {
        (*this)->FMGL(angularMomentum) = ((x10_int)0);
    } else 
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    if (::x10aux::equals(shape,(&::au::edu::anu::qm::Orbital_Strings::sl__149648)))
    {
        (*this)->FMGL(angularMomentum) = ((x10_int)1);
    } else 
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    if (::x10aux::equals(shape,(&::au::edu::anu::qm::Orbital_Strings::sl__149649)))
    {
        (*this)->FMGL(angularMomentum) = ((x10_int)2);
    } else 
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    if (::x10aux::equals(shape,(&::au::edu::anu::qm::Orbital_Strings::sl__149650)))
    {
        (*this)->FMGL(angularMomentum) = ((x10_int)3);
    } else 
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    if (::x10aux::equals(shape,(&::au::edu::anu::qm::Orbital_Strings::sl__149651)))
    {
        (*this)->FMGL(angularMomentum) = ((x10_int)4);
    } else 
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
    if (::x10aux::equals(shape,(&::au::edu::anu::qm::Orbital_Strings::sl__149652)))
    {
        (*this)->FMGL(angularMomentum) = ((x10_int)5);
    } else {
        
        //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::Orbital_Strings::sl__149653),
                                                     reinterpret_cast< ::x10::lang::Any*>(shape));
        (*this)->FMGL(angularMomentum) = ((x10_int)0);
    }
    
}
::au::edu::anu::qm::Orbital au::edu::anu::qm::Orbital::_make(
  ::x10::lang::String* shape, ::x10::lang::Rail< x10_double >* exps,
  ::x10::lang::Rail< x10_double >* coeffs) {
    ::au::edu::anu::qm::Orbital this_; 
    this_->_constructor(shape, exps, coeffs);
    return this_;
}



//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Orbital.x10"
::x10::lang::String* au::edu::anu::qm::Orbital::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::Orbital::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::Orbital_Strings::sl__149654), (&::au::edu::anu::qm::Orbital_Strings::sl__149655)), (*this)->FMGL(exponents)), (&::au::edu::anu::qm::Orbital_Strings::sl__149656)), (*this)->FMGL(coefficients)), (&::au::edu::anu::qm::Orbital_Strings::sl__149657)), (*this)->FMGL(shape)), (&::au::edu::anu::qm::Orbital_Strings::sl__149658)), (*this)->FMGL(angularMomentum));
    
}
x10_int au::edu::anu::qm::Orbital::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(exponents))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(coefficients))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(shape))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(angularMomentum))));
    return result;
    
}
x10_boolean au::edu::anu::qm::Orbital::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::Orbital>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::Orbital::equals(::x10aux::class_cast< ::au::edu::anu::qm::Orbital>(other));
    
}
x10_boolean au::edu::anu::qm::Orbital::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::Orbital>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::Orbital::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::Orbital>(other));
    
}
void ::au::edu::anu::qm::Orbital::_serialize(::au::edu::anu::qm::Orbital this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(exponents));
    buf.write(this_->FMGL(coefficients));
    buf.write(this_->FMGL(shape));
    buf.write(this_->FMGL(angularMomentum));
    
}

void ::au::edu::anu::qm::Orbital::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(exponents) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(coefficients) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(shape) = buf.read< ::x10::lang::String*>();
    FMGL(angularMomentum) = buf.read<x10_int>();
}


::x10aux::RuntimeType au::edu::anu::qm::Orbital::rtt;
void au::edu::anu::qm::Orbital::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.Orbital",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149655(" exponents=");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149649("D");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149654("struct au.edu.anu.qm.Orbital:");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149650("F");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149651("G");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149656(" coefficients=");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149648("P");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149647("S");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149653("Orbital.x10 support SPDFGH: unknown orbital \'%s\'.\n");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149652("H");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149657(" shape=");
::x10::lang::String au::edu::anu::qm::Orbital_Strings::sl__149658(" angularMomentum=");

/* END of Orbital */
/*************************************************/
