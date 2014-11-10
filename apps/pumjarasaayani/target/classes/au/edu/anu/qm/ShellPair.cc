/*************************************************/
/* START of ShellPair */
#include <au/edu/anu/qm/ShellPair.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace qm { 
class ShellPair_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::ShellPair> {
public:
    static ::x10::lang::Any::itable< ShellPair_ibox0 > itable;
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
::x10::lang::Any::itable< ShellPair_ibox0 >  ShellPair_ibox0::itable(&ShellPair_ibox0::equals, &ShellPair_ibox0::hashCode, &ShellPair_ibox0::toString, &ShellPair_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::ShellPair >  au::edu::anu::qm::ShellPair::_itable_0(&au::edu::anu::qm::ShellPair::equals, &au::edu::anu::qm::ShellPair::hashCode, &au::edu::anu::qm::ShellPair::toString, &au::edu::anu::qm::ShellPair::typeName);
::x10aux::itable_entry au::edu::anu::qm::ShellPair::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ShellPair::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ShellPair")};
::x10aux::itable_entry au::edu::anu::qm::ShellPair::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ShellPair_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ShellPair")};

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
void au::edu::anu::qm::ShellPair::_constructor(x10_int a, x10_int b, ::x10x::vector::Point3d A,
                                               ::x10x::vector::Point3d B,
                                               ::x10::lang::Rail< x10_double >* zetaA,
                                               ::x10::lang::Rail< x10_double >* zetaB,
                                               ::x10::lang::Rail< x10_double >* conA,
                                               ::x10::lang::Rail< x10_double >* conB,
                                               x10_long mu,
                                               x10_long nu,
                                               ::x10::lang::Rail< x10_int >* L,
                                               x10_double contrib) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    ::au::edu::anu::qm::ShellPair this__148736 = (*this);
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(aang) = a;
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(bang) = b;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(aPoint) = A;
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(bPoint) = B;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(zetaA) = zetaA;
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(zetaB) = zetaB;
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(conA) = conA;
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(conB) = conB;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(mu) = mu;
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(nu) = nu;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(maxbraa) = ((((((a) + (((x10_int)1)))) * (((a) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(maxbrab) = ((((((b) + (((x10_int)1)))) * (((b) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(mu2) = ((((mu) + (((x10_long)((*this)->FMGL(maxbraa)))))) - (((x10_long)(((x10_int)1)))));
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(nu2) = ((((nu) + (((x10_long)((*this)->FMGL(maxbrab)))))) - (((x10_long)(((x10_int)1)))));
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(L) = L;
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    x10_int maxl = ((x10_int)0);
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    x10_long i__137256max__148737 = (((x10_long)(::x10aux::nullCheck(L)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__148738;
        for (i__148738 = ((x10_long)0ll); ((i__148738) <= (i__137256max__148737));
             i__148738 = ((i__148738) + (((x10_long)1ll))))
        {
            x10_long i__148739 = i__148738;
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
            if (((::x10aux::nullCheck(L)->x10::lang::Rail< x10_int >::__apply(
                    i__148739)) > (maxl))) {
                maxl = ::x10aux::nullCheck(L)->x10::lang::Rail< x10_int >::__apply(
                         i__148739);
            }
            
        }
    }
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(maxL) = maxl;
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
    (*this)->FMGL(contrib) = contrib;
}
::au::edu::anu::qm::ShellPair au::edu::anu::qm::ShellPair::_make(
  x10_int a, x10_int b, ::x10x::vector::Point3d A, ::x10x::vector::Point3d B,
  ::x10::lang::Rail< x10_double >* zetaA, ::x10::lang::Rail< x10_double >* zetaB,
  ::x10::lang::Rail< x10_double >* conA, ::x10::lang::Rail< x10_double >* conB,
  x10_long mu, x10_long nu, ::x10::lang::Rail< x10_int >* L,
  x10_double contrib) {
    ::au::edu::anu::qm::ShellPair this_; 
    this_->_constructor(a, b, A, B, zetaA, zetaB, conA, conB,
    mu, nu, L, contrib);
    return this_;
}



//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellPair.x10"
::x10::lang::String* au::edu::anu::qm::ShellPair::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::ShellPair::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::ShellPair_Strings::sl__149986), (&::au::edu::anu::qm::ShellPair_Strings::sl__149987)), (*this)->FMGL(aang)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149988)), (*this)->FMGL(bang)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149989)), (*this)->FMGL(aPoint)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149990)), (*this)->FMGL(bPoint)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149991)), (*this)->FMGL(zetaA)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149992)), (*this)->FMGL(zetaB)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149993)), (*this)->FMGL(conA)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149994)), (*this)->FMGL(conB)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149995)), (*this)->FMGL(mu)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149996)), (*this)->FMGL(nu)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149997)), (*this)->FMGL(mu2)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149998)), (*this)->FMGL(nu2)), (&::au::edu::anu::qm::ShellPair_Strings::sl__149999)), (*this)->FMGL(maxbraa)), (&::au::edu::anu::qm::ShellPair_Strings::sl__150000)), (*this)->FMGL(maxbrab)), (&::au::edu::anu::qm::ShellPair_Strings::sl__150001)), (*this)->FMGL(L)), (&::au::edu::anu::qm::ShellPair_Strings::sl__150002)), (*this)->FMGL(maxL)), (&::au::edu::anu::qm::ShellPair_Strings::sl__150003)), (*this)->FMGL(contrib));
    
}
x10_int au::edu::anu::qm::ShellPair::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(aang))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(bang))));
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(aPoint)->x10x::vector::Point3d::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(bPoint)->x10x::vector::Point3d::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(zetaA))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(zetaB))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(conA))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(conB))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(mu))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(nu))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(mu2))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(nu2))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(maxbraa))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(maxbrab))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(L))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(maxL))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(contrib))));
    return result;
    
}
x10_boolean au::edu::anu::qm::ShellPair::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ShellPair>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ShellPair::equals(::x10aux::class_cast< ::au::edu::anu::qm::ShellPair>(other));
    
}
x10_boolean au::edu::anu::qm::ShellPair::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ShellPair>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ShellPair::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::ShellPair>(other));
    
}
void ::au::edu::anu::qm::ShellPair::_serialize(::au::edu::anu::qm::ShellPair this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(aang));
    buf.write(this_->FMGL(bang));
    buf.write(this_->FMGL(aPoint));
    buf.write(this_->FMGL(bPoint));
    buf.write(this_->FMGL(zetaA));
    buf.write(this_->FMGL(zetaB));
    buf.write(this_->FMGL(conA));
    buf.write(this_->FMGL(conB));
    buf.write(this_->FMGL(mu));
    buf.write(this_->FMGL(nu));
    buf.write(this_->FMGL(mu2));
    buf.write(this_->FMGL(nu2));
    buf.write(this_->FMGL(maxbraa));
    buf.write(this_->FMGL(maxbrab));
    buf.write(this_->FMGL(L));
    buf.write(this_->FMGL(maxL));
    buf.write(this_->FMGL(contrib));
    
}

void ::au::edu::anu::qm::ShellPair::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(aang) = buf.read<x10_int>();
    FMGL(bang) = buf.read<x10_int>();
    FMGL(aPoint) = buf.read< ::x10x::vector::Point3d>();
    FMGL(bPoint) = buf.read< ::x10x::vector::Point3d>();
    FMGL(zetaA) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(zetaB) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(conA) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(conB) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(mu) = buf.read<x10_long>();
    FMGL(nu) = buf.read<x10_long>();
    FMGL(mu2) = buf.read<x10_long>();
    FMGL(nu2) = buf.read<x10_long>();
    FMGL(maxbraa) = buf.read<x10_int>();
    FMGL(maxbrab) = buf.read<x10_int>();
    FMGL(L) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(maxL) = buf.read<x10_int>();
    FMGL(contrib) = buf.read<x10_double>();
}


::x10aux::RuntimeType au::edu::anu::qm::ShellPair::rtt;
void au::edu::anu::qm::ShellPair::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.ShellPair",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149986("struct au.edu.anu.qm.ShellPair:");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__150001(" L=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149993(" conA=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149991(" zetaA=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149988(" bang=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149992(" zetaB=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149990(" bPoint=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149997(" mu2=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__150002(" maxL=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149995(" mu=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149999(" maxbraa=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149998(" nu2=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149987(" aang=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__150000(" maxbrab=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149994(" conB=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__150003(" contrib=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149996(" nu=");
::x10::lang::String au::edu::anu::qm::ShellPair_Strings::sl__149989(" aPoint=");

/* END of ShellPair */
/*************************************************/
