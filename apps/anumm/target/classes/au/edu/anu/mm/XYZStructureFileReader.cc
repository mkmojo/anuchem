/*************************************************/
/* START of XYZStructureFileReader */
#include <au/edu/anu/mm/XYZStructureFileReader.h>

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
#include <x10/lang/IllegalArgumentException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10x/vector/Point3d.h>
#include <x10/io/InputStreamReader.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
void au::edu::anu::mm::XYZStructureFileReader::_constructor(::x10::lang::String* fileName) {
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    ::au::edu::anu::mm::XYZStructureFileReader* this__19979 = this;
    ::x10aux::nullCheck(this__19979)->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 29 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    this->FMGL(fileName) = fileName;
}
::au::edu::anu::mm::XYZStructureFileReader* au::edu::anu::mm::XYZStructureFileReader::_make(
  ::x10::lang::String* fileName) {
    ::au::edu::anu::mm::XYZStructureFileReader* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::XYZStructureFileReader>()) ::au::edu::anu::mm::XYZStructureFileReader();
    this_->_constructor(fileName);
    return this_;
}



//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>*
  au::edu::anu::mm::XYZStructureFileReader::readMolecule(::x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >* speciesSpecs) {
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    ::x10::io::FileReader* file =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
    (file)->::x10::io::FileReader::_constructor((__extension__ ({
                                                    ::x10::io::File* alloc__8070 =
                                                       (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                    (alloc__8070)->::x10::io::File::_constructor(
                                                      this->FMGL(fileName));
                                                    alloc__8070;
                                                }))
                                                );
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    x10_int numAtoms = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(file->readLine())->x10::lang::String::trim());
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* title = ::x10::lang::StringHelper::split((&::au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20198), file->readLine());
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule =
       (new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*> >()) ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>());
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Molecule.x10"
    ::x10::lang::String* name__19986 = ::x10aux::nullCheck(title)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                         ((x10_long)0ll));
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/Molecule.x10"
    (molecule)->::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
      name__19986, ((x10_int)0), ((x10_int)1));
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(numAtoms))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* words =
              ::x10::lang::StringHelper::split((&::au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20198), file->readLine());
            
            //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            ::x10::lang::String* symbol = ::x10aux::nullCheck(words)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                            ((x10_long)0ll));
            
            //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            x10_int species = ((x10_int)-1);
            
            //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            ::au::edu::anu::mm::SpeciesSpec* speciesSpec =
              ::x10aux::class_cast_unchecked< ::au::edu::anu::mm::SpeciesSpec*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
            //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            x10_long i__8074max__19983 = (((x10_long)(::x10aux::nullCheck(speciesSpecs)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__19984;
                for (i__19984 = ((x10_long)0ll); ((i__19984) <= (i__8074max__19983));
                     i__19984 = ((i__19984) + (((x10_long)1ll))))
                {
                    x10_long j__19985 = i__19984;
                    
                    //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                    speciesSpec = ::x10aux::nullCheck(speciesSpecs)->x10::lang::Rail< ::au::edu::anu::mm::SpeciesSpec* >::__apply(
                                    j__19985);
                    
                    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                    if (((!::x10aux::struct_equals(speciesSpec,
                                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                        ::x10aux::equals(symbol,::x10aux::nullCheck(speciesSpec)->FMGL(name))))
                    {
                        
                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                        species = ((x10_int) (j__19985));
                        
                        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            if ((::x10aux::struct_equals(species, ((x10_int)-1))))
            {
                
                //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make(::x10::lang::String::__plus((&::au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20199), symbol))));
            }
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20200), ::x10aux::nullCheck(speciesSpec)->FMGL(number)), (&::au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20198)), ::x10aux::nullCheck(speciesSpec)->FMGL(name)), (&::au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20198)), ::x10aux::nullCheck(speciesSpec)->FMGL(mass))));
            
            //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
            ::x10aux::nullCheck(molecule)->addAtom((__extension__ ({
                                                       ::au::edu::anu::chem::mm::MMAtom* alloc__8072 =
                                                         
                                                       (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
                                                       (alloc__8072)->::au::edu::anu::chem::mm::MMAtom::_constructor(
                                                         species,
                                                         (__extension__ ({
                                                             
                                                             //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
                                                             ::x10x::vector::Point3d alloc__8071 =
                                                               
                                                             ::x10x::vector::Point3d::_alloc();
                                                             
                                                             //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                             x10_double i__19980 =
                                                               ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(words)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                             ((x10_long)1ll)))->x10::lang::String::trim());
                                                             x10_double j__19981 =
                                                               ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(words)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                             ((x10_long)2ll)))->x10::lang::String::trim());
                                                             x10_double k__19982 =
                                                               ::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(words)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                             ((x10_long)3ll)))->x10::lang::String::trim());
                                                             
                                                             //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                             alloc__8071->FMGL(i) =
                                                               i__19980;
                                                             alloc__8071->FMGL(j) =
                                                               j__19981;
                                                             alloc__8071->FMGL(k) =
                                                               k__19982;
                                                             alloc__8071;
                                                         }))
                                                         ,
                                                         ::x10aux::nullCheck(speciesSpec)->FMGL(mass),
                                                         ::x10aux::nullCheck(speciesSpec)->FMGL(charge));
                                                       alloc__8072;
                                                   }))
                                                   );
        }
    }
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    file->close();
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    return molecule;
    
}

//#line 69 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
void au::edu::anu::mm::XYZStructureFileReader::setFileName(
  ::x10::lang::String* fileName) {
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
    this->FMGL(fileName) = fileName;
}

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/anumm/src/au/edu/anu/mm/XYZStructureFileReader.x10"
::au::edu::anu::mm::XYZStructureFileReader* au::edu::anu::mm::XYZStructureFileReader::au__edu__anu__mm__XYZStructureFileReader____this__au__edu__anu__mm__XYZStructureFileReader(
  ) {
    return this;
    
}
void au::edu::anu::mm::XYZStructureFileReader::__fieldInitializers_au_edu_anu_mm_XYZStructureFileReader(
  ) {
    this->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::mm::XYZStructureFileReader::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::mm::XYZStructureFileReader::_deserializer);

void au::edu::anu::mm::XYZStructureFileReader::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(fileName));
    
}

::x10::lang::Reference* ::au::edu::anu::mm::XYZStructureFileReader::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::mm::XYZStructureFileReader* this_ = new (::x10aux::alloc_z< ::au::edu::anu::mm::XYZStructureFileReader>()) ::au::edu::anu::mm::XYZStructureFileReader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::mm::XYZStructureFileReader::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(fileName) = buf.read< ::x10::lang::String*>();
}

::x10aux::RuntimeType au::edu::anu::mm::XYZStructureFileReader::rtt;
void au::edu::anu::mm::XYZStructureFileReader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.mm.XYZStructureFileReader",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20198(" ");
::x10::lang::String au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20199("no species found for symbol ");
::x10::lang::String au::edu::anu::mm::XYZStructureFileReader_Strings::sl__20200("found species ");

/* END of XYZStructureFileReader */
/*************************************************/
