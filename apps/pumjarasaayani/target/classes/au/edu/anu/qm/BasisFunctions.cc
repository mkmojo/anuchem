/*************************************************/
/* START of BasisFunctions */
#include <au/edu/anu/qm/BasisFunctions.h>

#include <x10/lang/Any.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <au/edu/anu/qm/ShellList.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/lang/String.h>
#include <x10/util/ArrayList.h>
#include <x10/matrix/DenseMatrix.h>
#include <au/edu/anu/qm/BasisSet.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/lang/Exception.h>
#include <x10/matrix/Matrix.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/PowerList.h>
#include <au/edu/anu/qm/AtomicBasis.h>
#include <au/edu/anu/qm/Orbital.h>
#include <au/edu/anu/qm/Power.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/qm/PrimitiveGaussian.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
namespace au { namespace edu { namespace anu { namespace qm { 
class BasisFunctions_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::BasisFunctions> {
public:
    static ::x10::lang::Any::itable< BasisFunctions_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< BasisFunctions_ibox0 >  BasisFunctions_ibox0::itable(&BasisFunctions_ibox0::equals, &BasisFunctions_ibox0::hashCode, &BasisFunctions_ibox0::toString, &BasisFunctions_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::BasisFunctions >  au::edu::anu::qm::BasisFunctions::_itable_0(&au::edu::anu::qm::BasisFunctions::equals, &au::edu::anu::qm::BasisFunctions::hashCode, &au::edu::anu::qm::BasisFunctions::toString, &au::edu::anu::qm::BasisFunctions::typeName);
::x10aux::itable_entry au::edu::anu::qm::BasisFunctions::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::BasisFunctions::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::BasisFunctions")};
::x10aux::itable_entry au::edu::anu::qm::BasisFunctions::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::BasisFunctions_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::BasisFunctions")};

//#line 25 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 26 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
void au::edu::anu::qm::BasisFunctions::_constructor(::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                    ::x10::lang::String* basNam,
                                                    ::x10::lang::String* basisDir) {
    
    //#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    ::au::edu::anu::qm::BasisFunctions this__102878 = (*this);
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    (*this)->FMGL(molecule) = mol;
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    (*this)->FMGL(basisName) = basNam;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    (*this)->FMGL(basisFunctions) = (__extension__ ({
        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* alloc__50879 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>());
        (alloc__50879)->::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>::_constructor();
        alloc__50879;
    }))
    ;
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    ::au::edu::anu::qm::BasisSet* basisSet =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::BasisSet>()) ::au::edu::anu::qm::BasisSet());
    (basisSet)->::au::edu::anu::qm::BasisSet::_constructor(
      (*this)->FMGL(basisName), basisDir);
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    x10_int size = (*this)->au::edu::anu::qm::BasisFunctions::initBasisFunctions(
                     basisSet);
    
    //#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    (*this)->FMGL(shellList) = (__extension__ ({
        ::au::edu::anu::qm::ShellList alloc__50880 =  ::au::edu::anu::qm::ShellList::_alloc();
        (alloc__50880)->::au::edu::anu::qm::ShellList::_constructor(
          mol);
        alloc__50880;
    }))
    ;
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    (*this)->FMGL(SADMatrix) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__50881 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__50881)->::x10::matrix::DenseMatrix::_constructor(
          ((x10_long)(size)), ((x10_long)(size)));
        alloc__50881;
    }))
    ;
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    if (::x10aux::equals(jd->FMGL(guess),::au::edu::anu::qm::JobDefaults::FMGL(GUESS_SAD__get)()))
    {
        
        //#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
        (*this)->au::edu::anu::qm::BasisFunctions::initDensity(
          basisSet);
    }
    
}
::au::edu::anu::qm::BasisFunctions au::edu::anu::qm::BasisFunctions::_make(
  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::x10::lang::String* basNam, ::x10::lang::String* basisDir)
{
    ::au::edu::anu::qm::BasisFunctions this_; 
    this_->_constructor(mol, basNam, basisDir);
    return this_;
}



//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
void au::edu::anu::qm::BasisFunctions::initDensity(::au::edu::anu::qm::BasisSet* basisSet) {
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    x10_int shift = ((x10_int)0);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    {
        x10_int atmno;
        for (atmno = ((x10_int)0); ((((x10_long)(atmno))) < (::x10aux::nullCheck((*this)->FMGL(molecule))->getNumberOfAtoms()));
             atmno = ((atmno) + (((x10_int)1)))) {
            
            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::au::edu::anu::qm::QMAtom* atom = ::x10aux::nullCheck((*this)->FMGL(molecule))->getAtom(
                                                 ((x10_long)(atmno)));
            
            //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::x10::matrix::DenseMatrix* aDensity = ::x10aux::nullCheck(basisSet)->getDensity(
                                                     reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom));
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            if ((::x10aux::struct_equals(aDensity, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::BasisFunctions_Strings::sl__149108), ::x10aux::nullCheck(atom)->FMGL(species)))));
            }
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            x10_long matsize = ::x10aux::nullCheck(aDensity)->FMGL(M);
            
            //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            x10_long i__50905max__102889 = ((matsize) - (((x10_long)1ll)));
            {
                x10_long i__102890;
                for (i__102890 = ((x10_long)0ll); ((i__102890) <= (i__50905max__102889));
                     i__102890 = ((i__102890) + (((x10_long)1ll))))
                {
                    x10_long i__102891 = i__102890;
                    
                    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_long i__50887max__102886 = ((matsize) - (((x10_long)1ll)));
                    {
                        x10_long i__102887;
                        for (i__102887 = ((x10_long)0ll);
                             ((i__102887) <= (i__50887max__102886));
                             i__102887 = ((i__102887) + (((x10_long)1ll))))
                        {
                            x10_long j__102888 = i__102887;
                            
                            //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::x10::matrix::DenseMatrix* this__102879 =
                              (*this)->FMGL(SADMatrix);
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__102880 = ((i__102891) + (((x10_long)(shift))));
                            x10_long y__102881 = ((j__102888) + (((x10_long)(shift))));
                            x10_double v__102882 = (__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__102883 = i__102891;
                                x10_long y__102884 = j__102888;
                                ::x10aux::nullCheck(::x10aux::nullCheck(aDensity)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__102884) * (::x10aux::nullCheck(aDensity)->FMGL(M)))) + (x__102883)));
                            }))
                            ;
                            x10_double ret__102885;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(this__102879)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__102881) * (::x10aux::nullCheck(this__102879)->FMGL(M)))) + (x__102880)),
                              v__102882);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__102885 = v__102882;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__102885;
                        }
                    }
                    
                }
            }
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            shift = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(shift))) + (matsize))));
        }
    }
    
}

//#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
x10_int au::edu::anu::qm::BasisFunctions::initBasisFunctions(
  ::au::edu::anu::qm::BasisSet* basisSet) {
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    x10_int intIndx = ((x10_int)0);
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    ::au::edu::anu::qm::PowerList* plInst = (__extension__ ({
        
        //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/PowerList.x10"
        ::au::edu::anu::qm::PowerList* alloc__101583 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::PowerList>()) ::au::edu::anu::qm::PowerList());
        (alloc__101583)->::au::edu::anu::qm::PowerList::_constructor();
        alloc__101583;
    }))
    ;
    
    //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    {
        x10_int atmno;
        for (atmno = ((x10_int)0); ((((x10_long)(atmno))) < (::x10aux::nullCheck((*this)->FMGL(molecule))->getNumberOfAtoms()));
             atmno = ((atmno) + (((x10_int)1)))) {
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::au::edu::anu::qm::QMAtom* atom = ::x10aux::nullCheck((*this)->FMGL(molecule))->getAtom(
                                                 ((x10_long)(atmno)));
            
            //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::au::edu::anu::qm::AtomicBasis* atomBasis = ::x10aux::nullCheck(basisSet)->getBasis(
                                                           reinterpret_cast< ::au::edu::anu::chem::Atom*>(atom));
            
            //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            if ((::x10aux::struct_equals(atomBasis, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::BasisFunctions_Strings::sl__149109), ::x10aux::nullCheck(atom)->FMGL(species)))));
            }
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::x10::lang::Rail< ::au::edu::anu::qm::Orbital >* orbitals =
              ::x10aux::nullCheck(atomBasis)->FMGL(orbitals);
            
            //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* atombfs =
               (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>());
            (atombfs)->::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>::_constructor();
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            {
                x10_int orbno;
                for (orbno = ((x10_int)0); ((((x10_long)(orbno))) < ((x10_long)(::x10aux::nullCheck(orbitals)->FMGL(size))));
                     orbno = ((orbno) + (((x10_int)1)))) {
                    
                    //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::au::edu::anu::qm::Orbital orb = ::x10aux::nullCheck(orbitals)->x10::lang::Rail< ::au::edu::anu::qm::Orbital >::__apply(
                                                        ((x10_long)(orbno)));
                    
                    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::String* shape = orb->FMGL(shape);
                    
                    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< ::au::edu::anu::qm::Power >* pList =
                      ::x10aux::nullCheck(plInst)->getPowers(
                        shape);
                    
                    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< x10_double >* coeffs =
                      orb->FMGL(coefficients);
                    
                    //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< x10_double >* exps =
                      orb->FMGL(exponents);
                    
                    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10x::vector::Point3d centre = ::x10aux::nullCheck(atom)->FMGL(centre);
                    
                    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    {
                        x10_long l;
                        for (l = ((x10_long)0ll); ((l) < ((x10_long)(::x10aux::nullCheck(pList)->FMGL(size))));
                             l = ((l) + (((x10_long)1ll))))
                        {
                            
                            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::au::edu::anu::qm::Power power =
                              ::x10aux::nullCheck(pList)->x10::lang::Rail< ::au::edu::anu::qm::Power >::__apply(
                                l);
                            
                            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::x10::lang::Rail< ::au::edu::anu::qm::PrimitiveGaussian* >* primitives =
                              ::x10::lang::Rail< ::au::edu::anu::qm::PrimitiveGaussian* >::_make((x10_long)(::x10aux::nullCheck(coeffs)->FMGL(size)));
                            
                            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            {
                                x10_long i;
                                for (i = ((x10_long)0ll);
                                     ((i) < ((x10_long)(::x10aux::nullCheck(coeffs)->FMGL(size))));
                                     i = ((i) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                                    primitives->x10::lang::Rail< ::au::edu::anu::qm::PrimitiveGaussian* >::__set(
                                      i, (__extension__ ({
                                          ::au::edu::anu::qm::PrimitiveGaussian* alloc__50882 =
                                             (new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian());
                                          (alloc__50882)->::au::edu::anu::qm::PrimitiveGaussian::_constructor(
                                            centre, power,
                                            ::x10aux::nullCheck(exps)->x10::lang::Rail< x10_double >::__apply(
                                              i), ::x10aux::nullCheck(coeffs)->x10::lang::Rail< x10_double >::__apply(
                                                    i), true);
                                          alloc__50882;
                                      }))
                                      );
                                }
                            }
                            
                            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::au::edu::anu::qm::ContractedGaussian cg =
                               ::au::edu::anu::qm::ContractedGaussian::_alloc();
                            (cg)->::au::edu::anu::qm::ContractedGaussian::_constructor(
                              centre, power, exps, coeffs,
                              intIndx, true);
                            
                            //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::x10aux::nullCheck((*this)->FMGL(basisFunctions))->add(
                              cg);
                        }
                    }
                    
                    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int am = orb->FMGL(angularMomentum);
                    
                    //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< ::au::edu::anu::qm::PrimitiveGaussian* >* atomPrimitives =
                      ::x10::lang::Rail< ::au::edu::anu::qm::PrimitiveGaussian* >::_make((x10_long)(::x10aux::nullCheck(coeffs)->FMGL(size)));
                    
                    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    {
                        x10_long i;
                        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck(coeffs)->FMGL(size))));
                             i = ((i) + (((x10_long)1ll))))
                        {
                            
                            //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            atomPrimitives->x10::lang::Rail< ::au::edu::anu::qm::PrimitiveGaussian* >::__set(
                              i, (__extension__ ({
                                  ::au::edu::anu::qm::PrimitiveGaussian* alloc__50884 =
                                     (new (::x10aux::alloc_z< ::au::edu::anu::qm::PrimitiveGaussian>()) ::au::edu::anu::qm::PrimitiveGaussian());
                                  (alloc__50884)->::au::edu::anu::qm::PrimitiveGaussian::_constructor(
                                    centre, (__extension__ ({
                                        ::au::edu::anu::qm::Power alloc__50883 =
                                           ::au::edu::anu::qm::Power::_alloc();
                                        (alloc__50883)->::au::edu::anu::qm::Power::_constructor(
                                          am, ((x10_int)0),
                                          ((x10_int)0));
                                        alloc__50883;
                                    }))
                                    , ::x10aux::nullCheck(exps)->x10::lang::Rail< x10_double >::__apply(
                                        i), ::x10aux::nullCheck(coeffs)->x10::lang::Rail< x10_double >::__apply(
                                              i), false);
                                  alloc__50884;
                              }))
                              );
                        }
                    }
                    
                    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< x10_double >* atomCoeffs =
                      ::x10::lang::Rail< x10_double >::_make(coeffs);
                    
                    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::au::edu::anu::qm::ContractedGaussian acg =
                       ::au::edu::anu::qm::ContractedGaussian::_alloc();
                    (acg)->::au::edu::anu::qm::ContractedGaussian::_constructor(
                      centre, (__extension__ ({
                          ::au::edu::anu::qm::Power alloc__50885 =
                             ::au::edu::anu::qm::Power::_alloc();
                          (alloc__50885)->::au::edu::anu::qm::Power::_constructor(
                            am, ((x10_int)0), ((x10_int)0));
                          alloc__50885;
                      }))
                      , exps, atomCoeffs, intIndx, false);
                    
                    //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    atombfs->add(acg);
                    
                    //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    intIndx = ((intIndx) + (((((((am) + (((x10_int)1)))) * (((am) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)))));
                }
            }
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::x10aux::nullCheck(atom)->setBasisFunctions(
              atombfs);
        }
    }
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    x10_double fact1 = ::x10::lang::MathNatives::pow(((2.0) / (3.141592653589793)),0.75);
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    {
        x10_int atmno;
        for (atmno = ((x10_int)0); ((((x10_long)(atmno))) < (::x10aux::nullCheck((*this)->FMGL(molecule))->getNumberOfAtoms()));
             atmno = ((atmno) + (((x10_int)1)))) {
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::au::edu::anu::qm::QMAtom* atom = ::x10aux::nullCheck((*this)->FMGL(molecule))->getAtom(
                                                 ((x10_long)(atmno)));
            
            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bfs =
              ::x10aux::nullCheck(atom)->getBasisFunctions();
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            x10_long nbf = ::x10aux::nullCheck(bfs)->size();
            
            //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            {
                x10_long i;
                for (i = ((x10_long)0ll); ((i) < (nbf)); i =
                                                           ((i) + (((x10_long)1ll))))
                {
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::au::edu::anu::qm::ContractedGaussian bfi =
                      ::x10aux::nullCheck(bfs)->get(i);
                    
                    //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int lmn = (__extension__ ({
                        
                        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                        ::au::edu::anu::qm::Power this__102875 =
                          bfi->FMGL(power);
                        this__102875->FMGL(maxam);
                    }))
                    ;
                    
                    //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int lm = lmn;
                    
                    //#line 123 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double denom = 1.0;
                    
                    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    while (((((x10_long)(lm))) > (((x10_long)1ll))))
                    {
                        denom = ((denom) * (((((2.0) * (((x10_double) (lm))))) - (1.0))));
                        lm = ((lm) - (((x10_int)1)));
                    }
                    
                    //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double fact2 = ((((x10_double) ((__extension__ ({
                        
                        //#line 578 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_int i__102876 = lmn;
                        ((((x10_int)1)) << (0x1f & (x10_int)(((x10_long)(i__102876)))));
                    }))
                    ))) / (::x10::lang::MathNatives::pow(denom,0.5)));
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< x10_double >* exponents =
                      bfi->FMGL(exponents);
                    
                    //#line 130 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    ::x10::lang::Rail< x10_double >* coefficients =
                      bfi->FMGL(coefficients);
                    
                    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    {
                        x10_long j;
                        for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(coefficients)->FMGL(size))));
                             j = ((j) + (((x10_long)1ll))))
                        {
                            
                            //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            x10_double fact3 = ::x10::lang::MathNatives::pow(::x10aux::nullCheck(exponents)->x10::lang::Rail< x10_double >::__apply(
                                                                               j),((((((2.0) * (((x10_double) (lmn))))) + (3.0))) / (4.0)));
                            
                            //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::x10aux::nullCheck(coefficients)->x10::lang::Rail< x10_double >::__set(
                              j, ((((((::x10aux::nullCheck(coefficients)->x10::lang::Rail< x10_double >::__apply(
                                         j)) * (fact1))) * (fact2))) * (fact3)));
                        }
                    }
                    
                    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double pi3O2By2Tlmn = ((::x10::lang::MathNatives::pow(3.141592653589793,1.5)) / (((x10_double) ((__extension__ ({
                        
                        //#line 578 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
                        x10_int i__102877 = lmn;
                        ((((x10_int)1)) << (0x1f & (x10_int)(((x10_long)(i__102877)))));
                    }))
                    ))));
                    
                    //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double factC = ((denom) * (pi3O2By2Tlmn));
                    
                    //#line 138 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double factA = 0.0;
                    x10_double factB = 0.0;
                    
                    //#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double coefExpoSum = 0.0;
                    
                    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    {
                        x10_long k;
                        for (k = ((x10_long)0ll); ((k) < ((x10_long)(::x10aux::nullCheck(coefficients)->FMGL(size))));
                             k = ((k) + (((x10_long)1ll))))
                        {
                            
                            //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            {
                                x10_long l;
                                for (l = ((x10_long)0ll);
                                     ((l) < ((x10_long)(::x10aux::nullCheck(coefficients)->FMGL(size))));
                                     l = ((l) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                                    factA = ((::x10aux::nullCheck(coefficients)->x10::lang::Rail< x10_double >::__apply(
                                                k)) * (::x10aux::nullCheck(coefficients)->x10::lang::Rail< x10_double >::__apply(
                                                         l)));
                                    
                                    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                                    factB = ::x10::lang::MathNatives::pow(((::x10aux::nullCheck(exponents)->x10::lang::Rail< x10_double >::__apply(
                                                                              k)) + (::x10aux::nullCheck(exponents)->x10::lang::Rail< x10_double >::__apply(
                                                                                       l))),((((x10_double) (lmn))) + (1.5)));
                                    
                                    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                                    coefExpoSum = ((coefExpoSum) + (((factA) / (factB))));
                                }
                            }
                            
                        }
                    }
                    
                    //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double norm = ::x10::lang::MathNatives::pow(((coefExpoSum) * (factC)),-0.5);
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    {
                        x10_long j;
                        for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(coefficients)->FMGL(size))));
                             j = ((j) + (((x10_long)1ll))))
                        {
                            
                            //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                            ::x10::lang::Rail< x10_double >* a__102892 =
                              coefficients;
                            x10_long i__102893 = j;
                            x10_double r__102894 = ((::x10aux::nullCheck(a__102892)->x10::lang::Rail< x10_double >::__apply(
                                                       i__102893)) * (norm));
                            ::x10aux::nullCheck(a__102892)->x10::lang::Rail< x10_double >::__set(
                              i__102893, r__102894);
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    return intIndx;
    
}

//#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
::x10::lang::Rail< x10_double >* au::edu::anu::qm::BasisFunctions::getNormalizationFactors(
  ) {
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    ::x10::lang::Rail< x10_double >* norms = ::x10::lang::Rail< x10_double >::_make(::x10aux::nullCheck((*this)->FMGL(basisFunctions))->size());
    
    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (::x10aux::nullCheck((*this)->FMGL(basisFunctions))->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            ::au::edu::anu::qm::Power power = ::x10aux::nullCheck((*this)->FMGL(basisFunctions))->__apply(
                                                i)->FMGL(power);
            
            //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (((x10_long)1ll)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int lmx = power->FMGL(l);
                    
                    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int lmy = power->FMGL(m);
                    
                    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int lmz = power->FMGL(n);
                    
                    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_int lmt = power->FMGL(totam);
                    
                    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    x10_double denom = 1.0;
                    
                    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    while (((lmt) > (((x10_int)1)))) {
                        denom = ((denom) * (((((2.0) * (((x10_double) (lmt))))) - (1.0))));
                        lmt = ((lmt) - (((x10_int)1)));
                    }
                    
                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    while (((lmx) > (((x10_int)1)))) {
                        denom = ((denom) / (((((2.0) * (((x10_double) (lmx))))) - (1.0))));
                        lmx = ((lmx) - (((x10_int)1)));
                    }
                    
                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    while (((lmy) > (((x10_int)1)))) {
                        denom = ((denom) / (((((2.0) * (((x10_double) (lmy))))) - (1.0))));
                        lmy = ((lmy) - (((x10_int)1)));
                    }
                    
                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    while (((lmz) > (((x10_int)1)))) {
                        denom = ((denom) / (((((2.0) * (((x10_double) (lmz))))) - (1.0))));
                        lmz = ((lmz) - (((x10_int)1)));
                    }
                    
                    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
                    norms->x10::lang::Rail< x10_double >::__set(
                      i, ::x10::lang::MathNatives::sqrt(denom));
                }
            }
            
        }
    }
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
    return norms;
    
}

//#line 180 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 181 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 183 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 184 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"

//#line 24 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/BasisFunctions.x10"
::x10::lang::String* au::edu::anu::qm::BasisFunctions::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::BasisFunctions::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::BasisFunctions_Strings::sl__149110), (&::au::edu::anu::qm::BasisFunctions_Strings::sl__149111)), (*this)->FMGL(molecule)), (&::au::edu::anu::qm::BasisFunctions_Strings::sl__149112)), (*this)->FMGL(basisName)), (&::au::edu::anu::qm::BasisFunctions_Strings::sl__149113)), (*this)->FMGL(basisFunctions)), (&::au::edu::anu::qm::BasisFunctions_Strings::sl__149114)), (*this)->FMGL(shellList)), (&::au::edu::anu::qm::BasisFunctions_Strings::sl__149115)), (*this)->FMGL(SADMatrix));
    
}
x10_int au::edu::anu::qm::BasisFunctions::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(molecule))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(basisName))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(basisFunctions))));
    result = ((((((x10_int)8191)) * (result))) + ((*this)->FMGL(shellList)->au::edu::anu::qm::ShellList::hashCode()));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(SADMatrix))));
    return result;
    
}
x10_boolean au::edu::anu::qm::BasisFunctions::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::BasisFunctions>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::BasisFunctions::equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::BasisFunctions>(other));
    
}
x10_boolean au::edu::anu::qm::BasisFunctions::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::BasisFunctions>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::BasisFunctions::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::BasisFunctions>(other));
    
}
void ::au::edu::anu::qm::BasisFunctions::_serialize(::au::edu::anu::qm::BasisFunctions this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(molecule));
    buf.write(this_->FMGL(basisName));
    buf.write(this_->FMGL(basisFunctions));
    buf.write(this_->FMGL(shellList));
    buf.write(this_->FMGL(SADMatrix));
    
}

void ::au::edu::anu::qm::BasisFunctions::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(molecule) = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
    FMGL(basisName) = buf.read< ::x10::lang::String*>();
    FMGL(basisFunctions) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>*>();
    FMGL(shellList) = buf.read< ::au::edu::anu::qm::ShellList>();
    FMGL(SADMatrix) = buf.read< ::x10::matrix::DenseMatrix*>();
}


::x10aux::RuntimeType au::edu::anu::qm::BasisFunctions::rtt;
void au::edu::anu::qm::BasisFunctions::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.BasisFunctions",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149111(" molecule=");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149110("struct au.edu.anu.qm.BasisFunctions:");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149115(" SADMatrix=");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149109("No basis found for atom type ");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149112(" basisName=");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149108("No density matrix found for atom type ");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149113(" basisFunctions=");
::x10::lang::String au::edu::anu::qm::BasisFunctions_Strings::sl__149114(" shellList=");

/* END of BasisFunctions */
/*************************************************/
