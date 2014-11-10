/*************************************************/
/* START of ConnectivityBuilder */
#include <au/edu/anu/chem/ConnectivityBuilder.h>

::x10aux::RuntimeType au::edu::anu::chem::ConnectivityBuilder<void>::rtt;

/* END of ConnectivityBuilder */
/*************************************************/
/*************************************************/
/* START of ConnectivityBuilder$ConnectivitySupport */
#include <au/edu/anu/chem/ConnectivityBuilder__ConnectivitySupport.h>

#include <x10/lang/Double.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10x/vector/Point3d.h>
#include <x10/compiler/Synthetic.h>

//#line 240 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(BOND_RADIUS) = 7.56;

//#line 241 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(COVALENT_BOND_TOLERANCE) = 0.7558903950887472;

//#line 242 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(WEAK_BOND_TOLERANCE_LOWER) = 0.1889725987721868;

//#line 243 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(WEAK_BOND_TOLERANCE_UPPER) = 1.9842122871079613;

//#line 244 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(DOUBLE_BOND_OVERLAP_PERCENTAGE) = 0.92;

//#line 245 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(TRIPLE_BOND_OVERLAP_PERCENTAGE) = 0.72;

//#line 247 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 248 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 249 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 250 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"

//#line 252 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
void au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_constructor(
  ) {
    
    //#line 239 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* this__14845 =
      this;
    ::x10aux::nullCheck(this__14845)->FMGL(x) = 0.0;
    ::x10aux::nullCheck(this__14845)->FMGL(y) = 0.0;
    ::x10aux::nullCheck(this__14845)->FMGL(z) = 0.0;
    ::x10aux::nullCheck(this__14845)->FMGL(distance) = 0.0;
    ::x10aux::nullCheck(this__14845)->FMGL(covalentRadiusSum) = 0.0;
    ::x10aux::nullCheck(this__14845)->FMGL(vdwRadiusSum) = 0.0;
}
::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_make(
  ) {
    ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport>()) ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport();
    this_->_constructor();
    return this_;
}



//#line 258 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_boolean au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::canFormBond(
  ::au::edu::anu::chem::Atom* a, ::au::edu::anu::chem::Atom* b) {
    
    //#line 259 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    this->FMGL(x) = ::fabs(((::x10aux::nullCheck(a)->FMGL(centre)->FMGL(i)) - (::x10aux::nullCheck(b)->FMGL(centre)->FMGL(i))));
    
    //#line 260 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    if (((this->FMGL(x)) > (7.56))) {
        return false;
        
    }
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    this->FMGL(y) = ::fabs(((::x10aux::nullCheck(a)->FMGL(centre)->FMGL(j)) - (::x10aux::nullCheck(b)->FMGL(centre)->FMGL(j))));
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    if (((this->FMGL(y)) > (7.56))) {
        return false;
        
    }
    
    //#line 265 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    this->FMGL(z) = ::fabs(((::x10aux::nullCheck(a)->FMGL(centre)->FMGL(k)) - (::x10aux::nullCheck(b)->FMGL(centre)->FMGL(k))));
    
    //#line 266 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    if (((this->FMGL(z)) > (7.56))) {
        return false;
        
    }
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    this->FMGL(distance) = ::x10::lang::MathNatives::sqrt(((((((this->FMGL(x)) * (this->FMGL(x)))) + (((this->FMGL(y)) * (this->FMGL(y)))))) + (((this->FMGL(z)) * (this->FMGL(z))))));
    
    //#line 270 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    return true;
    
}

//#line 276 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_boolean au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::isSingleBondPresent(
  ) {
    
    //#line 277 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    return (((((this->FMGL(covalentRadiusSum)) - (0.7558903950887472))) < (this->FMGL(distance))) &&
    ((this->FMGL(distance)) < (((this->FMGL(covalentRadiusSum)) + (0.7558903950887472)))));
    
}

//#line 284 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_boolean au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::isDoubleBondPresent(
  ) {
    
    //#line 285 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    return ((this->FMGL(distance)) < (((0.92) * (this->FMGL(covalentRadiusSum)))));
    
}

//#line 291 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
x10_boolean au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::isWeekBondPresent(
  ) {
    
    //#line 292 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
    return (((this->FMGL(distance)) < (((this->FMGL(vdwRadiusSum)) - (0.1889725987721868)))) &&
    ((((this->FMGL(vdwRadiusSum)) - (1.9842122871079613))) < (this->FMGL(distance))));
    
}

//#line 239 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/ConnectivityBuilder.x10"
::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport*
  au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::au__edu__anu__chem__ConnectivityBuilder__ConnectivitySupport____this__au__edu__anu__chem__ConnectivityBuilder__ConnectivitySupport(
  ) {
    return this;
    
}
void au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::__fieldInitializers_au_edu_anu_chem_ConnectivityBuilder_ConnectivitySupport(
  ) {
    this->FMGL(x) = 0.0;
    this->FMGL(y) = 0.0;
    this->FMGL(z) = 0.0;
    this->FMGL(distance) = 0.0;
    this->FMGL(covalentRadiusSum) = 0.0;
    this->FMGL(vdwRadiusSum) = 0.0;
}
const ::x10aux::serialization_id_t au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_deserializer);

void au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(y));
    buf.write(this->FMGL(z));
    buf.write(this->FMGL(distance));
    buf.write(this->FMGL(covalentRadiusSum));
    buf.write(this->FMGL(vdwRadiusSum));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport>()) ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_double>();
    FMGL(y) = buf.read<x10_double>();
    FMGL(z) = buf.read<x10_double>();
    FMGL(distance) = buf.read<x10_double>();
    FMGL(covalentRadiusSum) = buf.read<x10_double>();
    FMGL(vdwRadiusSum) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::rtt;
void au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.ConnectivityBuilder.ConnectivitySupport",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ConnectivityBuilder$ConnectivitySupport */
/*************************************************/
