/*************************************************/
/* START of ROFockMethod */
#include <au/edu/anu/qm/ROFockMethod.h>

#include <x10/lang/Long.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/qm/ShellPair.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/util/StatisticalTimer.h>
#include <x10/matrix/dist/DistDenseMatrix.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/ROFockMethod__RemoteBlock.h>
#include <x10/util/WorkerLocalHandle.h>
#include <au/edu/anu/qm/ro/Integral_Pack.h>
#include <x10/matrix/DenseMatrix.h>
#include <au/edu/anu/qm/BasisFunctions.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Date.h>
#include <x10/util/Timer.h>
#include <au/edu/anu/qm/ShellList.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/lang/Place.h>
#include <x10/util/ListIterator.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Boolean.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <au/edu/anu/qm/Power.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/lang/System.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Runtime.h>
#include <x10/util/GrowableRail.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/matrix/block/Grid.h>
#include <au/edu/anu/qm/Density.h>
#include <au/edu/anu/qm/MolecularOrbitals.h>
#include <x10/lang/GlobalRail.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Region.h>
#include <x10/util/Team.h>
#include <x10/matrix/Matrix.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/VoidFun_0_1.h>
#include <au/edu/anu/qm/ROFockMethod__RecursiveBisection1D.h>
#include <x10/matrix/blas/DenseMatrixBLAS.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)4ll));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__1>();
        buf.record_reference(storage);
        au_edu_anu_qm_ROFockMethod__closure__1* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__1();
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:144";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*>::itable<au_edu_anu_qm_ROFockMethod__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_long >* __apply(){
        return ::x10::lang::Rail< x10_long >::_make(shellAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                      ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)));
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* shellAtPlace;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shellAtPlace);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_shellAtPlace = buf.read< ::x10::lang::Rail< x10_long >*>();
        au_edu_anu_qm_ROFockMethod__closure__2* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__2(that_shellAtPlace);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__2(::x10::lang::Rail< x10_long >* shellAtPlace) : shellAtPlace(shellAtPlace) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:145";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_int bang__148387 = (__extension__ ({
            
            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
            ::au::edu::anu::qm::Power this__148388 = jbFunc__148381->FMGL(power);
            this__148388->FMGL(totam);
        }))
        ;
        
        //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10x::vector::Point3d bPoint__148389 = jbFunc__148381->FMGL(origin);
        
        //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* zetaB__148390 = jbFunc__148381->FMGL(exponents);
        
        //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* conB__148391 = jbFunc__148381->FMGL(coefficients);
        
        //#line 180 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_double contrib__148392 = 0.0;
        
        //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_double R__148393 = (__extension__ ({
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__148394 = bPoint__148389;
            x10_double ret__148395;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__148364 = ((aPoint__148411->FMGL(i)) - (b__148394->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__148365 = ((aPoint__148411->FMGL(j)) - (b__148394->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__148366 = ((aPoint__148411->FMGL(k)) - (b__148394->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__148395 = ((((((di__148364) * (di__148364))) + (((dj__148365) * (dj__148365))))) + (((dk__148366) * (dk__148366))));
            ret__148395;
        }))
        ;
        
        //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long i__107788max__148378 = (((x10_long)(::x10aux::nullCheck(conA__148413)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__148379;
            for (i__148379 = ((x10_long)0ll); ((i__148379) <= (i__107788max__148378));
                 i__148379 = ((i__148379) + (((x10_long)1ll)))) {
                x10_long ii__148380 = i__148379;
                
                //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_long i__107770max__148367 = (((x10_long)(::x10aux::nullCheck(conB__148391)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__148368;
                    for (i__148368 = ((x10_long)0ll); ((i__148368) <= (i__107770max__148367));
                         i__148368 = ((i__148368) + (((x10_long)1ll))))
                    {
                        x10_long jj__148369 = i__148368;
                        
                        //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        contrib__148392 = ((contrib__148392) + (((((((::x10aux::nullCheck(conA__148413)->x10::lang::Rail< x10_double >::__apply(
                                                                        ii__148380)) * (::x10aux::nullCheck(conB__148391)->x10::lang::Rail< x10_double >::__apply(
                                                                                          jj__148369)))) * (::x10::lang::MathNatives::exp((((((((-(::x10aux::nullCheck(zetaA__148412)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                     ii__148380)))) * (::x10aux::nullCheck(zetaB__148390)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                         jj__148369)))) / (((::x10aux::nullCheck(zetaA__148412)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                               ii__148380)) + (::x10aux::nullCheck(zetaB__148390)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                 jj__148369)))))) * (R__148393)))))) / (::x10::lang::Math::pow(
                                                                                                                                                                                                                                                          roZ_val,
                                                                                                                                                                                                                                                          ((aang__148409) + (bang__148387)))))));
                    }
                }
                
            }
        }
        
        //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        contrib__148392 = ::fabs(contrib__148392);
        
        //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if (((contrib__148392) >= (threshold))) {
            
            //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Rail< x10_int >* maxL__148396 = ::x10::lang::Rail< x10_int >::_make(((((x10_long)(roN_val))) + (((x10_long)1ll))),
                                                                                             roL);
            
            //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::au::edu::anu::qm::ShellPair sp__148397 =  ::au::edu::anu::qm::ShellPair::_alloc();
            (sp__148397)->::au::edu::anu::qm::ShellPair::_constructor(
              aang__148409, bang__148387, aPoint__148411,
              bPoint__148389, zetaA__148412, zetaB__148390,
              conA__148413, conB__148391, spMu__148385, spNu__148386,
              maxL__148396, contrib__148392);
            {
                
                //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::x10::lang::CheckedThrowable* throwable__148727 =
                  ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::lang::Runtime::enterAtomic();
                        {
                            
                            //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            localShellPairs->x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>::add(
                              sp__148397);
                            
                            //#line 194 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            ::x10::lang::Rail< x10_double >* a__148370 =
                              info;
                            x10_double r__148371 = ((::x10aux::nullCheck(a__148370)->x10::lang::Rail< x10_double >::__apply(
                                                       ((x10_long)0ll))) + (((x10_double) (((maxbraa__148414) * (maxbrab__148384))))));
                            ::x10aux::nullCheck(a__148370)->x10::lang::Rail< x10_double >::__set(
                              ((x10_long)0ll), r__148371);
                            
                            //#line 195 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            ::x10::lang::Rail< x10_double >* a__148372 =
                              info;
                            x10_double r__148373 = ((::x10aux::nullCheck(a__148372)->x10::lang::Rail< x10_double >::__apply(
                                                       ((x10_long)1ll))) + (((x10_double) ((((((x10_long)(::x10aux::nullCheck(conA__148413)->FMGL(size))) * ((x10_long)(::x10aux::nullCheck(conB__148391)->FMGL(size))))) * (((x10_long)(roK))))))));
                            ::x10aux::nullCheck(a__148372)->x10::lang::Rail< x10_double >::__set(
                              ((x10_long)1ll), r__148373);
                            
                            //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            ::x10::lang::Rail< x10_double >* a__148374 =
                              info;
                            x10_double r__148375 = ((::x10aux::nullCheck(a__148374)->x10::lang::Rail< x10_double >::__apply(
                                                       ((x10_long)2ll))) + (((x10_double) (((((maxbraa__148414) * (maxbrab__148384))) * (((x10_long)(roK))))))));
                            ::x10aux::nullCheck(a__148374)->x10::lang::Rail< x10_double >::__set(
                              ((x10_long)2ll), r__148375);
                        }
                    }
                    ::x10::compiler::Finalization::plausibleThrow();
                }
                catch (::x10::lang::CheckedThrowable* __exc289) {
                    {
                        ::x10::lang::CheckedThrowable* formal__148728 =
                          __exc289;
                        {
                            throwable__148727 = formal__148728;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__148727,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__148727))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__148727));
                    }
                    
                }
                if (true) {
                    ::x10::lang::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__148727,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__148727)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__148727));
                    }
                    
                }
                
            }
        } else {
            {
                
                //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::x10::lang::CheckedThrowable* throwable__148730 =
                  ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::lang::Runtime::enterAtomic();
                        {
                            ::x10::lang::Rail< x10_double >* a__148376 =
                              info;
                            x10_double r__148377 = ((::x10aux::nullCheck(a__148376)->x10::lang::Rail< x10_double >::__apply(
                                                       ((x10_long)3ll))) + (1.0));
                            ::x10aux::nullCheck(a__148376)->x10::lang::Rail< x10_double >::__set(
                              ((x10_long)3ll), r__148377);
                        }
                    }
                    ::x10::compiler::Finalization::plausibleThrow();
                }
                catch (::x10::lang::CheckedThrowable* __exc290) {
                    {
                        ::x10::lang::CheckedThrowable* formal__148731 =
                          __exc290;
                        {
                            throwable__148730 = formal__148731;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__148730,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__148730))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__148730));
                    }
                    
                }
                if (true) {
                    ::x10::lang::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__148730,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__148730)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__148730));
                    }
                    
                }
                
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::qm::ContractedGaussian jbFunc__148381;
    ::x10x::vector::Point3d aPoint__148411;
    ::x10::lang::Rail< x10_double >* conA__148413;
    ::x10::lang::Rail< x10_double >* zetaA__148412;
    x10_double roZ_val;
    x10_int aang__148409;
    x10_double threshold;
    x10_int roN_val;
    x10_int roL;
    x10_long spMu__148385;
    x10_long spNu__148386;
    ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>* localShellPairs;
    ::x10::lang::Rail< x10_double >* info;
    x10_long maxbraa__148414;
    x10_long maxbrab__148384;
    x10_int roK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->jbFunc__148381);
        buf.write(this->aPoint__148411);
        buf.write(this->conA__148413);
        buf.write(this->zetaA__148412);
        buf.write(this->roZ_val);
        buf.write(this->aang__148409);
        buf.write(this->threshold);
        buf.write(this->roN_val);
        buf.write(this->roL);
        buf.write(this->spMu__148385);
        buf.write(this->spNu__148386);
        buf.write(this->localShellPairs);
        buf.write(this->info);
        buf.write(this->maxbraa__148414);
        buf.write(this->maxbrab__148384);
        buf.write(this->roK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__4>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ContractedGaussian that_jbFunc__148381 = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
        ::x10x::vector::Point3d that_aPoint__148411 = buf.read< ::x10x::vector::Point3d>();
        ::x10::lang::Rail< x10_double >* that_conA__148413 = buf.read< ::x10::lang::Rail< x10_double >*>();
        ::x10::lang::Rail< x10_double >* that_zetaA__148412 = buf.read< ::x10::lang::Rail< x10_double >*>();
        x10_double that_roZ_val = buf.read<x10_double>();
        x10_int that_aang__148409 = buf.read<x10_int>();
        x10_double that_threshold = buf.read<x10_double>();
        x10_int that_roN_val = buf.read<x10_int>();
        x10_int that_roL = buf.read<x10_int>();
        x10_long that_spMu__148385 = buf.read<x10_long>();
        x10_long that_spNu__148386 = buf.read<x10_long>();
        ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>* that_localShellPairs = buf.read< ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>*>();
        ::x10::lang::Rail< x10_double >* that_info = buf.read< ::x10::lang::Rail< x10_double >*>();
        x10_long that_maxbraa__148414 = buf.read<x10_long>();
        x10_long that_maxbrab__148384 = buf.read<x10_long>();
        x10_int that_roK = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__4* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__4(that_jbFunc__148381, that_aPoint__148411, that_conA__148413, that_zetaA__148412, that_roZ_val, that_aang__148409, that_threshold, that_roN_val, that_roL, that_spMu__148385, that_spNu__148386, that_localShellPairs, that_info, that_maxbraa__148414, that_maxbrab__148384, that_roK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__4(::au::edu::anu::qm::ContractedGaussian jbFunc__148381, ::x10x::vector::Point3d aPoint__148411, ::x10::lang::Rail< x10_double >* conA__148413, ::x10::lang::Rail< x10_double >* zetaA__148412, x10_double roZ_val, x10_int aang__148409, x10_double threshold, x10_int roN_val, x10_int roL, x10_long spMu__148385, x10_long spNu__148386, ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>* localShellPairs, ::x10::lang::Rail< x10_double >* info, x10_long maxbraa__148414, x10_long maxbrab__148384, x10_int roK) : jbFunc__148381(jbFunc__148381), aPoint__148411(aPoint__148411), conA__148413(conA__148413), zetaA__148412(zetaA__148412), roZ_val(roZ_val), aang__148409(aang__148409), threshold(threshold), roN_val(roN_val), roL(roL), spMu__148385(spMu__148385), spNu__148386(spNu__148386), localShellPairs(localShellPairs), info(info), maxbraa__148414(maxbraa__148414), maxbrab__148384(maxbrab__148384), roK(roK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:175-199";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::itable<au_edu_anu_qm_ROFockMethod__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* __apply(){
        
        //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long pid = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        ::x10::lang::Rail< x10_double >* info = sizeInfo->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply();
        ::x10::lang::Rail< x10_long >* range = shellPairRange_plh->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*>::__apply();
        
        //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>* localShellPairs =
           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair> >()) ::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>());
        (localShellPairs)->::x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>::_constructor(
          ((nShells_val) * (nShells_val)));
        
        //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long mu = offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                        pid);
        x10_long nu = ((x10_long)0ll);
        x10_long shell = ((x10_long)0ll);
        
        //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long i__107860min__148424 = place2atom->x10::lang::Rail< x10_long >::__apply(
                                          pid);
        x10_long i__107860max__148425 = place2atom->x10::lang::Rail< x10_long >::__apply(
                                          ((pid) + (((x10_long)1ll))));
        {
            x10_long i__148426;
            for (i__148426 = i__107860min__148424; ((i__148426) <= (i__107860max__148425));
                 i__148426 = ((i__148426) + (((x10_long)1ll))))
            {
                x10_long a__148427 = i__148426;
                
                //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc__148420 =
                  ::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                                        a__148427))->getBasisFunctions();
                
                //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_long naFunc__148421 = ::x10aux::nullCheck(aFunc__148420)->size();
                
                //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_long minFunc__148422 = (::x10aux::struct_equals(a__148427,
                                                                    place2atom->x10::lang::Rail< x10_long >::__apply(
                                                                      pid)))
                  ? (place2func->x10::lang::Rail< x10_long >::__apply(
                       pid)) : (((x10_long)0ll));
                
                //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_long maxFunc__148423 = (::x10aux::struct_equals(a__148427,
                                                                    place2atom->x10::lang::Rail< x10_long >::__apply(
                                                                      ((pid) + (((x10_long)1ll))))))
                  ? (((place2func->x10::lang::Rail< x10_long >::__apply(
                         ((pid) + (((x10_long)1ll))))) - (((x10_long)1ll))))
                  : (((naFunc__148421) - (((x10_long)1ll))));
                
                //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_long i__107842min__148416 = minFunc__148422;
                x10_long i__107842max__148417 = maxFunc__148423;
                {
                    x10_long i__148418;
                    for (i__148418 = i__107842min__148416;
                         ((i__148418) <= (i__107842max__148417));
                         i__148418 = ((i__148418) + (((x10_long)1ll))))
                    {
                        x10_long i__148419 = i__148418;
                        
                        //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::au::edu::anu::qm::ContractedGaussian iaFunc__148406 =
                          ::x10aux::nullCheck(aFunc__148420)->get(
                            i__148419);
                        
                        //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        x10_int aa__148407 = (__extension__ ({
                            
                            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                            ::au::edu::anu::qm::Power this__148408 =
                              iaFunc__148406->FMGL(power);
                            this__148408->FMGL(totam);
                        }))
                        ;
                        
                        //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        x10_int aang__148409 = (__extension__ ({
                            
                            //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                            ::au::edu::anu::qm::Power this__148410 =
                              iaFunc__148406->FMGL(power);
                            this__148410->FMGL(totam);
                        }))
                        ;
                        
                        //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10x::vector::Point3d aPoint__148411 =
                          iaFunc__148406->FMGL(origin);
                        
                        //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Rail< x10_double >* zetaA__148412 =
                          iaFunc__148406->FMGL(exponents);
                        
                        //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Rail< x10_double >* conA__148413 =
                          iaFunc__148406->FMGL(coefficients);
                        
                        //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        x10_long maxbraa__148414 = ((((((((x10_long)(aa__148407))) + (((x10_long)1ll)))) * (((((x10_long)(aa__148407))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        {
                            
                            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            ::x10::lang::Runtime::ensureNotInAtomic();
                            ::x10::lang::FinishState* fs__148630 =
                              ::x10::lang::Runtime::startFinish();
                            try {
                                {
                                    x10_long i__107824max__148403 =
                                      ((nAtoms) - (((x10_long)1ll)));
                                    {
                                        x10_long i__148404;
                                        for (i__148404 = ((x10_long)0ll);
                                             ((i__148404) <= (i__107824max__148403));
                                             i__148404 = ((i__148404) + (((x10_long)1ll))))
                                        {
                                            x10_long b__148405 =
                                              i__148404;
                                            
                                            //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bFunc__148401 =
                                              ::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                                                                    b__148405))->getBasisFunctions();
                                            
                                            //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                            x10_long nbFunc__148402 =
                                              ::x10aux::nullCheck(bFunc__148401)->size();
                                            
                                            //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                            x10_long i__107806max__148398 =
                                              ((nbFunc__148402) - (((x10_long)1ll)));
                                            {
                                                x10_long i__148399;
                                                for (i__148399 =
                                                       ((x10_long)0ll);
                                                     ((i__148399) <= (i__107806max__148398));
                                                     i__148399 =
                                                       ((i__148399) + (((x10_long)1ll))))
                                                {
                                                    x10_long j__148400 =
                                                      i__148399;
                                                    
                                                    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    ::au::edu::anu::qm::ContractedGaussian jbFunc__148381 =
                                                      ::x10aux::nullCheck(bFunc__148401)->__apply(
                                                        j__148400);
                                                    
                                                    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    x10_int bb__148382 =
                                                      (__extension__ ({
                                                        
                                                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                                                        ::au::edu::anu::qm::Power this__148383 =
                                                          jbFunc__148381->FMGL(power);
                                                        this__148383->FMGL(totam);
                                                    }))
                                                    ;
                                                    
                                                    //#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    x10_long maxbrab__148384 =
                                                      ((((((((x10_long)(bb__148382))) + (((x10_long)1ll)))) * (((((x10_long)(bb__148382))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                                    
                                                    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    x10_long spMu__148385 =
                                                      mu;
                                                    
                                                    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    x10_long spNu__148386 =
                                                      nu;
                                                    
                                                    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    ::x10::lang::Runtime::runAsync(
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__4)))au_edu_anu_qm_ROFockMethod__closure__4(jbFunc__148381, aPoint__148411, conA__148413, zetaA__148412, roZ_val, aang__148409, threshold, roN_val, roL, spMu__148385, spNu__148386, localShellPairs, info, maxbraa__148414, maxbrab__148384, roK))));
                                                    
                                                    //#line 200 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                    if (((!::x10aux::struct_equals(b__148405,
                                                                                   ((nAtoms) - (((x10_long)1ll))))) ||
                                                        (!::x10aux::struct_equals(j__148400,
                                                                                  ((nbFunc__148402) - (((x10_long)1ll)))))))
                                                    {
                                                        nu =
                                                          ((nu) + (maxbrab__148384));
                                                    } else
                                                    {
                                                        
                                                        //#line 201 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                        mu =
                                                          ((mu) + (maxbraa__148414));
                                                        nu =
                                                          ((x10_long)0ll);
                                                    }
                                                    
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc291) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__148628 =
                                      __exc291;
                                    {
                                        ::x10::lang::Runtime::pushException(
                                          ct__148628);
                                    }
                                }
                            }
                            ::x10::lang::Runtime::stopFinish(
                              fs__148630);
                        }
                        
                        //#line 204 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10aux::nullCheck(range)->x10::lang::Rail< x10_long >::__set(
                          (__extension__ ({
                              x10_long pre__148415 = shell;
                              shell = ((shell) + (((x10_long)1ll)));
                              pre__148415;
                          }))
                          , localShellPairs->FMGL(size));
                    }
                }
                
            }
        }
        
        //#line 208 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        return localShellPairs->x10::util::GrowableRail< ::au::edu::anu::qm::ShellPair>::toRail();
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo;
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> shellPairRange_plh;
    x10_long nShells_val;
    ::x10::lang::Rail< x10_long >* offsetAtPlace;
    ::x10::lang::Rail< x10_long >* place2atom;
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol;
    ::x10::lang::Rail< x10_long >* place2func;
    x10_long nAtoms;
    x10_double roZ_val;
    x10_double threshold;
    x10_int roN_val;
    x10_int roL;
    x10_int roK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sizeInfo);
        buf.write(this->shellPairRange_plh);
        buf.write(this->nShells_val);
        buf.write(this->offsetAtPlace);
        buf.write(this->place2atom);
        buf.write(this->mol);
        buf.write(this->place2func);
        buf.write(this->nAtoms);
        buf.write(this->roZ_val);
        buf.write(this->threshold);
        buf.write(this->roN_val);
        buf.write(this->roL);
        buf.write(this->roK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> that_sizeInfo = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> that_shellPairRange_plh = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> >();
        x10_long that_nShells_val = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_offsetAtPlace = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_place2atom = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* that_mol = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
        ::x10::lang::Rail< x10_long >* that_place2func = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_nAtoms = buf.read<x10_long>();
        x10_double that_roZ_val = buf.read<x10_double>();
        x10_double that_threshold = buf.read<x10_double>();
        x10_int that_roN_val = buf.read<x10_int>();
        x10_int that_roL = buf.read<x10_int>();
        x10_int that_roK = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__3* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__3(that_sizeInfo, that_shellPairRange_plh, that_nShells_val, that_offsetAtPlace, that_place2atom, that_mol, that_place2func, that_nAtoms, that_roZ_val, that_threshold, that_roN_val, that_roL, that_roK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__3(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo, ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> shellPairRange_plh, x10_long nShells_val, ::x10::lang::Rail< x10_long >* offsetAtPlace, ::x10::lang::Rail< x10_long >* place2atom, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol, ::x10::lang::Rail< x10_long >* place2func, x10_long nAtoms, x10_double roZ_val, x10_double threshold, x10_int roN_val, x10_int roL, x10_int roK) : sizeInfo(sizeInfo), shellPairRange_plh(shellPairRange_plh), nShells_val(nShells_val), offsetAtPlace(offsetAtPlace), place2atom(place2atom), mol(mol), place2func(place2func), nAtoms(nAtoms), roZ_val(roZ_val), threshold(threshold), roN_val(roN_val), roL(roL), roK(roK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:148-209";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(){
        try {
            return ::x10aux::nullCheck(sizeInfo->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply())->x10::lang::Rail< x10_double >::__apply(
                     ((x10_long)0ll));
            
        }
        catch (::x10::lang::CheckedThrowable* __exc292) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc292;
                {
                    x10_double __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_double>(::x10::lang::Runtime::wrapAtChecked< x10_double >(
                                                                                                  __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sizeInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__5>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> that_sizeInfo = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
        au_edu_anu_qm_ROFockMethod__closure__5* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__5(that_sizeInfo);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__5(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo) : sizeInfo(sizeInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:223";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(){
        try {
            return ::x10aux::nullCheck(sizeInfo->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply())->x10::lang::Rail< x10_double >::__apply(
                     ((x10_long)0ll));
            
        }
        catch (::x10::lang::CheckedThrowable* __exc293) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  __exc293;
                {
                    x10_double __lowerer__var__3__ = ::x10aux::class_cast_unchecked<x10_double>(::x10::lang::Runtime::wrapAtChecked< x10_double >(
                                                                                                  __lowerer__var__2__));
                    return __lowerer__var__3__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sizeInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__6>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> that_sizeInfo = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
        au_edu_anu_qm_ROFockMethod__closure__6* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__6(that_sizeInfo);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__6(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo) : sizeInfo(sizeInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:227";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(){
        try {
            return ::x10aux::nullCheck(sizeInfo->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply())->x10::lang::Rail< x10_double >::__apply(
                     ((x10_long)1ll));
            
        }
        catch (::x10::lang::CheckedThrowable* __exc294) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__4__ =
                  __exc294;
                {
                    x10_double __lowerer__var__5__ = ::x10aux::class_cast_unchecked<x10_double>(::x10::lang::Runtime::wrapAtChecked< x10_double >(
                                                                                                  __lowerer__var__4__));
                    return __lowerer__var__5__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sizeInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__7>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> that_sizeInfo = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
        au_edu_anu_qm_ROFockMethod__closure__7* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__7(that_sizeInfo);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__7(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo) : sizeInfo(sizeInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:228";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__7_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__8_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(){
        try {
            return ::x10aux::nullCheck(sizeInfo->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply())->x10::lang::Rail< x10_double >::__apply(
                     ((x10_long)2ll));
            
        }
        catch (::x10::lang::CheckedThrowable* __exc295) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__6__ =
                  __exc295;
                {
                    x10_double __lowerer__var__7__ = ::x10aux::class_cast_unchecked<x10_double>(::x10::lang::Runtime::wrapAtChecked< x10_double >(
                                                                                                  __lowerer__var__6__));
                    return __lowerer__var__7__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sizeInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__8* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__8>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> that_sizeInfo = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
        au_edu_anu_qm_ROFockMethod__closure__8* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__8(that_sizeInfo);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__8(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo) : sizeInfo(sizeInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:229";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__8_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__9_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(){
        try {
            return ::x10aux::nullCheck(sizeInfo->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply())->x10::lang::Rail< x10_double >::__apply(
                     ((x10_long)3ll));
            
        }
        catch (::x10::lang::CheckedThrowable* __exc296) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__8__ =
                  __exc296;
                {
                    x10_double __lowerer__var__9__ = ::x10aux::class_cast_unchecked<x10_double>(::x10::lang::Runtime::wrapAtChecked< x10_double >(
                                                                                                  __lowerer__var__8__));
                    return __lowerer__var__9__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sizeInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__9* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__9>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> that_sizeInfo = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
        au_edu_anu_qm_ROFockMethod__closure__9* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__9(that_sizeInfo);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__9(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo) : sizeInfo(sizeInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:230";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__9_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__10_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *>::itable<au_edu_anu_qm_ROFockMethod__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::qm::ro::Integral_Pack * __apply(){
        return ::au::edu::anu::qm::ro::Integral_Pack::_make(jd->FMGL(roN),
                                                            jd->FMGL(roL),
                                                            omega, roThresh,
                                                            jd->FMGL(rad),
                                                            jd->FMGL(roZ));
        
    }
    
    // captured environment
    ::au::edu::anu::qm::JobDefaults* jd;
    x10_double omega;
    x10_double roThresh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->jd);
        buf.write(this->omega);
        buf.write(this->roThresh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__10* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__10>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::JobDefaults* that_jd = buf.read< ::au::edu::anu::qm::JobDefaults*>();
        x10_double that_omega = buf.read<x10_double>();
        x10_double that_roThresh = buf.read<x10_double>();
        au_edu_anu_qm_ROFockMethod__closure__10* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__10(that_jd, that_omega, that_roThresh);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__10(::au::edu::anu::qm::JobDefaults* jd, x10_double omega, x10_double roThresh) : jd(jd), omega(omega), roThresh(roThresh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:244";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__10_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__12_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ShellPair sp__148434 = ::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                     i__148438);
        
        //#line 252 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* tempY__148435 = ::x10::lang::Rail< x10_double >::_make((((((((x10_long)(::x10aux::nullCheck(sp__148434->FMGL(conA))->FMGL(size))) * ((x10_long)(::x10aux::nullCheck(sp__148434->FMGL(conB))->FMGL(size))))) * (((((x10_long)(sp__148434->FMGL(maxL)))) + (((x10_long)1ll)))))) * (((((x10_long)(sp__148434->FMGL(maxL)))) + (((x10_long)1ll))))));
        
        //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        (intPack_wlh->__apply())->GenclassY((double*)&((sp__148434->FMGL(bPoint)).x10__i), (double*)&((sp__148434->FMGL(aPoint)).x10__i), (sp__148434->FMGL(zetaB))->raw, (sp__148434->FMGL(zetaA))->raw, (sp__148434->FMGL(zetaB))->x10__size, (sp__148434->FMGL(zetaA))->x10__size, (roL), (tempY__148435)->raw);
        
        //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ylms_plh->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__set(
          i__148438, tempY__148435);
    }
    
    // captured environment
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp;
    x10_long i__148438;
    ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* intPack_wlh;
    x10_int roL;
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* ylms_plh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shp);
        buf.write(this->i__148438);
        buf.write(this->intPack_wlh);
        buf.write(this->roL);
        buf.write(this->ylms_plh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__12* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__12>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* that_shp = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>();
        x10_long that_i__148438 = buf.read<x10_long>();
        ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* that_intPack_wlh = buf.read< ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>*>();
        x10_int that_roL = buf.read<x10_int>();
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* that_ylms_plh = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
        au_edu_anu_qm_ROFockMethod__closure__12* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__12(that_shp, that_i__148438, that_intPack_wlh, that_roL, that_ylms_plh);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__12(::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp, x10_long i__148438, ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* intPack_wlh, x10_int roL, ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* ylms_plh) : shp(shp), i__148438(i__148438), intPack_wlh(intPack_wlh), roL(roL), ylms_plh(ylms_plh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:250-255";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__12_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__11_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::itable<au_edu_anu_qm_ROFockMethod__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* __apply(){
        
        //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp = shellPairs_plh->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::__apply();
        
        //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* ylms_plh =
          ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(shp)->FMGL(size)));
        {
            
            //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__148655 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    x10_long i__107914max__148436 = (((x10_long)(::x10aux::nullCheck(shp)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__148437;
                        for (i__148437 = ((x10_long)0ll); ((i__148437) <= (i__107914max__148436));
                             i__148437 = ((i__148437) + (((x10_long)1ll))))
                        {
                            x10_long i__148438 = i__148437;
                            ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__12)))au_edu_anu_qm_ROFockMethod__closure__12(shp, i__148438, intPack_wlh, roL, ylms_plh))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc297) {
                {
                    ::x10::lang::CheckedThrowable* ct__148653 = __exc297;
                    {
                        ::x10::lang::Runtime::pushException(ct__148653);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__148655);
        }
        
        //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        return ylms_plh;
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh;
    ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* intPack_wlh;
    x10_int roL;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shellPairs_plh);
        buf.write(this->intPack_wlh);
        buf.write(this->roL);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__11* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__11>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> that_shellPairs_plh = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >();
        ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* that_intPack_wlh = buf.read< ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>*>();
        x10_int that_roL = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__11* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__11(that_shellPairs_plh, that_intPack_wlh, that_roL);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__11(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh, ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* intPack_wlh, x10_int roL) : shellPairs_plh(shellPairs_plh), intPack_wlh(intPack_wlh), roL(roL) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:247-257";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__11_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__13_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::itable<au_edu_anu_qm_ROFockMethod__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* __apply(){
        
        //#line 267 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp = shellPairs_plh->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::__apply();
        x10_long pid = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 268 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ_plh =
          ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(shp)->FMGL(size)));
        
        //#line 269 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long mult = ::x10::lang::DoubleNatives::toLong(((::x10::lang::MathNatives::ceil(((((((x10_double) (nPlaces))) * (0.5))) + (0.5)))) - (((x10_double) (((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                                                                                                                                                                           ((x10_long)0ll))) &&
        ((pid) < (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll))))))
          ? (((x10_long)1ll)) : (((x10_long)0ll)))))));
        
        //#line 270 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long colStart = offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                              pid);
        
        //#line 271 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long colStop = offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                             ((((pid) + (mult))) % ::x10aux::zeroCheck(nPlaces)));
        
        //#line 272 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long i__107932max__148443 = (((x10_long)(::x10aux::nullCheck(shp)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__148444;
            for (i__148444 = ((x10_long)0ll); ((i__148444) <= (i__107932max__148443));
                 i__148444 = ((i__148444) + (((x10_long)1ll))))
            {
                x10_long i__148445 = i__148444;
                
                //#line 273 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::au::edu::anu::qm::ShellPair sp__148439 =
                  ::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                    i__148445);
                x10_long nu__148440 = sp__148439->FMGL(nu);
                x10_long mu__148441 = sp__148439->FMGL(mu);
                
                //#line 274 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_long size__148442 = ((x10_long)0ll);
                
                //#line 275 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                if (((((colStart) < (colStop)) && ((((colStart) <= (nu__148440)) &&
                                                   ((nu__148440) < (colStop))))) ||
                    (((colStart) >= (colStop)) && ((((nu__148440) < (colStop)) ||
                                                   ((nu__148440) >= (colStart)))))))
                {
                    
                    //#line 277 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    size__148442 = ((x10_long)(((((sp__148439->FMGL(maxbraa)) * (sp__148439->FMGL(maxbrab)))) * (roK))));
                }
                
                //#line 278 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                if (((((offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                          pid)) <= (nu__148440)) && ((nu__148440) < (offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                                       ((pid) + (((x10_long)1ll))))))) &&
                    ((mu__148441) > (nu__148440)))) {
                    size__148442 = ((x10_long)0ll);
                }
                
                //#line 279 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                if (((((offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                          pid)) <= (nu__148440)) && ((nu__148440) < (offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                                       ((pid) + (((x10_long)1ll))))))) &&
                    ((mu__148441) < (nu__148440)))) {
                    size__148442 = ((size__148442) * (((x10_long)2ll)));
                }
                
                //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                auxJ_plh->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__set(
                  i__148445, ::x10::lang::Rail< x10_double >::_make(size__148442));
            }
        }
        
        //#line 282 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        return auxJ_plh;
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh;
    x10_long nPlaces;
    ::x10::lang::Rail< x10_long >* offsetAtPlace;
    x10_int roK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shellPairs_plh);
        buf.write(this->nPlaces);
        buf.write(this->offsetAtPlace);
        buf.write(this->roK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__13* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__13>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> that_shellPairs_plh = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >();
        x10_long that_nPlaces = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_offsetAtPlace = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_int that_roK = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__13* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__13(that_shellPairs_plh, that_nPlaces, that_offsetAtPlace, that_roK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__13(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh, x10_long nPlaces, ::x10::lang::Rail< x10_long >* offsetAtPlace, x10_int roK) : shellPairs_plh(shellPairs_plh), nPlaces(nPlaces), offsetAtPlace(offsetAtPlace), roK(roK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:266-283";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__13_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__15_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ShellPair sp__148446 = ::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                     i__148452);
        x10_long mu__148447 = sp__148446->FMGL(mu);
        x10_long nu__148448 = sp__148446->FMGL(nu);
        
        //#line 297 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if (((((offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                  pid)) <= (nu__148448)) && ((nu__148448) < (offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                               ((pid) + (((x10_long)1ll))))))) &&
            (!::x10aux::struct_equals(mu__148447, nu__148448))))
        {
            
            //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long j__148449 = ((x10_long)-1ll);
            
            //#line 299 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            if (((mu__148447) > (nu__148448))) {
                {
                    for (j__148449 = ((i__148452) - (((x10_long)1ll)));
                         ((!::x10aux::struct_equals(::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                      j__148449)->FMGL(mu),
                                                    nu__148448)) ||
                         (!::x10aux::struct_equals(::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                     j__148449)->FMGL(nu),
                                                   mu__148447)));
                         j__148449 = ((j__148449) - (((x10_long)1ll))))
                    {
                     
                    }
                }
                
            } else {
                
                //#line 300 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                {
                    for (j__148449 = ((i__148452) + (((x10_long)1ll)));
                         ((!::x10aux::struct_equals(::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                      j__148449)->FMGL(mu),
                                                    nu__148448)) ||
                         (!::x10aux::struct_equals(::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                     j__148449)->FMGL(nu),
                                                   mu__148447)));
                         j__148449 = ((j__148449) + (((x10_long)1ll))))
                    {
                     
                    }
                }
                
            }
            
            //#line 301 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            auxKIdx_plh->x10::lang::Rail< x10_long >::__set(
              i__148452, ((j__148449) + (size)));
        } else {
            
            //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            auxKIdx_plh->x10::lang::Rail< x10_long >::__set(
              i__148452, ((x10_long)-1ll));
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp;
    x10_long i__148452;
    ::x10::lang::Rail< x10_long >* offsetAtPlace;
    x10_long pid;
    ::x10::lang::Rail< x10_long >* auxKIdx_plh;
    x10_long size;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shp);
        buf.write(this->i__148452);
        buf.write(this->offsetAtPlace);
        buf.write(this->pid);
        buf.write(this->auxKIdx_plh);
        buf.write(this->size);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__15* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__15>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* that_shp = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>();
        x10_long that_i__148452 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_offsetAtPlace = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_pid = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_auxKIdx_plh = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_size = buf.read<x10_long>();
        au_edu_anu_qm_ROFockMethod__closure__15* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__15(that_shp, that_i__148452, that_offsetAtPlace, that_pid, that_auxKIdx_plh, that_size);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__15(::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp, x10_long i__148452, ::x10::lang::Rail< x10_long >* offsetAtPlace, x10_long pid, ::x10::lang::Rail< x10_long >* auxKIdx_plh, x10_long size) : shp(shp), i__148452(i__148452), offsetAtPlace(offsetAtPlace), pid(pid), auxKIdx_plh(auxKIdx_plh), size(size) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:295-304";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__15_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__14_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*>::itable<au_edu_anu_qm_ROFockMethod__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_long >* __apply(){
        
        //#line 293 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp = shellPairs_plh->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::__apply();
        x10_long size = (x10_long)(::x10aux::nullCheck(shp)->FMGL(size));
        x10_long pid = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_long >* auxKIdx_plh = ::x10::lang::Rail< x10_long >::_make((x10_long)(::x10aux::nullCheck(shp)->FMGL(size)));
        {
            
            //#line 295 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__148660 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    x10_long i__107950max__148450 = ((size) - (((x10_long)1ll)));
                    {
                        x10_long i__148451;
                        for (i__148451 = ((x10_long)0ll); ((i__148451) <= (i__107950max__148450));
                             i__148451 = ((i__148451) + (((x10_long)1ll))))
                        {
                            x10_long i__148452 = i__148451;
                            ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__15)))au_edu_anu_qm_ROFockMethod__closure__15(shp, i__148452, offsetAtPlace, pid, auxKIdx_plh, size))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc298) {
                {
                    ::x10::lang::CheckedThrowable* ct__148658 = __exc298;
                    {
                        ::x10::lang::Runtime::pushException(ct__148658);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__148660);
        }
        
        //#line 305 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        return auxKIdx_plh;
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh;
    ::x10::lang::Rail< x10_long >* offsetAtPlace;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shellPairs_plh);
        buf.write(this->offsetAtPlace);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__14* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__14>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> that_shellPairs_plh = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >();
        ::x10::lang::Rail< x10_long >* that_offsetAtPlace = buf.read< ::x10::lang::Rail< x10_long >*>();
        au_edu_anu_qm_ROFockMethod__closure__14* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__14(that_shellPairs_plh, that_offsetAtPlace);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__14(::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh, ::x10::lang::Rail< x10_long >* offsetAtPlace) : shellPairs_plh(shellPairs_plh), offsetAtPlace(offsetAtPlace) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:292-306";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__14_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__16_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>::itable<au_edu_anu_qm_ROFockMethod__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::qm::ROFockMethod__RemoteBlock* __apply(){
        ::au::edu::anu::qm::ROFockMethod__RemoteBlock* alloc__148453 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod__RemoteBlock>()) ::au::edu::anu::qm::ROFockMethod__RemoteBlock());
        (alloc__148453)->::au::edu::anu::qm::ROFockMethod__RemoteBlock::_constructor(
          tbs);
        return alloc__148453;
        
    }
    
    // captured environment
    x10_long tbs;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->tbs);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__16* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__16>();
        buf.record_reference(storage);
        x10_long that_tbs = buf.read<x10_long>();
        au_edu_anu_qm_ROFockMethod__closure__16* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__16(that_tbs);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__16(x10_long tbs) : tbs(tbs) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:314";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__16_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__17_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(){
        return ::x10::lang::Rail< x10_double >::_make(((((maxam1) * (N))) * (((x10_long)(roK)))));
        
    }
    
    // captured environment
    x10_long maxam1;
    x10_long N;
    x10_int roK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->maxam1);
        buf.write(this->N);
        buf.write(this->roK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__17* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__17>();
        buf.record_reference(storage);
        x10_long that_maxam1 = buf.read<x10_long>();
        x10_long that_N = buf.read<x10_long>();
        x10_int that_roK = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__17* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__17(that_maxam1, that_N, that_roK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__17(x10_long maxam1, x10_long N, x10_int roK) : maxam1(maxam1), N(N), roK(roK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:319";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__17_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__18_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)(roK)));
        
    }
    
    // captured environment
    x10_int roK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->roK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__18* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__18>();
        buf.record_reference(storage);
        x10_int that_roK = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__18* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__18(that_roK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__18(x10_int roK) : roK(roK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:320";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__18_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__19_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)(roK)));
        
    }
    
    // captured environment
    x10_int roK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->roK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__19* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__19>();
        buf.record_reference(storage);
        x10_int that_roK = buf.read<x10_int>();
        au_edu_anu_qm_ROFockMethod__closure__19* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__19(that_roK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__19(x10_int roK) : roK(roK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:325";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__19_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__20_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)2ll));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__20* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__20>();
        buf.record_reference(storage);
        au_edu_anu_qm_ROFockMethod__closure__20* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__20();
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__20() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:326";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__20_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__21_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::itable<au_edu_anu_qm_ROFockMethod__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >* __apply(){
        return ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >::_make(((x10_long)2ll));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__21* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__21>();
        buf.record_reference(storage);
        au_edu_anu_qm_ROFockMethod__closure__21* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__21();
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__21() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:333";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__21_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__23_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__23 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__23> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 356 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        saved_this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
          ((x10_long)1ll));
        
        //#line 357 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long nPlaces = ((x10_long)::x10aux::num_hosts);
        
        //#line 358 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long pid = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 363 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ = saved_this->FMGL(auxJ_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::__apply();
        
        //#line 364 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::matrix::DenseMatrix* localJ = ::x10aux::nullCheck(saved_this->FMGL(distJ))->local();
        ::x10::matrix::DenseMatrix* localK = ::x10aux::nullCheck(saved_this->FMGL(distK))->local();
        
        //#line 365 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* dlm = saved_this->FMGL(dlm_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply();
        
        //#line 367 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::matrix::DenseMatrix* bMat =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (bMat)->::x10::matrix::DenseMatrix::_constructor(saved_this->FMGL(nOrbitals),
                                                         ((((x10_long)(saved_this->FMGL(roK)))) * (::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                                                                     pid))),
                                                         ::x10aux::nullCheck(::x10aux::nullCheck(saved_this->FMGL(halfAuxMat))->local())->FMGL(d));
        
        //#line 369 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10aux::nullCheck(localJ)->reset();
        
        //#line 370 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10aux::nullCheck(localK)->reset();
        
        //#line 372 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if ((!::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                      ::x10::lang::Place::FMGL(FIRST_PLACE__get)())))
        {
            
            //#line 373 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10aux::nullCheck(saved_this->FMGL(densityMos_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::__apply())->x10::lang::Rail< ::x10::matrix::DenseMatrix* >::__set(
              ((x10_long)0ll), (__extension__ ({
                  ::x10::matrix::DenseMatrix* alloc__107758 =
                     (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
                  (alloc__107758)->::x10::matrix::DenseMatrix::_constructor(
                    saved_this->FMGL(N), saved_this->FMGL(N));
                  alloc__107758;
              }))
              );
            
            //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10aux::nullCheck(saved_this->FMGL(densityMos_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::__apply())->x10::lang::Rail< ::x10::matrix::DenseMatrix* >::__set(
              ((x10_long)1ll), (__extension__ ({
                  ::x10::matrix::DenseMatrix* alloc__107759 =
                     (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
                  (alloc__107759)->::x10::matrix::DenseMatrix::_constructor(
                    saved_this->FMGL(N), saved_this->FMGL(N));
                  alloc__107759;
              }))
              );
        }
        
        //#line 376 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::matrix::DenseMatrix* localDensity = ::x10aux::nullCheck(saved_this->FMGL(densityMos_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::__apply())->x10::lang::Rail< ::x10::matrix::DenseMatrix* >::__apply(
                                                     ((x10_long)0ll));
        
        //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::matrix::DenseMatrix* localMos = ::x10aux::nullCheck(saved_this->FMGL(densityMos_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::__apply())->x10::lang::Rail< ::x10::matrix::DenseMatrix* >::__apply(
                                                 ((x10_long)1ll));
        
        //#line 378 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->bcast< x10_double >(
          ::x10::lang::Place::FMGL(FIRST_PLACE__get)(), ::x10aux::nullCheck(localDensity)->FMGL(d),
          ((x10_long)0ll), ::x10aux::nullCheck(localDensity)->FMGL(d),
          ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(localDensity)->FMGL(d))->FMGL(size)));
        
        //#line 379 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->bcast< x10_double >(
          ::x10::lang::Place::FMGL(FIRST_PLACE__get)(), ::x10aux::nullCheck(localMos)->FMGL(d),
          ((x10_long)0ll), ::x10aux::nullCheck(localMos)->FMGL(d),
          ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(localMos)->FMGL(d))->FMGL(size)));
        
        //#line 382 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_int i__107968max__148468 = saved_this->FMGL(roN);
        {
            x10_int i__148469;
            for (i__148469 = ((x10_int)0); ((i__148469) <= (i__107968max__148468));
                 i__148469 = ((i__148469) + (((x10_int)1))))
            {
                x10_int ron__148470 = i__148469;
                
                //#line 383 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::au::edu::anu::qm::ROFockMethod* t__148461 =
                  saved_this;
                ::x10::matrix::DenseMatrix* density__148462 =
                  localDensity;
                ::x10::matrix::DenseMatrix* mos__148463 =
                  localMos;
                x10_int ron__148464 = ron__148470;
                ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ__148465 =
                  auxJ;
                ::x10::matrix::DenseMatrix* bMat__148466 =
                  bMat;
                ::x10::lang::Rail< x10_double >* dlm__148467 =
                  dlm;
                if (!(((::x10aux::struct_equals(::x10aux::nullCheck(density__148462)->FMGL(N),
                                                ::x10aux::nullCheck(t__148461)->FMGL(N))) &&
                    (::x10aux::struct_equals(::x10aux::nullCheck(mos__148463)->FMGL(N),
                                             ::x10aux::nullCheck(t__148461)->FMGL(N))))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149800))));
                }
                ::x10aux::nullCheck(t__148461)->computeAuxBDlm(
                  density__148462, mos__148463, ron__148464,
                  auxJ__148465, bMat__148466, dlm__148467);
                
                //#line 384 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                saved_this->computeK(ron__148470, bMat, localK);
                
                //#line 385 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                saved_this->computeJ(ron__148470, auxJ, dlm,
                                     localJ);
                
                //#line 386 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::x10::util::Team::FMGL(WORLD__get)()->x10::util::Team::barrier();
            }
        }
        
        //#line 389 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        saved_this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
          ((x10_long)7ll));
        
        //#line 391 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* e = saved_this->FMGL(e_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply();
        {
            
            //#line 393 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__148664 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    
                    //#line 394 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::x10::lang::Rail< void >::asyncCopy< x10_double >(
                      ::x10aux::nullCheck(localJ)->FMGL(d),
                      ((x10_long)0ll), place0GRefJ, ((::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                        pid)) * (saved_this->FMGL(N))),
                      ((::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                          pid)) * (saved_this->FMGL(N))));
                    
                    //#line 395 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::x10::lang::Rail< void >::asyncCopy< x10_double >(
                      ::x10aux::nullCheck(localK)->FMGL(d),
                      ((x10_long)0ll), place0GRefK, ((::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                        pid)) * (saved_this->FMGL(N))),
                      ((::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                          pid)) * (saved_this->FMGL(N))));
                    
                    //#line 399 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long rowCount = ::x10aux::nullCheck(localJ)->FMGL(M);
                    
                    //#line 400 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long colCount = ::x10aux::nullCheck(localJ)->FMGL(N);
                    
                    //#line 401 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long mult = ::x10::lang::DoubleNatives::toLong(((::x10::lang::MathNatives::ceil(((((((x10_double) (nPlaces))) * (0.5))) + (0.5)))) - (((x10_double) (((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                                                                                                                                                                                       ((x10_long)0ll))) &&
                    ((pid) < (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll))))))
                      ? (((x10_long)1ll)) : (((x10_long)0ll)))))));
                    
                    //#line 402 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long colStart = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                          ((((pid) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(nPlaces)));
                    
                    //#line 403 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long colStop = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                         ((((pid) + (mult))) % ::x10aux::zeroCheck(nPlaces)));
                    
                    //#line 405 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_double eJ = 0.0;
                    
                    //#line 406 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    {
                        x10_long j0;
                        x10_long j;
                        for (j0 = ((x10_long)0ll), j = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                         pid);
                             ((j) < (::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                       ((pid) + (((x10_long)1ll))))));
                             j0 = ((j0) + (((x10_long)1ll))),
                               j = ((j) + (((x10_long)1ll))))
                        {
                            
                            //#line 408 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            {
                                x10_long i0;
                                x10_long i;
                                for (i0 = ((x10_long)0ll),
                                       i = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                             pid); ((i) < (j));
                                     i0 = ((i0) + (((x10_long)1ll))),
                                       i = ((i) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 409 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    eJ = ((eJ) + ((((__extension__ ({
                                        
                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                        x10_long x__147503 =
                                          i;
                                        x10_long y__147504 =
                                          j;
                                        ::x10aux::nullCheck(::x10aux::nullCheck(localDensity)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                          ((((y__147504) * (::x10aux::nullCheck(localDensity)->FMGL(M)))) + (x__147503)));
                                    }))
                                    ) * ((__extension__ ({
                                        
                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                        x10_long x__147505 =
                                          i0;
                                        x10_long y__147506 =
                                          j;
                                        ::x10aux::nullCheck(::x10aux::nullCheck(localJ)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                          ((((y__147506) * (::x10aux::nullCheck(localJ)->FMGL(M)))) + (x__147505)));
                                    }))
                                    ))));
                                }
                            }
                            
                            //#line 412 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            eJ = ((eJ) + (((((0.5) * ((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__147507 = j;
                                x10_long y__147508 = j;
                                ::x10aux::nullCheck(::x10aux::nullCheck(localDensity)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__147508) * (::x10aux::nullCheck(localDensity)->FMGL(M)))) + (x__147507)));
                            }))
                            ))) * ((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__147509 = j0;
                                x10_long y__147510 = j;
                                ::x10aux::nullCheck(::x10aux::nullCheck(localJ)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__147510) * (::x10aux::nullCheck(localJ)->FMGL(M)))) + (x__147509)));
                            }))
                            ))));
                        }
                    }
                    
                    //#line 414 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if (((colStart) < (colStop))) {
                        
                        //#line 415 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long j;
                            for (j = colStart; ((j) < (colStop));
                                 j = ((j) + (((x10_long)1ll))))
                            {
                                
                                //#line 416 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                {
                                    x10_long i;
                                    x10_long ii;
                                    for (i = ((x10_long)0ll),
                                           ii = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                  pid); ((i) < (rowCount));
                                         i = ((i) + (((x10_long)1ll))),
                                           ii = ((ii) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 417 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        eJ = ((eJ) + ((((__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147511 =
                                              ii;
                                            x10_long y__147512 =
                                              j;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(localDensity)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147512) * (::x10aux::nullCheck(localDensity)->FMGL(M)))) + (x__147511)));
                                        }))
                                        ) * ((__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147513 =
                                              i;
                                            x10_long y__147514 =
                                              j;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(localJ)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147514) * (::x10aux::nullCheck(localJ)->FMGL(M)))) + (x__147513)));
                                        }))
                                        ))));
                                    }
                                }
                                
                            }
                        }
                        
                    } else 
                    //#line 421 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if (((mult) > (((x10_long)1ll)))) {
                        
                        //#line 422 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long j;
                            for (j = colStart; ((j) < (colCount));
                                 j = ((j) + (((x10_long)1ll))))
                            {
                                
                                //#line 423 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                {
                                    x10_long i;
                                    x10_long ii;
                                    for (i = ((x10_long)0ll),
                                           ii = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                  pid); ((i) < (rowCount));
                                         i = ((i) + (((x10_long)1ll))),
                                           ii = ((ii) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 424 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        eJ = ((eJ) + ((((__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147515 =
                                              ii;
                                            x10_long y__147516 =
                                              j;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(localDensity)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147516) * (::x10aux::nullCheck(localDensity)->FMGL(M)))) + (x__147515)));
                                        }))
                                        ) * ((__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147517 =
                                              i;
                                            x10_long y__147518 =
                                              j;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(localJ)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147518) * (::x10aux::nullCheck(localJ)->FMGL(M)))) + (x__147517)));
                                        }))
                                        ))));
                                    }
                                }
                                
                            }
                        }
                        
                        //#line 428 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long j;
                            for (j = ((x10_long)0ll); ((j) < (colStop));
                                 j = ((j) + (((x10_long)1ll))))
                            {
                                
                                //#line 429 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                {
                                    x10_long i;
                                    x10_long ii;
                                    for (i = ((x10_long)0ll),
                                           ii = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                  pid); ((i) < (rowCount));
                                         i = ((i) + (((x10_long)1ll))),
                                           ii = ((ii) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 430 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        eJ = ((eJ) + ((((__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147519 =
                                              ii;
                                            x10_long y__147520 =
                                              j;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(localDensity)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147520) * (::x10aux::nullCheck(localDensity)->FMGL(M)))) + (x__147519)));
                                        }))
                                        ) * ((__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147521 =
                                              i;
                                            x10_long y__147522 =
                                              j;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(localJ)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147522) * (::x10aux::nullCheck(localJ)->FMGL(M)))) + (x__147521)));
                                        }))
                                        ))));
                                    }
                                }
                                
                            }
                        }
                        
                    }
                    
                    //#line 435 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_double >::__set(
                      ((x10_long)0ll), eJ);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc300) {
                {
                    ::x10::lang::CheckedThrowable* ct__148662 =
                      __exc300;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__148662);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__148664);
        }
        
        //#line 438 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_double >(
          e, ((x10_long)0ll), e, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(e)->FMGL(size)),
          ((x10_int)0));
        
        //#line 440 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        saved_this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
          ((x10_long)7ll));
        
        //#line 441 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        saved_this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
          ((x10_long)1ll));
        
        //#line 444 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_long >(
          saved_this->FMGL(timer)->FMGL(total), ((x10_long)0ll),
          saved_this->FMGL(timer)->FMGL(total), ((x10_long)0ll),
          (x10_long)(::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->FMGL(size)),
          ((x10_int)6));
        
        //#line 445 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                     ::x10::lang::Place::FMGL(FIRST_PLACE__get)())))
        {
            
            //#line 446 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tAux = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)2ll))))) / (1.0E9));
            
            //#line 447 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tJ = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                               ((x10_long)3ll))))) / (1.0E9));
            
            //#line 448 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tDsyrk = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                   ((x10_long)5ll))))) / (1.0E9));
            
            //#line 449 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tDgemm = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                   ((x10_long)6ll))))) / (1.0E9));
            
            //#line 450 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tK = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                               ((x10_long)4ll))))) / (1.0E9));
            
            //#line 451 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tGather = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                    ((x10_long)7ll))))) / (1.0E9));
            
            //#line 452 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double tPerPlace = ((((x10_double) (::x10aux::nullCheck(saved_this->FMGL(timer)->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                      ((x10_long)1ll))))) / (1.0E9));
            
            //#line 453 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::ROFockMethod_Strings::sl__149801),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tAux),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tJ),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tDsyrk),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tDgemm),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tK),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tGather));
            
            //#line 454 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::ROFockMethod_Strings::sl__149802),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(tPerPlace));
            
            //#line 455 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->flush();
        }
        
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    ::x10::lang::GlobalRail<x10_double> place0GRefJ;
    ::x10::lang::GlobalRail<x10_double> place0GRefK;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->place0GRefJ);
        buf.write(this->place0GRefK);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__23* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__23>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        ::x10::lang::GlobalRail<x10_double> that_place0GRefJ = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        ::x10::lang::GlobalRail<x10_double> that_place0GRefK = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        au_edu_anu_qm_ROFockMethod__closure__23* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__23(that_saved_this, that_place0GRefJ, that_place0GRefK);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__23(::au::edu::anu::qm::ROFockMethod* saved_this, ::x10::lang::GlobalRail<x10_double> place0GRefJ, ::x10::lang::GlobalRail<x10_double> place0GRefK) : saved_this(saved_this), place0GRefJ(place0GRefJ), place0GRefK(place0GRefK) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:355-457";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__23_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__22_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__22 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__22> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__148674;
            for (place__148674 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__148674));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__148674));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__23)))au_edu_anu_qm_ROFockMethod__closure__23(saved_this, place0GRefJ, place0GRefK))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    ::x10::lang::GlobalRail<x10_double> place0GRefJ;
    ::x10::lang::GlobalRail<x10_double> place0GRefK;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->place0GRefJ);
        buf.write(this->place0GRefK);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__22* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__22>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        ::x10::lang::GlobalRail<x10_double> that_place0GRefJ = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        ::x10::lang::GlobalRail<x10_double> that_place0GRefK = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_qm_ROFockMethod__closure__22* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__22(that_saved_this, that_place0GRefJ, that_place0GRefK, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__22(::au::edu::anu::qm::ROFockMethod* saved_this, ::x10::lang::GlobalRail<x10_double> place0GRefJ, ::x10::lang::GlobalRail<x10_double> place0GRefK, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), place0GRefJ(place0GRefJ), place0GRefK(place0GRefK), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:355-457";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__22_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__24_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__24 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__24> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 462 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long placeRows__148475 = ::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                       pid__148482);
        
        //#line 463 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long placeGOffset__148476 = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                          pid__148482);
        
        //#line 464 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long placeTempOffset__148477 = ((::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                               pid__148482)) * (saved_this->FMGL(N)));
        
        //#line 465 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        {
            x10_long j__148478;
            for (j__148478 = ((x10_long)0ll); ((j__148478) < (saved_this->FMGL(N)));
                 j__148478 = ((j__148478) + (((x10_long)1ll))))
            {
                
                //#line 466 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                {
                    x10_long i__148479;
                    for (i__148479 = ((x10_long)0ll); ((i__148479) < (placeRows__148475));
                         i__148479 = ((i__148479) + (((x10_long)1ll))))
                    {
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__148471 = ((i__148479) + (placeGOffset__148476));
                        x10_long y__148472 = j__148478;
                        x10_double v__148473 = (-(tempK->x10::lang::Rail< x10_double >::__apply(
                                                    ((((placeTempOffset__148477) + (((j__148478) * (placeRows__148475))))) + (i__148479)))));
                        x10_double ret__148474;
                        
                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                          ((((y__148472) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148471)),
                          v__148473);
                        
                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__148474 = v__148473;
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__148474;
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    x10_long pid__148482;
    ::x10::lang::Rail< x10_double >* tempK;
    ::x10::matrix::DenseMatrix* gMatrix;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->pid__148482);
        buf.write(this->tempK);
        buf.write(this->gMatrix);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__24* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__24>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        x10_long that_pid__148482 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_double >* that_tempK = buf.read< ::x10::lang::Rail< x10_double >*>();
        ::x10::matrix::DenseMatrix* that_gMatrix = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_ROFockMethod__closure__24* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__24(that_saved_this, that_pid__148482, that_tempK, that_gMatrix);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__24(::au::edu::anu::qm::ROFockMethod* saved_this, x10_long pid__148482, ::x10::lang::Rail< x10_double >* tempK, ::x10::matrix::DenseMatrix* gMatrix) : saved_this(saved_this), pid__148482(pid__148482), tempK(tempK), gMatrix(gMatrix) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:461-468";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__24_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__25_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__25 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__25> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 473 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long qid__148489 = ((pid__148496) - (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll)))));
        
        //#line 474 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long offset__148490 = ((::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                      qid__148489)) - (((::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                           qid__148489)) / ::x10aux::zeroCheck(((x10_long)2ll)))));
        
        //#line 475 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        {
            x10_long i__148491;
            for (i__148491 = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                               pid__148496); ((i__148491) < (::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                               ((pid__148496) + (((x10_long)1ll))))));
                 i__148491 = ((i__148491) + (((x10_long)1ll))))
            {
                
                //#line 476 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                {
                    x10_long j__148492;
                    for (j__148492 = ((::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                         qid__148489)) + (offset__148490));
                         ((j__148492) < (::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                           ((qid__148489) + (((x10_long)1ll))))));
                         j__148492 = ((j__148492) + (((x10_long)1ll))))
                    {
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__148483 = i__148491;
                        x10_long y__148484 = j__148492;
                        x10_double v__148485 = (__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__148486 = j__148492;
                            x10_long y__148487 = i__148491;
                            ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__148487) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148486)));
                        }))
                        ;
                        x10_double ret__148488;
                        
                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                          ((((y__148484) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148483)),
                          v__148485);
                        
                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__148488 = v__148485;
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__148488;
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10_long pid__148496;
    x10_long nPlaces;
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    ::x10::matrix::DenseMatrix* gMatrix;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pid__148496);
        buf.write(this->nPlaces);
        buf.write(this->saved_this);
        buf.write(this->gMatrix);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__25* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__25>();
        buf.record_reference(storage);
        x10_long that_pid__148496 = buf.read<x10_long>();
        x10_long that_nPlaces = buf.read<x10_long>();
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        ::x10::matrix::DenseMatrix* that_gMatrix = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_ROFockMethod__closure__25* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__25(that_pid__148496, that_nPlaces, that_saved_this, that_gMatrix);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__25(x10_long pid__148496, x10_long nPlaces, ::au::edu::anu::qm::ROFockMethod* saved_this, ::x10::matrix::DenseMatrix* gMatrix) : pid__148496(pid__148496), nPlaces(nPlaces), saved_this(saved_this), gMatrix(gMatrix) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:472-478";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__25_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__26_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__26 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__26> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 483 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long placeRows__148507 = ::x10aux::nullCheck(saved_this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                       pid__148514);
        
        //#line 484 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long placeGOffset__148508 = ::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                          pid__148514);
        
        //#line 485 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long placeTempOffset__148509 = ((::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                               pid__148514)) * (saved_this->FMGL(N)));
        
        //#line 486 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        {
            x10_long j__148510;
            for (j__148510 = ((x10_long)0ll); ((j__148510) < (saved_this->FMGL(N)));
                 j__148510 = ((j__148510) + (((x10_long)1ll))))
            {
                
                //#line 487 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                {
                    x10_long i__148511;
                    for (i__148511 = ((x10_long)0ll); ((i__148511) < (placeRows__148507));
                         i__148511 = ((i__148511) + (((x10_long)1ll))))
                    {
                        
                        //#line 488 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::matrix::DenseMatrix* a__148501 =
                          gMatrix;
                        x10_long i__148502 = ((i__148511) + (placeGOffset__148508));
                        x10_long i__148503 = j__148510;
                        x10_double r__148504 = (((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__148505 = i__148502;
                            x10_long y__148506 = i__148503;
                            ::x10aux::nullCheck(::x10aux::nullCheck(a__148501)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__148506) * (::x10aux::nullCheck(a__148501)->FMGL(M)))) + (x__148505)));
                        }))
                        ) + (tempJ->x10::lang::Rail< x10_double >::__apply(
                               ((((placeTempOffset__148509) + (((j__148510) * (placeRows__148507))))) + (i__148511)))));
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__148497 = i__148502;
                        x10_long y__148498 = i__148503;
                        x10_double v__148499 = r__148504;
                        x10_double ret__148500;
                        
                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(a__148501)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                          ((((y__148498) * (::x10aux::nullCheck(a__148501)->FMGL(M)))) + (x__148497)),
                          v__148499);
                        
                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__148500 = v__148499;
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__148500;
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    x10_long pid__148514;
    ::x10::matrix::DenseMatrix* gMatrix;
    ::x10::lang::Rail< x10_double >* tempJ;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->pid__148514);
        buf.write(this->gMatrix);
        buf.write(this->tempJ);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__26* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__26>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        x10_long that_pid__148514 = buf.read<x10_long>();
        ::x10::matrix::DenseMatrix* that_gMatrix = buf.read< ::x10::matrix::DenseMatrix*>();
        ::x10::lang::Rail< x10_double >* that_tempJ = buf.read< ::x10::lang::Rail< x10_double >*>();
        au_edu_anu_qm_ROFockMethod__closure__26* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__26(that_saved_this, that_pid__148514, that_gMatrix, that_tempJ);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__26(::au::edu::anu::qm::ROFockMethod* saved_this, x10_long pid__148514, ::x10::matrix::DenseMatrix* gMatrix, ::x10::lang::Rail< x10_double >* tempJ) : saved_this(saved_this), pid__148514(pid__148514), gMatrix(gMatrix), tempJ(tempJ) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:482-489";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__26_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__27_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class au_edu_anu_qm_ROFockMethod__closure__27 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__27> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Rail< x10_double >* d){
        ::x10aux::nullCheck(d)->x10::lang::Rail< x10_double >::clear();
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__27* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__27>();
        buf.record_reference(storage);
        au_edu_anu_qm_ROFockMethod__closure__27* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__27();
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__27() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:548";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__27_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__28_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class au_edu_anu_qm_ROFockMethod__closure__28 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1<x10_long>::itable<au_edu_anu_qm_ROFockMethod__closure__28> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(x10_long shellIdx){
        
        //#line 560 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long shellPairIdx0 = ((x10_long)0ll);
        
        //#line 561 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if (((shellIdx) > (((x10_long)0ll)))) {
            shellPairIdx0 = ::x10aux::nullCheck(range)->x10::lang::Rail< x10_long >::__apply(
                              ((shellIdx) - (((x10_long)1ll))));
        }
        
        //#line 562 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ShellPair shellPair0 = ::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                     shellPairIdx0);
        
        //#line 563 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long muSize = ((((shellPair0->FMGL(mu2)) - (shellPair0->FMGL(mu)))) + (((x10_long)1ll)));
        
        //#line 564 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* auxK = ::x10aux::nullCheck(saved_this->FMGL(auxK_wlh))->__apply();
        
        //#line 565 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10aux::nullCheck(auxK)->x10::lang::Rail< x10_double >::clear();
        
        //#line 567 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ro::Integral_Pack * intPack =
          ::x10aux::nullCheck(saved_this->FMGL(intPack_wlh))->__apply();
        ::x10::lang::Rail< x10_double >* dlm_partial = ::x10aux::nullCheck(saved_this->FMGL(dlm_wlh))->__apply();
        
        //#line 568 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        {
            x10_long shellPairIdx;
            for (shellPairIdx = shellPairIdx0; ((shellPairIdx) < (::x10aux::nullCheck(range)->x10::lang::Rail< x10_long >::__apply(
                                                                    shellIdx)));
                 shellPairIdx = ((shellPairIdx) + (((x10_long)1ll))))
            {
                
                //#line 569 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::au::edu::anu::qm::ShellPair sp = ::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                                     shellPairIdx);
                
                //#line 570 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                x10_int maxLron = ::x10aux::nullCheck(sp->FMGL(L))->x10::lang::Rail< x10_int >::__apply(
                                    ((x10_long)(ron)));
                
                //#line 571 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                if (((((x10_long)(maxLron))) >= (((x10_long)0ll))))
                {
                    
                    //#line 572 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::x10::lang::Rail< x10_double >* temp =
                      ::x10aux::nullCheck(auxJ)->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                        shellPairIdx);
                    
                    //#line 573 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long maxLm = ((((((x10_long)(maxLron))) + (((x10_long)1ll)))) * (((((x10_long)(maxLron))) + (((x10_long)1ll)))));
                    x10_long nuSize = ((((sp->FMGL(nu2)) - (sp->FMGL(nu)))) + (((x10_long)1ll)));
                    x10_long srcshellPairIdx = ::x10aux::nullCheck(auxKIdx)->x10::lang::Rail< x10_long >::__apply(
                                                 shellPairIdx);
                    
                    //#line 574 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_int off = ((x10_int) (((((((x10_long)(saved_this->FMGL(roK)))) * (muSize))) * (sp->FMGL(nu)))));
                    x10_long asize = ((((muSize) * (nuSize))) * (((x10_long)(saved_this->FMGL(roK)))));
                    
                    //#line 575 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long ind = ((x10_long)0ll);
                    
                    //#line 576 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if ((((srcshellPairIdx) < (((x10_long)0ll))) ||
                        ((srcshellPairIdx) >= (size)))) {
                        
                        //#line 577 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Rail< x10_double >* y =
                          ::x10aux::nullCheck(ylm)->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                            shellPairIdx);
                        
                        //#line 578 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        (intPack)->Genclass((sp->FMGL(bang)), (sp->FMGL(aang)), (double*)&((sp->FMGL(bPoint)).x10__i), (double*)&((sp->FMGL(aPoint)).x10__i), (sp->FMGL(zetaB))->raw, (sp->FMGL(zetaA))->raw, (sp->FMGL(conB))->raw, (sp->FMGL(conA))->raw, (sp->FMGL(conB))->x10__size, (sp->FMGL(conA))->x10__size, (ron), (maxLron), (y)->raw, (sp->FMGL(maxL)), (off), (auxK)->raw);
                        
                        //#line 579 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long nu;
                            for (nu = sp->FMGL(nu); ((nu) <= (sp->FMGL(nu2)));
                                 nu = ((nu) + (((x10_long)1ll))))
                            {
                                {
                                    x10_long mu;
                                    for (mu = sp->FMGL(mu);
                                         ((mu) <= (sp->FMGL(mu2)));
                                         mu = ((mu) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 580 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_double nrm = ((::x10aux::nullCheck(saved_this->FMGL(norm))->x10::lang::Rail< x10_double >::__apply(
                                                             mu)) * (::x10aux::nullCheck(saved_this->FMGL(norm))->x10::lang::Rail< x10_double >::__apply(
                                                                       nu)));
                                        
                                        //#line 581 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        {
                                            x10_long rolm;
                                            for (rolm = ((x10_long)0ll);
                                                 ((rolm) < (maxLm));
                                                 rolm = ((rolm) + (((x10_long)1ll))),
                                                   ind = ((ind) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 582 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                ::x10::lang::Rail< x10_double >* a__148556 =
                                                  auxK;
                                                x10_long i__148557 =
                                                  ((((x10_long)(off))) + (ind));
                                                x10_double r__148558 =
                                                  ((::x10aux::nullCheck(a__148556)->x10::lang::Rail< x10_double >::__apply(
                                                      i__148557)) * (nrm));
                                                ::x10aux::nullCheck(a__148556)->x10::lang::Rail< x10_double >::__set(
                                                  i__148557,
                                                  r__148558);
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    } else 
                    //#line 584 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if ((doK || (((srcshellPairIdx) > (((x10_long)0ll))) &&
                        ((sp->FMGL(nu)) > (sp->FMGL(mu))))))
                    {
                        
                        //#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Rail< x10_double >* src =
                          ::x10aux::nullCheck(auxJ)->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                            srcshellPairIdx);
                        
                        //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        if ((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(src)->FMGL(size)),
                                                     ((x10_long)0ll))))
                        {
                            
                            //#line 587 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            src = ::x10aux::nullCheck(auxJ)->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                    shellPairIdx);
                            ind = asize;
                        }
                        
                        //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long mu;
                            x10_long tmu;
                            for (mu = sp->FMGL(mu), tmu =
                                                      ((x10_long)0ll);
                                 ((mu) <= (sp->FMGL(mu2)));
                                 mu = ((mu) + (((x10_long)1ll))),
                                   tmu = ((tmu) + (((x10_long)1ll))))
                            {
                                {
                                    x10_long nu;
                                    for (nu = sp->FMGL(nu);
                                         ((nu) <= (sp->FMGL(nu2)));
                                         nu = ((nu) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 590 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_long i__108112max__148560 =
                                          ((maxLm) - (((x10_long)1ll)));
                                        {
                                            x10_long i__148561;
                                            for (i__148561 =
                                                   ((x10_long)0ll);
                                                 ((i__148561) <= (i__108112max__148560));
                                                 i__148561 =
                                                   ((i__148561) + (((x10_long)1ll))))
                                            {
                                                x10_long rolm__148562 =
                                                  i__148561;
                                                
                                                //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                ::x10aux::nullCheck(auxK)->x10::lang::Rail< x10_double >::__set(
                                                  ((((((((nu) * (muSize))) + (tmu))) * (((x10_long)(saved_this->FMGL(roK)))))) + (rolm__148562)),
                                                  ::x10aux::nullCheck(src)->x10::lang::Rail< x10_double >::__apply(
                                                    (__extension__ ({
                                                        x10_long pre__148559 =
                                                          ind;
                                                        ind =
                                                          ((ind) + (((x10_long)1ll)));
                                                        pre__148559;
                                                    }))
                                                    ));
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    }
                    
                    //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if ((!::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(temp)->FMGL(size)),
                                                  ((x10_long)0ll))))
                    {
                        ::x10::lang::Rail< void >::copy< x10_double >(
                          auxK, ((x10_long)(off)), temp, ((x10_long)0ll),
                          asize);
                    } else 
                    //#line 595 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if (((srcshellPairIdx) >= (size))) {
                        
                        //#line 596 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Rail< x10_double >* temp2 =
                          ::x10aux::nullCheck(auxJ)->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                            ((srcshellPairIdx) - (size)));
                        
                        //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Rail< void >::copy< x10_double >(
                          auxK, ((x10_long)(off)), temp2,
                          asize, asize);
                    }
                    
                    //#line 599 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if (((srcshellPairIdx) >= (size))) {
                        ::x10::lang::Rail< x10_long >* a__148563 =
                          auxKIdx;
                        x10_long i__148564 = ((srcshellPairIdx) - (size));
                        x10_long r__148565 = ((::x10aux::nullCheck(a__148563)->x10::lang::Rail< x10_long >::__apply(
                                                 i__148564)) - (size));
                        ::x10aux::nullCheck(a__148563)->x10::lang::Rail< x10_long >::__set(
                          i__148564, r__148565);
                    }
                    
                    //#line 602 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ind = ((x10_long)0ll);
                    
                    //#line 603 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if ((::x10aux::struct_equals(sp->FMGL(mu),
                                                 sp->FMGL(nu))))
                    {
                        
                        //#line 604 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long nu;
                            for (nu = sp->FMGL(nu); ((nu) <= (sp->FMGL(nu2)));
                                 nu = ((nu) + (((x10_long)1ll))))
                            {
                                {
                                    x10_long mu;
                                    for (mu = sp->FMGL(mu);
                                         ((mu) <= (sp->FMGL(mu2)));
                                         mu = ((mu) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 605 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_double scdmn =
                                          (__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147572 =
                                              mu;
                                            x10_long y__147573 =
                                              nu;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(density)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147573) * (::x10aux::nullCheck(density)->FMGL(M)))) + (x__147572)));
                                        }))
                                        ;
                                        
                                        //#line 606 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        {
                                            x10_long rolm;
                                            for (rolm = ((x10_long)0ll);
                                                 ((rolm) < (maxLm));
                                                 rolm = ((rolm) + (((x10_long)1ll))),
                                                   ind = ((ind) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 607 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                ::x10::lang::Rail< x10_double >* a__148566 =
                                                  dlm_partial;
                                                x10_long i__148567 =
                                                  rolm;
                                                x10_double r__148568 =
                                                  ((::x10aux::nullCheck(a__148566)->x10::lang::Rail< x10_double >::__apply(
                                                      i__148567)) + (((scdmn) * (::x10aux::nullCheck(temp)->x10::lang::Rail< x10_double >::__apply(
                                                                                   ind)))));
                                                ::x10aux::nullCheck(a__148566)->x10::lang::Rail< x10_double >::__set(
                                                  i__148567,
                                                  r__148568);
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    } else 
                    //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if ((!::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(temp)->FMGL(size)),
                                                  ((x10_long)0ll))))
                    {
                        
                        //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        {
                            x10_long nu;
                            for (nu = sp->FMGL(nu); ((nu) <= (sp->FMGL(nu2)));
                                 nu = ((nu) + (((x10_long)1ll))))
                            {
                                {
                                    x10_long mu;
                                    for (mu = sp->FMGL(mu);
                                         ((mu) <= (sp->FMGL(mu2)));
                                         mu = ((mu) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_double scdmn =
                                          (__extension__ ({
                                            
                                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                            x10_long x__147574 =
                                              mu;
                                            x10_long y__147575 =
                                              nu;
                                            ::x10aux::nullCheck(::x10aux::nullCheck(density)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                              ((((y__147575) * (::x10aux::nullCheck(density)->FMGL(M)))) + (x__147574)));
                                        }))
                                        ;
                                        
                                        //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        {
                                            x10_long rolm;
                                            for (rolm = ((x10_long)0ll);
                                                 ((rolm) < (maxLm));
                                                 rolm = ((rolm) + (((x10_long)1ll))),
                                                   ind = ((ind) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 613 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                                ::x10::lang::Rail< x10_double >* a__148569 =
                                                  dlm_partial;
                                                x10_long i__148570 =
                                                  rolm;
                                                x10_double r__148571 =
                                                  ((::x10aux::nullCheck(a__148569)->x10::lang::Rail< x10_double >::__apply(
                                                      i__148570)) + (((((2.0) * (scdmn))) * (::x10aux::nullCheck(temp)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ind)))));
                                                ::x10aux::nullCheck(a__148569)->x10::lang::Rail< x10_double >::__set(
                                                  i__148570,
                                                  r__148571);
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    }
                    
                }
                
            }
        }
        
        //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if (doK) {
            
            //#line 619 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::matrix::DenseMatrix* auxKMat =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
            (auxKMat)->::x10::matrix::DenseMatrix::_constructor(
              ((((x10_long)(saved_this->FMGL(roK)))) * (muSize)),
              saved_this->FMGL(N), auxK);
            
            //#line 620 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::matrix::blas::DenseMatrixBLAS::compMultTrans(
              1.0, mos, auxKMat, 0.0, bMat, (__extension__ ({
                  ::x10::lang::Rail< x10_long >* t__149680 =
                    ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                  t__149680->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)0ll), saved_this->FMGL(nOrbitals));
                  t__149680->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)1ll), auxKMat->FMGL(M));
                  t__149680->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)2ll), saved_this->FMGL(N));
                  t__149680;
              }))
              , (__extension__ ({
                  ::x10::lang::Rail< x10_long >* t__149688 =
                    ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)6ll), false);
                  t__149688->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)0ll), ((x10_long)0ll));
                  t__149688->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)1ll), ((x10_long)0ll));
                  t__149688->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)2ll), ((x10_long)0ll));
                  t__149688->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)3ll), ((x10_long)0ll));
                  t__149688->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)4ll), ((x10_long)0ll));
                  t__149688->x10::lang::Rail< x10_long >::__set(
                    ((x10_long)5ll), ((((shellPair0->FMGL(mu)) - (::x10aux::nullCheck(saved_this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                                    ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))) * (((x10_long)(saved_this->FMGL(roK))))));
                  t__149688;
              }))
              );
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* range;
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp;
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    x10_int ron;
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ;
    ::x10::lang::Rail< x10_long >* auxKIdx;
    x10_long size;
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* ylm;
    x10_boolean doK;
    ::x10::matrix::DenseMatrix* density;
    ::x10::matrix::DenseMatrix* mos;
    ::x10::matrix::DenseMatrix* bMat;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->range);
        buf.write(this->shp);
        buf.write(this->saved_this);
        buf.write(this->ron);
        buf.write(this->auxJ);
        buf.write(this->auxKIdx);
        buf.write(this->size);
        buf.write(this->ylm);
        buf.write(this->doK);
        buf.write(this->density);
        buf.write(this->mos);
        buf.write(this->bMat);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__28* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__28>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_range = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* that_shp = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>();
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        x10_int that_ron = buf.read<x10_int>();
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* that_auxJ = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
        ::x10::lang::Rail< x10_long >* that_auxKIdx = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_size = buf.read<x10_long>();
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* that_ylm = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
        x10_boolean that_doK = buf.read<x10_boolean>();
        ::x10::matrix::DenseMatrix* that_density = buf.read< ::x10::matrix::DenseMatrix*>();
        ::x10::matrix::DenseMatrix* that_mos = buf.read< ::x10::matrix::DenseMatrix*>();
        ::x10::matrix::DenseMatrix* that_bMat = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_ROFockMethod__closure__28* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__28(that_range, that_shp, that_saved_this, that_ron, that_auxJ, that_auxKIdx, that_size, that_ylm, that_doK, that_density, that_mos, that_bMat);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__28(::x10::lang::Rail< x10_long >* range, ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp, ::au::edu::anu::qm::ROFockMethod* saved_this, x10_int ron, ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ, ::x10::lang::Rail< x10_long >* auxKIdx, x10_long size, ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* ylm, x10_boolean doK, ::x10::matrix::DenseMatrix* density, ::x10::matrix::DenseMatrix* mos, ::x10::matrix::DenseMatrix* bMat) : range(range), shp(shp), saved_this(saved_this), ron(ron), auxJ(auxJ), auxKIdx(auxKIdx), size(size), ylm(ylm), doK(doK), density(density), mos(mos), bMat(bMat) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:559-622";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__28_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__29_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__29_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class au_edu_anu_qm_ROFockMethod__closure__29 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__29> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(::x10::lang::Rail< x10_double >* a, ::x10::lang::Rail< x10_double >* b){
        ::x10::lang::Rail< x10_double >* src__148582 = a;
        ::x10::lang::Rail< x10_double >* src__148583 = b;
        ::x10::lang::Rail< x10_double >* dst__148584 = a;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(src__148582)->FMGL(size)),
                                       (x10_long)(::x10aux::nullCheck(src__148583)->FMGL(size))))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149805))));
        }
        
        //#line 173 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
        ::x10::lang::Rail< x10_double >* src__148578 = src__148582;
        ::x10::lang::Rail< x10_double >* src__148579 = src__148583;
        ::x10::lang::Rail< x10_double >* dst__148580 = dst__148584;
        ::x10::lang::Rail< x10_double >* ret__148581;
        
        //#line 178 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
        ::x10::lang::Rail< x10_double >* rail__148574 = src__148578;
        x10_long i__148005max__148575 = (x10_long)(::x10aux::nullCheck(rail__148574)->FMGL(size));
        {
            x10_long i__148576;
            for (i__148576 = ((x10_long)0ll); ((i__148576) < (i__148005max__148575));
                 i__148576 = ((i__148576) + (((x10_long)1ll))))
            {
                x10_long i__148577 = i__148576;
                
                //#line 179 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ::x10aux::nullCheck(dst__148580)->x10::lang::Rail< x10_double >::__set(
                  i__148577, (__extension__ ({
                      
                      //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                      x10_double x__148572 = ::x10aux::nullCheck(src__148578)->x10::lang::Rail< x10_double >::__apply(
                                               i__148577);
                      x10_double y__148573 = ::x10aux::nullCheck(src__148579)->x10::lang::Rail< x10_double >::__apply(
                                               i__148577);
                      ((x__148572) + (y__148573));
                  }))
                  );
            }
        }
        
        //#line 181 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
        ret__148581 = dst__148580;
        
        //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        return ret__148581;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__29* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__29>();
        buf.record_reference(storage);
        au_edu_anu_qm_ROFockMethod__closure__29* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__29();
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__29() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:625";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__29_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__30_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__30_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__30 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__30> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(remoteK)->fetchNext(saved_this->FMGL(halfAuxMat),
                                                nextBlockPlace, blockSize);
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod__RemoteBlock* remoteK;
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    x10aux::captured_struct_lval<x10_long> nextBlockPlace;
    x10_long blockSize;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->remoteK);
        buf.write(this->saved_this);
        buf.write(this->nextBlockPlace);
        buf.write(this->blockSize);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__30* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__30>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod__RemoteBlock* that_remoteK = buf.read< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>();
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        x10aux::captured_struct_lval<x10_long> that_nextBlockPlace = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_blockSize = buf.read<x10_long>();
        au_edu_anu_qm_ROFockMethod__closure__30* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__30(that_remoteK, that_saved_this, that_nextBlockPlace, that_blockSize);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__30(::au::edu::anu::qm::ROFockMethod__RemoteBlock* remoteK, ::au::edu::anu::qm::ROFockMethod* saved_this, x10aux::captured_struct_lval<x10_long> nextBlockPlace, x10_long blockSize) : remoteK(remoteK), saved_this(saved_this), nextBlockPlace(nextBlockPlace), blockSize(blockSize) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:663";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__30_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__31_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__31_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__closure__31 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__31> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(remoteK)->fetchNext(saved_this->FMGL(halfAuxMat),
                                                nextBlockPlace, blockSize);
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod__RemoteBlock* remoteK;
    ::au::edu::anu::qm::ROFockMethod* saved_this;
    x10aux::captured_struct_lval<x10_long> nextBlockPlace;
    x10_long blockSize;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->remoteK);
        buf.write(this->saved_this);
        buf.write(this->nextBlockPlace);
        buf.write(this->blockSize);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__31* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__31>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod__RemoteBlock* that_remoteK = buf.read< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>();
        ::au::edu::anu::qm::ROFockMethod* that_saved_this = buf.read< ::au::edu::anu::qm::ROFockMethod*>();
        x10aux::captured_struct_lval<x10_long> that_nextBlockPlace = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_blockSize = buf.read<x10_long>();
        au_edu_anu_qm_ROFockMethod__closure__31* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__31(that_remoteK, that_saved_this, that_nextBlockPlace, that_blockSize);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__31(::au::edu::anu::qm::ROFockMethod__RemoteBlock* remoteK, ::au::edu::anu::qm::ROFockMethod* saved_this, x10aux::captured_struct_lval<x10_long> nextBlockPlace, x10_long blockSize) : remoteK(remoteK), saved_this(saved_this), nextBlockPlace(nextBlockPlace), blockSize(blockSize) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:687";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__31_CLOSURE
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__32_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__32_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class au_edu_anu_qm_ROFockMethod__closure__32 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1<x10_long>::itable<au_edu_anu_qm_ROFockMethod__closure__32> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(x10_long shellPairIdx){
        
        //#line 734 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ShellPair sp = ::x10aux::nullCheck(shp)->x10::lang::Rail< ::au::edu::anu::qm::ShellPair >::__apply(
                                             shellPairIdx);
        
        //#line 735 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_double >* auxJSP = ::x10aux::nullCheck(auxJ)->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                    shellPairIdx);
        
        //#line 736 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_int maxLron = ::x10aux::nullCheck(sp->FMGL(L))->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(ron)));
        
        //#line 737 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        if (((((x10_long)(::x10aux::nullCheck(auxJSP)->FMGL(size))) > (((x10_long)0ll))) &&
            ((maxLron) >= (((x10_int)0))))) {
            
            //#line 738 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long maxLm = ((((((x10_long)(maxLron))) + (((x10_long)1ll)))) * (((((x10_long)(maxLron))) + (((x10_long)1ll)))));
            
            //#line 739 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long ind = ((x10_long)0ll);
            
            //#line 740 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long i__108148min__148607 = sp->FMGL(nu);
            x10_long i__108148max__148608 = sp->FMGL(nu2);
            {
                x10_long i__148609;
                for (i__148609 = i__108148min__148607; ((i__148609) <= (i__108148max__148608));
                     i__148609 = ((i__148609) + (((x10_long)1ll))))
                {
                    x10_long nu__148610 = i__148609;
                    
                    //#line 741 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    {
                        x10_long mu__148604;
                        x10_long muoff__148605;
                        for (mu__148604 = sp->FMGL(mu), muoff__148605 =
                                                          ((mu__148604) - (offsetHere));
                             ((mu__148604) <= (sp->FMGL(mu2)));
                             mu__148604 = ((mu__148604) + (((x10_long)1ll))),
                               muoff__148605 = ((muoff__148605) + (((x10_long)1ll))))
                        {
                            
                            //#line 742 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            x10_double jContrib__148606 =
                              0.0;
                            
                            //#line 743 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            x10_long i__108130max__148595 =
                              ((maxLm) - (((x10_long)1ll)));
                            {
                                x10_long i__148596;
                                for (i__148596 = ((x10_long)0ll);
                                     ((i__148596) <= (i__108130max__148595));
                                     i__148596 = ((i__148596) + (((x10_long)1ll))))
                                {
                                    x10_long rolm__148597 =
                                      i__148596;
                                    
                                    //#line 744 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    jContrib__148606 = ((jContrib__148606) + (((::x10aux::nullCheck(dlm)->x10::lang::Rail< x10_double >::__apply(
                                                                                  rolm__148597)) * (::x10aux::nullCheck(auxJSP)->x10::lang::Rail< x10_double >::__apply(
                                                                                                      (__extension__ ({
                                                                                                          x10_long pre__148590 =
                                                                                                            ind;
                                                                                                          ind =
                                                                                                            ((ind) + (((x10_long)1ll)));
                                                                                                          pre__148590;
                                                                                                      }))
                                                                                                      )))));
                                }
                            }
                            
                            //#line 746 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            ::x10::matrix::DenseMatrix* a__148598 =
                              localJ;
                            x10_long i__148599 = muoff__148605;
                            x10_long i__148600 = nu__148610;
                            x10_double r__148601 = (((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__148602 = i__148599;
                                x10_long y__148603 = i__148600;
                                ::x10aux::nullCheck(::x10aux::nullCheck(a__148598)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__148603) * (::x10aux::nullCheck(a__148598)->FMGL(M)))) + (x__148602)));
                            }))
                            ) + (jContrib__148606));
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__148591 = i__148599;
                            x10_long y__148592 = i__148600;
                            x10_double v__148593 = r__148601;
                            x10_double ret__148594;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(a__148598)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__148592) * (::x10aux::nullCheck(a__148598)->FMGL(M)))) + (x__148591)),
                              v__148593);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148594 = v__148593;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148594;
                        }
                    }
                    
                }
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp;
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ;
    x10_int ron;
    x10_long offsetHere;
    ::x10::lang::Rail< x10_double >* dlm;
    ::x10::matrix::DenseMatrix* localJ;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->shp);
        buf.write(this->auxJ);
        buf.write(this->ron);
        buf.write(this->offsetHere);
        buf.write(this->dlm);
        buf.write(this->localJ);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__closure__32* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__closure__32>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* that_shp = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>();
        ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* that_auxJ = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
        x10_int that_ron = buf.read<x10_int>();
        x10_long that_offsetHere = buf.read<x10_long>();
        ::x10::lang::Rail< x10_double >* that_dlm = buf.read< ::x10::lang::Rail< x10_double >*>();
        ::x10::matrix::DenseMatrix* that_localJ = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_ROFockMethod__closure__32* this_ = new (storage) au_edu_anu_qm_ROFockMethod__closure__32(that_shp, that_auxJ, that_ron, that_offsetHere, that_dlm, that_localJ);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__closure__32(::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp, ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ, x10_int ron, x10_long offsetHere, ::x10::lang::Rail< x10_double >* dlm, ::x10::matrix::DenseMatrix* localJ) : shp(shp), auxJ(auxJ), ron(ron), offsetHere(offsetHere), dlm(dlm), localJ(localJ) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:733-750";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__CLOSURE__32_CLOSURE

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod::_constructor(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                                                  ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                  x10_long nOrbitals,
                                                  x10_double omega,
                                                  x10_double roThresh) {
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149783),
                                                 reinterpret_cast< ::x10::lang::Any*>((__extension__ ({
                                                     ::x10::util::Date* alloc__107748 =
                                                        (new (::x10aux::alloc_z< ::x10::util::Date>()) ::x10::util::Date());
                                                     
                                                     //#line 33 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Date.x10"
                                                     x10_long millis__148360 =
                                                       ::x10::lang::RuntimeNatives::currentTimeMillis();
                                                     
                                                     //#line 18 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Date.x10"
                                                     alloc__107748->FMGL(millis) =
                                                       ((x10_long)0ll);
                                                     
                                                     //#line 34 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Date.x10"
                                                     alloc__107748->FMGL(millis) =
                                                       millis__148360;
                                                     alloc__107748;
                                                 }))
                                                 ));
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    FMGL(N) = N;
    
    //#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->au::edu::anu::qm::ROFockMethod::__fieldInitializers_au_edu_anu_qm_ROFockMethod();
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_int maxam = (__extension__ ({
        ::au::edu::anu::qm::ShellList this__134608 = bfs->FMGL(shellList);
        this__134608->FMGL(maxam);
    }))
    ;
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long maxam1 = ((((((((x10_long)(maxam))) + (((x10_long)1ll)))) * (((((x10_long)(maxam))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)));
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::au::edu::anu::util::StatisticalTimer* timer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer());
    (timer)->::au::edu::anu::util::StatisticalTimer::_constructor(
      ((x10_long)1ll));
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    x10_long nPlaces = ((x10_long)::x10aux::num_hosts);
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* shellAtPlace = ::x10::lang::Rail< x10_long >::_make(nPlaces);
    ::x10::lang::Rail< x10_long >* funcAtPlace = ::x10::lang::Rail< x10_long >::_make(nPlaces);
    ::x10::lang::Rail< x10_long >* offsetAtPlace = ::x10::lang::Rail< x10_long >::_make(((nPlaces) + (((x10_long)1ll))));
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::start(((x10_long)0ll));
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long nShells = ((x10_long)0ll);
    
    //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    {
        ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>* atom__107768;
        for (atom__107768 = reinterpret_cast< ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>*>(::x10aux::nullCheck(mol)->getAtoms()->iterator());
             ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::hasNext(::x10aux::nullCheck(atom__107768));
             ) {
            ::au::edu::anu::qm::QMAtom* atom = ::x10::util::ListIterator< ::au::edu::anu::qm::QMAtom*>::next(::x10aux::nullCheck(atom__107768));
            nShells = ((nShells) + (::x10aux::nullCheck(::x10aux::nullCheck(atom)->getBasisFunctions())->size()));
        }
    }
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_int roL;
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    if (((omega) > (0.0))) {
        
        //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ro::Integral_Pack * aux = ::au::edu::anu::qm::ro::Integral_Pack::_make(jd->FMGL(roN),
                                                                                                   jd->FMGL(roL),
                                                                                                   omega,
                                                                                                   roThresh,
                                                                                                   jd->FMGL(rad),
                                                                                                   jd->FMGL(roZ));
        
        //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Rail< x10_int >* l_n = ::x10::lang::Rail< x10_int >::_make(((((x10_long)(jd->FMGL(roN)))) + (((x10_long)3ll))));
        
        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        (aux)->getNL((l_n)->raw);
        
        //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        this->FMGL(roN) = l_n->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)0ll));
        
        //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        roL = l_n->x10::lang::Rail< x10_int >::__apply(((((x10_long)(this->FMGL(roN)))) + (((x10_long)2ll))));
    } else {
        
        //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        this->FMGL(roN) = jd->FMGL(roN);
        
        //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        roL = jd->FMGL(roL);
    }
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    if (((::x10aux::struct_equals(jd->FMGL(roNK), ((x10_int)-1))) ||
        ((jd->FMGL(roNK)) > (this->FMGL(roN))))) {
        this->FMGL(roNK) = this->FMGL(roN);
    } else {
        this->FMGL(roNK) = jd->FMGL(roNK);
    }
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_int roK = ((((roL) + (((x10_int)1)))) * (((roL) + (((x10_int)1)))));
    
    //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long nAtoms = ::x10aux::nullCheck(mol)->getNumberOfAtoms();
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* place2atom = ::x10::lang::Rail< x10_long >::_make(((nPlaces) + (((x10_long)1ll))));
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    place2atom->x10::lang::Rail< x10_long >::__set(nPlaces,
                                                   ((nAtoms) - (((x10_long)1ll))));
    place2atom->x10::lang::Rail< x10_long >::__set(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* place2func = ::x10::lang::Rail< x10_long >::_make(((nPlaces) + (((x10_long)1ll))));
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    place2func->x10::lang::Rail< x10_long >::__set(nPlaces,
                                                   ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                                                                                             ((nAtoms) - (((x10_long)1ll)))))->getBasisFunctions())->size());
    place2func->x10::lang::Rail< x10_long >::__set(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double npp = ((((x10_double) (N))) / (((x10_double) (nPlaces))));
    
    //#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long pid = ((nPlaces) - (((x10_long)1ll)));
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long func = ((x10_long)0ll);
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    {
        x10_long a;
        for (a = ((nAtoms) - (((x10_long)1ll))); (((a) >= (((x10_long)0ll))) &&
                                                 ((pid) > (((x10_long)0ll))));
             a = ((a) - (((x10_long)1ll)))) {
            
            //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc =
              ::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                                    a))->getBasisFunctions();
            x10_long naFunc = ::x10aux::nullCheck(aFunc)->size();
            
            //#line 97 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            {
                x10_long i;
                for (i = ((naFunc) - (((x10_long)1ll))); (((i) >= (((x10_long)0ll))) &&
                                                         ((pid) > (((x10_long)0ll))));
                     i = ((i) - (((x10_long)1ll)))) {
                    
                    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::au::edu::anu::qm::ContractedGaussian iaFunc =
                      ::x10aux::nullCheck(aFunc)->get(i);
                    x10_int aa = (__extension__ ({
                        
                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                        ::au::edu::anu::qm::Power this__134609 =
                          iaFunc->FMGL(power);
                        this__134609->FMGL(totam);
                    }))
                    ;
                    
                    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    func = ((func) + (((((((((x10_long)(aa))) + (((x10_long)1ll)))) * (((((x10_long)(aa))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)))));
                    
                    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if (((((N) - (func))) <= (::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((((x10_double) (pid))) * (npp)))))))
                    {
                        
                        //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        place2atom->x10::lang::Rail< x10_long >::__set(
                          pid, a);
                        
                        //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        place2func->x10::lang::Rail< x10_long >::__set(
                          pid, i);
                        
                        //#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        pid = ((pid) - (((x10_long)1ll)));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    if (((pid) > (((x10_long)0ll)))) {
        
        //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149784), pid)));
        ::x10::lang::System::setExitCode(((x10_int)1));
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149784), pid))));
    }
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long mu = ((x10_long)0ll);
    
    //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    pid = ((x10_long)1ll);
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    offsetAtPlace->x10::lang::Rail< x10_long >::__set(((x10_long)0ll),
                                                      ((x10_long)0ll));
    offsetAtPlace->x10::lang::Rail< x10_long >::__set(nPlaces,
                                                      N);
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    {
        x10_long a;
        for (a = ((x10_long)0ll); ((a) < (nAtoms)); a = ((a) + (((x10_long)1ll))))
        {
            
            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc =
              ::x10aux::nullCheck(::x10aux::nullCheck(mol)->getAtom(
                                    a))->getBasisFunctions();
            x10_long naFunc = ::x10aux::nullCheck(aFunc)->size();
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            {
                x10_long i;
                for (i = ((x10_long)0ll); ((i) < (naFunc));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::au::edu::anu::qm::ContractedGaussian iaFunc =
                      ::x10aux::nullCheck(aFunc)->get(i);
                    x10_int aa = (__extension__ ({
                        
                        //#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                        ::au::edu::anu::qm::Power this__134610 =
                          iaFunc->FMGL(power);
                        this__134610->FMGL(totam);
                    }))
                    ;
                    
                    //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    if (((::x10aux::struct_equals(a, place2atom->x10::lang::Rail< x10_long >::__apply(
                                                       pid))) &&
                        (::x10aux::struct_equals(i, place2func->x10::lang::Rail< x10_long >::__apply(
                                                      pid)))))
                    {
                        
                        //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        funcAtPlace->x10::lang::Rail< x10_long >::__set(
                          ((pid) - (((x10_long)1ll))), ((mu) - (offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                                  ((pid) - (((x10_long)1ll)))))));
                        
                        //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        offsetAtPlace->x10::lang::Rail< x10_long >::__set(
                          pid, mu);
                        
                        //#line 122 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        pid = ((pid) + (((x10_long)1ll)));
                    }
                    
                    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::x10::lang::Rail< x10_long >* a__148361 =
                      shellAtPlace;
                    x10_long i__148362 = ((pid) - (((x10_long)1ll)));
                    x10_long r__148363 = ((a__148361->x10::lang::Rail< x10_long >::__apply(
                                             i__148362)) + (((x10_long)1ll)));
                    a__148361->x10::lang::Rail< x10_long >::__set(
                      i__148362, r__148363);
                    
                    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    mu = ((mu) + (((((((((x10_long)(aa))) + (((x10_long)1ll)))) * (((((x10_long)(aa))) + (((x10_long)2ll)))))) / ::x10aux::zeroCheck(((x10_long)2ll)))));
                }
            }
            
        }
    }
    
    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    funcAtPlace->x10::lang::Rail< x10_long >::__set(((pid) - (((x10_long)1ll))),
                                                    ((mu) - (offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                               ((pid) - (((x10_long)1ll)))))));
    
    //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double threshold = ((((((roThresh) * (jd->FMGL(roZ)))) * (jd->FMGL(roZ)))) * (0.001));
    
    //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_int roN_val = this->FMGL(roN);
    x10_double roZ_val = jd->FMGL(roZ);
    x10_long nShells_val = nShells;
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> sizeInfo =
      ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< x10_double >* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__1)))au_edu_anu_qm_ROFockMethod__closure__1())));
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> shellPairRange_plh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< x10_long >* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__2)))au_edu_anu_qm_ROFockMethod__closure__2(shellAtPlace))));
    
    //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> shellPairs_plh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__3)))au_edu_anu_qm_ROFockMethod__closure__3(sizeInfo, shellPairRange_plh, nShells_val, offsetAtPlace, place2atom, mol, place2func, nAtoms, roZ_val, threshold, roN_val, roL, roK))));
    
    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double max = ((x10_double) (funcAtPlace->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)0ll))));
    x10_double min = max;
    x10_double tot = ((x10_double) (N));
    x10_double ideal = ((tot) / (((x10_double) (nPlaces))));
    x10_double tot2 = 0.0;
    
    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149785));
    
    //#line 214 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long i__107878max__148454 = ((nPlaces) - (((x10_long)1ll)));
    {
        x10_long i__148455;
        for (i__148455 = ((x10_long)0ll); ((i__148455) <= (i__107878max__148454));
             i__148455 = ((i__148455) + (((x10_long)1ll))))
        {
            x10_long i__148456 = i__148455;
            
            //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long cost__148428 = funcAtPlace->x10::lang::Rail< x10_long >::__apply(
                                      i__148456);
            
            //#line 216 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            max = ::x10::lang::MathNatives::fmax(((x10_double) (cost__148428)),max);
            min = ::x10::lang::MathNatives::fmin(((x10_double) (cost__148428)),min);
            tot2 = ((tot2) + (((x10_double) (cost__148428))));
            
            //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::ROFockMethod_Strings::sl__149786),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(i__148456),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(offsetAtPlace->x10::lang::Rail< x10_long >::__apply(
                                                                   i__148456)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(cost__148428),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((((x10_double) (cost__148428))) * (100.0))) / (tot))));
        }
    }
    
    //#line 219 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149787),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((tot2) / (tot))) * (100.0))));
    
    //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149788),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(ideal),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(max),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(min),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((((max) / (ideal))) - (1.0))) * (100.0))));
    
    //#line 221 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long maxRow = ::x10::lang::DoubleNatives::toLong(max);
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    tot = ((((((x10_double) (N))) * (((1.0) + (((x10_double) (N))))))) * (0.5));
    tot2 = 0.0;
    max = min = ::x10::lang::Runtime::evalAt< x10_double >(
                  (__extension__ ({
                      ::x10::lang::Place alloc__107749 = 
                      ::x10::lang::Place::_alloc();
                      (alloc__107749)->::x10::lang::Place::_constructor(
                        ((x10_long)0ll));
                      alloc__107749;
                  }))
                  , reinterpret_cast< ::x10::lang::Fun_0_0<x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_double> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__5)))au_edu_anu_qm_ROFockMethod__closure__5(sizeInfo))),
                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long totY = ((x10_long)0ll);
    x10_long totJ = ((x10_long)0ll);
    x10_long skip = ((x10_long)0ll);
    
    //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149789));
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long i__107896max__148457 = ((nPlaces) - (((x10_long)1ll)));
    {
        x10_long i__148458;
        for (i__148458 = ((x10_long)0ll); ((i__148458) <= (i__107896max__148457));
             i__148458 = ((i__148458) + (((x10_long)1ll))))
        {
            x10_long i__148459 = i__148458;
            
            //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_double cost__148429 = ::x10::lang::Runtime::evalAt< x10_double >(
                                        (__extension__ ({
                                            ::x10::lang::Place alloc__148430 =
                                               ::x10::lang::Place::_alloc();
                                            (alloc__148430)->::x10::lang::Place::_constructor(
                                              i__148459);
                                            alloc__148430;
                                        }))
                                        , reinterpret_cast< ::x10::lang::Fun_0_0<x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_double> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__6)))au_edu_anu_qm_ROFockMethod__closure__6(sizeInfo))),
                                        ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
            //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            totY = (::x10aux::class_cast_unchecked<x10_long>(((((x10_double) (totY))) + (::x10::lang::Runtime::evalAt< x10_double >(
                                                                                           (__extension__ ({
                                                                                               ::x10::lang::Place alloc__148431 =
                                                                                                 
                                                                                               ::x10::lang::Place::_alloc();
                                                                                               (alloc__148431)->::x10::lang::Place::_constructor(
                                                                                                 i__148459);
                                                                                               alloc__148431;
                                                                                           }))
                                                                                           ,
                                                                                           reinterpret_cast< ::x10::lang::Fun_0_0<x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_double> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__7)))au_edu_anu_qm_ROFockMethod__closure__7(sizeInfo))),
                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))));
            
            //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            totJ = (::x10aux::class_cast_unchecked<x10_long>(((((x10_double) (totJ))) + (::x10::lang::Runtime::evalAt< x10_double >(
                                                                                           (__extension__ ({
                                                                                               ::x10::lang::Place alloc__148432 =
                                                                                                 
                                                                                               ::x10::lang::Place::_alloc();
                                                                                               (alloc__148432)->::x10::lang::Place::_constructor(
                                                                                                 i__148459);
                                                                                               alloc__148432;
                                                                                           }))
                                                                                           ,
                                                                                           reinterpret_cast< ::x10::lang::Fun_0_0<x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_double> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__8)))au_edu_anu_qm_ROFockMethod__closure__8(sizeInfo))),
                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))));
            
            //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            skip = (::x10aux::class_cast_unchecked<x10_long>(((((x10_double) (skip))) + (::x10::lang::Runtime::evalAt< x10_double >(
                                                                                           (__extension__ ({
                                                                                               ::x10::lang::Place alloc__148433 =
                                                                                                 
                                                                                               ::x10::lang::Place::_alloc();
                                                                                               (alloc__148433)->::x10::lang::Place::_constructor(
                                                                                                 i__148459);
                                                                                               alloc__148433;
                                                                                           }))
                                                                                           ,
                                                                                           reinterpret_cast< ::x10::lang::Fun_0_0<x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_double> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__9)))au_edu_anu_qm_ROFockMethod__closure__9(sizeInfo))),
                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))));
            
            //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            max = ::x10::lang::MathNatives::fmax(cost__148429,max);
            min = ::x10::lang::MathNatives::fmin(cost__148429,min);
            tot2 = ((tot2) + (cost__148429));
            
            //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::ROFockMethod_Strings::sl__149790),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(i__148459),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(cost__148429),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((cost__148429) * (100.0))) / (tot))));
        }
    }
    
    //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149791),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((tot2) / (tot))) * (100.0))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(skip));
    
    //#line 235 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ideal = ((tot2) / (((x10_double) (nPlaces))));
    
    //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149792),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(ideal),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(max),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(min),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((((max) / (ideal))) - (1.0))) * (100.0))));
    
    //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149793),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (((N) * (N))))) * (8.0E-6))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (totJ))) * (8.0E-6))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (totY))) * (8.0E-6))),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (((((nOrbitals) * (N))) * (((x10_long)(roK))))))) * (8.0E-6))));
    
    //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::stop(((x10_long)0ll));
    
    //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149794),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
    
    //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::start(((x10_long)0ll));
    
    //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>* intPack_wlh =
       (new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *> >()) ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>());
    (intPack_wlh)->::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>::_constructor(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__10)))au_edu_anu_qm_ROFockMethod__closure__10(jd, omega, roThresh))));
    
    //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(ylms_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >(
                             ::x10::lang::Place::places(),
                             reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__11)))au_edu_anu_qm_ROFockMethod__closure__11(shellPairs_plh, intPack_wlh, roL))));
    
    //#line 260 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::stop(((x10_long)0ll));
    
    //#line 261 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149795),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::start(((x10_long)0ll));
    
    //#line 264 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(auxJ_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >(
                             ::x10::lang::Place::places(),
                             reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__13)))au_edu_anu_qm_ROFockMethod__closure__13(shellPairs_plh, nPlaces, offsetAtPlace, roK))));
    
    //#line 286 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::stop(((x10_long)0ll));
    
    //#line 287 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149796),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
    
    //#line 288 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::start(((x10_long)0ll));
    
    //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(auxKIdx_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< x10_long >* >(
                                ::x10::lang::Place::places(),
                                reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__14)))au_edu_anu_qm_ROFockMethod__closure__14(shellPairs_plh, offsetAtPlace))));
    
    //#line 309 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::stop(((x10_long)0ll));
    
    //#line 310 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149797),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
    
    //#line 311 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::start(((x10_long)0ll));
    
    //#line 313 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long tbs = (((__extension__ ({
        
        //#line 477 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/lang/Math.x10"
        x10_long a__137478 = ((maxRow) * (nOrbitals));
        x10_long b__137479 = ((maxam1) * (N));
        ((a__137478) < (b__137479)) ? (b__137479) : (a__137478);
    }))
    ) * (((x10_long)(roK))));
    
    //#line 314 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(remoteBlockK_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::au::edu::anu::qm::ROFockMethod__RemoteBlock* >(
                                     ::x10::lang::Place::places(),
                                     reinterpret_cast< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__16)))au_edu_anu_qm_ROFockMethod__closure__16(tbs))));
    
    //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* cbs_HalfAuxInt = ::x10::lang::Rail< x10_long >::_make(((x10_long)1ll));
    cbs_HalfAuxInt->x10::lang::Rail< x10_long >::__set(((x10_long)0ll),
                                                       ((nOrbitals) * (((x10_long)(roK)))));
    ::x10::matrix::block::Grid* halfAuxIntGrid =  (new (::x10aux::alloc_z< ::x10::matrix::block::Grid>()) ::x10::matrix::block::Grid());
    (halfAuxIntGrid)->::x10::matrix::block::Grid::_constructor(
      cbs_HalfAuxInt, funcAtPlace);
    
    //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(halfAuxMat) = ::x10::matrix::dist::DistDenseMatrix::make(
                               halfAuxIntGrid);
    
    //#line 319 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(auxK_wlh) = (__extension__ ({
        ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>* alloc__107755 =
           (new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*> >()) ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>());
        (alloc__107755)->::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>::_constructor(
          reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__17)))au_edu_anu_qm_ROFockMethod__closure__17(maxam1, N, roK))));
        alloc__107755;
    }))
    ;
    
    //#line 320 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(dlm_wlh) = (__extension__ ({
        ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>* alloc__107756 =
           (new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*> >()) ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>());
        (alloc__107756)->::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>::_constructor(
          reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__18)))au_edu_anu_qm_ROFockMethod__closure__18(roK))));
        alloc__107756;
    }))
    ;
    
    //#line 322 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* cbs_nSquareMat = ::x10::lang::Rail< x10_long >::_make(((x10_long)1ll));
    cbs_nSquareMat->x10::lang::Rail< x10_long >::__set(((x10_long)0ll),
                                                       N);
    ::x10::matrix::block::Grid* nSquareMatGrid =  (new (::x10aux::alloc_z< ::x10::matrix::block::Grid>()) ::x10::matrix::block::Grid());
    (nSquareMatGrid)->::x10::matrix::block::Grid::_constructor(
      funcAtPlace, cbs_nSquareMat);
    
    //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(distJ) = ::x10::matrix::dist::DistDenseMatrix::make(
                          nSquareMatGrid);
    this->FMGL(distK) = ::x10::matrix::dist::DistDenseMatrix::make(
                          nSquareMatGrid);
    
    //#line 325 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(dlm_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< x10_double >* >(
                            ::x10::lang::Place::places(),
                            reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__19)))au_edu_anu_qm_ROFockMethod__closure__19(roK))));
    
    //#line 326 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(e_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< x10_double >* >(
                          ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__20)))au_edu_anu_qm_ROFockMethod__closure__20())));
    
    //#line 327 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(shellPairRange_plh) = shellPairRange_plh;
    
    //#line 329 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(shellAtPlace) = shellAtPlace;
    this->FMGL(offsetAtPlace) = offsetAtPlace;
    this->FMGL(funcAtPlace) = funcAtPlace;
    
    //#line 330 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(roK) = roK;
    this->FMGL(roZ) = jd->FMGL(roZ);
    this->FMGL(intPack_wlh) = intPack_wlh;
    this->FMGL(shellPairs_plh) = shellPairs_plh;
    
    //#line 331 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(nOrbitals) = nOrbitals;
    this->FMGL(norm) = bfs->au::edu::anu::qm::BasisFunctions::getNormalizationFactors();
    
    //#line 333 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(densityMos_plh) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >* >(
                                   ::x10::lang::Place::places(),
                                   reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__21)))au_edu_anu_qm_ROFockMethod__closure__21())));
    
    //#line 335 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    timer->au::edu::anu::util::StatisticalTimer::stop(((x10_long)0ll));
    
    //#line 336 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149798),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(timer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                       ((x10_long)0ll))))) / (1.0E9))));
}
::au::edu::anu::qm::ROFockMethod* au::edu::anu::qm::ROFockMethod::_make(
  x10_long N, ::au::edu::anu::qm::BasisFunctions bfs, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  x10_long nOrbitals, x10_double omega, x10_double roThresh)
{
    ::au::edu::anu::qm::ROFockMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod>()) ::au::edu::anu::qm::ROFockMethod();
    this_->_constructor(N, bfs, mol, nOrbitals, omega, roThresh);
    return this_;
}



//#line 342 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod::compute(::au::edu::anu::qm::Density* density,
                                             ::au::edu::anu::qm::MolecularOrbitals* mos,
                                             ::x10::matrix::DenseMatrix* gMatrix) {
    
    //#line 343 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149799),
                                                 reinterpret_cast< ::x10::lang::Any*>((__extension__ ({
                                                     ::x10::util::Date* alloc__107757 =
                                                        (new (::x10aux::alloc_z< ::x10::util::Date>()) ::x10::util::Date());
                                                     
                                                     //#line 33 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Date.x10"
                                                     x10_long millis__148460 =
                                                       ::x10::lang::RuntimeNatives::currentTimeMillis();
                                                     
                                                     //#line 18 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Date.x10"
                                                     alloc__107757->FMGL(millis) =
                                                       ((x10_long)0ll);
                                                     
                                                     //#line 34 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Date.x10"
                                                     alloc__107757->FMGL(millis) =
                                                       millis__148460;
                                                     alloc__107757;
                                                 }))
                                                 ));
    
    //#line 344 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
      ((x10_long)0ll));
    
    //#line 346 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_double >* tempJ = ::x10::lang::Rail< x10_double >::_make(((this->FMGL(N)) * (this->FMGL(N))));
    
    //#line 347 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_double >* tempK = ::x10::lang::Rail< x10_double >::_make(((this->FMGL(N)) * (this->FMGL(N))));
    
    //#line 348 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::GlobalRail<x10_double> place0GRefJ =  ::x10::lang::GlobalRail<x10_double>::_alloc();
    (place0GRefJ)->::x10::lang::GlobalRail<x10_double>::_constructor(
      tempJ);
    
    //#line 349 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::GlobalRail<x10_double> place0GRefK =  ::x10::lang::GlobalRail<x10_double>::_alloc();
    (place0GRefK)->::x10::lang::GlobalRail<x10_double>::_constructor(
      tempK);
    
    //#line 352 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10aux::nullCheck(this->FMGL(densityMos_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::__apply())->x10::lang::Rail< ::x10::matrix::DenseMatrix* >::__set(
      ((x10_long)0ll), reinterpret_cast< ::x10::matrix::DenseMatrix*>(density));
    
    //#line 353 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10aux::nullCheck(this->FMGL(densityMos_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::__apply())->x10::lang::Rail< ::x10::matrix::DenseMatrix* >::__set(
      ((x10_long)1ll), reinterpret_cast< ::x10::matrix::DenseMatrix*>(mos));
    {
        
        //#line 355 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__148679 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__146644 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__146644)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__146644;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____148676;
                        for (__lowerer__var__1____148676 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____148676));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____148676));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__22)))au_edu_anu_qm_ROFockMethod__closure__22(this, place0GRefJ, place0GRefK, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc301) {
            {
                ::x10::lang::CheckedThrowable* ct__148677 =
                  __exc301;
                {
                    ::x10::lang::Runtime::pushException(ct__148677);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__148679);
    }
    
    //#line 459 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long nPlaces = ((x10_long)::x10aux::num_hosts);
    {
        
        //#line 461 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__148684 = ::x10::lang::Runtime::startFinish();
        try {
            {
                x10_long i__107986max__148480 = ((nPlaces) - (((x10_long)1ll)));
                {
                    x10_long i__148481;
                    for (i__148481 = ((x10_long)0ll); ((i__148481) <= (i__107986max__148480));
                         i__148481 = ((i__148481) + (((x10_long)1ll))))
                    {
                        x10_long pid__148482 = i__148481;
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__24)))au_edu_anu_qm_ROFockMethod__closure__24(this, pid__148482, tempK, gMatrix))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc302) {
            {
                ::x10::lang::CheckedThrowable* ct__148682 =
                  __exc302;
                {
                    ::x10::lang::Runtime::pushException(ct__148682);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__148684);
    }
    
    //#line 471 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    if ((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                 ((x10_long)0ll)))) {
        {
            
            //#line 472 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__148689 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    x10_long i__108004min__148493 = ((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    x10_long i__108004max__148494 = ((nPlaces) - (((x10_long)1ll)));
                    {
                        x10_long i__148495;
                        for (i__148495 = i__108004min__148493;
                             ((i__148495) <= (i__108004max__148494));
                             i__148495 = ((i__148495) + (((x10_long)1ll))))
                        {
                            x10_long pid__148496 = i__148495;
                            ::x10::lang::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__25)))au_edu_anu_qm_ROFockMethod__closure__25(pid__148496, nPlaces, this, gMatrix))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc303) {
                {
                    ::x10::lang::CheckedThrowable* ct__148687 =
                      __exc303;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__148687);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__148689);
        }
    }
    {
        
        //#line 482 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__148694 = ::x10::lang::Runtime::startFinish();
        try {
            {
                x10_long i__108022max__148512 = ((nPlaces) - (((x10_long)1ll)));
                {
                    x10_long i__148513;
                    for (i__148513 = ((x10_long)0ll); ((i__148513) <= (i__108022max__148512));
                         i__148513 = ((i__148513) + (((x10_long)1ll))))
                    {
                        x10_long pid__148514 = i__148513;
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__26)))au_edu_anu_qm_ROFockMethod__closure__26(this, pid__148514, gMatrix, tempJ))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc304) {
            {
                ::x10::lang::CheckedThrowable* ct__148692 =
                  __exc304;
                {
                    ::x10::lang::Runtime::pushException(ct__148692);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__148694);
    }
    
    //#line 492 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long i__108040max__148534 = ((nPlaces) - (((x10_long)1ll)));
    {
        x10_long i__148535;
        for (i__148535 = ((x10_long)0ll); ((i__148535) <= (i__108040max__148534));
             i__148535 = ((i__148535) + (((x10_long)1ll))))
        {
            x10_long pid__148536 = i__148535;
            
            //#line 493 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            {
                x10_long j__148527;
                for (j__148527 = ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                   pid__148536); ((j__148527) < (::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                                   ((pid__148536) + (((x10_long)1ll))))));
                     j__148527 = ((j__148527) + (((x10_long)1ll))))
                {
                    
                    //#line 494 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    {
                        x10_long i__148528;
                        for (i__148528 = ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                           pid__148536); ((i__148528) < (j__148527));
                             i__148528 = ((i__148528) + (((x10_long)1ll))))
                        {
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__148515 = j__148527;
                            x10_long y__148516 = i__148528;
                            x10_double v__148517 = (__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__148518 = i__148528;
                                x10_long y__148519 = j__148527;
                                ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__148519) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148518)));
                            }))
                            ;
                            x10_double ret__148520;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__148516) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148515)),
                              v__148517);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148520 = v__148517;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148520;
                        }
                    }
                    
                }
            }
            
            //#line 496 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long mult__148529 = ::x10::lang::DoubleNatives::toLong(((::x10::lang::MathNatives::ceil(((((((x10_double) (nPlaces))) * (0.5))) + (0.5)))) - (((x10_double) (((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                                                                                                                                                                                       ((x10_long)0ll))) &&
            ((pid__148536) < (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll))))))
              ? (((x10_long)1ll)) : (((x10_long)0ll)))))));
            
            //#line 497 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            {
                x10_long qid__148530;
                for (qid__148530 = ((pid__148536) + (((x10_long)1ll)));
                     ((qid__148530) < (((pid__148536) + (mult__148529))));
                     qid__148530 = ((qid__148530) + (((x10_long)1ll))))
                {
                    
                    //#line 498 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long qq__148531 = ((qid__148530) % ::x10aux::zeroCheck(nPlaces));
                    
                    //#line 499 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    {
                        x10_long i__148532;
                        for (i__148532 = ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                           pid__148536); ((i__148532) < (::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((pid__148536) + (((x10_long)1ll))))));
                             i__148532 = ((i__148532) + (((x10_long)1ll))))
                        {
                            
                            //#line 500 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            {
                                x10_long j__148533;
                                for (j__148533 = ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                   qq__148531);
                                     ((j__148533) < (::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                       ((qq__148531) + (((x10_long)1ll))))));
                                     j__148533 = ((j__148533) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    x10_long x__148521 = j__148533;
                                    x10_long y__148522 = i__148532;
                                    x10_double v__148523 =
                                      (__extension__ ({
                                        
                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                        x10_long x__148524 =
                                          i__148532;
                                        x10_long y__148525 =
                                          j__148533;
                                        ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                          ((((y__148525) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148524)));
                                    }))
                                    ;
                                    x10_double ret__148526;
                                    
                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    ::x10aux::nullCheck(::x10aux::nullCheck(gMatrix)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                      ((((y__148522) * (::x10aux::nullCheck(gMatrix)->FMGL(M)))) + (x__148521)),
                                      v__148523);
                                    
                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    ret__148526 = v__148523;
                                    
                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    ret__148526;
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 507 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double eTwo = ((((0.5) * (::au::edu::anu::qm::ROFockMethod::traceOfSymmetricProduct(
                                    reinterpret_cast< ::x10::matrix::DenseMatrix*>(density),
                                    gMatrix)))) / (this->FMGL(roZ)));
    
    //#line 509 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double eJ = ((::x10aux::nullCheck(this->FMGL(e_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*>::__apply())->x10::lang::Rail< x10_double >::__apply(
                        ((x10_long)0ll))) / (this->FMGL(roZ)));
    
    //#line 510 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double eK = ((((eTwo) - (eJ))) * (0.5));
    
    //#line 511 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
      ((x10_long)0ll));
    
    //#line 513 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149803),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(eTwo),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(eJ),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(eK));
    
    //#line 514 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::ROFockMethod_Strings::sl__149804),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) ((__extension__ ({
                                                     ::au::edu::anu::util::StatisticalTimer* this__147557 =
                                                       this->FMGL(timer);
                                                     ::x10aux::nullCheck(this__147557->FMGL(current))->x10::lang::Rail< x10_long >::__apply(
                                                       ((x10_long)0ll));
                                                 }))
                                                 ))) / (1.0E9))));
}

//#line 520 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
x10_double au::edu::anu::qm::ROFockMethod::traceOfSymmetricProduct(
  ::x10::matrix::DenseMatrix* a, ::x10::matrix::DenseMatrix* b) {
    
    //#line 521 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long N = ::x10aux::nullCheck(a)->FMGL(N);
    
    //#line 522 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_double trace = 0.0;
    
    //#line 523 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long i__108076max__148549 = ((N) - (((x10_long)1ll)));
    {
        x10_long i__148550;
        for (i__148550 = ((x10_long)0ll); ((i__148550) <= (i__108076max__148549));
             i__148550 = ((i__148550) + (((x10_long)1ll))))
        {
            x10_long j__148551 = i__148550;
            
            //#line 524 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            trace = ((trace) + ((((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__148545 = j__148551;
                x10_long y__148546 = j__148551;
                ::x10aux::nullCheck(::x10aux::nullCheck(a)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__148546) * (::x10aux::nullCheck(a)->FMGL(M)))) + (x__148545)));
            }))
            ) * ((__extension__ ({
                
                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                x10_long x__148547 = j__148551;
                x10_long y__148548 = j__148551;
                ::x10aux::nullCheck(::x10aux::nullCheck(b)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                  ((((y__148548) * (::x10aux::nullCheck(b)->FMGL(M)))) + (x__148547)));
            }))
            ))));
            
            //#line 525 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            x10_long i__108058min__148541 = ((j__148551) + (((x10_long)1ll)));
            x10_long i__108058max__148542 = ((N) - (((x10_long)1ll)));
            {
                x10_long i__148543;
                for (i__148543 = i__108058min__148541; ((i__148543) <= (i__108058max__148542));
                     i__148543 = ((i__148543) + (((x10_long)1ll))))
                {
                    x10_long i__148544 = i__148543;
                    
                    //#line 526 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    trace = ((trace) + (((((((x10_double) (((x10_long)2ll)))) * ((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__148537 = i__148544;
                        x10_long y__148538 = j__148551;
                        ::x10aux::nullCheck(::x10aux::nullCheck(a)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__148538) * (::x10aux::nullCheck(a)->FMGL(M)))) + (x__148537)));
                    }))
                    ))) * ((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__148539 = i__148544;
                        x10_long y__148540 = j__148551;
                        ::x10aux::nullCheck(::x10aux::nullCheck(b)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__148540) * (::x10aux::nullCheck(b)->FMGL(M)))) + (x__148539)));
                    }))
                    ))));
                }
            }
            
        }
    }
    
    //#line 529 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    return trace;
    
}

//#line 542 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod::computeAuxBDlm(::x10::matrix::DenseMatrix* density,
                                                    ::x10::matrix::DenseMatrix* mos,
                                                    x10_int ron,
                                                    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ,
                                                    ::x10::matrix::DenseMatrix* bMat,
                                                    ::x10::lang::Rail< x10_double >* dlm) {
    
    //#line 544 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
      ((x10_long)2ll));
    
    //#line 546 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_boolean doK = ((ron) <= (this->FMGL(roNK)));
    
    //#line 547 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10aux::nullCheck(dlm)->x10::lang::Rail< x10_double >::clear();
    
    //#line 548 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10aux::nullCheck(this->FMGL(dlm_wlh))->applyLocal(
      reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__27)))au_edu_anu_qm_ROFockMethod__closure__27())));
    
    //#line 550 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* ylm =
      this->FMGL(ylms_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::__apply();
    
    //#line 551 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* auxKIdx = this->FMGL(auxKIdx_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*>::__apply();
    
    //#line 553 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp =
      this->FMGL(shellPairs_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::__apply();
    
    //#line 554 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long size = (x10_long)(::x10aux::nullCheck(shp)->FMGL(size));
    
    //#line 555 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long i__108094max__148585 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__148586;
        for (i__148586 = ((x10_long)0ll); ((i__148586) <= (i__108094max__148585));
             i__148586 = ((i__148586) + (((x10_long)1ll))))
        {
            x10_long i__148587 = i__148586;
            if ((((((x10_long)0ll)) <= (::x10aux::nullCheck(auxKIdx)->x10::lang::Rail< x10_long >::__apply(
                                          i__148587))) &&
                ((::x10aux::nullCheck(auxKIdx)->x10::lang::Rail< x10_long >::__apply(
                    i__148587)) < (size)))) {
                ::x10::lang::Rail< x10_long >* a__148552 =
                  auxKIdx;
                x10_long i__148553 = i__148587;
                x10_long r__148554 = ((::x10aux::nullCheck(a__148552)->x10::lang::Rail< x10_long >::__apply(
                                         i__148553)) + (size));
                ::x10aux::nullCheck(a__148552)->x10::lang::Rail< x10_long >::__set(
                  i__148553, r__148554);
            }
            
        }
    }
    
    //#line 556 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_long >* range = this->FMGL(shellPairRange_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*>::__apply();
    {
        
        //#line 558 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__148698 = ::x10::lang::Runtime::startFinish();
        try {
            {
                (__extension__ ({
                    ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D alloc__107760 =
                       ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_alloc();
                    
                    //#line 760 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long end__148555 = ::x10aux::nullCheck(this->FMGL(shellAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                             ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
                    
                    //#line 761 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    alloc__107760->FMGL(start) = ((x10_long)0ll);
                    alloc__107760->FMGL(end) = end__148555;
                    alloc__107760->FMGL(grainSize) = ((x10_long)8ll);
                    alloc__107760;
                }))
                ->au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::execute(
                  reinterpret_cast< ::x10::lang::VoidFun_0_1<x10_long>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1<x10_long> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__28)))au_edu_anu_qm_ROFockMethod__closure__28(range, shp, this, ron, auxJ, auxKIdx, size, ylm, doK, density, mos, bMat))));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc307) {
            {
                ::x10::lang::CheckedThrowable* ct__148696 =
                  __exc307;
                {
                    ::x10::lang::Runtime::pushException(ct__148696);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__148698);
    }
    
    //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10aux::nullCheck(this->FMGL(dlm_wlh))->reduceLocal(
      dlm, reinterpret_cast< ::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__29)))au_edu_anu_qm_ROFockMethod__closure__29())));
    
    //#line 628 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_double >(
      dlm, ((x10_long)0ll), dlm, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(dlm)->FMGL(size)),
      ((x10_int)0));
    
    //#line 629 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
      ((x10_long)2ll));
}

//#line 641 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod::computeK(x10_int ron,
                                              ::x10::matrix::DenseMatrix* bMat,
                                              ::x10::matrix::DenseMatrix* localK) {
    
    //#line 642 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
      ((x10_long)4ll));
    
    //#line 643 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_boolean doK = ((ron) <= (this->FMGL(roNK)));
    
    //#line 644 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    if (doK) {
        {
            
            //#line 645 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__148712 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    
                    //#line 646 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long nPlaces = ((x10_long)::x10aux::num_hosts);
                    
                    //#line 647 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long pid = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                    
                    //#line 648 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long offsetHere = ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                            pid);
                    
                    //#line 30 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/util/ExecutionEnvironment.x10"
                    x10_int numThreads__148588 = ::x10::lang::Runtime::FMGL(NTHREADS__get)();
                    
                    //#line 650 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::au::edu::anu::qm::ROFockMethod__RemoteBlock* remoteK =
                      this->FMGL(remoteBlockK_plh)->x10::lang::PlaceLocalHandle< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>::__apply();
                    
                    //#line 651 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    ::x10::matrix::DenseMatrix* a = ::x10aux::nullCheck(this->FMGL(halfAuxMat))->local();
                    
                    //#line 653 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long blocks = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((((((x10_double) (nPlaces))) * (0.5))) + (0.5))));
                    
                    //#line 654 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long blk = ((x10_long)1ll);
                    
                    //#line 655 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long nextBlockPlace = ((x10_long)-1ll);
                    {
                        
                        //#line 656 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::lang::Runtime::ensureNotInAtomic();
                        ::x10::lang::FinishState* fs__148703 =
                          ::x10::lang::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 657 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                if (((blocks) > (((x10_long)1ll))))
                                {
                                    
                                    //#line 659 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    nextBlockPlace = ((((pid) + (blk))) % ::x10aux::zeroCheck(nPlaces));
                                    
                                    //#line 660 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    x10_long fullBlockSize =
                                      ((((((x10_long)(this->FMGL(roK)))) * (this->FMGL(nOrbitals)))) * (::x10aux::nullCheck(this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                                                                          nextBlockPlace)));
                                    
                                    //#line 661 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    x10_boolean full = (((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                                                                  ((x10_long)1ll))) ||
                                    ((blk) < (((blocks) - (((x10_long)1ll)))))) ||
                                    ((pid) < (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll))))));
                                    
                                    //#line 662 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    x10_long blockSize = full
                                      ? (fullBlockSize) : (((((fullBlockSize) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll))));
                                    
                                    //#line 663 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    ::x10::lang::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__30)))au_edu_anu_qm_ROFockMethod__closure__30(remoteK, this, &(nextBlockPlace), blockSize))));
                                }
                                
                                //#line 665 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
                                  ((x10_long)5ll));
                                
                                //#line 666 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                ::x10::matrix::blas::DenseMatrixBLAS::symRankKUpdateTrans(
                                  1.0, a, 1.0, localK, (__extension__ ({
                                      ::x10::lang::Rail< x10_long >* t__149702 =
                                        ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                      t__149702->x10::lang::Rail< x10_long >::__set(
                                        ((x10_long)0ll), ::x10aux::nullCheck(a)->FMGL(N));
                                      t__149702->x10::lang::Rail< x10_long >::__set(
                                        ((x10_long)1ll), ::x10aux::nullCheck(a)->FMGL(M));
                                      t__149702;
                                  }))
                                  , (__extension__ ({
                                      ::x10::lang::Rail< x10_long >* t__149708 =
                                        ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)4ll), false);
                                      t__149708->x10::lang::Rail< x10_long >::__set(
                                        ((x10_long)0ll), ((x10_long)0ll));
                                      t__149708->x10::lang::Rail< x10_long >::__set(
                                        ((x10_long)1ll), ((x10_long)0ll));
                                      t__149708->x10::lang::Rail< x10_long >::__set(
                                        ((x10_long)2ll), ((x10_long)0ll));
                                      t__149708->x10::lang::Rail< x10_long >::__set(
                                        ((x10_long)3ll), offsetHere);
                                      t__149708;
                                  }))
                                  , true);
                                
                                //#line 667 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
                                  ((x10_long)5ll));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc309) {
                            {
                                ::x10::lang::CheckedThrowable* ct__148701 =
                                  __exc309;
                                {
                                    ::x10::lang::Runtime::pushException(
                                      ct__148701);
                                }
                            }
                        }
                        ::x10::lang::Runtime::stopFinish(
                          fs__148703);
                    }
                    
                    //#line 676 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    while ((!::x10aux::struct_equals(nextBlockPlace,
                                                     ((x10_long)-1ll))))
                    {
                        
                        //#line 677 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        x10_long thisBlockPlace = nextBlockPlace;
                        
                        //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        ::x10::matrix::DenseMatrix* thisBlock =
                          ::x10aux::nullCheck(remoteK)->getCurrent();
                        
                        //#line 679 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                        blk = ((blk) + (((x10_long)1ll)));
                        {
                            
                            //#line 680 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                            ::x10::lang::Runtime::ensureNotInAtomic();
                            ::x10::lang::FinishState* fs__148708 =
                              ::x10::lang::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 681 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    if (((blk) < (blocks)))
                                    {
                                        
                                        //#line 683 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        nextBlockPlace = ((((pid) + (blk))) % ::x10aux::zeroCheck(nPlaces));
                                        
                                        //#line 684 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_long fullBlockSize =
                                          ((((((x10_long)(this->FMGL(roK)))) * (this->FMGL(nOrbitals)))) * (::x10aux::nullCheck(this->FMGL(funcAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                                                                              nextBlockPlace)));
                                        
                                        //#line 685 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_boolean full =
                                          (((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                                                     ((x10_long)1ll))) ||
                                        ((blk) < (((blocks) - (((x10_long)1ll)))))) ||
                                        ((pid) < (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll))))));
                                        
                                        //#line 686 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        x10_long blockSize =
                                          full ? (fullBlockSize)
                                          : (((((fullBlockSize) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)2ll))));
                                        
                                        //#line 687 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        ::x10::lang::Runtime::runAsync(
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__closure__31)))au_edu_anu_qm_ROFockMethod__closure__31(remoteK, this, &(nextBlockPlace), blockSize))));
                                    } else {
                                        
                                        //#line 689 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        nextBlockPlace = ((x10_long)-1ll);
                                    }
                                    
                                    //#line 691 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    x10_double dgemmGFlops;
                                    
                                    //#line 692 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
                                      ((x10_long)6ll));
                                    
                                    //#line 693 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    if (((::x10aux::struct_equals(((nPlaces) % ::x10aux::zeroCheck(((x10_long)2ll))),
                                                                  ((x10_long)1ll))) ||
                                        ((blk) < (blocks))))
                                    {
                                        
                                        //#line 694 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        ::x10::matrix::blas::DenseMatrixBLAS::compTransMult(
                                          1.0, a, thisBlock,
                                          1.0, localK, (__extension__ ({
                                              ::x10::lang::Rail< x10_long >* t__149718 =
                                                ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                              t__149718->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)0ll),
                                                ::x10aux::nullCheck(a)->FMGL(N));
                                              t__149718->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)1ll),
                                                ::x10aux::nullCheck(thisBlock)->FMGL(N));
                                              t__149718->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)2ll),
                                                ::x10aux::nullCheck(a)->FMGL(M));
                                              t__149718;
                                          }))
                                          , (__extension__ ({
                                              ::x10::lang::Rail< x10_long >* t__149726 =
                                                ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)6ll), false);
                                              t__149726->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)0ll),
                                                ((x10_long)0ll));
                                              t__149726->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)1ll),
                                                ((x10_long)0ll));
                                              t__149726->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)2ll),
                                                ((x10_long)0ll));
                                              t__149726->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)3ll),
                                                ((x10_long)0ll));
                                              t__149726->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)4ll),
                                                ((x10_long)0ll));
                                              t__149726->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)5ll),
                                                ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                  thisBlockPlace));
                                              t__149726;
                                          }))
                                          );
                                        
                                        //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        dgemmGFlops = ((((x10_double) (((((((((x10_long)2ll)) * (::x10aux::nullCheck(a)->FMGL(N)))) * (::x10aux::nullCheck(thisBlock)->FMGL(N)))) * (::x10aux::nullCheck(a)->FMGL(M)))))) / (1.0E9));
                                    } else 
                                    //#line 696 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    if (((pid) < (((nPlaces) / ::x10aux::zeroCheck(((x10_long)2ll))))))
                                    {
                                        
                                        //#line 697 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        dgemmGFlops = ((((x10_double) (((((((((x10_long)2ll)) * (((::x10aux::nullCheck(a)->FMGL(N)) / ::x10aux::zeroCheck(((x10_long)2ll)))))) * (::x10aux::nullCheck(thisBlock)->FMGL(N)))) * (::x10aux::nullCheck(a)->FMGL(M)))))) / (1.0E9));
                                        
                                        //#line 698 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        ::x10::matrix::blas::DenseMatrixBLAS::compTransMult(
                                          1.0, a, thisBlock,
                                          1.0, localK, (__extension__ ({
                                              ::x10::lang::Rail< x10_long >* t__149740 =
                                                ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                              t__149740->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)0ll),
                                                ((::x10aux::nullCheck(a)->FMGL(N)) / ::x10aux::zeroCheck(((x10_long)2ll))));
                                              t__149740->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)1ll),
                                                ::x10aux::nullCheck(thisBlock)->FMGL(N));
                                              t__149740->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)2ll),
                                                ::x10aux::nullCheck(a)->FMGL(M));
                                              t__149740;
                                          }))
                                          , (__extension__ ({
                                              ::x10::lang::Rail< x10_long >* t__149748 =
                                                ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)6ll), false);
                                              t__149748->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)0ll),
                                                ((x10_long)0ll));
                                              t__149748->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)1ll),
                                                ((::x10aux::nullCheck(a)->FMGL(N)) - (((::x10aux::nullCheck(a)->FMGL(N)) / ::x10aux::zeroCheck(((x10_long)2ll))))));
                                              t__149748->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)2ll),
                                                ((x10_long)0ll));
                                              t__149748->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)3ll),
                                                ((x10_long)0ll));
                                              t__149748->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)4ll),
                                                ((::x10aux::nullCheck(a)->FMGL(N)) - (((::x10aux::nullCheck(a)->FMGL(N)) / ::x10aux::zeroCheck(((x10_long)2ll))))));
                                              t__149748->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)5ll),
                                                ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                  thisBlockPlace));
                                              t__149748;
                                          }))
                                          );
                                    } else {
                                        
                                        //#line 700 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        dgemmGFlops = ((((x10_double) (((((((((x10_long)2ll)) * (((::x10aux::nullCheck(thisBlock)->FMGL(N)) - (((::x10aux::nullCheck(thisBlock)->FMGL(N)) / ::x10aux::zeroCheck(((x10_long)2ll)))))))) * (::x10aux::nullCheck(thisBlock)->FMGL(N)))) * (::x10aux::nullCheck(a)->FMGL(M)))))) / (1.0E9));
                                        
                                        //#line 701 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                        ::x10::matrix::blas::DenseMatrixBLAS::compTransMult(
                                          1.0, a, thisBlock,
                                          1.0, localK, (__extension__ ({
                                              ::x10::lang::Rail< x10_long >* t__149762 =
                                                ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                              t__149762->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)0ll),
                                                ::x10aux::nullCheck(a)->FMGL(N));
                                              t__149762->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)1ll),
                                                ((::x10aux::nullCheck(thisBlock)->FMGL(N)) - (((::x10aux::nullCheck(thisBlock)->FMGL(N)) / ::x10aux::zeroCheck(((x10_long)2ll))))));
                                              t__149762->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)2ll),
                                                ::x10aux::nullCheck(a)->FMGL(M));
                                              t__149762;
                                          }))
                                          , (__extension__ ({
                                              ::x10::lang::Rail< x10_long >* t__149770 =
                                                ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)6ll), false);
                                              t__149770->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)0ll),
                                                ((x10_long)0ll));
                                              t__149770->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)1ll),
                                                ((x10_long)0ll));
                                              t__149770->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)2ll),
                                                ((x10_long)0ll));
                                              t__149770->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)3ll),
                                                ((x10_long)0ll));
                                              t__149770->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)4ll),
                                                ((x10_long)0ll));
                                              t__149770->x10::lang::Rail< x10_long >::__set(
                                                ((x10_long)5ll),
                                                ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                                                  thisBlockPlace));
                                              t__149770;
                                          }))
                                          );
                                    }
                                    
                                    //#line 703 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                                    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
                                      ((x10_long)6ll));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc310) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__148706 =
                                      __exc310;
                                    {
                                        ::x10::lang::Runtime::pushException(
                                          ct__148706);
                                    }
                                }
                            }
                            ::x10::lang::Runtime::stopFinish(
                              fs__148708);
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc311) {
                {
                    ::x10::lang::CheckedThrowable* ct__148710 =
                      __exc311;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__148710);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__148712);
        }
    }
    
    //#line 715 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
      ((x10_long)4ll));
}

//#line 726 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod::computeJ(x10_int ron,
                                              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* auxJ,
                                              ::x10::lang::Rail< x10_double >* dlm,
                                              ::x10::matrix::DenseMatrix* localJ) {
    
    //#line 727 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
      ((x10_long)3ll));
    
    //#line 729 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >* shp =
      this->FMGL(shellPairs_plh)->x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::__apply();
    
    //#line 730 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long size = (x10_long)(::x10aux::nullCheck(shp)->FMGL(size));
    
    //#line 731 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long offsetHere = ::x10aux::nullCheck(this->FMGL(offsetAtPlace))->x10::lang::Rail< x10_long >::__apply(
                            ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
    {
        
        //#line 732 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__148716 = ::x10::lang::Runtime::startFinish();
        try {
            {
                (__extension__ ({
                    ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D alloc__107761 =
                       ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_alloc();
                    
                    //#line 760 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    x10_long end__148589 = (x10_long)(::x10aux::nullCheck(shp)->FMGL(size));
                    
                    //#line 761 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                    alloc__107761->FMGL(start) = ((x10_long)0ll);
                    alloc__107761->FMGL(end) = end__148589;
                    alloc__107761->FMGL(grainSize) = ((x10_long)16ll);
                    alloc__107761;
                }))
                ->au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::execute(
                  reinterpret_cast< ::x10::lang::VoidFun_0_1<x10_long>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1<x10_long> >(sizeof(au_edu_anu_qm_ROFockMethod__closure__32)))au_edu_anu_qm_ROFockMethod__closure__32(shp, auxJ, ron, offsetHere, dlm, localJ))));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc313) {
            {
                ::x10::lang::CheckedThrowable* ct__148714 =
                  __exc313;
                {
                    ::x10::lang::Runtime::pushException(ct__148714);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__148716);
    }
    
    //#line 752 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
      ((x10_long)3ll));
}

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
::au::edu::anu::qm::ROFockMethod* au::edu::anu::qm::ROFockMethod::au__edu__anu__qm__ROFockMethod____this__au__edu__anu__qm__ROFockMethod(
  ) {
    return this;
    
}
void au::edu::anu::qm::ROFockMethod::__fieldInitializers_au_edu_anu_qm_ROFockMethod(
  ) {
    this->FMGL(timer) = (__extension__ ({
        
        //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::util::StatisticalTimer* alloc__107766 =
           (new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer());
        (alloc__107766)->::au::edu::anu::util::StatisticalTimer::_constructor(
          ((x10_long)8ll));
        alloc__107766;
    }))
    ;
    this->FMGL(TIMER_TOTAL) = ((x10_long)0ll);
    this->FMGL(TIMER_PERPLACE) = ((x10_long)1ll);
    this->FMGL(TIMER_AUX) = ((x10_long)2ll);
    this->FMGL(TIMER_JMATRIX) = ((x10_long)3ll);
    this->FMGL(TIMER_K) = ((x10_long)4ll);
    this->FMGL(TIMER_DSYRK) = ((x10_long)5ll);
    this->FMGL(TIMER_DGEMM) = ((x10_long)6ll);
    this->FMGL(TIMER_GATHER) = ((x10_long)7ll);
}
const ::x10aux::serialization_id_t au::edu::anu::qm::ROFockMethod::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::ROFockMethod::_deserializer);

void au::edu::anu::qm::ROFockMethod::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(timer));
    buf.write(this->FMGL(TIMER_TOTAL));
    buf.write(this->FMGL(TIMER_PERPLACE));
    buf.write(this->FMGL(TIMER_AUX));
    buf.write(this->FMGL(TIMER_JMATRIX));
    buf.write(this->FMGL(TIMER_K));
    buf.write(this->FMGL(TIMER_DSYRK));
    buf.write(this->FMGL(TIMER_DGEMM));
    buf.write(this->FMGL(TIMER_GATHER));
    buf.write(this->FMGL(halfAuxMat));
    buf.write(this->FMGL(distJ));
    buf.write(this->FMGL(distK));
    buf.write(this->FMGL(auxJ_plh));
    buf.write(this->FMGL(auxKIdx_plh));
    buf.write(this->FMGL(remoteBlockK_plh));
    buf.write(this->FMGL(ylms_plh));
    buf.write(this->FMGL(shellPairs_plh));
    buf.write(this->FMGL(dlm_plh));
    buf.write(this->FMGL(e_plh));
    buf.write(this->FMGL(shellPairRange_plh));
    buf.write(this->FMGL(auxK_wlh));
    buf.write(this->FMGL(intPack_wlh));
    buf.write(this->FMGL(dlm_wlh));
    buf.write(this->FMGL(densityMos_plh));
    buf.write(this->FMGL(nOrbitals));
    buf.write(this->FMGL(norm));
    buf.write(this->FMGL(roN));
    buf.write(this->FMGL(roNK));
    buf.write(this->FMGL(roK));
    buf.write(this->FMGL(roZ));
    buf.write(this->FMGL(shellAtPlace));
    buf.write(this->FMGL(funcAtPlace));
    buf.write(this->FMGL(offsetAtPlace));
    buf.write(this->FMGL(N));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::ROFockMethod::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::ROFockMethod* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod>()) ::au::edu::anu::qm::ROFockMethod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::ROFockMethod::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(timer) = buf.read< ::au::edu::anu::util::StatisticalTimer*>();
    FMGL(TIMER_TOTAL) = buf.read<x10_long>();
    FMGL(TIMER_PERPLACE) = buf.read<x10_long>();
    FMGL(TIMER_AUX) = buf.read<x10_long>();
    FMGL(TIMER_JMATRIX) = buf.read<x10_long>();
    FMGL(TIMER_K) = buf.read<x10_long>();
    FMGL(TIMER_DSYRK) = buf.read<x10_long>();
    FMGL(TIMER_DGEMM) = buf.read<x10_long>();
    FMGL(TIMER_GATHER) = buf.read<x10_long>();
    FMGL(halfAuxMat) = buf.read< ::x10::matrix::dist::DistDenseMatrix*>();
    FMGL(distJ) = buf.read< ::x10::matrix::dist::DistDenseMatrix*>();
    FMGL(distK) = buf.read< ::x10::matrix::dist::DistDenseMatrix*>();
    FMGL(auxJ_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >();
    FMGL(auxKIdx_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> >();
    FMGL(remoteBlockK_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*> >();
    FMGL(ylms_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >();
    FMGL(shellPairs_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >();
    FMGL(dlm_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
    FMGL(e_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_double >*> >();
    FMGL(shellPairRange_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< x10_long >*> >();
    FMGL(auxK_wlh) = buf.read< ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>*>();
    FMGL(intPack_wlh) = buf.read< ::x10::util::WorkerLocalHandle< ::au::edu::anu::qm::ro::Integral_Pack *>*>();
    FMGL(dlm_wlh) = buf.read< ::x10::util::WorkerLocalHandle< ::x10::lang::Rail< x10_double >*>*>();
    FMGL(densityMos_plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*> >();
    FMGL(nOrbitals) = buf.read<x10_long>();
    FMGL(norm) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(roN) = buf.read<x10_int>();
    FMGL(roNK) = buf.read<x10_int>();
    FMGL(roK) = buf.read<x10_int>();
    FMGL(roZ) = buf.read<x10_double>();
    FMGL(shellAtPlace) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(funcAtPlace) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(offsetAtPlace) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(N) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::qm::ROFockMethod::rtt;
void au::edu::anu::qm::ROFockMethod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.ROFockMethod",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149783("\nROFockMethod.x10 \'public def this\' %s...\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149787("Fractions add up to %.2f %%\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149799("\nROFockMethod.x10 \'public def compute\' %s...\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149796("    ROFockMethod Initialization \'up to auxJ\' time: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149800("!(density$105610.N == t$105609.N && mos$105611.N == t$105609.N)");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149792("Aux/D calculations at each place: ideal=%.1f max=%.0f min=%.0f\n Imbalance cost=%.1f %%\n\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149788("Fraction of N at each place: ideal=%.1f max=%.0f min=%.0f\n Imbalance cost=%.1f %%\n\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149790("%5d %10.0f  %7.2f%%\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149793("Matrices size in MBs/64-bit double\nJ, K, G, density, mos\t%.3f (each)\naux4J \t%.3f\nYlm  \t%.3f\nhalfAux\t%.3f\n\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149784("Too many places! Last pid: ");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149795("    ROFockMethod Initialization \'up to ylms\' time: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149786("%5d  (%6d)  %9d  %7.2f%%\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149802("max time per place %.3f\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149805("!(src1$107044.size == src2$107045.size)");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149791("Fractions add up to %.2f %% (due to rounding of N/nPlaces, granularity of shellpairs and shellpair cut-off), %d shellpairs skipped\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149789("2. Number of Aux(mu,nu) calculated at each place\nPlace  Functions  Fraction\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149797("    ROFockMethod Initialization \'up to auxK\' time: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149801("Time (seconds) Aux= %.3f J= %.3f K-DSYRK= %.3f K-DGEMM= %.3f K-TOT= %.3f gather %.3f\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149794("    ROFockMethod Initialization \'up to ShellPair\' time: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149803("eTwo= %.10f EJ= %.10f EK= %.10f\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149804("    Time to construct GMatrix with RO: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149798("    ROFockMethod Initialization \'total\' time: %.3f seconds\n");
::x10::lang::String au::edu::anu::qm::ROFockMethod_Strings::sl__149785("1. Number of mu at each place\nPlace  (Offset)  Functions  Fraction\n");

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__1>au_edu_anu_qm_ROFockMethod__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__1::__apply, &au_edu_anu_qm_ROFockMethod__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__1::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*>::itable<au_edu_anu_qm_ROFockMethod__closure__2>au_edu_anu_qm_ROFockMethod__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__2::__apply, &au_edu_anu_qm_ROFockMethod__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >, &au_edu_anu_qm_ROFockMethod__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__2::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__4>au_edu_anu_qm_ROFockMethod__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__4::__apply, &au_edu_anu_qm_ROFockMethod__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*>::itable<au_edu_anu_qm_ROFockMethod__closure__3>au_edu_anu_qm_ROFockMethod__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__3::__apply, &au_edu_anu_qm_ROFockMethod__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::au::edu::anu::qm::ShellPair >*> >, &au_edu_anu_qm_ROFockMethod__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__3::_deserialize);

::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__5>au_edu_anu_qm_ROFockMethod__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__5::__apply, &au_edu_anu_qm_ROFockMethod__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >, &au_edu_anu_qm_ROFockMethod__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__5::_deserialize);

::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__6>au_edu_anu_qm_ROFockMethod__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__6::__apply, &au_edu_anu_qm_ROFockMethod__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >, &au_edu_anu_qm_ROFockMethod__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__6::_deserialize);

::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__7>au_edu_anu_qm_ROFockMethod__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__7::__apply, &au_edu_anu_qm_ROFockMethod__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >, &au_edu_anu_qm_ROFockMethod__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__7::_deserialize);

::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__8>au_edu_anu_qm_ROFockMethod__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__8::__apply, &au_edu_anu_qm_ROFockMethod__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >, &au_edu_anu_qm_ROFockMethod__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__8::_deserialize);

::x10::lang::Fun_0_0<x10_double>::itable<au_edu_anu_qm_ROFockMethod__closure__9>au_edu_anu_qm_ROFockMethod__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__9::__apply, &au_edu_anu_qm_ROFockMethod__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_double> >, &au_edu_anu_qm_ROFockMethod__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__9::_deserialize);

::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *>::itable<au_edu_anu_qm_ROFockMethod__closure__10>au_edu_anu_qm_ROFockMethod__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__10::__apply, &au_edu_anu_qm_ROFockMethod__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ro::Integral_Pack *> >, &au_edu_anu_qm_ROFockMethod__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__10::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__12>au_edu_anu_qm_ROFockMethod__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__12::__apply, &au_edu_anu_qm_ROFockMethod__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__12::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::itable<au_edu_anu_qm_ROFockMethod__closure__11>au_edu_anu_qm_ROFockMethod__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__11::__apply, &au_edu_anu_qm_ROFockMethod__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >, &au_edu_anu_qm_ROFockMethod__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__11::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>::itable<au_edu_anu_qm_ROFockMethod__closure__13>au_edu_anu_qm_ROFockMethod__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__13::__apply, &au_edu_anu_qm_ROFockMethod__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*> >, &au_edu_anu_qm_ROFockMethod__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__13::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__15>au_edu_anu_qm_ROFockMethod__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__15::__apply, &au_edu_anu_qm_ROFockMethod__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__15::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__15::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__15::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*>::itable<au_edu_anu_qm_ROFockMethod__closure__14>au_edu_anu_qm_ROFockMethod__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__14::__apply, &au_edu_anu_qm_ROFockMethod__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_long >*> >, &au_edu_anu_qm_ROFockMethod__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__14::_deserialize);

::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*>::itable<au_edu_anu_qm_ROFockMethod__closure__16>au_edu_anu_qm_ROFockMethod__closure__16::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__16::__apply, &au_edu_anu_qm_ROFockMethod__closure__16::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__16::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::au::edu::anu::qm::ROFockMethod__RemoteBlock*> >, &au_edu_anu_qm_ROFockMethod__closure__16::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__16::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__16::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__17>au_edu_anu_qm_ROFockMethod__closure__17::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__17::__apply, &au_edu_anu_qm_ROFockMethod__closure__17::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__17::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__17::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__17::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__17::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__18>au_edu_anu_qm_ROFockMethod__closure__18::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__18::__apply, &au_edu_anu_qm_ROFockMethod__closure__18::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__18::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__18::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__18::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__18::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__19>au_edu_anu_qm_ROFockMethod__closure__19::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__19::__apply, &au_edu_anu_qm_ROFockMethod__closure__19::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__19::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__19::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__19::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__19::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__20>au_edu_anu_qm_ROFockMethod__closure__20::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__20::__apply, &au_edu_anu_qm_ROFockMethod__closure__20::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__20::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__20::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__20::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__20::_deserialize);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*>::itable<au_edu_anu_qm_ROFockMethod__closure__21>au_edu_anu_qm_ROFockMethod__closure__21::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__21::__apply, &au_edu_anu_qm_ROFockMethod__closure__21::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__21::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::matrix::DenseMatrix* >*> >, &au_edu_anu_qm_ROFockMethod__closure__21::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__21::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__21::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__23>au_edu_anu_qm_ROFockMethod__closure__23::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__23::__apply, &au_edu_anu_qm_ROFockMethod__closure__23::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__23::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__23::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__23::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__23::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__23::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__23::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__22>au_edu_anu_qm_ROFockMethod__closure__22::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__22::__apply, &au_edu_anu_qm_ROFockMethod__closure__22::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__22::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__22::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__22::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__22::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__22::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__22::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__24>au_edu_anu_qm_ROFockMethod__closure__24::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__24::__apply, &au_edu_anu_qm_ROFockMethod__closure__24::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__24::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__24::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__24::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__24::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__24::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__24::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__25>au_edu_anu_qm_ROFockMethod__closure__25::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__25::__apply, &au_edu_anu_qm_ROFockMethod__closure__25::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__25::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__25::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__25::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__25::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__25::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__25::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__26>au_edu_anu_qm_ROFockMethod__closure__26::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__26::__apply, &au_edu_anu_qm_ROFockMethod__closure__26::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__26::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__26::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__26::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__26::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__26::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__26::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__27>au_edu_anu_qm_ROFockMethod__closure__27::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__27::__apply, &au_edu_anu_qm_ROFockMethod__closure__27::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__27::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__27::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__27::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__27::_deserialize);

::x10::lang::VoidFun_0_1<x10_long>::itable<au_edu_anu_qm_ROFockMethod__closure__28>au_edu_anu_qm_ROFockMethod__closure__28::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__28::__apply, &au_edu_anu_qm_ROFockMethod__closure__28::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__28::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >, &au_edu_anu_qm_ROFockMethod__closure__28::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__28::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__28::_deserialize);

::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*>::itable<au_edu_anu_qm_ROFockMethod__closure__29>au_edu_anu_qm_ROFockMethod__closure__29::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__29::__apply, &au_edu_anu_qm_ROFockMethod__closure__29::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__29::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2< ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*, ::x10::lang::Rail< x10_double >*> >, &au_edu_anu_qm_ROFockMethod__closure__29::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__29::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__29::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__30>au_edu_anu_qm_ROFockMethod__closure__30::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__30::__apply, &au_edu_anu_qm_ROFockMethod__closure__30::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__30::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__30::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__30::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__30::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__30::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__30::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__closure__31>au_edu_anu_qm_ROFockMethod__closure__31::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__31::__apply, &au_edu_anu_qm_ROFockMethod__closure__31::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__31::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__closure__31::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__31::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__31::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__31::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__closure__31::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_1<x10_long>::itable<au_edu_anu_qm_ROFockMethod__closure__32>au_edu_anu_qm_ROFockMethod__closure__32::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__closure__32::__apply, &au_edu_anu_qm_ROFockMethod__closure__32::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__closure__32::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >, &au_edu_anu_qm_ROFockMethod__closure__32::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__closure__32::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__closure__32::_deserialize);

/* END of ROFockMethod */
/*************************************************/
/*************************************************/
/* START of ROFockMethod$RecursiveBisection1D */
#include <au/edu/anu/qm/ROFockMethod__RecursiveBisection1D.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D__CLOSURE__33_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D__CLOSURE__33_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        secondHalf->au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::execute(
          body);
    }
    
    // captured environment
    ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D secondHalf;
    ::x10::lang::VoidFun_0_1<x10_long>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->secondHalf);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D that_secondHalf = buf.read< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D>();
        ::x10::lang::VoidFun_0_1<x10_long>* that_body = buf.read< ::x10::lang::VoidFun_0_1<x10_long>*>();
        au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33* this_ = new (storage) au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33(that_secondHalf, that_body);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33(::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D secondHalf, ::x10::lang::VoidFun_0_1<x10_long>* body) : secondHalf(secondHalf), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:767";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__RECURSIVEBISECTION1D__CLOSURE__33_CLOSURE

//#line 755 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
namespace au { namespace edu { namespace anu { namespace qm { 
class ROFockMethod__RecursiveBisection1D_ibox0 : public ::x10::lang::IBox< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D> {
public:
    static ::x10::lang::Any::itable< ROFockMethod__RecursiveBisection1D_ibox0 > itable;
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
::x10::lang::Any::itable< ROFockMethod__RecursiveBisection1D_ibox0 >  ROFockMethod__RecursiveBisection1D_ibox0::itable(&ROFockMethod__RecursiveBisection1D_ibox0::equals, &ROFockMethod__RecursiveBisection1D_ibox0::hashCode, &ROFockMethod__RecursiveBisection1D_ibox0::toString, &ROFockMethod__RecursiveBisection1D_ibox0::typeName);
} } } } 
::x10::lang::Any::itable< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D >  au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_itable_0(&au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::equals, &au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::hashCode, &au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::toString, &au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::typeName);
::x10aux::itable_entry au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D")};
::x10aux::itable_entry au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D")};

//#line 756 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"


//#line 760 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"


//#line 764 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::execute(::x10::lang::VoidFun_0_1<x10_long>* body) {
    
    //#line 765 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    if ((((((*this)->FMGL(end)) - ((*this)->FMGL(start)))) > ((*this)->FMGL(grainSize))))
    {
        
        //#line 766 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D secondHalf =
           ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_alloc();
        
        //#line 760 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long start__148613 = (((((*this)->FMGL(start)) + ((*this)->FMGL(end)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        x10_long end__148614 = (*this)->FMGL(end);
        x10_long grainSize__148615 = (*this)->FMGL(grainSize);
        
        //#line 761 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        secondHalf->FMGL(start) = start__148613;
        secondHalf->FMGL(end) = end__148614;
        secondHalf->FMGL(grainSize) = grainSize__148615;
        
        //#line 767 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33)))au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33(secondHalf, body))));
        
        //#line 768 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D firstHalf =
           ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_alloc();
        
        //#line 760 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long start__148616 = (*this)->FMGL(start);
        x10_long end__148617 = (((((*this)->FMGL(start)) + ((*this)->FMGL(end)))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        x10_long grainSize__148618 = (*this)->FMGL(grainSize);
        
        //#line 761 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        firstHalf->FMGL(start) = start__148616;
        firstHalf->FMGL(end) = end__148617;
        firstHalf->FMGL(grainSize) = grainSize__148618;
        
        //#line 769 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        firstHalf->au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::execute(
          body);
    } else {
        
        //#line 771 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        x10_long i__108166min__148619 = (*this)->FMGL(start);
        x10_long i__108166max__148620 = (((*this)->FMGL(end)) - (((x10_long)1ll)));
        {
            x10_long i__148621;
            for (i__148621 = i__108166min__148619; ((i__148621) <= (i__108166max__148620));
                 i__148621 = ((i__148621) + (((x10_long)1ll))))
            {
                x10_long i__148622 = i__148621;
                
                //#line 772 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
                ::x10::lang::VoidFun_0_1<x10_long>::__apply(::x10aux::nullCheck(body), 
                  i__148622);
            }
        }
        
    }
    
}

//#line 755 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
::x10::lang::String* au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149967), (&::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149968)), (*this)->FMGL(start)), (&::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149969)), (*this)->FMGL(end)), (&::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149970)), (*this)->FMGL(grainSize));
    
}
x10_int au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(start))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(end))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(grainSize))));
    return result;
    
}
x10_boolean au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D>(other));
    
}
x10_boolean au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D>(other)))
    {
        return false;
        
    }
    return (*this)->au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_struct_equals(
             ::x10aux::class_cast< ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D>(other));
    
}
void ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_serialize(::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(start));
    buf.write(this_->FMGL(end));
    buf.write(this_->FMGL(grainSize));
    
}

void ::au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(start) = buf.read<x10_long>();
    FMGL(end) = buf.read<x10_long>();
    FMGL(grainSize) = buf.read<x10_long>();
}


::x10aux::RuntimeType au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::rtt;
void au::edu::anu::qm::ROFockMethod__RecursiveBisection1D::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("au.edu.anu.qm.ROFockMethod.RecursiveBisection1D",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149969(" end=");
::x10::lang::String au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149970(" grainSize=");
::x10::lang::String au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149968(" start=");
::x10::lang::String au::edu::anu::qm::ROFockMethod__RecursiveBisection1D_Strings::sl__149967("struct au.edu.anu.qm.ROFockMethod.RecursiveBisection1D:");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33>au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::__apply, &au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_ROFockMethod__RecursiveBisection1D__closure__33::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of ROFockMethod$RecursiveBisection1D */
/*************************************************/
/*************************************************/
/* START of ROFockMethod$RemoteBlock */
#include <au/edu/anu/qm/ROFockMethod__RemoteBlock.h>

#include <x10/lang/Double.h>
#include <x10/util/Pair.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/matrix/DenseMatrix.h>
#include <x10/matrix/dist/DistDenseMatrix.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/Timer.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/matrix/Matrix.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK__CLOSURE__34_CLOSURE
#define AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK__CLOSURE__34_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> >::itable<au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::util::Pair<x10_long, x10_long> __apply(){
        try {
            
            //#line 808 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Rail< x10_double >* dataHere = ::x10aux::nullCheck(::x10aux::nullCheck(ddm)->local())->FMGL(d);
            
            //#line 809 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::lang::Rail< void >::asyncCopy< x10_double >(dataHere, ((x10_long)0ll),
                                                               nextDataRef,
                                                               ((x10_long)0ll),
                                                               size);
            
            //#line 810 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            ::x10::util::Pair<x10_long, x10_long> alloc__148626 =
               ::x10::util::Pair<x10_long, x10_long>::_alloc();
            
            //#line 21 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
            x10_long first__148624 = ::x10aux::nullCheck(::x10aux::nullCheck(ddm)->local())->FMGL(M);
            x10_long second__148625 = ::x10aux::nullCheck(::x10aux::nullCheck(ddm)->local())->FMGL(N);
            
            //#line 22 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
            alloc__148626->FMGL(first) = first__148624;
            
            //#line 23 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/Pair.x10"
            alloc__148626->FMGL(second) = second__148625;
            
            //#line 810 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
            return alloc__148626;
            
        }
        catch (::x10::lang::CheckedThrowable* __exc328) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc328;
                {
                    ::x10::util::Pair<x10_long, x10_long> __lowerer__var__1__ =
                      ::x10aux::class_cast_unchecked< ::x10::util::Pair<x10_long, x10_long> >(::x10::lang::Runtime::wrapAtChecked< ::x10::util::Pair<x10_long, x10_long> >(
                                                                                                __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::matrix::dist::DistDenseMatrix* ddm;
    ::x10::lang::GlobalRail<x10_double> nextDataRef;
    x10_long size;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ddm);
        buf.write(this->nextDataRef);
        buf.write(this->size);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34* storage = ::x10aux::alloc_z<au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34>();
        buf.record_reference(storage);
        ::x10::matrix::dist::DistDenseMatrix* that_ddm = buf.read< ::x10::matrix::dist::DistDenseMatrix*>();
        ::x10::lang::GlobalRail<x10_double> that_nextDataRef = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        x10_long that_size = buf.read<x10_long>();
        au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34* this_ = new (storage) au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34(that_ddm, that_nextDataRef, that_size);
        return this_;
    }
    
    au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34(::x10::matrix::dist::DistDenseMatrix* ddm, ::x10::lang::GlobalRail<x10_double> nextDataRef, x10_long size) : ddm(ddm), nextDataRef(nextDataRef), size(size) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> > >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10:807-811";
    }

};

#endif // AU_EDU_ANU_QM_ROFOCKMETHOD__REMOTEBLOCK__CLOSURE__34_CLOSURE

//#line 784 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 785 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 786 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 787 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"

//#line 789 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod__RemoteBlock::_constructor(x10_long blockSize) {
    
    //#line 783 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->au::edu::anu::qm::ROFockMethod__RemoteBlock::__fieldInitializers_au_edu_anu_qm_ROFockMethod_RemoteBlock();
    
    //#line 790 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(currentData) = ::x10::lang::Rail< x10_double >::_make(blockSize);
    
    //#line 791 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(nextData) = ::x10::lang::Rail< x10_double >::_make(blockSize);
}
::au::edu::anu::qm::ROFockMethod__RemoteBlock* au::edu::anu::qm::ROFockMethod__RemoteBlock::_make(
  x10_long blockSize) {
    ::au::edu::anu::qm::ROFockMethod__RemoteBlock* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod__RemoteBlock>()) ::au::edu::anu::qm::ROFockMethod__RemoteBlock();
    this_->_constructor(blockSize);
    return this_;
}



//#line 795 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::ROFockMethod__RemoteBlock::getCurrent(
  ) {
    
    //#line 796 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(currentDim) = this->FMGL(nextDim);
    
    //#line 797 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::Rail< x10_double >* temp = this->FMGL(nextData);
    
    //#line 798 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(nextData) = this->FMGL(currentData);
    
    //#line 799 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    this->FMGL(currentData) = temp;
    
    //#line 800 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::matrix::DenseMatrix* alloc__148623 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (alloc__148623)->::x10::matrix::DenseMatrix::_constructor(
      this->FMGL(currentDim)->FMGL(first), this->FMGL(currentDim)->FMGL(second),
      this->FMGL(currentData));
    return alloc__148623;
    
}

//#line 804 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
void au::edu::anu::qm::ROFockMethod__RemoteBlock::fetchNext(
  ::x10::matrix::dist::DistDenseMatrix* ddm, x10_long nextBlockPlace,
  x10_long size) {
    
    //#line 805 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    ::x10::lang::GlobalRail<x10_double> nextDataRef = (__extension__ ({
        ::x10::lang::Rail< x10_double >* a__107745 = this->FMGL(nextData);
        if (!((!::x10aux::struct_equals(a__107745, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::ROFockMethod__RemoteBlock_Strings::sl__149985))));
        }
        (__extension__ ({
            ::x10::lang::GlobalRail<x10_double> alloc__107763 =
               ::x10::lang::GlobalRail<x10_double>::_alloc();
            (alloc__107763)->::x10::lang::GlobalRail<x10_double>::_constructor(
              a__107745);
            alloc__107763;
        }))
        ;
    }))
    ;
    
    //#line 806 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
    x10_long start = ::x10::lang::RuntimeNatives::nanoTime();
    {
        
        //#line 807 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__148725 = ::x10::lang::Runtime::startFinish();
        try {
            {
                this->FMGL(nextDim) = ::x10::lang::Runtime::evalAt< ::x10::util::Pair<x10_long, x10_long> >(
                                        (__extension__ ({
                                            ::x10::lang::Place alloc__107764 =
                                               ::x10::lang::Place::_alloc();
                                            (alloc__107764)->::x10::lang::Place::_constructor(
                                              nextBlockPlace);
                                            alloc__107764;
                                        }))
                                        , reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> >*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> > >(sizeof(au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34)))au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34(ddm, nextDataRef, size))),
                                        ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc329) {
            {
                ::x10::lang::CheckedThrowable* ct__148723 =
                  __exc329;
                {
                    ::x10::lang::Runtime::pushException(ct__148723);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__148725);
    }
}

//#line 783 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ROFockMethod.x10"
::au::edu::anu::qm::ROFockMethod__RemoteBlock* au::edu::anu::qm::ROFockMethod__RemoteBlock::au__edu__anu__qm__ROFockMethod__RemoteBlock____this__au__edu__anu__qm__ROFockMethod__RemoteBlock(
  ) {
    return this;
    
}
void au::edu::anu::qm::ROFockMethod__RemoteBlock::__fieldInitializers_au_edu_anu_qm_ROFockMethod_RemoteBlock(
  ) {
    this->FMGL(currentData) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(nextData) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(currentDim) = ::x10aux::zeroValue< ::x10::util::Pair<x10_long, x10_long> >();
    this->FMGL(nextDim) = ::x10aux::zeroValue< ::x10::util::Pair<x10_long, x10_long> >();
}
const ::x10aux::serialization_id_t au::edu::anu::qm::ROFockMethod__RemoteBlock::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::ROFockMethod__RemoteBlock::_deserializer);

void au::edu::anu::qm::ROFockMethod__RemoteBlock::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(currentData));
    buf.write(this->FMGL(nextData));
    buf.write(this->FMGL(currentDim));
    buf.write(this->FMGL(nextDim));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::ROFockMethod__RemoteBlock::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::ROFockMethod__RemoteBlock* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::ROFockMethod__RemoteBlock>()) ::au::edu::anu::qm::ROFockMethod__RemoteBlock();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::ROFockMethod__RemoteBlock::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(currentData) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(nextData) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(currentDim) = buf.read< ::x10::util::Pair<x10_long, x10_long> >();
    FMGL(nextDim) = buf.read< ::x10::util::Pair<x10_long, x10_long> >();
}

::x10aux::RuntimeType au::edu::anu::qm::ROFockMethod__RemoteBlock::rtt;
void au::edu::anu::qm::ROFockMethod__RemoteBlock::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.ROFockMethod.RemoteBlock",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::ROFockMethod__RemoteBlock_Strings::sl__149985("!(a$107745 != null)");

::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> >::itable<au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34>au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::__apply, &au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::util::Pair<x10_long, x10_long> > >, &au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_ROFockMethod__RemoteBlock__closure__34::_deserialize);

/* END of ROFockMethod$RemoteBlock */
/*************************************************/
