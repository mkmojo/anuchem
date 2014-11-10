/*************************************************/
/* START of GromacsStructureFileReader */
#include <au/edu/anu/chem/mm/GromacsStructureFileReader.h>

#include <x10x/vector/Vector3d.h>
#include <x10/lang/String.h>
#include <x10/lang/Zero.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Double.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10x/vector/Point3d.h>
#include <x10/io/InputStreamReader.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 32 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"

//#line 35 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
void au::edu::anu::chem::mm::GromacsStructureFileReader::_constructor(::x10::lang::String* fileName) {
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    ::au::edu::anu::chem::mm::GromacsStructureFileReader* this__24859 = this;
    ::x10aux::nullCheck(this__24859)->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__24859)->FMGL(boxEdges) = ::x10aux::zeroValue< ::x10x::vector::Vector3d >();
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    this->FMGL(fileName) = fileName;
}
::au::edu::anu::chem::mm::GromacsStructureFileReader* au::edu::anu::chem::mm::GromacsStructureFileReader::_make(
  ::x10::lang::String* fileName) {
    ::au::edu::anu::chem::mm::GromacsStructureFileReader* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::GromacsStructureFileReader>()) ::au::edu::anu::chem::mm::GromacsStructureFileReader();
    this_->_constructor(fileName);
    return this_;
}



//#line 39 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>*
  au::edu::anu::chem::mm::GromacsStructureFileReader::readMolecule(
  ) {
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    ::x10::io::FileReader* file =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
    (file)->::x10::io::FileReader::_constructor((__extension__ ({
                                                    ::x10::io::File* alloc__24467 =
                                                       (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                    (alloc__24467)->::x10::io::File::_constructor(
                                                      this->FMGL(fileName));
                                                    alloc__24467;
                                                }))
                                                );
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* title = ::x10::lang::StringHelper::split((&::au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32645), file->readLine());
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    x10_int numAtoms = ::x10::lang::IntNatives::parseInt(file->readLine());
    
    //#line 43 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>* molecule =
       (new (::x10aux::alloc_z< ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*> >()) ::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>());
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    ::x10::lang::String* name__24866 = ::x10aux::nullCheck(title)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                         ((x10_long)0ll));
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/Molecule.x10"
    (molecule)->::au::edu::anu::chem::Molecule< ::au::edu::anu::chem::mm::MMAtom*>::_constructor(
      name__24866, ((x10_int)0), ((x10_int)1));
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (numAtoms)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 45 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            ::x10::lang::String* line = file->readLine();
            
            //#line 46 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            x10_int species = ((x10_int)-1);
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            ::x10::lang::String* atomType = ::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                  ((x10_int)10),
                                                                  ((x10_int)15)))->x10::lang::String::trim();
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            x10_double charge;
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            x10_double mass;
            
            //#line 50 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            if (::x10aux::nullCheck(atomType)->x10::lang::String::startsWith(
                  (&::au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32646)))
            {
                
                //#line 51 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                species = ((x10_int)0);
                
                //#line 52 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                charge = -0.82;
                
                //#line 53 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                mass = 15.99491461956;
            } else 
            //#line 54 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            if (::x10aux::nullCheck(atomType)->x10::lang::String::startsWith(
                  (&::au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32647)))
            {
                
                //#line 55 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                species = ((x10_int)1);
                
                //#line 56 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                charge = 0.41;
                
                //#line 57 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                mass = 1.00794;
            } else {
                
                //#line 59 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32648), ((((x10_long)(i))) + (((x10_long)2ll)))), (&::au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32649)), atomType)));
                
                //#line 60 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                mass = 0.0;
                
                //#line 61 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                charge = 0.0;
            }
            
            //#line 64 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
            ::x10aux::nullCheck(molecule)->addAtom((__extension__ ({
                                                       ::au::edu::anu::chem::mm::MMAtom* alloc__24469 =
                                                         
                                                       (new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::MMAtom>()) ::au::edu::anu::chem::mm::MMAtom());
                                                       (alloc__24469)->::au::edu::anu::chem::mm::MMAtom::_constructor(
                                                         species,
                                                         (__extension__ ({
                                                             
                                                             //#line 65 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
                                                             ::x10x::vector::Point3d alloc__24468 =
                                                               
                                                             ::x10x::vector::Point3d::_alloc();
                                                             
                                                             //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                             x10_double i__24860 =
                                                               ((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                                           ((x10_int)20),
                                                                                                           ((x10_int)28)))) * (10.0));
                                                             x10_double j__24861 =
                                                               ((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                                           ((x10_int)28),
                                                                                                           ((x10_int)36)))) * (10.0));
                                                             x10_double k__24862 =
                                                               ((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(line)->x10::lang::String::substring(
                                                                                                           ((x10_int)36),
                                                                                                           ((x10_int)44)))) * (10.0));
                                                             
                                                             //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                             alloc__24468->FMGL(i) =
                                                               i__24860;
                                                             alloc__24468->FMGL(j) =
                                                               j__24861;
                                                             alloc__24468->FMGL(k) =
                                                               k__24862;
                                                             alloc__24468;
                                                         }))
                                                         ,
                                                         mass,
                                                         charge);
                                                       alloc__24469;
                                                   }))
                                                   );
        }
    }
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    ::x10::lang::String* boxLine = file->readLine();
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    x10_double x = ((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(boxLine)->x10::lang::String::substring(
                                                                                   ((x10_int)0),
                                                                                   ((x10_int)10)))->x10::lang::String::trim())) * (10.0));
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    x10_double y = ((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(boxLine)->x10::lang::String::substring(
                                                                                   ((x10_int)10),
                                                                                   ((x10_int)20)))->x10::lang::String::trim())) * (10.0));
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    x10_double z = ((::x10::lang::DoubleNatives::parseDouble(::x10aux::nullCheck(::x10aux::nullCheck(boxLine)->x10::lang::String::substring(
                                                                                   ((x10_int)20),
                                                                                   ((x10_int)30)))->x10::lang::String::trim())) * (10.0));
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    this->FMGL(boxEdges) = (__extension__ ({
        ::x10x::vector::Vector3d alloc__24470 =  ::x10x::vector::Vector3d::_alloc();
        
        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        x10_double i__24863 = x;
        x10_double j__24864 = y;
        x10_double k__24865 = z;
        
        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        alloc__24470->FMGL(i) = i__24863;
        alloc__24470->FMGL(j) = j__24864;
        alloc__24470->FMGL(k) = k__24865;
        alloc__24470;
    }))
    ;
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    file->close();
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    return molecule;
    
}

//#line 85 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
void au::edu::anu::chem::mm::GromacsStructureFileReader::setFileName(
  ::x10::lang::String* fileName) {
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
    this->FMGL(fileName) = fileName;
}

//#line 31 "/localdisk/qqiu/workspace/anuchem/anu-chem/src/au/edu/anu/chem/mm/GromacsStructureFileReader.x10"
::au::edu::anu::chem::mm::GromacsStructureFileReader* au::edu::anu::chem::mm::GromacsStructureFileReader::au__edu__anu__chem__mm__GromacsStructureFileReader____this__au__edu__anu__chem__mm__GromacsStructureFileReader(
  ) {
    return this;
    
}
void au::edu::anu::chem::mm::GromacsStructureFileReader::__fieldInitializers_au_edu_anu_chem_mm_GromacsStructureFileReader(
  ) {
    this->FMGL(fileName) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(boxEdges) = ::x10aux::zeroValue< ::x10x::vector::Vector3d >();
}
const ::x10aux::serialization_id_t au::edu::anu::chem::mm::GromacsStructureFileReader::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::chem::mm::GromacsStructureFileReader::_deserializer);

void au::edu::anu::chem::mm::GromacsStructureFileReader::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(fileName));
    buf.write(this->FMGL(boxEdges));
    
}

::x10::lang::Reference* ::au::edu::anu::chem::mm::GromacsStructureFileReader::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::chem::mm::GromacsStructureFileReader* this_ = new (::x10aux::alloc_z< ::au::edu::anu::chem::mm::GromacsStructureFileReader>()) ::au::edu::anu::chem::mm::GromacsStructureFileReader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::chem::mm::GromacsStructureFileReader::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(fileName) = buf.read< ::x10::lang::String*>();
    FMGL(boxEdges) = buf.read< ::x10x::vector::Vector3d>();
}

::x10aux::RuntimeType au::edu::anu::chem::mm::GromacsStructureFileReader::rtt;
void au::edu::anu::chem::mm::GromacsStructureFileReader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.chem.mm.GromacsStructureFileReader",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32645(" ");
::x10::lang::String au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32646("OW");
::x10::lang::String au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32648("Unknown atom type line ");
::x10::lang::String au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32649(": ");
::x10::lang::String au::edu::anu::chem::mm::GromacsStructureFileReader_Strings::sl__32647("HW");

/* END of GromacsStructureFileReader */
/*************************************************/
