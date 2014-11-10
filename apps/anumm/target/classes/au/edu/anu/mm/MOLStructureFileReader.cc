/*************************************************/
/* START of MOLStructureFileReader */
#include <au/edu/anu/mm/MOLStructureFileReader.h>

#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/mm/SpeciesSpec.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Double.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/chem/BondType.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/io/InputStreamReader.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
void au::edu::anu::mm::MOLStructureFileReader::_constructor(::x10::lang::String* fileName) {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    ::au::edu::anu::mm::MOLStructureFileReader* this__19998 = this;
    ::x10aux::nullCheck(this__19998)->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    this->FMGL(fileName) = fileName;
}
::au::edu::anu::mm::MOLStructureFileReader* au::edu::anu::mm::MOLStructureFileReader::_make(
  ::x10::lang::String* fileName) {
    ::au::edu::anu::mm::MOLStructureFileReader* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::MOLStructureFileReader>()) ::au::edu::anu::mm::MOLStructureFileReader();
    this_->_constructor(fileName);
    return this_;
}



//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>*
  au::edu::anu::mm::MOLStructureFileReader::readMolecule(::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* speciesSpecs) {
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    ::x10::io::FileReader* file =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
    (file)->::x10::io::FileReader::_constructor((__extension__ ({
                                                    ::x10::io::File* alloc__8226 =
                                                       (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                    (alloc__8226)->::x10::io::File::_constructor(
                                                      this->FMGL(fileName));
                                                    alloc__8226;
                                                }))
                                                );
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    ::x10::lang::String* title = file->readLine();
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    file->readLine();
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    file->readLine();
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    ::x10::lang::String* numAtomsLine = file->readLine();
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    x10_int numAtoms = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(::x10aux::nullCheck(numAtomsLine)->x10::lang::String::substring(
                                                                               ((x10_int)0),
                                                                               ((x10_int)3)))->x10::lang::String::trim());
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule =
       (new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*> >()) ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>());
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Molecule.x10"
    ::x10::lang::String* name__20005 = title;
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Molecule.x10"
    (molecule)->::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
      name__20005, ((x10_int)0), ((x10_int)1));
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(numAtoms))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            ::x10::lang::String* line = file->readLine();
            
            //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            x10_double x = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                         ((x10_int)0),
                                                                                         ((x10_int)10)))->x10::lang::String::trim());
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            x10_double y = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                         ((x10_int)10),
                                                                                         ((x10_int)20)))->x10::lang::String::trim());
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            x10_double z = ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                         ((x10_int)20),
                                                                                         ((x10_int)30)))->x10::lang::String::trim());
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            ::x10::lang::String* symbol = ::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                ((x10_int)31),
                                                                ((x10_int)34)))->x10::lang::String::trim();
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            x10_int species = ((x10_int)-1);
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            ::au::edu::anu::mm::SpeciesSpec* speciesSpec =
              ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::SpeciesSpec*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            x10_long i__8230max__20002 = (((x10_long)(::x10aux::nullCheck(speciesSpecs)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__20003;
                for (i__20003 = ((x10_long)0ll); ((i__20003) <= (i__8230max__20002));
                     i__20003 = ((i__20003) + (((x10_long)1ll))))
                {
                    x10_long j__20004 = i__20003;
                    
                    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                    speciesSpec = ::x10aux::nullCheck(speciesSpecs)->x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >::__apply(
                                    j__20004);
                    
                    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                    if (((!::x10aux::struct_equals(speciesSpec,
                                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                        ::x10aux::equals(symbol,::x10aux::nullCheck(speciesSpec)->FMGL(name))))
                    {
                        
                        //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                        species = ((x10_int) (j__20004));
                        
                        //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            if ((::x10aux::struct_equals(species, ((x10_int)-1))))
            {
                
                //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make(::x10::lang::String::__plus((&::au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20207), symbol))));
            }
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            ::x10aux::nullCheck(molecule)->addAtom((__extension__ ({
                                                       ::au::edu::anu::chem::mm::MMAtom* alloc__8228 =
                                                         
                                                       (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
                                                       (alloc__8228)->::au::edu::anu::chem::mm::MMAtom::_constructor(
                                                         species,
                                                         (__extension__ ({
                                                             ::x10x::vector::Point3d alloc__8227 =
                                                               
                                                             ::x10x::vector::Point3d::_alloc();
                                                             
                                                             //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                             x10_double i__19999 =
                                                               x;
                                                             x10_double j__20000 =
                                                               y;
                                                             x10_double k__20001 =
                                                               z;
                                                             
                                                             //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                             alloc__8227->FMGL(i) =
                                                               i__19999;
                                                             alloc__8227->FMGL(j) =
                                                               j__20000;
                                                             alloc__8227->FMGL(k) =
                                                               k__20001;
                                                             alloc__8227;
                                                         }))
                                                         ,
                                                         ::x10aux::nullCheck(speciesSpec)->FMGL(mass),
                                                         ::x10aux::nullCheck(speciesSpec)->FMGL(charge));
                                                       alloc__8228;
                                                   }))
                                                   );
        }
    }
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    ::x10::lang::String* line = file->readLine();
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    while (((((x10_long)(::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                           (&::au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20208))))) < (((x10_long)0ll))))
    {
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        x10_long firstAtomIndex = ((((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                                        ((x10_int)0),
                                                                                                        ((x10_int)3)))->x10::lang::String::trim())))) - (((x10_long)1ll)));
        
        //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        x10_long secondAtomIndex = ((((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                                         ((x10_int)3),
                                                                                                         ((x10_int)6)))->x10::lang::String::trim())))) - (((x10_long)1ll)));
        
        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        x10_int bondVal = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                  ((x10_int)6),
                                                                                  ((x10_int)9)))->x10::lang::String::trim());
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        ::au::edu::anu::chem::BondType bondType;
        
        //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        switch (bondVal) {
            
            //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            case ((x10_int)1): ;
            {
                
                //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                bondType = ::au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__get)();
                
                //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                break;
            }
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            case ((x10_int)2): ;
            {
                
                //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                bondType = ::au::edu::anu::chem::BondType::FMGL(DOUBLE_BOND__get)();
                
                //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                break;
            }
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            case ((x10_int)3): ;
            {
                
                //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                bondType = ::au::edu::anu::chem::BondType::FMGL(TRIPLE_BOND__get)();
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                break;
            }
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            case ((x10_int)4): ;
            {
                
                //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                bondType = ::au::edu::anu::chem::BondType::FMGL(AROMATIC_BOND__get)();
                
                //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                break;
            }
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
            default: ;
            {
                
                //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20209), bondVal), (&::au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20210))));
                
                //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
                bondType = ::au::edu::anu::chem::BondType::FMGL(SINGLE_BOND__get)();
            }
        }
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        ::au::edu::anu::chem::mm::MMAtom* firstAtom = ::x10aux::nullCheck(molecule)->getAtom(
                                                        firstAtomIndex);
        
        //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        ::au::edu::anu::chem::mm::MMAtom* secondAtom = ::x10aux::nullCheck(molecule)->getAtom(
                                                         secondAtomIndex);
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        ::x10aux::nullCheck(firstAtom)->addBond(bondType,
                                                reinterpret_cast< ::au::edu::anu::chem::Atom*>(secondAtom));
        
        //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
        line = file->readLine();
    }
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    file->close();
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    return molecule;
    
}

//#line 103 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
void au::edu::anu::mm::MOLStructureFileReader::setFileName(
  ::x10::lang::String* fileName) {
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
    this->FMGL(fileName) = fileName;
}

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/MOLStructureFileReader.x10"
::au::edu::anu::mm::MOLStructureFileReader* au::edu::anu::mm::MOLStructureFileReader::au__edu__anu__mm__MOLStructureFileReader____this__au__edu__anu__mm__MOLStructureFileReader(
  ) {
    return this;
    
}
void au::edu::anu::mm::MOLStructureFileReader::__fieldInitializers_au_edu_anu_mm_MOLStructureFileReader(
  ) {
    this->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::mm::MOLStructureFileReader::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::MOLStructureFileReader::_deserializer);

void au::edu::anu::mm::MOLStructureFileReader::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(fileName));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::MOLStructureFileReader::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::MOLStructureFileReader* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::MOLStructureFileReader>()) ::au::edu::anu::mm::MOLStructureFileReader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::MOLStructureFileReader::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(fileName) = buf.read< ::x10::lang::String*>();
}

::x10aux::RuntimeType au::edu::anu::mm::MOLStructureFileReader::rtt;
void au::edu::anu::mm::MOLStructureFileReader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.MOLStructureFileReader",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20209("Bond type ");
::x10::lang::String au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20208("END");
::x10::lang::String au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20207("no species found for symbol ");
::x10::lang::String au::edu::anu::mm::MOLStructureFileReader_Strings::sl__20210(" not found. Defaulting to single bond.");

/* END of MOLStructureFileReader */
/*************************************************/
