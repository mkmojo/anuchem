/*************************************************/
/* START of OneElectronIntegrals */
#include <au/edu/anu/qm/OneElectronIntegrals.h>

#include <au/edu/anu/qm/BasisFunctions.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/HCore.h>
#include <au/edu/anu/qm/Overlap.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/lang/String.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/matrix/Matrix.h>
#include <x10/lang/Boolean.h>
#include <x10/matrix/DenseMatrix.h>
#include <x10/io/Reader.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/io/IOException.h>
#include <x10/io/FileWriter.h>
#include <x10/io/Writer.h>
#include <x10/io/OutputStreamWriter.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/io/InputStreamReader.h>
#include <au/edu/anu/chem/AtomInfo.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10x/vector/Point3d.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
void au::edu::anu::qm::OneElectronIntegrals::_constructor(::au::edu::anu::qm::BasisFunctions bfs,
                                                          ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                          ::x10::lang::String* inpFile) {
    
    //#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    FMGL(numBasisFunctions) = ::x10aux::nullCheck(bfs->FMGL(basisFunctions))->size();
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::au::edu::anu::qm::OneElectronIntegrals* this__104072 =
      this;
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    this->FMGL(basisFunctions) = bfs;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    this->FMGL(hCore) = (__extension__ ({
        ::au::edu::anu::qm::HCore* alloc__52655 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::HCore>()) ::au::edu::anu::qm::HCore());
        (alloc__52655)->::au::edu::anu::qm::HCore::_constructor(
          this->FMGL(numBasisFunctions));
        alloc__52655;
    }))
    ;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    this->FMGL(overlap) = (__extension__ ({
        ::au::edu::anu::qm::Overlap* alloc__52656 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::Overlap>()) ::au::edu::anu::qm::Overlap());
        (alloc__52656)->::au::edu::anu::qm::Overlap::_constructor(
          this->FMGL(numBasisFunctions));
        alloc__52656;
    }))
    ;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    this->FMGL(roZ) = jd->FMGL(roZ);
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::x10::io::File* file =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
    (file)->::x10::io::File::_constructor(::x10::lang::String::__plus(inpFile, (&::au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149190)));
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::x10::io::FileReader* r = ::x10aux::class_cast_unchecked< ::x10::io::FileReader*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    {
        
        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
        ::x10::lang::CheckedThrowable* throwable__104136 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                
                //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                r = (__extension__ ({
                    ::x10::io::FileReader* alloc__52657 =
                       (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
                    (alloc__52657)->::x10::io::FileReader::_constructor(
                      file);
                    alloc__52657;
                }))
                ;
                
                //#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                x10_long i__52677max__104086 = ((::x10aux::nullCheck(this->FMGL(hCore))->FMGL(M)) - (((x10_long)1ll)));
                {
                    x10_long i__104087;
                    for (i__104087 = ((x10_long)0ll); ((i__104087) <= (i__52677max__104086));
                         i__104087 = ((i__104087) + (((x10_long)1ll))))
                    {
                        x10_long i__104088 = i__104087;
                        
                        //#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        x10_long i__52659max__104083 = ((::x10aux::nullCheck(this->FMGL(hCore))->FMGL(N)) - (((x10_long)1ll)));
                        {
                            x10_long i__104084;
                            for (i__104084 = ((x10_long)0ll);
                                 ((i__104084) <= (i__52659max__104083));
                                 i__104084 = ((i__104084) + (((x10_long)1ll))))
                            {
                                x10_long j__104085 = i__104084;
                                
                                //#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                                ::x10::matrix::DenseMatrix* this__104073 =
                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(overlap));
                                
                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__104074 = i__104088;
                                x10_long y__104075 = j__104085;
                                x10_double v__104076 = ::x10aux::nullCheck(r)->readDouble();
                                x10_double ret__104077;
                                
                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__104073)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                  ((((y__104075) * (::x10aux::nullCheck(this__104073)->FMGL(M)))) + (x__104074)),
                                  v__104076);
                                
                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                ret__104077 = v__104076;
                                
                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                ret__104077;
                                
                                //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                                ::x10::matrix::DenseMatrix* this__104078 =
                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(hCore));
                                
                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__104079 = i__104088;
                                x10_long y__104080 = j__104085;
                                x10_double v__104081 = ((::x10aux::nullCheck(r)->readDouble()) * (this->FMGL(roZ)));
                                x10_double ret__104082;
                                
                                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__104078)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                  ((((y__104080) * (::x10aux::nullCheck(this__104078)->FMGL(M)))) + (x__104079)),
                                  v__104081);
                                
                                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                ret__104082 = v__104081;
                                
                                //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                ret__104082;
                            }
                        }
                        
                    }
                }
                
                //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149191), inpFile), (&::au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149192))));
            }
            catch (::x10::lang::CheckedThrowable* __exc155) {
                if (::x10aux::instanceof< ::x10::io::IOException*>(__exc155)) {
                    ::x10::io::IOException* ioe = static_cast< ::x10::io::IOException*>(__exc155);
                    {
                        
                        //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(ioe));
                        
                        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        ::x10::io::Console::FMGL(OUT__get)()->printf(
                          (&::au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149193));
                        
                        //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        this->compute1E(mol);
                        
                        //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        ::x10::io::FileWriter* w =  (new (::x10aux::alloc_z< ::x10::io::FileWriter>()) ::x10::io::FileWriter());
                        
                        //#line 38 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/io/FileWriter.x10"
                        ::x10::io::File* file__104098 = file;
                        
                        //#line 39 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/io/FileWriter.x10"
                        (w)->::x10::io::FileWriter::_constructor(
                          file__104098, false);
                        
                        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        x10_long i__52713max__104099 = ((::x10aux::nullCheck(this->FMGL(hCore))->FMGL(M)) - (((x10_long)1ll)));
                        {
                            x10_long i__104100;
                            for (i__104100 = ((x10_long)0ll);
                                 ((i__104100) <= (i__52713max__104099));
                                 i__104100 = ((i__104100) + (((x10_long)1ll))))
                            {
                                x10_long i__104101 = i__104100;
                                
                                //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                                x10_long i__52695max__104095 =
                                  ((::x10aux::nullCheck(this->FMGL(hCore))->FMGL(N)) - (((x10_long)1ll)));
                                {
                                    x10_long i__104096;
                                    for (i__104096 = ((x10_long)0ll);
                                         ((i__104096) <= (i__52695max__104095));
                                         i__104096 = ((i__104096) + (((x10_long)1ll))))
                                    {
                                        x10_long j__104097 =
                                          i__104096;
                                        
                                        //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                                        w->writeDouble((__extension__ ({
                                                           ::x10::matrix::DenseMatrix* this__104089 =
                                                             reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(overlap));
                                                           
                                                           //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                           x10_long x__104090 =
                                                             i__104101;
                                                           x10_long y__104091 =
                                                             j__104097;
                                                           ::x10aux::nullCheck(::x10aux::nullCheck(this__104089)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                             ((((y__104091) * (::x10aux::nullCheck(this__104089)->FMGL(M)))) + (x__104090)));
                                                       }))
                                                       );
                                        
                                        //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                                        w->writeDouble((((__extension__ ({
                                                           ::x10::matrix::DenseMatrix* this__104092 =
                                                             reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(hCore));
                                                           
                                                           //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                           x10_long x__104093 =
                                                             i__104101;
                                                           x10_long y__104094 =
                                                             j__104097;
                                                           ::x10aux::nullCheck(::x10aux::nullCheck(this__104092)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                             ((((y__104094) * (::x10aux::nullCheck(this__104092)->FMGL(M)))) + (x__104093)));
                                                       }))
                                                       ) / (this->FMGL(roZ))));
                                    }
                                }
                                
                            }
                        }
                        
                        //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        w->close();
                        
                        //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149194), inpFile), (&::au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149195))));
                    }
                } else {
                    throw;
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc156) {
            {
                ::x10::lang::CheckedThrowable* formal__104137 =
                  __exc156;
                {
                    throwable__104136 = formal__104137;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__104136, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__104136))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__104136));
            }
            
        }
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
        if (true) {
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
            if ((!::x10aux::struct_equals(r, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                ::x10aux::nullCheck(r)->close();
            }
            
        }
        
        //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
        if ((!::x10aux::struct_equals(throwable__104136, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__104136)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__104136));
            }
            
        }
        
    }
}
::au::edu::anu::qm::OneElectronIntegrals* au::edu::anu::qm::OneElectronIntegrals::_make(
  ::au::edu::anu::qm::BasisFunctions bfs, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::x10::lang::String* inpFile) {
    ::au::edu::anu::qm::OneElectronIntegrals* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::OneElectronIntegrals>()) ::au::edu::anu::qm::OneElectronIntegrals();
    this_->_constructor(bfs, mol, inpFile);
    return this_;
}



//#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
::au::edu::anu::qm::HCore* au::edu::anu::qm::OneElectronIntegrals::getHCore(
  ) {
    return this->FMGL(hCore);
    
}

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
::au::edu::anu::qm::Overlap* au::edu::anu::qm::OneElectronIntegrals::getOverlap(
  ) {
    return this->FMGL(overlap);
    
}

//#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
::au::edu::anu::qm::BasisFunctions au::edu::anu::qm::OneElectronIntegrals::getBasisFunctions(
  ) {
    return this->FMGL(basisFunctions);
    
}

//#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
void au::edu::anu::qm::OneElectronIntegrals::compute1E(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule) {
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bfs =
      (__extension__ ({
        ::au::edu::anu::qm::BasisFunctions this__104052 =
          this->FMGL(basisFunctions);
        this__104052->FMGL(basisFunctions);
    }))
    ;
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    x10_long nat = ::x10aux::nullCheck(molecule)->getNumberOfAtoms();
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::x10::lang::Rail< x10_double >* atno = ::x10::lang::Rail< x10_double >::_make(nat);
    
    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::au::edu::anu::chem::AtomInfo* ai = ::au::edu::anu::chem::AtomInfo::FMGL(_instance__get)();
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    ::x10::util::ArrayList< ::au::edu::anu::qm::QMAtom*>* atms =
      ::x10aux::nullCheck(molecule)->getAtoms();
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (nat));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
            atno->x10::lang::Rail< x10_double >::__set(((x10_long)(i)),
                                                       ((x10_double) (::x10aux::nullCheck(atms->get(
                                                                                            ((x10_long)(i))))->FMGL(species))));
        }
    }
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
    x10_long i__52749min__104132 = ((x10_long)(((x10_int)0)));
    x10_long i__52749max__104133 = ((::x10aux::nullCheck(this->FMGL(hCore))->FMGL(M)) - (((x10_long)(((x10_int)1)))));
    {
        x10_long i__104134;
        for (i__104134 = i__52749min__104132; ((i__104134) <= (i__52749max__104133));
             i__104134 = ((i__104134) + (((x10_long)1ll))))
        {
            x10_long i__104135 = i__104134;
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
            x10_long i__52731min__104128 = ((x10_long)(((x10_int)0)));
            x10_long i__52731max__104129 = ((::x10aux::nullCheck(this->FMGL(hCore))->FMGL(N)) - (((x10_long)(((x10_int)1)))));
            {
                x10_long i__104130;
                for (i__104130 = i__52731min__104128; ((i__104130) <= (i__52731max__104129));
                     i__104130 = ((i__104130) + (((x10_long)1ll))))
                {
                    x10_long j__104131 = i__104130;
                    
                    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    ::au::edu::anu::qm::ContractedGaussian bfi__104122 =
                      ::x10aux::nullCheck(bfs)->get(i__104135);
                    
                    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    ::au::edu::anu::qm::ContractedGaussian bfj__104123 =
                      ::x10aux::nullCheck(bfs)->get(j__104131);
                    
                    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    x10_double oVal__104124 = bfi__104122->au::edu::anu::qm::ContractedGaussian::overlap(
                                                bfj__104123);
                    
                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    x10_double hVal__104125 = ((bfi__104122->au::edu::anu::qm::ContractedGaussian::kinetic(
                                                  bfj__104123)) / (this->FMGL(roZ)));
                    
                    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    ::x10::matrix::DenseMatrix* this__104112 =
                      reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(overlap));
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__104113 = i__104135;
                    x10_long y__104114 = j__104131;
                    x10_double v__104115 = oVal__104124;
                    x10_double ret__104116;
                    
                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__104112)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                      ((((y__104114) * (::x10aux::nullCheck(this__104112)->FMGL(M)))) + (x__104113)),
                      v__104115);
                    
                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__104116 = v__104115;
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__104116;
                    
                    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    ::x10::matrix::DenseMatrix* this__104117 =
                      reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(hCore));
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__104118 = i__104135;
                    x10_long y__104119 = j__104131;
                    x10_double v__104120 = hVal__104125;
                    x10_double ret__104121;
                    
                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__104117)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                      ((((y__104119) * (::x10aux::nullCheck(this__104117)->FMGL(M)))) + (x__104118)),
                      v__104120);
                    
                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__104121 = v__104120;
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__104121;
                    
                    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                    {
                        x10_int k__104126;
                        for (k__104126 = ((x10_int)0); ((((x10_long)(k__104126))) < (nat));
                             k__104126 = ((k__104126) + (((x10_int)1))))
                        {
                            
                            //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                            x10_double aVal__104127 = ((atno->x10::lang::Rail< x10_double >::__apply(
                                                          ((x10_long)(k__104126)))) * (bfi__104122->au::edu::anu::qm::ContractedGaussian::nuclear(
                                                                                         bfj__104123,
                                                                                         ::x10aux::nullCheck(atms->get(
                                                                                                               ((x10_long)(k__104126))))->FMGL(centre))));
                            
                            //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
                            ::au::edu::anu::qm::HCore* a__104106 =
                              this->FMGL(hCore);
                            x10_long i__104107 = i__104135;
                            x10_long i__104108 = j__104131;
                            x10_double r__104109 = (((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__104110 = i__104107;
                                x10_long y__104111 = i__104108;
                                ::x10aux::nullCheck(::x10aux::nullCheck(a__104106)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__104111) * (::x10aux::nullCheck(a__104106)->FMGL(M)))) + (x__104110)));
                            }))
                            ) + (aVal__104127));
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__104102 = i__104107;
                            x10_long y__104103 = i__104108;
                            x10_double v__104104 = r__104109;
                            x10_double ret__104105;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(a__104106)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__104103) * (::x10aux::nullCheck(a__104106)->FMGL(M)))) + (x__104102)),
                              v__104104);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__104105 = v__104104;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__104105;
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/OneElectronIntegrals.x10"
::au::edu::anu::qm::OneElectronIntegrals* au::edu::anu::qm::OneElectronIntegrals::au__edu__anu__qm__OneElectronIntegrals____this__au__edu__anu__qm__OneElectronIntegrals(
  ) {
    return this;
    
}
void au::edu::anu::qm::OneElectronIntegrals::__fieldInitializers_au_edu_anu_qm_OneElectronIntegrals(
  ) {
 
}
const ::x10aux::serialization_id_t au::edu::anu::qm::OneElectronIntegrals::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::OneElectronIntegrals::_deserializer);

void au::edu::anu::qm::OneElectronIntegrals::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(basisFunctions));
    buf.write(this->FMGL(hCore));
    buf.write(this->FMGL(overlap));
    buf.write(this->FMGL(roZ));
    buf.write(this->FMGL(numBasisFunctions));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::OneElectronIntegrals::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::OneElectronIntegrals* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::OneElectronIntegrals>()) ::au::edu::anu::qm::OneElectronIntegrals();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::OneElectronIntegrals::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(basisFunctions) = buf.read< ::au::edu::anu::qm::BasisFunctions>();
    FMGL(hCore) = buf.read< ::au::edu::anu::qm::HCore*>();
    FMGL(overlap) = buf.read< ::au::edu::anu::qm::Overlap*>();
    FMGL(roZ) = buf.read<x10_double>();
    FMGL(numBasisFunctions) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::qm::OneElectronIntegrals::rtt;
void au::edu::anu::qm::OneElectronIntegrals::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.OneElectronIntegrals",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149194("1e Ints saved to ");
::x10::lang::String au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149193("Calculating 1e Ints.\n");
::x10::lang::String au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149195(".1int (Delete the file if geometry/basis set has changed!)");
::x10::lang::String au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149190(".1int");
::x10::lang::String au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149192(".1int (Abort the calculation and delete the file if geometry/basis set has changed!)");
::x10::lang::String au::edu::anu::qm::OneElectronIntegrals_Strings::sl__149191("1e Ints read from ");

/* END of OneElectronIntegrals */
/*************************************************/
