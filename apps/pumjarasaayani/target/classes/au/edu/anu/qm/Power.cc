/*************************************************/
/* START of Power */
#include <au/edu/anu/qm/Power.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
namespace au { namespace edu { namespace anu { namespace qm { 
class Power_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::Power> {
public:
    static ::x10::lang::Any::itable< Power_ibox0 > itable;
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
::x10::lang::Any::itable< Power_ibox0 >  Power_ibox0::itable(&Power_ibox0::equals, &Power_ibox0::hashCode, &Power_ibox0::toString, &Power_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::Power >  au::edu::anu::qm::Power::_itable_0(&au::edu::anu::qm::Power::equals, &au::edu::anu::qm::Power::hashCode, &au::edu::anu::qm::Power::toString, &au::edu::anu::qm::Power::typeName);
::x10aux::itable_entry au::edu::anu::qm::Power::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::Power::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::Power")};
::x10aux::itable_entry au::edu::anu::qm::Power::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::Power_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::Power")};

//#line 19 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"


//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
void au::edu::anu::qm::Power::_constructor(x10_int l, x10_int m, x10_int n) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
    FMGL(l) = l;
    FMGL(m) = m;
    FMGL(n) = n;
    
    //#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
    ::au::edu::anu::qm::Power this__109431 = (*this);
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
    (*this)->FMGL(maxam) = (__extension__ ({
        
        //#line 463 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__109424 = l;
        x10_int b__109425 = (__extension__ ({
            x10_int a__109422 = m;
            x10_int b__109423 = n;
            ((a__109422) < (b__109423)) ? (b__109423) : (a__109422);
        }))
        ;
        ((a__109424) < (b__109425)) ? (b__109425) : (a__109424);
    }))
    ;
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
    (*this)->FMGL(minam) = (__extension__ ({
        
        //#line 467 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_int a__109428 = l;
        x10_int b__109429 = (__extension__ ({
            x10_int a__109426 = m;
            x10_int b__109427 = n;
            ((a__109426) < (b__109427)) ? (a__109426) : (b__109427);
        }))
        ;
        ((a__109428) < (b__109429)) ? (a__109428) : (b__109429);
    }))
    ;
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
    (*this)->FMGL(totam) = ((((l) + (m))) + (n));
}
::au::edu::anu::qm::Power au::edu::anu::qm::Power::_make(x10_int l, x10_int m,
                                                         x10_int n) {
    ::au::edu::anu::qm::Power this_; 
    this_->_constructor(l, m, n);
    return this_;
}



//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"

//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/Power.x10"
::x10::lang::String* au::edu::anu::qm::Power::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::Power::toString() {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::Power_Strings::sl__149302), (&::au::edu::anu::qm::Power_Strings::sl__149303)), (*this)->FMGL(l)), (&::au::edu::anu::qm::Power_Strings::sl__149304)), (*this)->FMGL(m)), (&::au::edu::anu::qm::Power_Strings::sl__149305)), (*this)->FMGL(n)), (&::au::edu::anu::qm::Power_Strings::sl__149306)), (*this)->FMGL(maxam)), (&::au::edu::anu::qm::Power_Strings::sl__149307)), (*this)->FMGL(minam)), (&::au::edu::anu::qm::Power_Strings::sl__149308)), (*this)->FMGL(totam));
    
}
x10_int au::edu::anu::qm::Power::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(l))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(m))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(n))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(maxam))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(minam))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(totam))));
    return result;
    
}
x10_boolean au::edu::anu::qm::Power::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::Power>(other))) {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::Power::equals(::x10aux::class_cast< ::au::edu::anu::qm::Power>(other));
    
}
x10_boolean au::edu::anu::qm::Power::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::Power>(other))) {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::Power::_struct_equals(::x10aux::class_cast< ::au::edu::anu::qm::Power>(other));
    
}
void ::au::edu::anu::qm::Power::_serialize(::au::edu::anu::qm::Power this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(maxam));
    buf.write(this_->FMGL(minam));
    buf.write(this_->FMGL(totam));
    buf.write(this_->FMGL(l));
    buf.write(this_->FMGL(m));
    buf.write(this_->FMGL(n));
    
}

void ::au::edu::anu::qm::Power::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(maxam) = buf.read<x10_int>();
    FMGL(minam) = buf.read<x10_int>();
    FMGL(totam) = buf.read<x10_int>();
    FMGL(l) = buf.read<x10_int>();
    FMGL(m) = buf.read<x10_int>();
    FMGL(n) = buf.read<x10_int>();
}


::x10aux::RuntimeType au::edu::anu::qm::Power::rtt;
void au::edu::anu::qm::Power::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.Power",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149303(" l=");
::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149306(" maxam=");
::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149305(" n=");
::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149302("struct au.edu.anu.qm.Power:");
::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149307(" minam=");
::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149308(" totam=");
::x10::lang::String au::edu::anu::qm::Power_Strings::sl__149304(" m=");

/* END of Power */
/*************************************************/
