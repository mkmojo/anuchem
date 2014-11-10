/*************************************************/
/* START of ForceField */
#include <au/edu/anu/mm/ForceField.h>

::x10aux::RuntimeType au::edu::anu::mm::ForceField::rtt;
void au::edu::anu::mm::ForceField::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.mm.ForceField",::x10aux::RuntimeType::interface_kind, 1, parents, 0, NULL, NULL);
}

/* END of ForceField */
/*************************************************/
