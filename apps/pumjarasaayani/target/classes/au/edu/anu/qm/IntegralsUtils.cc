/*************************************************/
/* START of IntegralsUtils */
#include <au/edu/anu/qm/IntegralsUtils.h>

#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
x10_double au::edu::anu::qm::IntegralsUtils::computeFGamma(x10_int m, x10_double x) {
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    x = ::x10::lang::MathNatives::fmax(::fabs(x),1.0E-8);
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    return ((((0.5) * (::x10::lang::MathNatives::pow(x,((((x10_double) ((-(m))))) - (0.5)))))) * (::au::edu::anu::qm::IntegralsUtils::gammaIncomplete(
                                                                                                    ((((x10_double) (m))) + (0.5)),
                                                                                                    x)));
    
}

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
x10_double au::edu::anu::qm::IntegralsUtils::gammaIncomplete(
  x10_double a, x10_double x) {
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    x10_double gammap = 0.0;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    x10_double gln = 0.0;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    gln = ::au::edu::anu::qm::IntegralsUtils::gammln(a);
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    if (((x) < (((a) + (1.0))))) {
        
        //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        if ((!::x10aux::struct_equals(x, 0.0))) {
            
            //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
            x10_double ap = a;
            
            //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
            x10_double sum;
            
            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
            x10_double delta = sum = ((1.0) / (a));
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((i) < (((x10_int)100)));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                    ap = ((ap) + (1.0));
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                    delta = ((delta) * (((x) / (ap))));
                    
                    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                    sum = ((sum) + (delta));
                    
                    //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                    if (((::fabs(delta)) < (((::fabs(sum)) * (3.0E-7)))))
                    {
                        break;
                    }
                    
                }
            }
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
            gammap = ((sum) * (::x10::lang::MathNatives::exp((((((-(x))) + (((a) * (::x10::lang::MathNatives::log(x)))))) - (gln)))));
        } else {
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
            gammap = 0.0;
        }
        
    } else {
        
        //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        x10_double b = ((((x) + (1.0))) - (a));
        
        //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        x10_double c = ((1.0) / (1.0E-30));
        
        //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        x10_double d = ((1.0) / (b));
        
        //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        x10_double h = d;
        
        //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        x10_double an;
        x10_double delta;
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        {
            x10_int i;
            for (i = ((x10_int)1); ((i) < (((x10_int)101)));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                an = ((((x10_double) ((-(i))))) * (((((x10_double) (i))) - (a))));
                
                //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                b = ((b) + (2.0));
                
                //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                d = ((((an) * (d))) + (b));
                
                //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                if (((::fabs(d)) < (1.0E-30))) {
                    d = 1.0E-30;
                }
                
                //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                c = ((b) + (((an) / (c))));
                
                //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                if (((::fabs(c)) < (1.0E-30))) {
                    c = 1.0E-30;
                }
                
                //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                d = ((1.0) / (d));
                
                //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                delta = ((d) * (c));
                
                //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                h = ((h) * (delta));
                
                //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
                if (((::fabs(((delta) - (1.0)))) < (3.0E-7)))
                {
                    break;
                }
                
            }
        }
        
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
        gammap = ((1.0) - (((::x10::lang::MathNatives::exp((((((-(x))) + (((a) * (::x10::lang::MathNatives::log(x)))))) - (gln)))) * (h))));
    }
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    return ((::x10::lang::MathNatives::exp(gln)) * (gammap));
    
}

//#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
x10_double au::edu::anu::qm::IntegralsUtils::gammln(x10_double x) {
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    x10_double y = x;
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    x10_double tmp = ((x) + (5.5));
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    tmp = ((tmp) - (((((x) + (0.5))) * (::x10::lang::MathNatives::log(tmp)))));
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    x10_double ser = 1.000000000190015;
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    y = ((y) + (1.0));
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    ser = ((ser) + (((76.18009172947146) / (y))));
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    y = ((y) + (1.0));
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    ser = ((ser) + (((-86.50532032941678) / (y))));
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    y = ((y) + (1.0));
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    ser = ((ser) + (((24.01409824083091) / (y))));
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    y = ((y) + (1.0));
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    ser = ((ser) + (((-1.231739572450155) / (y))));
    
    //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    y = ((y) + (1.0));
    
    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    ser = ((ser) + (((0.001208650973866179) / (y))));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    y = ((y) + (1.0));
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    ser = ((ser) + (((-5.395239384953E-6) / (y))));
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
    return (((-(tmp))) + (::x10::lang::MathNatives::log(((((2.5066282746310007) * (ser))) / (x)))));
    
}

//#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
x10_double au::edu::anu::qm::IntegralsUtils::FMGL(SMALL) = 1.0E-8;

//#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
x10_double au::edu::anu::qm::IntegralsUtils::FMGL(EPS) = 3.0E-7;

//#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
x10_double au::edu::anu::qm::IntegralsUtils::FMGL(FPMIN) = 1.0E-30;

//#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"

//#line 18 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/IntegralsUtils.x10"
::au::edu::anu::qm::IntegralsUtils* au::edu::anu::qm::IntegralsUtils::au__edu__anu__qm__IntegralsUtils____this__au__edu__anu__qm__IntegralsUtils(
  ) {
    return this;
    
}
void au::edu::anu::qm::IntegralsUtils::_constructor() {
    ::au::edu::anu::qm::IntegralsUtils* this__148844 = this;
    
}
::au::edu::anu::qm::IntegralsUtils* au::edu::anu::qm::IntegralsUtils::_make(
  ) {
    ::au::edu::anu::qm::IntegralsUtils* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::IntegralsUtils>()) ::au::edu::anu::qm::IntegralsUtils();
    this_->_constructor();
    return this_;
}


void au::edu::anu::qm::IntegralsUtils::__fieldInitializers_au_edu_anu_qm_IntegralsUtils(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::IntegralsUtils::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::IntegralsUtils::_deserializer);

void au::edu::anu::qm::IntegralsUtils::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::au::edu::anu::qm::IntegralsUtils::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::IntegralsUtils* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::IntegralsUtils>()) ::au::edu::anu::qm::IntegralsUtils();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::IntegralsUtils::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType au::edu::anu::qm::IntegralsUtils::rtt;
void au::edu::anu::qm::IntegralsUtils::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.IntegralsUtils",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of IntegralsUtils */
/*************************************************/
