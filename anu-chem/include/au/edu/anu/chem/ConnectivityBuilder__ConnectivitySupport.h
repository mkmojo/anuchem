#ifndef __AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H
#define __AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace au { namespace edu { namespace anu { namespace chem { 
class Atom;
} } } } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10x { namespace vector { 
class Point3d;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace au { namespace edu { namespace anu { namespace chem { 

class ConnectivityBuilder__ConnectivitySupport : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(BOND_RADIUS) */
    static x10_double FMGL(BOND_RADIUS);
    static x10_double FMGL(BOND_RADIUS__get)();
    
    /* Static field: FMGL(COVALENT_BOND_TOLERANCE) */
    static x10_double FMGL(COVALENT_BOND_TOLERANCE);
    static x10_double FMGL(COVALENT_BOND_TOLERANCE__get)();
    
    /* Static field: FMGL(WEAK_BOND_TOLERANCE_LOWER) */
    static x10_double FMGL(WEAK_BOND_TOLERANCE_LOWER);
    static x10_double FMGL(WEAK_BOND_TOLERANCE_LOWER__get)();
    
    /* Static field: FMGL(WEAK_BOND_TOLERANCE_UPPER) */
    static x10_double FMGL(WEAK_BOND_TOLERANCE_UPPER);
    static x10_double FMGL(WEAK_BOND_TOLERANCE_UPPER__get)();
    
    /* Static field: FMGL(DOUBLE_BOND_OVERLAP_PERCENTAGE) */
    static x10_double FMGL(DOUBLE_BOND_OVERLAP_PERCENTAGE);
    static x10_double FMGL(DOUBLE_BOND_OVERLAP_PERCENTAGE__get)();
    
    /* Static field: FMGL(TRIPLE_BOND_OVERLAP_PERCENTAGE) */
    static x10_double FMGL(TRIPLE_BOND_OVERLAP_PERCENTAGE);
    static x10_double FMGL(TRIPLE_BOND_OVERLAP_PERCENTAGE__get)();
    
    x10_double FMGL(x);
    
    x10_double FMGL(y);
    
    x10_double FMGL(z);
    
    x10_double FMGL(distance);
    
    x10_double FMGL(covalentRadiusSum);
    
    x10_double FMGL(vdwRadiusSum);
    
    void _constructor();
    
    static ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport* _make(
             );
    
    virtual x10_boolean canFormBond(::au::edu::anu::chem::Atom* a,
                                    ::au::edu::anu::chem::Atom* b);
    virtual x10_boolean isSingleBondPresent();
    virtual x10_boolean isDoubleBondPresent();
    virtual x10_boolean isWeekBondPresent();
    virtual ::au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport*
      au__edu__anu__chem__ConnectivityBuilder__ConnectivitySupport____this__au__edu__anu__chem__ConnectivityBuilder__ConnectivitySupport(
      );
    virtual void __fieldInitializers_au_edu_anu_chem_ConnectivityBuilder_ConnectivitySupport(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H

namespace au { namespace edu { namespace anu { namespace chem { 
class ConnectivityBuilder__ConnectivitySupport;
} } } } 

#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H_NODEPS
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H_NODEPS
#ifndef AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H_GENERICS
#define AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H_GENERICS
inline x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(BOND_RADIUS__get)() {
    return au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(BOND_RADIUS);
}

inline x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(COVALENT_BOND_TOLERANCE__get)() {
    return au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(COVALENT_BOND_TOLERANCE);
}

inline x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(WEAK_BOND_TOLERANCE_LOWER__get)() {
    return au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(WEAK_BOND_TOLERANCE_LOWER);
}

inline x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(WEAK_BOND_TOLERANCE_UPPER__get)() {
    return au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(WEAK_BOND_TOLERANCE_UPPER);
}

inline x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(DOUBLE_BOND_OVERLAP_PERCENTAGE__get)() {
    return au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(DOUBLE_BOND_OVERLAP_PERCENTAGE);
}

inline x10_double au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(TRIPLE_BOND_OVERLAP_PERCENTAGE__get)() {
    return au::edu::anu::chem::ConnectivityBuilder__ConnectivitySupport::FMGL(TRIPLE_BOND_OVERLAP_PERCENTAGE);
}

#endif // AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H_GENERICS
#endif // __AU_EDU_ANU_CHEM_CONNECTIVITYBUILDER__CONNECTIVITYSUPPORT_H_NODEPS
