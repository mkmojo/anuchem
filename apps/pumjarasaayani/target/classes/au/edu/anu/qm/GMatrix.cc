/*************************************************/
/* START of GMatrix */
#include <au/edu/anu/qm/GMatrix.h>

#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Int.h>
#include <au/edu/anu/qm/BasisFunctions.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/util/StatisticalTimer.h>
#include <x10/lang/Long.h>
#include <x10/regionarray/DistArray.h>
#include <au/edu/anu/qm/GMatrix__ComputePlace.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <x10/lang/Place.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <au/edu/anu/qm/ShellList.h>
#include <au/edu/anu/qm/TwoElectronIntegrals.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/Density.h>
#include <x10/lang/Boolean.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <x10/matrix/Matrix.h>
#include <x10/lang/Math.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Runtime.h>
#include <au/edu/anu/qm/GMatrix__ComputeThread.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <au/edu/anu/util/SharedCounter.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_qm_GMatrix__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*>::itable<au_edu_anu_qm_GMatrix__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::au::edu::anu::qm::GMatrix__ComputePlace* __apply(::x10::lang::Point* id__1066){
        
        //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::qm::GMatrix__ComputePlace* alloc__100734 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix__ComputePlace>()) ::au::edu::anu::qm::GMatrix__ComputePlace());
        (alloc__100734)->::au::edu::anu::qm::GMatrix__ComputePlace::_constructor(
          N, molecule, bfs, qCut, dCut, maxEstVal, omega, thresh);
        return alloc__100734;
        
    }
    
    // captured environment
    x10_long N;
    ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule;
    ::au::edu::anu::qm::BasisFunctions bfs;
    ::x10::matrix::DenseMatrix* qCut;
    ::x10::matrix::DenseMatrix* dCut;
    x10_double maxEstVal;
    x10_double omega;
    x10_double thresh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->N);
        buf.write(this->molecule);
        buf.write(this->bfs);
        buf.write(this->qCut);
        buf.write(this->dCut);
        buf.write(this->maxEstVal);
        buf.write(this->omega);
        buf.write(this->thresh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__1>();
        buf.record_reference(storage);
        x10_long that_N = buf.read<x10_long>();
        ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* that_molecule = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
        ::au::edu::anu::qm::BasisFunctions that_bfs = buf.read< ::au::edu::anu::qm::BasisFunctions>();
        ::x10::matrix::DenseMatrix* that_qCut = buf.read< ::x10::matrix::DenseMatrix*>();
        ::x10::matrix::DenseMatrix* that_dCut = buf.read< ::x10::matrix::DenseMatrix*>();
        x10_double that_maxEstVal = buf.read<x10_double>();
        x10_double that_omega = buf.read<x10_double>();
        x10_double that_thresh = buf.read<x10_double>();
        au_edu_anu_qm_GMatrix__closure__1* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__1(that_N, that_molecule, that_bfs, that_qCut, that_dCut, that_maxEstVal, that_omega, that_thresh);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__1(x10_long N, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule, ::au::edu::anu::qm::BasisFunctions bfs, ::x10::matrix::DenseMatrix* qCut, ::x10::matrix::DenseMatrix* dCut, x10_double maxEstVal, x10_double omega, x10_double thresh) : N(N), molecule(molecule), bfs(bfs), qCut(qCut), dCut(dCut), maxEstVal(maxEstVal), omega(omega), thresh(thresh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:135";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(computeThreads->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                              idx_loc))->compute(density);
    }
    
    // captured environment
    ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* computeThreads;
    x10_long idx_loc;
    ::au::edu::anu::qm::Density* density;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeThreads);
        buf.write(this->idx_loc);
        buf.write(this->density);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* that_computeThreads = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >*>();
        x10_long that_idx_loc = buf.read<x10_long>();
        ::au::edu::anu::qm::Density* that_density = buf.read< ::au::edu::anu::qm::Density*>();
        au_edu_anu_qm_GMatrix__closure__2* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__2(that_computeThreads, that_idx_loc, that_density);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__2(::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* computeThreads, x10_long idx_loc, ::au::edu::anu::qm::Density* density) : computeThreads(computeThreads), idx_loc(idx_loc), density(density) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:258";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 291 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                              p))->reset(density);
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::x10::lang::Point* p;
    ::au::edu::anu::qm::Density* density;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->p);
        buf.write(this->density);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__4>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        ::au::edu::anu::qm::Density* that_density = buf.read< ::au::edu::anu::qm::Density*>();
        au_edu_anu_qm_GMatrix__closure__4* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__4(that_computeInst, that_p, that_density);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__4(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::x10::lang::Point* p, ::au::edu::anu::qm::Density* density) : computeInst(computeInst), p(p), density(density) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:290-292";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__100982;
            for (p__100982 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__100982));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__100982));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__4)))au_edu_anu_qm_GMatrix__closure__4(computeInst, p, density))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::au::edu::anu::qm::Density* density;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->density);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__3>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::au::edu::anu::qm::Density* that_density = buf.read< ::au::edu::anu::qm::Density*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_qm_GMatrix__closure__3* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__3(that_computeInst, that_density, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__3(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::au::edu::anu::qm::Density* density, ::x10::regionarray::Dist* __lowerer__var__0__) : computeInst(computeInst), density(density), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:290-292";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<au_edu_anu_qm_GMatrix__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(){
        try {
            return ::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                         p__100777))->setValue(a__100812,
                                                               b__100803,
                                                               c__100794,
                                                               d__100785,
                                                               i__100807,
                                                               j__100798,
                                                               k__100789,
                                                               l__100780);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc63) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc63;
                {
                    x10_boolean __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_boolean>(::x10::lang::Runtime::wrapAtChecked< x10_boolean >(
                                                                                                    __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::x10::lang::Point* p__100777;
    x10_long a__100812;
    x10_long b__100803;
    x10_long c__100794;
    x10_long d__100785;
    x10_long i__100807;
    x10_long j__100798;
    x10_long k__100789;
    x10_long l__100780;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->p__100777);
        buf.write(this->a__100812);
        buf.write(this->b__100803);
        buf.write(this->c__100794);
        buf.write(this->d__100785);
        buf.write(this->i__100807);
        buf.write(this->j__100798);
        buf.write(this->k__100789);
        buf.write(this->l__100780);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__5>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::x10::lang::Point* that_p__100777 = buf.read< ::x10::lang::Point*>();
        x10_long that_a__100812 = buf.read<x10_long>();
        x10_long that_b__100803 = buf.read<x10_long>();
        x10_long that_c__100794 = buf.read<x10_long>();
        x10_long that_d__100785 = buf.read<x10_long>();
        x10_long that_i__100807 = buf.read<x10_long>();
        x10_long that_j__100798 = buf.read<x10_long>();
        x10_long that_k__100789 = buf.read<x10_long>();
        x10_long that_l__100780 = buf.read<x10_long>();
        au_edu_anu_qm_GMatrix__closure__5* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__5(that_computeInst, that_p__100777, that_a__100812, that_b__100803, that_c__100794, that_d__100785, that_i__100807, that_j__100798, that_k__100789, that_l__100780);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__5(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::x10::lang::Point* p__100777, x10_long a__100812, x10_long b__100803, x10_long c__100794, x10_long d__100785, x10_long i__100807, x10_long j__100798, x10_long k__100789, x10_long l__100780) : computeInst(computeInst), p__100777(p__100777), a__100812(a__100812), b__100803(b__100803), c__100794(c__100794), d__100785(d__100785), i__100807(i__100807), j__100798(j__100798), k__100789(k__100789), l__100780(l__100780) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:330";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::matrix::DenseMatrix* __apply(){
        try {
            return ::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                         p))->getGMatContributionArray();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc66) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc66;
                {
                    ::x10::matrix::DenseMatrix* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::matrix::DenseMatrix* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::x10::lang::Point* p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__7>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        au_edu_anu_qm_GMatrix__closure__7* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__7(that_computeInst, that_p);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__7(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::x10::lang::Point* p) : computeInst(computeInst), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:357";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__7_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 357 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::matrix::DenseMatrix* gVal = ::x10::lang::Runtime::evalAt< ::x10::matrix::DenseMatrix* >(
                                             ::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->__apply(
                                               p), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(sizeof(au_edu_anu_qm_GMatrix__closure__7)))au_edu_anu_qm_GMatrix__closure__7(computeInst, p))),
                                             ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        {
            
            //#line 358 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::CheckedThrowable* throwable__101099 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10::matrix::DenseMatrix* t__100813 =
                          saved_this;
                        ::x10::matrix::DenseMatrix* x__100814 =
                          gVal;
                        if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100814)->FMGL(M),
                                                        ::x10aux::nullCheck(t__100813)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(x__100814)->FMGL(N),
                                                     ::x10aux::nullCheck(t__100813)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149020))));
                        }
                        ::x10aux::nullCheck(t__100813)->cellAdd(
                          x__100814);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc67) {
                {
                    ::x10::lang::CheckedThrowable* formal__101100 =
                      __exc67;
                    {
                        throwable__101099 = formal__101100;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__101099,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101099))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101099));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__101099,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101099)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101099));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::x10::lang::Point* p;
    ::x10::matrix::DenseMatrix* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->p);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__6>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        ::x10::matrix::DenseMatrix* that_saved_this = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_GMatrix__closure__6* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__6(that_computeInst, that_p, that_saved_this);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__6(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::x10::lang::Point* p, ::x10::matrix::DenseMatrix* saved_this) : computeInst(computeInst), p(p), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:356-359";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__9_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::matrix::DenseMatrix* __apply(){
        try {
            
            //#line 376 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::GMatrix__ComputePlace* comp_loc = ::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                                                    placeId);
            
            //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(comp_loc)->reset(density);
            
            //#line 378 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int start = ((x10_int) (((placeId) < (remainder))
              ? (((placeId) * (((workPerPlace) + (((x10_long)1ll))))))
              : (((firstChunk) + (((((placeId) - (remainder))) * (workPerPlace)))))));
            
            //#line 379 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int end = ((x10_int) (((((((x10_long)(start))) + (workPerPlace))) + (((placeId) < (remainder))
              ? (((x10_long)1ll)) : (((x10_long)0ll))))));
            
            //#line 380 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(comp_loc)->compute(start,
                                                   end);
            
            //#line 385 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            return ::x10aux::nullCheck(comp_loc)->getGMatContributionArray();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc70) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc70;
                {
                    ::x10::matrix::DenseMatrix* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::matrix::DenseMatrix* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_long placeId;
    ::au::edu::anu::qm::Density* density;
    x10_long remainder;
    x10_long workPerPlace;
    x10_long firstChunk;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->placeId);
        buf.write(this->density);
        buf.write(this->remainder);
        buf.write(this->workPerPlace);
        buf.write(this->firstChunk);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__9* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__9>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_long that_placeId = buf.read<x10_long>();
        ::au::edu::anu::qm::Density* that_density = buf.read< ::au::edu::anu::qm::Density*>();
        x10_long that_remainder = buf.read<x10_long>();
        x10_long that_workPerPlace = buf.read<x10_long>();
        x10_long that_firstChunk = buf.read<x10_long>();
        au_edu_anu_qm_GMatrix__closure__9* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__9(that_computeInst, that_placeId, that_density, that_remainder, that_workPerPlace, that_firstChunk);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__9(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_long placeId, ::au::edu::anu::qm::Density* density, x10_long remainder, x10_long workPerPlace, x10_long firstChunk) : computeInst(computeInst), placeId(placeId), density(density), remainder(remainder), workPerPlace(workPerPlace), firstChunk(firstChunk) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:372-386";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__9_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__8_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 372 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::matrix::DenseMatrix* placeContribution = ::x10::lang::Runtime::evalAt< ::x10::matrix::DenseMatrix* >(
                                                          (__extension__ ({
                                                              ::x10::lang::Place alloc__61438 =
                                                                
                                                              ::x10::lang::Place::_alloc();
                                                              (alloc__61438)->::x10::lang::Place::_constructor(
                                                                placeId);
                                                              alloc__61438;
                                                          }))
                                                          ,
                                                          reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(sizeof(au_edu_anu_qm_GMatrix__closure__9)))au_edu_anu_qm_GMatrix__closure__9(computeInst, placeId, density, remainder, workPerPlace, firstChunk))),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        {
            
            //#line 391 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::CheckedThrowable* throwable__101102 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10::matrix::DenseMatrix* t__100815 =
                          saved_this;
                        ::x10::matrix::DenseMatrix* x__100816 =
                          placeContribution;
                        if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100816)->FMGL(M),
                                                        ::x10aux::nullCheck(t__100815)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(x__100816)->FMGL(N),
                                                     ::x10aux::nullCheck(t__100815)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149021))));
                        }
                        ::x10aux::nullCheck(t__100815)->cellAdd(
                          x__100816);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc71) {
                {
                    ::x10::lang::CheckedThrowable* formal__101103 =
                      __exc71;
                    {
                        throwable__101102 = formal__101103;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__101102,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101102))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101102));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__101102,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101102)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101102));
                }
                
            }
            
        }
    }
    
    // captured environment
    x10_long placeId;
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::au::edu::anu::qm::Density* density;
    x10_long remainder;
    x10_long workPerPlace;
    x10_long firstChunk;
    ::x10::matrix::DenseMatrix* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeId);
        buf.write(this->computeInst);
        buf.write(this->density);
        buf.write(this->remainder);
        buf.write(this->workPerPlace);
        buf.write(this->firstChunk);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__8* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__8>();
        buf.record_reference(storage);
        x10_long that_placeId = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::au::edu::anu::qm::Density* that_density = buf.read< ::au::edu::anu::qm::Density*>();
        x10_long that_remainder = buf.read<x10_long>();
        x10_long that_workPerPlace = buf.read<x10_long>();
        x10_long that_firstChunk = buf.read<x10_long>();
        ::x10::matrix::DenseMatrix* that_saved_this = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_GMatrix__closure__8* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__8(that_placeId, that_computeInst, that_density, that_remainder, that_workPerPlace, that_firstChunk, that_saved_this);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__8(x10_long placeId, ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::au::edu::anu::qm::Density* density, x10_long remainder, x10_long workPerPlace, x10_long firstChunk, ::x10::matrix::DenseMatrix* saved_this) : placeId(placeId), computeInst(computeInst), density(density), remainder(remainder), workPerPlace(workPerPlace), firstChunk(firstChunk), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:371-394";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__8_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__12_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        placeInts = ((placeInts) + (::x10aux::nullCheck(computeThread)->computeOneShellPair(
                                      i, numPrimitives, shellPrimitives)));
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> placeInts;
    ::au::edu::anu::qm::GMatrix__ComputeThread* computeThread;
    x10aux::captured_struct_lval<x10_long> i;
    x10_int numPrimitives;
    ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeInts);
        buf.write(this->computeThread);
        buf.write(this->i);
        buf.write(this->numPrimitives);
        buf.write(this->shellPrimitives);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__12* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__12>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_placeInts = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::au::edu::anu::qm::GMatrix__ComputeThread* that_computeThread = buf.read< ::au::edu::anu::qm::GMatrix__ComputeThread*>();
        x10aux::captured_struct_lval<x10_long> that_i = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_int that_numPrimitives = buf.read<x10_int>();
        ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* that_shellPrimitives = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >*>();
        au_edu_anu_qm_GMatrix__closure__12* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__12(that_placeInts, that_computeThread, that_i, that_numPrimitives, that_shellPrimitives);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__12(x10aux::captured_struct_lval<x10_long> placeInts, ::au::edu::anu::qm::GMatrix__ComputeThread* computeThread, x10aux::captured_struct_lval<x10_long> i, x10_int numPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives) : placeInts(placeInts), computeThread(computeThread), i(i), numPrimitives(numPrimitives), shellPrimitives(shellPrimitives) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:427";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__12_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__11_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::matrix::DenseMatrix* __apply(){
        try {
            
            //#line 408 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::util::Timer* placeTimer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
            (placeTimer)->::au::edu::anu::util::Timer::_constructor(((x10_long)1ll));
            
            //#line 409 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            placeTimer->au::edu::anu::util::Timer::start(((x10_long)0ll));
            
            //#line 411 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::GMatrix__ComputePlace* comp_loc = ::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                                                    placeId);
            
            //#line 412 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(comp_loc)->reset();
            
            //#line 413 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::GMatrix__ComputeThread* computeThread =
              ::x10aux::nullCheck(comp_loc)->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                ((x10_long)0ll));
            
            //#line 415 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long myG = placeId;
            
            //#line 417 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::ShellList shellList = ::x10aux::nullCheck(computeThread)->FMGL(shellList);
            
            //#line 418 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives =
              shellList->au::edu::anu::qm::ShellList::getShellPrimitives();
            
            //#line 419 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int numPrimitives = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
            
            //#line 420 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int numPairs = (__extension__ ({
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int ret__80276;
                
                //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int nPrimitives__100817 = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
                
                //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                ret__80276 = ((nPrimitives__100817) * (nPrimitives__100817));
                ret__80276;
            }))
            ;
            
            //#line 422 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long placePairs = ((x10_long)0ll);
            
            //#line 423 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long placeInts = ((x10_long)0ll);
            
            //#line 424 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            {
                x10_long i;
                for (i = myG; ((i) < (((x10_long)(numPairs))));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 425 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    if ((::x10aux::struct_equals(i, myG)))
                    {
                        {
                            
                            //#line 426 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            ::x10::lang::Runtime::ensureNotInAtomic();
                            ::x10::lang::FinishState* fs__101018 =
                              ::x10::lang::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 427 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    ::x10::lang::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__12)))au_edu_anu_qm_GMatrix__closure__12(&(placeInts), computeThread, &(i), numPrimitives, shellPrimitives))));
                                    
                                    //#line 428 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    myG = G->getAndIncrement();
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc74) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__101016 =
                                      __exc74;
                                    {
                                        ::x10::lang::Runtime::pushException(
                                          ct__101016);
                                    }
                                }
                            }
                            ::x10::lang::Runtime::stopFinish(
                              fs__101018);
                        }
                        
                        //#line 430 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        placePairs = ((placePairs) + (((x10_long)1ll)));
                    }
                    
                }
            }
            
            //#line 433 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            placeTimer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
            
            //#line 434 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::GMatrix_Strings::sl__149022),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Place::_make(::x10aux::here)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(placePairs),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(placeInts),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(placeTimer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                    ((x10_long)0ll))))) / (1.0E9))));
            
            //#line 436 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            return ::x10aux::nullCheck(comp_loc)->getGMatContributionArray();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc75) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc75;
                {
                    ::x10::matrix::DenseMatrix* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::matrix::DenseMatrix* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_long placeId;
    ::au::edu::anu::util::SharedCounter* G;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->placeId);
        buf.write(this->G);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__11* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__11>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_long that_placeId = buf.read<x10_long>();
        ::au::edu::anu::util::SharedCounter* that_G = buf.read< ::au::edu::anu::util::SharedCounter*>();
        au_edu_anu_qm_GMatrix__closure__11* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__11(that_computeInst, that_placeId, that_G);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__11(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_long placeId, ::au::edu::anu::util::SharedCounter* G) : computeInst(computeInst), placeId(placeId), G(G) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:407-437";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__11_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__10_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 407 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::matrix::DenseMatrix* placeContribution = ::x10::lang::Runtime::evalAt< ::x10::matrix::DenseMatrix* >(
                                                          (__extension__ ({
                                                              ::x10::lang::Place alloc__61439 =
                                                                
                                                              ::x10::lang::Place::_alloc();
                                                              (alloc__61439)->::x10::lang::Place::_constructor(
                                                                placeId);
                                                              alloc__61439;
                                                          }))
                                                          ,
                                                          reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(sizeof(au_edu_anu_qm_GMatrix__closure__11)))au_edu_anu_qm_GMatrix__closure__11(computeInst, placeId, G))),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        {
            
            //#line 441 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::CheckedThrowable* throwable__101105 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10::matrix::DenseMatrix* t__100818 =
                          saved_this;
                        ::x10::matrix::DenseMatrix* x__100819 =
                          placeContribution;
                        if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100819)->FMGL(M),
                                                        ::x10aux::nullCheck(t__100818)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(x__100819)->FMGL(N),
                                                     ::x10aux::nullCheck(t__100818)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149023))));
                        }
                        ::x10aux::nullCheck(t__100818)->cellAdd(
                          x__100819);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc76) {
                {
                    ::x10::lang::CheckedThrowable* formal__101106 =
                      __exc76;
                    {
                        throwable__101105 = formal__101106;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__101105,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101105))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101105));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__101105,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101105)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101105));
                }
                
            }
            
        }
    }
    
    // captured environment
    x10_long placeId;
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::au::edu::anu::util::SharedCounter* G;
    ::x10::matrix::DenseMatrix* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeId);
        buf.write(this->computeInst);
        buf.write(this->G);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__10* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__10>();
        buf.record_reference(storage);
        x10_long that_placeId = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::au::edu::anu::util::SharedCounter* that_G = buf.read< ::au::edu::anu::util::SharedCounter*>();
        ::x10::matrix::DenseMatrix* that_saved_this = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_GMatrix__closure__10* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__10(that_placeId, that_computeInst, that_G, that_saved_this);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__10(x10_long placeId, ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::au::edu::anu::util::SharedCounter* G, ::x10::matrix::DenseMatrix* saved_this) : placeId(placeId), computeInst(computeInst), G(G), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:406-444";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__10_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__14_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::matrix::DenseMatrix* __apply(){
        try {
            
            //#line 459 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::GMatrix__ComputePlace* comp_loc = ::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                                                    placeId);
            
            //#line 460 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(comp_loc)->reset();
            
            //#line 461 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long totInt = ::x10aux::nullCheck(comp_loc)->computeShells(
                                nPairs);
            
            //#line 465 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            return ::x10aux::nullCheck(comp_loc)->getGMatContributionArray();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc79) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc79;
                {
                    ::x10::matrix::DenseMatrix* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::matrix::DenseMatrix* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_long placeId;
    x10_int nPairs;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->placeId);
        buf.write(this->nPairs);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__14* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__14>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_long that_placeId = buf.read<x10_long>();
        x10_int that_nPairs = buf.read<x10_int>();
        au_edu_anu_qm_GMatrix__closure__14* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__14(that_computeInst, that_placeId, that_nPairs);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__14(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_long placeId, x10_int nPairs) : computeInst(computeInst), placeId(placeId), nPairs(nPairs) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:456-466";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__14_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__13_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 456 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::matrix::DenseMatrix* placeContribution = ::x10::lang::Runtime::evalAt< ::x10::matrix::DenseMatrix* >(
                                                          (__extension__ ({
                                                              ::x10::lang::Place alloc__61440 =
                                                                
                                                              ::x10::lang::Place::_alloc();
                                                              (alloc__61440)->::x10::lang::Place::_constructor(
                                                                placeId);
                                                              alloc__61440;
                                                          }))
                                                          ,
                                                          reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(sizeof(au_edu_anu_qm_GMatrix__closure__14)))au_edu_anu_qm_GMatrix__closure__14(computeInst, placeId, nPairs))),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 469 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::util::Timer* gatherTimer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (gatherTimer)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)1ll));
        
        //#line 470 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        gatherTimer->au::edu::anu::util::Timer::start(((x10_long)0ll));
        {
            
            //#line 471 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::CheckedThrowable* throwable__101108 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10::matrix::DenseMatrix* t__100821 =
                          saved_this;
                        ::x10::matrix::DenseMatrix* x__100822 =
                          placeContribution;
                        if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100822)->FMGL(M),
                                                        ::x10aux::nullCheck(t__100821)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(x__100822)->FMGL(N),
                                                     ::x10aux::nullCheck(t__100821)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149024))));
                        }
                        ::x10aux::nullCheck(t__100821)->cellAdd(
                          x__100822);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc80) {
                {
                    ::x10::lang::CheckedThrowable* formal__101109 =
                      __exc80;
                    {
                        throwable__101108 = formal__101109;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__101108,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101108))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101108));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__101108,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101108)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101108));
                }
                
            }
            
        }
        
        //#line 472 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        gatherTimer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
        
        //#line 473 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix_Strings::sl__149025),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(placeId),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(gatherTimer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)0ll))))) / (1.0E9))));
    }
    
    // captured environment
    x10_long placeId;
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_int nPairs;
    ::x10::matrix::DenseMatrix* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeId);
        buf.write(this->computeInst);
        buf.write(this->nPairs);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__13* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__13>();
        buf.record_reference(storage);
        x10_long that_placeId = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_int that_nPairs = buf.read<x10_int>();
        ::x10::matrix::DenseMatrix* that_saved_this = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_GMatrix__closure__13* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__13(that_placeId, that_computeInst, that_nPairs, that_saved_this);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__13(x10_long placeId, ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_int nPairs, ::x10::matrix::DenseMatrix* saved_this) : placeId(placeId), computeInst(computeInst), nPairs(nPairs), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:455-474";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__13_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__16_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 486 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::qm::GMatrix__ComputePlace* comp_loc = ::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                                                placeId);
        
        //#line 487 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10aux::nullCheck(comp_loc)->reset();
        
        //#line 488 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        x10_long totInt = ::x10aux::nullCheck(comp_loc)->computeShells(
                            nPairs);
        
        //#line 492 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10aux::nullCheck(comp_loc)->allreduceGMat();
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_long placeId;
    x10_int nPairs;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->placeId);
        buf.write(this->nPairs);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__16* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__16>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_long that_placeId = buf.read<x10_long>();
        x10_int that_nPairs = buf.read<x10_int>();
        au_edu_anu_qm_GMatrix__closure__16* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__16(that_computeInst, that_placeId, that_nPairs);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__16(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_long placeId, x10_int nPairs) : computeInst(computeInst), placeId(placeId), nPairs(nPairs) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:483-493";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__16_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__15_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* t__101059;
            for (t__101059 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                       ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__101059));
                 ) {
                ::x10::lang::Point* t__1070 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__101059));
                x10_long placeId = ::x10aux::nullCheck(t__1070)->x10::lang::Point::__apply(
                                     ((x10_long)(((x10_int)0))));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__16)))au_edu_anu_qm_GMatrix__closure__16(computeInst, placeId, nPairs))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_int nPairs;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->nPairs);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__15* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__15>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_int that_nPairs = buf.read<x10_int>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_qm_GMatrix__closure__15* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__15(that_computeInst, that_nPairs, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__15(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_int nPairs, ::x10::regionarray::Dist* __lowerer__var__0__) : computeInst(computeInst), nPairs(nPairs), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:483-493";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__15_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__19_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        myG = G->getAndIncrement();
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> myG;
    ::au::edu::anu::util::SharedCounter* G;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->myG);
        buf.write(this->G);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__19* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__19>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_myG = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::au::edu::anu::util::SharedCounter* that_G = buf.read< ::au::edu::anu::util::SharedCounter*>();
        au_edu_anu_qm_GMatrix__closure__19* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__19(that_myG, that_G);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__19(x10aux::captured_struct_lval<x10_long> myG, ::au::edu::anu::util::SharedCounter* G) : myG(myG), G(G) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:527";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__19_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__18_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::matrix::DenseMatrix* __apply(){
        try {
            
            //#line 509 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::util::Timer* placeTimer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
            (placeTimer)->::au::edu::anu::util::Timer::_constructor(((x10_long)1ll));
            
            //#line 510 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            placeTimer->au::edu::anu::util::Timer::start(((x10_long)0ll));
            
            //#line 512 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::GMatrix__ComputePlace* comp_loc = ::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                                                    placeId);
            
            //#line 513 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(comp_loc)->reset();
            
            //#line 515 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::ShellList shellList = ::x10aux::nullCheck(::x10aux::nullCheck(comp_loc)->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                            ((x10_long)0ll)))->FMGL(shellList);
            
            //#line 516 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives =
              shellList->au::edu::anu::qm::ShellList::getShellPrimitives();
            
            //#line 517 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int numPrimitives = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
            
            //#line 518 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int numPairs = (__extension__ ({
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int ret__80287;
                
                //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int nPrimitives__100824 = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
                
                //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                ret__80287 = ((nPrimitives__100824) * (nPrimitives__100824));
                ret__80287;
            }))
            ;
            
            //#line 520 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long myG = placeId;
            
            //#line 522 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long placePairs = ((x10_long)0ll);
            
            //#line 523 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long placeInts = ((x10_long)0ll);
            
            //#line 524 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            {
                x10_long i;
                for (i = myG; ((i) < (((x10_long)(numPairs))));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 525 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    if ((::x10aux::struct_equals(i, myG)))
                    {
                        {
                            
                            //#line 526 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            ::x10::lang::Runtime::ensureNotInAtomic();
                            ::x10::lang::FinishState* fs__101082 =
                              ::x10::lang::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 527 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    ::x10::lang::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__19)))au_edu_anu_qm_GMatrix__closure__19(&(myG), G))));
                                    
                                    //#line 528 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    placeInts = ((placeInts) + (::x10aux::nullCheck(comp_loc)->computeOneShellPairThreaded(
                                                                  i,
                                                                  numPrimitives,
                                                                  shellPrimitives)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc85) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__101080 =
                                      __exc85;
                                    {
                                        ::x10::lang::Runtime::pushException(
                                          ct__101080);
                                    }
                                }
                            }
                            ::x10::lang::Runtime::stopFinish(
                              fs__101082);
                        }
                        
                        //#line 530 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        placePairs = ((placePairs) + (((x10_long)1ll)));
                    }
                    
                }
            }
            
            //#line 533 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            placeTimer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
            
            //#line 534 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (&::au::edu::anu::qm::GMatrix_Strings::sl__149022),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Place::_make(::x10aux::here)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(placePairs),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(placeInts),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(placeTimer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                    ((x10_long)0ll))))) / (1.0E9))));
            
            //#line 536 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            return ::x10aux::nullCheck(comp_loc)->getGMatContributionArray();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc86) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc86;
                {
                    ::x10::matrix::DenseMatrix* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::matrix::DenseMatrix* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    x10_long placeId;
    ::au::edu::anu::util::SharedCounter* G;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeInst);
        buf.write(this->placeId);
        buf.write(this->G);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__18* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__18>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        x10_long that_placeId = buf.read<x10_long>();
        ::au::edu::anu::util::SharedCounter* that_G = buf.read< ::au::edu::anu::util::SharedCounter*>();
        au_edu_anu_qm_GMatrix__closure__18* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__18(that_computeInst, that_placeId, that_G);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__18(::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, x10_long placeId, ::au::edu::anu::util::SharedCounter* G) : computeInst(computeInst), placeId(placeId), G(G) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:508-537";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__18_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__CLOSURE__17_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 508 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::matrix::DenseMatrix* placeContribution = ::x10::lang::Runtime::evalAt< ::x10::matrix::DenseMatrix* >(
                                                          (__extension__ ({
                                                              ::x10::lang::Place alloc__61441 =
                                                                
                                                              ::x10::lang::Place::_alloc();
                                                              (alloc__61441)->::x10::lang::Place::_constructor(
                                                                placeId);
                                                              alloc__61441;
                                                          }))
                                                          ,
                                                          reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >(sizeof(au_edu_anu_qm_GMatrix__closure__18)))au_edu_anu_qm_GMatrix__closure__18(computeInst, placeId, G))),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 539 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::util::Timer* gatherTimer =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (gatherTimer)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)1ll));
        
        //#line 540 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        gatherTimer->au::edu::anu::util::Timer::start(((x10_long)0ll));
        {
            
            //#line 541 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::CheckedThrowable* throwable__101111 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10::matrix::DenseMatrix* t__100825 =
                          saved_this;
                        ::x10::matrix::DenseMatrix* x__100826 =
                          placeContribution;
                        if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100826)->FMGL(M),
                                                        ::x10aux::nullCheck(t__100825)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(x__100826)->FMGL(N),
                                                     ::x10aux::nullCheck(t__100825)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149026))));
                        }
                        ::x10aux::nullCheck(t__100825)->cellAdd(
                          x__100826);
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc87) {
                {
                    ::x10::lang::CheckedThrowable* formal__101112 =
                      __exc87;
                    {
                        throwable__101111 = formal__101112;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__101111,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101111))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101111));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__101111,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101111)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101111));
                }
                
            }
            
        }
        
        //#line 542 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        gatherTimer->au::edu::anu::util::Timer::stop(((x10_long)0ll));
        
        //#line 543 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix_Strings::sl__149025),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(placeId),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (::x10aux::nullCheck(gatherTimer->FMGL(total))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)0ll))))) / (1.0E9))));
    }
    
    // captured environment
    x10_long placeId;
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst;
    ::au::edu::anu::util::SharedCounter* G;
    ::x10::matrix::DenseMatrix* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeId);
        buf.write(this->computeInst);
        buf.write(this->G);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__closure__17* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__closure__17>();
        buf.record_reference(storage);
        x10_long that_placeId = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* that_computeInst = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
        ::au::edu::anu::util::SharedCounter* that_G = buf.read< ::au::edu::anu::util::SharedCounter*>();
        ::x10::matrix::DenseMatrix* that_saved_this = buf.read< ::x10::matrix::DenseMatrix*>();
        au_edu_anu_qm_GMatrix__closure__17* this_ = new (storage) au_edu_anu_qm_GMatrix__closure__17(that_placeId, that_computeInst, that_G, that_saved_this);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__closure__17(x10_long placeId, ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst, ::au::edu::anu::util::SharedCounter* G, ::x10::matrix::DenseMatrix* saved_this) : placeId(placeId), computeInst(computeInst), G(G), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:507-544";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__CLOSURE__17_CLOSURE

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::_constructor(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                                             ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule,
                                             x10_double omega,
                                             x10_double thresh) {
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    (this)->::x10::matrix::DenseMatrix::_constructor(N, N);
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::GMatrix* this__100706 = this;
    ::x10aux::nullCheck(this__100706)->FMGL(timer) = (__extension__ ({
        
        //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::util::StatisticalTimer* alloc__100705 =
           (new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer());
        (alloc__100705)->::au::edu::anu::util::StatisticalTimer::_constructor(
          ((x10_long)1ll));
        alloc__100705;
    }))
    ;
    ::x10aux::nullCheck(this__100706)->FMGL(omega) = 0.0;
    ::x10aux::nullCheck(this__100706)->FMGL(thresh2) = 0.0;
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(bfs) = bfs;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(mol) = molecule;
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(omega) = omega;
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(thresh) = thresh;
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(gMatType) = jd->FMGL(gMatrixParallelScheme);
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(kMatrix) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61435 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61435)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61435;
    }))
    ;
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(jMatrix) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61436 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61436)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61436;
    }))
    ;
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long nPlaces = ((x10_long)::x10aux::num_hosts);
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    switch (this->FMGL(gMatType)) {
        
        //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)0): ;
        {
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149000), this->FMGL(gMatType))));
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 67 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)1): ;
        {
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149001), this->FMGL(gMatType))));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)2): ;
        {
            
            //#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149002), this->FMGL(gMatType))));
            
            //#line 72 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)3): ;
        {
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149003), this->FMGL(gMatType))));
            
            //#line 75 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
            
            //#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149004), ((noOfAtoms) / ::x10aux::zeroCheck(nPlaces))), (&::au::edu::anu::qm::GMatrix_Strings::sl__149005)), ((noOfAtoms) % ::x10aux::zeroCheck(nPlaces)))));
            
            //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 78 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)4): ;
        {
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149006), this->FMGL(gMatType))));
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)6): ;
        {
            
            //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::GMatrix_Strings::sl__149007)));
        }
        //#line 83 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)5): ;
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        default: ;
        {
            
            //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149008), this->FMGL(gMatType))));
            
            //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::ShellList shellList = bfs->FMGL(shellList);
            
            //#line 87 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int nPairs = (__extension__ ({
                
                //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int ret__68797;
                
                //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                x10_int nPrimitives__100707 = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
                
                //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
                ret__68797 = ((nPrimitives__100707) * (nPrimitives__100707));
                ret__68797;
            }))
            ;
            
            //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149009), ((((x10_long)(nPairs))) / ::x10aux::zeroCheck(nPlaces))), (&::au::edu::anu::qm::GMatrix_Strings::sl__149005)), ((((x10_long)(nPairs))) % ::x10aux::zeroCheck(nPlaces)))));
            
            //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)7): ;
        {
            
            //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149010), this->FMGL(gMatType))));
            
            //#line 92 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
    }
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix* dCut =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (dCut)->::x10::matrix::DenseMatrix::_constructor(N, N);
    
    //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix* qCut =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (qCut)->::x10::matrix::DenseMatrix::_constructor(N, N);
    
    //#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ShellList shellList = bfs->FMGL(shellList);
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int maxam = shellList->FMGL(maxam);
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::TwoElectronIntegrals* twoE =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::TwoElectronIntegrals>()) ::au::edu::anu::qm::TwoElectronIntegrals());
    (twoE)->::au::edu::anu::qm::TwoElectronIntegrals::_constructor(
      maxam, bfs->au::edu::anu::qm::BasisFunctions::getNormalizationFactors(),
      omega, thresh);
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::Density* fakeDensity =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::Density>()) ::au::edu::anu::qm::Density());
    (fakeDensity)->::au::edu::anu::qm::Density::_constructor(
      N, ((x10_long)2ll), 1.0);
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_int a;
        for (a = ((x10_int)0); ((((x10_long)(a))) < (noOfAtoms));
             a = ((a) + (((x10_int)1)))) {
            
            //#line 105 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc =
              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                    ((x10_long)(a))))->getBasisFunctions();
            
            //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long naFunc = ::x10aux::nullCheck(aFunc)->size();
            
            //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            {
                x10_long i;
                for (i = ((x10_long)0ll); ((i) < (naFunc));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::au::edu::anu::qm::ContractedGaussian iaFunc =
                      ::x10aux::nullCheck(aFunc)->get(i);
                    
                    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    {
                        x10_int b;
                        for (b = ((x10_int)0); ((b) <= (a));
                             b = ((b) + (((x10_int)1)))) {
                            
                            //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bFunc =
                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                    ((x10_long)(b))))->getBasisFunctions();
                            
                            //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_long nbFunc = ((b) < (a))
                              ? (::x10aux::nullCheck(bFunc)->size())
                              : (((i) + (((x10_long)1ll))));
                            
                            //#line 116 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            {
                                x10_long j;
                                for (j = ((x10_long)0ll);
                                     ((j) < (nbFunc)); j =
                                                         ((j) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    ::au::edu::anu::qm::ContractedGaussian jbFunc =
                                      ::x10aux::nullCheck(bFunc)->get(
                                        j);
                                    
                                    //#line 118 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    twoE->compute2EAndRecord(
                                      iaFunc, jbFunc, iaFunc,
                                      jbFunc, shellList, qCut,
                                      dCut, fakeDensity);
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double maxEst = 0.0;
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_int a;
        for (a = ((x10_int)0); ((((x10_long)(a))) < (N));
             a = ((a) + (((x10_int)1)))) {
            {
                x10_int b;
                for (b = ((x10_int)0); ((((x10_long)(b))) < (N));
                     b = ((b) + (((x10_int)1)))) {
                    
                    //#line 126 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    if ((::x10aux::struct_equals(a, b))) {
                        ::x10::matrix::DenseMatrix* a__100712 =
                          qCut;
                        x10_long i__100713 = ((x10_long)(a));
                        x10_long i__100714 = ((x10_long)(b));
                        x10_double r__100715 = (((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__100716 = i__100713;
                            x10_long y__100717 = i__100714;
                            ::x10aux::nullCheck(a__100712->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__100717) * (a__100712->FMGL(M)))) + (x__100716)));
                        }))
                        ) * (0.5));
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100708 = i__100713;
                        x10_long y__100709 = i__100714;
                        x10_double v__100710 = r__100715;
                        x10_double ret__100711;
                        
                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ::x10aux::nullCheck(a__100712->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                          ((((y__100709) * (a__100712->FMGL(M)))) + (x__100708)),
                          v__100710);
                        
                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__100711 = v__100710;
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__100711;
                    } else {
                        ::x10::matrix::DenseMatrix* a__100722 =
                          qCut;
                        x10_long i__100723 = ((x10_long)(a));
                        x10_long i__100724 = ((x10_long)(b));
                        x10_double r__100725 = (((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__100726 = i__100723;
                            x10_long y__100727 = i__100724;
                            ::x10aux::nullCheck(a__100722->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__100727) * (a__100722->FMGL(M)))) + (x__100726)));
                        }))
                        ) * (0.25));
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100718 = i__100723;
                        x10_long y__100719 = i__100724;
                        x10_double v__100720 = r__100725;
                        x10_double ret__100721;
                        
                        //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ::x10aux::nullCheck(a__100722->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                          ((((y__100719) * (a__100722->FMGL(M)))) + (x__100718)),
                          v__100720);
                        
                        //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__100721 = v__100720;
                        
                        //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        ret__100721;
                    }
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100728 = ((x10_long)(a));
                    x10_long y__100729 = ((x10_long)(b));
                    x10_double v__100730 = ::x10::lang::MathNatives::sqrt(::fabs((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100731 = ((x10_long)(a));
                        x10_long y__100732 = ((x10_long)(b));
                        ::x10aux::nullCheck(qCut->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100732) * (qCut->FMGL(M)))) + (x__100731)));
                    }))
                    ));
                    x10_double ret__100733;
                    
                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ::x10aux::nullCheck(qCut->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                      ((((y__100729) * (qCut->FMGL(M)))) + (x__100728)),
                      v__100730);
                    
                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__100733 = v__100730;
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__100733;
                    
                    //#line 128 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    if ((((__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__72987 = ((x10_long)(a));
                            x10_long y__72988 = ((x10_long)(b));
                            ::x10aux::nullCheck(qCut->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__72988) * (qCut->FMGL(M)))) + (x__72987)));
                        }))
                        ) > (maxEst))) {
                        maxEst = (__extension__ ({
                            
                            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__72989 = ((x10_long)(a));
                            x10_long y__72990 = ((x10_long)(b));
                            ::x10aux::nullCheck(qCut->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                              ((((y__72990) * (qCut->FMGL(M)))) + (x__72989)));
                        }))
                        ;
                    }
                    
                }
            }
            
        }
    }
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix_Strings::sl__149011),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(maxEst));
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double maxEstVal = maxEst;
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(computeInst) = (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__77141 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__75649 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__75649)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__75649;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* alloc__77143 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*> >()) ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>());
            (alloc__77143)->::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::_constructor(
              dist__77141, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*> >(sizeof(au_edu_anu_qm_GMatrix__closure__1)))au_edu_anu_qm_GMatrix__closure__1(N, molecule, bfs, qCut, dCut, maxEstVal, omega, thresh))));
            alloc__77143;
        }))
        ;
    }))
    ;
}
::au::edu::anu::qm::GMatrix* au::edu::anu::qm::GMatrix::_make(
  x10_long N, ::au::edu::anu::qm::BasisFunctions bfs, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* molecule,
  x10_double omega, x10_double thresh) {
    ::au::edu::anu::qm::GMatrix* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix>()) ::au::edu::anu::qm::GMatrix();
    this_->_constructor(N, bfs, molecule, omega, thresh);
    return this_;
}



//#line 139 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::compute(::au::edu::anu::qm::Density* density) {
    
    //#line 140 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::start(
      ((x10_long)0ll));
    
    //#line 141 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    switch (this->FMGL(gMatType)) {
        
        //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)0): ;
        {
            
            //#line 143 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeSerial(density);
            
            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 145 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)1): ;
        {
            
            //#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeThreadedLowMemNoAtomicByBF(density);
            
            //#line 147 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)2): ;
        {
            
            //#line 149 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeDistNoAtomicByBF(density);
            
            //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)3): ;
        {
            
            //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeDistStaticByAtoms(density);
            
            //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)4): ;
        
        //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        default: ;
        {
            
            //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeDistDynamicByShells(density);
            
            //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)5): ;
        {
            
            //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeDistStaticByShells(density);
            
            //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)6): ;
        {
            
            //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeDistStaticByShellsReduce(density);
            
            //#line 163 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
        //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        case ((x10_int)7): ;
        {
            
            //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->computeDistThreadedDynamicByShells(density);
            
            //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            break;
        }
    }
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(timer)->au::edu::anu::util::StatisticalTimer::stop(
      ((x10_long)0ll));
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix_Strings::sl__149012),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) ((__extension__ ({
                                                     ::au::edu::anu::util::StatisticalTimer* this__77145 =
                                                       this->FMGL(timer);
                                                     ::x10aux::nullCheck(this__77145->FMGL(current))->x10::lang::Rail< x10_long >::__apply(
                                                       ((x10_long)0ll));
                                                 }))
                                                 ))) / (1.0E9))));
}

//#line 172 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeSerial(::au::edu::anu::qm::Density* density) {
    
    //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::GMatrix__ComputePlace* computePlace =
      ::x10aux::nullCheck(this->FMGL(computeInst))->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
        ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
    
    //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(computePlace)->reset(density);
    
    //#line 175 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::GMatrix__ComputeThread* computeThread =
      ::x10aux::nullCheck(computePlace)->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
        ((x10_long)0ll));
    
    //#line 176 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ShellList shellList = (__extension__ ({
        ::au::edu::anu::qm::BasisFunctions this__77146 = this->FMGL(bfs);
        this__77146->FMGL(shellList);
    }))
    ;
    
    //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives =
      shellList->au::edu::anu::qm::ShellList::getShellPrimitives();
    
    //#line 179 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int numPrimitives = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
    
    //#line 180 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long totInt = ((x10_long)0ll);
    
    //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_int a;
        for (a = ((x10_int)0); ((a) < (numPrimitives)); a =
                                                          ((a) + (((x10_int)1))))
        {
            
            //#line 183 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::ContractedGaussian aFunc =
              ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                ((x10_long)(a)));
            
            //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            {
                x10_int b;
                for (b = ((x10_int)0); ((b) < (numPrimitives));
                     b = ((b) + (((x10_int)1)))) {
                    
                    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::au::edu::anu::qm::ContractedGaussian bFunc =
                      ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                        ((x10_long)(b)));
                    
                    //#line 186 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    totInt = ((totInt) + (::x10aux::nullCheck(computeThread)->computeOneShellPair(
                                            aFunc, bFunc,
                                            numPrimitives,
                                            shellPrimitives)));
                }
            }
            
        }
    }
    
    //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::au::edu::anu::qm::GMatrix_Strings::sl__149013), totInt)));
    
    //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix* jt = ::x10aux::nullCheck(computeThread)->getJMat();
    
    //#line 192 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix* t__100749 = jt;
    ::x10::matrix::DenseMatrix* dm__100750 = this->FMGL(jMatrix);
    if (!(((::x10aux::struct_equals(::x10aux::nullCheck(dm__100750)->FMGL(M),
                                    ::x10aux::nullCheck(t__100749)->FMGL(M))) &&
        (::x10aux::struct_equals(::x10aux::nullCheck(dm__100750)->FMGL(N),
                                 ::x10aux::nullCheck(t__100749)->FMGL(N))))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149014))));
    }
    ::x10aux::nullCheck(t__100749)->copyTo(dm__100750);
    
    //#line 193 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix* kt = ::x10aux::nullCheck(computeThread)->getKMat();
    
    //#line 194 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix* t__100751 = kt;
    ::x10::matrix::DenseMatrix* dm__100752 = this->FMGL(kMatrix);
    if (!(((::x10aux::struct_equals(::x10aux::nullCheck(dm__100752)->FMGL(M),
                                    ::x10aux::nullCheck(t__100751)->FMGL(M))) &&
        (::x10aux::struct_equals(::x10aux::nullCheck(dm__100752)->FMGL(N),
                                 ::x10aux::nullCheck(t__100751)->FMGL(N))))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149015))));
    }
    ::x10aux::nullCheck(t__100751)->copyTo(dm__100752);
    
    //#line 196 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long i__61470max__100753 = ((this->FMGL(M)) - (((x10_long)1ll)));
    {
        x10_long i__100754;
        for (i__100754 = ((x10_long)0ll); ((i__100754) <= (i__61470max__100753));
             i__100754 = ((i__100754) + (((x10_long)1ll))))
        {
            x10_long x__100755 = i__100754;
            
            //#line 197 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long i__61452max__100746 = ((this->FMGL(N)) - (((x10_long)1ll)));
            {
                x10_long i__100747;
                for (i__100747 = ((x10_long)0ll); ((i__100747) <= (i__61452max__100746));
                     i__100747 = ((i__100747) + (((x10_long)1ll))))
                {
                    x10_long y__100748 = i__100747;
                    
                    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::x10::matrix::DenseMatrix* this__100735 =
                      reinterpret_cast< ::x10::matrix::DenseMatrix*>(this);
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100736 = x__100755;
                    x10_long y__100737 = y__100748;
                    x10_double v__100738 = ((((0.5) * ((__extension__ ({
                        
                        //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::x10::matrix::DenseMatrix* this__100739 =
                          this->FMGL(jMatrix);
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100740 = x__100755;
                        x10_long y__100741 = y__100748;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__100739)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100741) * (::x10aux::nullCheck(this__100739)->FMGL(M)))) + (x__100740)));
                    }))
                    ))) - (((0.125) * ((__extension__ ({
                        
                        //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::x10::matrix::DenseMatrix* this__100742 =
                          this->FMGL(kMatrix);
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100743 = x__100755;
                        x10_long y__100744 = y__100748;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__100742)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100744) * (::x10aux::nullCheck(this__100742)->FMGL(M)))) + (x__100743)));
                    }))
                    ))));
                    x10_double ret__100745;
                    
                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__100735)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                      ((((y__100737) * (::x10aux::nullCheck(this__100735)->FMGL(M)))) + (x__100736)),
                      v__100738);
                    
                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__100745 = v__100738;
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__100745;
                }
            }
            
        }
    }
    
    //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double eJ = ::x10aux::nullCheck((__extension__ ({
                        ::x10::matrix::DenseMatrix* t__59833 =
                          reinterpret_cast< ::x10::matrix::DenseMatrix*>(::x10aux::nullCheck(density)->clone());
                        ::x10::matrix::DenseMatrix* A__59834 =
                          density;
                        ::x10::matrix::DenseMatrix* B__59835 =
                          this->FMGL(jMatrix);
                        if (!((((::x10aux::struct_equals(::x10aux::nullCheck(A__59834)->FMGL(M),
                                                         ::x10aux::nullCheck(t__59833)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(B__59835)->FMGL(M),
                                                     ::x10aux::nullCheck(A__59834)->FMGL(N)))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(B__59835)->FMGL(N),
                                                     ::x10aux::nullCheck(t__59833)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149016))));
                        }
                        ::x10aux::nullCheck(t__59833)->mult(
                          A__59834, B__59835);
                    }))
                    )->trace();
    
    //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix_Strings::sl__149017),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((0.25) * (eJ))) / (jd->FMGL(roZ)))));
    
    //#line 205 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double eK = ::x10aux::nullCheck((__extension__ ({
                        ::x10::matrix::DenseMatrix* t__59853 =
                          reinterpret_cast< ::x10::matrix::DenseMatrix*>(::x10aux::nullCheck(density)->clone());
                        ::x10::matrix::DenseMatrix* A__59854 =
                          density;
                        ::x10::matrix::DenseMatrix* B__59855 =
                          this->FMGL(kMatrix);
                        if (!((((::x10aux::struct_equals(::x10aux::nullCheck(A__59854)->FMGL(M),
                                                         ::x10aux::nullCheck(t__59853)->FMGL(M))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(B__59855)->FMGL(M),
                                                     ::x10aux::nullCheck(A__59854)->FMGL(N)))) &&
                            (::x10aux::struct_equals(::x10aux::nullCheck(B__59855)->FMGL(N),
                                                     ::x10aux::nullCheck(t__59853)->FMGL(N))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix_Strings::sl__149018))));
                        }
                        ::x10aux::nullCheck(t__59853)->mult(
                          A__59854, B__59855);
                    }))
                    )->trace();
    
    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix_Strings::sl__149019),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((((-1.0) / (32.0))) * (eK))) / (jd->FMGL(roZ)))));
}

//#line 209 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeThreadedLowMemNoAtomicByBF(
  ::au::edu::anu::qm::Density* density) {
    
    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->reset();
    
    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::GMatrix__ComputePlace* computePlace =
      ::x10aux::nullCheck(this->FMGL(computeInst))->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
        ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
    
    //#line 213 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(computePlace)->reset(density);
    
    //#line 215 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* computeThreads =
      ::x10aux::nullCheck(computePlace)->FMGL(computeThreads);
    
    //#line 217 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
    {
        
        //#line 218 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__100963 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 220 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                {
                    x10_int a;
                    for (a = ((x10_int)0); ((((x10_long)(a))) < (noOfAtoms));
                         a = ((a) + (((x10_int)1)))) {
                        
                        //#line 221 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc =
                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                ((x10_long)(a))))->getBasisFunctions();
                        
                        //#line 222 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        x10_long naFunc = ::x10aux::nullCheck(aFunc)->size();
                        
                        //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        {
                            x10_long i;
                            for (i = ((x10_long)0ll); ((i) < (naFunc));
                                 i = ((i) + (((x10_long)1ll))))
                            {
                                
                                //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                ::au::edu::anu::qm::ContractedGaussian iaFunc =
                                  ::x10aux::nullCheck(aFunc)->get(
                                    i);
                                
                                //#line 228 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                {
                                    x10_int b;
                                    for (b = ((x10_int)0);
                                         ((b) <= (a)); b =
                                                         ((b) + (((x10_int)1))))
                                    {
                                        
                                        //#line 229 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bFunc =
                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                ((x10_long)(b))))->getBasisFunctions();
                                        
                                        //#line 230 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                        x10_long nbFunc =
                                          ((b) < (a)) ? (::x10aux::nullCheck(bFunc)->size())
                                          : (((i) + (((x10_long)1ll))));
                                        
                                        //#line 232 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                        {
                                            x10_long j;
                                            for (j = ((x10_long)0ll);
                                                 ((j) < (nbFunc));
                                                 j = ((j) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                ::au::edu::anu::qm::ContractedGaussian jbFunc =
                                                  ::x10aux::nullCheck(bFunc)->get(
                                                    j);
                                                
                                                //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                {
                                                    x10_int c;
                                                    for (c =
                                                           ((x10_int)0);
                                                         ((((x10_long)(c))) < (noOfAtoms));
                                                         c =
                                                           ((c) + (((x10_int)1))))
                                                    {
                                                        
                                                        //#line 237 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* cFunc =
                                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                ((x10_long)(c))))->getBasisFunctions();
                                                        
                                                        //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                        x10_long ncFunc =
                                                          ::x10aux::nullCheck(cFunc)->size();
                                                        
                                                        //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                        {
                                                            x10_long k;
                                                            for (k =
                                                                   ((x10_long)0ll);
                                                                 ((k) < (ncFunc));
                                                                 k =
                                                                   ((k) + (((x10_long)1ll))))
                                                            {
                                                                
                                                                //#line 241 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                ::au::edu::anu::qm::ContractedGaussian kcFunc =
                                                                  ::x10aux::nullCheck(cFunc)->get(
                                                                    k);
                                                                
                                                                //#line 244 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                {
                                                                    x10_int d;
                                                                    for (d =
                                                                           ((x10_int)0);
                                                                         ((d) <= (c));
                                                                         d =
                                                                           ((d) + (((x10_int)1))))
                                                                    {
                                                                        
                                                                        //#line 245 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* dFunc =
                                                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                                ((x10_long)(d))))->getBasisFunctions();
                                                                        
                                                                        //#line 246 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                        x10_long ndFunc =
                                                                          ((d) < (c))
                                                                          ? (::x10aux::nullCheck(dFunc)->size())
                                                                          : (((k) + (((x10_long)1ll))));
                                                                        
                                                                        //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                        {
                                                                            x10_long l;
                                                                            for (l =
                                                                                   ((x10_long)0ll);
                                                                                 ((l) < (ndFunc));
                                                                                 l =
                                                                                   ((l) + (((x10_long)1ll))))
                                                                            {
                                                                                
                                                                                //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                ::au::edu::anu::qm::ContractedGaussian ldFunc =
                                                                                  ::x10aux::nullCheck(dFunc)->get(
                                                                                    l);
                                                                                
                                                                                //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                x10_boolean setIt =
                                                                                  false;
                                                                                
                                                                                //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                goto outer; outer: while (!(setIt))
                                                                                {
                                                                                    {
                                                                                        
                                                                                        //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                        {
                                                                                            x10_long idx;
                                                                                            for (idx =
                                                                                                   ((x10_long)0ll);
                                                                                                 ((idx) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
                                                                                                 idx =
                                                                                                   ((idx) + (((x10_long)1ll))))
                                                                                            {
                                                                                                
                                                                                                //#line 255 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                setIt =
                                                                                                  ::x10aux::nullCheck(computeThreads->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                                                                        idx))->setValue(
                                                                                                    iaFunc,
                                                                                                    jbFunc,
                                                                                                    kcFunc,
                                                                                                    ldFunc);
                                                                                                
                                                                                                //#line 256 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                if (setIt)
                                                                                                {
                                                                                                    
                                                                                                    //#line 257 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                    x10_long idx_loc =
                                                                                                      idx;
                                                                                                    
                                                                                                    //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                    ::x10::lang::Runtime::runAsync(
                                                                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__2)))au_edu_anu_qm_GMatrix__closure__2(computeThreads, idx_loc, density))));
                                                                                                    
                                                                                                    //#line 259 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                    goto outer_end_;
                                                                                                }
                                                                                                
                                                                                            }
                                                                                        }
                                                                                        
                                                                                    }
                                                                                    goto outer_next_; outer_next_: ;
                                                                                }
                                                                                goto outer_end_; outer_end_: ;
                                                                                
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
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc60) {
            {
                ::x10::lang::CheckedThrowable* ct__100961 =
                  __exc60;
                {
                    ::x10::lang::Runtime::pushException(ct__100961);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__100963);
    }
    
    //#line 274 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long idx;
        for (idx = ((x10_long)0ll); ((idx) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             idx = ((idx) + (((x10_long)1ll)))) {
            
            //#line 275 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::matrix::DenseMatrix* jMat = ::x10aux::nullCheck(computeThreads->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                     idx))->getJMat();
            
            //#line 276 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::matrix::DenseMatrix* kMat = ::x10aux::nullCheck(computeThreads->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                     idx))->getKMat();
            
            //#line 278 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long i__61506max__100770 = ((this->FMGL(M)) - (((x10_long)1ll)));
            {
                x10_long i__100771;
                for (i__100771 = ((x10_long)0ll); ((i__100771) <= (i__61506max__100770));
                     i__100771 = ((i__100771) + (((x10_long)1ll))))
                {
                    x10_long x__100772 = i__100771;
                    
                    //#line 279 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    x10_long i__61488max__100767 = ((this->FMGL(N)) - (((x10_long)1ll)));
                    {
                        x10_long i__100768;
                        for (i__100768 = ((x10_long)0ll);
                             ((i__100768) <= (i__61488max__100767));
                             i__100768 = ((i__100768) + (((x10_long)1ll))))
                        {
                            x10_long y__100769 = i__100768;
                            
                            //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            ::x10::matrix::DenseMatrix* this__100756 =
                              reinterpret_cast< ::x10::matrix::DenseMatrix*>(this);
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__100757 = x__100772;
                            x10_long y__100758 = y__100769;
                            x10_double v__100759 = ((((0.5) * ((__extension__ ({
                                
                                //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                ::x10::matrix::DenseMatrix* this__100760 =
                                  this->FMGL(jMatrix);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100761 = x__100772;
                                x10_long y__100762 = y__100769;
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100760)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100762) * (::x10aux::nullCheck(this__100760)->FMGL(M)))) + (x__100761)));
                            }))
                            ))) - (((0.125) * ((__extension__ ({
                                
                                //#line 280 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                ::x10::matrix::DenseMatrix* this__100763 =
                                  this->FMGL(kMatrix);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100764 = x__100772;
                                x10_long y__100765 = y__100769;
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100763)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100765) * (::x10aux::nullCheck(this__100763)->FMGL(M)))) + (x__100764)));
                            }))
                            ))));
                            x10_double ret__100766;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(this__100756)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__100758) * (::x10aux::nullCheck(this__100756)->FMGL(M)))) + (x__100757)),
                              v__100759);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__100766 = v__100759;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__100766;
                        }
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 286 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeDistNoAtomicByBF(::au::edu::anu::qm::Density* density) {
    
    //#line 287 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
    
    //#line 289 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__100987 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(computeInst)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____100984;
                        for (__lowerer__var__1____100984 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____100984));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____100984));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__3)))au_edu_anu_qm_GMatrix__closure__3(computeInst, density, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc62) {
            {
                ::x10::lang::CheckedThrowable* ct__100985 =
                  __exc62;
                {
                    ::x10::lang::Runtime::pushException(ct__100985);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__100987);
    }
    {
        
        //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__100995 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_long i__61653max__100810 = ((noOfAtoms) - (((x10_long)1ll)));
                {
                    x10_long i__100811;
                    for (i__100811 = ((x10_long)0ll); ((i__100811) <= (i__61653max__100810));
                         i__100811 = ((i__100811) + (((x10_long)1ll))))
                    {
                        x10_long a__100812 = i__100811;
                        
                        //#line 297 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc__100808 =
                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                a__100812))->getBasisFunctions();
                        
                        //#line 298 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        x10_long naFunc__100809 = ::x10aux::nullCheck(aFunc__100808)->size();
                        
                        //#line 300 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        x10_long i__61635max__100805 = ((naFunc__100809) - (((x10_long)1ll)));
                        {
                            x10_long i__100806;
                            for (i__100806 = ((x10_long)0ll);
                                 ((i__100806) <= (i__61635max__100805));
                                 i__100806 = ((i__100806) + (((x10_long)1ll))))
                            {
                                x10_long i__100807 = i__100806;
                                
                                //#line 301 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                ::au::edu::anu::qm::ContractedGaussian iaFunc__100804 =
                                  ::x10aux::nullCheck(aFunc__100808)->get(
                                    i__100807);
                                
                                //#line 304 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                x10_long i__61617max__100801 =
                                  a__100812;
                                {
                                    x10_long i__100802;
                                    for (i__100802 = ((x10_long)0ll);
                                         ((i__100802) <= (i__61617max__100801));
                                         i__100802 = ((i__100802) + (((x10_long)1ll))))
                                    {
                                        x10_long b__100803 =
                                          i__100802;
                                        
                                        //#line 305 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bFunc__100799 =
                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                b__100803))->getBasisFunctions();
                                        
                                        //#line 306 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                        x10_long nbFunc__100800 =
                                          ((b__100803) < (a__100812))
                                          ? (::x10aux::nullCheck(bFunc__100799)->size())
                                          : (((i__100807) + (((x10_long)1ll))));
                                        
                                        //#line 308 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                        x10_long i__61599max__100796 =
                                          ((nbFunc__100800) - (((x10_long)1ll)));
                                        {
                                            x10_long i__100797;
                                            for (i__100797 =
                                                   ((x10_long)0ll);
                                                 ((i__100797) <= (i__61599max__100796));
                                                 i__100797 =
                                                   ((i__100797) + (((x10_long)1ll))))
                                            {
                                                x10_long j__100798 =
                                                  i__100797;
                                                
                                                //#line 309 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                ::au::edu::anu::qm::ContractedGaussian jbFunc__100795 =
                                                  ::x10aux::nullCheck(bFunc__100799)->get(
                                                    j__100798);
                                                
                                                //#line 312 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                x10_long i__61581max__100792 =
                                                  ((noOfAtoms) - (((x10_long)1ll)));
                                                {
                                                    x10_long i__100793;
                                                    for (i__100793 =
                                                           ((x10_long)0ll);
                                                         ((i__100793) <= (i__61581max__100792));
                                                         i__100793 =
                                                           ((i__100793) + (((x10_long)1ll))))
                                                    {
                                                        x10_long c__100794 =
                                                          i__100793;
                                                        
                                                        //#line 313 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* cFunc__100790 =
                                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                c__100794))->getBasisFunctions();
                                                        
                                                        //#line 314 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                        x10_long ncFunc__100791 =
                                                          ::x10aux::nullCheck(cFunc__100790)->size();
                                                        
                                                        //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                        x10_long i__61563max__100787 =
                                                          ((ncFunc__100791) - (((x10_long)1ll)));
                                                        {
                                                            x10_long i__100788;
                                                            for (i__100788 =
                                                                   ((x10_long)0ll);
                                                                 ((i__100788) <= (i__61563max__100787));
                                                                 i__100788 =
                                                                   ((i__100788) + (((x10_long)1ll))))
                                                            {
                                                                x10_long k__100789 =
                                                                  i__100788;
                                                                
                                                                //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                ::au::edu::anu::qm::ContractedGaussian kcFunc__100786 =
                                                                  ::x10aux::nullCheck(cFunc__100790)->get(
                                                                    k__100789);
                                                                
                                                                //#line 320 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                x10_long i__61545max__100783 =
                                                                  c__100794;
                                                                {
                                                                    x10_long i__100784;
                                                                    for (i__100784 =
                                                                           ((x10_long)0ll);
                                                                         ((i__100784) <= (i__61545max__100783));
                                                                         i__100784 =
                                                                           ((i__100784) + (((x10_long)1ll))))
                                                                    {
                                                                        x10_long d__100785 =
                                                                          i__100784;
                                                                        
                                                                        //#line 321 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                        ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* dFunc__100781 =
                                                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                                d__100785))->getBasisFunctions();
                                                                        
                                                                        //#line 322 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                        x10_long ndFunc__100782 =
                                                                          ((d__100785) < (c__100794))
                                                                          ? (::x10aux::nullCheck(dFunc__100781)->size())
                                                                          : (((k__100789) + (((x10_long)1ll))));
                                                                        
                                                                        //#line 324 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                        x10_long i__61527max__100778 =
                                                                          ((ndFunc__100782) - (((x10_long)1ll)));
                                                                        {
                                                                            x10_long i__100779;
                                                                            for (i__100779 =
                                                                                   ((x10_long)0ll);
                                                                                 ((i__100779) <= (i__61527max__100778));
                                                                                 i__100779 =
                                                                                   ((i__100779) + (((x10_long)1ll))))
                                                                            {
                                                                                x10_long l__100780 =
                                                                                  i__100779;
                                                                                
                                                                                //#line 325 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                ::au::edu::anu::qm::ContractedGaussian ldFunc__100773 =
                                                                                  ::x10aux::nullCheck(dFunc__100781)->get(
                                                                                    l__100780);
                                                                                
                                                                                //#line 326 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                x10_boolean setIt__100774 =
                                                                                  false;
                                                                                
                                                                                //#line 328 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                goto outer__100775; outer__100775: while (!(setIt__100774))
                                                                                {
                                                                                    {
                                                                                        
                                                                                        //#line 329 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                        {
                                                                                            ::x10::lang::Iterator< ::x10::lang::Point*>* p__100776;
                                                                                            for (p__100776 =
                                                                                                   ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->FMGL(region))->iterator();
                                                                                                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__100776));
                                                                                                 )
                                                                                            {
                                                                                                ::x10::lang::Point* p__100777 =
                                                                                                  ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__100776));
                                                                                                
                                                                                                //#line 330 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                setIt__100774 =
                                                                                                  ::x10::lang::Runtime::evalAt< x10_boolean >(
                                                                                                    ::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->__apply(
                                                                                                      p__100777),
                                                                                                    reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(au_edu_anu_qm_GMatrix__closure__5)))au_edu_anu_qm_GMatrix__closure__5(computeInst, p__100777, a__100812, b__100803, c__100794, d__100785, i__100807, j__100798, k__100789, l__100780))),
                                                                                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                                                                                
                                                                                                //#line 332 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                                                if (setIt__100774)
                                                                                                {
                                                                                                    goto outer__100775_end_;
                                                                                                }
                                                                                                
                                                                                            }
                                                                                        }
                                                                                        
                                                                                    }
                                                                                    goto outer__100775_next_; outer__100775_next_: ;
                                                                                }
                                                                                goto outer__100775_end_; outer__100775_end_: ;
                                                                                
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
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc64) {
            {
                ::x10::lang::CheckedThrowable* ct__100993 =
                  __exc64;
                {
                    ::x10::lang::Runtime::pushException(ct__100993);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__100995);
    }
    
    //#line 345 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->gatherAndReduceGMatrix();
}

//#line 352 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::gatherAndReduceGMatrix() {
    
    //#line 353 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->reset();
    
    //#line 355 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 356 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101004 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* p__61671;
                    for (p__61671 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->FMGL(region))->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__61671));
                         ) {
                        ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__61671));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__6)))au_edu_anu_qm_GMatrix__closure__6(computeInst, p, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc68) {
            {
                ::x10::lang::CheckedThrowable* ct__101002 =
                  __exc68;
                {
                    ::x10::lang::Runtime::pushException(ct__101002);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101004);
    }
}

//#line 362 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeDistStaticByAtoms(
  ::au::edu::anu::qm::Density* density) {
    
    //#line 363 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->reset();
    
    //#line 364 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
    
    //#line 365 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long nPlaces = ((x10_long)::x10aux::num_hosts);
    
    //#line 366 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long workPerPlace = ((noOfAtoms) / ::x10aux::zeroCheck(nPlaces));
    
    //#line 367 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long remainder = ((noOfAtoms) % ::x10aux::zeroCheck(nPlaces));
    
    //#line 368 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long firstChunk = ((remainder) * (((workPerPlace) + (((x10_long)1ll)))));
    
    //#line 370 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 371 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101013 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* t__61673;
                    for (t__61673 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->FMGL(region))->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__61673));
                         ) {
                        ::x10::lang::Point* t__1067 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__61673));
                        x10_long placeId = ::x10aux::nullCheck(t__1067)->x10::lang::Point::__apply(
                                             ((x10_long)(((x10_int)0))));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__8)))au_edu_anu_qm_GMatrix__closure__8(placeId, computeInst, density, remainder, workPerPlace, firstChunk, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc72) {
            {
                ::x10::lang::CheckedThrowable* ct__101011 =
                  __exc72;
                {
                    ::x10::lang::Runtime::pushException(ct__101011);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101013);
    }
}

//#line 398 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeDistDynamicByShells(
  ::au::edu::anu::qm::Density* density) {
    
    //#line 399 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::util::SharedCounter* G =  (new (::x10aux::alloc_z< ::au::edu::anu::util::SharedCounter>()) ::au::edu::anu::util::SharedCounter());
    (G)->::au::edu::anu::util::SharedCounter::_constructor();
    
    //#line 400 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    G->set(((x10_long)::x10aux::num_hosts));
    
    //#line 402 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->reset();
    
    //#line 404 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(computeInst))->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                          ((x10_long)0ll)))->FMGL(density) =
      density;
    
    //#line 405 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 406 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101027 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* t__61688;
                    for (t__61688 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->FMGL(region))->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__61688));
                         ) {
                        ::x10::lang::Point* t__1068 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__61688));
                        x10_long placeId = ::x10aux::nullCheck(t__1068)->x10::lang::Point::__apply(
                                             ((x10_long)(((x10_int)0))));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__10)))au_edu_anu_qm_GMatrix__closure__10(placeId, computeInst, G, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc77) {
            {
                ::x10::lang::CheckedThrowable* ct__101025 =
                  __exc77;
                {
                    ::x10::lang::Runtime::pushException(ct__101025);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101027);
    }
}

//#line 447 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeDistStaticByShells(
  ::au::edu::anu::qm::Density* density) {
    
    //#line 448 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ShellList shellList = (__extension__ ({
        ::au::edu::anu::qm::BasisFunctions this__80278 = this->FMGL(bfs);
        this__80278->FMGL(shellList);
    }))
    ;
    
    //#line 449 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int nPairs = (__extension__ ({
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int ret__80280;
        
        //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int nPrimitives__100820 = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
        
        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        ret__80280 = ((nPrimitives__100820) * (nPrimitives__100820));
        ret__80280;
    }))
    ;
    
    //#line 451 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->reset();
    
    //#line 453 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(computeInst))->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                          ((x10_long)0ll)))->FMGL(density) =
      density;
    
    //#line 454 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 455 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101036 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* t__61703;
                    for (t__61703 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->FMGL(region))->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__61703));
                         ) {
                        ::x10::lang::Point* t__1069 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__61703));
                        x10_long placeId = ::x10aux::nullCheck(t__1069)->x10::lang::Point::__apply(
                                             ((x10_long)(((x10_int)0))));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__13)))au_edu_anu_qm_GMatrix__closure__13(placeId, computeInst, nPairs, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc81) {
            {
                ::x10::lang::CheckedThrowable* ct__101034 =
                  __exc81;
                {
                    ::x10::lang::Runtime::pushException(ct__101034);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101036);
    }
}

//#line 477 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeDistStaticByShellsReduce(
  ::au::edu::anu::qm::Density* density) {
    
    //#line 478 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ShellList shellList = (__extension__ ({
        ::au::edu::anu::qm::BasisFunctions this__80282 = this->FMGL(bfs);
        this__80282->FMGL(shellList);
    }))
    ;
    
    //#line 479 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int nPairs = (__extension__ ({
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int ret__80284;
        
        //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int nPrimitives__100823 = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
        
        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        ret__80284 = ((nPrimitives__100823) * (nPrimitives__100823));
        ret__80284;
    }))
    ;
    
    //#line 481 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(computeInst))->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                          ((x10_long)0ll)))->FMGL(density) =
      density;
    
    //#line 482 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 483 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101077 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(computeInst)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____101074;
                        for (__lowerer__var__1____101074 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____101074));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____101074));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__15)))au_edu_anu_qm_GMatrix__closure__15(computeInst, nPairs, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc83) {
            {
                ::x10::lang::CheckedThrowable* ct__101075 =
                  __exc83;
                {
                    ::x10::lang::Runtime::pushException(ct__101075);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101077);
    }
    
    //#line 495 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::matrix::DenseMatrix::copy(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                                                           ((x10_long)0ll)))->FMGL(gMatrixContribution),
                                     reinterpret_cast< ::x10::matrix::DenseMatrix*>(this));
}

//#line 499 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix::computeDistThreadedDynamicByShells(
  ::au::edu::anu::qm::Density* density) {
    
    //#line 500 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::util::SharedCounter* G =  (new (::x10aux::alloc_z< ::au::edu::anu::util::SharedCounter>()) ::au::edu::anu::util::SharedCounter());
    (G)->::au::edu::anu::util::SharedCounter::_constructor();
    
    //#line 501 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    G->set(((x10_long)::x10aux::num_hosts));
    
    //#line 503 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->reset();
    
    //#line 505 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(computeInst))->x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>::__apply(
                          ((x10_long)0ll)))->FMGL(density) =
      density;
    
    //#line 506 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>* computeInst =
      this->FMGL(computeInst);
    {
        
        //#line 507 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101091 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* t__61718;
                    for (t__61718 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(computeInst)->FMGL(dist))->FMGL(region))->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__61718));
                         ) {
                        ::x10::lang::Point* t__1071 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__61718));
                        x10_long placeId = ::x10aux::nullCheck(t__1071)->x10::lang::Point::__apply(
                                             ((x10_long)(((x10_int)0))));
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__closure__17)))au_edu_anu_qm_GMatrix__closure__17(placeId, computeInst, G, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc88) {
            {
                ::x10::lang::CheckedThrowable* ct__101089 =
                  __exc88;
                {
                    ::x10::lang::Runtime::pushException(ct__101089);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101091);
    }
}

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::au::edu::anu::qm::GMatrix* au::edu::anu::qm::GMatrix::au__edu__anu__qm__GMatrix____this__au__edu__anu__qm__GMatrix(
  ) {
    return this;
    
}
void au::edu::anu::qm::GMatrix::__fieldInitializers_au_edu_anu_qm_GMatrix(
  ) {
    this->FMGL(timer) = (__extension__ ({
        
        //#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::util::StatisticalTimer* alloc__61450 =
           (new (::x10aux::alloc_z< ::au::edu::anu::util::StatisticalTimer>()) ::au::edu::anu::util::StatisticalTimer());
        (alloc__61450)->::au::edu::anu::util::StatisticalTimer::_constructor(
          ((x10_long)1ll));
        alloc__61450;
    }))
    ;
    this->FMGL(omega) = 0.0;
    this->FMGL(thresh2) = 0.0;
}
const ::x10aux::serialization_id_t au::edu::anu::qm::GMatrix::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::GMatrix::_deserializer);

void au::edu::anu::qm::GMatrix::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_serialize_body(buf);
    buf.write(this->FMGL(timer));
    buf.write(this->FMGL(gMatType));
    buf.write(this->FMGL(computeInst));
    buf.write(this->FMGL(bfs));
    buf.write(this->FMGL(mol));
    buf.write(this->FMGL(omega));
    buf.write(this->FMGL(thresh));
    buf.write(this->FMGL(thresh2));
    buf.write(this->FMGL(jMatrix));
    buf.write(this->FMGL(kMatrix));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::GMatrix::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::GMatrix* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix>()) ::au::edu::anu::qm::GMatrix();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::GMatrix::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::matrix::DenseMatrix::_deserialize_body(buf);
    FMGL(timer) = buf.read< ::au::edu::anu::util::StatisticalTimer*>();
    FMGL(gMatType) = buf.read<x10_int>();
    FMGL(computeInst) = buf.read< ::x10::regionarray::DistArray< ::au::edu::anu::qm::GMatrix__ComputePlace*>*>();
    FMGL(bfs) = buf.read< ::au::edu::anu::qm::BasisFunctions>();
    FMGL(mol) = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
    FMGL(omega) = buf.read<x10_double>();
    FMGL(thresh) = buf.read<x10_double>();
    FMGL(thresh2) = buf.read<x10_double>();
    FMGL(jMatrix) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(kMatrix) = buf.read< ::x10::matrix::DenseMatrix*>();
}

::x10aux::RuntimeType au::edu::anu::qm::GMatrix::rtt;
void au::edu::anu::qm::GMatrix::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::matrix::DenseMatrix>()};
    rtt.initStageTwo("au.edu.anu.qm.GMatrix",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149022("\tcompute at %s pairs %i integrals %i %.4g seconds\n");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149000("GMatrix.computeSerial: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149006("GMatrix.computeDistDynamicByShells: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149015("!(dm$59765.M == t$59764.M && dm$59765.N == t$59764.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149014("!(dm$59735.M == t$59734.M && dm$59735.N == t$59734.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149021("!(x$60286.M == t$60285.M && x$60286.N == t$60285.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149002("GMatrix.computeDistNoAtomicByBF: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149001("GMatrix.computeThreadedLowMemNoAtomicByBF: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149025("\tgather from %i %.3g seconds\n");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149012("    Time to construct GMatrix: %.3g seconds\n");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149004("\tAtoms per place: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149009("\tShell pairs per place: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149005(" remainder ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149019("  EK = %.10f a.u.\n");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149023("!(x$60341.M == t$60340.M && x$60341.N == t$60340.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149018("!(A$59854.M == t$59853.M && B$59855.M == A$59854.N && B$59855.N == t$59853.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149026("!(x$60423.M == t$60422.M && x$60423.N == t$60422.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149011("\tmaxEst %.4g\n");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149020("!(x$60181.M == t$60180.M && x$60181.N == t$60180.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149013("    totInt = ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149010("GMatrix.computeDistThreadedDynamicByShells: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149003("GMatrix.computeDistStaticByAtoms: ");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149007("with allreduce:");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149017("  EJ = %.10f a.u.\n");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149024("!(x$60361.M == t$60360.M && x$60361.N == t$60360.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149016("!(A$59834.M == t$59833.M && B$59835.M == A$59834.N && B$59835.N == t$59833.N)");
::x10::lang::String au::edu::anu::qm::GMatrix_Strings::sl__149008("GMatrix.computeDistStaticByShells: ");

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*>::itable<au_edu_anu_qm_GMatrix__closure__1>au_edu_anu_qm_GMatrix__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__1::__apply, &au_edu_anu_qm_GMatrix__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::au::edu::anu::qm::GMatrix__ComputePlace*> >, &au_edu_anu_qm_GMatrix__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__2>au_edu_anu_qm_GMatrix__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__2::__apply, &au_edu_anu_qm_GMatrix__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__2::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__4>au_edu_anu_qm_GMatrix__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__4::__apply, &au_edu_anu_qm_GMatrix__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__3>au_edu_anu_qm_GMatrix__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__3::__apply, &au_edu_anu_qm_GMatrix__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__3::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0<x10_boolean>::itable<au_edu_anu_qm_GMatrix__closure__5>au_edu_anu_qm_GMatrix__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__5::__apply, &au_edu_anu_qm_GMatrix__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >, &au_edu_anu_qm_GMatrix__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__5::_deserialize);

::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__7>au_edu_anu_qm_GMatrix__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__7::__apply, &au_edu_anu_qm_GMatrix__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >, &au_edu_anu_qm_GMatrix__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__7::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__6>au_edu_anu_qm_GMatrix__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__6::__apply, &au_edu_anu_qm_GMatrix__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__6::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__9>au_edu_anu_qm_GMatrix__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__9::__apply, &au_edu_anu_qm_GMatrix__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >, &au_edu_anu_qm_GMatrix__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__9::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__8>au_edu_anu_qm_GMatrix__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__8::__apply, &au_edu_anu_qm_GMatrix__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__8::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__8::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__8::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__12>au_edu_anu_qm_GMatrix__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__12::__apply, &au_edu_anu_qm_GMatrix__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__12::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__11>au_edu_anu_qm_GMatrix__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__11::__apply, &au_edu_anu_qm_GMatrix__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >, &au_edu_anu_qm_GMatrix__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__11::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__10>au_edu_anu_qm_GMatrix__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__10::__apply, &au_edu_anu_qm_GMatrix__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__10::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__10::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__10::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__14>au_edu_anu_qm_GMatrix__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__14::__apply, &au_edu_anu_qm_GMatrix__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >, &au_edu_anu_qm_GMatrix__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__14::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__13>au_edu_anu_qm_GMatrix__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__13::__apply, &au_edu_anu_qm_GMatrix__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__13::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__13::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__13::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__16>au_edu_anu_qm_GMatrix__closure__16::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__16::__apply, &au_edu_anu_qm_GMatrix__closure__16::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__16::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__16::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__16::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__16::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__16::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__16::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__15>au_edu_anu_qm_GMatrix__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__15::__apply, &au_edu_anu_qm_GMatrix__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__15::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__15::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__15::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__19>au_edu_anu_qm_GMatrix__closure__19::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__19::__apply, &au_edu_anu_qm_GMatrix__closure__19::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__19::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__19::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__19::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__19::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__19::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__19::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*>::itable<au_edu_anu_qm_GMatrix__closure__18>au_edu_anu_qm_GMatrix__closure__18::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__18::__apply, &au_edu_anu_qm_GMatrix__closure__18::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__18::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::matrix::DenseMatrix*> >, &au_edu_anu_qm_GMatrix__closure__18::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__18::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__18::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__closure__17>au_edu_anu_qm_GMatrix__closure__17::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__closure__17::__apply, &au_edu_anu_qm_GMatrix__closure__17::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__closure__17::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__closure__17::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__17::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__closure__17::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__closure__17::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__closure__17::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of GMatrix */
/*************************************************/
/*************************************************/
/* START of GMatrix$ComputePlace */
#include <au/edu/anu/qm/GMatrix__ComputePlace.h>

#include <x10/lang/Double.h>
#include <au/edu/anu/qm/Density.h>
#include <au/edu/anu/chem/Molecule.h>
#include <au/edu/anu/qm/QMAtom.h>
#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Rail.h>
#include <au/edu/anu/qm/GMatrix__ComputeThread.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/BasisFunctions.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Runtime.h>
#include <x10/util/Team.h>
#include <x10/lang/Place.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <au/edu/anu/qm/Power.h>
#include <x10/lang/Math.h>
#include <x10/matrix/Matrix.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <au/edu/anu/qm/ShellList.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10x/vector/Point3d.h>
#include <x10/util/concurrent/AtomicLong.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE__CLOSURE__20_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__ComputePlace__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__ComputePlace__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(computeThreads->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                              ix_loc))->compute(saved_this->FMGL(density));
    }
    
    // captured environment
    ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* computeThreads;
    x10_long ix_loc;
    ::au::edu::anu::qm::GMatrix__ComputePlace* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->computeThreads);
        buf.write(this->ix_loc);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__ComputePlace__closure__20* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__ComputePlace__closure__20>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* that_computeThreads = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >*>();
        x10_long that_ix_loc = buf.read<x10_long>();
        ::au::edu::anu::qm::GMatrix__ComputePlace* that_saved_this = buf.read< ::au::edu::anu::qm::GMatrix__ComputePlace*>();
        au_edu_anu_qm_GMatrix__ComputePlace__closure__20* this_ = new (storage) au_edu_anu_qm_GMatrix__ComputePlace__closure__20(that_computeThreads, that_ix_loc, that_saved_this);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__ComputePlace__closure__20(::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* computeThreads, x10_long ix_loc, ::au::edu::anu::qm::GMatrix__ComputePlace* saved_this) : computeThreads(computeThreads), ix_loc(ix_loc), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:696";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE__CLOSURE__20_CLOSURE
#ifndef AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE__CLOSURE__21_CLOSURE
#define AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_qm_GMatrix__ComputePlace__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__ComputePlace__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 812 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::au::edu::anu::qm::GMatrix__ComputeThread* computeThread__100876 =
          saved_this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
            threadNum__100882);
        
        //#line 814 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        x10_long threadInts__100877 = ((x10_long)0ll);
        
        //#line 816 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        x10_long myTriplet__100878 = threadNum__100882;
        
        //#line 817 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        x10_long i__100879 = ((x10_long)-1ll);
        
        //#line 818 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        x10_long i__61805max__100873 = ((((x10_long)(nPrimitives))) - (((x10_long)1ll)));
        {
            x10_long i__100874;
            for (i__100874 = ((x10_long)0ll); ((i__100874) <= (i__61805max__100873));
                 i__100874 = ((i__100874) + (((x10_long)1ll))))
            {
                x10_long c__100875 = i__100874;
                
                //#line 819 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                ::au::edu::anu::qm::ContractedGaussian cFunc__100868 =
                  ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                    c__100875);
                
                //#line 820 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_int cStrt__100869 = cFunc__100868->FMGL(intIndex);
                
                //#line 821 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_int cAng__100870 = (__extension__ ({
                    
                    //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                    ::au::edu::anu::qm::Power this__100871 =
                      cFunc__100868->FMGL(power);
                    this__100871->FMGL(maxam);
                }))
                ;
                
                //#line 822 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_int cc__100872 = ((cStrt__100869) + (cAng__100870));
                
                //#line 824 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                if (((aa) >= (cc__100872))) {
                    
                    //#line 825 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    i__100879 = ((i__100879) + (((x10_long)1ll)));
                    
                    //#line 826 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    if ((::x10aux::struct_equals(i__100879,
                                                 myTriplet__100878)))
                    {
                        
                        //#line 827 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        threadInts__100877 = ((threadInts__100877) + (::x10aux::nullCheck(computeThread__100876)->computeOneShellTriplet(
                                                                        aFunc,
                                                                        bFunc,
                                                                        cFunc__100868,
                                                                        radiusABSquared,
                                                                        nPrimitives,
                                                                        shellPrimitives,
                                                                        saved_this->FMGL(qCut),
                                                                        saved_this->FMGL(dCut))));
                        
                        //#line 828 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        myTriplet__100878 = currentTriplet->x10::util::concurrent::AtomicLong::getAndIncrement();
                    }
                    
                }
                
            }
        }
        {
            
            //#line 832 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::lang::CheckedThrowable* throwable__101114 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        totInt = ((totInt) + (threadInts__100877));
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc103) {
                {
                    ::x10::lang::CheckedThrowable* formal__101115 =
                      __exc103;
                    {
                        throwable__101114 = formal__101115;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__101114,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101114))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101114));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__101114,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101114)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__101114));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::au::edu::anu::qm::GMatrix__ComputePlace* saved_this;
    x10_long threadNum__100882;
    x10_int nPrimitives;
    ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives;
    x10_int aa;
    ::au::edu::anu::qm::ContractedGaussian aFunc;
    ::au::edu::anu::qm::ContractedGaussian bFunc;
    x10_double radiusABSquared;
    ::x10::util::concurrent::AtomicLong* currentTriplet;
    x10aux::captured_struct_lval<x10_long> totInt;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->threadNum__100882);
        buf.write(this->nPrimitives);
        buf.write(this->shellPrimitives);
        buf.write(this->aa);
        buf.write(this->aFunc);
        buf.write(this->bFunc);
        buf.write(this->radiusABSquared);
        buf.write(this->currentTriplet);
        buf.write(this->totInt);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_qm_GMatrix__ComputePlace__closure__21* storage = ::x10aux::alloc_z<au_edu_anu_qm_GMatrix__ComputePlace__closure__21>();
        buf.record_reference(storage);
        ::au::edu::anu::qm::GMatrix__ComputePlace* that_saved_this = buf.read< ::au::edu::anu::qm::GMatrix__ComputePlace*>();
        x10_long that_threadNum__100882 = buf.read<x10_long>();
        x10_int that_nPrimitives = buf.read<x10_int>();
        ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* that_shellPrimitives = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >*>();
        x10_int that_aa = buf.read<x10_int>();
        ::au::edu::anu::qm::ContractedGaussian that_aFunc = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
        ::au::edu::anu::qm::ContractedGaussian that_bFunc = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
        x10_double that_radiusABSquared = buf.read<x10_double>();
        ::x10::util::concurrent::AtomicLong* that_currentTriplet = buf.read< ::x10::util::concurrent::AtomicLong*>();
        x10aux::captured_struct_lval<x10_long> that_totInt = buf.read<x10aux::captured_struct_lval<x10_long> >();
        au_edu_anu_qm_GMatrix__ComputePlace__closure__21* this_ = new (storage) au_edu_anu_qm_GMatrix__ComputePlace__closure__21(that_saved_this, that_threadNum__100882, that_nPrimitives, that_shellPrimitives, that_aa, that_aFunc, that_bFunc, that_radiusABSquared, that_currentTriplet, that_totInt);
        return this_;
    }
    
    au_edu_anu_qm_GMatrix__ComputePlace__closure__21(::au::edu::anu::qm::GMatrix__ComputePlace* saved_this, x10_long threadNum__100882, x10_int nPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives, x10_int aa, ::au::edu::anu::qm::ContractedGaussian aFunc, ::au::edu::anu::qm::ContractedGaussian bFunc, x10_double radiusABSquared, ::x10::util::concurrent::AtomicLong* currentTriplet, x10aux::captured_struct_lval<x10_long> totInt) : saved_this(saved_this), threadNum__100882(threadNum__100882), nPrimitives(nPrimitives), shellPrimitives(shellPrimitives), aa(aa), aFunc(aFunc), bFunc(bFunc), radiusABSquared(radiusABSquared), currentTriplet(currentTriplet), totInt(totInt) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10:811-833";
    }

};

#endif // AU_EDU_ANU_QM_GMATRIX__COMPUTEPLACE__CLOSURE__21_CLOSURE

//#line 549 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 550 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 552 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 553 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 554 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 556 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 557 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 558 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 559 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 560 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 562 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 564 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputePlace::_constructor(x10_long N, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
                                                           ::au::edu::anu::qm::BasisFunctions bfs,
                                                           ::x10::matrix::DenseMatrix* qCut,
                                                           ::x10::matrix::DenseMatrix* dCut,
                                                           x10_double maxEst,
                                                           x10_double omega,
                                                           x10_double thresh) {
    
    //#line 548 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->au::edu::anu::qm::GMatrix__ComputePlace::__fieldInitializers_au_edu_anu_qm_GMatrix_ComputePlace();
    
    //#line 565 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(mol) = mol;
    
    //#line 566 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(qCut) = qCut;
    
    //#line 567 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(dCut) = dCut;
    
    //#line 568 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(maxEst) = maxEst;
    
    //#line 569 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(thresh) = thresh;
    
    //#line 571 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(gMatrixContribution) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61442 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61442)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61442;
    }))
    ;
    
    //#line 572 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(jMatrixContribution) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61443 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61443)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61443;
    }))
    ;
    
    //#line 573 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(kMatrixContribution) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61444 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61444)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61444;
    }))
    ;
    
    //#line 576 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int noOfElectrons = ::x10aux::nullCheck(mol)->getNumberOfElectrons();
    
    //#line 577 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfOccupancies = ((((x10_long)(noOfElectrons))) / ::x10aux::zeroCheck(((x10_long)2ll)));
    
    //#line 578 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(density) = (__extension__ ({
        ::au::edu::anu::qm::Density* alloc__61445 =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::Density>()) ::au::edu::anu::qm::Density());
        (alloc__61445)->::au::edu::anu::qm::Density::_constructor(
          N, noOfOccupancies);
        alloc__61445;
    }))
    ;
    
    //#line 580 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 581 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__set(
              i, (__extension__ ({
                  ::au::edu::anu::qm::GMatrix__ComputeThread* alloc__61446 =
                     (new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix__ComputeThread>()) ::au::edu::anu::qm::GMatrix__ComputeThread());
                  (alloc__61446)->::au::edu::anu::qm::GMatrix__ComputeThread::_constructor(
                    N, bfs, qCut, dCut, omega, thresh);
                  alloc__61446;
              }))
              );
        }
    }
    
}
::au::edu::anu::qm::GMatrix__ComputePlace* au::edu::anu::qm::GMatrix__ComputePlace::_make(
  x10_long N, ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>* mol,
  ::au::edu::anu::qm::BasisFunctions bfs, ::x10::matrix::DenseMatrix* qCut,
  ::x10::matrix::DenseMatrix* dCut, x10_double maxEst, x10_double omega,
  x10_double thresh) {
    ::au::edu::anu::qm::GMatrix__ComputePlace* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix__ComputePlace>()) ::au::edu::anu::qm::GMatrix__ComputePlace();
    this_->_constructor(N, mol, bfs, qCut, dCut, maxEst, omega,
    thresh);
    return this_;
}



//#line 590 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputePlace::reset(::au::edu::anu::qm::Density* density) {
    
    //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(density) = density;
    
    //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(gMatrixContribution))->reset();
    
    //#line 593 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(jMatrixContribution))->reset();
    
    //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(kMatrixContribution))->reset();
    
    //#line 595 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->recomputeDCut();
    
    //#line 596 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                  i))->reset(density, this->FMGL(thresh2));
        }
    }
    
}

//#line 606 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputePlace::reset() {
    
    //#line 608 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::lang::Rail< x10_double >* densityMatrix = ::x10aux::nullCheck(this->FMGL(density))->FMGL(d);
    
    //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->bcast< x10_double >(
      ::x10::lang::Place::FMGL(FIRST_PLACE__get)(), densityMatrix,
      ((x10_long)0ll), densityMatrix, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(densityMatrix)->FMGL(size)));
    
    //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(gMatrixContribution))->reset();
    
    //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(jMatrixContribution))->reset();
    
    //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(kMatrixContribution))->reset();
    
    //#line 613 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->recomputeDCut();
    
    //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10aux::nullCheck(this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                  i))->reset(this->FMGL(density),
                                             this->FMGL(thresh2));
        }
    }
    
}

//#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputePlace::allreduceGMat(
  ) {
    
    //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::lang::Rail< x10_double >* gmat = ::x10aux::nullCheck(this->getGMatContributionArray())->FMGL(d);
    
    //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::util::Team::FMGL(WORLD__get)()->allreduce< x10_double >(
      gmat, ((x10_long)0ll), gmat, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(gmat)->FMGL(size)),
      ((x10_int)0));
}

//#line 628 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputePlace::recomputeDCut(
  ) {
    
    //#line 630 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
    
    //#line 632 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(dCut))->reset();
    
    //#line 633 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double maxDen = 0.0;
    
    //#line 635 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_int a;
        for (a = ((x10_int)0); ((((x10_long)(a))) < (noOfAtoms));
             a = ((a) + (((x10_int)1)))) {
            
            //#line 636 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc =
              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                    ((x10_long)(a))))->getBasisFunctions();
            
            //#line 637 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long naFunc = ::x10aux::nullCheck(aFunc)->size();
            
            //#line 639 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            {
                x10_long i;
                for (i = ((x10_long)0ll); ((i) < (naFunc));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 640 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::au::edu::anu::qm::ContractedGaussian iaFunc =
                      ::x10aux::nullCheck(aFunc)->get(i);
                    
                    //#line 643 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    {
                        x10_int b;
                        for (b = ((x10_int)0); ((b) <= (a));
                             b = ((b) + (((x10_int)1)))) {
                            
                            //#line 644 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bFunc =
                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                    ((x10_long)(b))))->getBasisFunctions();
                            
                            //#line 645 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_long nbFunc = ((b) < (a))
                              ? (::x10aux::nullCheck(bFunc)->size())
                              : (((i) + (((x10_long)1ll))));
                            
                            //#line 647 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            {
                                x10_long j;
                                for (j = ((x10_long)0ll);
                                     ((j) < (nbFunc)); j =
                                                         ((j) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 648 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    ::au::edu::anu::qm::ContractedGaussian jbFunc =
                                      ::x10aux::nullCheck(bFunc)->get(
                                        j);
                                    
                                    //#line 649 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    x10_int bAng = (__extension__ ({
                                        
                                        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                                        ::au::edu::anu::qm::Power this__96666 =
                                          jbFunc->FMGL(power);
                                        this__96666->FMGL(maxam);
                                    }))
                                    ;
                                    
                                    //#line 650 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    x10_int aAng = (__extension__ ({
                                        
                                        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                                        ::au::edu::anu::qm::Power this__96667 =
                                          iaFunc->FMGL(power);
                                        this__96667->FMGL(maxam);
                                    }))
                                    ;
                                    
                                    //#line 651 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    x10_int NA = ((((((((aAng) + (((x10_int)2)))) * (((aAng) + (((x10_int)1)))))) / ::x10aux::zeroCheck(((x10_int)2)))) + (iaFunc->FMGL(intIndex)));
                                    
                                    //#line 652 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    x10_int NB = ((((((((bAng) + (((x10_int)2)))) * (((bAng) + (((x10_int)1)))))) / ::x10aux::zeroCheck(((x10_int)2)))) + (jbFunc->FMGL(intIndex)));
                                    
                                    //#line 653 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    x10_double newMaxDen =
                                      0.0;
                                    
                                    //#line 654 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    x10_long i__61751min__100834 =
                                      ((x10_long)(iaFunc->FMGL(intIndex)));
                                    x10_long i__61751max__100835 =
                                      ((((x10_long)(NA))) - (((x10_long)1ll)));
                                    {
                                        x10_long i__100836;
                                        for (i__100836 = i__61751min__100834;
                                             ((i__100836) <= (i__61751max__100835));
                                             i__100836 = ((i__100836) + (((x10_long)1ll))))
                                        {
                                            x10_long iden__100837 =
                                              i__100836;
                                            x10_long i__61733min__100830 =
                                              ((x10_long)(jbFunc->FMGL(intIndex)));
                                            x10_long i__61733max__100831 =
                                              ((((x10_long)(NB))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__100832;
                                                for (i__100832 =
                                                       i__61733min__100830;
                                                     ((i__100832) <= (i__61733max__100831));
                                                     i__100832 =
                                                       ((i__100832) + (((x10_long)1ll))))
                                                {
                                                    x10_long jden__100833 =
                                                      i__100832;
                                                    
                                                    //#line 655 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                    newMaxDen =
                                                      ::x10::lang::MathNatives::fmax(newMaxDen,::fabs((__extension__ ({
                                                        ::x10::matrix::DenseMatrix* this__100827 =
                                                          reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(density));
                                                        
                                                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                                        x10_long x__100828 =
                                                          iden__100837;
                                                        x10_long y__100829 =
                                                          jden__100833;
                                                        ::x10aux::nullCheck(::x10aux::nullCheck(this__100827)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                                          ((((y__100829) * (::x10aux::nullCheck(this__100827)->FMGL(M)))) + (x__100828)));
                                                    }))
                                                    ));
                                                }
                                            }
                                            
                                        }
                                    }
                                    
                                    //#line 656 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    ::x10::matrix::DenseMatrix* this__100838 =
                                      this->FMGL(dCut);
                                    
                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    x10_long x__100839 = ((x10_long)(iaFunc->FMGL(intIndex)));
                                    x10_long y__100840 = ((x10_long)(jbFunc->FMGL(intIndex)));
                                    x10_double v__100841 =
                                      newMaxDen;
                                    x10_double ret__100842;
                                    
                                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    ::x10aux::nullCheck(::x10aux::nullCheck(this__100838)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                                      ((((y__100840) * (::x10aux::nullCheck(this__100838)->FMGL(M)))) + (x__100839)),
                                      v__100841);
                                    
                                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    ret__100842 = v__100841;
                                    
                                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    ret__100842;
                                    
                                    //#line 657 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    if (((newMaxDen) > (maxDen)))
                                    {
                                        maxDen = newMaxDen;
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 662 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                 ::x10::lang::Place::_make(::x10aux::here))))
    {
        
        //#line 663 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::GMatrix__ComputePlace_Strings::sl__149065),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(maxDen));
    }
    
    //#line 665 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(thresh2) = ((((this->FMGL(thresh)) / (this->FMGL(maxEst)))) / (maxDen));
}

//#line 672 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMatrix__ComputePlace::getGMatContributionArray(
  ) {
    
    //#line 673 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->computeJMatContribution();
    
    //#line 674 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->computeKMatContribution();
    
    //#line 676 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long i__61787max__100857 = ((::x10aux::nullCheck(this->FMGL(gMatrixContribution))->FMGL(M)) - (((x10_long)1ll)));
    {
        x10_long i__100858;
        for (i__100858 = ((x10_long)0ll); ((i__100858) <= (i__61787max__100857));
             i__100858 = ((i__100858) + (((x10_long)1ll))))
        {
            x10_long x__100859 = i__100858;
            
            //#line 677 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long i__61769max__100854 = ((::x10aux::nullCheck(this->FMGL(gMatrixContribution))->FMGL(N)) - (((x10_long)1ll)));
            {
                x10_long i__100855;
                for (i__100855 = ((x10_long)0ll); ((i__100855) <= (i__61769max__100854));
                     i__100855 = ((i__100855) + (((x10_long)1ll))))
                {
                    x10_long y__100856 = i__100855;
                    
                    //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::x10::matrix::DenseMatrix* this__100843 =
                      this->FMGL(gMatrixContribution);
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100844 = x__100859;
                    x10_long y__100845 = y__100856;
                    x10_double v__100846 = (((__extension__ ({
                        
                        //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::x10::matrix::DenseMatrix* this__100847 =
                          this->FMGL(jMatrixContribution);
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100848 = x__100859;
                        x10_long y__100849 = y__100856;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__100847)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100849) * (::x10aux::nullCheck(this__100847)->FMGL(M)))) + (x__100848)));
                    }))
                    ) - (((0.25) * ((__extension__ ({
                        
                        //#line 678 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::x10::matrix::DenseMatrix* this__100850 =
                          this->FMGL(kMatrixContribution);
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100851 = x__100859;
                        x10_long y__100852 = y__100856;
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__100850)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100852) * (::x10aux::nullCheck(this__100850)->FMGL(M)))) + (x__100851)));
                    }))
                    ))));
                    x10_double ret__100853;
                    
                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__100843)->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                      ((((y__100845) * (::x10aux::nullCheck(this__100843)->FMGL(M)))) + (x__100844)),
                      v__100846);
                    
                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__100853 = v__100846;
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__100853;
                }
            }
            
        }
    }
    
    //#line 681 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return this->FMGL(gMatrixContribution);
    
}

//#line 684 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_boolean au::edu::anu::qm::GMatrix__ComputePlace::setValue(
  x10_long a, x10_long b, x10_long c, x10_long d, x10_long i,
  x10_long j, x10_long k, x10_long l) {
    
    //#line 685 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian iFunc = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                             a))->getBasisFunctions())->get(
                                                     i);
    
    //#line 686 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian jFunc = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                             b))->getBasisFunctions())->get(
                                                     j);
    
    //#line 687 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian kFunc = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                             c))->getBasisFunctions())->get(
                                                     k);
    
    //#line 688 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian lFunc = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                             d))->getBasisFunctions())->get(
                                                     l);
    
    //#line 690 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >* computeThreads =
      this->FMGL(computeThreads);
    
    //#line 691 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long ix;
        for (ix = ((x10_long)0ll); ((ix) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             ix = ((ix) + (((x10_long)1ll)))) {
            
            //#line 692 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_boolean setIt = ::x10aux::nullCheck(computeThreads->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                      ix))->setValue(
                                  iFunc, jFunc, kFunc, lFunc);
            
            //#line 694 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            if (setIt) {
                
                //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_long ix_loc = ix;
                
                //#line 696 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__ComputePlace__closure__20)))au_edu_anu_qm_GMatrix__ComputePlace__closure__20(computeThreads, ix_loc, this))));
                
                //#line 697 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                return true;
                
            }
            
        }
    }
    
    //#line 701 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return false;
    
}

//#line 704 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputePlace::compute(
  x10_int start, x10_int end) {
    
    //#line 705 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long totInt = ((x10_long)0ll);
    
    //#line 706 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long noOfAtoms = ::x10aux::nullCheck(this->FMGL(mol))->getNumberOfAtoms();
    
    //#line 708 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_int a;
        for (a = start; ((a) < (end)); a = ((a) + (((x10_int)1))))
        {
            
            //#line 709 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* aFunc =
              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                    ((x10_long)(a))))->getBasisFunctions();
            
            //#line 710 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_long naFunc = ::x10aux::nullCheck(aFunc)->size();
            
            //#line 712 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            {
                x10_long i;
                for (i = ((x10_long)0ll); ((i) < (naFunc));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 713 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::au::edu::anu::qm::ContractedGaussian iaFunc =
                      ::x10aux::nullCheck(aFunc)->get(i);
                    
                    //#line 716 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    {
                        x10_int b;
                        for (b = ((x10_int)0); ((b) <= (a));
                             b = ((b) + (((x10_int)1)))) {
                            
                            //#line 717 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* bFunc =
                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                    ((x10_long)(b))))->getBasisFunctions();
                            
                            //#line 718 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_long nbFunc = ((b) < (a))
                              ? (::x10aux::nullCheck(bFunc)->size())
                              : (((i) + (((x10_long)1ll))));
                            
                            //#line 720 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            {
                                x10_long j;
                                for (j = ((x10_long)0ll);
                                     ((j) < (nbFunc)); j =
                                                         ((j) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 721 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    ::au::edu::anu::qm::ContractedGaussian jbFunc =
                                      ::x10aux::nullCheck(bFunc)->get(
                                        j);
                                    
                                    //#line 724 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                    {
                                        x10_int c;
                                        for (c = ((x10_int)0);
                                             ((((x10_long)(c))) < (noOfAtoms));
                                             c = ((c) + (((x10_int)1))))
                                        {
                                            
                                            //#line 725 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* cFunc =
                                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                    ((x10_long)(c))))->getBasisFunctions();
                                            
                                            //#line 726 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                            x10_long ncFunc =
                                              ::x10aux::nullCheck(cFunc)->size();
                                            
                                            //#line 728 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                            {
                                                x10_long k;
                                                for (k = ((x10_long)0ll);
                                                     ((k) < (ncFunc));
                                                     k = ((k) + (((x10_long)1ll))))
                                                {
                                                    
                                                    //#line 729 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                    ::au::edu::anu::qm::ContractedGaussian kcFunc =
                                                      ::x10aux::nullCheck(cFunc)->get(
                                                        k);
                                                    
                                                    //#line 732 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                    {
                                                        x10_int d;
                                                        for (d =
                                                               ((x10_int)0);
                                                             ((d) <= (c));
                                                             d =
                                                               ((d) + (((x10_int)1))))
                                                        {
                                                            
                                                            //#line 733 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                            ::x10::util::ArrayList< ::au::edu::anu::qm::ContractedGaussian>* dFunc =
                                                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(mol))->getAtom(
                                                                                    ((x10_long)(d))))->getBasisFunctions();
                                                            
                                                            //#line 734 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                            x10_long ndFunc =
                                                              ((d) < (c))
                                                              ? (::x10aux::nullCheck(dFunc)->size())
                                                              : (((k) + (((x10_long)1ll))));
                                                            
                                                            //#line 736 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                            {
                                                                x10_long l;
                                                                for (l =
                                                                       ((x10_long)0ll);
                                                                     ((l) < (ndFunc));
                                                                     l =
                                                                       ((l) + (((x10_long)1ll))))
                                                                {
                                                                    
                                                                    //#line 737 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                    ::au::edu::anu::qm::ContractedGaussian ldFunc =
                                                                      ::x10aux::nullCheck(dFunc)->get(
                                                                        l);
                                                                    
                                                                    //#line 741 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                                                    totInt =
                                                                      ((totInt) + (::x10aux::nullCheck(this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                                                         ((x10_long)0ll)))->computeSingle(
                                                                                     iaFunc,
                                                                                     jbFunc,
                                                                                     kcFunc,
                                                                                     ldFunc,
                                                                                     this->FMGL(density))));
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
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 750 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return totInt;
    
}

//#line 753 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputePlace::computeShells(
  x10_int nPairs) {
    
    //#line 754 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long totInt = ((x10_long)0ll);
    
    //#line 755 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::GMatrix__ComputeThread* computeThread =
      this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
        ((x10_long)0ll));
    
    //#line 756 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ShellList shellList = ::x10aux::nullCheck(computeThread)->FMGL(shellList);
    
    //#line 757 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives =
      shellList->au::edu::anu::qm::ShellList::getShellPrimitives();
    
    //#line 758 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int numPrimitives = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
    
    //#line 759 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int numPairs = (__extension__ ({
        
        //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int ret__96690;
        
        //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        x10_int nPrimitives__100860 = shellList->au::edu::anu::qm::ShellList::getNumberOfShellPrimitives();
        
        //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ShellList.x10"
        ret__96690 = ((nPrimitives__100860) * (nPrimitives__100860));
        ret__96690;
    }))
    ;
    
    //#line 761 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long i;
        for (i = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
             ((i) < (((x10_long)(numPairs)))); i = ((i) + (((x10_long)::x10aux::num_hosts))))
        {
            
            //#line 762 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            totInt = ((totInt) + (::x10aux::nullCheck(computeThread)->computeOneShellPair(
                                    i, numPrimitives, shellPrimitives)));
        }
    }
    
    //#line 764 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return totInt;
    
}

//#line 767 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMatrix__ComputePlace::computeJMatContribution(
  ) {
    
    //#line 768 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 769 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::matrix::DenseMatrix* t__100861 = this->FMGL(jMatrixContribution);
            ::x10::matrix::DenseMatrix* x__100862 = ::x10aux::nullCheck(this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                          i))->getJMat();
            if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100862)->FMGL(M),
                                            ::x10aux::nullCheck(t__100861)->FMGL(M))) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(x__100862)->FMGL(N),
                                         ::x10aux::nullCheck(t__100861)->FMGL(N))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix__ComputePlace_Strings::sl__149066))));
            }
            ::x10aux::nullCheck(t__100861)->cellAdd(x__100862);
        }
    }
    
    //#line 772 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return this->FMGL(jMatrixContribution);
    
}

//#line 775 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMatrix__ComputePlace::computeKMatContribution(
  ) {
    
    //#line 776 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)()))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 777 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::x10::matrix::DenseMatrix* t__100863 = this->FMGL(kMatrixContribution);
            ::x10::matrix::DenseMatrix* x__100864 = ::x10aux::nullCheck(this->FMGL(computeThreads)->x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::__apply(
                                                                          i))->getKMat();
            if (!(((::x10aux::struct_equals(::x10aux::nullCheck(x__100864)->FMGL(M),
                                            ::x10aux::nullCheck(t__100863)->FMGL(M))) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(x__100864)->FMGL(N),
                                         ::x10aux::nullCheck(t__100863)->FMGL(N))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::au::edu::anu::qm::GMatrix__ComputePlace_Strings::sl__149067))));
            }
            ::x10aux::nullCheck(t__100863)->cellAdd(x__100864);
        }
    }
    
    //#line 780 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return this->FMGL(kMatrixContribution);
    
}

//#line 783 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputePlace::computeOneShellPairThreaded(
  x10_long shellPair, x10_int nPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives) {
    
    //#line 784 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long a = ((shellPair) / ::x10aux::zeroCheck(((x10_long)(nPrimitives))));
    
    //#line 785 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long b = ((shellPair) % ::x10aux::zeroCheck(((x10_long)(nPrimitives))));
    
    //#line 787 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian aFunc = ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                                                     a);
    
    //#line 788 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian bFunc = ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                                                     b);
    
    //#line 789 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return this->computeOneShellPairThreaded(aFunc, bFunc,
                                             nPrimitives,
                                             shellPrimitives);
    
}

//#line 792 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputePlace::computeOneShellPairThreaded(
  ::au::edu::anu::qm::ContractedGaussian aFunc, ::au::edu::anu::qm::ContractedGaussian bFunc,
  x10_int nPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives) {
    
    //#line 793 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long totInt = ((x10_long)0ll);
    
    //#line 795 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aStrt = aFunc->FMGL(intIndex);
    
    //#line 796 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bStrt = bFunc->FMGL(intIndex);
    
    //#line 797 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__96692 = aFunc->FMGL(power);
        this__96692->FMGL(maxam);
    }))
    ;
    
    //#line 798 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__96693 = bFunc->FMGL(power);
        this__96693->FMGL(maxam);
    }))
    ;
    
    //#line 800 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aa = ((aStrt) + (aAng));
    
    //#line 801 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bb = ((bStrt) + (bAng));
    
    //#line 803 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    if (((aa) < (bb))) {
        return ((x10_long)0ll);
        
    }
    
    //#line 806 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    if ((((__extension__ ({
            ::x10::matrix::DenseMatrix* this__96696 = this->FMGL(qCut);
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__96694 = ((x10_long)(aFunc->FMGL(intIndex)));
            x10_long y__96695 = ((x10_long)(bFunc->FMGL(intIndex)));
            ::x10aux::nullCheck(::x10aux::nullCheck(this__96696)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__96695) * (::x10aux::nullCheck(this__96696)->FMGL(M)))) + (x__96694)));
        }))
        ) < (this->FMGL(thresh2)))) {
        return ((x10_long)0ll);
        
    }
    
    //#line 808 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double radiusABSquared = (__extension__ ({
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::ContractedGaussian cg__96697 =
          bFunc;
        (__extension__ ({
            ::x10x::vector::Point3d this__96702 = aFunc->FMGL(origin);
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__96698 = cg__96697->FMGL(origin);
            x10_double ret__96703;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__100865 = ((this__96702->FMGL(i)) - (b__96698->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__100866 = ((this__96702->FMGL(j)) - (b__96698->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__100867 = ((this__96702->FMGL(k)) - (b__96698->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__96703 = ((((((di__100865) * (di__100865))) + (((dj__100866) * (dj__100866))))) + (((dk__100867) * (dk__100867))));
            ret__96703;
        }))
        ;
    }))
    ;
    
    //#line 810 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10::util::concurrent::AtomicLong* currentTriplet =
      ::x10::util::concurrent::AtomicLong::_make((x10_long)(::x10aux::nullCheck(this->FMGL(computeThreads))->FMGL(size)));
    {
        
        //#line 811 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__101097 = ::x10::lang::Runtime::startFinish();
        try {
            {
                x10_long i__61823max__100880 = (((x10_long)(::x10aux::nullCheck(this->FMGL(computeThreads))->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__100881;
                    for (i__100881 = ((x10_long)0ll); ((i__100881) <= (i__61823max__100880));
                         i__100881 = ((i__100881) + (((x10_long)1ll))))
                    {
                        x10_long threadNum__100882 = i__100881;
                        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_qm_GMatrix__ComputePlace__closure__21)))au_edu_anu_qm_GMatrix__ComputePlace__closure__21(this, threadNum__100882, nPrimitives, shellPrimitives, aa, aFunc, bFunc, radiusABSquared, currentTriplet, &(totInt)))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc104) {
            {
                ::x10::lang::CheckedThrowable* ct__101095 =
                  __exc104;
                {
                    ::x10::lang::Runtime::pushException(ct__101095);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__101097);
    }
    
    //#line 834 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return totInt;
    
}

//#line 548 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::au::edu::anu::qm::GMatrix__ComputePlace* au::edu::anu::qm::GMatrix__ComputePlace::au__edu__anu__qm__GMatrix__ComputePlace____this__au__edu__anu__qm__GMatrix__ComputePlace(
  ) {
    return this;
    
}
void au::edu::anu::qm::GMatrix__ComputePlace::__fieldInitializers_au_edu_anu_qm_GMatrix_ComputePlace(
  ) {
    this->FMGL(density) = (::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Density*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(thresh2) = 0.0;
    this->FMGL(computeThreads) = ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >::_make(((x10_long)(::x10::lang::Runtime::FMGL(NTHREADS__get)())));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::GMatrix__ComputePlace::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::GMatrix__ComputePlace::_deserializer);

void au::edu::anu::qm::GMatrix__ComputePlace::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(density));
    buf.write(this->FMGL(mol));
    buf.write(this->FMGL(gMatrixContribution));
    buf.write(this->FMGL(jMatrixContribution));
    buf.write(this->FMGL(kMatrixContribution));
    buf.write(this->FMGL(qCut));
    buf.write(this->FMGL(dCut));
    buf.write(this->FMGL(maxEst));
    buf.write(this->FMGL(thresh2));
    buf.write(this->FMGL(thresh));
    buf.write(this->FMGL(computeThreads));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::GMatrix__ComputePlace::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::GMatrix__ComputePlace* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix__ComputePlace>()) ::au::edu::anu::qm::GMatrix__ComputePlace();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::GMatrix__ComputePlace::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(density) = buf.read< ::au::edu::anu::qm::Density*>();
    FMGL(mol) = buf.read< ::au::edu::anu::chem::Molecule< ::au::edu::anu::qm::QMAtom*>*>();
    FMGL(gMatrixContribution) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(jMatrixContribution) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(kMatrixContribution) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(qCut) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(dCut) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(maxEst) = buf.read<x10_double>();
    FMGL(thresh2) = buf.read<x10_double>();
    FMGL(thresh) = buf.read<x10_double>();
    FMGL(computeThreads) = buf.read< ::x10::lang::Rail< ::au::edu::anu::qm::GMatrix__ComputeThread* >*>();
}

::x10aux::RuntimeType au::edu::anu::qm::GMatrix__ComputePlace::rtt;
void au::edu::anu::qm::GMatrix__ComputePlace::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.GMatrix.ComputePlace",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::GMatrix__ComputePlace_Strings::sl__149066("!(x$60906.M == t$60905.M && x$60906.N == t$60905.N)");
::x10::lang::String au::edu::anu::qm::GMatrix__ComputePlace_Strings::sl__149067("!(x$60940.M == t$60939.M && x$60940.N == t$60939.N)");
::x10::lang::String au::edu::anu::qm::GMatrix__ComputePlace_Strings::sl__149065("\tmaxDen %.4g\n");

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__ComputePlace__closure__20>au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__ComputePlace__closure__20::__apply, &au_edu_anu_qm_GMatrix__ComputePlace__closure__20::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__ComputePlace__closure__20::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_qm_GMatrix__ComputePlace__closure__21>au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_qm_GMatrix__ComputePlace__closure__21::__apply, &au_edu_anu_qm_GMatrix__ComputePlace__closure__21::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_qm_GMatrix__ComputePlace__closure__21::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of GMatrix$ComputePlace */
/*************************************************/
/*************************************************/
/* START of GMatrix$ComputeThread */
#include <au/edu/anu/qm/GMatrix__ComputeThread.h>

#include <x10/lang/Boolean.h>
#include <au/edu/anu/qm/ContractedGaussian.h>
#include <au/edu/anu/qm/ShellList.h>
#include <x10/lang/Double.h>
#include <au/edu/anu/qm/Density.h>
#include <au/edu/anu/qm/TwoElectronIntegrals.h>
#include <x10/matrix/DenseMatrix.h>
#include <x10/lang/Long.h>
#include <au/edu/anu/qm/BasisFunctions.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <au/edu/anu/qm/Power.h>
#include <x10/matrix/Matrix.h>
#include <x10x/vector/Point3d.h>
#include <x10/lang/Math.h>
#include <x10/lang/Place.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Zero.h>

//#line 839 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 840 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 842 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 843 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 845 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 846 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 847 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 848 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 849 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 850 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 851 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"

//#line 853 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputeThread::_constructor(x10_long N, ::au::edu::anu::qm::BasisFunctions bfs,
                                                            ::x10::matrix::DenseMatrix* qCut,
                                                            ::x10::matrix::DenseMatrix* dCut,
                                                            x10_double omega,
                                                            x10_double thresh) {
    
    //#line 838 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->au::edu::anu::qm::GMatrix__ComputeThread::__fieldInitializers_au_edu_anu_qm_GMatrix_ComputeThread();
    
    //#line 854 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ShellList shellList = bfs->FMGL(shellList);
    
    //#line 855 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(thresh) = thresh;
    
    //#line 856 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(twoEI) = (__extension__ ({
        ::au::edu::anu::qm::TwoElectronIntegrals* alloc__61447 =
           (new (::x10aux::alloc_z< ::au::edu::anu::qm::TwoElectronIntegrals>()) ::au::edu::anu::qm::TwoElectronIntegrals());
        (alloc__61447)->::au::edu::anu::qm::TwoElectronIntegrals::_constructor(
          shellList->FMGL(maxam), bfs->au::edu::anu::qm::BasisFunctions::getNormalizationFactors(),
          omega, thresh);
        alloc__61447;
    }))
    ;
    
    //#line 857 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(shellList) = shellList;
    
    //#line 858 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(qCut) = qCut;
    
    //#line 859 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(dCut) = dCut;
    
    //#line 861 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(jMat) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61448 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61448)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61448;
    }))
    ;
    
    //#line 862 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(kMat) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__61449 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__61449)->::x10::matrix::DenseMatrix::_constructor(
          N, N);
        alloc__61449;
    }))
    ;
}
::au::edu::anu::qm::GMatrix__ComputeThread* au::edu::anu::qm::GMatrix__ComputeThread::_make(
  x10_long N, ::au::edu::anu::qm::BasisFunctions bfs, ::x10::matrix::DenseMatrix* qCut,
  ::x10::matrix::DenseMatrix* dCut, x10_double omega, x10_double thresh)
{
    ::au::edu::anu::qm::GMatrix__ComputeThread* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix__ComputeThread>()) ::au::edu::anu::qm::GMatrix__ComputeThread();
    this_->_constructor(N, bfs, qCut, dCut, omega, thresh);
    return this_;
}



//#line 865 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputeThread::reset(::au::edu::anu::qm::Density* density,
                                                     x10_double thresh2) {
    
    //#line 866 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(density) = density;
    
    //#line 867 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(jMat))->reset();
    
    //#line 868 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(kMat))->reset();
    
    //#line 869 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(thresh2) = thresh2;
}

//#line 872 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
void au::edu::anu::qm::GMatrix__ComputeThread::compute(::au::edu::anu::qm::Density* density) {
    
    //#line 873 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::x10aux::nullCheck(this->FMGL(twoEI))->compute2EAndRecord(
      this->FMGL(i), this->FMGL(j), this->FMGL(k), this->FMGL(l),
      this->FMGL(shellList), this->FMGL(jMat), this->FMGL(kMat),
      density);
    {
        
        //#line 877 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::CheckedThrowable* throwable__101117 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                ::x10::lang::Runtime::enterAtomic();
                {
                    this->FMGL(computing) = false;
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc109) {
            {
                ::x10::lang::CheckedThrowable* formal__101118 =
                  __exc109;
                {
                    throwable__101117 = formal__101118;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__101117, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101117))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__101117));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__101117, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101117)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__101117));
            }
            
        }
        
    }
}

//#line 880 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputeThread::computeSingle(
  ::au::edu::anu::qm::ContractedGaussian i, ::au::edu::anu::qm::ContractedGaussian j,
  ::au::edu::anu::qm::ContractedGaussian k, ::au::edu::anu::qm::ContractedGaussian l,
  ::au::edu::anu::qm::Density* density) {
    
    //#line 883 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return ((x10_long)(::x10aux::nullCheck(this->FMGL(twoEI))->compute2EAndRecord(
                         i, j, k, l, this->FMGL(shellList),
                         this->FMGL(jMat), this->FMGL(kMat),
                         density)));
    
}

//#line 888 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputeThread::computeSingle2(
  ::au::edu::anu::qm::ContractedGaussian i, ::au::edu::anu::qm::ContractedGaussian j,
  ::au::edu::anu::qm::ContractedGaussian k, ::au::edu::anu::qm::ContractedGaussian l,
  x10_double radiusABSquared, x10_int aAng, x10_int bAng,
  x10_int cAng, x10_int dAng, x10_int angMomAB, x10_int aStrt,
  x10_int bStrt, x10_int cStrt, x10_int dStrt, x10_int aLim,
  x10_int bLim, ::au::edu::anu::qm::Density* density) {
    
    //#line 895 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return ((x10_long)(::x10aux::nullCheck(this->FMGL(twoEI))->compute2EAndRecord2(
                         i, j, k, l, this->FMGL(shellList),
                         this->FMGL(jMat), this->FMGL(kMat),
                         density, radiusABSquared, aAng, bAng,
                         cAng, dAng, angMomAB, aStrt, bStrt,
                         cStrt, dStrt, aLim, bLim)));
    
}

//#line 904 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_boolean au::edu::anu::qm::GMatrix__ComputeThread::setValue(
  ::au::edu::anu::qm::ContractedGaussian i, ::au::edu::anu::qm::ContractedGaussian j,
  ::au::edu::anu::qm::ContractedGaussian k, ::au::edu::anu::qm::ContractedGaussian l) {
    
    //#line 906 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    if (this->FMGL(computing)) {
        return false;
        
    }
    
    //#line 908 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(i) = i;
    
    //#line 909 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(j) = j;
    
    //#line 910 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(k) = k;
    
    //#line 911 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    this->FMGL(l) = l;
    {
        
        //#line 912 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
        ::x10::lang::CheckedThrowable* throwable__101120 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                ::x10::lang::Runtime::enterAtomic();
                {
                    this->FMGL(computing) = true;
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc113) {
            {
                ::x10::lang::CheckedThrowable* formal__101121 =
                  __exc113;
                {
                    throwable__101120 = formal__101121;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__101120, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__101120))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__101120));
            }
            
        }
        if (true) {
            ::x10::lang::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__101120, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__101120)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__101120));
            }
            
        }
        
    }
    
    //#line 914 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return true;
    
}

//#line 917 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputeThread::computeOneShellPair(
  x10_long shellPair, x10_int nPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives) {
    
    //#line 918 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long a = ((shellPair) / ::x10aux::zeroCheck(((x10_long)(nPrimitives))));
    
    //#line 919 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long b = ((shellPair) % ::x10aux::zeroCheck(((x10_long)(nPrimitives))));
    
    //#line 921 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian aFunc = ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                                                     a);
    
    //#line 922 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    ::au::edu::anu::qm::ContractedGaussian bFunc = ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                                                     b);
    
    //#line 923 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return this->computeOneShellPair(aFunc, bFunc, nPrimitives,
                                     shellPrimitives);
    
}

//#line 926 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputeThread::computeOneShellPair(
  ::au::edu::anu::qm::ContractedGaussian aFunc, ::au::edu::anu::qm::ContractedGaussian bFunc,
  x10_int nPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives) {
    
    //#line 927 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long totInt = ((x10_long)0ll);
    
    //#line 929 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aStrt = aFunc->FMGL(intIndex);
    
    //#line 930 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bStrt = bFunc->FMGL(intIndex);
    
    //#line 931 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__96713 = aFunc->FMGL(power);
        this__96713->FMGL(maxam);
    }))
    ;
    
    //#line 932 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__96714 = bFunc->FMGL(power);
        this__96714->FMGL(maxam);
    }))
    ;
    
    //#line 934 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aa = ((aStrt) + (aAng));
    
    //#line 935 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bb = ((bStrt) + (bAng));
    
    //#line 937 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    if (((aa) < (bb))) {
        return ((x10_long)0ll);
        
    }
    
    //#line 940 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    if ((((__extension__ ({
            ::x10::matrix::DenseMatrix* this__96717 = this->FMGL(qCut);
            
            //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__96715 = ((x10_long)(aFunc->FMGL(intIndex)));
            x10_long y__96716 = ((x10_long)(bFunc->FMGL(intIndex)));
            ::x10aux::nullCheck(::x10aux::nullCheck(this__96717)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
              ((((y__96716) * (::x10aux::nullCheck(this__96717)->FMGL(M)))) + (x__96715)));
        }))
        ) < (this->FMGL(thresh2)))) {
        return ((x10_long)0ll);
        
    }
    
    //#line 942 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int angMomAB = ((aAng) + (bAng));
    
    //#line 943 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aLim = ((((((aAng) + (((x10_int)1)))) * (((aAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 944 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bLim = ((((((bAng) + (((x10_int)1)))) * (((bAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 946 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_double radiusABSquared = (__extension__ ({
        
        //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::ContractedGaussian cg__96718 =
          bFunc;
        (__extension__ ({
            ::x10x::vector::Point3d this__96723 = aFunc->FMGL(origin);
            
            //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ::x10x::vector::Point3d b__96719 = cg__96718->FMGL(origin);
            x10_double ret__96724;
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double di__100883 = ((this__96723->FMGL(i)) - (b__96719->FMGL(i)));
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dj__100884 = ((this__96723->FMGL(j)) - (b__96719->FMGL(j)));
            
            //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            x10_double dk__100885 = ((this__96723->FMGL(k)) - (b__96719->FMGL(k)));
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
            ret__96724 = ((((((di__100883) * (di__100883))) + (((dj__100884) * (dj__100884))))) + (((dk__100885) * (dk__100885))));
            ret__96724;
        }))
        ;
    }))
    ;
    
    //#line 948 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int i__61859max__100928 = ((nPrimitives) - (((x10_int)1)));
    {
        x10_int i__100929;
        for (i__100929 = ((x10_int)0); ((i__100929) <= (i__61859max__100928));
             i__100929 = ((i__100929) + (((x10_int)1)))) {
            x10_int c__100930 = i__100929;
            
            //#line 949 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::ContractedGaussian cFunc__100923 =
              ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                ((x10_long)(c__100930)));
            
            //#line 950 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int cStrt__100924 = cFunc__100923->FMGL(intIndex);
            
            //#line 951 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int cAng__100925 = (__extension__ ({
                
                //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                ::au::edu::anu::qm::Power this__100926 = cFunc__100923->FMGL(power);
                this__100926->FMGL(maxam);
            }))
            ;
            
            //#line 952 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int cc__100927 = ((cStrt__100924) + (cAng__100925));
            
            //#line 954 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            if (((aa) >= (cc__100927))) {
                
                //#line 955 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_int i__61841max__100920 = ((nPrimitives) - (((x10_int)1)));
                {
                    x10_int i__100921;
                    for (i__100921 = ((x10_int)0); ((i__100921) <= (i__61841max__100920));
                         i__100921 = ((i__100921) + (((x10_int)1))))
                    {
                        x10_int d__100922 = i__100921;
                        
                        //#line 956 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        ::au::edu::anu::qm::ContractedGaussian dFunc__100886 =
                          ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                            ((x10_long)(d__100922)));
                        
                        //#line 957 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        x10_int dStrt__100887 = dFunc__100886->FMGL(intIndex);
                        
                        //#line 958 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        x10_int dAng__100888 = (__extension__ ({
                            
                            //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                            ::au::edu::anu::qm::Power this__100889 =
                              dFunc__100886->FMGL(power);
                            this__100889->FMGL(maxam);
                        }))
                        ;
                        
                        //#line 959 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        x10_int dd__100890 = ((dStrt__100887) + (dAng__100888));
                        
                        //#line 961 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                        if (((cc__100927) >= (dd__100890)))
                        {
                            
                            //#line 962 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_double maxDCut__100891 = ::x10::lang::MathNatives::fmax((__extension__ ({
                                ::x10::matrix::DenseMatrix* this__100892 =
                                  this->FMGL(dCut);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100893 = ((x10_long)(aFunc->FMGL(intIndex)));
                                x10_long y__100894 = ((x10_long)(bFunc->FMGL(intIndex)));
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100892)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100894) * (::x10aux::nullCheck(this__100892)->FMGL(M)))) + (x__100893)));
                            }))
                            ,(__extension__ ({
                                ::x10::matrix::DenseMatrix* this__100895 =
                                  this->FMGL(dCut);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100896 = ((x10_long)(cFunc__100923->FMGL(intIndex)));
                                x10_long y__100897 = ((x10_long)(dFunc__100886->FMGL(intIndex)));
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100895)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100897) * (::x10aux::nullCheck(this__100895)->FMGL(M)))) + (x__100896)));
                            }))
                            );
                            
                            //#line 963 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_double maxDCut__100898 = ((0.25) * (::x10::lang::MathNatives::fmax((__extension__ ({
                                ::x10::matrix::DenseMatrix* this__100899 =
                                  this->FMGL(dCut);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100900 = ((x10_long)(cFunc__100923->FMGL(intIndex)));
                                x10_long y__100901 = ((x10_long)(bFunc->FMGL(intIndex)));
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100899)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100901) * (::x10aux::nullCheck(this__100899)->FMGL(M)))) + (x__100900)));
                            }))
                            ,(__extension__ ({
                                ::x10::matrix::DenseMatrix* this__100902 =
                                  this->FMGL(dCut);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100903 = ((x10_long)(aFunc->FMGL(intIndex)));
                                x10_long y__100904 = ((x10_long)(dFunc__100886->FMGL(intIndex)));
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100902)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100904) * (::x10aux::nullCheck(this__100902)->FMGL(M)))) + (x__100903)));
                            }))
                            )));
                            
                            //#line 964 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_double maxDCut__100905 = ((0.25) * (::x10::lang::MathNatives::fmax((__extension__ ({
                                ::x10::matrix::DenseMatrix* this__100906 =
                                  this->FMGL(dCut);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100907 = ((x10_long)(cFunc__100923->FMGL(intIndex)));
                                x10_long y__100908 = ((x10_long)(aFunc->FMGL(intIndex)));
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100906)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100908) * (::x10aux::nullCheck(this__100906)->FMGL(M)))) + (x__100907)));
                            }))
                            ,(__extension__ ({
                                ::x10::matrix::DenseMatrix* this__100909 =
                                  this->FMGL(dCut);
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__100910 = ((x10_long)(bFunc->FMGL(intIndex)));
                                x10_long y__100911 = ((x10_long)(dFunc__100886->FMGL(intIndex)));
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__100909)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__100911) * (::x10aux::nullCheck(this__100909)->FMGL(M)))) + (x__100910)));
                            }))
                            )));
                            
                            //#line 965 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_double maxDCut__100912 = ::x10::lang::MathNatives::fmax(maxDCut__100898,maxDCut__100905);
                            
                            //#line 966 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            x10_double maxDCut__100913 = ::x10::lang::MathNatives::fmax(maxDCut__100912,maxDCut__100891);
                            
                            //#line 968 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            if ((((((((__extension__ ({
                                    ::x10::matrix::DenseMatrix* this__100914 =
                                      this->FMGL(qCut);
                                    
                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    x10_long x__100915 = ((x10_long)(aFunc->FMGL(intIndex)));
                                    x10_long y__100916 = ((x10_long)(bFunc->FMGL(intIndex)));
                                    ::x10aux::nullCheck(::x10aux::nullCheck(this__100914)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                      ((((y__100916) * (::x10aux::nullCheck(this__100914)->FMGL(M)))) + (x__100915)));
                                }))
                                ) * ((__extension__ ({
                                    ::x10::matrix::DenseMatrix* this__100917 =
                                      this->FMGL(qCut);
                                    
                                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                    x10_long x__100918 = ((x10_long)(cFunc__100923->FMGL(intIndex)));
                                    x10_long y__100919 = ((x10_long)(dFunc__100886->FMGL(intIndex)));
                                    ::x10aux::nullCheck(::x10aux::nullCheck(this__100917)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                      ((((y__100919) * (::x10aux::nullCheck(this__100917)->FMGL(M)))) + (x__100918)));
                                }))
                                ))) * (maxDCut__100913))) < (this->FMGL(thresh))))
                            {
                                
                                //#line 969 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                                continue;
                            }
                            
                            //#line 971 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                            totInt = ((totInt) + (this->computeSingle2(
                                                    aFunc,
                                                    bFunc,
                                                    cFunc__100923,
                                                    dFunc__100886,
                                                    radiusABSquared,
                                                    aAng,
                                                    bAng,
                                                    cAng__100925,
                                                    dAng__100888,
                                                    angMomAB,
                                                    aStrt,
                                                    bStrt,
                                                    cStrt__100924,
                                                    dStrt__100887,
                                                    aLim,
                                                    bLim,
                                                    this->FMGL(density))));
                        }
                        
                    }
                }
                
                //#line 977 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                             ::x10::lang::Place::FMGL(FIRST_PLACE__get)())))
                {
                    
                    //#line 981 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    ::x10::lang::Runtime::probe();
                }
                
            }
            
        }
    }
    
    //#line 985 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return totInt;
    
}

//#line 988 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
x10_long au::edu::anu::qm::GMatrix__ComputeThread::computeOneShellTriplet(
  ::au::edu::anu::qm::ContractedGaussian aFunc, ::au::edu::anu::qm::ContractedGaussian bFunc,
  ::au::edu::anu::qm::ContractedGaussian cFunc, x10_double radiusABSquared,
  x10_int nPrimitives, ::x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >* shellPrimitives,
  ::x10::matrix::DenseMatrix* qCut, ::x10::matrix::DenseMatrix* dCut) {
    
    //#line 989 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aStrt = aFunc->FMGL(intIndex);
    
    //#line 990 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__100685 = aFunc->FMGL(power);
        this__100685->FMGL(maxam);
    }))
    ;
    
    //#line 991 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bStrt = bFunc->FMGL(intIndex);
    
    //#line 992 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__100686 = bFunc->FMGL(power);
        this__100686->FMGL(maxam);
    }))
    ;
    
    //#line 994 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int cStrt = cFunc->FMGL(intIndex);
    
    //#line 995 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int cAng = (__extension__ ({
        
        //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
        ::au::edu::anu::qm::Power this__100687 = cFunc->FMGL(power);
        this__100687->FMGL(maxam);
    }))
    ;
    
    //#line 996 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int cc = ((cStrt) + (cAng));
    
    //#line 998 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int angMomAB = ((aAng) + (bAng));
    
    //#line 999 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int aLim = ((((((aAng) + (((x10_int)1)))) * (((aAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 1000 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int bLim = ((((((bAng) + (((x10_int)1)))) * (((bAng) + (((x10_int)2)))))) / ::x10aux::zeroCheck(((x10_int)2)));
    
    //#line 1002 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_long totInt = ((x10_long)0ll);
    
    //#line 1003 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    x10_int i__61877max__100957 = ((nPrimitives) - (((x10_int)1)));
    {
        x10_int i__100958;
        for (i__100958 = ((x10_int)0); ((i__100958) <= (i__61877max__100957));
             i__100958 = ((i__100958) + (((x10_int)1)))) {
            x10_int d__100959 = i__100958;
            
            //#line 1004 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            ::au::edu::anu::qm::ContractedGaussian dFunc__100931 =
              ::x10aux::nullCheck(shellPrimitives)->x10::lang::Rail< ::au::edu::anu::qm::ContractedGaussian >::__apply(
                ((x10_long)(d__100959)));
            
            //#line 1005 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int dStrt__100932 = dFunc__100931->FMGL(intIndex);
            
            //#line 1006 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int dAng__100933 = (__extension__ ({
                
                //#line 49 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/ContractedGaussian.x10"
                ::au::edu::anu::qm::Power this__100934 = dFunc__100931->FMGL(power);
                this__100934->FMGL(maxam);
            }))
            ;
            
            //#line 1007 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            x10_int dd__100935 = ((dStrt__100932) + (dAng__100933));
            
            //#line 1008 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
            if (((cc) >= (dd__100935))) {
                
                //#line 1009 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_double maxDCut__100936 = ::x10::lang::MathNatives::fmax((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100937 = ((x10_long)(aStrt));
                    x10_long y__100938 = ((x10_long)(bStrt));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__100938) * (::x10aux::nullCheck(dCut)->FMGL(M)))) + (x__100937)));
                }))
                ,(__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100939 = ((x10_long)(cStrt));
                    x10_long y__100940 = ((x10_long)(dStrt__100932));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__100940) * (::x10aux::nullCheck(dCut)->FMGL(M)))) + (x__100939)));
                }))
                );
                
                //#line 1010 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_double maxDCut__100941 = ((0.25) * (::x10::lang::MathNatives::fmax((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100942 = ((x10_long)(cStrt));
                    x10_long y__100943 = ((x10_long)(bStrt));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__100943) * (::x10aux::nullCheck(dCut)->FMGL(M)))) + (x__100942)));
                }))
                ,(__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100944 = ((x10_long)(aStrt));
                    x10_long y__100945 = ((x10_long)(dStrt__100932));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__100945) * (::x10aux::nullCheck(dCut)->FMGL(M)))) + (x__100944)));
                }))
                )));
                
                //#line 1011 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_double maxDCut__100946 = ((0.25) * (::x10::lang::MathNatives::fmax((__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100947 = ((x10_long)(cStrt));
                    x10_long y__100948 = ((x10_long)(aStrt));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__100948) * (::x10aux::nullCheck(dCut)->FMGL(M)))) + (x__100947)));
                }))
                ,(__extension__ ({
                    
                    //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__100949 = ((x10_long)(bStrt));
                    x10_long y__100950 = ((x10_long)(dStrt__100932));
                    ::x10aux::nullCheck(::x10aux::nullCheck(dCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                      ((((y__100950) * (::x10aux::nullCheck(dCut)->FMGL(M)))) + (x__100949)));
                }))
                )));
                
                //#line 1012 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_double maxDCut__100951 = ::x10::lang::MathNatives::fmax(maxDCut__100941,maxDCut__100946);
                
                //#line 1013 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                x10_double maxDCut__100952 = ::x10::lang::MathNatives::fmax(maxDCut__100951,maxDCut__100936);
                
                //#line 1015 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                if ((((((((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100953 = ((x10_long)(aFunc->FMGL(intIndex)));
                        x10_long y__100954 = ((x10_long)(bFunc->FMGL(intIndex)));
                        ::x10aux::nullCheck(::x10aux::nullCheck(qCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100954) * (::x10aux::nullCheck(qCut)->FMGL(M)))) + (x__100953)));
                    }))
                    ) * ((__extension__ ({
                        
                        //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                        x10_long x__100955 = ((x10_long)(cStrt));
                        x10_long y__100956 = ((x10_long)(dStrt__100932));
                        ::x10aux::nullCheck(::x10aux::nullCheck(qCut)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                          ((((y__100956) * (::x10aux::nullCheck(qCut)->FMGL(M)))) + (x__100955)));
                    }))
                    ))) * (maxDCut__100952))) < (this->FMGL(thresh))))
                {
                    
                    //#line 1016 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                    continue;
                }
                
                //#line 1018 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
                totInt = ((totInt) + (this->computeSingle2(
                                        aFunc, bFunc, cFunc,
                                        dFunc__100931, radiusABSquared,
                                        aAng, bAng, cAng,
                                        dAng__100933, angMomAB,
                                        aStrt, bStrt, cStrt,
                                        dStrt__100932, aLim,
                                        bLim, this->FMGL(density))));
            }
            
        }
    }
    
    //#line 1024 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
    return totInt;
    
}

//#line 1027 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMatrix__ComputeThread::getJMat(
  ) {
    return this->FMGL(jMat);
    
}

//#line 1028 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::x10::matrix::DenseMatrix* au::edu::anu::qm::GMatrix__ComputeThread::getKMat(
  ) {
    return this->FMGL(kMat);
    
}

//#line 838 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/GMatrix.x10"
::au::edu::anu::qm::GMatrix__ComputeThread* au::edu::anu::qm::GMatrix__ComputeThread::au__edu__anu__qm__GMatrix__ComputeThread____this__au__edu__anu__qm__GMatrix__ComputeThread(
  ) {
    return this;
    
}
void au::edu::anu::qm::GMatrix__ComputeThread::__fieldInitializers_au_edu_anu_qm_GMatrix_ComputeThread(
  ) {
    this->FMGL(density) = (::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Density*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(computing) = false;
    this->FMGL(i) = ::x10aux::zeroValue< ::au::edu::anu::qm::ContractedGaussian >();
    this->FMGL(j) = ::x10aux::zeroValue< ::au::edu::anu::qm::ContractedGaussian >();
    this->FMGL(k) = ::x10aux::zeroValue< ::au::edu::anu::qm::ContractedGaussian >();
    this->FMGL(l) = ::x10aux::zeroValue< ::au::edu::anu::qm::ContractedGaussian >();
    this->FMGL(thresh2) = 0.0;
    this->FMGL(thresh) = 0.0;
}
const ::x10aux::serialization_id_t au::edu::anu::qm::GMatrix__ComputeThread::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::GMatrix__ComputeThread::_deserializer);

void au::edu::anu::qm::GMatrix__ComputeThread::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(density));
    buf.write(this->FMGL(computing));
    buf.write(this->FMGL(i));
    buf.write(this->FMGL(j));
    buf.write(this->FMGL(k));
    buf.write(this->FMGL(l));
    buf.write(this->FMGL(twoEI));
    buf.write(this->FMGL(shellList));
    buf.write(this->FMGL(jMat));
    buf.write(this->FMGL(kMat));
    buf.write(this->FMGL(qCut));
    buf.write(this->FMGL(dCut));
    buf.write(this->FMGL(thresh2));
    buf.write(this->FMGL(thresh));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::GMatrix__ComputeThread::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::GMatrix__ComputeThread* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::GMatrix__ComputeThread>()) ::au::edu::anu::qm::GMatrix__ComputeThread();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::GMatrix__ComputeThread::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(density) = buf.read< ::au::edu::anu::qm::Density*>();
    FMGL(computing) = buf.read<x10_boolean>();
    FMGL(i) = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
    FMGL(j) = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
    FMGL(k) = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
    FMGL(l) = buf.read< ::au::edu::anu::qm::ContractedGaussian>();
    FMGL(twoEI) = buf.read< ::au::edu::anu::qm::TwoElectronIntegrals*>();
    FMGL(shellList) = buf.read< ::au::edu::anu::qm::ShellList>();
    FMGL(jMat) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(kMat) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(qCut) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(dCut) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(thresh2) = buf.read<x10_double>();
    FMGL(thresh) = buf.read<x10_double>();
}

::x10aux::RuntimeType au::edu::anu::qm::GMatrix__ComputeThread::rtt;
void au::edu::anu::qm::GMatrix__ComputeThread::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.GMatrix.ComputeThread",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of GMatrix$ComputeThread */
/*************************************************/
