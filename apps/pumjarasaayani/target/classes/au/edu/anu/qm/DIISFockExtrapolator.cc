/*************************************************/
/* START of DIISFockExtrapolator */
#include <au/edu/anu/qm/DIISFockExtrapolator.h>

#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/util/ArrayList.h>
#include <au/edu/anu/qm/Fock.h>
#include <x10/matrix/Vector.h>
#include <x10/matrix/DenseMatrix.h>
#include <au/edu/anu/qm/JobDefaults.h>
#include <au/edu/anu/qm/Overlap.h>
#include <au/edu/anu/qm/Density.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/matrix/Matrix.h>
#include <x10/matrix/lapack/DenseMatrixLAPACK.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 33 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 36 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 37 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 39 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
void au::edu::anu::qm::DIISFockExtrapolator::_constructor(x10_long N) {
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    FMGL(N) = N;
    
    //#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::au::edu::anu::qm::DIISFockExtrapolator* this__148800 = this;
    ::x10aux::nullCheck(this__148800)->FMGL(diisStep) = ((x10_int)0);
    ::x10aux::nullCheck(this__148800)->FMGL(nondiisStep) = ((x10_int)0);
    ::x10aux::nullCheck(this__148800)->FMGL(diisStarted) = false;
    ::x10aux::nullCheck(this__148800)->FMGL(converged) = false;
    ::x10aux::nullCheck(this__148800)->FMGL(oldFock) = (::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Fock*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(fockMatrixList) = (__extension__ ({
        ::x10::util::ArrayList< ::au::edu::anu::qm::Fock*>* alloc__108430 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::qm::Fock*> >()) ::x10::util::ArrayList< ::au::edu::anu::qm::Fock*>());
        (alloc__108430)->::x10::util::ArrayList< ::au::edu::anu::qm::Fock*>::_constructor();
        alloc__108430;
    }))
    ;
    
    //#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(errorVectorList) = (__extension__ ({
        ::x10::util::ArrayList< ::x10::matrix::Vector*>* alloc__108431 = 
        (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::matrix::Vector*> >()) ::x10::util::ArrayList< ::x10::matrix::Vector*>());
        (alloc__108431)->::x10::util::ArrayList< ::x10::matrix::Vector*>::_constructor();
        alloc__108431;
    }))
    ;
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(FPS) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__108432 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__108432)->::x10::matrix::DenseMatrix::_constructor(N, N);
        alloc__108432;
    }))
    ;
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(SPF) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__108433 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__108433)->::x10::matrix::DenseMatrix::_constructor(N, N);
        alloc__108433;
    }))
    ;
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(scratch) = (__extension__ ({
        ::x10::matrix::DenseMatrix* alloc__108434 =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
        (alloc__108434)->::x10::matrix::DenseMatrix::_constructor(N, N);
        alloc__108434;
    }))
    ;
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::au::edu::anu::qm::JobDefaults* jd = ::au::edu::anu::qm::JobDefaults::FMGL(_theInstance__get)();
    
    //#line 60 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(diisStartThreshold) = jd->FMGL(diisStartThreshold);
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(diisMaxError) = jd->FMGL(diisConvergenceThreshold);
    
    //#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(diisSubspaceSize) = jd->FMGL(diisSubspaceSize);
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(nondiisStep) = ((x10_int)0);
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(diisStep) = ((x10_int)0);
    
    //#line 66 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(converged) = false;
}
::au::edu::anu::qm::DIISFockExtrapolator* au::edu::anu::qm::DIISFockExtrapolator::_make(
  x10_long N) {
    ::au::edu::anu::qm::DIISFockExtrapolator* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::DIISFockExtrapolator>()) ::au::edu::anu::qm::DIISFockExtrapolator();
    this_->_constructor(N);
    return this_;
}



//#line 69 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
x10_boolean au::edu::anu::qm::DIISFockExtrapolator::isConverged() {
    
    //#line 70 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    return this->FMGL(converged);
    
}

//#line 74 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
::au::edu::anu::qm::Fock* au::edu::anu::qm::DIISFockExtrapolator::next(
  ::au::edu::anu::qm::Fock* currentFock, ::au::edu::anu::qm::Overlap* overlap,
  ::au::edu::anu::qm::Density* density) {
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::au::edu::anu::qm::Fock* newFock =  (new (::x10aux::alloc_z< ::au::edu::anu::qm::Fock>()) ::au::edu::anu::qm::Fock());
    (newFock)->::au::edu::anu::qm::Fock::_constructor(this->FMGL(N));
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10aux::nullCheck(this->FMGL(scratch))->mult(reinterpret_cast< ::x10::matrix::DenseMatrix*>(currentFock),
                                                   reinterpret_cast< ::x10::matrix::DenseMatrix*>(density));
    
    //#line 80 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10aux::nullCheck(this->FMGL(FPS))->mult(this->FMGL(scratch),
                                               reinterpret_cast< ::x10::matrix::DenseMatrix*>(overlap));
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10aux::nullCheck(this->FMGL(scratch))->mult(reinterpret_cast< ::x10::matrix::DenseMatrix*>(overlap),
                                                   reinterpret_cast< ::x10::matrix::DenseMatrix*>(density));
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10aux::nullCheck(this->FMGL(SPF))->mult(this->FMGL(scratch),
                                               reinterpret_cast< ::x10::matrix::DenseMatrix*>(currentFock));
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10::matrix::Vector* errorVector =  (new (::x10aux::alloc_z< ::x10::matrix::Vector>()) ::x10::matrix::Vector());
    
    //#line 46 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/Vector.x10"
    ::x10::lang::Rail< x10_double >* x__148833 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(FPS))->__minus(
                                                                       this->FMGL(SPF)))->FMGL(d);
    
    //#line 47 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/Vector.x10"
    errorVector->FMGL(M) = (x10_long)(::x10aux::nullCheck(x__148833)->FMGL(size));
    
    //#line 42 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/Vector.x10"
    errorVector->FMGL(DUMMY_KEY) = ((x10_long)8888ll);
    
    //#line 48 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/Vector.x10"
    errorVector->FMGL(d) = x__148833;
    
    //#line 85 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    x10_double mxerr = errorVector->maxNorm();
    
    //#line 86 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    x10_long errorVectorSize = ::x10aux::nullCheck(this->FMGL(errorVectorList))->size();
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::au::edu::anu::qm::DIISFockExtrapolator_Strings::sl__150022),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(mxerr),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(errorVectorSize));
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    if (((mxerr) < (this->FMGL(diisMaxError)))) {
        
        //#line 90 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        this->FMGL(converged) = true;
        
        //#line 91 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        return currentFock;
        
    }
    
    //#line 94 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    if (((errorVectorSize) >= (((x10_long)(this->FMGL(diisSubspaceSize))))))
    {
        
        //#line 95 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        ::x10aux::nullCheck(this->FMGL(errorVectorList))->removeAt(
          ((x10_long)0ll));
        
        //#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        ::x10aux::nullCheck(this->FMGL(fockMatrixList))->removeAt(
          ((x10_long)0ll));
    }
    
    //#line 101 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10aux::nullCheck(this->FMGL(errorVectorList))->add(
      errorVector);
    
    //#line 102 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10aux::nullCheck(this->FMGL(fockMatrixList))->add(
      currentFock);
    
    //#line 104 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    x10_long noOfIterations = ::x10aux::nullCheck(this->FMGL(errorVectorList))->size();
    
    //#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    if ((!(this->FMGL(diisStarted)) && (((((mxerr) < (this->FMGL(diisStartThreshold))) &&
                                        ((this->FMGL(diisStep)) >= (((x10_int)0)))) ||
                                        ((this->FMGL(nondiisStep)) >= (((x10_int)2)))))))
    {
        
        //#line 108 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::au::edu::anu::qm::DIISFockExtrapolator_Strings::sl__150023)));
        
        //#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        this->FMGL(diisStarted) = true;
    }
    
    //#line 112 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    if (!(this->FMGL(diisStarted))) {
        
        //#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        this->FMGL(nondiisStep) = ((this->FMGL(nondiisStep)) + (((x10_int)1)));
        
        //#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
        if ((::x10aux::struct_equals(this->FMGL(oldFock),
                                     reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 115 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            this->FMGL(oldFock) = currentFock;
            
            //#line 117 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            return currentFock;
            
        } else {
            
            //#line 119 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            {
                x10_long i;
                for (i = ((x10_long)0ll); ((i) < (this->FMGL(N)));
                     i = ((i) + (((x10_long)1ll)))) {
                    
                    //#line 120 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
                    {
                        x10_long j;
                        for (j = ((x10_long)0ll); ((j) < (this->FMGL(N)));
                             j = ((j) + (((x10_long)1ll))))
                        {
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__148801 = i;
                            x10_long y__148802 = j;
                            x10_double v__148803 = (((((__extension__ ({
                                
                                //#line 121 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
                                ::x10::matrix::DenseMatrix* this__148804 =
                                  reinterpret_cast< ::x10::matrix::DenseMatrix*>(this->FMGL(oldFock));
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__148805 = i;
                                x10_long y__148806 = j;
                                ::x10aux::nullCheck(::x10aux::nullCheck(this__148804)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__148806) * (::x10aux::nullCheck(this__148804)->FMGL(M)))) + (x__148805)));
                            }))
                            ) * (0.5))) + ((((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__148807 = i;
                                x10_long y__148808 = j;
                                ::x10aux::nullCheck(::x10aux::nullCheck(currentFock)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__148808) * (::x10aux::nullCheck(currentFock)->FMGL(M)))) + (x__148807)));
                            }))
                            ) * (0.5))));
                            x10_double ret__148809;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(newFock->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__148802) * (newFock->FMGL(M)))) + (x__148801)),
                              v__148803);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148809 = v__148803;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148809;
                        }
                    }
                    
                }
            }
            
            //#line 125 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            this->FMGL(oldFock) = currentFock;
            
            //#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            return newFock;
            
        }
        
    }
    
    //#line 131 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    x10_long M = ((noOfIterations) + (((x10_long)1ll)));
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10::matrix::DenseMatrix* A =  (new (::x10aux::alloc_z< ::x10::matrix::DenseMatrix>()) ::x10::matrix::DenseMatrix());
    (A)->::x10::matrix::DenseMatrix::_constructor(M, M);
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10::matrix::Vector* B = ::x10::matrix::Vector::make(
                                 M);
    
    //#line 136 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfIterations));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 137 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((((x10_long)(j))) < (noOfIterations));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    x10_long x__148810 = ((x10_long)(i));
                    x10_long y__148811 = ((x10_long)(j));
                    x10_double v__148812 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(errorVectorList))->get(
                                                                 ((x10_long)(i))))->blasTransProduct(
                                             ::x10aux::nullCheck(this->FMGL(errorVectorList))->get(
                                               ((x10_long)(j))));
                    x10_double ret__148813;
                    
                    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ::x10aux::nullCheck(A->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                      ((((y__148811) * (A->FMGL(M)))) + (x__148810)),
                      v__148812);
                    
                    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__148813 = v__148812;
                    
                    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                    ret__148813;
                }
            }
            
        }
    }
    
    //#line 142 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (noOfIterations));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            x10_long x__148814 = noOfIterations;
            x10_long y__148815 = ((x10_long)(i));
            x10_double v__148816 = (__extension__ ({
                x10_long x__148817 = ((x10_long)(i));
                x10_long y__148818 = noOfIterations;
                x10_double ret__148819;
                
                //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ::x10aux::nullCheck(A->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                  ((((y__148818) * (A->FMGL(M)))) + (x__148817)),
                  -1.0);
                
                //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                ret__148819 = -1.0;
                ret__148819;
            }))
            ;
            x10_double ret__148820;
            
            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ::x10aux::nullCheck(A->FMGL(d))->x10::lang::Rail< x10_double >::__set(
              ((((y__148815) * (A->FMGL(M)))) + (x__148814)),
              v__148816);
            
            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__148820 = v__148816;
            
            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
            ret__148820;
            
            //#line 144 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            B->__set(((x10_long)(i)), 0.0);
        }
    }
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    x10_long x__148834 = noOfIterations;
    x10_long y__148835 = noOfIterations;
    x10_double ret__148836;
    
    //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ::x10aux::nullCheck(A->FMGL(d))->x10::lang::Rail< x10_double >::__set(
      ((((y__148835) * (A->FMGL(M)))) + (x__148834)), 0.0);
    
    //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__148836 = 0.0;
    
    //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
    ret__148836;
    
    //#line 148 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    B->__set(noOfIterations, -1.0);
    
    //#line 150 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    ::x10::lang::Rail< x10_int >* permutation = ::x10::lang::Rail< x10_int >::_make(M);
    
    //#line 151 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    x10_int result = ::x10::matrix::lapack::DenseMatrixLAPACK::solveLinearEquation(
                       A, B, permutation);
    
    //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (noOfIterations));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            ::au::edu::anu::qm::Fock* prevFock = ::x10aux::nullCheck(this->FMGL(fockMatrixList))->get(
                                                   i);
            
            //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(N)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
                    {
                        x10_long k;
                        for (k = ((x10_long)0ll); ((k) < (this->FMGL(N)));
                             k = ((k) + (((x10_long)1ll))))
                        {
                            
                            //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
                            ::au::edu::anu::qm::Fock* a__148825 =
                              newFock;
                            x10_long i__148826 = j;
                            x10_long i__148827 = k;
                            x10_double r__148828 = (((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__148829 = i__148826;
                                x10_long y__148830 = i__148827;
                                ::x10aux::nullCheck(a__148825->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__148830) * (a__148825->FMGL(M)))) + (x__148829)));
                            }))
                            ) + (((B->__apply(i)) * ((__extension__ ({
                                
                                //#line 425 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                                x10_long x__148831 = j;
                                x10_long y__148832 = k;
                                ::x10aux::nullCheck(::x10aux::nullCheck(prevFock)->FMGL(d))->x10::lang::Rail< x10_double >::__apply(
                                  ((((y__148832) * (::x10aux::nullCheck(prevFock)->FMGL(M)))) + (x__148831)));
                            }))
                            ))));
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            x10_long x__148821 = i__148826;
                            x10_long y__148822 = i__148827;
                            x10_double v__148823 = r__148828;
                            x10_double ret__148824;
                            
                            //#line 434 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ::x10aux::nullCheck(a__148825->FMGL(d))->x10::lang::Rail< x10_double >::__set(
                              ((((y__148822) * (a__148825->FMGL(M)))) + (x__148821)),
                              v__148823);
                            
                            //#line 435 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148824 = v__148823;
                            
                            //#line 433 "/u/qqiu/workspace/x10-trunk/x10.gml/lib/native_gml.jar:x10/matrix/DenseMatrix.x10"
                            ret__148824;
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    this->FMGL(diisStep) = ((this->FMGL(diisStep)) + (((x10_int)1)));
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
    return newFock;
    
}

//#line 28 "/localdisk/qqiu/workspace/anuchem/apps/pumjarasaayani/src/au/edu/anu/qm/DIISFockExtrapolator.x10"
::au::edu::anu::qm::DIISFockExtrapolator* au::edu::anu::qm::DIISFockExtrapolator::au__edu__anu__qm__DIISFockExtrapolator____this__au__edu__anu__qm__DIISFockExtrapolator(
  ) {
    return this;
    
}
void au::edu::anu::qm::DIISFockExtrapolator::__fieldInitializers_au_edu_anu_qm_DIISFockExtrapolator(
  ) {
    this->FMGL(diisStep) = ((x10_int)0);
    this->FMGL(nondiisStep) = ((x10_int)0);
    this->FMGL(diisStarted) = false;
    this->FMGL(converged) = false;
    this->FMGL(oldFock) = (::x10aux::class_cast_unchecked< ::au::edu::anu::qm::Fock*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t au::edu::anu::qm::DIISFockExtrapolator::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::qm::DIISFockExtrapolator::_deserializer);

void au::edu::anu::qm::DIISFockExtrapolator::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(diisStartThreshold));
    buf.write(this->FMGL(diisSubspaceSize));
    buf.write(this->FMGL(diisMaxError));
    buf.write(this->FMGL(fockMatrixList));
    buf.write(this->FMGL(errorVectorList));
    buf.write(this->FMGL(FPS));
    buf.write(this->FMGL(SPF));
    buf.write(this->FMGL(scratch));
    buf.write(this->FMGL(diisStep));
    buf.write(this->FMGL(nondiisStep));
    buf.write(this->FMGL(diisStarted));
    buf.write(this->FMGL(converged));
    buf.write(this->FMGL(oldFock));
    buf.write(this->FMGL(N));
    
}

::x10::lang::Reference* ::au::edu::anu::qm::DIISFockExtrapolator::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::qm::DIISFockExtrapolator* this_ = new (::x10aux::alloc_z< ::au::edu::anu::qm::DIISFockExtrapolator>()) ::au::edu::anu::qm::DIISFockExtrapolator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::qm::DIISFockExtrapolator::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(diisStartThreshold) = buf.read<x10_double>();
    FMGL(diisSubspaceSize) = buf.read<x10_int>();
    FMGL(diisMaxError) = buf.read<x10_double>();
    FMGL(fockMatrixList) = buf.read< ::x10::util::ArrayList< ::au::edu::anu::qm::Fock*>*>();
    FMGL(errorVectorList) = buf.read< ::x10::util::ArrayList< ::x10::matrix::Vector*>*>();
    FMGL(FPS) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(SPF) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(scratch) = buf.read< ::x10::matrix::DenseMatrix*>();
    FMGL(diisStep) = buf.read<x10_int>();
    FMGL(nondiisStep) = buf.read<x10_int>();
    FMGL(diisStarted) = buf.read<x10_boolean>();
    FMGL(converged) = buf.read<x10_boolean>();
    FMGL(oldFock) = buf.read< ::au::edu::anu::qm::Fock*>();
    FMGL(N) = buf.read<x10_long>();
}

::x10aux::RuntimeType au::edu::anu::qm::DIISFockExtrapolator::rtt;
void au::edu::anu::qm::DIISFockExtrapolator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.qm.DIISFockExtrapolator",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::qm::DIISFockExtrapolator_Strings::sl__150022("   Max DIIS error = %.3e subspaceSize = %d\n");
::x10::lang::String au::edu::anu::qm::DIISFockExtrapolator_Strings::sl__150023("Starting DIIS...");

/* END of DIISFockExtrapolator */
/*************************************************/
