/*************************************************/
/* START of Diagonalizer */
#include <x10x/xla/Diagonalizer.h>

::x10aux::RuntimeType x10x::xla::Diagonalizer::rtt;
void x10x::xla::Diagonalizer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("x10x.xla.Diagonalizer",::x10aux::RuntimeType::interface_kind, 1, parents, 0, NULL, NULL);
}

/* END of Diagonalizer */
/*************************************************/
