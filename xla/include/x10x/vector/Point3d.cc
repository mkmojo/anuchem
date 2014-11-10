/*************************************************/
/* START of Point3d */
#include <x10x/vector/Point3d.h>

#include <x10/lang/Any.h>
#include <x10x/vector/Tuple3d.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10x/vector/Vector3d.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>

//#line 9 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
namespace x10x { namespace vector { 
class Point3d_ibox0 : public ::x10::lang::IBox< ::x10x::vector::Point3d> {
public:
    static ::x10::lang::Any::itable< Point3d_ibox0 > itable;
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
::x10::lang::Any::itable< Point3d_ibox0 >  Point3d_ibox0::itable(&Point3d_ibox0::equals, &Point3d_ibox0::hashCode, &Point3d_ibox0::toString, &Point3d_ibox0::typeName);
} } 
::x10::lang::Any::itable< ::x10x::vector::Point3d >  x10x::vector::Point3d::_itable_0(&x10x::vector::Point3d::equals, &x10x::vector::Point3d::hashCode, &x10x::vector::Point3d::toString, &x10x::vector::Point3d::typeName);
namespace x10x { namespace vector { 
class Point3d_ibox1 : public ::x10::lang::IBox< ::x10x::vector::Point3d> {
public:
    static ::x10x::vector::Tuple3d::itable< Point3d_ibox1 > itable;
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
::x10x::vector::Tuple3d::itable< Point3d_ibox1 >  Point3d_ibox1::itable(&Point3d_ibox1::equals, &Point3d_ibox1::hashCode, &Point3d_ibox1::i, &Point3d_ibox1::j, &Point3d_ibox1::k, &Point3d_ibox1::toString, &Point3d_ibox1::typeName);
} } 
::x10x::vector::Tuple3d::itable< ::x10x::vector::Point3d >  x10x::vector::Point3d::_itable_1(&x10x::vector::Point3d::equals, &x10x::vector::Point3d::hashCode, &x10x::vector::Point3d::i, &x10x::vector::Point3d::j, &x10x::vector::Point3d::k, &x10x::vector::Point3d::toString, &x10x::vector::Point3d::typeName);
::x10aux::itable_entry x10x::vector::Point3d::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10x::vector::Point3d::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10x::vector::Tuple3d>, &x10x::vector::Point3d::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10x::vector::Point3d")};
::x10aux::itable_entry x10x::vector::Point3d::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10x::vector::Point3d_ibox0::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10x::vector::Tuple3d>, &x10x::vector::Point3d_ibox1::itable), ::x10aux::itable_entry(NULL, (void*)"::x10x::vector::Point3d")};

//#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"


//#line 14 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
void x10x::vector::Point3d::_constructor(::x10x::vector::Tuple3d* t) {
    
    //#line 15 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ((*this))->::x10x::vector::Point3d::_constructor(::x10x::vector::Tuple3d::i(::x10aux::nullCheck(t)),
                                                     ::x10x::vector::Tuple3d::j(::x10aux::nullCheck(t)),
                                                     ::x10x::vector::Tuple3d::k(::x10aux::nullCheck(t)));
    
}
::x10x::vector::Point3d x10x::vector::Point3d::_make(::x10x::vector::Tuple3d* t)
{
    ::x10x::vector::Point3d this_; 
    this_->_constructor(t);
    return this_;
}



//#line 18 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"

//#line 19 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"

//#line 20 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"

//#line 22 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10::lang::String* x10x::vector::Point3d::toString() {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10x::vector::Point3d_Strings::sl__14226), (*this)->FMGL(i)), (&::x10x::vector::Point3d_Strings::sl__14227)), (*this)->FMGL(j)), (&::x10x::vector::Point3d_Strings::sl__14228)), (*this)->FMGL(k)), (&::x10x::vector::Point3d_Strings::sl__14229));
    
}

//#line 27 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Point3d x10x::vector::Point3d::add(::x10x::vector::Vector3d b) {
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d alloc__12675 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double i__12672 = (((*this)->FMGL(i)) + (b->FMGL(i)));
    x10_double j__12673 = (((*this)->FMGL(j)) + (b->FMGL(j)));
    x10_double k__12674 = (((*this)->FMGL(k)) + (b->FMGL(k)));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    alloc__12675->FMGL(i) = i__12672;
    alloc__12675->FMGL(j) = j__12673;
    alloc__12675->FMGL(k) = k__12674;
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12675;
    
}

//#line 31 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Point3d x10x::vector::Point3d::__plus(::x10x::vector::Vector3d that) {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d this__12680 = (*this);
    
    //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Vector3d b__12681 = that;
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d alloc__12679 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double i__12676 = ((this__12680->FMGL(i)) + (b__12681->FMGL(i)));
    x10_double j__12677 = ((this__12680->FMGL(j)) + (b__12681->FMGL(j)));
    x10_double k__12678 = ((this__12680->FMGL(k)) + (b__12681->FMGL(k)));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    alloc__12679->FMGL(i) = i__12676;
    alloc__12679->FMGL(j) = j__12677;
    alloc__12679->FMGL(k) = k__12678;
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12679;
    
}

//#line 38 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Point3d x10x::vector::Point3d::__times(x10_double that) {
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d this__12686 = (*this);
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double c__12687 = that;
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d alloc__12685 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double i__12682 = ((this__12686->FMGL(i)) * (c__12687));
    x10_double j__12683 = ((this__12686->FMGL(j)) * (c__12687));
    x10_double k__12684 = ((this__12686->FMGL(k)) * (c__12687));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    alloc__12685->FMGL(i) = i__12682;
    alloc__12685->FMGL(j) = j__12683;
    alloc__12685->FMGL(k) = k__12684;
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12685;
    
}

//#line 42 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Point3d x10x::vector::Point3d::scale(x10_double c) {
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d alloc__12691 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double i__12688 = (((*this)->FMGL(i)) * (c));
    x10_double j__12689 = (((*this)->FMGL(j)) * (c));
    x10_double k__12690 = (((*this)->FMGL(k)) * (c));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    alloc__12691->FMGL(i) = i__12688;
    alloc__12691->FMGL(j) = j__12689;
    alloc__12691->FMGL(k) = k__12690;
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12691;
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Point3d x10x::vector::Point3d::scale(::x10x::vector::Vector3d v) {
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d alloc__12695 =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double i__12692 = (((*this)->FMGL(i)) * (v->FMGL(i)));
    x10_double j__12693 = (((*this)->FMGL(j)) * (v->FMGL(j)));
    x10_double k__12694 = (((*this)->FMGL(k)) * (v->FMGL(k)));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    alloc__12695->FMGL(i) = i__12692;
    alloc__12695->FMGL(j) = j__12693;
    alloc__12695->FMGL(k) = k__12694;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12695;
    
}

//#line 57 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Vector3d x10x::vector::Point3d::vector(::x10x::vector::Point3d b) {
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Vector3d alloc__12699 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12696 = (((*this)->FMGL(i)) - (b->FMGL(i)));
    x10_double j__12697 = (((*this)->FMGL(j)) - (b->FMGL(j)));
    x10_double k__12698 = (((*this)->FMGL(k)) - (b->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12699->FMGL(i) = i__12696;
    alloc__12699->FMGL(j) = j__12697;
    alloc__12699->FMGL(k) = k__12698;
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12699;
    
}

//#line 61 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10x::vector::Vector3d x10x::vector::Point3d::__minus(::x10x::vector::Point3d that) {
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d this__12704 = (*this);
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d b__12705 = that;
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    ::x10x::vector::Vector3d alloc__12703 =  ::x10x::vector::Vector3d::_alloc();
    
    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    x10_double i__12700 = ((this__12704->FMGL(i)) - (b__12705->FMGL(i)));
    x10_double j__12701 = ((this__12704->FMGL(j)) - (b__12705->FMGL(j)));
    x10_double k__12702 = ((this__12704->FMGL(k)) - (b__12705->FMGL(k)));
    
    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector3d.x10"
    alloc__12703->FMGL(i) = i__12700;
    alloc__12703->FMGL(j) = j__12701;
    alloc__12703->FMGL(k) = k__12702;
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return alloc__12703;
    
}

//#line 65 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
x10_double x10x::vector::Point3d::distanceSquared(::x10x::vector::Point3d b) {
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double di = (((*this)->FMGL(i)) - (b->FMGL(i)));
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double dj = (((*this)->FMGL(j)) - (b->FMGL(j)));
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    x10_double dk = (((*this)->FMGL(k)) - (b->FMGL(k)));
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return ((((((di) * (di))) + (((dj) * (dj))))) + (((dk) * (dk))));
    
}

//#line 74 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
x10_double x10x::vector::Point3d::distance(::x10x::vector::Point3d b) {
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
    return ::x10::lang::MathNatives::sqrt((__extension__ ({
        ::x10x::vector::Point3d this__12654 = (*this);
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d b__12650 = b;
        x10_double ret__12655;
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        x10_double di__12706 = ((this__12654->FMGL(i)) - (b__12650->FMGL(i)));
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        x10_double dj__12707 = ((this__12654->FMGL(j)) - (b__12650->FMGL(j)));
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        x10_double dk__12708 = ((this__12654->FMGL(k)) - (b__12650->FMGL(k)));
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
        ret__12655 = ((((((di__12706) * (di__12706))) + (((dj__12707) * (dj__12707))))) + (((dk__12708) * (dk__12708))));
        ret__12655;
    }))
    );
    
}

//#line 9 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Point3d.x10"
::x10::lang::String* x10x::vector::Point3d::typeName(){
    return ::x10aux::type_name((*this));
}
x10_int x10x::vector::Point3d::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(i))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(j))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(k))));
    return result;
    
}
x10_boolean x10x::vector::Point3d::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10x::vector::Point3d>(other)))
    {
        return false;
        
    }
    return (*this)->x10x::vector::Point3d::equals(::x10aux::class_cast< ::x10x::vector::Point3d>(other));
    
}
x10_boolean x10x::vector::Point3d::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10x::vector::Point3d>(other)))
    {
        return false;
        
    }
    return (*this)->x10x::vector::Point3d::_struct_equals(
             ::x10aux::class_cast< ::x10x::vector::Point3d>(other));
    
}
void ::x10x::vector::Point3d::_serialize(::x10x::vector::Point3d this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(i));
    buf.write(this_->FMGL(j));
    buf.write(this_->FMGL(k));
    
}

void ::x10x::vector::Point3d::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(i) = buf.read<x10_double>();
    FMGL(j) = buf.read<x10_double>();
    FMGL(k) = buf.read<x10_double>();
}


::x10aux::RuntimeType x10x::vector::Point3d::rtt;
void x10x::vector::Point3d::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10x::vector::Tuple3d>()};
    rtt.initStageTwo("x10x.vector.Point3d",::x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String x10x::vector::Point3d_Strings::sl__14228("j + ");
::x10::lang::String x10x::vector::Point3d_Strings::sl__14229("k)");
::x10::lang::String x10x::vector::Point3d_Strings::sl__14226("(");
::x10::lang::String x10x::vector::Point3d_Strings::sl__14227("i + ");

/* END of Point3d */
/*************************************************/
