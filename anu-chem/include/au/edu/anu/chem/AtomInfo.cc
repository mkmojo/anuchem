/*************************************************/
/* START of AtomInfo */
#include <au/edu/anu/chem/AtomInfo.h>


//#line 36 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
::au::edu::anu::chem::AtomInfo* au::edu::anu::chem::AtomInfo::FMGL(_instance);
void au::edu::anu::chem::AtomInfo::FMGL(_instance__do_init)() {
    FMGL(_instance__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: au::edu::anu::chem::AtomInfo._instance");
    ::au::edu::anu::chem::AtomInfo* __var8__ = ::au::edu::anu::chem::AtomInfo::_make();
    FMGL(_instance) = __var8__;
    FMGL(_instance__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void au::edu::anu::chem::AtomInfo::FMGL(_instance__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(_instance__status), &FMGL(_instance__do_init), &FMGL(_instance__exception), "au::edu::anu::chem::AtomInfo._instance");
    
}
volatile ::x10aux::StaticInitController::status au::edu::anu::chem::AtomInfo::FMGL(_instance__status);
::x10::lang::CheckedThrowable* au::edu::anu::chem::AtomInfo::FMGL(_instance__exception);


//#line 37 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
::au::edu::anu::chem::AtomInfo* au::edu::anu::chem::AtomInfo::getInstance(
  ) {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    return ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
}

//#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
/** Atom properties stored in order of atomic number.  0 is a placeholder! */

//#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
void au::edu::anu::chem::AtomInfo::_constructor() {
    
    //#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    ::au::edu::anu::chem::AtomInfo* this__9941 = this;
    ::x10aux::nullCheck(this__9941)->FMGL(bySymbol) = (__extension__ ({
        
        //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
        ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>* alloc__9940 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*> >()) ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>());
        (alloc__9940)->::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>::_constructor();
        alloc__9940;
    }))
    ;
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32437),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8831 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9942 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32437);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8831->FMGL(symbol) =
                                    symbol__9942;
                                  alloc__8831->FMGL(atomicNumber) =
                                    ((x10_int)1);
                                  alloc__8831->FMGL(covalentRadius) =
                                    0.718;
                                  alloc__8831->FMGL(vdWRadius) =
                                    2.268;
                                  alloc__8831->FMGL(atomicMass) =
                                    1.0079;
                                  alloc__8831;
                              }))
                              );
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32438),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8832 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9943 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32438);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8832->FMGL(symbol) =
                                    symbol__9943;
                                  alloc__8832->FMGL(atomicNumber) =
                                    ((x10_int)2);
                                  alloc__8832->FMGL(covalentRadius) =
                                    0.605;
                                  alloc__8832->FMGL(vdWRadius) =
                                    2.646;
                                  alloc__8832->FMGL(atomicMass) =
                                    4.0026;
                                  alloc__8832;
                              }))
                              );
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32439),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8833 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9944 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32439);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8833->FMGL(symbol) =
                                    symbol__9944;
                                  alloc__8833->FMGL(atomicNumber) =
                                    ((x10_int)3);
                                  alloc__8833->FMGL(covalentRadius) =
                                    2.532;
                                  alloc__8833->FMGL(vdWRadius) =
                                    3.439;
                                  alloc__8833->FMGL(atomicMass) =
                                    6.941;
                                  alloc__8833;
                              }))
                              );
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32440),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8834 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9945 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32440);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8834->FMGL(symbol) =
                                    symbol__9945;
                                  alloc__8834->FMGL(atomicNumber) =
                                    ((x10_int)4);
                                  alloc__8834->FMGL(covalentRadius) =
                                    1.701;
                                  alloc__8834->FMGL(vdWRadius) =
                                    2.891;
                                  alloc__8834->FMGL(atomicMass) =
                                    9.0122;
                                  alloc__8834;
                              }))
                              );
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32441),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8835 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9946 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32441);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8835->FMGL(symbol) =
                                    symbol__9946;
                                  alloc__8835->FMGL(atomicNumber) =
                                    ((x10_int)5);
                                  alloc__8835->FMGL(covalentRadius) =
                                    1.55;
                                  alloc__8835->FMGL(vdWRadius) =
                                    3.628;
                                  alloc__8835->FMGL(atomicMass) =
                                    10.81;
                                  alloc__8835;
                              }))
                              );
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32442),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8836 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9947 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32442);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8836->FMGL(symbol) =
                                    symbol__9947;
                                  alloc__8836->FMGL(atomicNumber) =
                                    ((x10_int)6);
                                  alloc__8836->FMGL(covalentRadius) =
                                    1.455;
                                  alloc__8836->FMGL(vdWRadius) =
                                    3.213;
                                  alloc__8836->FMGL(atomicMass) =
                                    12.011;
                                  alloc__8836;
                              }))
                              );
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32443),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8837 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9948 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32443);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8837->FMGL(symbol) =
                                    symbol__9948;
                                  alloc__8837->FMGL(atomicNumber) =
                                    ((x10_int)7);
                                  alloc__8837->FMGL(covalentRadius) =
                                    1.417;
                                  alloc__8837->FMGL(vdWRadius) =
                                    2.929;
                                  alloc__8837->FMGL(atomicMass) =
                                    14.007;
                                  alloc__8837;
                              }))
                              );
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32444),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8838 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9949 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32444);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8838->FMGL(symbol) =
                                    symbol__9949;
                                  alloc__8838->FMGL(atomicNumber) =
                                    ((x10_int)8);
                                  alloc__8838->FMGL(covalentRadius) =
                                    1.38;
                                  alloc__8838->FMGL(vdWRadius) =
                                    2.872;
                                  alloc__8838->FMGL(atomicMass) =
                                    15.999;
                                  alloc__8838;
                              }))
                              );
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32445),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8839 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9950 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32445);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8839->FMGL(symbol) =
                                    symbol__9950;
                                  alloc__8839->FMGL(atomicNumber) =
                                    ((x10_int)9);
                                  alloc__8839->FMGL(covalentRadius) =
                                    1.342;
                                  alloc__8839->FMGL(vdWRadius) =
                                    2.778;
                                  alloc__8839->FMGL(atomicMass) =
                                    18.998;
                                  alloc__8839;
                              }))
                              );
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32446),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8840 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9951 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32446);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8840->FMGL(symbol) =
                                    symbol__9951;
                                  alloc__8840->FMGL(atomicNumber) =
                                    ((x10_int)10);
                                  alloc__8840->FMGL(covalentRadius) =
                                    1.304;
                                  alloc__8840->FMGL(vdWRadius) =
                                    2.91;
                                  alloc__8840->FMGL(atomicMass) =
                                    20.1797;
                                  alloc__8840;
                              }))
                              );
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32447),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8841 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9952 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32447);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8841->FMGL(symbol) =
                                    symbol__9952;
                                  alloc__8841->FMGL(atomicNumber) =
                                    ((x10_int)11);
                                  alloc__8841->FMGL(covalentRadius) =
                                    2.91;
                                  alloc__8841->FMGL(vdWRadius) =
                                    4.29;
                                  alloc__8841->FMGL(atomicMass) =
                                    22.9898;
                                  alloc__8841;
                              }))
                              );
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32448),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8842 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9953 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32448);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8842->FMGL(symbol) =
                                    symbol__9953;
                                  alloc__8842->FMGL(atomicNumber) =
                                    ((x10_int)12);
                                  alloc__8842->FMGL(covalentRadius) =
                                    2.457;
                                  alloc__8842->FMGL(vdWRadius) =
                                    3.269;
                                  alloc__8842->FMGL(atomicMass) =
                                    24.305;
                                  alloc__8842;
                              }))
                              );
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32449),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8843 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9954 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32449);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8843->FMGL(symbol) =
                                    symbol__9954;
                                  alloc__8843->FMGL(atomicNumber) =
                                    ((x10_int)13);
                                  alloc__8843->FMGL(covalentRadius) =
                                    2.23;
                                  alloc__8843->FMGL(vdWRadius) =
                                    3.477;
                                  alloc__8843->FMGL(atomicMass) =
                                    26.9815;
                                  alloc__8843;
                              }))
                              );
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32450),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8844 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9955 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32450);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8844->FMGL(symbol) =
                                    symbol__9955;
                                  alloc__8844->FMGL(atomicNumber) =
                                    ((x10_int)14);
                                  alloc__8844->FMGL(covalentRadius) =
                                    2.098;
                                  alloc__8844->FMGL(vdWRadius) =
                                    3.969;
                                  alloc__8844->FMGL(atomicMass) =
                                    28.085;
                                  alloc__8844;
                              }))
                              );
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32451),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8845 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9956 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32451);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8845->FMGL(symbol) =
                                    symbol__9956;
                                  alloc__8845->FMGL(atomicNumber) =
                                    ((x10_int)15);
                                  alloc__8845->FMGL(covalentRadius) =
                                    2.003;
                                  alloc__8845->FMGL(vdWRadius) =
                                    3.402;
                                  alloc__8845->FMGL(atomicMass) =
                                    30.9738;
                                  alloc__8845;
                              }))
                              );
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32452),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8846 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9957 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32452);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8846->FMGL(symbol) =
                                    symbol__9957;
                                  alloc__8846->FMGL(atomicNumber) =
                                    ((x10_int)16);
                                  alloc__8846->FMGL(covalentRadius) =
                                    2.003;
                                  alloc__8846->FMGL(vdWRadius) =
                                    3.402;
                                  alloc__8846->FMGL(atomicMass) =
                                    32.06;
                                  alloc__8846;
                              }))
                              );
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32453),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8847 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9958 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32453);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8847->FMGL(symbol) =
                                    symbol__9958;
                                  alloc__8847->FMGL(atomicNumber) =
                                    ((x10_int)17);
                                  alloc__8847->FMGL(covalentRadius) =
                                    1.871;
                                  alloc__8847->FMGL(vdWRadius) =
                                    3.307;
                                  alloc__8847->FMGL(atomicMass) =
                                    35.45;
                                  alloc__8847;
                              }))
                              );
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32454),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8848 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9959 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32454);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8848->FMGL(symbol) =
                                    symbol__9959;
                                  alloc__8848->FMGL(atomicNumber) =
                                    ((x10_int)18);
                                  alloc__8848->FMGL(covalentRadius) =
                                    1.833;
                                  alloc__8848->FMGL(vdWRadius) =
                                    3.553;
                                  alloc__8848->FMGL(atomicMass) =
                                    39.948;
                                  alloc__8848;
                              }))
                              );
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32455),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8849 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9960 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32455);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8849->FMGL(symbol) =
                                    symbol__9960;
                                  alloc__8849->FMGL(atomicNumber) =
                                    ((x10_int)19);
                                  alloc__8849->FMGL(covalentRadius) =
                                    3.70386;
                                  alloc__8849->FMGL(vdWRadius) =
                                    5.967;
                                  alloc__8849->FMGL(atomicMass) =
                                    39.09831;
                                  alloc__8849;
                              }))
                              );
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32456),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8850 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9961 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32456);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8850->FMGL(symbol) =
                                    symbol__9961;
                                  alloc__8850->FMGL(atomicNumber) =
                                    ((x10_int)20);
                                  alloc__8850->FMGL(covalentRadius) =
                                    3.2881;
                                  alloc__8850->FMGL(vdWRadius) =
                                    4.365;
                                  alloc__8850->FMGL(atomicMass) =
                                    40.0784;
                                  alloc__8850;
                              }))
                              );
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySymbol)->put((&::au::edu::anu::chem::AtomInfo_Strings::sl__32457),
                              (__extension__ ({
                                  ::au::edu::anu::chem::AtomInfo__AtomProps* alloc__8851 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps());
                                  
                                  //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  ::x10::lang::String* symbol__9962 =
                                    (&::au::edu::anu::chem::AtomInfo_Strings::sl__32457);
                                  
                                  //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
                                  alloc__8851->FMGL(symbol) =
                                    symbol__9962;
                                  alloc__8851->FMGL(atomicNumber) =
                                    ((x10_int)35);
                                  alloc__8851->FMGL(covalentRadius) =
                                    2.154;
                                  alloc__8851->FMGL(vdWRadius) =
                                    3.496;
                                  alloc__8851->FMGL(atomicMass) =
                                    79.904;
                                  alloc__8851;
                              }))
                              );
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    this->FMGL(bySpecies) = ::x10::lang::Rail< ::au::edu::anu::chem::AtomInfo__AtomProps* >::_make(((x10_long)36ll));
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    {
        ::x10::lang::Iterator< ::x10::util::Map__Entry< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>*>* entry__8854;
        for (entry__8854 = ::x10::util::Set< ::x10::util::Map__Entry< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>*>::iterator(::x10aux::nullCheck(this->FMGL(bySymbol)->entries()));
             ::x10::lang::Iterator< ::x10::util::Map__Entry< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>*>::hasNext(::x10aux::nullCheck(entry__8854));
             ) {
            ::x10::util::Map__Entry< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>* entry =
              ::x10::lang::Iterator< ::x10::util::Map__Entry< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>*>::next(::x10aux::nullCheck(entry__8854));
            
            //#line 71 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
            ::au::edu::anu::chem::AtomInfo__AtomProps* props =
              ::x10::util::Map__Entry< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>::getValue(::x10aux::nullCheck(entry));
            
            //#line 72 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
            ::x10aux::nullCheck(this->FMGL(bySpecies))->x10::lang::Rail< ::au::edu::anu::chem::AtomInfo__AtomProps* >::__set(
              ((x10_long)(::x10aux::nullCheck(props)->FMGL(atomicNumber))),
              props);
        }
    }
    
}
::au::edu::anu::chem::AtomInfo* au::edu::anu::chem::AtomInfo::_make(
  ) {
    ::au::edu::anu::chem::AtomInfo* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo>()) ::au::edu::anu::chem::AtomInfo();
    this_->_constructor();
    return this_;
}



//#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
::au::edu::anu::chem::AtomInfo__AtomProps* au::edu::anu::chem::AtomInfo::getSpecies(
  x10_int speciesId) {
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    ::au::edu::anu::chem::AtomInfo__AtomProps* species = ::x10aux::nullCheck(::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)()->FMGL(bySpecies))->x10::lang::Rail< ::au::edu::anu::chem::AtomInfo__AtomProps* >::__apply(
                                                           ((x10_long)(speciesId)));
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    if ((::x10aux::struct_equals(species, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make(::x10::lang::String::__plus((&::au::edu::anu::chem::AtomInfo_Strings::sl__32458), speciesId))));
    }
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    return species;
    
}

//#line 84 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
::au::edu::anu::chem::AtomInfo__AtomProps* au::edu::anu::chem::AtomInfo::getSpecies(
  ::x10::lang::String* symbol) {
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    ::au::edu::anu::chem::AtomInfo__AtomProps* species = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)()->FMGL(bySymbol)->getOrElse(
                                                           symbol,
                                                           ::x10aux::class_cast_unchecked< ::au::edu::anu::chem::AtomInfo__AtomProps*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    if ((::x10aux::struct_equals(species, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 87 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make(::x10::lang::String::__plus((&::au::edu::anu::chem::AtomInfo_Strings::sl__32458), symbol))));
    }
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    return species;
    
}

//#line 92 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_int au::edu::anu::chem::AtomInfo::getAtomicNumber(::x10::lang::String* symbol) {
    return ::x10aux::nullCheck(this->getSpecies(symbol))->FMGL(atomicNumber);
    
}

//#line 93 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_double au::edu::anu::chem::AtomInfo::getCovalentRadius(
  ::x10::lang::String* symbol) {
    return ::x10aux::nullCheck(this->getSpecies(symbol))->FMGL(covalentRadius);
    
}

//#line 94 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_double au::edu::anu::chem::AtomInfo::getVdWRadius(::x10::lang::String* symbol) {
    return ::x10aux::nullCheck(this->getSpecies(symbol))->FMGL(vdWRadius);
    
}

//#line 95 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_double au::edu::anu::chem::AtomInfo::getAtomicMass(::x10::lang::String* symbol) {
    return ::x10aux::nullCheck(this->getSpecies(symbol))->FMGL(atomicMass);
    
}

//#line 97 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_int au::edu::anu::chem::AtomInfo::getAtomicNumber(x10_int species) {
    return ::x10aux::nullCheck(this->getSpecies(species))->FMGL(atomicNumber);
    
}

//#line 98 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_double au::edu::anu::chem::AtomInfo::getCovalentRadius(
  x10_int species) {
    return ::x10aux::nullCheck(this->getSpecies(species))->FMGL(covalentRadius);
    
}

//#line 99 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_double au::edu::anu::chem::AtomInfo::getVdWRadius(x10_int species) {
    return ::x10aux::nullCheck(this->getSpecies(species))->FMGL(vdWRadius);
    
}

//#line 100 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
x10_double au::edu::anu::chem::AtomInfo::getAtomicMass(x10_int species) {
    return ::x10aux::nullCheck(this->getSpecies(species))->FMGL(atomicMass);
    
}

//#line 21 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
::au::edu::anu::chem::AtomInfo* au::edu::anu::chem::AtomInfo::au__edu__anu__chem__AtomInfo____this__au__edu__anu__chem__AtomInfo(
  ) {
    return this;
    
}
void au::edu::anu::chem::AtomInfo::__fieldInitializers_au_edu_anu_chem_AtomInfo(
  ) {
    this->FMGL(bySymbol) = (__extension__ ({
        
        //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
        ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>* alloc__8852 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*> >()) ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>());
        (alloc__8852)->::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>::_constructor();
        alloc__8852;
    }))
    ;
}
const ::x10aux::serialization_id_t au::edu::anu::chem::AtomInfo::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::AtomInfo::_deserializer);

void au::edu::anu::chem::AtomInfo::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(bySymbol));
    buf.write(this->FMGL(bySpecies));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::AtomInfo::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::AtomInfo* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo>()) ::au::edu::anu::chem::AtomInfo();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::AtomInfo::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(bySymbol) = buf.read< ::x10::util::HashMap< ::x10::lang::String*, ::au::edu::anu::chem::AtomInfo__AtomProps*>*>();
    FMGL(bySpecies) = buf.read< ::x10::lang::Rail< ::au::edu::anu::chem::AtomInfo__AtomProps* >*>();
}

::x10aux::RuntimeType au::edu::anu::chem::AtomInfo::rtt;
void au::edu::anu::chem::AtomInfo::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.AtomInfo",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32445("F");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32454("Ar");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32450("Si");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32441("B");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32457("Br");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32442("C");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32456("Ca");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32443("N");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32444("O");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32437("H");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32455("K");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32453("Cl");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32448("Mg");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32451("P");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32440("Be");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32452("S");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32439("Li");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32446("Ne");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32458("unknown species ");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32447("Na");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32438("He");
::x10::lang::String au::edu::anu::chem::AtomInfo_Strings::sl__32449("Al");

/* END of AtomInfo */
/*************************************************/
/*************************************************/
/* START of AtomInfo$AtomProps */
#include <au/edu/anu/chem/AtomInfo__AtomProps.h>

#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 24 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
void au::edu::anu::chem::AtomInfo__AtomProps::_constructor(::x10::lang::String* symbol,
                                                           x10_int atomicNumber,
                                                           x10_double covalentRadius,
                                                           x10_double vdWRadius,
                                                           x10_double atomicMass) {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    FMGL(symbol) = symbol;
    FMGL(atomicNumber) = atomicNumber;
    FMGL(covalentRadius) = covalentRadius;
    FMGL(vdWRadius) = vdWRadius;
    FMGL(atomicMass) = atomicMass;
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
    ::au::edu::anu::chem::AtomInfo__AtomProps* this__9939 =
      this;
    
}
::au::edu::anu::chem::AtomInfo__AtomProps* au::edu::anu::chem::AtomInfo__AtomProps::_make(
  ::x10::lang::String* symbol, x10_int atomicNumber, x10_double covalentRadius,
  x10_double vdWRadius, x10_double atomicMass) {
    ::au::edu::anu::chem::AtomInfo__AtomProps* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps();
    this_->_constructor(symbol, atomicNumber, covalentRadius,
    vdWRadius, atomicMass);
    return this_;
}



//#line 23 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/AtomInfo.x10"
::au::edu::anu::chem::AtomInfo__AtomProps* au::edu::anu::chem::AtomInfo__AtomProps::au__edu__anu__chem__AtomInfo__AtomProps____this__au__edu__anu__chem__AtomInfo__AtomProps(
  ) {
    return this;
    
}
void au::edu::anu::chem::AtomInfo__AtomProps::__fieldInitializers_au_edu_anu_chem_AtomInfo_AtomProps(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::chem::AtomInfo__AtomProps::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::AtomInfo__AtomProps::_deserializer);

void au::edu::anu::chem::AtomInfo__AtomProps::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(symbol));
    buf.write(this->FMGL(atomicNumber));
    buf.write(this->FMGL(covalentRadius));
    buf.write(this->FMGL(vdWRadius));
    buf.write(this->FMGL(atomicMass));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::AtomInfo__AtomProps::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::AtomInfo__AtomProps* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::AtomInfo__AtomProps>()) ::au::edu::anu::chem::AtomInfo__AtomProps();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::AtomInfo__AtomProps::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(symbol) = buf.read< ::x10::lang::String*>();
    FMGL(atomicNumber) = buf.read<x10_int>();
    FMGL(covalentRadius) = buf.read<x10_double>();
    FMGL(vdWRadius) = buf.read<x10_double>();
    FMGL(atomicMass) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::chem::AtomInfo__AtomProps::rtt;
void au::edu::anu::chem::AtomInfo__AtomProps::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.AtomInfo.AtomProps",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of AtomInfo$AtomProps */
/*************************************************/
