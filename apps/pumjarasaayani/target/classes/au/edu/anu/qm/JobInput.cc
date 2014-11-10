/*************************************************/
/* START of JobInput */
#include <au/edu/anu/qm/JobInput.h>

#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/lang/String.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/util/StringSplitter.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Exception.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <au/edu/anu/chem/AtomInfo__AtomProps.h>
#include <x10x/vector/Point3d.h>
#include <x10/io/EOFException.h>
#include <x10/io/InputStreamReader.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"

//#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
void au::edu::anu::qm::JobInput::make(::x10::lang::String* inpFile) {
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    this->readInp(inpFile);
}

//#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
void au::edu::anu::qm::JobInput::readInp(::x10::lang::String* inpFile) {
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    ::x10::io::FileReader* fil =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
    (fil)->::x10::io::FileReader::_constructor((__extension__ ({
                                                   ::x10::io::File* alloc__47514 =
                                                      (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                   (alloc__47514)->::x10::io::File::_constructor(
                                                     inpFile);
                                                   alloc__47514;
                                               }))
                                               );
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    ::x10::lang::String* title = fil->readLine();
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    ::x10::lang::String* line = fil->readLine();
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* basisWords =
      ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
        line);
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (!(::x10aux::equals(::x10aux::nullCheck(basisWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                             ((x10_long)0ll)),(&::au::edu::anu::qm::JobInput_Strings::sl__148957))))
    {
        
        //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::JobInput_Strings::sl__148958), line))));
    }
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    this->FMGL(basisName) = ::x10aux::nullCheck(basisWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                              ((x10_long)1ll));
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    line = fil->readLine();
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    x10_double conversion = 1.0;
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    x10_int charge = ((x10_int)0);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    x10_int multiplicity = ((x10_int)1);
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
          (&::au::edu::anu::qm::JobInput_Strings::sl__148959)))
    {
        
        //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        charge = ::au::edu::anu::qm::JobInput::getIntParam(
                   line);
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        line = fil->readLine();
        
        //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        ::x10::lang::Rail< ::x10::lang::String* >* multWords =
          ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
            line);
        
        //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        if (!(::x10aux::equals(::x10aux::nullCheck(multWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                 ((x10_long)0ll)),(&::au::edu::anu::qm::JobInput_Strings::sl__148960))))
        {
            
            //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::JobInput_Strings::sl__148961), line))));
        }
        
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        multiplicity = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(multWords)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                           ((x10_long)1ll)));
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        line = fil->readLine();
    }
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
          (&::au::edu::anu::qm::JobInput_Strings::sl__148962)))
    {
        
        //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        conversion = ::au::edu::anu::qm::JobInput::getDoubleParam(
                       line);
        
        //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        line = fil->readLine();
    }
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
          (&::au::edu::anu::qm::JobInput_Strings::sl__148963)))
    {
        
        //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        jd->FMGL(roZ) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                          line);
        
        //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        line = fil->readLine();
    }
    
    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (!(::x10aux::nullCheck(line)->x10::lang::String::startsWith(
            (&::au::edu::anu::qm::JobInput_Strings::sl__148964))))
    {
        
        //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::JobInput_Strings::sl__148965), line))));
    }
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    this->FMGL(molecule) = (__extension__ ({
        ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* alloc__47515 =
           (new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*> >()) ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>());
        (alloc__47515)->::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>::_constructor(
          title, charge, multiplicity);
        alloc__47515;
    }))
    ;
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    line = fil->readLine();
    
    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    try {
        
        //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        while (((!::x10aux::struct_equals(line, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
               !(::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                   (&::au::edu::anu::qm::JobInput_Strings::sl__148966)))))
        {
            
            //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* wrd =
              ::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                line);
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            ::au::edu::anu::chem::AtomInfo__AtomProps* species =
              ai->getSpecies(::x10aux::nullCheck(wrd)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                               ((x10_long)0ll)));
            
            //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            ::x10aux::nullCheck(this->FMGL(molecule))->addAtom(
              (__extension__ ({
                  ::au::edu::anu::qm::QMAtom* alloc__47517 =
                     (new (::x10aux::alloc_z< ::au::edu::anu::qm::QMAtom>()) ::au::edu::anu::qm::QMAtom());
                  (alloc__47517)->::au::edu::anu::qm::QMAtom::_constructor(
                    ::x10aux::nullCheck(species)->FMGL(atomicNumber),
                    (__extension__ ({
                        
                        //#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                        ::x10x::vector::Point3d alloc__47516 =
                           ::x10x::vector::Point3d::_alloc();
                        
                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        x10_double i__59403 = ((((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(wrd)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                            ((x10_long)1ll)))) / (conversion))) / (jd->FMGL(roZ)));
                        x10_double j__59404 = ((((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(wrd)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                            ((x10_long)2ll)))) / (conversion))) / (jd->FMGL(roZ)));
                        x10_double k__59405 = ((((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(wrd)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                            ((x10_long)3ll)))) / (conversion))) / (jd->FMGL(roZ)));
                        
                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                        alloc__47516->FMGL(i) = i__59403;
                        alloc__47516->FMGL(j) = j__59404;
                        alloc__47516->FMGL(k) = k__59405;
                        alloc__47516;
                    }))
                    );
                  alloc__47517;
              }))
              );
            
            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            line = fil->readLine();
        }
        
        //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        line = fil->readLine();
        
        //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
        while (((!::x10aux::struct_equals(line, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
               !(::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                   (&::au::edu::anu::qm::JobInput_Strings::sl__148966)))))
        {
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148967)))
            {
                
                //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(maxIterations) = ::au::edu::anu::qm::JobInput::getIntParam(
                                            line);
            } else 
            //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148968)))
            {
                
                //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(energyTolerance) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                                              line);
            } else 
            //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148969)))
            {
                
                //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(diisStartThreshold) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                                                 line);
            } else 
            //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148970)))
            {
                
                //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(diisConvergenceThreshold) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                                                       line);
            } else 
            //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148971)))
            {
                
                //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(diisSubspaceSize) = ::au::edu::anu::qm::JobInput::getIntParam(
                                               line);
            } else 
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148972)))
            {
                
                //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(gMatrixParallelScheme) = ::au::edu::anu::qm::JobInput::getIntParam(
                                                    line);
            } else 
            //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148973)))
            {
                
                //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(useMta) = true;
            } else 
            //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148974)))
            {
                
                //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(roNK) = ::au::edu::anu::qm::JobInput::getIntParam(
                                   line);
            } else 
            //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148975)))
            {
                
                //#line 134 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(roN) = ::au::edu::anu::qm::JobInput::getIntParam(
                                  line);
            } else 
            //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148976)))
            {
                
                //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(roL) = ::au::edu::anu::qm::JobInput::getIntParam(
                                  line);
            } else 
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148977)))
            {
                
                //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(omega) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                                    line);
            } else 
            //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148978)))
            {
                
                //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(centering) = ::au::edu::anu::qm::JobInput::getIntParam(
                                        line);
            } else 
            //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148979)))
            {
                
                //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(roOn) = ::au::edu::anu::qm::JobInput::getIntParam(
                                   line);
            } else 
            //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148980)))
            {
                
                //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(roThresh) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                                       line);
            } else 
            //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148981)))
            {
                
                //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(thresh) = ::au::edu::anu::qm::JobInput::getDoubleParam(
                                     line);
            } else 
            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148982)))
            {
                
                //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(compareRo) = true;
            } else 
            //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            if (::x10aux::nullCheck(line)->x10::lang::String::startsWith(
                  (&::au::edu::anu::qm::JobInput_Strings::sl__148983)))
            {
                
                //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                jd->FMGL(guess) = ::au::edu::anu::qm::JobInput::getStringParam(
                                    line);
                
                //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                if (!((::x10aux::equals(jd->FMGL(guess),::au::edu::anu::qm::JobDefaults::FMGL(GUESS_SAD__get)()) ||
                    ::x10aux::equals(jd->FMGL(guess),::au::edu::anu::qm::JobDefaults::FMGL(GUESS_CORE__get)()))))
                {
                    
                    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::JobInput_Strings::sl__148984), line))));
                }
                
            } else {
                
                //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::JobInput_Strings::sl__148984), line))));
            }
            
            //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
            line = fil->readLine();
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc41) {
        if (::x10aux::instanceof< ::x10::io::EOFException*>(__exc41)) {
            ::x10::io::EOFException* e = static_cast< ::x10::io::EOFException*>(__exc41);
            {
             
            }
        } else {
            throw;
        }
    }
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    fil->close();
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (((jd->FMGL(roThresh)) > (0.39901297826025206))) {
        jd->FMGL(roThresh) = ::x10::lang::MathNatives::pow(10.0,(-(jd->FMGL(roThresh))));
    }
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (((jd->FMGL(thresh)) > (0.39901297826025206))) {
        jd->FMGL(thresh) = ::x10::lang::MathNatives::pow(10.0,(-(jd->FMGL(thresh))));
    }
    
    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (((jd->FMGL(energyTolerance)) > (0.39901297826025206)))
    {
        jd->FMGL(energyTolerance) = ::x10::lang::MathNatives::pow(10.0,(-(jd->FMGL(energyTolerance))));
    }
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (((jd->FMGL(diisStartThreshold)) > (0.39901297826025206)))
    {
        jd->FMGL(diisStartThreshold) = ::x10::lang::MathNatives::pow(10.0,(-(jd->FMGL(diisStartThreshold))));
    }
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
    if (((jd->FMGL(diisConvergenceThreshold)) > (0.39901297826025206)))
    {
        jd->FMGL(diisConvergenceThreshold) = ::x10::lang::MathNatives::pow(10.0,(-(jd->FMGL(diisConvergenceThreshold))));
    }
    
}

//#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
x10_int au::edu::anu::qm::JobInput::getIntParam(::x10::lang::String* line) {
    return ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                                                                   line))->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                               ((x10_long)1ll)));
    
}

//#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
x10_double au::edu::anu::qm::JobInput::getDoubleParam(::x10::lang::String* line) {
    return ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                                                                         line))->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                     ((x10_long)1ll)));
    
}

//#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
::x10::lang::String* au::edu::anu::qm::JobInput::getStringParam(
  ::x10::lang::String* line) {
    return ::x10aux::nullCheck(::au::edu::anu::util::StringSplitter::splitOnWhitespace(
                                 line))->x10::lang::Rail< ::x10::lang::String* >::__apply(
             ((x10_long)1ll));
    
}

//#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*
  au::edu::anu::qm::JobInput::getMolecule() {
    return this->FMGL(molecule);
    
}

//#line 176 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
::x10::lang::String* au::edu::anu::qm::JobInput::getBasisName(
  ) {
    return this->FMGL(basisName);
    
}

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/JobInput.x10"
::au::edu::anu::qm::JobInput* au::edu::anu::qm::JobInput::au__edu__anu__qm__JobInput____this__au__edu__anu__qm__JobInput(
  ) {
    return this;
    
}
void au::edu::anu::qm::JobInput::_constructor() {
    ::au::edu::anu::qm::JobInput* this__59406 = this;
    ::x10aux::nullCheck(this__59406)->FMGL(molecule) = (::x10aux::class_cast_unchecked< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__59406)->FMGL(basisName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::au::edu::anu::qm::JobInput* au::edu::anu::qm::JobInput::_make(
  ) {
    ::au::edu::anu::qm::JobInput* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::JobInput>()) ::au::edu::anu::qm::JobInput();
    this_->_constructor();
    return this_;
}


void au::edu::anu::qm::JobInput::__fieldInitializers_au_edu_anu_qm_JobInput(
  ) {
    this->FMGL(molecule) = (::x10aux::class_cast_unchecked< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(basisName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::JobInput::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::JobInput::_deserializer);

void au::edu::anu::qm::JobInput::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(molecule));
    buf.write(this->FMGL(basisName));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::JobInput::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::JobInput* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::JobInput>()) ::au::edu::anu::qm::JobInput();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::JobInput::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(molecule) = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
    FMGL(basisName) = buf.read< ::x10::lang::String*>();
}

::x10aux::RuntimeType au::edu::anu::qm::JobInput::rtt;
void au::edu::anu::qm::JobInput::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.JobInput",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148972("gmat_parallel_scheme");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148957("basis");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148963("RO_Z");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148971("diis_subspace_size");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148960("multiplicity");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148978("center");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148975("RO_N");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148974("RO_NK");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148976("RO_L");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148965("Invalid input: must specify molecule. Next line was:\n");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148970("diis_converge");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148973("fragment mta");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148984("Invalid input: ");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148964("molecule");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148967("scf_max");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148966("end");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148982("compare_RO");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148968("scf_converge");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148958("Invalid input: must specify basis. Next line was:\n");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148969("diis_start");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148961("Invalid input: must specify multiplicity for charged molecule. Next line was:\n");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148977("omega");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148962("units");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148979("use_RO");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148959("charge");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148980("RO_thresh");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148983("guess");
::x10::lang::String au::edu::anu::qm::JobInput_Strings::sl__148981("thresh");

/* END of JobInput */
/*************************************************/
