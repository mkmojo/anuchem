/*************************************************/
/* START of Matrix */
#include <x10x/matrix/Matrix.h>

#include <x10/lang/Double.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Long.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10x/xla/JacobiDiagonalizer.h>
#include <x10x/vector/Vector.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 27 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::_constructor(x10_long siz) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* this__11448 = this;
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    this->FMGL(mat) = (__extension__ ({
        ::x10::array::Array_2<x10_double>* alloc__6088 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_double> >()) ::x10::array::Array_2<x10_double>());
        (alloc__6088)->::x10::array::Array_2<x10_double>::_constructor(((siz) - (((x10_long)1ll))),
                                                                       ((siz) - (((x10_long)1ll))));
        alloc__6088;
    }))
    ;
}
::x10x::matrix::Matrix* x10x::matrix::Matrix::_make(x10_long siz)
{
    ::x10x::matrix::Matrix* this_ = new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix();
    this_->_constructor(siz);
    return this_;
}



//#line 43 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::_constructor(x10_long row, x10_long col) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* this__11449 = this;
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    this->FMGL(mat) = (__extension__ ({
        ::x10::array::Array_2<x10_double>* alloc__6089 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_double> >()) ::x10::array::Array_2<x10_double>());
        (alloc__6089)->::x10::array::Array_2<x10_double>::_constructor(
          ((row) - (((x10_long)1ll))), ((col) - (((x10_long)1ll))));
        alloc__6089;
    }))
    ;
}
::x10x::matrix::Matrix* x10x::matrix::Matrix::_make(x10_long row,
                                                    x10_long col)
{
    ::x10x::matrix::Matrix* this_ = new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix();
    this_->_constructor(row, col);
    return this_;
}



//#line 50 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::_constructor(::x10x::matrix::Matrix* source) {
    
    //#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* this__11450 = this;
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    this->FMGL(mat) = (__extension__ ({
        ::x10::array::Array_2<x10_double>* alloc__6090 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_double> >()) ::x10::array::Array_2<x10_double>());
        (alloc__6090)->::x10::array::Array_2<x10_double>::_constructor(
          ::x10aux::nullCheck(source)->getMatrix());
        alloc__6090;
    }))
    ;
}
::x10x::matrix::Matrix* x10x::matrix::Matrix::_make(::x10x::matrix::Matrix* source)
{
    ::x10x::matrix::Matrix* this_ = new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix();
    this_->_constructor(source);
    return this_;
}



//#line 54 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10::array::Array_2<x10_double>* x10x::matrix::Matrix::getMatrix(
  ) {
    return this->FMGL(mat);
    
}

//#line 55 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_long x10x::matrix::Matrix::getRowCount() {
    return ::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_1);
    
}

//#line 56 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_long x10x::matrix::Matrix::getColCount() {
    return ::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_2);
    
}

//#line 58 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_double x10x::matrix::Matrix::__apply(x10_long i0, x10_long i1) {
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* this__11453 = this->FMGL(mat);
    
    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    x10_long i__11454 = i0;
    x10_long j__11455 = i1;
    x10_double ret__11456;
    
    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__11456 = (::x10aux::nullCheck(this__11453)->FMGL(raw))->unchecked_apply((__extension__ ({
        
        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__11451 = i__11454;
        x10_long j__11452 = j__11455;
        ((j__11452) + (((i__11451) * (::x10aux::nullCheck(this__11453)->FMGL(numElems_2)))));
    }))
    );
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return ret__11456;
    
}

//#line 62 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_double x10x::matrix::Matrix::__set(x10_long i0, x10_long i1,
                                       x10_double v) {
    
    //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* this__11459 = this->FMGL(mat);
    
    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    x10_long i__11460 = i0;
    x10_long j__11461 = i1;
    x10_double v__11462 = v;
    x10_double ret__11463;
    
    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    (::x10aux::nullCheck(this__11459)->FMGL(raw))->unchecked_set((__extension__ ({
        
        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__11457 = i__11460;
        x10_long j__11458 = j__11461;
        ((j__11458) + (((i__11457) * (::x10aux::nullCheck(this__11459)->FMGL(numElems_2)))));
    }))
    , v__11462);
    
    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__11463 = v__11462;
    
    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__11463;
    
    //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return v;
    
}

//#line 70 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::symmetricOrthogonalization(
  ) {
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::xla::JacobiDiagonalizer* diag =  (new (::x10aux::alloc_z< ::x10x::xla::JacobiDiagonalizer>()) ::x10x::xla::JacobiDiagonalizer());
    
    //#line 25 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    diag->FMGL(eigenValuesVec) = (::x10aux::class_cast_unchecked< ::x10x::vector::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    diag->FMGL(eigenVectorsMat) = (::x10aux::class_cast_unchecked< ::x10x::matrix::Matrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    diag->FMGL(maxIterations) = ((x10_int)100);
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    diag->diagonalize(this);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long rowCount = this->getRowCount();
    
    //#line 75 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::lang::Rail< x10_double >* eigenValues = ::x10aux::nullCheck(diag->getEigenValues())->getVector();
    
    //#line 76 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* eigenVectors = diag->getEigenVectors();
    
    //#line 77 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* sHalf =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (sHalf)->::x10x::matrix::Matrix::_constructor(rowCount);
    
    //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long i__6111max__11471 = ((::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_1)) - (((x10_long)1ll)));
    {
        x10_long i__11472;
        for (i__11472 = ((x10_long)0ll); ((i__11472) <= (i__6111max__11471));
             i__11472 = ((i__11472) + (((x10_long)1ll))))
        {
            x10_long i__11473 = i__11472;
            
            //#line 80 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            ::x10::array::Array_2<x10_double>* this__11466 =
              sHalf->FMGL(mat);
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__11467 = i__11473;
            x10_long j__11468 = i__11473;
            x10_double v__11469 = ((1.0) / (::x10::lang::MathNatives::sqrt(::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                                             i__11473))));
            x10_double ret__11470;
            
            //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            (::x10aux::nullCheck(this__11466)->FMGL(raw))->unchecked_set((__extension__ ({
                
                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__11464 = i__11467;
                x10_long j__11465 = j__11468;
                ((j__11465) + (((i__11464) * (::x10aux::nullCheck(this__11466)->FMGL(numElems_2)))));
            }))
            , v__11469);
            
            //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__11470 = v__11469;
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__11470;
        }
    }
    
    //#line 83 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return sHalf->similarityTransformT(eigenVectors);
    
}

//#line 89 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::makeIdentity() {
    
    //#line 90 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10aux::nullCheck(this->FMGL(mat))->x10::array::Array_2<x10_double>::clear();
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long i__6129max__11480 = ((::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_1)) - (((x10_long)1ll)));
    {
        x10_long i__11481;
        for (i__11481 = ((x10_long)0ll); ((i__11481) <= (i__6129max__11480));
             i__11481 = ((i__11481) + (((x10_long)1ll))))
        {
            x10_long i__11482 = i__11481;
            
            //#line 92 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            ::x10::array::Array_2<x10_double>* this__11476 =
              this->FMGL(mat);
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__11477 = i__11482;
            x10_long j__11478 = i__11482;
            x10_double ret__11479;
            
            //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            (::x10aux::nullCheck(this__11476)->FMGL(raw))->unchecked_set((__extension__ ({
                
                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__11474 = i__11477;
                x10_long j__11475 = j__11478;
                ((j__11475) + (((i__11474) * (::x10aux::nullCheck(this__11476)->FMGL(numElems_2)))));
            }))
            , 1.0);
            
            //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__11479 = 1.0;
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__11479;
        }
    }
    
}

//#line 99 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::makeZero() {
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10aux::nullCheck(this->FMGL(mat))->x10::array::Array_2<x10_double>::clear();
}

//#line 106 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::similarityTransformT(
  ::x10x::matrix::Matrix* x) {
    
    //#line 107 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(x)->transpose())->mul(
                                 this))->mul(x);
    
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::similarityTransform(
  ::x10x::matrix::Matrix* x) {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return ::x10aux::nullCheck(::x10aux::nullCheck(x)->mul(
                                 this))->mul(::x10aux::nullCheck(x)->transpose());
    
}

//#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::mul(::x10x::matrix::Matrix* b) {
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N1 = ::x10aux::nullCheck(b)->getRowCount();
    
    //#line 124 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long M = ::x10aux::nullCheck(b)->getColCount();
    
    //#line 125 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* res =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (res)->::x10x::matrix::Matrix::_constructor(N, M);
    
    //#line 127 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11504 = res->FMGL(mat);
    x10_long j__6148max__11505 = ::x10aux::nullCheck(p__11504)->FMGL(numElems_2);
    x10_long i__6165max__11506 = ::x10aux::nullCheck(p__11504)->FMGL(numElems_1);
    {
        x10_long i__11507;
        for (i__11507 = ((x10_long)0ll); ((i__11507) < (i__6165max__11506));
             i__11507 = ((i__11507) + (((x10_long)1ll))))
        {
            x10_long i__11508 = i__11507;
            {
                x10_long j__11509;
                for (j__11509 = ((x10_long)0ll); ((j__11509) < (j__6148max__11505));
                     j__11509 = ((j__11509) + (((x10_long)1ll))))
                {
                    x10_long j__11510 = j__11509;
                    
                    //#line 128 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    x10_double cij__11494 = 0.0;
                    
                    //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    {
                        x10_long k__11495;
                        for (k__11495 = ((x10_long)0ll); ((k__11495) < (N1));
                             k__11495 = ((k__11495) + (((x10_long)1ll))))
                        {
                            
                            //#line 130 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                            cij__11494 = ((cij__11494) + ((((__extension__ ({
                                ::x10::array::Array_2<x10_double>* this__11496 =
                                  this->FMGL(mat);
                                
                                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__11497 = i__11508;
                                x10_long j__11498 = k__11495;
                                x10_double ret__11499;
                                
                                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__11499 = (::x10aux::nullCheck(this__11496)->FMGL(raw))->unchecked_apply((__extension__ ({
                                    
                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__11483 = i__11497;
                                    x10_long j__11484 = j__11498;
                                    ((j__11484) + (((i__11483) * (::x10aux::nullCheck(this__11496)->FMGL(numElems_2)))));
                                }))
                                );
                                ret__11499;
                            }))
                            ) * ((__extension__ ({
                                ::x10::array::Array_2<x10_double>* this__11500 =
                                  ::x10aux::nullCheck(b)->FMGL(mat);
                                
                                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__11501 = k__11495;
                                x10_long j__11502 = j__11510;
                                x10_double ret__11503;
                                
                                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__11503 = (::x10aux::nullCheck(this__11500)->FMGL(raw))->unchecked_apply((__extension__ ({
                                    
                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__11485 = i__11501;
                                    x10_long j__11486 = j__11502;
                                    ((j__11486) + (((i__11485) * (::x10aux::nullCheck(this__11500)->FMGL(numElems_2)))));
                                }))
                                );
                                ret__11503;
                            }))
                            ))));
                        }
                    }
                    
                    //#line 132 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11489 =
                      res->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11490 = i__11508;
                    x10_long j__11491 = j__11510;
                    x10_double v__11492 = cij__11494;
                    x10_double ret__11493;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11489)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11487 = i__11490;
                        x10_long j__11488 = j__11491;
                        ((j__11488) + (((i__11487) * (::x10aux::nullCheck(this__11489)->FMGL(numElems_2)))));
                    }))
                    , v__11492);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11493 = v__11492;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11493;
                }
            }
            
        }
    }
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return res;
    
}

//#line 142 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::mulInPlace(::x10x::matrix::Matrix* a,
                                      ::x10x::matrix::Matrix* b) {
    
    //#line 143 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N1 = ::x10aux::nullCheck(b)->getRowCount();
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11532 = this->FMGL(mat);
    x10_long j__6184max__11533 = ::x10aux::nullCheck(p__11532)->FMGL(numElems_2);
    x10_long i__6201max__11534 = ::x10aux::nullCheck(p__11532)->FMGL(numElems_1);
    {
        x10_long i__11535;
        for (i__11535 = ((x10_long)0ll); ((i__11535) < (i__6201max__11534));
             i__11535 = ((i__11535) + (((x10_long)1ll))))
        {
            x10_long i__11536 = i__11535;
            {
                x10_long j__11537;
                for (j__11537 = ((x10_long)0ll); ((j__11537) < (j__6184max__11533));
                     j__11537 = ((j__11537) + (((x10_long)1ll))))
                {
                    x10_long j__11538 = j__11537;
                    
                    //#line 146 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    x10_double cij__11522 = 0.0;
                    
                    //#line 147 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    {
                        x10_long k__11523;
                        for (k__11523 = ((x10_long)0ll); ((k__11523) < (N1));
                             k__11523 = ((k__11523) + (((x10_long)1ll))))
                        {
                            
                            //#line 148 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                            cij__11522 = ((cij__11522) + ((((__extension__ ({
                                ::x10::array::Array_2<x10_double>* this__11524 =
                                  ::x10aux::nullCheck(a)->FMGL(mat);
                                
                                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__11525 = i__11536;
                                x10_long j__11526 = k__11523;
                                x10_double ret__11527;
                                
                                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__11527 = (::x10aux::nullCheck(this__11524)->FMGL(raw))->unchecked_apply((__extension__ ({
                                    
                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__11511 = i__11525;
                                    x10_long j__11512 = j__11526;
                                    ((j__11512) + (((i__11511) * (::x10aux::nullCheck(this__11524)->FMGL(numElems_2)))));
                                }))
                                );
                                ret__11527;
                            }))
                            ) * ((__extension__ ({
                                ::x10::array::Array_2<x10_double>* this__11528 =
                                  ::x10aux::nullCheck(b)->FMGL(mat);
                                
                                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__11529 = k__11523;
                                x10_long j__11530 = j__11538;
                                x10_double ret__11531;
                                
                                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__11531 = (::x10aux::nullCheck(this__11528)->FMGL(raw))->unchecked_apply((__extension__ ({
                                    
                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__11513 = i__11529;
                                    x10_long j__11514 = j__11530;
                                    ((j__11514) + (((i__11513) * (::x10aux::nullCheck(this__11528)->FMGL(numElems_2)))));
                                }))
                                );
                                ret__11531;
                            }))
                            ))));
                        }
                    }
                    
                    //#line 150 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11517 =
                      this->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11518 = i__11536;
                    x10_long j__11519 = j__11538;
                    x10_double v__11520 = cij__11522;
                    x10_double ret__11521;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11517)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11515 = i__11518;
                        x10_long j__11516 = j__11519;
                        ((j__11516) + (((i__11515) * (::x10aux::nullCheck(this__11517)->FMGL(numElems_2)))));
                    }))
                    , v__11520);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11521 = v__11520;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11521;
                }
            }
            
        }
    }
    
}

//#line 157 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::mul(x10_double fac) {
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long M = this->getColCount();
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* res =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (res)->::x10x::matrix::Matrix::_constructor(N, M);
    
    //#line 162 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11554 = this->FMGL(mat);
    x10_long j__6220max__11555 = ::x10aux::nullCheck(p__11554)->FMGL(numElems_2);
    x10_long i__6237max__11556 = ::x10aux::nullCheck(p__11554)->FMGL(numElems_1);
    {
        x10_long i__11557;
        for (i__11557 = ((x10_long)0ll); ((i__11557) < (i__6237max__11556));
             i__11557 = ((i__11557) + (((x10_long)1ll))))
        {
            x10_long i__11558 = i__11557;
            {
                x10_long j__11559;
                for (j__11559 = ((x10_long)0ll); ((j__11559) < (j__6220max__11555));
                     j__11559 = ((j__11559) + (((x10_long)1ll))))
                {
                    x10_long j__11560 = j__11559;
                    
                    //#line 163 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* a__11547 =
                      this->FMGL(mat);
                    x10_long i__11548 = i__11558;
                    x10_long i__11549 = j__11560;
                    x10_double r__11550 = (((__extension__ ({
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11551 = i__11548;
                        x10_long j__11552 = i__11549;
                        x10_double ret__11553;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11553 = (::x10aux::nullCheck(a__11547)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11539 = i__11551;
                            x10_long j__11540 = j__11552;
                            ((j__11540) + (((i__11539) * (::x10aux::nullCheck(a__11547)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11553;
                    }))
                    ) * (fac));
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11543 = i__11548;
                    x10_long j__11544 = i__11549;
                    x10_double v__11545 = r__11550;
                    x10_double ret__11546;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(a__11547)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11541 = i__11543;
                        x10_long j__11542 = j__11544;
                        ((j__11542) + (((i__11541) * (::x10aux::nullCheck(a__11547)->FMGL(numElems_2)))));
                    }))
                    , v__11545);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11546 = v__11545;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11546;
                }
            }
            
        }
    }
    
    //#line 166 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return res;
    
}

//#line 173 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::add(::x10x::matrix::Matrix* x) {
    
    //#line 174 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 175 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long M = this->getColCount();
    
    //#line 176 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* res =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (res)->::x10x::matrix::Matrix::_constructor(N, M);
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11580 = this->FMGL(mat);
    x10_long j__6256max__11581 = ::x10aux::nullCheck(p__11580)->FMGL(numElems_2);
    x10_long i__6273max__11582 = ::x10aux::nullCheck(p__11580)->FMGL(numElems_1);
    {
        x10_long i__11583;
        for (i__11583 = ((x10_long)0ll); ((i__11583) < (i__6273max__11582));
             i__11583 = ((i__11583) + (((x10_long)1ll))))
        {
            x10_long i__11584 = i__11583;
            {
                x10_long j__11585;
                for (j__11585 = ((x10_long)0ll); ((j__11585) < (j__6256max__11581));
                     j__11585 = ((j__11585) + (((x10_long)1ll))))
                {
                    x10_long j__11586 = j__11585;
                    
                    //#line 178 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11567 =
                      res->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11568 = i__11584;
                    x10_long j__11569 = j__11586;
                    x10_double v__11570 = (((__extension__ ({
                        
                        //#line 178 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11571 =
                          this->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11572 = i__11584;
                        x10_long j__11573 = j__11586;
                        x10_double ret__11574;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11574 = (::x10aux::nullCheck(this__11571)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11561 = i__11572;
                            x10_long j__11562 = j__11573;
                            ((j__11562) + (((i__11561) * (::x10aux::nullCheck(this__11571)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11574;
                    }))
                    ) + ((__extension__ ({
                        
                        //#line 178 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11575 =
                          ::x10aux::nullCheck(x)->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11576 = i__11584;
                        x10_long j__11577 = j__11586;
                        x10_double ret__11578;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11578 = (::x10aux::nullCheck(this__11575)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11563 = i__11576;
                            x10_long j__11564 = j__11577;
                            ((j__11564) + (((i__11563) * (::x10aux::nullCheck(this__11575)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11578;
                    }))
                    ));
                    x10_double ret__11579;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11567)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11565 = i__11568;
                        x10_long j__11566 = j__11569;
                        ((j__11566) + (((i__11565) * (::x10aux::nullCheck(this__11567)->FMGL(numElems_2)))));
                    }))
                    , v__11570);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11579 = v__11570;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11579;
                }
            }
            
        }
    }
    
    //#line 181 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return res;
    
}

//#line 187 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::addInPlace(::x10x::matrix::Matrix* x) {
    
    //#line 188 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11606 = this->FMGL(mat);
    x10_long j__6292max__11607 = ::x10aux::nullCheck(p__11606)->FMGL(numElems_2);
    x10_long i__6309max__11608 = ::x10aux::nullCheck(p__11606)->FMGL(numElems_1);
    {
        x10_long i__11609;
        for (i__11609 = ((x10_long)0ll); ((i__11609) < (i__6309max__11608));
             i__11609 = ((i__11609) + (((x10_long)1ll))))
        {
            x10_long i__11610 = i__11609;
            {
                x10_long j__11611;
                for (j__11611 = ((x10_long)0ll); ((j__11611) < (j__6292max__11607));
                     j__11611 = ((j__11611) + (((x10_long)1ll))))
                {
                    x10_long j__11612 = j__11611;
                    
                    //#line 189 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11593 =
                      this->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11594 = i__11610;
                    x10_long j__11595 = j__11612;
                    x10_double v__11596 = (((__extension__ ({
                        
                        //#line 189 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11597 =
                          this->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11598 = i__11610;
                        x10_long j__11599 = j__11612;
                        x10_double ret__11600;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11600 = (::x10aux::nullCheck(this__11597)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11587 = i__11598;
                            x10_long j__11588 = j__11599;
                            ((j__11588) + (((i__11587) * (::x10aux::nullCheck(this__11597)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11600;
                    }))
                    ) + ((__extension__ ({
                        
                        //#line 189 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11601 =
                          ::x10aux::nullCheck(x)->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11602 = i__11610;
                        x10_long j__11603 = j__11612;
                        x10_double ret__11604;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11604 = (::x10aux::nullCheck(this__11601)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11589 = i__11602;
                            x10_long j__11590 = j__11603;
                            ((j__11590) + (((i__11589) * (::x10aux::nullCheck(this__11601)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11604;
                    }))
                    ));
                    x10_double ret__11605;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11593)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11591 = i__11594;
                        x10_long j__11592 = j__11595;
                        ((j__11592) + (((i__11591) * (::x10aux::nullCheck(this__11593)->FMGL(numElems_2)))));
                    }))
                    , v__11596);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11605 = v__11596;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11605;
                }
            }
            
        }
    }
    
}

//#line 197 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
void x10x::matrix::Matrix::addInPlace(::x10x::matrix::Matrix* x,
                                      ::x10x::matrix::Matrix* y) {
    
    //#line 198 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11632 = this->FMGL(mat);
    x10_long j__6328max__11633 = ::x10aux::nullCheck(p__11632)->FMGL(numElems_2);
    x10_long i__6345max__11634 = ::x10aux::nullCheck(p__11632)->FMGL(numElems_1);
    {
        x10_long i__11635;
        for (i__11635 = ((x10_long)0ll); ((i__11635) < (i__6345max__11634));
             i__11635 = ((i__11635) + (((x10_long)1ll))))
        {
            x10_long i__11636 = i__11635;
            {
                x10_long j__11637;
                for (j__11637 = ((x10_long)0ll); ((j__11637) < (j__6328max__11633));
                     j__11637 = ((j__11637) + (((x10_long)1ll))))
                {
                    x10_long j__11638 = j__11637;
                    
                    //#line 199 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11619 =
                      this->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11620 = i__11636;
                    x10_long j__11621 = j__11638;
                    x10_double v__11622 = (((__extension__ ({
                        
                        //#line 199 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11623 =
                          ::x10aux::nullCheck(x)->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11624 = i__11636;
                        x10_long j__11625 = j__11638;
                        x10_double ret__11626;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11626 = (::x10aux::nullCheck(this__11623)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11613 = i__11624;
                            x10_long j__11614 = j__11625;
                            ((j__11614) + (((i__11613) * (::x10aux::nullCheck(this__11623)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11626;
                    }))
                    ) + ((__extension__ ({
                        
                        //#line 199 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11627 =
                          ::x10aux::nullCheck(y)->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11628 = i__11636;
                        x10_long j__11629 = j__11638;
                        x10_double ret__11630;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11630 = (::x10aux::nullCheck(this__11627)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11615 = i__11628;
                            x10_long j__11616 = j__11629;
                            ((j__11616) + (((i__11615) * (::x10aux::nullCheck(this__11627)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11630;
                    }))
                    ));
                    x10_double ret__11631;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11619)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11617 = i__11620;
                        x10_long j__11618 = j__11621;
                        ((j__11618) + (((i__11617) * (::x10aux::nullCheck(this__11619)->FMGL(numElems_2)))));
                    }))
                    , v__11622);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11631 = v__11622;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11631;
                }
            }
            
        }
    }
    
}

//#line 207 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::sub(::x10x::matrix::Matrix* x) {
    
    //#line 208 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 209 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long M = this->getColCount();
    
    //#line 210 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* res =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (res)->::x10x::matrix::Matrix::_constructor(N, M);
    
    //#line 211 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11658 = this->FMGL(mat);
    x10_long j__6364max__11659 = ::x10aux::nullCheck(p__11658)->FMGL(numElems_2);
    x10_long i__6381max__11660 = ::x10aux::nullCheck(p__11658)->FMGL(numElems_1);
    {
        x10_long i__11661;
        for (i__11661 = ((x10_long)0ll); ((i__11661) < (i__6381max__11660));
             i__11661 = ((i__11661) + (((x10_long)1ll))))
        {
            x10_long i__11662 = i__11661;
            {
                x10_long j__11663;
                for (j__11663 = ((x10_long)0ll); ((j__11663) < (j__6364max__11659));
                     j__11663 = ((j__11663) + (((x10_long)1ll))))
                {
                    x10_long j__11664 = j__11663;
                    
                    //#line 212 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11645 =
                      res->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11646 = i__11662;
                    x10_long j__11647 = j__11664;
                    x10_double v__11648 = (((__extension__ ({
                        
                        //#line 212 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11649 =
                          this->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11650 = i__11662;
                        x10_long j__11651 = j__11664;
                        x10_double ret__11652;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11652 = (::x10aux::nullCheck(this__11649)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11639 = i__11650;
                            x10_long j__11640 = j__11651;
                            ((j__11640) + (((i__11639) * (::x10aux::nullCheck(this__11649)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11652;
                    }))
                    ) - ((__extension__ ({
                        
                        //#line 212 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11653 =
                          ::x10aux::nullCheck(x)->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11654 = i__11662;
                        x10_long j__11655 = j__11664;
                        x10_double ret__11656;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11656 = (::x10aux::nullCheck(this__11653)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11641 = i__11654;
                            x10_long j__11642 = j__11655;
                            ((j__11642) + (((i__11641) * (::x10aux::nullCheck(this__11653)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11656;
                    }))
                    ));
                    x10_double ret__11657;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11645)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11643 = i__11646;
                        x10_long j__11644 = j__11647;
                        ((j__11644) + (((i__11643) * (::x10aux::nullCheck(this__11645)->FMGL(numElems_2)))));
                    }))
                    , v__11648);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11657 = v__11648;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11657;
                }
            }
            
        }
    }
    
    //#line 215 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return res;
    
}

//#line 221 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::transpose() {
    
    //#line 222 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long M = this->getColCount();
    
    //#line 224 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::matrix::Matrix* res =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (res)->::x10x::matrix::Matrix::_constructor(M, N);
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::array::Array_2<x10_double>* p__11678 = res->FMGL(mat);
    x10_long j__6400max__11679 = ::x10aux::nullCheck(p__11678)->FMGL(numElems_2);
    x10_long i__6417max__11680 = ::x10aux::nullCheck(p__11678)->FMGL(numElems_1);
    {
        x10_long i__11681;
        for (i__11681 = ((x10_long)0ll); ((i__11681) < (i__6417max__11680));
             i__11681 = ((i__11681) + (((x10_long)1ll))))
        {
            x10_long i__11682 = i__11681;
            {
                x10_long j__11683;
                for (j__11683 = ((x10_long)0ll); ((j__11683) < (j__6400max__11679));
                     j__11683 = ((j__11683) + (((x10_long)1ll))))
                {
                    x10_long j__11684 = j__11683;
                    
                    //#line 227 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    ::x10::array::Array_2<x10_double>* this__11669 =
                      res->FMGL(mat);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11670 = i__11682;
                    x10_long j__11671 = j__11684;
                    x10_double v__11672 = (__extension__ ({
                        
                        //#line 227 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        ::x10::array::Array_2<x10_double>* this__11673 =
                          this->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11674 = j__11684;
                        x10_long j__11675 = i__11682;
                        x10_double ret__11676;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11676 = (::x10aux::nullCheck(this__11673)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11665 = i__11674;
                            x10_long j__11666 = j__11675;
                            ((j__11666) + (((i__11665) * (::x10aux::nullCheck(this__11673)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11676;
                    }))
                    ;
                    x10_double ret__11677;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__11669)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11667 = i__11670;
                        x10_long j__11668 = j__11671;
                        ((j__11668) + (((i__11667) * (::x10aux::nullCheck(this__11669)->FMGL(numElems_2)))));
                    }))
                    , v__11672);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11677 = v__11672;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11677;
                }
            }
            
        }
    }
    
    //#line 230 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return res;
    
}

//#line 236 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_double x10x::matrix::Matrix::trace() {
    
    //#line 237 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_double tr = 0.0;
    
    //#line 239 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long i__6435max__11691 = ((::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_1)) - (((x10_long)1ll)));
    {
        x10_long i__11692;
        for (i__11692 = ((x10_long)0ll); ((i__11692) <= (i__6435max__11691));
             i__11692 = ((i__11692) + (((x10_long)1ll))))
        {
            x10_long i__11693 = i__11692;
            
            //#line 240 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            tr = ((tr) + ((__extension__ ({
                ::x10::array::Array_2<x10_double>* this__11687 =
                  this->FMGL(mat);
                
                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__11688 = i__11693;
                x10_long j__11689 = i__11693;
                x10_double ret__11690;
                
                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                ret__11690 = (::x10aux::nullCheck(this__11687)->FMGL(raw))->unchecked_apply((__extension__ ({
                    
                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11685 = i__11688;
                    x10_long j__11686 = j__11689;
                    ((j__11686) + (((i__11685) * (::x10aux::nullCheck(this__11687)->FMGL(numElems_2)))));
                }))
                );
                ret__11690;
            }))
            ));
        }
    }
    
    //#line 243 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return tr;
    
}

//#line 249 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_double x10x::matrix::Matrix::sumOffDiagonal() {
    
    //#line 250 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_double sum = 0.0;
    
    //#line 251 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 253 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long i__6471max__11704 = ((::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_1)) - (((x10_long)1ll)));
    {
        x10_long i__11705;
        for (i__11705 = ((x10_long)0ll); ((i__11705) <= (i__6471max__11704));
             i__11705 = ((i__11705) + (((x10_long)1ll))))
        {
            x10_long i__11706 = i__11705;
            
            //#line 254 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            x10_long i__6453min__11700 = ((i__11706) + (((x10_long)1ll)));
            x10_long i__6453max__11701 = ((::x10aux::nullCheck(this->FMGL(mat))->FMGL(numElems_2)) - (((x10_long)1ll)));
            {
                x10_long i__11702;
                for (i__11702 = i__6453min__11700; ((i__11702) <= (i__6453max__11701));
                     i__11702 = ((i__11702) + (((x10_long)1ll))))
                {
                    x10_long j__11703 = i__11702;
                    
                    //#line 255 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    sum = ((sum) + (::fabs((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__11696 =
                          this->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11697 = i__11706;
                        x10_long j__11698 = j__11703;
                        x10_double ret__11699;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11699 = (::x10aux::nullCheck(this__11696)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11694 = i__11697;
                            x10_long j__11695 = j__11698;
                            ((j__11695) + (((i__11694) * (::x10aux::nullCheck(this__11696)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11699;
                    }))
                    )));
                }
            }
            
        }
    }
    
    //#line 259 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return sum;
    
}

//#line 262 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::vector::Vector* x10x::matrix::Matrix::getRowVector(
  x10_long rowIdx) {
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getColCount();
    
    //#line 265 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10x::vector::Vector* vec =  (new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector());
    (vec)->::x10x::vector::Vector::_constructor(N);
    
    //#line 266 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::lang::Rail< x10_double >* vecVal = vec->getVector();
    
    //#line 268 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (N)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 269 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            ::x10aux::nullCheck(vecVal)->x10::lang::Rail< x10_double >::__set(
              i, (__extension__ ({
                  ::x10::array::Array_2<x10_double>* this__11326 =
                    this->FMGL(mat);
                  
                  //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                  x10_long i__11324 = rowIdx;
                  x10_long j__11325 = i;
                  x10_double ret__11327;
                  
                  //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                  ret__11327 = (::x10aux::nullCheck(this__11326)->FMGL(raw))->unchecked_apply((__extension__ ({
                      
                      //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__11707 = i__11324;
                      x10_long j__11708 = j__11325;
                      ((j__11708) + (((i__11707) * (::x10aux::nullCheck(this__11326)->FMGL(numElems_2)))));
                  }))
                  );
                  ret__11327;
              }))
              );
        }
    }
    
    //#line 271 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return vec;
    
}

//#line 274 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_boolean x10x::matrix::Matrix::isUpperTriangular() {
    
    //#line 275 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    if ((!::x10aux::struct_equals(this->getRowCount(), this->getColCount())))
    {
        return false;
        
    }
    
    //#line 277 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 279 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (N)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 280 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (i)); j =
                                                         ((j) + (((x10_long)1ll))))
                {
                    
                    //#line 281 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    if ((!::x10aux::struct_equals((__extension__ ({
                                                      ::x10::array::Array_2<x10_double>* this__11333 =
                                                        this->FMGL(mat);
                                                      
                                                      //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                      x10_long i__11331 =
                                                        i;
                                                      x10_long j__11332 =
                                                        j;
                                                      x10_double ret__11334;
                                                      
                                                      //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                      ret__11334 =
                                                        (::x10aux::nullCheck(this__11333)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                          
                                                          //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                          x10_long i__11709 =
                                                            i__11331;
                                                          x10_long j__11710 =
                                                            j__11332;
                                                          ((j__11710) + (((i__11709) * (::x10aux::nullCheck(this__11333)->FMGL(numElems_2)))));
                                                      }))
                                                      );
                                                      ret__11334;
                                                  }))
                                                  , 0.0)))
                    {
                        
                        //#line 282 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                        return false;
                        
                    }
                    
                }
            }
            
        }
    }
    
    //#line 287 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return true;
    
}

//#line 290 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
x10_boolean x10x::matrix::Matrix::isSingular(x10_long p, ::x10::lang::Rail< x10_long >* row) {
    
    //#line 291 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getColCount();
    
    //#line 292 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long i__6489min__11723 = p;
    x10_long i__6489max__11724 = N;
    {
        x10_long i__11725;
        for (i__11725 = i__6489min__11723; ((i__11725) <= (i__6489max__11724));
             i__11725 = ((i__11725) + (((x10_long)1ll))))
        {
            x10_long i__11726 = i__11725;
            
            //#line 293 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            if (((!::x10aux::struct_equals((__extension__ ({
                                               ::x10::array::Array_2<x10_double>* this__11715 =
                                                 this->FMGL(mat);
                                               
                                               //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                               x10_long i__11716 =
                                                 ::x10aux::nullCheck(row)->x10::lang::Rail< x10_long >::__apply(
                                                   p);
                                               x10_long j__11717 =
                                                 i__11726;
                                               x10_double ret__11718;
                                               
                                               //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                               ret__11718 =
                                                 (::x10aux::nullCheck(this__11715)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                   
                                                   //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                   x10_long i__11711 =
                                                     i__11716;
                                                   x10_long j__11712 =
                                                     j__11717;
                                                   ((j__11712) + (((i__11711) * (::x10aux::nullCheck(this__11715)->FMGL(numElems_2)))));
                                               }))
                                               );
                                               ret__11718;
                                           }))
                                           , 0.0)) && ((::fabs((__extension__ ({
                    ::x10::array::Array_2<x10_double>* this__11719 =
                      this->FMGL(mat);
                    
                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__11720 = ::x10aux::nullCheck(row)->x10::lang::Rail< x10_long >::__apply(
                                          p);
                    x10_long j__11721 = i__11726;
                    x10_double ret__11722;
                    
                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__11722 = (::x10aux::nullCheck(this__11719)->FMGL(raw))->unchecked_apply((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11713 = i__11720;
                        x10_long j__11714 = j__11721;
                        ((j__11714) + (((i__11713) * (::x10aux::nullCheck(this__11719)->FMGL(numElems_2)))));
                    }))
                    );
                    ret__11722;
                }))
                )) > (1.0E-15)))) {
                
                //#line 294 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                return false;
                
            }
            
        }
    }
    
    //#line 298 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return true;
    
}

//#line 301 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10::lang::String* x10x::matrix::Matrix::toString() {
    
    //#line 302 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    ::x10::lang::String* str = (&::x10x::matrix::Matrix_Strings::sl__14220);
    
    //#line 303 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long N = this->getRowCount();
    
    //#line 304 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    x10_long M = this->getColCount();
    
    //#line 306 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (N)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 307 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (M)); j =
                                                         ((j) + (((x10_long)1ll))))
                {
                    
                    //#line 308 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
                    str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10x::matrix::Matrix_Strings::sl__14220), (__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__11354 =
                          this->FMGL(mat);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11352 = i;
                        x10_long j__11353 = j;
                        x10_double ret__11355;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11355 = (::x10aux::nullCheck(this__11354)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11727 = i__11352;
                            x10_long j__11728 = j__11353;
                            ((j__11728) + (((i__11727) * (::x10aux::nullCheck(this__11354)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11355;
                    }))
                    ), (&::x10x::matrix::Matrix_Strings::sl__14221)));
                }
            }
            
            //#line 309 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
            str = ::x10::lang::String::__plus(str, (&::x10x::matrix::Matrix_Strings::sl__14222));
        }
    }
    
    //#line 312 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
    return str;
    
}

//#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/matrix/Matrix.x10"
::x10x::matrix::Matrix* x10x::matrix::Matrix::x10x__matrix__Matrix____this__x10x__matrix__Matrix(
  ) {
    return this;
    
}
void x10x::matrix::Matrix::__fieldInitializers_x10x_matrix_Matrix(
  ) {
 
}
const ::x10aux::serialization_id_t x10x::matrix::Matrix::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10x::matrix::Matrix::_deserializer);

void x10x::matrix::Matrix::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mat));
    
}

::x10::lang::Reference* ::x10x::matrix::Matrix::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10x::matrix::Matrix* this_ = new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10x::matrix::Matrix::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(mat) = buf.read< ::x10::array::Array_2<x10_double>*>();
}

::x10aux::RuntimeType x10x::matrix::Matrix::rtt;
void x10x::matrix::Matrix::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("x10x.matrix.Matrix",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String x10x::matrix::Matrix_Strings::sl__14220("");
::x10::lang::String x10x::matrix::Matrix_Strings::sl__14221(" ");
::x10::lang::String x10x::matrix::Matrix_Strings::sl__14222("\n");

/* END of Matrix */
/*************************************************/
