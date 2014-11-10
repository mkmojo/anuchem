/*************************************************/
/* START of MathUtil */
#include <au/edu/anu/qm/MathUtil.h>

#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
x10_double au::edu::anu::qm::MathUtil::binomialPrefactor(x10_int j, x10_int l,
                                                         x10_int m, x10_double a,
                                                         x10_double b) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_double sum = 0.0;
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    {
        x10_int t;
        for (t = ((x10_int)0); ((t) < (((j) + (((x10_int)1))))); t =
                                                                   ((t) + (((x10_int)1))))
        {
            
            //#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
            if ((((((j) - (l))) <= (t)) && ((t) <= (m))))
            {
                
                //#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
                sum = ((sum) + (((((((x10_double) (((::au::edu::anu::qm::MathUtil::binomial(
                                                       l,
                                                       ((j) - (t)))) * (::au::edu::anu::qm::MathUtil::binomial(
                                                                          m,
                                                                          t)))))) * (::x10::lang::Math::pow(
                                                                                       a,
                                                                                       ((((l) - (j))) + (t)))))) * (::x10::lang::Math::pow(
                                                                                                                      b,
                                                                                                                      ((m) - (t)))))));
            }
            
        }
    }
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    return sum;
    
}

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
x10_long au::edu::anu::qm::MathUtil::binomial(x10_int i, x10_int j) {
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert(((i) >= (j)));
    #endif//NO_ASSERTIONS
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_long n = ((x10_long)(i));
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_long r = ((x10_long)1ll);
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    {
        x10_long d;
        for (d = ((x10_long)1ll); ((d) <= (((x10_long)(j))));
             d = ((d) + (((x10_long)1ll)))) {
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
            r = ((r) * ((__extension__ ({
                x10_long pre__103036 = n;
                n = ((n) - (((x10_long)1ll)));
                pre__103036;
            }))
            ));
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
            r = ((r) / ::x10aux::zeroCheck(d));
        }
    }
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    return r;
    
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
x10_long au::edu::anu::qm::MathUtil::factorial(x10_int n) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_long value = ((x10_long)1ll);
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    while (((((x10_long)(n))) > (((x10_long)1ll)))) {
        
        //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
        value = ((value) * (((x10_long)(n))));
        
        //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
        n = ((n) - (((x10_int)1)));
    }
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    return value;
    
}

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
x10_long au::edu::anu::qm::MathUtil::factorial2(x10_int n) {
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_long value = ((x10_long)1ll);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    while (((((x10_long)(n))) > (((x10_long)0ll)))) {
        
        //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
        value = ((value) * (((x10_long)(n))));
        
        //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
        n = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(n))) - (((x10_long)2ll)))));
    }
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    return value;
    
}

//#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
x10_double au::edu::anu::qm::MathUtil::factorialRatioSquared(
  x10_int a, x10_int b) {
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert(((a) > (b)));
    #endif//NO_ASSERTIONS
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_long n = ((x10_long)(a));
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    x10_long r = ((x10_long)1ll);
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    {
        x10_long d;
        for (d = ((x10_long)1ll); ((d) <= (((x10_long)(b))));
             d = ((d) + (((x10_long)1ll)))) {
            
            //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
            r = ((r) * ((__extension__ ({
                x10_long pre__103124 = n;
                n = ((n) - (((x10_long)1ll)));
                pre__103124;
            }))
            ));
            
            //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
            r = ((r) / ::x10aux::zeroCheck(d));
        }
    }
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    {
        x10_int i;
        for (i = ((a) - (b)); ((((x10_long)(i))) > (((((x10_long)(a))) - (((((x10_long)2ll)) * (((x10_long)(b))))))));
             i = ((i) - (((x10_int)1)))) {
            
            //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
            r = ((r) * (((x10_long)(i))));
        }
    }
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
    return ((x10_double) (r));
    
}

//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/MathUtil.x10"
::au::edu::anu::qm::MathUtil* au::edu::anu::qm::MathUtil::au__edu__anu__qm__MathUtil____this__au__edu__anu__qm__MathUtil(
  ) {
    return this;
    
}
void au::edu::anu::qm::MathUtil::_constructor() {
    ::au::edu::anu::qm::MathUtil* this__148840 = this;
    
}
::au::edu::anu::qm::MathUtil* au::edu::anu::qm::MathUtil::_make(
  ) {
    ::au::edu::anu::qm::MathUtil* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::MathUtil>()) ::au::edu::anu::qm::MathUtil();
    this_->_constructor();
    return this_;
}


void au::edu::anu::qm::MathUtil::__fieldInitializers_au_edu_anu_qm_MathUtil(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::MathUtil::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::MathUtil::_deserializer);

void au::edu::anu::qm::MathUtil::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::qm::MathUtil::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::MathUtil* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::MathUtil>()) ::au::edu::anu::qm::MathUtil();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::MathUtil::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::qm::MathUtil::rtt;
void au::edu::anu::qm::MathUtil::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.MathUtil",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of MathUtil */
/*************************************************/
