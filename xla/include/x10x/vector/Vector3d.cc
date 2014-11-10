/*************************************************/
/* START of Vector3d */
#include <x10x/vector/Vector3d.h>


//#line 9 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
namespace x10x { namespace vector { 
class Vector3d_ibox0 : public ::x10::lang::IBox< ::x10x::vector::Vector3d> {
public:
    static ::x10::lang::Any::itable< Vector3d_ibox0 > itable;
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
::x10::lang::Any::itable< Vector3d_ibox0 >  Vector3d_ibox0::itable(&Vector3d_ibox0::equals, &Vector3d_ibox0::hashCode, &Vector3d_ibox0::toString, &Vector3d_ibox0::typeName);
} } 
::x10::lang::Any::itable< ::x10x::vector::Vector3d >  x10x::vector::Vector3d::_itable_0(&x10x::vector::Vector3d::equals, &x10x::vector::Vector3d::hashCode, &x10x::vector::Vector3d::toString, &x10x::vector::Vector3d::typeName);
namespace x10x { namespace vector { 
class Vector3d_ibox1 : public ::x10::lang::IBox< ::x10x::vector::Vector3d> {
public:
    static ::x10x::vector::Tuple3d::itable< Vector3d_ibox1 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10_double i() {
        return this->value->i();
    }
    x10_double j() {
        return this->value->j();
    }
    x10_double k() {
        return this->value->k();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10x::vector::Tuple3d::itable< Vector3d_ibox1 >  Vector3d_ibox1::itable(&Vector3d_ibox1::equals, &Vector3d_ibox1::hashCode, &Vector3d_ibox1::i, &Vector3d_ibox1::j, &Vector3d_ibox1::k, &Vector3d_ibox1::toString, &Vector3d_ibox1::typeName);
} } 
::x10x::vector::Tuple3d::itable< ::x10x::vector::Vector3d >  x10x::vector::Vector3d::_itable_1(&x10x::vector::Vector3d::equals, &x10x::vector::Vector3d::hashCode, &x10x::vector::Vector3d::i, &x10x::vector::Vector3d::j, &x10x::vector::Vector3d::k, &x10x::vector::Vector3d::toString, &x10x::vector::Vector3d::typeName);
::x10aux::itable_entry x10x::vector::Vector3d::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10x::vector::Vector3d::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10x::vector::Tuple3d>, &x10x::vector::Vector3d::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10x::vector::Vector3d")};
::x10aux::itable_entry x10x::vector::Vector3d::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10x::vector::Vector3d_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10x::vector::Tuple3d>, &x10x::vector::Vector3d_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::x10x::vector::Vector3d")};

//#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::FMGL(NULL);
void x10x::vector::Vector3d::FMGL(NULL__do_init)() {
    FMGL(NULL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10x::vector::Vector3d.NULL");
    ::x10x::vector::Vector3d __var64__ = ::x10x::vector::Vector3d::_make(((x10_double) (((x10_long)0ll))),
                                                                         ((x10_double) (((x10_long)0ll))),
                                                                         ((x10_double) (((x10_long)0ll))));
    FMGL(NULL) = __var64__;
    FMGL(NULL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10x::vector::Vector3d::FMGL(NULL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(NULL__status), &FMGL(NULL__do_init), &FMGL(NULL__exception), "x10x::vector::Vector3d.NULL");
    
}
volatile ::x10aux::StaticInitController::status x10x::vector::Vector3d::FMGL(NULL__status);
::x10::lang::CheckedThrowable* x10x::vector::Vector3d::FMGL(NULL__exception);


//#line 12 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::FMGL(UX);
void x10x::vector::Vector3d::FMGL(UX__do_init)() {
    FMGL(UX__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10x::vector::Vector3d.UX");
    ::x10x::vector::Vector3d __var65__ = ::x10x::vector::Vector3d::_make(1.0,
                                                                         ((x10_double) (((x10_long)0ll))),
                                                                         ((x10_double) (((x10_long)0ll))));
    FMGL(UX) = __var65__;
    FMGL(UX__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10x::vector::Vector3d::FMGL(UX__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(UX__status), &FMGL(UX__do_init), &FMGL(UX__exception), "x10x::vector::Vector3d.UX");
    
}
volatile ::x10aux::StaticInitController::status x10x::vector::Vector3d::FMGL(UX__status);
::x10::lang::CheckedThrowable* x10x::vector::Vector3d::FMGL(UX__exception);


//#line 13 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::FMGL(UY);
void x10x::vector::Vector3d::FMGL(UY__do_init)() {
    FMGL(UY__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10x::vector::Vector3d.UY");
    ::x10x::vector::Vector3d __var66__ = ::x10x::vector::Vector3d::_make(((x10_double) (((x10_long)0ll))),
                                                                         1.0,
                                                                         ((x10_double) (((x10_long)0ll))));
    FMGL(UY) = __var66__;
    FMGL(UY__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10x::vector::Vector3d::FMGL(UY__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(UY__status), &FMGL(UY__do_init), &FMGL(UY__exception), "x10x::vector::Vector3d.UY");
    
}
volatile ::x10aux::StaticInitController::status x10x::vector::Vector3d::FMGL(UY__status);
::x10::lang::CheckedThrowable* x10x::vector::Vector3d::FMGL(UY__exception);


//#line 14 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::FMGL(UZ);
void x10x::vector::Vector3d::FMGL(UZ__do_init)() {
    FMGL(UZ__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10x::vector::Vector3d.UZ");
    ::x10x::vector::Vector3d __var67__ = ::x10x::vector::Vector3d::_make(((x10_double) (((x10_long)0ll))),
                                                                         ((x10_double) (((x10_long)0ll))),
                                                                         1.0);
    FMGL(UZ) = __var67__;
    FMGL(UZ__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10x::vector::Vector3d::FMGL(UZ__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(UZ__status), &FMGL(UZ__do_init), &FMGL(UZ__exception), "x10x::vector::Vector3d.UZ");
    
}
volatile ::x10aux::StaticInitController::status x10x::vector::Vector3d::FMGL(UZ__status);
::x10::lang::CheckedThrowable* x10x::vector::Vector3d::FMGL(UZ__exception);


//#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"


//#line 20 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
void x10x::vector::Vector3d::_constructor(::x10x::vector::Tuple3d* t) {
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ((*this))->::x10x::vector::Vector3d::_constructor(::x10x::vector::Tuple3d::i(::x10aux::nullCheck(t)),
                                                      ::x10x::vector::Tuple3d::j(::x10aux::nullCheck(t)),
                                                      ::x10x::vector::Tuple3d::k(::x10aux::nullCheck(t)));
    
}
::x10x::vector::Vector3d x10x::vector::Vector3d::_make(::x10x::vector::Tuple3d* t)
{
    ::x10x::vector::Vector3d this_; 
    this_->_constructor(t);
    return this_;
}



//#line 24 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10::lang::String* x10x::vector::Vector3d::toString() {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10x::vector::Vector3d_Strings::sl__14272), (*this)->FMGL(i)), (&::x10x::vector::Vector3d_Strings::sl__14273)), (*this)->FMGL(j)), (&::x10x::vector::Vector3d_Strings::sl__14274)), (*this)->FMGL(k)), (&::x10x::vector::Vector3d_Strings::sl__14275));
    
}

//#line 33 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::__plus(::x10x::vector::Vector3d that) {
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d this__12882 = (*this);
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d b__12883 = that;
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12881 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12878 = ((this__12882->FMGL(i)) + (b__12883->FMGL(i)));
    x10_double j__12879 = ((this__12882->FMGL(j)) + (b__12883->FMGL(j)));
    x10_double k__12880 = ((this__12882->FMGL(k)) + (b__12883->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12881->FMGL(i) = i__12878;
    alloc__12881->FMGL(j) = j__12879;
    alloc__12881->FMGL(k) = k__12880;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12881;
    
}

//#line 37 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::add(::x10x::vector::Vector3d b) {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12887 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12884 = (((*this)->FMGL(i)) + (b->FMGL(i)));
    x10_double j__12885 = (((*this)->FMGL(j)) + (b->FMGL(j)));
    x10_double k__12886 = (((*this)->FMGL(k)) + (b->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12887->FMGL(i) = i__12884;
    alloc__12887->FMGL(j) = j__12885;
    alloc__12887->FMGL(k) = k__12886;
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12887;
    
}

//#line 44 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::__minus(
  ::x10x::vector::Vector3d x, ::x10x::vector::Vector3d y) {
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d b__12892 = y;
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12891 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12888 = ((x->FMGL(i)) - (b__12892->FMGL(i)));
    x10_double j__12889 = ((x->FMGL(j)) - (b__12892->FMGL(j)));
    x10_double k__12890 = ((x->FMGL(k)) - (b__12892->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12891->FMGL(i) = i__12888;
    alloc__12891->FMGL(j) = j__12889;
    alloc__12891->FMGL(k) = k__12890;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12891;
    
}

//#line 48 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::sub(::x10x::vector::Vector3d b) {
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12896 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12893 = (((*this)->FMGL(i)) - (b->FMGL(i)));
    x10_double j__12894 = (((*this)->FMGL(j)) - (b->FMGL(j)));
    x10_double k__12895 = (((*this)->FMGL(k)) - (b->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12896->FMGL(i) = i__12893;
    alloc__12896->FMGL(j) = j__12894;
    alloc__12896->FMGL(k) = k__12895;
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12896;
    
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::__times(::x10x::vector::Vector3d that) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d this__12897 = (*this);
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d vec__12898 = that;
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return ((((((this__12897->FMGL(i)) * (vec__12898->FMGL(i)))) + (((this__12897->FMGL(j)) * (vec__12898->FMGL(j)))))) + (((this__12897->FMGL(k)) * (vec__12898->FMGL(k)))));
    
}

//#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::dot(::x10x::vector::Vector3d vec) {
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return (((((((*this)->FMGL(i)) * (vec->FMGL(i)))) + ((((*this)->FMGL(j)) * (vec->FMGL(j)))))) + ((((*this)->FMGL(k)) * (vec->FMGL(k)))));
    
}

//#line 63 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::cross(::x10x::vector::Vector3d vec) {
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12902 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12899 = (((((*this)->FMGL(j)) * (vec->FMGL(k)))) - ((((*this)->FMGL(k)) * (vec->FMGL(j)))));
    x10_double j__12900 = (((((*this)->FMGL(k)) * (vec->FMGL(i)))) - ((((*this)->FMGL(i)) * (vec->FMGL(k)))));
    x10_double k__12901 = (((((*this)->FMGL(i)) * (vec->FMGL(j)))) - ((((*this)->FMGL(j)) * (vec->FMGL(i)))));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12902->FMGL(i) = i__12899;
    alloc__12902->FMGL(j) = j__12900;
    alloc__12902->FMGL(k) = k__12901;
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12902;
    
}

//#line 72 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::__times(
  x10_double that) {
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d this__12907 = (*this);
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double c__12908 = that;
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12906 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12903 = ((this__12907->FMGL(i)) * (c__12908));
    x10_double j__12904 = ((this__12907->FMGL(j)) * (c__12908));
    x10_double k__12905 = ((this__12907->FMGL(k)) * (c__12908));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12906->FMGL(i) = i__12903;
    alloc__12906->FMGL(j) = j__12904;
    alloc__12906->FMGL(k) = k__12905;
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12906;
    
}

//#line 79 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::__times(
  x10_double x, ::x10x::vector::Vector3d y) {
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double that__12914 = x;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double c__12913 = that__12914;
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12912 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12909 = ((y->FMGL(i)) * (c__12913));
    x10_double j__12910 = ((y->FMGL(j)) * (c__12913));
    x10_double k__12911 = ((y->FMGL(k)) * (c__12913));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12912->FMGL(i) = i__12909;
    alloc__12912->FMGL(j) = j__12910;
    alloc__12912->FMGL(k) = k__12911;
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12912;
    
}

//#line 81 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::mul(x10_double c) {
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12918 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12915 = (((*this)->FMGL(i)) * (c));
    x10_double j__12916 = (((*this)->FMGL(j)) * (c));
    x10_double k__12917 = (((*this)->FMGL(k)) * (c));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12918->FMGL(i) = i__12915;
    alloc__12918->FMGL(j) = j__12916;
    alloc__12918->FMGL(k) = k__12917;
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12918;
    
}

//#line 85 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::mixedProduct(::x10x::vector::Vector3d v2,
                                                ::x10x::vector::Vector3d v3) {
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d this__12922 = (*this);
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d vec__12923 = (__extension__ ({
        
        //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d vec__12924 = v3;
        (__extension__ ({
            
            //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d alloc__12925 =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
            x10_double i__12919 = ((((v2->FMGL(j)) * (vec__12924->FMGL(k)))) - (((v2->FMGL(k)) * (vec__12924->FMGL(j)))));
            x10_double j__12920 = ((((v2->FMGL(k)) * (vec__12924->FMGL(i)))) - (((v2->FMGL(i)) * (vec__12924->FMGL(k)))));
            x10_double k__12921 = ((((v2->FMGL(i)) * (vec__12924->FMGL(j)))) - (((v2->FMGL(j)) * (vec__12924->FMGL(i)))));
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
            alloc__12925->FMGL(i) = i__12919;
            alloc__12925->FMGL(j) = j__12920;
            alloc__12925->FMGL(k) = k__12921;
            alloc__12925;
        }))
        ;
    }))
    ;
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return ((((((this__12922->FMGL(i)) * (vec__12923->FMGL(i)))) + (((this__12922->FMGL(j)) * (vec__12923->FMGL(j)))))) + (((this__12922->FMGL(k)) * (vec__12923->FMGL(k)))));
    
}

//#line 89 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::lengthSquared() {
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return (((((((*this)->FMGL(i)) * ((*this)->FMGL(i)))) + ((((*this)->FMGL(j)) * ((*this)->FMGL(j)))))) + ((((*this)->FMGL(k)) * ((*this)->FMGL(k)))));
    
}

//#line 93 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::length() {
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return ::x10::lang::MathNatives::sqrt((((((((*this)->FMGL(i)) * ((*this)->FMGL(i)))) + ((((*this)->FMGL(j)) * ((*this)->FMGL(j)))))) + ((((*this)->FMGL(k)) * ((*this)->FMGL(k))))));
    
}

//#line 97 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::maxNorm() {
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return ::x10::lang::MathNatives::fmax(::x10::lang::MathNatives::fmax(::fabs((*this)->FMGL(i)),::fabs((*this)->FMGL(j))),::fabs((*this)->FMGL(k)));
    
}

//#line 102 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::magnitude() {
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return ::x10::lang::MathNatives::sqrt((((((((*this)->FMGL(i)) * ((*this)->FMGL(i)))) + ((((*this)->FMGL(j)) * ((*this)->FMGL(j)))))) + ((((*this)->FMGL(k)) * ((*this)->FMGL(k))))));
    
}

//#line 106 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
x10_double x10x::vector::Vector3d::angleWith(::x10x::vector::Vector3d vec) {
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double aDotb = (__extension__ ({
        ::x10x::vector::Vector3d this__12848 = (*this);
        
        //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d vec__12847 = vec;
        ((((((this__12848->FMGL(i)) * (vec__12847->FMGL(i)))) + (((this__12848->FMGL(j)) * (vec__12847->FMGL(j)))))) + (((this__12848->FMGL(k)) * (vec__12847->FMGL(k)))));
    }))
    ;
    
    //#line 108 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double ab = (((__extension__ ({
        ::x10x::vector::Vector3d this__12849 = (*this);
        ::x10::lang::MathNatives::sqrt(((((((this__12849->FMGL(i)) * (this__12849->FMGL(i)))) + (((this__12849->FMGL(j)) * (this__12849->FMGL(j)))))) + (((this__12849->FMGL(k)) * (this__12849->FMGL(k))))));
    }))
    ) * (::x10::lang::MathNatives::sqrt(((((((vec->FMGL(i)) * (vec->FMGL(i)))) + (((vec->FMGL(j)) * (vec->FMGL(j)))))) + (((vec->FMGL(k)) * (vec->FMGL(k))))))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return ::x10::lang::MathNatives::acos(((aDotb) / (ab)));
    
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::normalize(
  ) {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double norm = ((1.0) / ((__extension__ ({
        ::x10x::vector::Vector3d this__12850 = (*this);
        ::x10::lang::MathNatives::sqrt(((((((this__12850->FMGL(i)) * (this__12850->FMGL(i)))) + (((this__12850->FMGL(j)) * (this__12850->FMGL(j)))))) + (((this__12850->FMGL(k)) * (this__12850->FMGL(k))))));
    }))
    ));
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12929 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12926 = (((*this)->FMGL(i)) * (norm));
    x10_double j__12927 = (((*this)->FMGL(j)) * (norm));
    x10_double k__12928 = (((*this)->FMGL(k)) * (norm));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12929->FMGL(i) = i__12926;
    alloc__12929->FMGL(j) = j__12927;
    alloc__12929->FMGL(k) = k__12928;
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12929;
    
}

//#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::inverse(
  ) {
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double l2 = (__extension__ ({
        ::x10x::vector::Vector3d this__12857 = (*this);
        ((((((this__12857->FMGL(i)) * (this__12857->FMGL(i)))) + (((this__12857->FMGL(j)) * (this__12857->FMGL(j)))))) + (((this__12857->FMGL(k)) * (this__12857->FMGL(k)))));
    }))
    ;
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12933 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12930 = (((*this)->FMGL(i)) / (l2));
    x10_double j__12931 = (((*this)->FMGL(j)) / (l2));
    x10_double k__12932 = (((*this)->FMGL(k)) / (l2));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12933->FMGL(i) = i__12930;
    alloc__12933->FMGL(j) = j__12931;
    alloc__12933->FMGL(k) = k__12932;
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12933;
    
}

//#line 126 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::__minus(
  ::x10x::vector::Vector3d x) {
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12937 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12934 = (-(x->FMGL(i)));
    x10_double j__12935 = (-(x->FMGL(j)));
    x10_double k__12936 = (-(x->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12937->FMGL(i) = i__12934;
    alloc__12937->FMGL(j) = j__12935;
    alloc__12937->FMGL(k) = k__12936;
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12937;
    
}

//#line 128 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10x::vector::Vector3d x10x::vector::Vector3d::negate() {
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d alloc__12941 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12938 = (-((*this)->FMGL(i)));
    x10_double j__12939 = (-((*this)->FMGL(j)));
    x10_double k__12940 = (-((*this)->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12941->FMGL(i) = i__12938;
    alloc__12941->FMGL(j) = j__12939;
    alloc__12941->FMGL(k) = k__12940;
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    return alloc__12941;
    
}

//#line 9 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
::x10::lang::String* x10x::vector::Vector3d::typeName(){
    return ::x10aux::type_name((*this));
}
x10_int x10x::vector::Vector3d::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(i))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(j))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(k))));
    return result;
    
}
x10_boolean x10x::vector::Vector3d::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10x::vector::Vector3d>(other)))
    {
        return false;
        
    }
    return (*this)->x10x::vector::Vector3d::equals(::x10aux::class_cast< ::x10x::vector::Vector3d>(other));
    
}
x10_boolean x10x::vector::Vector3d::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10x::vector::Vector3d>(other)))
    {
        return false;
        
    }
    return (*this)->x10x::vector::Vector3d::_struct_equals(
             ::x10aux::class_cast< ::x10x::vector::Vector3d>(other));
    
}
void ::x10x::vector::Vector3d::_serialize(::x10x::vector::Vector3d this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(i));
    buf.write(this_->FMGL(j));
    buf.write(this_->FMGL(k));
    
}

void ::x10x::vector::Vector3d::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(i) = buf.read<x10_double>();
    FMGL(j) = buf.read<x10_double>();
    FMGL(k) = buf.read<x10_double>();
}


::x10aux::RuntimeType x10x::vector::Vector3d::rtt;
void x10x::vector::Vector3d::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10x::vector::Tuple3d>()};
    rtt.initStageTwo("x10x.vector.Vector3d",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String x10x::vector::Vector3d_Strings::sl__14274("j + ");
::x10::lang::String x10x::vector::Vector3d_Strings::sl__14275("k)");
::x10::lang::String x10x::vector::Vector3d_Strings::sl__14272("(");
::x10::lang::String x10x::vector::Vector3d_Strings::sl__14273("i + ");

/* END of Vector3d */
/*************************************************/
