/*************************************************/
/* START of ContractedGaussian */
#include <au/edu/anu/qm/ContractedGaussian.h>

#include <x10/lang/Any.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/qm/Power.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/MathUtil.h>
#include <au/edu/anu/qm/PrimitiveGaussian.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace qm { 
class ContractedGaussian_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::ContractedGaussian> {
public:
    static ::x10::lang::Any::itable< ContractedGaussian_ibox0 > itable;
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
::x10::lang::Any::itable< ContractedGaussian_ibox0 >  ContractedGaussian_ibox0::itable(&ContractedGaussian_ibox0::equals, &ContractedGaussian_ibox0::hashCode, &ContractedGaussian_ibox0::toString, &ContractedGaussian_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::ContractedGaussian >  au::edu::anu::qm::ContractedGaussian::_itable_0(&au::edu::anu::qm::ContractedGaussian::equals, &au::edu::anu::qm::ContractedGaussian::hashCode, &au::edu::anu::qm::ContractedGaussian::toString, &au::edu::anu::qm::ContractedGaussian::typeName);
::x10aux::itable_entry au::edu::anu::qm::ContractedGaussian::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ContractedGaussian::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ContractedGaussian")};
::x10aux::itable_entry au::edu::anu::qm::ContractedGaussian::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ContractedGaussian_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ContractedGaussian")};

//#line 23 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
void au::edu::anu::qm::ContractedGaussian::_constructor(::x10x::vector::Point3d origin,
                                                        ::au::edu::anu::qm::Power pwr,
                                                        ::x10::lang::Rail< x10_double >* exponents,
                                                        ::x10::lang::Rail< x10_double >* coefficients,
                                                        x10_int intIndex,
                                                        x10_boolean normalize) {
    
    //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::au::edu::anu::qm::ContractedGaussian this__103459 =
      (*this);
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    (*this)->FMGL(origin) = origin;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    (*this)->FMGL(power) = pwr;
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    (*this)->FMGL(exponents) = exponents;
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    (*this)->FMGL(coefficients) = coefficients;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    (*this)->FMGL(intIndex) = intIndex;
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    if (normalize) {
        
        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        (*this)->FMGL(normalization) = ((1.0) / (::x10::lang::MathNatives::sqrt((*this)->au::edu::anu::qm::ContractedGaussian::selfOverlap())));
    } else {
        
        //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        (*this)->FMGL(normalization) = 1.0;
    }
    
}
::au::edu::anu::qm::ContractedGaussian au::edu::anu::qm::ContractedGaussian::_make(
  ::x10x::vector::Point3d origin, ::au::edu::anu::qm::Power pwr,
  ::x10::lang::Rail< x10_double >* exponents, ::x10::lang::Rail< x10_double >* coefficients,
  x10_int intIndex, x10_boolean normalize) {
    ::au::edu::anu::qm::ContractedGaussian this_; 
    this_->_constructor(origin, pwr, exponents, coefficients,
    intIndex, normalize);
    return this_;
}



//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_int au::edu::anu::qm::ContractedGaussian::getTotalAngularMomentum(
  ) {
    ::au::edu::anu::qm::Power this__103460 = (*this)->FMGL(power);
    return this__103460->FMGL(totam);
    
}

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_int au::edu::anu::qm::ContractedGaussian::getMaximumAngularMomentum(
  ) {
    ::au::edu::anu::qm::Power this__103461 = (*this)->FMGL(power);
    return this__103461->FMGL(maxam);
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_int au::edu::anu::qm::ContractedGaussian::getMaximumDegreeOfContraction(
  ) {
    return ((x10_int) ((x10_long)(::x10aux::nullCheck((*this)->FMGL(coefficients))->FMGL(size))));
    
}

//#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_double au::edu::anu::qm::ContractedGaussian::distanceFrom(
  ::au::edu::anu::qm::ContractedGaussian cg) {
    ::x10x::vector::Point3d this__103465 = (*this)->FMGL(origin);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d b__103466 = cg->FMGL(origin);
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    return ::x10::lang::MathNatives::sqrt((__extension__ ({
        
        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ::x10x::vector::Point3d b__103467 = b__103466;
        x10_double ret__103468;
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double di__103462 = ((this__103465->FMGL(i)) - (b__103467->FMGL(i)));
        
        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dj__103463 = ((this__103465->FMGL(j)) - (b__103467->FMGL(j)));
        
        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        x10_double dk__103464 = ((this__103465->FMGL(k)) - (b__103467->FMGL(k)));
        
        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
        ret__103468 = ((((((di__103462) * (di__103462))) + (((dj__103463) * (dj__103463))))) + (((dk__103464) * (dk__103464))));
        ret__103468;
    }))
    );
    
}

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_double au::edu::anu::qm::ContractedGaussian::distanceSquaredFrom(
  ::au::edu::anu::qm::ContractedGaussian cg) {
    ::x10x::vector::Point3d this__103472 = (*this)->FMGL(origin);
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    ::x10x::vector::Point3d b__103473 = cg->FMGL(origin);
    x10_double ret__103474;
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double di__103469 = ((this__103472->FMGL(i)) - (b__103473->FMGL(i)));
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double dj__103470 = ((this__103472->FMGL(j)) - (b__103473->FMGL(j)));
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    x10_double dk__103471 = ((this__103472->FMGL(k)) - (b__103473->FMGL(k)));
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
    ret__103474 = ((((((di__103469) * (di__103469))) + (((dj__103470) * (dj__103470))))) + (((dk__103471) * (dk__103471))));
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    return ret__103474;
    
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_double au::edu::anu::qm::ContractedGaussian::overlap(
  ::au::edu::anu::qm::ContractedGaussian cg) {
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10::lang::Rail< x10_double >* cgExponents = cg->FMGL(exponents);
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10::lang::Rail< x10_double >* cgCoefficients = cg->FMGL(coefficients);
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10x::vector::Point3d cgOrigin = cg->FMGL(origin);
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::au::edu::anu::qm::Power cgPower = cg->FMGL(power);
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    x10_double sij = 0.0;
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck((*this)->FMGL(exponents))->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double expI = ::x10aux::nullCheck((*this)->FMGL(exponents))->x10::lang::Rail< x10_double >::__apply(
                                i);
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double coeffI = ::x10aux::nullCheck((*this)->FMGL(coefficients))->x10::lang::Rail< x10_double >::__apply(
                                  i);
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double normI = (__extension__ ({
                
                //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                ::au::edu::anu::qm::Power power__102915 =
                  (*this)->FMGL(power);
                x10_double exponent__102916 = expI;
                ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                           ((x10_int)2),
                                                           ((((x10_double) (((((x10_int)2)) * (((((power__102915->FMGL(l)) + (power__102915->FMGL(m)))) + (power__102915->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__102916,((((x10_double) (((((power__102915->FMGL(l)) + (power__102915->FMGL(m)))) + (power__102915->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                ((((((x10_int)2)) * (power__102915->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ((((((x10_int)2)) * (power__102915->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ((((((x10_int)2)) * (power__102915->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
            }))
            ;
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(cgExponents)->FMGL(size))));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double expJ = ::x10aux::nullCheck(cgExponents)->x10::lang::Rail< x10_double >::__apply(
                                        j);
                    
                    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double coeffJ = ::x10aux::nullCheck(cgCoefficients)->x10::lang::Rail< x10_double >::__apply(
                                          j);
                    
                    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double normJ = (__extension__ ({
                        
                        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ::au::edu::anu::qm::Power power__103195 =
                          cgPower;
                        x10_double exponent__103196 = expJ;
                        ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                                   ((x10_int)2),
                                                                   ((((x10_double) (((((x10_int)2)) * (((((power__103195->FMGL(l)) + (power__103195->FMGL(m)))) + (power__103195->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__103196,((((x10_double) (((((power__103195->FMGL(l)) + (power__103195->FMGL(m)))) + (power__103195->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                        ((((((x10_int)2)) * (power__103195->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ((((((x10_int)2)) * (power__103195->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((((((x10_int)2)) * (power__103195->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
                    }))
                    ;
                    
                    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    sij = ((sij) + (((((((((coeffI) * (coeffJ))) * (normI))) * (normJ))) * ((__extension__ ({
                        
                        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double expI__103197 = expI;
                        ::x10x::vector::Point3d originI__103198 =
                          (*this)->FMGL(origin);
                        ::au::edu::anu::qm::Power powerI__103199 =
                          (*this)->FMGL(power);
                        x10_double expJ__103200 = expJ;
                        ::x10x::vector::Point3d originJ__103201 =
                          cgOrigin;
                        ::au::edu::anu::qm::Power powerJ__103202 =
                          cgPower;
                        x10_double ret__103209;
                        
                        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double radiusABSquared__103481 =
                          (__extension__ ({
                            
                            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__103482 =
                              originJ__103201;
                            x10_double ret__103483;
                            
                            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double di__103475 = ((originI__103198->FMGL(i)) - (b__103482->FMGL(i)));
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double dj__103476 = ((originI__103198->FMGL(j)) - (b__103482->FMGL(j)));
                            
                            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double dk__103477 = ((originI__103198->FMGL(k)) - (b__103482->FMGL(k)));
                            
                            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ret__103483 = ((((((di__103475) * (di__103475))) + (((dj__103476) * (dj__103476))))) + (((dk__103477) * (dk__103477))));
                            ret__103483;
                        }))
                        ;
                        
                        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double gamma__103484 = ((expI__103197) + (expJ__103200));
                        
                        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ::x10x::vector::Point3d newOrigin__103485 =
                           ::x10x::vector::Point3d::_alloc();
                        
                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double i__103478 = ((((((expI__103197) * (originI__103198->FMGL(i)))) + (((expJ__103200) * (originJ__103201->FMGL(i)))))) / (gamma__103484));
                        x10_double j__103479 = ((((((expI__103197) * (originI__103198->FMGL(j)))) + (((expJ__103200) * (originJ__103201->FMGL(j)))))) / (gamma__103484));
                        x10_double k__103480 = ((((((expI__103197) * (originI__103198->FMGL(k)))) + (((expJ__103200) * (originJ__103201->FMGL(k)))))) / (gamma__103484));
                        
                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        newOrigin__103485->FMGL(i) = i__103478;
                        newOrigin__103485->FMGL(j) = j__103479;
                        newOrigin__103485->FMGL(k) = k__103480;
                        
                        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double wx__103486 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                  powerI__103199->FMGL(l),
                                                  powerJ__103202->FMGL(l),
                                                  ((newOrigin__103485->FMGL(i)) - (originI__103198->FMGL(i))),
                                                  ((newOrigin__103485->FMGL(i)) - (originJ__103201->FMGL(i))),
                                                  gamma__103484);
                        
                        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double wy__103487 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                  powerI__103199->FMGL(m),
                                                  powerJ__103202->FMGL(m),
                                                  ((newOrigin__103485->FMGL(j)) - (originI__103198->FMGL(j))),
                                                  ((newOrigin__103485->FMGL(j)) - (originJ__103201->FMGL(j))),
                                                  gamma__103484);
                        
                        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double wz__103488 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                  powerI__103199->FMGL(n),
                                                  powerJ__103202->FMGL(n),
                                                  ((newOrigin__103485->FMGL(k)) - (originI__103198->FMGL(k))),
                                                  ((newOrigin__103485->FMGL(k)) - (originJ__103201->FMGL(k))),
                                                  gamma__103484);
                        
                        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ret__103209 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103484)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103197))) * (expJ__103200))) * (radiusABSquared__103481))) / (gamma__103484)))))) * (wx__103486))) * (wy__103487))) * (wz__103488));
                        ret__103209;
                    }))
                    ))));
                }
            }
            
        }
    }
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    return (((((*this)->FMGL(normalization)) * (cg->FMGL(normalization)))) * (sij));
    
}

//#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_double au::edu::anu::qm::ContractedGaussian::selfOverlap(
  ) {
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    x10_double sij = 0.0;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    x10_long i__96275max__103523 = (((x10_long)(::x10aux::nullCheck((*this)->FMGL(exponents))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__103524;
        for (i__103524 = ((x10_long)0ll); ((i__103524) <= (i__96275max__103523));
             i__103524 = ((i__103524) + (((x10_long)1ll))))
        {
            x10_long i__103525 = i__103524;
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double expI__103518 = ::x10aux::nullCheck((*this)->FMGL(exponents))->x10::lang::Rail< x10_double >::__apply(
                                        i__103525);
            
            //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double coeffI__103519 = ::x10aux::nullCheck((*this)->FMGL(coefficients))->x10::lang::Rail< x10_double >::__apply(
                                          i__103525);
            
            //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double normI__103520 = (__extension__ ({
                
                //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                ::au::edu::anu::qm::Power power__103521 =
                  (*this)->FMGL(power);
                x10_double exponent__103522 = expI__103518;
                ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                           ((x10_int)2),
                                                           ((((x10_double) (((((x10_int)2)) * (((((power__103521->FMGL(l)) + (power__103521->FMGL(m)))) + (power__103521->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__103522,((((x10_double) (((((power__103521->FMGL(l)) + (power__103521->FMGL(m)))) + (power__103521->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                ((((((x10_int)2)) * (power__103521->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ((((((x10_int)2)) * (power__103521->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ((((((x10_int)2)) * (power__103521->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
            }))
            ;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_long i__96257max__103515 = (((x10_long)(::x10aux::nullCheck((*this)->FMGL(exponents))->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__103516;
                for (i__103516 = ((x10_long)0ll); ((i__103516) <= (i__96257max__103515));
                     i__103516 = ((i__103516) + (((x10_long)1ll))))
                {
                    x10_long j__103517 = i__103516;
                    
                    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double expJ__103503 = ::x10aux::nullCheck((*this)->FMGL(exponents))->x10::lang::Rail< x10_double >::__apply(
                                                j__103517);
                    
                    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double coeffJ__103504 = ::x10aux::nullCheck((*this)->FMGL(coefficients))->x10::lang::Rail< x10_double >::__apply(
                                                  j__103517);
                    
                    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double normJ__103505 = (__extension__ ({
                        
                        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ::au::edu::anu::qm::Power power__103506 =
                          (*this)->FMGL(power);
                        x10_double exponent__103507 = expJ__103503;
                        ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                                   ((x10_int)2),
                                                                   ((((x10_double) (((((x10_int)2)) * (((((power__103506->FMGL(l)) + (power__103506->FMGL(m)))) + (power__103506->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__103507,((((x10_double) (((((power__103506->FMGL(l)) + (power__103506->FMGL(m)))) + (power__103506->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                        ((((((x10_int)2)) * (power__103506->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ((((((x10_int)2)) * (power__103506->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((((((x10_int)2)) * (power__103506->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
                    }))
                    ;
                    
                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    sij = ((sij) + (((((((((coeffI__103519) * (coeffJ__103504))) * (normI__103520))) * (normJ__103505))) * ((__extension__ ({
                        
                        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double expI__103508 = expI__103518;
                        ::x10x::vector::Point3d originI__103509 =
                          (*this)->FMGL(origin);
                        ::au::edu::anu::qm::Power powerI__103510 =
                          (*this)->FMGL(power);
                        x10_double expJ__103511 = expJ__103503;
                        ::x10x::vector::Point3d originJ__103512 =
                          (*this)->FMGL(origin);
                        ::au::edu::anu::qm::Power powerJ__103513 =
                          (*this)->FMGL(power);
                        x10_double ret__103514;
                        
                        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double radiusABSquared__103495 =
                          (__extension__ ({
                            
                            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d b__103496 =
                              originJ__103512;
                            x10_double ret__103497;
                            
                            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double di__103489 = ((originI__103509->FMGL(i)) - (b__103496->FMGL(i)));
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double dj__103490 = ((originI__103509->FMGL(j)) - (b__103496->FMGL(j)));
                            
                            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double dk__103491 = ((originI__103509->FMGL(k)) - (b__103496->FMGL(k)));
                            
                            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ret__103497 = ((((((di__103489) * (di__103489))) + (((dj__103490) * (dj__103490))))) + (((dk__103491) * (dk__103491))));
                            ret__103497;
                        }))
                        ;
                        
                        //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double gamma__103498 = ((expI__103508) + (expJ__103511));
                        
                        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ::x10x::vector::Point3d newOrigin__103499 =
                           ::x10x::vector::Point3d::_alloc();
                        
                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double i__103492 = ((((((expI__103508) * (originI__103509->FMGL(i)))) + (((expJ__103511) * (originJ__103512->FMGL(i)))))) / (gamma__103498));
                        x10_double j__103493 = ((((((expI__103508) * (originI__103509->FMGL(j)))) + (((expJ__103511) * (originJ__103512->FMGL(j)))))) / (gamma__103498));
                        x10_double k__103494 = ((((((expI__103508) * (originI__103509->FMGL(k)))) + (((expJ__103511) * (originJ__103512->FMGL(k)))))) / (gamma__103498));
                        
                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        newOrigin__103499->FMGL(i) = i__103492;
                        newOrigin__103499->FMGL(j) = j__103493;
                        newOrigin__103499->FMGL(k) = k__103494;
                        
                        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double wx__103500 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                  powerI__103510->FMGL(l),
                                                  powerJ__103513->FMGL(l),
                                                  ((newOrigin__103499->FMGL(i)) - (originI__103509->FMGL(i))),
                                                  ((newOrigin__103499->FMGL(i)) - (originJ__103512->FMGL(i))),
                                                  gamma__103498);
                        
                        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double wy__103501 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                  powerI__103510->FMGL(m),
                                                  powerJ__103513->FMGL(m),
                                                  ((newOrigin__103499->FMGL(j)) - (originI__103509->FMGL(j))),
                                                  ((newOrigin__103499->FMGL(j)) - (originJ__103512->FMGL(j))),
                                                  gamma__103498);
                        
                        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double wz__103502 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                  powerI__103510->FMGL(n),
                                                  powerJ__103513->FMGL(n),
                                                  ((newOrigin__103499->FMGL(k)) - (originI__103509->FMGL(k))),
                                                  ((newOrigin__103499->FMGL(k)) - (originJ__103512->FMGL(k))),
                                                  gamma__103498);
                        
                        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ret__103514 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103498)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103508))) * (expJ__103511))) * (radiusABSquared__103495))) / (gamma__103498)))))) * (wx__103500))) * (wy__103501))) * (wz__103502));
                        ret__103514;
                    }))
                    ))));
                }
            }
            
        }
    }
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    return sij;
    
}

//#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_double au::edu::anu::qm::ContractedGaussian::kinetic(
  ::au::edu::anu::qm::ContractedGaussian cg) {
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10::lang::Rail< x10_double >* cgExps = cg->FMGL(exponents);
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10::lang::Rail< x10_double >* cgCoeffs = cg->FMGL(coefficients);
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10x::vector::Point3d cgOrigin = cg->FMGL(origin);
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::au::edu::anu::qm::Power cgPower = cg->FMGL(power);
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    x10_double tij = 0.0;
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck((*this)->FMGL(exponents))->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double expI = ::x10aux::nullCheck((*this)->FMGL(exponents))->x10::lang::Rail< x10_double >::__apply(
                                i);
            
            //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double coeffI = ::x10aux::nullCheck((*this)->FMGL(coefficients))->x10::lang::Rail< x10_double >::__apply(
                                  i);
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            x10_double normI = (__extension__ ({
                
                //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                ::au::edu::anu::qm::Power power__103253 =
                  (*this)->FMGL(power);
                x10_double exponent__103254 = expI;
                ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                           ((x10_int)2),
                                                           ((((x10_double) (((((x10_int)2)) * (((((power__103253->FMGL(l)) + (power__103253->FMGL(m)))) + (power__103253->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__103254,((((x10_double) (((((power__103253->FMGL(l)) + (power__103253->FMGL(m)))) + (power__103253->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                ((((((x10_int)2)) * (power__103253->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ((((((x10_int)2)) * (power__103253->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ((((((x10_int)2)) * (power__103253->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
            }))
            ;
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(cgExps)->FMGL(size))));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double expJ = ::x10aux::nullCheck(cgExps)->x10::lang::Rail< x10_double >::__apply(
                                        j);
                    
                    //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double coeffJ = ::x10aux::nullCheck(cgCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                          j);
                    
                    //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    x10_double normJ = (__extension__ ({
                        
                        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ::au::edu::anu::qm::Power power__103255 =
                          cgPower;
                        x10_double exponent__103256 = expJ;
                        ::x10::lang::MathNatives::sqrt(((((((((((::x10::lang::Math::pow(
                                                                   ((x10_int)2),
                                                                   ((((x10_double) (((((x10_int)2)) * (((((power__103255->FMGL(l)) + (power__103255->FMGL(m)))) + (power__103255->FMGL(n)))))))) + (1.5)))) * (::x10::lang::MathNatives::pow(exponent__103256,((((x10_double) (((((power__103255->FMGL(l)) + (power__103255->FMGL(m)))) + (power__103255->FMGL(n)))))) + (1.5)))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                        ((((((x10_int)2)) * (power__103255->FMGL(l)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ((((((x10_int)2)) * (power__103255->FMGL(m)))) - (((x10_int)1))))))))) / (((x10_double) (::au::edu::anu::qm::MathUtil::factorial2(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((((((x10_int)2)) * (power__103255->FMGL(n)))) - (((x10_int)1))))))))) / (::x10::lang::MathNatives::pow(3.141592653589793,1.5))));
                    }))
                    ;
                    
                    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    tij = ((tij) + (((((coeffI) * (coeffJ))) * ((__extension__ ({
                        
                        //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double expI__103257 = expI;
                        ::x10x::vector::Point3d originI__103258 =
                          (*this)->FMGL(origin);
                        ::au::edu::anu::qm::Power powerI__103259 =
                          (*this)->FMGL(power);
                        x10_double normI__103260 = normI;
                        x10_double expJ__103261 = expJ;
                        ::x10x::vector::Point3d originJ__103262 =
                          cgOrigin;
                        ::au::edu::anu::qm::Power powerJ__103263 =
                          cgPower;
                        x10_double normJ__103264 = normJ;
                        x10_double ret__103275;
                        
                        //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_int l__103624 = powerJ__103263->FMGL(l);
                        
                        //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_int m__103625 = powerJ__103263->FMGL(m);
                        
                        //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_int n__103626 = powerJ__103263->FMGL(n);
                        
                        //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        x10_double term__103627 = ((((expJ__103261) * (((x10_double) (((((((x10_int)2)) * (((((l__103624) + (m__103625))) + (n__103626))))) + (((x10_int)3)))))))) * ((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103628 = expI__103257;
                            ::x10x::vector::Point3d originI__103629 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103630 =
                              powerI__103259;
                            x10_double expJ__103631 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103632 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103633 =
                              powerJ__103263;
                            x10_double ret__103634;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103532 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103533 =
                                  originJ__103632;
                                x10_double ret__103534;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103526 = ((originI__103629->FMGL(i)) - (b__103533->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103527 = ((originI__103629->FMGL(j)) - (b__103533->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103528 = ((originI__103629->FMGL(k)) - (b__103533->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103534 = ((((((di__103526) * (di__103526))) + (((dj__103527) * (dj__103527))))) + (((dk__103528) * (dk__103528))));
                                ret__103534;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103535 = ((expI__103628) + (expJ__103631));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103536 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103529 = ((((((expI__103628) * (originI__103629->FMGL(i)))) + (((expJ__103631) * (originJ__103632->FMGL(i)))))) / (gamma__103535));
                            x10_double j__103530 = ((((((expI__103628) * (originI__103629->FMGL(j)))) + (((expJ__103631) * (originJ__103632->FMGL(j)))))) / (gamma__103535));
                            x10_double k__103531 = ((((((expI__103628) * (originI__103629->FMGL(k)))) + (((expJ__103631) * (originJ__103632->FMGL(k)))))) / (gamma__103535));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103536->FMGL(i) = i__103529;
                            newOrigin__103536->FMGL(j) = j__103530;
                            newOrigin__103536->FMGL(k) = k__103531;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103537 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103630->FMGL(l),
                                                      powerJ__103633->FMGL(l),
                                                      ((newOrigin__103536->FMGL(i)) - (originI__103629->FMGL(i))),
                                                      ((newOrigin__103536->FMGL(i)) - (originJ__103632->FMGL(i))),
                                                      gamma__103535);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103538 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103630->FMGL(m),
                                                      powerJ__103633->FMGL(m),
                                                      ((newOrigin__103536->FMGL(j)) - (originI__103629->FMGL(j))),
                                                      ((newOrigin__103536->FMGL(j)) - (originJ__103632->FMGL(j))),
                                                      gamma__103535);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103539 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103630->FMGL(n),
                                                      powerJ__103633->FMGL(n),
                                                      ((newOrigin__103536->FMGL(k)) - (originI__103629->FMGL(k))),
                                                      ((newOrigin__103536->FMGL(k)) - (originJ__103632->FMGL(k))),
                                                      gamma__103535);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103634 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103535)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103628))) * (expJ__103631))) * (radiusABSquared__103532))) / (gamma__103535)))))) * (wx__103537))) * (wy__103538))) * (wz__103539));
                            ret__103634;
                        }))
                        ));
                        
                        //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        term__103627 = ((term__103627) + (((((((-2.0) * (expJ__103261))) * (expJ__103261))) * ((((((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103635 = expI__103257;
                            ::x10x::vector::Point3d originI__103636 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103637 =
                              powerI__103259;
                            x10_double expJ__103638 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103639 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103640 =
                              (__extension__ ({
                                
                                //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                                ::au::edu::anu::qm::Power alloc__103641 =
                                   ::au::edu::anu::qm::Power::_alloc();
                                (alloc__103641)->::au::edu::anu::qm::Power::_constructor(
                                  ((l__103624) + (((x10_int)2))),
                                  m__103625, n__103626);
                                alloc__103641;
                            }))
                            ;
                            x10_double ret__103642;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103546 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103547 =
                                  originJ__103639;
                                x10_double ret__103548;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103540 = ((originI__103636->FMGL(i)) - (b__103547->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103541 = ((originI__103636->FMGL(j)) - (b__103547->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103542 = ((originI__103636->FMGL(k)) - (b__103547->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103548 = ((((((di__103540) * (di__103540))) + (((dj__103541) * (dj__103541))))) + (((dk__103542) * (dk__103542))));
                                ret__103548;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103549 = ((expI__103635) + (expJ__103638));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103550 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103543 = ((((((expI__103635) * (originI__103636->FMGL(i)))) + (((expJ__103638) * (originJ__103639->FMGL(i)))))) / (gamma__103549));
                            x10_double j__103544 = ((((((expI__103635) * (originI__103636->FMGL(j)))) + (((expJ__103638) * (originJ__103639->FMGL(j)))))) / (gamma__103549));
                            x10_double k__103545 = ((((((expI__103635) * (originI__103636->FMGL(k)))) + (((expJ__103638) * (originJ__103639->FMGL(k)))))) / (gamma__103549));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103550->FMGL(i) = i__103543;
                            newOrigin__103550->FMGL(j) = j__103544;
                            newOrigin__103550->FMGL(k) = k__103545;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103551 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103637->FMGL(l),
                                                      powerJ__103640->FMGL(l),
                                                      ((newOrigin__103550->FMGL(i)) - (originI__103636->FMGL(i))),
                                                      ((newOrigin__103550->FMGL(i)) - (originJ__103639->FMGL(i))),
                                                      gamma__103549);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103552 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103637->FMGL(m),
                                                      powerJ__103640->FMGL(m),
                                                      ((newOrigin__103550->FMGL(j)) - (originI__103636->FMGL(j))),
                                                      ((newOrigin__103550->FMGL(j)) - (originJ__103639->FMGL(j))),
                                                      gamma__103549);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103553 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103637->FMGL(n),
                                                      powerJ__103640->FMGL(n),
                                                      ((newOrigin__103550->FMGL(k)) - (originI__103636->FMGL(k))),
                                                      ((newOrigin__103550->FMGL(k)) - (originJ__103639->FMGL(k))),
                                                      gamma__103549);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103642 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103549)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103635))) * (expJ__103638))) * (radiusABSquared__103546))) / (gamma__103549)))))) * (wx__103551))) * (wy__103552))) * (wz__103553));
                            ret__103642;
                        }))
                        ) + ((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103643 = expI__103257;
                            ::x10x::vector::Point3d originI__103644 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103645 =
                              powerI__103259;
                            x10_double expJ__103646 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103647 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103648 =
                              (__extension__ ({
                                
                                //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                                ::au::edu::anu::qm::Power alloc__103649 =
                                   ::au::edu::anu::qm::Power::_alloc();
                                (alloc__103649)->::au::edu::anu::qm::Power::_constructor(
                                  l__103624, ((m__103625) + (((x10_int)2))),
                                  n__103626);
                                alloc__103649;
                            }))
                            ;
                            x10_double ret__103650;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103560 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103561 =
                                  originJ__103647;
                                x10_double ret__103562;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103554 = ((originI__103644->FMGL(i)) - (b__103561->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103555 = ((originI__103644->FMGL(j)) - (b__103561->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103556 = ((originI__103644->FMGL(k)) - (b__103561->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103562 = ((((((di__103554) * (di__103554))) + (((dj__103555) * (dj__103555))))) + (((dk__103556) * (dk__103556))));
                                ret__103562;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103563 = ((expI__103643) + (expJ__103646));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103564 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103557 = ((((((expI__103643) * (originI__103644->FMGL(i)))) + (((expJ__103646) * (originJ__103647->FMGL(i)))))) / (gamma__103563));
                            x10_double j__103558 = ((((((expI__103643) * (originI__103644->FMGL(j)))) + (((expJ__103646) * (originJ__103647->FMGL(j)))))) / (gamma__103563));
                            x10_double k__103559 = ((((((expI__103643) * (originI__103644->FMGL(k)))) + (((expJ__103646) * (originJ__103647->FMGL(k)))))) / (gamma__103563));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103564->FMGL(i) = i__103557;
                            newOrigin__103564->FMGL(j) = j__103558;
                            newOrigin__103564->FMGL(k) = k__103559;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103565 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103645->FMGL(l),
                                                      powerJ__103648->FMGL(l),
                                                      ((newOrigin__103564->FMGL(i)) - (originI__103644->FMGL(i))),
                                                      ((newOrigin__103564->FMGL(i)) - (originJ__103647->FMGL(i))),
                                                      gamma__103563);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103566 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103645->FMGL(m),
                                                      powerJ__103648->FMGL(m),
                                                      ((newOrigin__103564->FMGL(j)) - (originI__103644->FMGL(j))),
                                                      ((newOrigin__103564->FMGL(j)) - (originJ__103647->FMGL(j))),
                                                      gamma__103563);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103567 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103645->FMGL(n),
                                                      powerJ__103648->FMGL(n),
                                                      ((newOrigin__103564->FMGL(k)) - (originI__103644->FMGL(k))),
                                                      ((newOrigin__103564->FMGL(k)) - (originJ__103647->FMGL(k))),
                                                      gamma__103563);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103650 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103563)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103643))) * (expJ__103646))) * (radiusABSquared__103560))) / (gamma__103563)))))) * (wx__103565))) * (wy__103566))) * (wz__103567));
                            ret__103650;
                        }))
                        ))) + ((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103651 = expI__103257;
                            ::x10x::vector::Point3d originI__103652 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103653 =
                              powerI__103259;
                            x10_double expJ__103654 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103655 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103656 =
                              (__extension__ ({
                                
                                //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                                ::au::edu::anu::qm::Power alloc__103657 =
                                   ::au::edu::anu::qm::Power::_alloc();
                                (alloc__103657)->::au::edu::anu::qm::Power::_constructor(
                                  l__103624, m__103625, ((n__103626) + (((x10_int)2))));
                                alloc__103657;
                            }))
                            ;
                            x10_double ret__103658;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103574 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103575 =
                                  originJ__103655;
                                x10_double ret__103576;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103568 = ((originI__103652->FMGL(i)) - (b__103575->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103569 = ((originI__103652->FMGL(j)) - (b__103575->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103570 = ((originI__103652->FMGL(k)) - (b__103575->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103576 = ((((((di__103568) * (di__103568))) + (((dj__103569) * (dj__103569))))) + (((dk__103570) * (dk__103570))));
                                ret__103576;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103577 = ((expI__103651) + (expJ__103654));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103578 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103571 = ((((((expI__103651) * (originI__103652->FMGL(i)))) + (((expJ__103654) * (originJ__103655->FMGL(i)))))) / (gamma__103577));
                            x10_double j__103572 = ((((((expI__103651) * (originI__103652->FMGL(j)))) + (((expJ__103654) * (originJ__103655->FMGL(j)))))) / (gamma__103577));
                            x10_double k__103573 = ((((((expI__103651) * (originI__103652->FMGL(k)))) + (((expJ__103654) * (originJ__103655->FMGL(k)))))) / (gamma__103577));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103578->FMGL(i) = i__103571;
                            newOrigin__103578->FMGL(j) = j__103572;
                            newOrigin__103578->FMGL(k) = k__103573;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103579 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103653->FMGL(l),
                                                      powerJ__103656->FMGL(l),
                                                      ((newOrigin__103578->FMGL(i)) - (originI__103652->FMGL(i))),
                                                      ((newOrigin__103578->FMGL(i)) - (originJ__103655->FMGL(i))),
                                                      gamma__103577);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103580 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103653->FMGL(m),
                                                      powerJ__103656->FMGL(m),
                                                      ((newOrigin__103578->FMGL(j)) - (originI__103652->FMGL(j))),
                                                      ((newOrigin__103578->FMGL(j)) - (originJ__103655->FMGL(j))),
                                                      gamma__103577);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103581 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103653->FMGL(n),
                                                      powerJ__103656->FMGL(n),
                                                      ((newOrigin__103578->FMGL(k)) - (originI__103652->FMGL(k))),
                                                      ((newOrigin__103578->FMGL(k)) - (originJ__103655->FMGL(k))),
                                                      gamma__103577);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103658 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103577)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103651))) * (expJ__103654))) * (radiusABSquared__103574))) / (gamma__103577)))))) * (wx__103579))) * (wy__103580))) * (wz__103581));
                            ret__103658;
                        }))
                        ))))));
                        
                        //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        term__103627 = ((term__103627) + (((-0.5) * (((((((((x10_double) (((l__103624) * (((l__103624) - (((x10_int)1)))))))) * ((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103659 = expI__103257;
                            ::x10x::vector::Point3d originI__103660 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103661 =
                              powerI__103259;
                            x10_double expJ__103662 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103663 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103664 =
                              (__extension__ ({
                                
                                //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                                ::au::edu::anu::qm::Power alloc__103665 =
                                   ::au::edu::anu::qm::Power::_alloc();
                                (alloc__103665)->::au::edu::anu::qm::Power::_constructor(
                                  ((l__103624) - (((x10_int)2))),
                                  m__103625, n__103626);
                                alloc__103665;
                            }))
                            ;
                            x10_double ret__103666;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103588 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103589 =
                                  originJ__103663;
                                x10_double ret__103590;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103582 = ((originI__103660->FMGL(i)) - (b__103589->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103583 = ((originI__103660->FMGL(j)) - (b__103589->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103584 = ((originI__103660->FMGL(k)) - (b__103589->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103590 = ((((((di__103582) * (di__103582))) + (((dj__103583) * (dj__103583))))) + (((dk__103584) * (dk__103584))));
                                ret__103590;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103591 = ((expI__103659) + (expJ__103662));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103592 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103585 = ((((((expI__103659) * (originI__103660->FMGL(i)))) + (((expJ__103662) * (originJ__103663->FMGL(i)))))) / (gamma__103591));
                            x10_double j__103586 = ((((((expI__103659) * (originI__103660->FMGL(j)))) + (((expJ__103662) * (originJ__103663->FMGL(j)))))) / (gamma__103591));
                            x10_double k__103587 = ((((((expI__103659) * (originI__103660->FMGL(k)))) + (((expJ__103662) * (originJ__103663->FMGL(k)))))) / (gamma__103591));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103592->FMGL(i) = i__103585;
                            newOrigin__103592->FMGL(j) = j__103586;
                            newOrigin__103592->FMGL(k) = k__103587;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103593 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103661->FMGL(l),
                                                      powerJ__103664->FMGL(l),
                                                      ((newOrigin__103592->FMGL(i)) - (originI__103660->FMGL(i))),
                                                      ((newOrigin__103592->FMGL(i)) - (originJ__103663->FMGL(i))),
                                                      gamma__103591);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103594 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103661->FMGL(m),
                                                      powerJ__103664->FMGL(m),
                                                      ((newOrigin__103592->FMGL(j)) - (originI__103660->FMGL(j))),
                                                      ((newOrigin__103592->FMGL(j)) - (originJ__103663->FMGL(j))),
                                                      gamma__103591);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103595 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103661->FMGL(n),
                                                      powerJ__103664->FMGL(n),
                                                      ((newOrigin__103592->FMGL(k)) - (originI__103660->FMGL(k))),
                                                      ((newOrigin__103592->FMGL(k)) - (originJ__103663->FMGL(k))),
                                                      gamma__103591);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103666 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103591)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103659))) * (expJ__103662))) * (radiusABSquared__103588))) / (gamma__103591)))))) * (wx__103593))) * (wy__103594))) * (wz__103595));
                            ret__103666;
                        }))
                        ))) + (((((x10_double) (((m__103625) * (((m__103625) - (((x10_int)1)))))))) * ((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103667 = expI__103257;
                            ::x10x::vector::Point3d originI__103668 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103669 =
                              powerI__103259;
                            x10_double expJ__103670 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103671 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103672 =
                              (__extension__ ({
                                
                                //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                                ::au::edu::anu::qm::Power alloc__103673 =
                                   ::au::edu::anu::qm::Power::_alloc();
                                (alloc__103673)->::au::edu::anu::qm::Power::_constructor(
                                  l__103624, ((m__103625) - (((x10_int)2))),
                                  n__103626);
                                alloc__103673;
                            }))
                            ;
                            x10_double ret__103674;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103602 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103603 =
                                  originJ__103671;
                                x10_double ret__103604;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103596 = ((originI__103668->FMGL(i)) - (b__103603->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103597 = ((originI__103668->FMGL(j)) - (b__103603->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103598 = ((originI__103668->FMGL(k)) - (b__103603->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103604 = ((((((di__103596) * (di__103596))) + (((dj__103597) * (dj__103597))))) + (((dk__103598) * (dk__103598))));
                                ret__103604;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103605 = ((expI__103667) + (expJ__103670));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103606 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103599 = ((((((expI__103667) * (originI__103668->FMGL(i)))) + (((expJ__103670) * (originJ__103671->FMGL(i)))))) / (gamma__103605));
                            x10_double j__103600 = ((((((expI__103667) * (originI__103668->FMGL(j)))) + (((expJ__103670) * (originJ__103671->FMGL(j)))))) / (gamma__103605));
                            x10_double k__103601 = ((((((expI__103667) * (originI__103668->FMGL(k)))) + (((expJ__103670) * (originJ__103671->FMGL(k)))))) / (gamma__103605));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103606->FMGL(i) = i__103599;
                            newOrigin__103606->FMGL(j) = j__103600;
                            newOrigin__103606->FMGL(k) = k__103601;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103607 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103669->FMGL(l),
                                                      powerJ__103672->FMGL(l),
                                                      ((newOrigin__103606->FMGL(i)) - (originI__103668->FMGL(i))),
                                                      ((newOrigin__103606->FMGL(i)) - (originJ__103671->FMGL(i))),
                                                      gamma__103605);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103608 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103669->FMGL(m),
                                                      powerJ__103672->FMGL(m),
                                                      ((newOrigin__103606->FMGL(j)) - (originI__103668->FMGL(j))),
                                                      ((newOrigin__103606->FMGL(j)) - (originJ__103671->FMGL(j))),
                                                      gamma__103605);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103609 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103669->FMGL(n),
                                                      powerJ__103672->FMGL(n),
                                                      ((newOrigin__103606->FMGL(k)) - (originI__103668->FMGL(k))),
                                                      ((newOrigin__103606->FMGL(k)) - (originJ__103671->FMGL(k))),
                                                      gamma__103605);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103674 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103605)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103667))) * (expJ__103670))) * (radiusABSquared__103602))) / (gamma__103605)))))) * (wx__103607))) * (wy__103608))) * (wz__103609));
                            ret__103674;
                        }))
                        ))))) + (((((x10_double) (((n__103626) * (((n__103626) - (((x10_int)1)))))))) * ((__extension__ ({
                            
                            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double expI__103675 = expI__103257;
                            ::x10x::vector::Point3d originI__103676 =
                              originI__103258;
                            ::au::edu::anu::qm::Power powerI__103677 =
                              powerI__103259;
                            x10_double expJ__103678 = expJ__103261;
                            ::x10x::vector::Point3d originJ__103679 =
                              originJ__103262;
                            ::au::edu::anu::qm::Power powerJ__103680 =
                              (__extension__ ({
                                
                                //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                                ::au::edu::anu::qm::Power alloc__103681 =
                                   ::au::edu::anu::qm::Power::_alloc();
                                (alloc__103681)->::au::edu::anu::qm::Power::_constructor(
                                  l__103624, m__103625, ((n__103626) - (((x10_int)2))));
                                alloc__103681;
                            }))
                            ;
                            x10_double ret__103682;
                            
                            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double radiusABSquared__103616 =
                              (__extension__ ({
                                
                                //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__103617 =
                                  originJ__103679;
                                x10_double ret__103618;
                                
                                //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double di__103610 = ((originI__103676->FMGL(i)) - (b__103617->FMGL(i)));
                                
                                //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dj__103611 = ((originI__103676->FMGL(j)) - (b__103617->FMGL(j)));
                                
                                //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                x10_double dk__103612 = ((originI__103676->FMGL(k)) - (b__103617->FMGL(k)));
                                
                                //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ret__103618 = ((((((di__103610) * (di__103610))) + (((dj__103611) * (dj__103611))))) + (((dk__103612) * (dk__103612))));
                                ret__103618;
                            }))
                            ;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double gamma__103619 = ((expI__103675) + (expJ__103678));
                            
                            //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ::x10x::vector::Point3d newOrigin__103620 =
                               ::x10x::vector::Point3d::_alloc();
                            
                            //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            x10_double i__103613 = ((((((expI__103675) * (originI__103676->FMGL(i)))) + (((expJ__103678) * (originJ__103679->FMGL(i)))))) / (gamma__103619));
                            x10_double j__103614 = ((((((expI__103675) * (originI__103676->FMGL(j)))) + (((expJ__103678) * (originJ__103679->FMGL(j)))))) / (gamma__103619));
                            x10_double k__103615 = ((((((expI__103675) * (originI__103676->FMGL(k)))) + (((expJ__103678) * (originJ__103679->FMGL(k)))))) / (gamma__103619));
                            
                            //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            newOrigin__103620->FMGL(i) = i__103613;
                            newOrigin__103620->FMGL(j) = j__103614;
                            newOrigin__103620->FMGL(k) = k__103615;
                            
                            //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wx__103621 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103677->FMGL(l),
                                                      powerJ__103680->FMGL(l),
                                                      ((newOrigin__103620->FMGL(i)) - (originI__103676->FMGL(i))),
                                                      ((newOrigin__103620->FMGL(i)) - (originJ__103679->FMGL(i))),
                                                      gamma__103619);
                            
                            //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wy__103622 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103677->FMGL(m),
                                                      powerJ__103680->FMGL(m),
                                                      ((newOrigin__103620->FMGL(j)) - (originI__103676->FMGL(j))),
                                                      ((newOrigin__103620->FMGL(j)) - (originJ__103679->FMGL(j))),
                                                      gamma__103619);
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            x10_double wz__103623 = ::au::edu::anu::qm::PrimitiveGaussian::overlap1D(
                                                      powerI__103677->FMGL(n),
                                                      powerJ__103680->FMGL(n),
                                                      ((newOrigin__103620->FMGL(k)) - (originI__103676->FMGL(k))),
                                                      ((newOrigin__103620->FMGL(k)) - (originJ__103679->FMGL(k))),
                                                      gamma__103619);
                            
                            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                            ret__103682 = ((((((((::x10::lang::MathNatives::pow(((3.141592653589793) / (gamma__103619)),1.5)) * (::x10::lang::MathNatives::exp((((((((-(expI__103675))) * (expJ__103678))) * (radiusABSquared__103616))) / (gamma__103619)))))) * (wx__103621))) * (wy__103622))) * (wz__103623));
                            ret__103682;
                        }))
                        ))))))));
                        
                        //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PrimitiveGaussian.x10"
                        ret__103275 = ((((normI__103260) * (normJ__103264))) * (term__103627));
                        ret__103275;
                    }))
                    ))));
                }
            }
            
        }
    }
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    return (((((*this)->FMGL(normalization)) * (cg->FMGL(normalization)))) * (tij));
    
}

//#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
x10_double au::edu::anu::qm::ContractedGaussian::nuclear(
  ::au::edu::anu::qm::ContractedGaussian cg, ::x10x::vector::Point3d centre) {
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10::lang::Rail< x10_double >* cgExps = cg->FMGL(exponents);
    
    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10::lang::Rail< x10_double >* cgCoeffs = cg->FMGL(coefficients);
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::x10x::vector::Point3d cgOrigin = cg->FMGL(origin);
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    ::au::edu::anu::qm::Power cgPower = cg->FMGL(power);
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    x10_double vij = 0.0;
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck((*this)->FMGL(exponents))->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            ::au::edu::anu::qm::PrimitiveGaussian* iPG = 
            (new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian());
            (iPG)->::au::edu::anu::qm::PrimitiveGaussian::_constructor(
              (*this)->FMGL(origin), (*this)->FMGL(power),
              ::x10aux::nullCheck((*this)->FMGL(exponents))->x10::lang::Rail< x10_double >::__apply(
                i), ::x10aux::nullCheck((*this)->FMGL(coefficients))->x10::lang::Rail< x10_double >::__apply(
                      i), true);
            
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(cgExps)->FMGL(size))));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    ::au::edu::anu::qm::PrimitiveGaussian* jPG =
                       (new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian());
                    (jPG)->::au::edu::anu::qm::PrimitiveGaussian::_constructor(
                      cgOrigin, cgPower, ::x10aux::nullCheck(cgExps)->x10::lang::Rail< x10_double >::__apply(
                                           j), ::x10aux::nullCheck(cgCoeffs)->x10::lang::Rail< x10_double >::__apply(
                                                 j), true);
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    vij = ((vij) + (((((iPG->FMGL(coefficient)) * (jPG->FMGL(coefficient)))) * (iPG->au::edu::anu::qm::PrimitiveGaussian::nuclear(
                                                                                                  jPG,
                                                                                                  centre)))));
                }
            }
            
        }
    }
    
    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
    return (((((*this)->FMGL(normalization)) * (cg->FMGL(normalization)))) * (vij));
    
}

//#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
::x10::lang::String* au::edu::anu::qm::ContractedGaussian::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::ContractedGaussian::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149154), (&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149155)), (*this)->FMGL(origin)), (&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149156)), (*this)->FMGL(power)), (&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149157)), (*this)->FMGL(normalization)), (&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149158)), (*this)->FMGL(exponents)), (&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149159)), (*this)->FMGL(coefficients)), (&::au::edu::anu::qm::ContractedGaussian_Strings::sl__149160)), (*this)->FMGL(intIndex));
    
}
x10_int au::edu::anu::qm::ContractedGaussian::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(origin)->x10x::vector::Point3d::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(power)->au::edu::anu::qm::Power::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(normalization))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(exponents))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(coefficients))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(intIndex))));
    return result;
    
}
x10_boolean au::edu::anu::qm::ContractedGaussian::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ContractedGaussian>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ContractedGaussian::equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::ContractedGaussian>(other));
    
}
x10_boolean au::edu::anu::qm::ContractedGaussian::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ContractedGaussian>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ContractedGaussian::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::ContractedGaussian>(other));
    
}
void ::au::edu::anu::qm::ContractedGaussian::_serialize(::au::edu::anu::qm::ContractedGaussian this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(origin));
    buf.write(this_->FMGL(power));
    buf.write(this_->FMGL(normalization));
    buf.write(this_->FMGL(exponents));
    buf.write(this_->FMGL(coefficients));
    buf.write(this_->FMGL(intIndex));
    
}

void ::au::edu::anu::qm::ContractedGaussian::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(origin) = buf.read< ::x10x::vector::Point3d>();
    FMGL(power) = buf.read< ::au::edu::anu::qm::Power>();
    FMGL(normalization) = buf.read<x10_double>();
    FMGL(exponents) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(coefficients) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(intIndex) = buf.read<x10_int>();
}


::x10aux::RuntimeType au::edu::anu::qm::ContractedGaussian::rtt;
void au::edu::anu::qm::ContractedGaussian::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.ContractedGaussian",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149158(" exponents=");
::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149155(" origin=");
::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149159(" coefficients=");
::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149156(" power=");
::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149154("struct au.edu.anu.qm.ContractedGaussian:");
::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149160(" intIndex=");
::x10::lang::String au::edu::anu::qm::ContractedGaussian_Strings::sl__149157(" normalization=");

/* END of ContractedGaussian */
/*************************************************/
