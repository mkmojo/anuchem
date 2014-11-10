/*************************************************/
/* START of SimpleElectrostaticDirectMethod */
#include <au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.h>

#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod__Atom.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>
#ifndef AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*>::itable<au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* __apply(x10_long id__7){
        ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* alloc__25326 =
           (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom>()) ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom());
        
        //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
        alloc__25326->FMGL(x) = 0.0;
        alloc__25326->FMGL(y) = 0.0;
        alloc__25326->FMGL(z) = 0.0;
        alloc__25326->FMGL(charge) = 0.0;
        alloc__25326->FMGL(fx) = 0.0;
        alloc__25326->FMGL(fy) = 0.0;
        alloc__25326->FMGL(fz) = 0.0;
        
        //#line 98 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
        return alloc__25326;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1>();
        buf.record_reference(storage);
        au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1* this_ = new (storage) au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1();
        return this_;
    }
    
    au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10:98";
    }

};

#endif // AU_EDU_ANU_CHEM_MM_SIMPLEELECTROSTATICDIRECTMETHOD__CLOSURE__1_CLOSURE

//#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
x10_double au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::FMGL(SIZE) = 80.0;

//#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
/** A multi-timer for the several segments of a single getEnergy invocation, indexed by the constants above. */

//#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_constructor(
  ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >* atoms) {
    
    //#line 20 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod* this__25298 =
      this;
    ::x10aux::nullCheck(this__25298)->FMGL(timer) = (__extension__ ({
        
        //#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
        ::au::edu::anu::util::Timer* alloc__25297 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__25297)->::au::edu::anu::util::Timer::_constructor(((x10_long)1ll));
        alloc__25297;
    }))
    ;
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    this->FMGL(atoms) = atoms;
}
::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod* au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_make(
  ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >* atoms)
{
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod>()) ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod();
    this_->_constructor(atoms);
    return this_;
}



//#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
x10_double au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::getEnergy(
  ) {
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)0ll));
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    x10_double energy = 0.0;
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >* atoms =
      this->FMGL(atoms);
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    x10_long i__25251max__25323 = (((x10_long)(::x10aux::nullCheck(atoms)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__25324;
        for (i__25324 = ((x10_long)0ll); ((i__25324) <= (i__25251max__25323));
             i__25324 = ((i__25324) + (((x10_long)1ll))))
        {
            x10_long i__25325 = i__25324;
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* atomI__25315 =
              ::x10aux::nullCheck(atoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                i__25325);
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double xi__25316 = ::x10aux::nullCheck(atomI__25315)->FMGL(x);
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double yi__25317 = ::x10aux::nullCheck(atomI__25315)->FMGL(y);
            
            //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double zi__25318 = ::x10aux::nullCheck(atomI__25315)->FMGL(z);
            
            //#line 58 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double qi__25319 = ::x10aux::nullCheck(atomI__25315)->FMGL(charge);
            
            //#line 59 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double fix__25320 = 0.0;
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double fiy__25321 = 0.0;
            
            //#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double fiz__25322 = 0.0;
            
            //#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_long i__25233max__25312 = (((x10_long)(::x10aux::nullCheck(atoms)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__25313;
                for (i__25313 = ((x10_long)0ll); ((i__25313) <= (i__25233max__25312));
                     i__25313 = ((i__25313) + (((x10_long)1ll))))
                {
                    x10_long j__25314 = i__25313;
                    
                    //#line 63 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    if ((::x10aux::struct_equals(i__25325,
                                                 j__25314)))
                    {
                        continue;
                    }
                    
                    //#line 64 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* atomJ__25299 =
                      ::x10aux::nullCheck(atoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                        j__25314);
                    
                    //#line 66 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double dx__25300 = ((::x10aux::nullCheck(atomJ__25299)->FMGL(x)) - (xi__25316));
                    
                    //#line 67 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double dy__25301 = ((::x10aux::nullCheck(atomJ__25299)->FMGL(y)) - (yi__25317));
                    
                    //#line 68 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double dz__25302 = ((::x10aux::nullCheck(atomJ__25299)->FMGL(z)) - (zi__25318));
                    
                    //#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double r__25303 = ((((((dx__25300) * (dx__25300))) + (((dy__25301) * (dy__25301))))) + (((dz__25302) * (dz__25302))));
                    
                    //#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double invR__25304 = ((1.0) / (r__25303));
                    
                    //#line 72 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double qq__25305 = ((qi__25319) * (::x10aux::nullCheck(atomJ__25299)->FMGL(charge)));
                    
                    //#line 73 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double invR__25306 = ::x10::lang::MathNatives::sqrt(invR__25304);
                    
                    //#line 75 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double e__25307 = ((invR__25306) * (qq__25305));
                    
                    //#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double forceScaling__25308 = ((e__25307) * (invR__25304));
                    
                    //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    energy = ((energy) + (e__25307));
                    
                    //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double fx__25309 = ((forceScaling__25308) * (dx__25300));
                    
                    //#line 80 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double fy__25310 = ((forceScaling__25308) * (dy__25301));
                    
                    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    x10_double fz__25311 = ((forceScaling__25308) * (dz__25302));
                    
                    //#line 83 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    fix__25320 = ((fix__25320) + (fx__25309));
                    
                    //#line 84 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    fiy__25321 = ((fiy__25321) + (fy__25310));
                    
                    //#line 85 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
                    fiz__25322 = ((fiz__25322) + (fz__25311));
                }
            }
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atomI__25315)->FMGL(fx) =
              fix__25320;
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atomI__25315)->FMGL(fy) =
              fiy__25321;
            
            //#line 90 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atomI__25315)->FMGL(fz) =
              fiz__25322;
        }
    }
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)0ll));
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    return ((0.5) * (energy));
    
}

//#line 97 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >*
  au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::generateAtoms(
  x10_long numAtoms) {
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >* atoms =
      ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::_make(numAtoms,
                                                                                                   reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*> >(sizeof(au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1)))au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1())));
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    x10_int gridSize = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(::x10::lang::MathNatives::cbrt(((x10_double) (numAtoms)))));
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    x10_long gridPoint = ((x10_long)0ll);
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    x10_long i__25269max__25333 = ((numAtoms) - (((x10_long)1ll)));
    {
        x10_long i__25334;
        for (i__25334 = ((x10_long)0ll); ((i__25334) <= (i__25269max__25333));
             i__25334 = ((i__25334) + (((x10_long)1ll))))
        {
            x10_long i__25335 = i__25334;
            
            //#line 102 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_long gridX__25327 = ((gridPoint) / ::x10aux::zeroCheck(((x10_long)(((gridSize) * (gridSize))))));
            
            //#line 103 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_long gridY__25328 = ((((gridPoint) - (((((gridX__25327) * (((x10_long)(gridSize))))) * (((x10_long)(gridSize))))))) / ::x10aux::zeroCheck(((x10_long)(gridSize))));
            
            //#line 104 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_long gridZ__25329 = ((((gridPoint) - (((((gridX__25327) * (((x10_long)(gridSize))))) * (((x10_long)(gridSize))))))) - (((gridY__25328) * (((x10_long)(gridSize))))));
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double x__25330 = ((((((x10_double) (gridX__25327))) + (0.5))) * (((80.0) / (((x10_double) (gridSize))))));
            
            //#line 106 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double y__25331 = ((((((x10_double) (gridY__25328))) + (0.5))) * (((80.0) / (((x10_double) (gridSize))))));
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            x10_double z__25332 = ((((((x10_double) (gridZ__25329))) + (0.5))) * (((80.0) / (((x10_double) (gridSize))))));
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(x) = x__25330;
            
            //#line 109 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(y) = y__25331;
            
            //#line 110 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(z) = z__25332;
            
            //#line 111 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(charge) =
              (::x10aux::struct_equals(((gridPoint) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                       ((x10_long)0ll))) ? (1.0)
              : (-1.0);
            
            //#line 112 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(fx) = 0.0;
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(fy) = 0.0;
            
            //#line 114 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            ::x10aux::nullCheck(atoms->x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >::__apply(
                                  i__25335))->FMGL(fz) = 0.0;
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
            gridPoint = ((gridPoint) + (((x10_long)1ll)));
        }
    }
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
    return atoms;
    
}

//#line 20 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod*
  au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod____this__au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod(
  ) {
    return this;
    
}
void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::__fieldInitializers_au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod(
  ) {
    this->FMGL(timer) = (__extension__ ({
        
        //#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
        ::au::edu::anu::util::Timer* alloc__25231 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__25231)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)1ll));
        alloc__25231;
    }))
    ;
}
const ::x10aux::serialization_id_t au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_deserializer);

void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(timer));
    buf.write(this->FMGL(atoms));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod>()) ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(timer) = buf.read< ::au::edu::anu::util::Timer*>();
    FMGL(atoms) = buf.read< ::x10::lang::Rail< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* >*>();
}

::x10aux::RuntimeType au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::rtt;
void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.mm.SimpleElectrostaticDirectMethod",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*>::itable<au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1>au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::__apply, &au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom*> >, &au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod__closure__1::_deserialize);

/* END of SimpleElectrostaticDirectMethod */
/*************************************************/
/*************************************************/
/* START of SimpleElectrostaticDirectMethod$Atom */
#include <au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod__Atom.h>

#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>

//#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/SimpleElectrostaticDirectMethod.x10"
::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod__Atom____this__au__edu__anu__chem__mm__SimpleElectrostaticDirectMethod__Atom(
  ) {
    return this;
    
}
void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_constructor(
  ) {
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* this__25296 =
      this;
    ::x10aux::nullCheck(this__25296)->FMGL(x) = 0.0;
    ::x10aux::nullCheck(this__25296)->FMGL(y) = 0.0;
    ::x10aux::nullCheck(this__25296)->FMGL(z) = 0.0;
    ::x10aux::nullCheck(this__25296)->FMGL(charge) = 0.0;
    ::x10aux::nullCheck(this__25296)->FMGL(fx) = 0.0;
    ::x10aux::nullCheck(this__25296)->FMGL(fy) = 0.0;
    ::x10aux::nullCheck(this__25296)->FMGL(fz) = 0.0;
}
::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_make(
  ) {
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom>()) ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom();
    this_->_constructor();
    return this_;
}


void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::__fieldInitializers_au_edu_anu_chem_mm_SimpleElectrostaticDirectMethod_Atom(
  ) {
    this->FMGL(x) = 0.0;
    this->FMGL(y) = 0.0;
    this->FMGL(z) = 0.0;
    this->FMGL(charge) = 0.0;
    this->FMGL(fx) = 0.0;
    this->FMGL(fy) = 0.0;
    this->FMGL(fz) = 0.0;
}
const ::x10aux::serialization_id_t au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_deserializer);

void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(y));
    buf.write(this->FMGL(z));
    buf.write(this->FMGL(charge));
    buf.write(this->FMGL(fx));
    buf.write(this->FMGL(fy));
    buf.write(this->FMGL(fz));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom>()) ::au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_double>();
    FMGL(y) = buf.read<x10_double>();
    FMGL(z) = buf.read<x10_double>();
    FMGL(charge) = buf.read<x10_double>();
    FMGL(fx) = buf.read<x10_double>();
    FMGL(fy) = buf.read<x10_double>();
    FMGL(fz) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::rtt;
void au::edu::anu::chem::mm::SimpleElectrostaticDirectMethod__Atom::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.mm.SimpleElectrostaticDirectMethod.Atom",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SimpleElectrostaticDirectMethod$Atom */
/*************************************************/
