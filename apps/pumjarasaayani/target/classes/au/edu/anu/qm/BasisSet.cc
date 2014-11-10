/*************************************************/
/* START of BasisSet */
#include <au/edu/anu/qm/BasisSet.h>

#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/String.h>
#include <x10/util/HashMap.h>
#include <au/edu/anu/qm/AtomicBasis.h>
#include <x10/matrix/DenseMatrix.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/lang/Exception.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Boolean.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/io/InputStreamReader.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/util/StringSplitter.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/Orbital.h>
#include <au/edu/anu/chem/AtomInfo__AtomProps.h>
#include <x10/io/EOFException.h>
#include <x10/matrix/Matrix.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
void au::edu::anu::qm::BasisSet::_constructor(::x10::lang::String* name, ::x10::lang::String* basisDir) {
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::au::edu::anu::qm::BasisSet* this__128271 = this;
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    this->FMGL(basisInfo) = (__extension__ ({
        ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::AtomicBasis*>* alloc__101444 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::AtomicBasis*> >()) ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::AtomicBasis*>());
        (alloc__101444)->::x10::util::HashMap<x10_int, ::au::edu::anu::qm::AtomicBasis*>::_constructor();
        alloc__101444;
    }))
    ;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    this->FMGL(basisAtomicDensity) = (__extension__ ({
        ::x10::util::HashMap<x10_int, ::x10::matrix::DenseMatrix*>* alloc__101445 =
           (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_int, ::x10::matrix::DenseMatrix*> >()) ::x10::util::HashMap<x10_int, ::x10::matrix::DenseMatrix*>());
        (alloc__101445)->::x10::util::HashMap<x10_int, ::x10::matrix::DenseMatrix*>::_constructor();
        alloc__101445;
    }))
    ;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    this->FMGL(name) = name;
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    this->FMGL(roZ) = jd->FMGL(roZ);
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    try {
        
        //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
        this->init(name, basisDir);
    }
    catch (::x10::lang::CheckedThrowable* __exc242) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc242)) {
            ::x10::lang::Exception* e = static_cast< ::x10::lang::Exception*>(__exc242);
            {
                
                //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::BasisSet_Strings::sl__149586), basisDir),
                                                                                           reinterpret_cast< ::x10::lang::CheckedThrowable*>(e))));
            }
        } else {
            throw;
        }
    }
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    if (::x10aux::equals(jd->FMGL(guess),::au::edu::anu::qm::JobDefaults::FMGL(GUESS_SAD__get)()))
    {
        
        //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
        try {
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            this->initDensity(name, basisDir);
        }
        catch (::x10::lang::CheckedThrowable* __exc243) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc243)) {
                ::x10::lang::Exception* e = static_cast< ::x10::lang::Exception*>(__exc243);
                {
                    
                    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::BasisSet_Strings::sl__149587), basisDir),
                                                                                               reinterpret_cast< ::x10::lang::CheckedThrowable*>(e))));
                }
            } else {
                throw;
            }
        }
    }
    
}
::au::edu::anu::qm::BasisSet* au::edu::anu::qm::BasisSet::_make(
  ::x10::lang::String* name, ::x10::lang::String* basisDir)
{
    ::au::edu::anu::qm::BasisSet* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::BasisSet>()) ::au::edu::anu::qm::BasisSet();
    this_->_constructor(name, basisDir);
    return this_;
}



//#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
void au::edu::anu::qm::BasisSet::init(::x10::lang::String* name,
                                      ::x10::lang::String* basisDir) {
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::x10::lang::String* fileName = ::x10::lang::String::__plus(::x10::lang::String::__plus(basisDir, ((x10_char)'/')), name);
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::x10::io::FileReader* fil =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
    (fil)->::x10::io::FileReader::_constructor((__extension__ ({
                                                   ::x10::io::File* alloc__101446 =
                                                      (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                   (alloc__101446)->::x10::io::File::_constructor(
                                                     fileName);
                                                   alloc__101446;
                                               }))
                                               );
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    while ((!::x10aux::struct_equals(this->readCenterDefinitionBlock(
                                       fil), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        ;
    }
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    fil->close();
}

//#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
x10_boolean au::edu::anu::qm::BasisSet::isComment(::x10::lang::String* line) {
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    return ::x10aux::nullCheck(line)->x10::lang::String::startsWith(
             (&::au::edu::anu::qm::BasisSet_Strings::sl__149588));
    
}

//#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
x10_boolean au::edu::anu::qm::BasisSet::isSectionDivider(
  ::x10::lang::String* line) {
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    return (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
              (&::au::edu::anu::qm::BasisSet_Strings::sl__149589)) ||
    ::x10aux::nullCheck(line)->x10::lang::String::startsWith(
      (&::au::edu::anu::qm::BasisSet_Strings::sl__149590)));
    
}

//#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
::au::edu::anu::qm::AtomicBasis* au::edu::anu::qm::BasisSet::readCenterDefinitionBlock(
  ::x10::io::FileReader* fil) {
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    try {
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
        ::x10::lang::String* line = ::x10aux::nullCheck(fil)->readLine();
        
        //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
        while ((!::x10aux::struct_equals(line, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            line = ::x10aux::nullCheck(line)->x10::lang::String::trim();
            
            //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            if ((((((x10_long)(::x10aux::nullCheck(line)->x10::lang::String::length()))) > (((x10_long)0ll))) &&
                !(((__extension__ ({
                    ::au::edu::anu::qm::BasisSet* this__127985 =
                      this;
                    
                    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    ::x10::lang::String* line__127984 = line;
                    ::x10aux::nullCheck(line__127984)->x10::lang::String::startsWith(
                      (&::au::edu::anu::qm::BasisSet_Strings::sl__149588));
                }))
                 || this->isSectionDivider(line))))) {
                
                //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::x10::lang::Rail< ::x10::lang::String* >* centerIdentiferWords =
                  ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                    line);
                
                //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::x10::lang::String* symbol = ::x10aux::nullCheck(centerIdentiferWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                ((x10_long)0ll));
                
                //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::x10::util::ArrayList< ::au::edu::anu::qm::Orbital>* orbitalList =
                   (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::Orbital> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::Orbital>());
                (orbitalList)->::x10::util::ArrayList< ::au::edu::anu::qm::Orbital>::_constructor();
                
                //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                line = ::x10aux::nullCheck(fil)->readLine();
                
                //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                while (!(this->isSectionDivider(line))) {
                    
                    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    ::x10::lang::Rail< ::x10::lang::String* >* shellWords =
                      ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                        line);
                    
                    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    ::x10::lang::String* shellType = ::x10aux::nullCheck(shellWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)0ll));
                    
                    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    x10_int numGaussians = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(shellWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                               ((x10_long)1ll)));
                    
                    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    x10_double scaleFactor = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(shellWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                       ((x10_long)2ll)));
                    
                    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    if (::x10aux::equals(shellType,(&::au::edu::anu::qm::BasisSet_Strings::sl__149591)))
                    {
                        
                        //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        ::x10::lang::Rail< x10_double >* exps =
                          ::x10::lang::Rail< x10_double >::_make(((x10_long)(numGaussians)));
                        
                        //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        ::x10::lang::Rail< x10_double >* sCoeffs =
                          ::x10::lang::Rail< x10_double >::_make(((x10_long)(numGaussians)));
                        
                        //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        ::x10::lang::Rail< x10_double >* pCoeffs =
                          ::x10::lang::Rail< x10_double >::_make(((x10_long)(numGaussians)));
                        
                        //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        x10_long i__101452max__128273 = ((((x10_long)(numGaussians))) - (((x10_long)1ll)));
                        {
                            x10_long i__128274;
                            for (i__128274 = ((x10_long)0ll);
                                 ((i__128274) <= (i__101452max__128273));
                                 i__128274 = ((i__128274) + (((x10_long)1ll))))
                            {
                                x10_long i__128275 = i__128274;
                                
                                //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                line = ::x10aux::nullCheck(fil)->readLine();
                                
                                //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                ::x10::lang::Rail< ::x10::lang::String* >* gaussianWords__128272 =
                                  ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                                    line);
                                
                                //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                exps->x10::lang::Rail< x10_double >::__set(
                                  i__128275, ((((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(gaussianWords__128272)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                           ((x10_long)0ll)))) * (this->FMGL(roZ)))) * (this->FMGL(roZ))));
                                
                                //#line 111 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                sCoeffs->x10::lang::Rail< x10_double >::__set(
                                  i__128275, ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(gaussianWords__128272)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                       ((x10_long)1ll))));
                                
                                //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                pCoeffs->x10::lang::Rail< x10_double >::__set(
                                  i__128275, ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(gaussianWords__128272)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                       ((x10_long)2ll))));
                            }
                        }
                        
                        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        orbitalList->add((__extension__ ({
                                             ::au::edu::anu::qm::Orbital alloc__101447 =
                                                ::au::edu::anu::qm::Orbital::_alloc();
                                             (alloc__101447)->::au::edu::anu::qm::Orbital::_constructor(
                                               (&::au::edu::anu::qm::BasisSet_Strings::sl__149592),
                                               exps, sCoeffs);
                                             alloc__101447;
                                         }))
                                         );
                        
                        //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        orbitalList->add((__extension__ ({
                                             ::au::edu::anu::qm::Orbital alloc__101448 =
                                                ::au::edu::anu::qm::Orbital::_alloc();
                                             (alloc__101448)->::au::edu::anu::qm::Orbital::_constructor(
                                               (&::au::edu::anu::qm::BasisSet_Strings::sl__149593),
                                               exps, pCoeffs);
                                             alloc__101448;
                                         }))
                                         );
                    } else {
                        
                        //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        ::x10::lang::Rail< x10_double >* exps =
                          ::x10::lang::Rail< x10_double >::_make(((x10_long)(numGaussians)));
                        
                        //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        ::x10::lang::Rail< x10_double >* coeffs =
                          ::x10::lang::Rail< x10_double >::_make(((x10_long)(numGaussians)));
                        
                        //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        x10_long i__101470max__128277 = ((((x10_long)(numGaussians))) - (((x10_long)1ll)));
                        {
                            x10_long i__128278;
                            for (i__128278 = ((x10_long)0ll);
                                 ((i__128278) <= (i__101470max__128277));
                                 i__128278 = ((i__128278) + (((x10_long)1ll))))
                            {
                                x10_long i__128279 = i__128278;
                                
                                //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                line = ::x10aux::nullCheck(fil)->readLine();
                                
                                //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                ::x10::lang::Rail< ::x10::lang::String* >* gaussianWords__128276 =
                                  ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                                    line);
                                
                                //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                exps->x10::lang::Rail< x10_double >::__set(
                                  i__128279, ((((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(gaussianWords__128276)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                           ((x10_long)0ll)))) * (this->FMGL(roZ)))) * (this->FMGL(roZ))));
                                
                                //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                                coeffs->x10::lang::Rail< x10_double >::__set(
                                  i__128279, ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(gaussianWords__128276)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                       ((x10_long)1ll))));
                            }
                        }
                        
                        //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                        orbitalList->add((__extension__ ({
                                             ::au::edu::anu::qm::Orbital alloc__101449 =
                                                ::au::edu::anu::qm::Orbital::_alloc();
                                             (alloc__101449)->::au::edu::anu::qm::Orbital::_constructor(
                                               shellType,
                                               exps, coeffs);
                                             alloc__101449;
                                         }))
                                         );
                    }
                    
                    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    line = ::x10aux::nullCheck(fil)->readLine();
                }
                
                //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::au::edu::anu::qm::AtomicBasis* atomBasis =
                   (new (::x10aux::alloc_z< ::au::edu::anu::qm::AtomicBasis>()) ::au::edu::anu::qm::AtomicBasis());
                
                //#line 21 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"
                ::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* orbitals__128280 =
                  orbitalList->toRail();
                
                //#line 22 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/AtomicBasis.x10"
                atomBasis->FMGL(orbitals) = orbitals__128280;
                
                //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::au::edu::anu::chem::AtomInfo__AtomProps* species =
                  ai->getSpecies(symbol);
                
                //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                ::x10aux::nullCheck(this->FMGL(basisInfo))->put(
                  ::x10aux::nullCheck(species)->FMGL(atomicNumber),
                  atomBasis);
                
                //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                return atomBasis;
                
            }
            
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            line = ::x10aux::nullCheck(fil)->readLine();
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc248) {
        if (::x10aux::instanceof< ::x10::io::EOFException*>(__exc248)) {
            ::x10::io::EOFException* e = static_cast< ::x10::io::EOFException*>(__exc248);
            {
             
            }
        } else {
            throw;
        }
    }
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    return ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::AtomicBasis*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
void au::edu::anu::qm::BasisSet::initDensity(::x10::lang::String* name,
                                             ::x10::lang::String* basisDir) {
    
    //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::x10::lang::String* fileName = ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(basisDir, ((x10_char)'/')), name), (&::au::edu::anu::qm::BasisSet_Strings::sl__149594));
    
    //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::x10::io::FileReader* fil =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
    (fil)->::x10::io::FileReader::_constructor((__extension__ ({
                                                   ::x10::io::File* alloc__101450 =
                                                      (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                   (alloc__101450)->::x10::io::File::_constructor(
                                                     fileName);
                                                   alloc__101450;
                                               }))
                                               );
    
    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    x10_int noOfAtoms = ::x10::lang::IntNatives::parseInt(fil->readLine());
    
    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (noOfAtoms)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* words =
              ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                fil->readLine());
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            ::x10::lang::String* symbol = ::x10aux::nullCheck(words)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                            ((x10_long)0ll));
            
            //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            x10_int species = ::x10aux::nullCheck(ai->getSpecies(
                                                    symbol))->FMGL(atomicNumber);
            
            //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            x10_int noOfFunctions = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(words)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                        ((x10_long)1ll)));
            
            //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            ::x10::matrix::DenseMatrix* density =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
            (density)->::x10::matrix::DenseMatrix::_constructor(
              ((x10_long)(noOfFunctions)), ((x10_long)(noOfFunctions)));
            
            //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (((x10_long)(noOfFunctions))));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    ::x10::lang::Rail< ::x10::lang::String* >* words1 =
                      ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                        fil->readLine());
                    
                    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
                    {
                        x10_long k;
                        for (k = ((x10_long)0ll); ((k) < (((x10_long)(noOfFunctions))));
                             k = ((k) + (((x10_long)1ll))))
                        {
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__128281 = j;
                            x10_long y__128282 = k;
                            x10_double v__128283 = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(words1)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                             k));
                            x10_double ret__128284;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(density->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__128282) * (density->FMGL(M)))) + (x__128281)),
                              v__128283);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__128284 = v__128283;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__128284;
                        }
                    }
                    
                }
            }
            
            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
            ::x10aux::nullCheck(this->FMGL(basisAtomicDensity))->put(
              species, density);
        }
    }
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
    fil->close();
}

//#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
::x10::lang::String* au::edu::anu::qm::BasisSet::getName(
  ) {
    return this->FMGL(name);
    
}

//#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
::au::edu::anu::qm::AtomicBasis* au::edu::anu::qm::BasisSet::getBasis(
  ::au::edu::anu::chem::Atom* atom) {
    return ::x10aux::nullCheck(this->FMGL(basisInfo))->getOrElse(
             ::x10aux::nullCheck(atom)->FMGL(species), ::x10aux::class_cast_unchecked< ::au::edu::anu::qm::AtomicBasis*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::BasisSet::getDensity(
  ::au::edu::anu::chem::Atom* atom) {
    return ::x10aux::nullCheck(this->FMGL(basisAtomicDensity))->getOrElse(
             ::x10aux::nullCheck(atom)->FMGL(species), ::x10aux::class_cast_unchecked< ::x10::matrix::DenseMatrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisSet.x10"
::au::edu::anu::qm::BasisSet* au::edu::anu::qm::BasisSet::au__edu__anu__qm__BasisSet____this__au__edu__anu__qm__BasisSet(
  ) {
    return this;
    
}
void au::edu::anu::qm::BasisSet::__fieldInitializers_au_edu_anu_qm_BasisSet(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::BasisSet::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::BasisSet::_deserializer);

void au::edu::anu::qm::BasisSet::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(name));
    buf.write(this->FMGL(basisInfo));
    buf.write(this->FMGL(basisAtomicDensity));
    buf.write(this->FMGL(roZ));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::BasisSet::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::BasisSet* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::BasisSet>()) ::au::edu::anu::qm::BasisSet();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::BasisSet::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(name) = buf.read< ::x10::lang::String*>();
    FMGL(basisInfo) = buf.read< ::x10::util::HashMap<x10_int, ::au::edu::anu::qm::AtomicBasis*>*>();
    FMGL(basisAtomicDensity) = buf.read< ::x10::util::HashMap<x10_int, ::x10::matrix::DenseMatrix*>*>();
    FMGL(roZ) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::qm::BasisSet::rtt;
void au::edu::anu::qm::BasisSet::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.BasisSet",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149586("Unable to read basis from : ");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149588("!");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149593("P");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149592("S");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149589("****");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149594(".P");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149587("Unable to read density from : ");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149591("SP");
::x10::lang::String au::edu::anu::qm::BasisSet_Strings::sl__149590("++++");

/* END of BasisSet */
/*************************************************/
