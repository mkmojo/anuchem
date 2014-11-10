/*************************************************/
/* START of GaussianElimination */
#include <x10x/xla/GaussianElimination.h>

#include <x10x/xla/LinearEquationSolver.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/array/Array_2.h>
#include <x10x/matrix/Matrix.h>
#include <x10x/vector/Vector.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Exception.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"

//#line 28 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"

//#line 30 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"

//#line 32 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"

//#line 34 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
::x10x::vector::Vector* x10x::xla::GaussianElimination::findSolution(::x10x::matrix::Matrix* matA,
                                                                     ::x10x::vector::Vector* vectorB) {
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    x10_long N = ::x10aux::nullCheck(matA)->getRowCount();
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->FMGL(matrixA) = (__extension__ ({
        ::x10x::matrix::Matrix* alloc__13254 =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
        (alloc__13254)->::x10x::matrix::Matrix::_constructor(N, ((N) + (((x10_long)1ll))));
        alloc__13254;
    }))
    ;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->FMGL(a) = ::x10aux::nullCheck(this->FMGL(matrixA))->getMatrix();
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->FMGL(x) = ::x10aux::nullCheck(vectorB)->getVector();
    
    //#line 40 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    x10_long i;
    x10_long j;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    ::x10::array::Array_2<x10_double>* ta = ::x10aux::nullCheck(matA)->getMatrix();
    
    //#line 46 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (N)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 47 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (N)); j = ((j) + (((x10_long)1ll))))
                {
                    
                    //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
                    ::x10::array::Array_2<x10_double>* this__13654 =
                      this->FMGL(a);
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__13655 = i;
                    x10_long j__13656 = j;
                    x10_double v__13657 = (__extension__ ({
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13658 = i;
                        x10_long j__13659 = j;
                        x10_double ret__13660;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__13660 = (::x10aux::nullCheck(ta)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13650 = i__13658;
                            x10_long j__13651 = j__13659;
                            ((j__13651) + (((i__13650) * (::x10aux::nullCheck(ta)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__13660;
                    }))
                    ;
                    x10_double ret__13661;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__13654)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13652 = i__13655;
                        x10_long j__13653 = j__13656;
                        ((j__13653) + (((i__13652) * (::x10aux::nullCheck(this__13654)->FMGL(numElems_2)))));
                    }))
                    , v__13657);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__13661 = v__13657;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__13661;
                }
            }
            
        }
    }
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (N)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            ::x10::array::Array_2<x10_double>* this__13664 =
              this->FMGL(a);
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__13665 = i;
            x10_long j__13666 = N;
            x10_double v__13667 = ::x10aux::nullCheck(this->FMGL(x))->x10::lang::Rail< x10_double >::__apply(
                                    i);
            x10_double ret__13668;
            
            //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            (::x10aux::nullCheck(this__13664)->FMGL(raw))->unchecked_set((__extension__ ({
                
                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__13662 = i__13665;
                x10_long j__13663 = j__13666;
                ((j__13663) + (((i__13662) * (::x10aux::nullCheck(this__13664)->FMGL(numElems_2)))));
            }))
            , v__13667);
            
            //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13668 = v__13667;
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13668;
        }
    }
    
    //#line 55 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->FMGL(n) = ((::x10aux::nullCheck(this->FMGL(matrixA))->getRowCount()) - (((x10_long)1ll)));
    
    //#line 56 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->FMGL(n1) = ((::x10aux::nullCheck(this->FMGL(matrixA))->getColCount()) - (((x10_long)1ll)));
    
    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->FMGL(row) = ::x10::lang::Rail< x10_long >::_make(::x10aux::nullCheck(this->FMGL(matrixA))->getRowCount(),
                                                           ((x10_long)0ll));
    
    //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        for (j = ((x10_long)1ll); ((j) <= (this->FMGL(n)));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 62 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__set(
              j, j);
        }
    }
    
    //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    this->upperTriangularize(true);
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    ::x10aux::nullCheck(this->FMGL(x))->x10::lang::Rail< x10_double >::__set(
      this->FMGL(n), (((__extension__ ({
          ::x10::array::Array_2<x10_double>* this__13297 =
            this->FMGL(a);
          
          //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
          x10_long i__13295 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                this->FMGL(n));
          x10_long j__13296 = this->FMGL(n1);
          x10_double ret__13298;
          
          //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
          ret__13298 = (::x10aux::nullCheck(this__13297)->FMGL(raw))->unchecked_apply((__extension__ ({
              
              //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
              x10_long i__13669 = i__13295;
              x10_long j__13670 = j__13296;
              ((j__13670) + (((i__13669) * (::x10aux::nullCheck(this__13297)->FMGL(numElems_2)))));
          }))
          );
          ret__13298;
      }))
      ) / ((__extension__ ({
          ::x10::array::Array_2<x10_double>* this__13304 =
            this->FMGL(a);
          
          //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
          x10_long i__13302 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                this->FMGL(n));
          x10_long j__13303 = this->FMGL(n);
          x10_double ret__13305;
          
          //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
          ret__13305 = (::x10aux::nullCheck(this__13304)->FMGL(raw))->unchecked_apply((__extension__ ({
              
              //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
              x10_long i__13671 = i__13302;
              x10_long j__13672 = j__13303;
              ((j__13672) + (((i__13671) * (::x10aux::nullCheck(this__13304)->FMGL(numElems_2)))));
          }))
          );
          ret__13305;
      }))
      )));
    
    //#line 71 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    x10_double sum = 0.0;
    
    //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        x10_long k;
        for (k = ((this->FMGL(n)) - (((x10_long)1ll))); ((k) >= (((x10_long)0ll)));
             k = ((k) - (((x10_long)1ll)))) {
            
            //#line 73 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            sum = 0.0;
            
            //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            {
                x10_long c;
                for (c = ((k) + (((x10_long)1ll))); ((c) <= (this->FMGL(n)));
                     c = ((c) + (((x10_long)1ll)))) {
                    
                    //#line 75 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
                    sum = ((sum) + ((((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__13311 =
                          this->FMGL(a);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13309 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                              k);
                        x10_long j__13310 = c;
                        x10_double ret__13312;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__13312 = (::x10aux::nullCheck(this__13311)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13673 = i__13309;
                            x10_long j__13674 = j__13310;
                            ((j__13674) + (((i__13673) * (::x10aux::nullCheck(this__13311)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__13312;
                    }))
                    ) * (::x10aux::nullCheck(this->FMGL(x))->x10::lang::Rail< x10_double >::__apply(
                           c)))));
                }
            }
            
            //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            ::x10aux::nullCheck(this->FMGL(x))->x10::lang::Rail< x10_double >::__set(
              k, (((((__extension__ ({
                  ::x10::array::Array_2<x10_double>* this__13318 =
                    this->FMGL(a);
                  
                  //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                  x10_long i__13316 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                        k);
                  x10_long j__13317 = this->FMGL(n1);
                  x10_double ret__13319;
                  
                  //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                  ret__13319 = (::x10aux::nullCheck(this__13318)->FMGL(raw))->unchecked_apply((__extension__ ({
                      
                      //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__13675 = i__13316;
                      x10_long j__13676 = j__13317;
                      ((j__13676) + (((i__13675) * (::x10aux::nullCheck(this__13318)->FMGL(numElems_2)))));
                  }))
                  );
                  ret__13319;
              }))
              ) - (sum))) / ((__extension__ ({
                  ::x10::array::Array_2<x10_double>* this__13325 =
                    this->FMGL(a);
                  
                  //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                  x10_long i__13323 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                        k);
                  x10_long j__13324 = k;
                  x10_double ret__13326;
                  
                  //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                  ret__13326 = (::x10aux::nullCheck(this__13325)->FMGL(raw))->unchecked_apply((__extension__ ({
                      
                      //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__13677 = i__13323;
                      x10_long j__13678 = j__13324;
                      ((j__13678) + (((i__13677) * (::x10aux::nullCheck(this__13325)->FMGL(numElems_2)))));
                  }))
                  );
                  ret__13326;
              }))
              )));
        }
    }
    
    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10x::xla::GaussianElimination_Strings::sl__14302), vectorB)));
    
    //#line 84 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    return vectorB;
    
}

//#line 88 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
void x10x::xla::GaussianElimination::upperTriangularize(x10_boolean doOneScale) {
    
    //#line 91 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (::x10aux::nullCheck(this->FMGL(matrixA))->isUpperTriangular())
    {
        
        //#line 92 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        return;
    }
    
    //#line 95 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        x10_long p;
        for (p = ((x10_long)0ll); ((p) <= (this->FMGL(n1)));
             p = ((p) + (((x10_long)1ll)))) {
            
            //#line 96 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            this->simplePivot(p);
            
            //#line 97 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            this->oneScale(p, doOneScale);
        }
    }
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (::x10aux::nullCheck(this->FMGL(matrixA))->isSingular(
          this->FMGL(n), this->FMGL(row))) {
        
        //#line 101 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::x10x::xla::GaussianElimination_Strings::sl__14303)));
        
        //#line 102 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make((&::x10x::xla::GaussianElimination_Strings::sl__14304))));
    }
    
}

//#line 113 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
void x10x::xla::GaussianElimination::simplePivot(x10_long p) {
    
    //#line 114 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (((p) >= (this->FMGL(n)))) {
        
        //#line 115 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        return;
    }
    
    //#line 120 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (((::fabs((__extension__ ({
            ::x10::array::Array_2<x10_double>* this__13566 =
              this->FMGL(a);
            
            //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__13564 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                  p);
            x10_long j__13565 = p;
            x10_double ret__13567;
            
            //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13567 = (::x10aux::nullCheck(this__13566)->FMGL(raw))->unchecked_apply((__extension__ ({
                
                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__13679 = i__13564;
                x10_long j__13680 = j__13565;
                ((j__13680) + (((i__13679) * (::x10aux::nullCheck(this__13566)->FMGL(numElems_2)))));
            }))
            );
            ret__13567;
        }))
        )) >= (((x10_double) (((x10_long)1ll)))))) {
        return;
    }
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    x10_long i__13256min__13694 = ((p) + (((x10_long)1ll)));
    x10_long i__13256max__13695 = this->FMGL(n);
    {
        x10_long i__13696;
        for (i__13696 = i__13256min__13694; ((i__13696) <= (i__13256max__13695));
             i__13696 = ((i__13696) + (((x10_long)1ll))))
        {
            x10_long k__13697 = i__13696;
            
            //#line 124 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            if (((((::fabs((__extension__ ({
                    ::x10::array::Array_2<x10_double>* this__13685 =
                      this->FMGL(a);
                    
                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__13686 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                          k__13697);
                    x10_long j__13687 = p;
                    x10_double ret__13688;
                    
                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__13688 = (::x10aux::nullCheck(this__13685)->FMGL(raw))->unchecked_apply((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13681 = i__13686;
                        x10_long j__13682 = j__13687;
                        ((j__13682) + (((i__13681) * (::x10aux::nullCheck(this__13685)->FMGL(numElems_2)))));
                    }))
                    );
                    ret__13688;
                }))
                )) - (((x10_double) (((x10_long)1ll)))))) < (((::fabs((__extension__ ({
                    ::x10::array::Array_2<x10_double>* this__13689 =
                      this->FMGL(a);
                    
                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__13690 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                          p);
                    x10_long j__13691 = p;
                    x10_double ret__13692;
                    
                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__13692 = (::x10aux::nullCheck(this__13689)->FMGL(raw))->unchecked_apply((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13683 = i__13690;
                        x10_long j__13684 = j__13691;
                        ((j__13684) + (((i__13683) * (::x10aux::nullCheck(this__13689)->FMGL(numElems_2)))));
                    }))
                    );
                    ret__13692;
                }))
                )) - (((x10_double) (((x10_long)1ll))))))))
            {
                
                //#line 128 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
                x10_long temp__13693 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                         p);
                
                //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
                ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__set(
                  p, ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                       k__13697));
                
                //#line 130 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
                ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__set(
                  k__13697, temp__13693);
            }
            
        }
    }
    
    //#line 134 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (::x10aux::nullCheck(this->FMGL(matrixA))->isSingular(
          p, this->FMGL(row))) {
        
        //#line 135 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make((&::x10x::xla::GaussianElimination_Strings::sl__14304))));
    }
    
}

//#line 146 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
void x10x::xla::GaussianElimination::oneScale(x10_long p,
                                              x10_boolean scale) {
    
    //#line 147 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    x10_double m = 0.0;
    
    //#line 149 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (((p) >= (this->FMGL(n)))) {
        
        //#line 150 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        return;
    }
    
    //#line 153 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        x10_long k;
        for (k = ((p) + (((x10_long)1ll))); ((k) <= (this->FMGL(n)));
             k = ((k) + (((x10_long)1ll)))) {
            
            //#line 155 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            m = (((__extension__ ({
                ::x10::array::Array_2<x10_double>* this__13587 =
                  this->FMGL(a);
                
                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__13585 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                      k);
                x10_long j__13586 = p;
                x10_double ret__13588;
                
                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                ret__13588 = (::x10aux::nullCheck(this__13587)->FMGL(raw))->unchecked_apply((__extension__ ({
                    
                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__13698 = i__13585;
                    x10_long j__13699 = j__13586;
                    ((j__13699) + (((i__13698) * (::x10aux::nullCheck(this__13587)->FMGL(numElems_2)))));
                }))
                );
                ret__13588;
            }))
            ) / ((__extension__ ({
                ::x10::array::Array_2<x10_double>* this__13594 =
                  this->FMGL(a);
                
                //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__13592 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                      p);
                x10_long j__13593 = p;
                x10_double ret__13595;
                
                //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                ret__13595 = (::x10aux::nullCheck(this__13594)->FMGL(raw))->unchecked_apply((__extension__ ({
                    
                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__13700 = i__13592;
                    x10_long j__13701 = j__13593;
                    ((j__13701) + (((i__13700) * (::x10aux::nullCheck(this__13594)->FMGL(numElems_2)))));
                }))
                );
                ret__13595;
            }))
            ));
            
            //#line 157 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            {
                x10_long c;
                for (c = ((p) + (((x10_long)1ll))); ((c) <= (this->FMGL(n1)));
                     c = ((c) + (((x10_long)1ll)))) {
                    
                    //#line 158 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
                    ::x10::array::Array_2<x10_double>* a__13712 =
                      this->FMGL(a);
                    x10_long i__13713 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                          k);
                    x10_long i__13714 = c;
                    x10_double r__13715 = (((__extension__ ({
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13716 = i__13713;
                        x10_long j__13717 = i__13714;
                        x10_double ret__13718;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__13718 = (::x10aux::nullCheck(a__13712)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13702 = i__13716;
                            x10_long j__13703 = j__13717;
                            ((j__13703) + (((i__13702) * (::x10aux::nullCheck(a__13712)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__13718;
                    }))
                    ) - (((m) * ((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__13719 =
                          this->FMGL(a);
                        
                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13720 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                              p);
                        x10_long j__13721 = c;
                        x10_double ret__13722;
                        
                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__13722 = (::x10aux::nullCheck(this__13719)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13704 = i__13720;
                            x10_long j__13705 = j__13721;
                            ((j__13705) + (((i__13704) * (::x10aux::nullCheck(this__13719)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__13722;
                    }))
                    ))));
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__13708 = i__13713;
                    x10_long j__13709 = i__13714;
                    x10_double v__13710 = r__13715;
                    x10_double ret__13711;
                    
                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(a__13712)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__13706 = i__13708;
                        x10_long j__13707 = j__13709;
                        ((j__13707) + (((i__13706) * (::x10aux::nullCheck(a__13712)->FMGL(numElems_2)))));
                    }))
                    , v__13710);
                    
                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__13711 = v__13710;
                    
                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__13711;
                }
            }
            
            //#line 161 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            ::x10::array::Array_2<x10_double>* this__13725 =
              this->FMGL(a);
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__13726 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                  k);
            x10_long j__13727 = p;
            x10_double v__13728 = m;
            x10_double ret__13729;
            
            //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            (::x10aux::nullCheck(this__13725)->FMGL(raw))->unchecked_set((__extension__ ({
                
                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__13723 = i__13726;
                x10_long j__13724 = j__13727;
                ((j__13724) + (((i__13723) * (::x10aux::nullCheck(this__13725)->FMGL(numElems_2)))));
            }))
            , v__13728);
            
            //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13729 = v__13728;
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13729;
        }
    }
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    if (scale) {
        
        //#line 165 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
        ::x10::array::Array_2<x10_double>* this__13732 = this->FMGL(a);
        
        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__13733 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                              p);
        x10_long j__13734 = p;
        x10_double ret__13735;
        
        //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        (::x10aux::nullCheck(this__13732)->FMGL(raw))->unchecked_set((__extension__ ({
            
            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__13730 = i__13733;
            x10_long j__13731 = j__13734;
            ((j__13731) + (((i__13730) * (::x10aux::nullCheck(this__13732)->FMGL(numElems_2)))));
        }))
        , 1.0);
        
        //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__13735 = 1.0;
        
        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__13735;
    }
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
    {
        x10_long c;
        for (c = ((p) + (((x10_long)1ll))); ((c) <= (this->FMGL(n)));
             c = ((c) + (((x10_long)1ll)))) {
            
            //#line 169 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
            ::x10::array::Array_2<x10_double>* this__13738 =
              this->FMGL(a);
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__13739 = ::x10aux::nullCheck(this->FMGL(row))->x10::lang::Rail< x10_long >::__apply(
                                  c);
            x10_long j__13740 = p;
            x10_double ret__13741;
            
            //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            (::x10aux::nullCheck(this__13738)->FMGL(raw))->unchecked_set((__extension__ ({
                
                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                x10_long i__13736 = i__13739;
                x10_long j__13737 = j__13740;
                ((j__13737) + (((i__13736) * (::x10aux::nullCheck(this__13738)->FMGL(numElems_2)))));
            }))
            , 0.0);
            
            //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13741 = 0.0;
            
            //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            ret__13741;
        }
    }
    
}

//#line 25 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/GaussianElimination.x10"
::x10x::xla::GaussianElimination* x10x::xla::GaussianElimination::x10x__xla__GaussianElimination____this__x10x__xla__GaussianElimination(
  ) {
    return this;
    
}
void x10x::xla::GaussianElimination::_constructor() {
    ::x10x::xla::LinearEquationSolver* this__13743 = this;
    ::x10x::xla::GaussianElimination* this__13742 = this;
    ::x10aux::nullCheck(this__13742)->FMGL(row) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13742)->FMGL(a) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_double>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13742)->FMGL(x) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13742)->FMGL(matrixA) = (::x10aux::class_cast_unchecked< ::x10x::matrix::Matrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13742)->FMGL(n) = ((x10_long)0ll);
    ::x10aux::nullCheck(this__13742)->FMGL(n1) = ((x10_long)0ll);
}
::x10x::xla::GaussianElimination* x10x::xla::GaussianElimination::_make(
  ) {
    ::x10x::xla::GaussianElimination* this_ = new (::x10aux::alloc_z< ::x10x::xla::GaussianElimination>()) ::x10x::xla::GaussianElimination();
    this_->_constructor();
    return this_;
}


void x10x::xla::GaussianElimination::__fieldInitializers_x10x_xla_GaussianElimination(
  ) {
    this->FMGL(row) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(a) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_double>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(x) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(matrixA) = (::x10aux::class_cast_unchecked< ::x10x::matrix::Matrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(n) = ((x10_long)0ll);
    this->FMGL(n1) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t x10x::xla::GaussianElimination::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10x::xla::GaussianElimination::_deserializer);

void x10x::xla::GaussianElimination::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10x::xla::LinearEquationSolver::_serialize_body(buf);
    buf.write(this->FMGL(row));
    buf.write(this->FMGL(a));
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(matrixA));
    buf.write(this->FMGL(n));
    buf.write(this->FMGL(n1));
    
}

::x10::lang::Reference* ::x10x::xla::GaussianElimination::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10x::xla::GaussianElimination* this_ = new (::x10aux::alloc_z< ::x10x::xla::GaussianElimination>()) ::x10x::xla::GaussianElimination();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10x::xla::GaussianElimination::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10x::xla::LinearEquationSolver::_deserialize_body(buf);
    FMGL(row) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(a) = buf.read< ::x10::array::Array_2<x10_double>*>();
    FMGL(x) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(matrixA) = buf.read< ::x10x::matrix::Matrix*>();
    FMGL(n) = buf.read<x10_long>();
    FMGL(n1) = buf.read<x10_long>();
}

::x10aux::RuntimeType x10x::xla::GaussianElimination::rtt;
void x10x::xla::GaussianElimination::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10x::xla::LinearEquationSolver>()};
    rtt.initStageTwo("x10x.xla.GaussianElimination",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String x10x::xla::GaussianElimination_Strings::sl__14302("sol: ");
::x10::lang::String x10x::xla::GaussianElimination_Strings::sl__14304("Singular Matrix");
::x10::lang::String x10x::xla::GaussianElimination_Strings::sl__14303("Singular matrix!");

/* END of GaussianElimination */
/*************************************************/
