/*************************************************/
/* START of PrimitiveGaussian */
#include <au/edu/anu/qm/PrimitiveGaussian.h>

#include <x10x/vector/Point3d.h>
#include <au/edu/anu/qm/Power.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/qm/MathUtil.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/IntegralsUtils.h>
#include <x10/compiler/Synthetic.h>

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
void au::edu::anu::qm::PrimitiveGaussian::_constructor(::x10x::vector::Point3d origin,
                                                       ::au::edu::anu::qm::Power power,
                                                       x10_double exponent,
                                                       x10_double coefficient,
                                                       x10_boolean normalize) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::au::edu::anu::qm::PrimitiveGaussian* this__129299 =
      this;
    ::x10aux::nullCheck(this__129299)->FMGL(coefficient) =
      0.0;
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->FMGL(origin) = origin;
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->FMGL(power) = power;
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->FMGL(exponent) = exponent;
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->FMGL(coefficient) = coefficient;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    if (normalize) {
        
        //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        this->FMGL(normalization) = (__extension__ ({
            
            //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power power__128303 = power;
            x10_double exponent__128304 = exponent;
            ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                       ((x10_int)2),
                                                       ((((x10_double) (((((x10_int)2)) * (((((power__128303->FMGL(l)) + (power__128303->FMGL(m)))) + (power__128303->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__128304,((((x10_double) (((((power__128303->FMGL(l)) + (power__128303->FMGL(m)))) + (power__128303->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                            ((((((x10_int)2)) * (power__128303->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((((((x10_int)2)) * (power__128303->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ((((((x10_int)2)) * (power__128303->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
        }))
        ;
    } else {
        
        //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        this->FMGL(normalization) = 0.0;
    }
    
}
::au::edu::anu::qm::PrimitiveGaussian* au::edu::anu::qm::PrimitiveGaussian::_make(
  ::x10x::vector::Point3d origin, ::au::edu::anu::qm::Power power,
  x10_double exponent, x10_double coefficient, x10_boolean normalize)
{
    ::au::edu::anu::qm::PrimitiveGaussian* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian();
    this_->_constructor(origin, power, exponent, coefficient,
    normalize);
    return this_;
}



//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::getNormalization(
  ::au::edu::anu::qm::Power power, x10_double exponent) {
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                      ((x10_int)2),
                                                      ((((x10_double) (((((x10_int)2)) * (((((power->FMGL(l)) + (power->FMGL(m)))) + (power->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent,((((x10_double) (((((power->FMGL(l)) + (power->FMGL(m)))) + (power->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                   ((((((x10_int)2)) * (power->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                      ((((((x10_int)2)) * (power->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((((((x10_int)2)) * (power->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
    
}

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::overlap(::au::edu::anu::qm::PrimitiveGaussian* pg) {
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return ((((this->FMGL(normalization)) * (::x10aux::nullCheck(pg)->FMGL(normalization)))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128305 = this->FMGL(exponent);
        ::x10x::vector::Point3d originI__128306 = this->FMGL(origin);
        ::au::edu::anu::qm::Power powerI__128307 = this->FMGL(power);
        x10_double expJ__128308 = ::x10aux::nullCheck(pg)->FMGL(exponent);
        ::x10x::vector::Point3d originJ__128309 = ::x10aux::nullCheck(pg)->FMGL(origin);
        ::au::edu::anu::qm::Power powerJ__128310 = ::x10aux::nullCheck(pg)->FMGL(power);
        x10_double ret__128317;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129306 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129307 = originJ__128309;
            x10_double ret__129308;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129300 = ((originI__128306->FMGL(i)) - (b__129307->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129301 = ((originI__128306->FMGL(j)) - (b__129307->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129302 = ((originI__128306->FMGL(k)) - (b__129307->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129308 = ((((((di__129300) * (di__129300))) + (((dj__129301) * (dj__129301))))) + (((dk__129302) * (dk__129302))));
            ret__129308;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129309 = ((expI__128305) + (expJ__128308));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129310 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129303 = ((((((expI__128305) * (originI__128306->FMGL(i)))) + (((expJ__128308) * (originJ__128309->FMGL(i)))))) / (gamma__129309));
        x10_double j__129304 = ((((((expI__128305) * (originI__128306->FMGL(j)))) + (((expJ__128308) * (originJ__128309->FMGL(j)))))) / (gamma__129309));
        x10_double k__129305 = ((((((expI__128305) * (originI__128306->FMGL(k)))) + (((expJ__128308) * (originJ__128309->FMGL(k)))))) / (gamma__129309));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129310->FMGL(i) = i__129303;
        newOrigin__129310->FMGL(j) = j__129304;
        newOrigin__129310->FMGL(k) = k__129305;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129311 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128307->FMGL(l),
                                  powerJ__128310->FMGL(l),
                                  ((newOrigin__129310->FMGL(i)) - (originI__128306->FMGL(i))),
                                  ((newOrigin__129310->FMGL(i)) - (originJ__128309->FMGL(i))),
                                  gamma__129309);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129312 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128307->FMGL(m),
                                  powerJ__128310->FMGL(m),
                                  ((newOrigin__129310->FMGL(j)) - (originI__128306->FMGL(j))),
                                  ((newOrigin__129310->FMGL(j)) - (originJ__128309->FMGL(j))),
                                  gamma__129309);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129313 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128307->FMGL(n),
                                  powerJ__128310->FMGL(n),
                                  ((newOrigin__129310->FMGL(k)) - (originI__128306->FMGL(k))),
                                  ((newOrigin__129310->FMGL(k)) - (originJ__128309->FMGL(k))),
                                  gamma__129309);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128317 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129309)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128305))) * (expJ__128308))) * (radiusABSquared__129306))) / (gamma__129309)))))) * (wx__129311))) * (wy__129312))) * (wz__129313));
        ret__128317;
    }))
    ));
    
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::overlap(x10_double expI,
                                                        ::x10x::vector::Point3d originI,
                                                        ::au::edu::anu::qm::Power powerI,
                                                        x10_double expJ,
                                                        ::x10x::vector::Point3d originJ,
                                                        ::au::edu::anu::qm::Power powerJ) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double radiusABSquared = (__extension__ ({
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d b__128331 = originJ;
        x10_double ret__128335;
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double di__129314 = ((originI->FMGL(i)) - (b__128331->FMGL(i)));
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dj__129315 = ((originI->FMGL(j)) - (b__128331->FMGL(j)));
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dk__129316 = ((originI->FMGL(k)) - (b__128331->FMGL(k)));
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ret__128335 = ((((((di__129314) * (di__129314))) + (((dj__129315) * (dj__129315))))) + (((dk__129316) * (dk__129316))));
        ret__128335;
    }))
    ;
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double gamma = ((expI) + (expJ));
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::x10x::vector::Point3d newOrigin =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__129317 = ((((((expI) * (originI->FMGL(i)))) + (((expJ) * (originJ->FMGL(i)))))) / (gamma));
    x10_double j__129318 = ((((((expI) * (originI->FMGL(j)))) + (((expJ) * (originJ->FMGL(j)))))) / (gamma));
    x10_double k__129319 = ((((((expI) * (originI->FMGL(k)))) + (((expJ) * (originJ->FMGL(k)))))) / (gamma));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    newOrigin->FMGL(i) = i__129317;
    newOrigin->FMGL(j) = j__129318;
    newOrigin->FMGL(k) = k__129319;
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double wx = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                      powerI->FMGL(l), powerJ->FMGL(l), ((newOrigin->FMGL(i)) - (originI->FMGL(i))),
                      ((newOrigin->FMGL(i)) - (originJ->FMGL(i))),
                      gamma);
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double wy = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                      powerI->FMGL(m), powerJ->FMGL(m), ((newOrigin->FMGL(j)) - (originI->FMGL(j))),
                      ((newOrigin->FMGL(j)) - (originJ->FMGL(j))),
                      gamma);
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double wz = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                      powerI->FMGL(n), powerJ->FMGL(n), ((newOrigin->FMGL(k)) - (originI->FMGL(k))),
                      ((newOrigin->FMGL(k)) - (originJ->FMGL(k))),
                      gamma);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI))) * (expJ))) * (radiusABSquared))) / (gamma)))))) * (wx))) * (wy))) * (wz));
    
}

//#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
::au::edu::anu::qm::PrimitiveGaussian* au::edu::anu::qm::PrimitiveGaussian::mul(
  ::au::edu::anu::qm::PrimitiveGaussian* pg) {
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double gamma = ((this->FMGL(exponent)) + (::x10aux::nullCheck(pg)->FMGL(exponent)));
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::x10x::vector::Point3d newOrigin =  ::x10x::vector::Point3d::_alloc();
    
    //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double i__129320 = ((((((this->FMGL(exponent)) * (this->FMGL(origin)->FMGL(i)))) + (((::x10aux::nullCheck(pg)->FMGL(exponent)) * (::x10aux::nullCheck(pg)->FMGL(origin)->FMGL(i)))))) / (gamma));
    x10_double j__129321 = ((((((this->FMGL(exponent)) * (this->FMGL(origin)->FMGL(j)))) + (((::x10aux::nullCheck(pg)->FMGL(exponent)) * (::x10aux::nullCheck(pg)->FMGL(origin)->FMGL(j)))))) / (gamma));
    x10_double k__129322 = ((((((this->FMGL(exponent)) * (this->FMGL(origin)->FMGL(k)))) + (((::x10aux::nullCheck(pg)->FMGL(exponent)) * (::x10aux::nullCheck(pg)->FMGL(origin)->FMGL(k)))))) / (gamma));
    
    //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    newOrigin->FMGL(i) = i__129320;
    newOrigin->FMGL(j) = j__129321;
    newOrigin->FMGL(k) = k__129322;
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::au::edu::anu::qm::PrimitiveGaussian* pgres =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian());
    (pgres)->::au::edu::anu::qm::PrimitiveGaussian::_constructor(
      newOrigin, (__extension__ ({
          ::au::edu::anu::qm::Power alloc__102868 =  ::au::edu::anu::qm::Power::_alloc();
          (alloc__102868)->::au::edu::anu::qm::Power::_constructor(
            ((x10_int)0), ((x10_int)0), ((x10_int)0));
          alloc__102868;
      }))
      , gamma, 0.0, false);
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return pgres;
    
}

//#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::overlap1D(
  x10_int l1, x10_int l2, x10_double pax, x10_double pbx,
  x10_double gamma) {
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double sum = 0.0;
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double k = ((1.0) + (::x10::lang::MathNatives::floor(((0.5) * (((x10_double) (((l1) + (l2)))))))));
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_double) (i))) < (k));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            sum = ((sum) + (((((::au::edu::anu::qm::MathUtil::binomialPrefactor(
                                  ((((x10_int)2)) * (i)),
                                  l1, l2, pax, pbx)) * (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                         ((((((x10_int)2)) * (i))) - (((x10_int)1))))))))) / (::x10::lang::Math::pow(
                                                                                                                                ((((x10_double) (((x10_int)2)))) * (gamma)),
                                                                                                                                i)))));
        }
    }
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return sum;
    
}

//#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::kinetic(::au::edu::anu::qm::PrimitiveGaussian* pg) {
    
    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double expI__129480 = this->FMGL(exponent);
    ::x10x::vector::Point3d originI__129481 = this->FMGL(origin);
    ::au::edu::anu::qm::Power powerI__129482 = this->FMGL(power);
    x10_double normI__129483 = this->FMGL(normalization);
    x10_double expJ__129484 = ::x10aux::nullCheck(pg)->FMGL(exponent);
    ::x10x::vector::Point3d originJ__129485 = ::x10aux::nullCheck(pg)->FMGL(origin);
    ::au::edu::anu::qm::Power powerJ__129486 = ::x10aux::nullCheck(pg)->FMGL(power);
    x10_double normJ__129487 = ::x10aux::nullCheck(pg)->FMGL(normalization);
    x10_double ret__129488;
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_int l__129421 = powerJ__129486->FMGL(l);
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_int m__129422 = powerJ__129486->FMGL(m);
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_int n__129423 = powerJ__129486->FMGL(n);
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double term__129424 = ((((expJ__129484) * (((x10_double) (((((((x10_int)2)) * (((((l__129421) + (m__129422))) + (n__129423))))) + (((x10_int)3)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129425 = expI__129480;
        ::x10x::vector::Point3d originI__129426 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129427 = powerI__129482;
        x10_double expJ__129428 = expJ__129484;
        ::x10x::vector::Point3d originJ__129429 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129430 = powerJ__129486;
        x10_double ret__129431;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129329 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129330 = originJ__129429;
            x10_double ret__129331;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129323 = ((originI__129426->FMGL(i)) - (b__129330->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129324 = ((originI__129426->FMGL(j)) - (b__129330->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129325 = ((originI__129426->FMGL(k)) - (b__129330->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129331 = ((((((di__129323) * (di__129323))) + (((dj__129324) * (dj__129324))))) + (((dk__129325) * (dk__129325))));
            ret__129331;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129332 = ((expI__129425) + (expJ__129428));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129333 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129326 = ((((((expI__129425) * (originI__129426->FMGL(i)))) + (((expJ__129428) * (originJ__129429->FMGL(i)))))) / (gamma__129332));
        x10_double j__129327 = ((((((expI__129425) * (originI__129426->FMGL(j)))) + (((expJ__129428) * (originJ__129429->FMGL(j)))))) / (gamma__129332));
        x10_double k__129328 = ((((((expI__129425) * (originI__129426->FMGL(k)))) + (((expJ__129428) * (originJ__129429->FMGL(k)))))) / (gamma__129332));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129333->FMGL(i) = i__129326;
        newOrigin__129333->FMGL(j) = j__129327;
        newOrigin__129333->FMGL(k) = k__129328;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129334 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129427->FMGL(l),
                                  powerJ__129430->FMGL(l),
                                  ((newOrigin__129333->FMGL(i)) - (originI__129426->FMGL(i))),
                                  ((newOrigin__129333->FMGL(i)) - (originJ__129429->FMGL(i))),
                                  gamma__129332);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129335 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129427->FMGL(m),
                                  powerJ__129430->FMGL(m),
                                  ((newOrigin__129333->FMGL(j)) - (originI__129426->FMGL(j))),
                                  ((newOrigin__129333->FMGL(j)) - (originJ__129429->FMGL(j))),
                                  gamma__129332);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129336 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129427->FMGL(n),
                                  powerJ__129430->FMGL(n),
                                  ((newOrigin__129333->FMGL(k)) - (originI__129426->FMGL(k))),
                                  ((newOrigin__129333->FMGL(k)) - (originJ__129429->FMGL(k))),
                                  gamma__129332);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129431 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129332)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129425))) * (expJ__129428))) * (radiusABSquared__129329))) / (gamma__129332)))))) * (wx__129334))) * (wy__129335))) * (wz__129336));
        ret__129431;
    }))
    ));
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    term__129424 = ((term__129424) + (((((((-2.0) * (expJ__129484))) * (expJ__129484))) * ((((((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129432 = expI__129480;
        ::x10x::vector::Point3d originI__129433 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129434 = powerI__129482;
        x10_double expJ__129435 = expJ__129484;
        ::x10x::vector::Point3d originJ__129436 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129437 = (__extension__ ({
            
            //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__129438 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__129438)->::au::edu::anu::qm::Power::_constructor(
              ((l__129421) + (((x10_int)2))), m__129422, n__129423);
            alloc__129438;
        }))
        ;
        x10_double ret__129439;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129343 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129344 = originJ__129436;
            x10_double ret__129345;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129337 = ((originI__129433->FMGL(i)) - (b__129344->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129338 = ((originI__129433->FMGL(j)) - (b__129344->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129339 = ((originI__129433->FMGL(k)) - (b__129344->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129345 = ((((((di__129337) * (di__129337))) + (((dj__129338) * (dj__129338))))) + (((dk__129339) * (dk__129339))));
            ret__129345;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129346 = ((expI__129432) + (expJ__129435));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129347 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129340 = ((((((expI__129432) * (originI__129433->FMGL(i)))) + (((expJ__129435) * (originJ__129436->FMGL(i)))))) / (gamma__129346));
        x10_double j__129341 = ((((((expI__129432) * (originI__129433->FMGL(j)))) + (((expJ__129435) * (originJ__129436->FMGL(j)))))) / (gamma__129346));
        x10_double k__129342 = ((((((expI__129432) * (originI__129433->FMGL(k)))) + (((expJ__129435) * (originJ__129436->FMGL(k)))))) / (gamma__129346));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129347->FMGL(i) = i__129340;
        newOrigin__129347->FMGL(j) = j__129341;
        newOrigin__129347->FMGL(k) = k__129342;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129348 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129434->FMGL(l),
                                  powerJ__129437->FMGL(l),
                                  ((newOrigin__129347->FMGL(i)) - (originI__129433->FMGL(i))),
                                  ((newOrigin__129347->FMGL(i)) - (originJ__129436->FMGL(i))),
                                  gamma__129346);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129349 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129434->FMGL(m),
                                  powerJ__129437->FMGL(m),
                                  ((newOrigin__129347->FMGL(j)) - (originI__129433->FMGL(j))),
                                  ((newOrigin__129347->FMGL(j)) - (originJ__129436->FMGL(j))),
                                  gamma__129346);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129350 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129434->FMGL(n),
                                  powerJ__129437->FMGL(n),
                                  ((newOrigin__129347->FMGL(k)) - (originI__129433->FMGL(k))),
                                  ((newOrigin__129347->FMGL(k)) - (originJ__129436->FMGL(k))),
                                  gamma__129346);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129439 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129346)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129432))) * (expJ__129435))) * (radiusABSquared__129343))) / (gamma__129346)))))) * (wx__129348))) * (wy__129349))) * (wz__129350));
        ret__129439;
    }))
    ) + ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129440 = expI__129480;
        ::x10x::vector::Point3d originI__129441 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129442 = powerI__129482;
        x10_double expJ__129443 = expJ__129484;
        ::x10x::vector::Point3d originJ__129444 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129445 = (__extension__ ({
            
            //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__129446 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__129446)->::au::edu::anu::qm::Power::_constructor(
              l__129421, ((m__129422) + (((x10_int)2))), n__129423);
            alloc__129446;
        }))
        ;
        x10_double ret__129447;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129357 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129358 = originJ__129444;
            x10_double ret__129359;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129351 = ((originI__129441->FMGL(i)) - (b__129358->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129352 = ((originI__129441->FMGL(j)) - (b__129358->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129353 = ((originI__129441->FMGL(k)) - (b__129358->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129359 = ((((((di__129351) * (di__129351))) + (((dj__129352) * (dj__129352))))) + (((dk__129353) * (dk__129353))));
            ret__129359;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129360 = ((expI__129440) + (expJ__129443));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129361 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129354 = ((((((expI__129440) * (originI__129441->FMGL(i)))) + (((expJ__129443) * (originJ__129444->FMGL(i)))))) / (gamma__129360));
        x10_double j__129355 = ((((((expI__129440) * (originI__129441->FMGL(j)))) + (((expJ__129443) * (originJ__129444->FMGL(j)))))) / (gamma__129360));
        x10_double k__129356 = ((((((expI__129440) * (originI__129441->FMGL(k)))) + (((expJ__129443) * (originJ__129444->FMGL(k)))))) / (gamma__129360));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129361->FMGL(i) = i__129354;
        newOrigin__129361->FMGL(j) = j__129355;
        newOrigin__129361->FMGL(k) = k__129356;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129362 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129442->FMGL(l),
                                  powerJ__129445->FMGL(l),
                                  ((newOrigin__129361->FMGL(i)) - (originI__129441->FMGL(i))),
                                  ((newOrigin__129361->FMGL(i)) - (originJ__129444->FMGL(i))),
                                  gamma__129360);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129363 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129442->FMGL(m),
                                  powerJ__129445->FMGL(m),
                                  ((newOrigin__129361->FMGL(j)) - (originI__129441->FMGL(j))),
                                  ((newOrigin__129361->FMGL(j)) - (originJ__129444->FMGL(j))),
                                  gamma__129360);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129364 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129442->FMGL(n),
                                  powerJ__129445->FMGL(n),
                                  ((newOrigin__129361->FMGL(k)) - (originI__129441->FMGL(k))),
                                  ((newOrigin__129361->FMGL(k)) - (originJ__129444->FMGL(k))),
                                  gamma__129360);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129447 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129360)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129440))) * (expJ__129443))) * (radiusABSquared__129357))) / (gamma__129360)))))) * (wx__129362))) * (wy__129363))) * (wz__129364));
        ret__129447;
    }))
    ))) + ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129448 = expI__129480;
        ::x10x::vector::Point3d originI__129449 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129450 = powerI__129482;
        x10_double expJ__129451 = expJ__129484;
        ::x10x::vector::Point3d originJ__129452 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129453 = (__extension__ ({
            
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__129454 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__129454)->::au::edu::anu::qm::Power::_constructor(
              l__129421, m__129422, ((n__129423) + (((x10_int)2))));
            alloc__129454;
        }))
        ;
        x10_double ret__129455;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129371 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129372 = originJ__129452;
            x10_double ret__129373;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129365 = ((originI__129449->FMGL(i)) - (b__129372->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129366 = ((originI__129449->FMGL(j)) - (b__129372->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129367 = ((originI__129449->FMGL(k)) - (b__129372->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129373 = ((((((di__129365) * (di__129365))) + (((dj__129366) * (dj__129366))))) + (((dk__129367) * (dk__129367))));
            ret__129373;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129374 = ((expI__129448) + (expJ__129451));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129375 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129368 = ((((((expI__129448) * (originI__129449->FMGL(i)))) + (((expJ__129451) * (originJ__129452->FMGL(i)))))) / (gamma__129374));
        x10_double j__129369 = ((((((expI__129448) * (originI__129449->FMGL(j)))) + (((expJ__129451) * (originJ__129452->FMGL(j)))))) / (gamma__129374));
        x10_double k__129370 = ((((((expI__129448) * (originI__129449->FMGL(k)))) + (((expJ__129451) * (originJ__129452->FMGL(k)))))) / (gamma__129374));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129375->FMGL(i) = i__129368;
        newOrigin__129375->FMGL(j) = j__129369;
        newOrigin__129375->FMGL(k) = k__129370;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129376 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129450->FMGL(l),
                                  powerJ__129453->FMGL(l),
                                  ((newOrigin__129375->FMGL(i)) - (originI__129449->FMGL(i))),
                                  ((newOrigin__129375->FMGL(i)) - (originJ__129452->FMGL(i))),
                                  gamma__129374);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129377 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129450->FMGL(m),
                                  powerJ__129453->FMGL(m),
                                  ((newOrigin__129375->FMGL(j)) - (originI__129449->FMGL(j))),
                                  ((newOrigin__129375->FMGL(j)) - (originJ__129452->FMGL(j))),
                                  gamma__129374);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129378 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129450->FMGL(n),
                                  powerJ__129453->FMGL(n),
                                  ((newOrigin__129375->FMGL(k)) - (originI__129449->FMGL(k))),
                                  ((newOrigin__129375->FMGL(k)) - (originJ__129452->FMGL(k))),
                                  gamma__129374);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129455 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129374)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129448))) * (expJ__129451))) * (radiusABSquared__129371))) / (gamma__129374)))))) * (wx__129376))) * (wy__129377))) * (wz__129378));
        ret__129455;
    }))
    ))))));
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    term__129424 = ((term__129424) + (((-0.5) * (((((((((x10_double) (((l__129421) * (((l__129421) - (((x10_int)1)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129456 = expI__129480;
        ::x10x::vector::Point3d originI__129457 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129458 = powerI__129482;
        x10_double expJ__129459 = expJ__129484;
        ::x10x::vector::Point3d originJ__129460 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129461 = (__extension__ ({
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__129462 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__129462)->::au::edu::anu::qm::Power::_constructor(
              ((l__129421) - (((x10_int)2))), m__129422, n__129423);
            alloc__129462;
        }))
        ;
        x10_double ret__129463;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129385 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129386 = originJ__129460;
            x10_double ret__129387;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129379 = ((originI__129457->FMGL(i)) - (b__129386->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129380 = ((originI__129457->FMGL(j)) - (b__129386->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129381 = ((originI__129457->FMGL(k)) - (b__129386->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129387 = ((((((di__129379) * (di__129379))) + (((dj__129380) * (dj__129380))))) + (((dk__129381) * (dk__129381))));
            ret__129387;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129388 = ((expI__129456) + (expJ__129459));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129389 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129382 = ((((((expI__129456) * (originI__129457->FMGL(i)))) + (((expJ__129459) * (originJ__129460->FMGL(i)))))) / (gamma__129388));
        x10_double j__129383 = ((((((expI__129456) * (originI__129457->FMGL(j)))) + (((expJ__129459) * (originJ__129460->FMGL(j)))))) / (gamma__129388));
        x10_double k__129384 = ((((((expI__129456) * (originI__129457->FMGL(k)))) + (((expJ__129459) * (originJ__129460->FMGL(k)))))) / (gamma__129388));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129389->FMGL(i) = i__129382;
        newOrigin__129389->FMGL(j) = j__129383;
        newOrigin__129389->FMGL(k) = k__129384;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129390 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129458->FMGL(l),
                                  powerJ__129461->FMGL(l),
                                  ((newOrigin__129389->FMGL(i)) - (originI__129457->FMGL(i))),
                                  ((newOrigin__129389->FMGL(i)) - (originJ__129460->FMGL(i))),
                                  gamma__129388);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129391 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129458->FMGL(m),
                                  powerJ__129461->FMGL(m),
                                  ((newOrigin__129389->FMGL(j)) - (originI__129457->FMGL(j))),
                                  ((newOrigin__129389->FMGL(j)) - (originJ__129460->FMGL(j))),
                                  gamma__129388);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129392 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129458->FMGL(n),
                                  powerJ__129461->FMGL(n),
                                  ((newOrigin__129389->FMGL(k)) - (originI__129457->FMGL(k))),
                                  ((newOrigin__129389->FMGL(k)) - (originJ__129460->FMGL(k))),
                                  gamma__129388);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129463 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129388)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129456))) * (expJ__129459))) * (radiusABSquared__129385))) / (gamma__129388)))))) * (wx__129390))) * (wy__129391))) * (wz__129392));
        ret__129463;
    }))
    ))) + (((((x10_double) (((m__129422) * (((m__129422) - (((x10_int)1)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129464 = expI__129480;
        ::x10x::vector::Point3d originI__129465 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129466 = powerI__129482;
        x10_double expJ__129467 = expJ__129484;
        ::x10x::vector::Point3d originJ__129468 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129469 = (__extension__ ({
            
            //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__129470 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__129470)->::au::edu::anu::qm::Power::_constructor(
              l__129421, ((m__129422) - (((x10_int)2))), n__129423);
            alloc__129470;
        }))
        ;
        x10_double ret__129471;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129399 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129400 = originJ__129468;
            x10_double ret__129401;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129393 = ((originI__129465->FMGL(i)) - (b__129400->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129394 = ((originI__129465->FMGL(j)) - (b__129400->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129395 = ((originI__129465->FMGL(k)) - (b__129400->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129401 = ((((((di__129393) * (di__129393))) + (((dj__129394) * (dj__129394))))) + (((dk__129395) * (dk__129395))));
            ret__129401;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129402 = ((expI__129464) + (expJ__129467));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129403 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129396 = ((((((expI__129464) * (originI__129465->FMGL(i)))) + (((expJ__129467) * (originJ__129468->FMGL(i)))))) / (gamma__129402));
        x10_double j__129397 = ((((((expI__129464) * (originI__129465->FMGL(j)))) + (((expJ__129467) * (originJ__129468->FMGL(j)))))) / (gamma__129402));
        x10_double k__129398 = ((((((expI__129464) * (originI__129465->FMGL(k)))) + (((expJ__129467) * (originJ__129468->FMGL(k)))))) / (gamma__129402));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129403->FMGL(i) = i__129396;
        newOrigin__129403->FMGL(j) = j__129397;
        newOrigin__129403->FMGL(k) = k__129398;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129404 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129466->FMGL(l),
                                  powerJ__129469->FMGL(l),
                                  ((newOrigin__129403->FMGL(i)) - (originI__129465->FMGL(i))),
                                  ((newOrigin__129403->FMGL(i)) - (originJ__129468->FMGL(i))),
                                  gamma__129402);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129405 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129466->FMGL(m),
                                  powerJ__129469->FMGL(m),
                                  ((newOrigin__129403->FMGL(j)) - (originI__129465->FMGL(j))),
                                  ((newOrigin__129403->FMGL(j)) - (originJ__129468->FMGL(j))),
                                  gamma__129402);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129406 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129466->FMGL(n),
                                  powerJ__129469->FMGL(n),
                                  ((newOrigin__129403->FMGL(k)) - (originI__129465->FMGL(k))),
                                  ((newOrigin__129403->FMGL(k)) - (originJ__129468->FMGL(k))),
                                  gamma__129402);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129471 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129402)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129464))) * (expJ__129467))) * (radiusABSquared__129399))) / (gamma__129402)))))) * (wx__129404))) * (wy__129405))) * (wz__129406));
        ret__129471;
    }))
    ))))) + (((((x10_double) (((n__129423) * (((n__129423) - (((x10_int)1)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__129472 = expI__129480;
        ::x10x::vector::Point3d originI__129473 = originI__129481;
        ::au::edu::anu::qm::Power powerI__129474 = powerI__129482;
        x10_double expJ__129475 = expJ__129484;
        ::x10x::vector::Point3d originJ__129476 = originJ__129485;
        ::au::edu::anu::qm::Power powerJ__129477 = (__extension__ ({
            
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__129478 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__129478)->::au::edu::anu::qm::Power::_constructor(
              l__129421, m__129422, ((n__129423) - (((x10_int)2))));
            alloc__129478;
        }))
        ;
        x10_double ret__129479;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129413 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129414 = originJ__129476;
            x10_double ret__129415;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129407 = ((originI__129473->FMGL(i)) - (b__129414->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129408 = ((originI__129473->FMGL(j)) - (b__129414->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129409 = ((originI__129473->FMGL(k)) - (b__129414->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129415 = ((((((di__129407) * (di__129407))) + (((dj__129408) * (dj__129408))))) + (((dk__129409) * (dk__129409))));
            ret__129415;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129416 = ((expI__129472) + (expJ__129475));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129417 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129410 = ((((((expI__129472) * (originI__129473->FMGL(i)))) + (((expJ__129475) * (originJ__129476->FMGL(i)))))) / (gamma__129416));
        x10_double j__129411 = ((((((expI__129472) * (originI__129473->FMGL(j)))) + (((expJ__129475) * (originJ__129476->FMGL(j)))))) / (gamma__129416));
        x10_double k__129412 = ((((((expI__129472) * (originI__129473->FMGL(k)))) + (((expJ__129475) * (originJ__129476->FMGL(k)))))) / (gamma__129416));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129417->FMGL(i) = i__129410;
        newOrigin__129417->FMGL(j) = j__129411;
        newOrigin__129417->FMGL(k) = k__129412;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129418 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129474->FMGL(l),
                                  powerJ__129477->FMGL(l),
                                  ((newOrigin__129417->FMGL(i)) - (originI__129473->FMGL(i))),
                                  ((newOrigin__129417->FMGL(i)) - (originJ__129476->FMGL(i))),
                                  gamma__129416);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129419 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129474->FMGL(m),
                                  powerJ__129477->FMGL(m),
                                  ((newOrigin__129417->FMGL(j)) - (originI__129473->FMGL(j))),
                                  ((newOrigin__129417->FMGL(j)) - (originJ__129476->FMGL(j))),
                                  gamma__129416);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129420 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__129474->FMGL(n),
                                  powerJ__129477->FMGL(n),
                                  ((newOrigin__129417->FMGL(k)) - (originI__129473->FMGL(k))),
                                  ((newOrigin__129417->FMGL(k)) - (originJ__129476->FMGL(k))),
                                  gamma__129416);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__129479 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129416)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__129472))) * (expJ__129475))) * (radiusABSquared__129413))) / (gamma__129416)))))) * (wx__129418))) * (wy__129419))) * (wz__129420));
        ret__129479;
    }))
    ))))))));
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ret__129488 = ((((normI__129483) * (normJ__129487))) * (term__129424));
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return ret__129488;
    
}

//#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::kinetic(x10_double expI,
                                                        ::x10x::vector::Point3d originI,
                                                        ::au::edu::anu::qm::Power powerI,
                                                        x10_double normI,
                                                        x10_double expJ,
                                                        ::x10x::vector::Point3d originJ,
                                                        ::au::edu::anu::qm::Power powerJ,
                                                        x10_double normJ) {
    
    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_int l2 = powerJ->FMGL(l);
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_int m2 = powerJ->FMGL(m);
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_int n2 = powerJ->FMGL(n);
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double term = ((((expJ) * (((x10_double) (((((((x10_int)2)) * (((((l2) + (m2))) + (n2))))) + (((x10_int)3)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128551 = expI;
        ::x10x::vector::Point3d originI__128552 = originI;
        ::au::edu::anu::qm::Power powerI__128553 = powerI;
        x10_double expJ__128554 = expJ;
        ::x10x::vector::Point3d originJ__128555 = originJ;
        ::au::edu::anu::qm::Power powerJ__128556 = powerJ;
        x10_double ret__128563;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129495 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129496 = originJ__128555;
            x10_double ret__129497;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129489 = ((originI__128552->FMGL(i)) - (b__129496->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129490 = ((originI__128552->FMGL(j)) - (b__129496->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129491 = ((originI__128552->FMGL(k)) - (b__129496->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129497 = ((((((di__129489) * (di__129489))) + (((dj__129490) * (dj__129490))))) + (((dk__129491) * (dk__129491))));
            ret__129497;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129498 = ((expI__128551) + (expJ__128554));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129499 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129492 = ((((((expI__128551) * (originI__128552->FMGL(i)))) + (((expJ__128554) * (originJ__128555->FMGL(i)))))) / (gamma__129498));
        x10_double j__129493 = ((((((expI__128551) * (originI__128552->FMGL(j)))) + (((expJ__128554) * (originJ__128555->FMGL(j)))))) / (gamma__129498));
        x10_double k__129494 = ((((((expI__128551) * (originI__128552->FMGL(k)))) + (((expJ__128554) * (originJ__128555->FMGL(k)))))) / (gamma__129498));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129499->FMGL(i) = i__129492;
        newOrigin__129499->FMGL(j) = j__129493;
        newOrigin__129499->FMGL(k) = k__129494;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129500 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128553->FMGL(l),
                                  powerJ__128556->FMGL(l),
                                  ((newOrigin__129499->FMGL(i)) - (originI__128552->FMGL(i))),
                                  ((newOrigin__129499->FMGL(i)) - (originJ__128555->FMGL(i))),
                                  gamma__129498);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129501 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128553->FMGL(m),
                                  powerJ__128556->FMGL(m),
                                  ((newOrigin__129499->FMGL(j)) - (originI__128552->FMGL(j))),
                                  ((newOrigin__129499->FMGL(j)) - (originJ__128555->FMGL(j))),
                                  gamma__129498);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129502 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128553->FMGL(n),
                                  powerJ__128556->FMGL(n),
                                  ((newOrigin__129499->FMGL(k)) - (originI__128552->FMGL(k))),
                                  ((newOrigin__129499->FMGL(k)) - (originJ__128555->FMGL(k))),
                                  gamma__129498);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128563 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129498)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128551))) * (expJ__128554))) * (radiusABSquared__129495))) / (gamma__129498)))))) * (wx__129500))) * (wy__129501))) * (wz__129502));
        ret__128563;
    }))
    ));
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    term = ((term) + (((((((-2.0) * (expJ))) * (expJ))) * ((((((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128577 = expI;
        ::x10x::vector::Point3d originI__128578 = originI;
        ::au::edu::anu::qm::Power powerI__128579 = powerI;
        x10_double expJ__128580 = expJ;
        ::x10x::vector::Point3d originJ__128581 = originJ;
        ::au::edu::anu::qm::Power powerJ__128582 = (__extension__ ({
            
            //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__102869 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__102869)->::au::edu::anu::qm::Power::_constructor(
              ((l2) + (((x10_int)2))), m2, n2);
            alloc__102869;
        }))
        ;
        x10_double ret__128589;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129509 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129510 = originJ__128581;
            x10_double ret__129511;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129503 = ((originI__128578->FMGL(i)) - (b__129510->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129504 = ((originI__128578->FMGL(j)) - (b__129510->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129505 = ((originI__128578->FMGL(k)) - (b__129510->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129511 = ((((((di__129503) * (di__129503))) + (((dj__129504) * (dj__129504))))) + (((dk__129505) * (dk__129505))));
            ret__129511;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129512 = ((expI__128577) + (expJ__128580));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129513 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129506 = ((((((expI__128577) * (originI__128578->FMGL(i)))) + (((expJ__128580) * (originJ__128581->FMGL(i)))))) / (gamma__129512));
        x10_double j__129507 = ((((((expI__128577) * (originI__128578->FMGL(j)))) + (((expJ__128580) * (originJ__128581->FMGL(j)))))) / (gamma__129512));
        x10_double k__129508 = ((((((expI__128577) * (originI__128578->FMGL(k)))) + (((expJ__128580) * (originJ__128581->FMGL(k)))))) / (gamma__129512));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129513->FMGL(i) = i__129506;
        newOrigin__129513->FMGL(j) = j__129507;
        newOrigin__129513->FMGL(k) = k__129508;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129514 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128579->FMGL(l),
                                  powerJ__128582->FMGL(l),
                                  ((newOrigin__129513->FMGL(i)) - (originI__128578->FMGL(i))),
                                  ((newOrigin__129513->FMGL(i)) - (originJ__128581->FMGL(i))),
                                  gamma__129512);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129515 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128579->FMGL(m),
                                  powerJ__128582->FMGL(m),
                                  ((newOrigin__129513->FMGL(j)) - (originI__128578->FMGL(j))),
                                  ((newOrigin__129513->FMGL(j)) - (originJ__128581->FMGL(j))),
                                  gamma__129512);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129516 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128579->FMGL(n),
                                  powerJ__128582->FMGL(n),
                                  ((newOrigin__129513->FMGL(k)) - (originI__128578->FMGL(k))),
                                  ((newOrigin__129513->FMGL(k)) - (originJ__128581->FMGL(k))),
                                  gamma__129512);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128589 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129512)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128577))) * (expJ__128580))) * (radiusABSquared__129509))) / (gamma__129512)))))) * (wx__129514))) * (wy__129515))) * (wz__129516));
        ret__128589;
    }))
    ) + ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128603 = expI;
        ::x10x::vector::Point3d originI__128604 = originI;
        ::au::edu::anu::qm::Power powerI__128605 = powerI;
        x10_double expJ__128606 = expJ;
        ::x10x::vector::Point3d originJ__128607 = originJ;
        ::au::edu::anu::qm::Power powerJ__128608 = (__extension__ ({
            
            //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__102870 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__102870)->::au::edu::anu::qm::Power::_constructor(
              l2, ((m2) + (((x10_int)2))), n2);
            alloc__102870;
        }))
        ;
        x10_double ret__128615;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129523 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129524 = originJ__128607;
            x10_double ret__129525;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129517 = ((originI__128604->FMGL(i)) - (b__129524->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129518 = ((originI__128604->FMGL(j)) - (b__129524->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129519 = ((originI__128604->FMGL(k)) - (b__129524->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129525 = ((((((di__129517) * (di__129517))) + (((dj__129518) * (dj__129518))))) + (((dk__129519) * (dk__129519))));
            ret__129525;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129526 = ((expI__128603) + (expJ__128606));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129527 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129520 = ((((((expI__128603) * (originI__128604->FMGL(i)))) + (((expJ__128606) * (originJ__128607->FMGL(i)))))) / (gamma__129526));
        x10_double j__129521 = ((((((expI__128603) * (originI__128604->FMGL(j)))) + (((expJ__128606) * (originJ__128607->FMGL(j)))))) / (gamma__129526));
        x10_double k__129522 = ((((((expI__128603) * (originI__128604->FMGL(k)))) + (((expJ__128606) * (originJ__128607->FMGL(k)))))) / (gamma__129526));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129527->FMGL(i) = i__129520;
        newOrigin__129527->FMGL(j) = j__129521;
        newOrigin__129527->FMGL(k) = k__129522;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129528 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128605->FMGL(l),
                                  powerJ__128608->FMGL(l),
                                  ((newOrigin__129527->FMGL(i)) - (originI__128604->FMGL(i))),
                                  ((newOrigin__129527->FMGL(i)) - (originJ__128607->FMGL(i))),
                                  gamma__129526);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129529 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128605->FMGL(m),
                                  powerJ__128608->FMGL(m),
                                  ((newOrigin__129527->FMGL(j)) - (originI__128604->FMGL(j))),
                                  ((newOrigin__129527->FMGL(j)) - (originJ__128607->FMGL(j))),
                                  gamma__129526);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129530 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128605->FMGL(n),
                                  powerJ__128608->FMGL(n),
                                  ((newOrigin__129527->FMGL(k)) - (originI__128604->FMGL(k))),
                                  ((newOrigin__129527->FMGL(k)) - (originJ__128607->FMGL(k))),
                                  gamma__129526);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128615 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129526)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128603))) * (expJ__128606))) * (radiusABSquared__129523))) / (gamma__129526)))))) * (wx__129528))) * (wy__129529))) * (wz__129530));
        ret__128615;
    }))
    ))) + ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128629 = expI;
        ::x10x::vector::Point3d originI__128630 = originI;
        ::au::edu::anu::qm::Power powerI__128631 = powerI;
        x10_double expJ__128632 = expJ;
        ::x10x::vector::Point3d originJ__128633 = originJ;
        ::au::edu::anu::qm::Power powerJ__128634 = (__extension__ ({
            
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__102871 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__102871)->::au::edu::anu::qm::Power::_constructor(
              l2, m2, ((n2) + (((x10_int)2))));
            alloc__102871;
        }))
        ;
        x10_double ret__128641;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129537 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129538 = originJ__128633;
            x10_double ret__129539;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129531 = ((originI__128630->FMGL(i)) - (b__129538->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129532 = ((originI__128630->FMGL(j)) - (b__129538->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129533 = ((originI__128630->FMGL(k)) - (b__129538->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129539 = ((((((di__129531) * (di__129531))) + (((dj__129532) * (dj__129532))))) + (((dk__129533) * (dk__129533))));
            ret__129539;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129540 = ((expI__128629) + (expJ__128632));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129541 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129534 = ((((((expI__128629) * (originI__128630->FMGL(i)))) + (((expJ__128632) * (originJ__128633->FMGL(i)))))) / (gamma__129540));
        x10_double j__129535 = ((((((expI__128629) * (originI__128630->FMGL(j)))) + (((expJ__128632) * (originJ__128633->FMGL(j)))))) / (gamma__129540));
        x10_double k__129536 = ((((((expI__128629) * (originI__128630->FMGL(k)))) + (((expJ__128632) * (originJ__128633->FMGL(k)))))) / (gamma__129540));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129541->FMGL(i) = i__129534;
        newOrigin__129541->FMGL(j) = j__129535;
        newOrigin__129541->FMGL(k) = k__129536;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129542 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128631->FMGL(l),
                                  powerJ__128634->FMGL(l),
                                  ((newOrigin__129541->FMGL(i)) - (originI__128630->FMGL(i))),
                                  ((newOrigin__129541->FMGL(i)) - (originJ__128633->FMGL(i))),
                                  gamma__129540);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129543 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128631->FMGL(m),
                                  powerJ__128634->FMGL(m),
                                  ((newOrigin__129541->FMGL(j)) - (originI__128630->FMGL(j))),
                                  ((newOrigin__129541->FMGL(j)) - (originJ__128633->FMGL(j))),
                                  gamma__129540);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129544 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128631->FMGL(n),
                                  powerJ__128634->FMGL(n),
                                  ((newOrigin__129541->FMGL(k)) - (originI__128630->FMGL(k))),
                                  ((newOrigin__129541->FMGL(k)) - (originJ__128633->FMGL(k))),
                                  gamma__129540);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128641 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129540)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128629))) * (expJ__128632))) * (radiusABSquared__129537))) / (gamma__129540)))))) * (wx__129542))) * (wy__129543))) * (wz__129544));
        ret__128641;
    }))
    ))))));
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    term = ((term) + (((-0.5) * (((((((((x10_double) (((l2) * (((l2) - (((x10_int)1)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128655 = expI;
        ::x10x::vector::Point3d originI__128656 = originI;
        ::au::edu::anu::qm::Power powerI__128657 = powerI;
        x10_double expJ__128658 = expJ;
        ::x10x::vector::Point3d originJ__128659 = originJ;
        ::au::edu::anu::qm::Power powerJ__128660 = (__extension__ ({
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__102872 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__102872)->::au::edu::anu::qm::Power::_constructor(
              ((l2) - (((x10_int)2))), m2, n2);
            alloc__102872;
        }))
        ;
        x10_double ret__128667;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129551 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129552 = originJ__128659;
            x10_double ret__129553;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129545 = ((originI__128656->FMGL(i)) - (b__129552->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129546 = ((originI__128656->FMGL(j)) - (b__129552->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129547 = ((originI__128656->FMGL(k)) - (b__129552->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129553 = ((((((di__129545) * (di__129545))) + (((dj__129546) * (dj__129546))))) + (((dk__129547) * (dk__129547))));
            ret__129553;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129554 = ((expI__128655) + (expJ__128658));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129555 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129548 = ((((((expI__128655) * (originI__128656->FMGL(i)))) + (((expJ__128658) * (originJ__128659->FMGL(i)))))) / (gamma__129554));
        x10_double j__129549 = ((((((expI__128655) * (originI__128656->FMGL(j)))) + (((expJ__128658) * (originJ__128659->FMGL(j)))))) / (gamma__129554));
        x10_double k__129550 = ((((((expI__128655) * (originI__128656->FMGL(k)))) + (((expJ__128658) * (originJ__128659->FMGL(k)))))) / (gamma__129554));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129555->FMGL(i) = i__129548;
        newOrigin__129555->FMGL(j) = j__129549;
        newOrigin__129555->FMGL(k) = k__129550;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129556 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128657->FMGL(l),
                                  powerJ__128660->FMGL(l),
                                  ((newOrigin__129555->FMGL(i)) - (originI__128656->FMGL(i))),
                                  ((newOrigin__129555->FMGL(i)) - (originJ__128659->FMGL(i))),
                                  gamma__129554);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129557 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128657->FMGL(m),
                                  powerJ__128660->FMGL(m),
                                  ((newOrigin__129555->FMGL(j)) - (originI__128656->FMGL(j))),
                                  ((newOrigin__129555->FMGL(j)) - (originJ__128659->FMGL(j))),
                                  gamma__129554);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129558 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128657->FMGL(n),
                                  powerJ__128660->FMGL(n),
                                  ((newOrigin__129555->FMGL(k)) - (originI__128656->FMGL(k))),
                                  ((newOrigin__129555->FMGL(k)) - (originJ__128659->FMGL(k))),
                                  gamma__129554);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128667 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129554)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128655))) * (expJ__128658))) * (radiusABSquared__129551))) / (gamma__129554)))))) * (wx__129556))) * (wy__129557))) * (wz__129558));
        ret__128667;
    }))
    ))) + (((((x10_double) (((m2) * (((m2) - (((x10_int)1)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128681 = expI;
        ::x10x::vector::Point3d originI__128682 = originI;
        ::au::edu::anu::qm::Power powerI__128683 = powerI;
        x10_double expJ__128684 = expJ;
        ::x10x::vector::Point3d originJ__128685 = originJ;
        ::au::edu::anu::qm::Power powerJ__128686 = (__extension__ ({
            
            //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__102873 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__102873)->::au::edu::anu::qm::Power::_constructor(
              l2, ((m2) - (((x10_int)2))), n2);
            alloc__102873;
        }))
        ;
        x10_double ret__128693;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129565 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129566 = originJ__128685;
            x10_double ret__129567;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129559 = ((originI__128682->FMGL(i)) - (b__129566->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129560 = ((originI__128682->FMGL(j)) - (b__129566->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129561 = ((originI__128682->FMGL(k)) - (b__129566->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129567 = ((((((di__129559) * (di__129559))) + (((dj__129560) * (dj__129560))))) + (((dk__129561) * (dk__129561))));
            ret__129567;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129568 = ((expI__128681) + (expJ__128684));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129569 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129562 = ((((((expI__128681) * (originI__128682->FMGL(i)))) + (((expJ__128684) * (originJ__128685->FMGL(i)))))) / (gamma__129568));
        x10_double j__129563 = ((((((expI__128681) * (originI__128682->FMGL(j)))) + (((expJ__128684) * (originJ__128685->FMGL(j)))))) / (gamma__129568));
        x10_double k__129564 = ((((((expI__128681) * (originI__128682->FMGL(k)))) + (((expJ__128684) * (originJ__128685->FMGL(k)))))) / (gamma__129568));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129569->FMGL(i) = i__129562;
        newOrigin__129569->FMGL(j) = j__129563;
        newOrigin__129569->FMGL(k) = k__129564;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129570 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128683->FMGL(l),
                                  powerJ__128686->FMGL(l),
                                  ((newOrigin__129569->FMGL(i)) - (originI__128682->FMGL(i))),
                                  ((newOrigin__129569->FMGL(i)) - (originJ__128685->FMGL(i))),
                                  gamma__129568);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129571 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128683->FMGL(m),
                                  powerJ__128686->FMGL(m),
                                  ((newOrigin__129569->FMGL(j)) - (originI__128682->FMGL(j))),
                                  ((newOrigin__129569->FMGL(j)) - (originJ__128685->FMGL(j))),
                                  gamma__129568);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129572 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128683->FMGL(n),
                                  powerJ__128686->FMGL(n),
                                  ((newOrigin__129569->FMGL(k)) - (originI__128682->FMGL(k))),
                                  ((newOrigin__129569->FMGL(k)) - (originJ__128685->FMGL(k))),
                                  gamma__129568);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128693 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129568)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128681))) * (expJ__128684))) * (radiusABSquared__129565))) / (gamma__129568)))))) * (wx__129570))) * (wy__129571))) * (wz__129572));
        ret__128693;
    }))
    ))))) + (((((x10_double) (((n2) * (((n2) - (((x10_int)1)))))))) * ((__extension__ ({
        
        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double expI__128707 = expI;
        ::x10x::vector::Point3d originI__128708 = originI;
        ::au::edu::anu::qm::Power powerI__128709 = powerI;
        x10_double expJ__128710 = expJ;
        ::x10x::vector::Point3d originJ__128711 = originJ;
        ::au::edu::anu::qm::Power powerJ__128712 = (__extension__ ({
            
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            ::au::edu::anu::qm::Power alloc__102874 =  ::au::edu::anu::qm::Power::_alloc();
            (alloc__102874)->::au::edu::anu::qm::Power::_constructor(
              l2, m2, ((n2) - (((x10_int)2))));
            alloc__102874;
        }))
        ;
        x10_double ret__128719;
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double radiusABSquared__129579 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__129580 = originJ__128711;
            x10_double ret__129581;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__129573 = ((originI__128708->FMGL(i)) - (b__129580->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__129574 = ((originI__128708->FMGL(j)) - (b__129580->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__129575 = ((originI__128708->FMGL(k)) - (b__129580->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__129581 = ((((((di__129573) * (di__129573))) + (((dj__129574) * (dj__129574))))) + (((dk__129575) * (dk__129575))));
            ret__129581;
        }))
        ;
        
        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double gamma__129582 = ((expI__128707) + (expJ__128710));
        
        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ::x10x::vector::Point3d newOrigin__129583 =  ::x10x::vector::Point3d::_alloc();
        
        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double i__129576 = ((((((expI__128707) * (originI__128708->FMGL(i)))) + (((expJ__128710) * (originJ__128711->FMGL(i)))))) / (gamma__129582));
        x10_double j__129577 = ((((((expI__128707) * (originI__128708->FMGL(j)))) + (((expJ__128710) * (originJ__128711->FMGL(j)))))) / (gamma__129582));
        x10_double k__129578 = ((((((expI__128707) * (originI__128708->FMGL(k)))) + (((expJ__128710) * (originJ__128711->FMGL(k)))))) / (gamma__129582));
        
        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        newOrigin__129583->FMGL(i) = i__129576;
        newOrigin__129583->FMGL(j) = j__129577;
        newOrigin__129583->FMGL(k) = k__129578;
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wx__129584 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128709->FMGL(l),
                                  powerJ__128712->FMGL(l),
                                  ((newOrigin__129583->FMGL(i)) - (originI__128708->FMGL(i))),
                                  ((newOrigin__129583->FMGL(i)) - (originJ__128711->FMGL(i))),
                                  gamma__129582);
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wy__129585 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128709->FMGL(m),
                                  powerJ__128712->FMGL(m),
                                  ((newOrigin__129583->FMGL(j)) - (originI__128708->FMGL(j))),
                                  ((newOrigin__129583->FMGL(j)) - (originJ__128711->FMGL(j))),
                                  gamma__129582);
        
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        x10_double wz__129586 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                  powerI__128709->FMGL(n),
                                  powerJ__128712->FMGL(n),
                                  ((newOrigin__129583->FMGL(k)) - (originI__128708->FMGL(k))),
                                  ((newOrigin__129583->FMGL(k)) - (originJ__128711->FMGL(k))),
                                  gamma__129582);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
        ret__128719 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__129582)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__128707))) * (expJ__128710))) * (radiusABSquared__129579))) / (gamma__129582)))))) * (wx__129584))) * (wy__129585))) * (wz__129586));
        ret__128719;
    }))
    ))))))));
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return ((((normI) * (normJ))) * (term));
    
}

//#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
x10_double au::edu::anu::qm::PrimitiveGaussian::nuclear(::au::edu::anu::qm::PrimitiveGaussian* pg,
                                                        ::x10x::vector::Point3d centre) {
    
    //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::au::edu::anu::qm::PrimitiveGaussian* prod = this->au::edu::anu::qm::PrimitiveGaussian::mul(
                                                    pg);
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double rABSquared = (__extension__ ({
        ::x10x::vector::Point3d this__128737 = this->FMGL(origin);
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d b__128733 = ::x10aux::nullCheck(pg)->FMGL(origin);
        x10_double ret__128738;
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double di__129587 = ((this__128737->FMGL(i)) - (b__128733->FMGL(i)));
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dj__129588 = ((this__128737->FMGL(j)) - (b__128733->FMGL(j)));
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dk__129589 = ((this__128737->FMGL(k)) - (b__128733->FMGL(k)));
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ret__128738 = ((((((di__129587) * (di__129587))) + (((dj__129588) * (dj__129588))))) + (((dk__129589) * (dk__129589))));
        ret__128738;
    }))
    ;
    
    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double rCPSquared = (__extension__ ({
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d b__128740 = ::x10aux::nullCheck(prod)->FMGL(origin);
        x10_double ret__128744;
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double di__129590 = ((centre->FMGL(i)) - (b__128740->FMGL(i)));
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dj__129591 = ((centre->FMGL(j)) - (b__128740->FMGL(j)));
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dk__129592 = ((centre->FMGL(k)) - (b__128740->FMGL(k)));
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ret__128744 = ((((((di__129590) * (di__129590))) + (((dj__129591) * (dj__129591))))) + (((dk__129592) * (dk__129592))));
        ret__128744;
    }))
    ;
    
    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::x10::lang::Rail< x10_double >* ax = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(((this->FMGL(power)->FMGL(l)) + (::x10aux::nullCheck(pg)->FMGL(power)->FMGL(l)))))) + (((x10_long)1ll))));
    
    //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->au::edu::anu::qm::PrimitiveGaussian::fillAArray(
      ax, this->FMGL(power)->FMGL(l), ::x10aux::nullCheck(pg)->FMGL(power)->FMGL(l),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(i)) - (this->FMGL(origin)->FMGL(i))),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(i)) - (::x10aux::nullCheck(pg)->FMGL(origin)->FMGL(i))),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(i)) - (centre->FMGL(i))),
      ::x10aux::nullCheck(prod)->FMGL(exponent));
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::x10::lang::Rail< x10_double >* ay = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(((this->FMGL(power)->FMGL(m)) + (::x10aux::nullCheck(pg)->FMGL(power)->FMGL(m)))))) + (((x10_long)1ll))));
    
    //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->au::edu::anu::qm::PrimitiveGaussian::fillAArray(
      ay, this->FMGL(power)->FMGL(m), ::x10aux::nullCheck(pg)->FMGL(power)->FMGL(m),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(j)) - (this->FMGL(origin)->FMGL(j))),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(j)) - (::x10aux::nullCheck(pg)->FMGL(origin)->FMGL(j))),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(j)) - (centre->FMGL(j))),
      ::x10aux::nullCheck(prod)->FMGL(exponent));
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    ::x10::lang::Rail< x10_double >* az = ::x10::lang::Rail< x10_double >::_make(((((x10_long)(((this->FMGL(power)->FMGL(n)) + (::x10aux::nullCheck(pg)->FMGL(power)->FMGL(n)))))) + (((x10_long)1ll))));
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    this->au::edu::anu::qm::PrimitiveGaussian::fillAArray(
      az, this->FMGL(power)->FMGL(n), ::x10aux::nullCheck(pg)->FMGL(power)->FMGL(n),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(k)) - (this->FMGL(origin)->FMGL(k))),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(k)) - (::x10aux::nullCheck(pg)->FMGL(origin)->FMGL(k))),
      ((::x10aux::nullCheck(prod)->FMGL(origin)->FMGL(k)) - (centre->FMGL(k))),
      ::x10aux::nullCheck(prod)->FMGL(exponent));
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    x10_double sum = 0.0;
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(ax)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(ay)->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                    {
                        x10_int k;
                        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(az)->FMGL(size))));
                             k = ((k) + (((x10_int)1)))) {
                            
                            //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            sum = ((sum) + (((((((ax->x10::lang::Rail< x10_double >::__apply(
                                                    ((x10_long)(i)))) * (ay->x10::lang::Rail< x10_double >::__apply(
                                                                           ((x10_long)(j)))))) * (az->x10::lang::Rail< x10_double >::__apply(
                                                                                                    ((x10_long)(k)))))) * (::au::edu::anu::qm::IntegralsUtils::computeFGamma(
                                                                                                                             ((((i) + (j))) + (k)),
                                                                                                                             ((rCPSquared) * (::x10aux::nullCheck(prod)->FMGL(exponent))))))));
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    return (((((((((((((-(this->FMGL(normalization)))) * (::x10aux::nullCheck(pg)->FMGL(normalization)))) * (2.0))) * (3.141592653589793))) / (::x10aux::nullCheck(prod)->FMGL(exponent)))) * (::x10::lang::MathNatives::exp((((((((-(this->FMGL(exponent)))) * (::x10aux::nullCheck(pg)->FMGL(exponent)))) * (rABSquared))) / (::x10aux::nullCheck(prod)->FMGL(exponent))))))) * (sum));
    
}

//#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
void au::edu::anu::qm::PrimitiveGaussian::fillAArray(::x10::lang::Rail< x10_double >* a,
                                                     x10_int l1,
                                                     x10_int l2,
                                                     x10_double pa,
                                                     x10_double pb,
                                                     x10_double cp,
                                                     x10_double gamma) {
    
    //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(a)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
            {
                x10_int r;
                for (r = ((x10_int)0); ((r) < (((((i) / ::x10aux::zeroCheck(((x10_int)2)))) + (((x10_int)1)))));
                     r = ((r) + (((x10_int)1)))) {
                    
                    //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                    {
                        x10_int u;
                        for (u = ((x10_int)0); ((u) < (((((((i) - (((((x10_int)2)) * (r))))) / ::x10aux::zeroCheck(((x10_int)2)))) + (((x10_int)1)))));
                             u = ((u) + (((x10_int)1)))) {
                            
                            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10::lang::Rail< x10_double >* a__129593 =
                              a;
                            x10_long i__129594 = ((((((x10_long)(i))) - (((((x10_long)2ll)) * (((x10_long)(r))))))) - (((x10_long)(u))));
                            x10_double r__129595 = ((::x10aux::nullCheck(a__129593)->x10::lang::Rail< x10_double >::__apply(
                                                       i__129594)) + (((((((((((((((((::x10::lang::Math::pow(
                                                                                        -1.0,
                                                                                        i)) * (::au::edu::anu::qm::MathUtil::binomialPrefactor(
                                                                                                 i,
                                                                                                 l1,
                                                                                                 l2,
                                                                                                 pa,
                                                                                                 pb)))) * (::x10::lang::Math::pow(
                                                                                                             -1.0,
                                                                                                             u)))) * (((x10_double) (::au::edu::anu::qm::MathUtil::factorial(
                                                                                                                                       i)))))) * (::x10::lang::Math::pow(
                                                                                                                                                    cp,
                                                                                                                                                    ((((i) - (((((x10_int)2)) * (r))))) - (((((x10_int)2)) * (u)))))))) * (::x10::lang::Math::pow(
                                                                                                                                                                                                                             ((0.25) / (gamma)),
                                                                                                                                                                                                                             ((r) + (u)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial(
                                                                                                                                                                                                                                                                 r)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial(
                                                                                                                                                                                                                                                                                             u)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial(
                                                                                                                                                                                                                                                                                                                         ((((i) - (((((x10_int)2)) * (r))))) - (((((x10_int)2)) * (u)))))))))));
                            ::x10aux::nullCheck(a__129593)->x10::lang::Rail< x10_double >::__set(
                              i__129594, r__129595);
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
::au::edu::anu::qm::PrimitiveGaussian* au::edu::anu::qm::PrimitiveGaussian::au__edu__anu__qm__PrimitiveGaussian____this__au__edu__anu__qm__PrimitiveGaussian(
  ) {
    return this;
    
}
void au::edu::anu::qm::PrimitiveGaussian::__fieldInitializers_au_edu_anu_qm_PrimitiveGaussian(
  ) {
    this->FMGL(coefficient) = 0.0;
}
const ::x10aux::serialization_id_t au::edu::anu::qm::PrimitiveGaussian::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::PrimitiveGaussian::_deserializer);

void au::edu::anu::qm::PrimitiveGaussian::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(origin));
    buf.write(this->FMGL(power));
    buf.write(this->FMGL(exponent));
    buf.write(this->FMGL(coefficient));
    buf.write(this->FMGL(normalization));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::PrimitiveGaussian::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::PrimitiveGaussian* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::PrimitiveGaussian::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(origin) = buf.read< ::x10x::vector::Point3d>();
    FMGL(power) = buf.read< ::au::edu::anu::qm::Power>();
    FMGL(exponent) = buf.read<x10_double>();
    FMGL(coefficient) = buf.read<x10_double>();
    FMGL(normalization) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::qm::PrimitiveGaussian::rtt;
void au::edu::anu::qm::PrimitiveGaussian::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.PrimitiveGaussian",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of PrimitiveGaussian */
/*************************************************/
