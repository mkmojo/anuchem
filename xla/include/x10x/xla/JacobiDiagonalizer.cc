/*************************************************/
/* START of JacobiDiagonalizer */
#include <x10x/xla/JacobiDiagonalizer.h>

#include <x10/lang/Int.h>
#include <x10x/vector/Vector.h>
#include <x10x/matrix/Matrix.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/Math.h>
#include <x10/lang/Float.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>

//#line 26 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"

//#line 27 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"

//#line 31 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
void x10x::xla::JacobiDiagonalizer::diagonalize(::x10x::matrix::Matrix* mat) {
    
    //#line 32 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::array::Array_2<x10_double>* matrix = ::x10aux::nullCheck(mat)->getMatrix();
    
    //#line 33 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_long n = ::x10aux::nullCheck(mat)->getRowCount();
    
    //#line 35 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    this->FMGL(eigenVectorsMat) = (__extension__ ({
        ::x10x::matrix::Matrix* alloc__8256 =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
        (alloc__8256)->::x10x::matrix::Matrix::_constructor(n);
        alloc__8256;
    }))
    ;
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10aux::nullCheck(this->FMGL(eigenVectorsMat))->makeIdentity();
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::array::Array_2<x10_double>* eigenVectors = ::x10aux::nullCheck(this->FMGL(eigenVectorsMat))->getMatrix();
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10x::matrix::Matrix* aMat =  (new (::x10aux::alloc_z< ::x10x::matrix::Matrix>()) ::x10x::matrix::Matrix());
    (aMat)->::x10x::matrix::Matrix::_constructor(mat);
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::array::Array_2<x10_double>* a = aMat->getMatrix();
    
    //#line 44 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    this->FMGL(eigenValuesVec) = (__extension__ ({
        ::x10x::vector::Vector* alloc__8257 =  (new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector());
        (alloc__8257)->::x10x::vector::Vector::_constructor(n);
        alloc__8257;
    }))
    ;
    
    //#line 45 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::lang::Rail< x10_double >* eigenValues = ::x10aux::nullCheck(this->FMGL(eigenValuesVec))->getVector();
    
    //#line 47 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10x::vector::Vector* bVec =  (new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector());
    (bVec)->::x10x::vector::Vector::_constructor(n);
    
    //#line 48 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10x::vector::Vector* zVec =  (new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector());
    (zVec)->::x10x::vector::Vector::_constructor(n);
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::lang::Rail< x10_double >* b = bVec->getVector();
    
    //#line 50 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::lang::Rail< x10_double >* z = zVec->getVector();
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_long i__8259max__14177 = ((::x10aux::nullCheck(a)->FMGL(numElems_1)) - (((x10_long)1ll)));
    {
        x10_long i__14178;
        for (i__14178 = ((x10_long)0ll); ((i__14178) <= (i__8259max__14177));
             i__14178 = ((i__14178) + (((x10_long)1ll)))) {
            x10_long i__14179 = i__14178;
            
            //#line 53 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__set(
              i__14179, ::x10aux::nullCheck(b)->x10::lang::Rail< x10_double >::__set(
                          i__14179, (__extension__ ({
                              
                              //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                              x10_long i__14012 = i__14179;
                              x10_long j__14013 = i__14179;
                              x10_double ret__14014;
                              
                              //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                              ret__14014 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
                                  
                                  //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                  x10_long i__14010 = i__14012;
                                  x10_long j__14011 = j__14013;
                                  ((j__14011) + (((i__14010) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                              }))
                              );
                              ret__14014;
                          }))
                          ));
            
            //#line 54 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            ::x10aux::nullCheck(z)->x10::lang::Rail< x10_double >::__set(
              i__14179, 0.0);
        }
    }
    
    //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_double zeroTolerance = 0.0;
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    {
        x10_int sweepsIdx;
        for (sweepsIdx = ((x10_int)0); ((sweepsIdx) < (((x10_int)100)));
             sweepsIdx = ((sweepsIdx) + (((x10_int)1)))) {
            
            //#line 60 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            x10_double sum = aMat->sumOffDiagonal();
            
            //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            if ((::x10aux::struct_equals(sum, 0.0))) {
                break;
            }
            
            //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            if (((((x10_long)(sweepsIdx))) < (((x10_long)3ll))))
            {
                zeroTolerance = ((((0.2) * (sum))) / (((x10_double) (((n) * (n))))));
            } else {
                
                //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                zeroTolerance = 0.0;
            }
            
            //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            x10_int sweeps = sweepsIdx;
            
            //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            x10_double zeroTol = zeroTolerance;
            
            //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            {
                x10_long ip;
                for (ip = ((x10_long)0ll); ((ip) < (((n) - (((x10_long)1ll)))));
                     ip = ((ip) + (((x10_long)1ll)))) {
                    {
                        x10_long iq;
                        for (iq = ((ip) + (((x10_long)1ll)));
                             ((iq) < (n)); iq = ((iq) + (((x10_long)1ll))))
                        {
                            
                            //#line 70 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                            if ((((iq) >= (((ip) + (((x10_long)1ll))))) &&
                                ((ip) < (((n) - (((x10_long)1ll)))))))
                            {
                                
                                //#line 72 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                x10_double g = ((100.0) * (::fabs((__extension__ ({
                                    
                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__13750 = ip;
                                    x10_long j__13751 = iq;
                                    x10_double ret__13752;
                                    
                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    ret__13752 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
                                        
                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        x10_long i__14015 =
                                          i__13750;
                                        x10_long j__14016 =
                                          j__13751;
                                        ((j__14016) + (((i__14015) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                    }))
                                    );
                                    ret__13752;
                                }))
                                )));
                                
                                //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                if (((((((x10_long)(sweeps))) > (((x10_long)4ll))) &&
                                    (::x10aux::struct_equals(((x10_float) (((::fabs(::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                                                      ip))) + (g)))),
                                                             ((x10_float) (::fabs(::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                                                    ip))))))) &&
                                    (::x10aux::struct_equals(((x10_float) (((::fabs(::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                                                      iq))) + (g)))),
                                                             ((x10_float) (::fabs(::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                                                    iq))))))))
                                {
                                    
                                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__14019 = ip;
                                    x10_long j__14020 = iq;
                                    x10_double ret__14021;
                                    
                                    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_set((__extension__ ({
                                        
                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        x10_long i__14017 =
                                          i__14019;
                                        x10_long j__14018 =
                                          j__14020;
                                        ((j__14018) + (((i__14017) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                    }))
                                    , 0.0);
                                    
                                    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    ret__14021 = 0.0;
                                    
                                    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    ret__14021;
                                } else 
                                //#line 78 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                if (((::fabs((__extension__ ({
                                        
                                        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        x10_long i__13776 =
                                          ip;
                                        x10_long j__13777 =
                                          iq;
                                        x10_double ret__13778;
                                        
                                        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        ret__13778 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
                                            
                                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__14022 =
                                              i__13776;
                                            x10_long j__14023 =
                                              j__13777;
                                            ((j__14023) + (((i__14022) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                        }))
                                        );
                                        ret__13778;
                                    }))
                                    )) > (zeroTol))) {
                                    
                                    //#line 79 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                    x10_double h = ((::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                       iq)) - (::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                                                                 ip)));
                                    
                                    //#line 80 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                    x10_double t;
                                    x10_double theta;
                                    
                                    //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                    if ((::x10aux::struct_equals(((x10_float) (((::fabs(h)) + (g)))),
                                                                 ((x10_float) (::fabs(h))))))
                                    {
                                        
                                        //#line 83 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        t = (((__extension__ ({
                                            
                                            //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__13782 =
                                              ip;
                                            x10_long j__13783 =
                                              iq;
                                            x10_double ret__13784;
                                            
                                            //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            ret__13784 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                
                                                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14024 =
                                                  i__13782;
                                                x10_long j__14025 =
                                                  j__13783;
                                                ((j__14025) + (((i__14024) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                            }))
                                            );
                                            ret__13784;
                                        }))
                                        ) / (h));
                                    } else {
                                        
                                        //#line 85 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        theta = ((((0.5) * (h))) / ((__extension__ ({
                                            
                                            //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__13788 =
                                              ip;
                                            x10_long j__13789 =
                                              iq;
                                            x10_double ret__13790;
                                            
                                            //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            ret__13790 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                
                                                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14026 =
                                                  i__13788;
                                                x10_long j__14027 =
                                                  j__13789;
                                                ((j__14027) + (((i__14026) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                            }))
                                            );
                                            ret__13790;
                                        }))
                                        ));
                                        
                                        //#line 86 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        t = ((1.0) / (((::fabs(theta)) + (::x10::lang::MathNatives::sqrt(((1.0) + (((theta) * (theta)))))))));
                                        
                                        //#line 88 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        if (((theta) < (0.0)))
                                        {
                                            t = (-(t));
                                        }
                                        
                                        //#line 90 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        x10_double cos = ((1.0) / (::x10::lang::MathNatives::sqrt(((1.0) + (((t) * (t)))))));
                                        
                                        //#line 91 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        x10_double sin = ((t) * (cos));
                                        
                                        //#line 92 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        x10_double tau = ((sin) / (((1.0) + (cos))));
                                        
                                        //#line 93 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        h = ((t) * ((__extension__ ({
                                            
                                            //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__13794 =
                                              ip;
                                            x10_long j__13795 =
                                              iq;
                                            x10_double ret__13796;
                                            
                                            //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            ret__13796 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                
                                                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14028 =
                                                  i__13794;
                                                x10_long j__14029 =
                                                  j__13795;
                                                ((j__14029) + (((i__14028) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                            }))
                                            );
                                            ret__13796;
                                        }))
                                        ));
                                        
                                        //#line 95 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        ::x10::lang::Rail< x10_double >* a__14156 =
                                          z;
                                        x10_long i__14157 =
                                          ip;
                                        x10_double r__14158 =
                                          ((::x10aux::nullCheck(a__14156)->x10::lang::Rail< x10_double >::__apply(
                                              i__14157)) - (h));
                                        ::x10aux::nullCheck(a__14156)->x10::lang::Rail< x10_double >::__set(
                                          i__14157, r__14158);
                                        ::x10::lang::Rail< x10_double >* a__14159 =
                                          z;
                                        x10_long i__14160 =
                                          iq;
                                        x10_double r__14161 =
                                          ((::x10aux::nullCheck(a__14159)->x10::lang::Rail< x10_double >::__apply(
                                              i__14160)) + (h));
                                        ::x10aux::nullCheck(a__14159)->x10::lang::Rail< x10_double >::__set(
                                          i__14160, r__14161);
                                        
                                        //#line 96 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        ::x10::lang::Rail< x10_double >* a__14162 =
                                          eigenValues;
                                        x10_long i__14163 =
                                          ip;
                                        x10_double r__14164 =
                                          ((::x10aux::nullCheck(a__14162)->x10::lang::Rail< x10_double >::__apply(
                                              i__14163)) - (h));
                                        ::x10aux::nullCheck(a__14162)->x10::lang::Rail< x10_double >::__set(
                                          i__14163, r__14164);
                                        ::x10::lang::Rail< x10_double >* a__14165 =
                                          eigenValues;
                                        x10_long i__14166 =
                                          iq;
                                        x10_double r__14167 =
                                          ((::x10aux::nullCheck(a__14165)->x10::lang::Rail< x10_double >::__apply(
                                              i__14166)) + (h));
                                        ::x10aux::nullCheck(a__14165)->x10::lang::Rail< x10_double >::__set(
                                          i__14166, r__14167);
                                        
                                        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        x10_long i__14168 =
                                          ip;
                                        x10_long j__14169 =
                                          iq;
                                        x10_double ret__14170;
                                        
                                        //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_set((__extension__ ({
                                            
                                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__14030 =
                                              i__14168;
                                            x10_long j__14031 =
                                              j__14169;
                                            ((j__14031) + (((i__14030) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
                                        }))
                                        , 0.0);
                                        
                                        //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        ret__14170 = 0.0;
                                        
                                        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                        ret__14170;
                                        
                                        //#line 100 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        {
                                            x10_long j;
                                            for (j = ((x10_long)0ll);
                                                 ((j) < (ip));
                                                 j = ((j) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 120 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                ::x10::array::Array_2<x10_double>* a__14056 =
                                                  a;
                                                x10_long i__14057 =
                                                  j;
                                                x10_long j__14058 =
                                                  ip;
                                                x10_long k__14059 =
                                                  j;
                                                x10_long l__14060 =
                                                  iq;
                                                
                                                //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double sin__14061 =
                                                  sin;
                                                x10_double tau__14062 =
                                                  tau;
                                                
                                                //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double g__14048 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14049 =
                                                      i__14057;
                                                    x10_long j__14050 =
                                                      j__14058;
                                                    x10_double ret__14051;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14051 =
                                                      (::x10aux::nullCheck(a__14056)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14032 =
                                                          i__14049;
                                                        x10_long j__14033 =
                                                          j__14050;
                                                        ((j__14033) + (((i__14032) * (::x10aux::nullCheck(a__14056)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14051;
                                                }))
                                                ;
                                                
                                                //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double h__14052 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14053 =
                                                      k__14059;
                                                    x10_long j__14054 =
                                                      l__14060;
                                                    x10_double ret__14055;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14055 =
                                                      (::x10aux::nullCheck(a__14056)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14034 =
                                                          i__14053;
                                                        x10_long j__14035 =
                                                          j__14054;
                                                        ((j__14035) + (((i__14034) * (::x10aux::nullCheck(a__14056)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14055;
                                                }))
                                                ;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14040 =
                                                  i__14057;
                                                x10_long j__14041 =
                                                  j__14058;
                                                x10_double v__14042 =
                                                  ((g__14048) - (((sin__14061) * (((h__14052) + (((g__14048) * (tau__14062))))))));
                                                x10_double ret__14043;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14056)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14036 =
                                                      i__14040;
                                                    x10_long j__14037 =
                                                      j__14041;
                                                    ((j__14037) + (((i__14036) * (::x10aux::nullCheck(a__14056)->FMGL(numElems_2)))));
                                                }))
                                                , v__14042);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14043 =
                                                  v__14042;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14043;
                                                x10_long i__14044 =
                                                  k__14059;
                                                x10_long j__14045 =
                                                  l__14060;
                                                x10_double v__14046 =
                                                  ((h__14052) + (((sin__14061) * (((g__14048) - (((h__14052) * (tau__14062))))))));
                                                x10_double ret__14047;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14056)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14038 =
                                                      i__14044;
                                                    x10_long j__14039 =
                                                      j__14045;
                                                    ((j__14039) + (((i__14038) * (::x10aux::nullCheck(a__14056)->FMGL(numElems_2)))));
                                                }))
                                                , v__14046);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14047 =
                                                  v__14046;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14047;
                                            }
                                        }
                                        
                                        //#line 101 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        {
                                            x10_long j;
                                            for (j = ((ip) + (((x10_long)1ll)));
                                                 ((j) < (iq));
                                                 j = ((j) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 120 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                ::x10::array::Array_2<x10_double>* a__14087 =
                                                  a;
                                                x10_long i__14088 =
                                                  ip;
                                                x10_long j__14089 =
                                                  j;
                                                x10_long k__14090 =
                                                  j;
                                                x10_long l__14091 =
                                                  iq;
                                                
                                                //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double sin__14092 =
                                                  sin;
                                                x10_double tau__14093 =
                                                  tau;
                                                
                                                //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double g__14079 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14080 =
                                                      i__14088;
                                                    x10_long j__14081 =
                                                      j__14089;
                                                    x10_double ret__14082;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14082 =
                                                      (::x10aux::nullCheck(a__14087)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14063 =
                                                          i__14080;
                                                        x10_long j__14064 =
                                                          j__14081;
                                                        ((j__14064) + (((i__14063) * (::x10aux::nullCheck(a__14087)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14082;
                                                }))
                                                ;
                                                
                                                //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double h__14083 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14084 =
                                                      k__14090;
                                                    x10_long j__14085 =
                                                      l__14091;
                                                    x10_double ret__14086;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14086 =
                                                      (::x10aux::nullCheck(a__14087)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14065 =
                                                          i__14084;
                                                        x10_long j__14066 =
                                                          j__14085;
                                                        ((j__14066) + (((i__14065) * (::x10aux::nullCheck(a__14087)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14086;
                                                }))
                                                ;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14071 =
                                                  i__14088;
                                                x10_long j__14072 =
                                                  j__14089;
                                                x10_double v__14073 =
                                                  ((g__14079) - (((sin__14092) * (((h__14083) + (((g__14079) * (tau__14093))))))));
                                                x10_double ret__14074;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14087)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14067 =
                                                      i__14071;
                                                    x10_long j__14068 =
                                                      j__14072;
                                                    ((j__14068) + (((i__14067) * (::x10aux::nullCheck(a__14087)->FMGL(numElems_2)))));
                                                }))
                                                , v__14073);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14074 =
                                                  v__14073;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14074;
                                                x10_long i__14075 =
                                                  k__14090;
                                                x10_long j__14076 =
                                                  l__14091;
                                                x10_double v__14077 =
                                                  ((h__14083) + (((sin__14092) * (((g__14079) - (((h__14083) * (tau__14093))))))));
                                                x10_double ret__14078;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14087)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14069 =
                                                      i__14075;
                                                    x10_long j__14070 =
                                                      j__14076;
                                                    ((j__14070) + (((i__14069) * (::x10aux::nullCheck(a__14087)->FMGL(numElems_2)))));
                                                }))
                                                , v__14077);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14078 =
                                                  v__14077;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14078;
                                            }
                                        }
                                        
                                        //#line 102 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        {
                                            x10_long j;
                                            for (j = ((iq) + (((x10_long)1ll)));
                                                 ((j) < (n));
                                                 j = ((j) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 120 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                ::x10::array::Array_2<x10_double>* a__14118 =
                                                  a;
                                                x10_long i__14119 =
                                                  ip;
                                                x10_long j__14120 =
                                                  j;
                                                x10_long k__14121 =
                                                  iq;
                                                x10_long l__14122 =
                                                  j;
                                                
                                                //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double sin__14123 =
                                                  sin;
                                                x10_double tau__14124 =
                                                  tau;
                                                
                                                //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double g__14110 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14111 =
                                                      i__14119;
                                                    x10_long j__14112 =
                                                      j__14120;
                                                    x10_double ret__14113;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14113 =
                                                      (::x10aux::nullCheck(a__14118)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14094 =
                                                          i__14111;
                                                        x10_long j__14095 =
                                                          j__14112;
                                                        ((j__14095) + (((i__14094) * (::x10aux::nullCheck(a__14118)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14113;
                                                }))
                                                ;
                                                
                                                //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double h__14114 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14115 =
                                                      k__14121;
                                                    x10_long j__14116 =
                                                      l__14122;
                                                    x10_double ret__14117;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14117 =
                                                      (::x10aux::nullCheck(a__14118)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14096 =
                                                          i__14115;
                                                        x10_long j__14097 =
                                                          j__14116;
                                                        ((j__14097) + (((i__14096) * (::x10aux::nullCheck(a__14118)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14117;
                                                }))
                                                ;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14102 =
                                                  i__14119;
                                                x10_long j__14103 =
                                                  j__14120;
                                                x10_double v__14104 =
                                                  ((g__14110) - (((sin__14123) * (((h__14114) + (((g__14110) * (tau__14124))))))));
                                                x10_double ret__14105;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14118)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14098 =
                                                      i__14102;
                                                    x10_long j__14099 =
                                                      j__14103;
                                                    ((j__14099) + (((i__14098) * (::x10aux::nullCheck(a__14118)->FMGL(numElems_2)))));
                                                }))
                                                , v__14104);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14105 =
                                                  v__14104;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14105;
                                                x10_long i__14106 =
                                                  k__14121;
                                                x10_long j__14107 =
                                                  l__14122;
                                                x10_double v__14108 =
                                                  ((h__14114) + (((sin__14123) * (((g__14110) - (((h__14114) * (tau__14124))))))));
                                                x10_double ret__14109;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14118)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14100 =
                                                      i__14106;
                                                    x10_long j__14101 =
                                                      j__14107;
                                                    ((j__14101) + (((i__14100) * (::x10aux::nullCheck(a__14118)->FMGL(numElems_2)))));
                                                }))
                                                , v__14108);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14109 =
                                                  v__14108;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14109;
                                            }
                                        }
                                        
                                        //#line 103 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                        {
                                            x10_long j;
                                            for (j = ((x10_long)0ll);
                                                 ((j) < (n));
                                                 j = ((j) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 120 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                ::x10::array::Array_2<x10_double>* a__14149 =
                                                  eigenVectors;
                                                x10_long i__14150 =
                                                  j;
                                                x10_long j__14151 =
                                                  ip;
                                                x10_long k__14152 =
                                                  j;
                                                x10_long l__14153 =
                                                  iq;
                                                
                                                //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double sin__14154 =
                                                  sin;
                                                x10_double tau__14155 =
                                                  tau;
                                                
                                                //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double g__14141 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14142 =
                                                      i__14150;
                                                    x10_long j__14143 =
                                                      j__14151;
                                                    x10_double ret__14144;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14144 =
                                                      (::x10aux::nullCheck(a__14149)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14125 =
                                                          i__14142;
                                                        x10_long j__14126 =
                                                          j__14143;
                                                        ((j__14126) + (((i__14125) * (::x10aux::nullCheck(a__14149)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14144;
                                                }))
                                                ;
                                                
                                                //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                                                x10_double h__14145 =
                                                  (__extension__ ({
                                                    
                                                    //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14146 =
                                                      k__14152;
                                                    x10_long j__14147 =
                                                      l__14153;
                                                    x10_double ret__14148;
                                                    
                                                    //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__14148 =
                                                      (::x10aux::nullCheck(a__14149)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__14127 =
                                                          i__14146;
                                                        x10_long j__14128 =
                                                          j__14147;
                                                        ((j__14128) + (((i__14127) * (::x10aux::nullCheck(a__14149)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__14148;
                                                }))
                                                ;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__14133 =
                                                  i__14150;
                                                x10_long j__14134 =
                                                  j__14151;
                                                x10_double v__14135 =
                                                  ((g__14141) - (((sin__14154) * (((h__14145) + (((g__14141) * (tau__14155))))))));
                                                x10_double ret__14136;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14149)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14129 =
                                                      i__14133;
                                                    x10_long j__14130 =
                                                      j__14134;
                                                    ((j__14130) + (((i__14129) * (::x10aux::nullCheck(a__14149)->FMGL(numElems_2)))));
                                                }))
                                                , v__14135);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14136 =
                                                  v__14135;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14136;
                                                x10_long i__14137 =
                                                  k__14152;
                                                x10_long j__14138 =
                                                  l__14153;
                                                x10_double v__14139 =
                                                  ((h__14145) + (((sin__14154) * (((g__14141) - (((h__14145) * (tau__14155))))))));
                                                x10_double ret__14140;
                                                
                                                //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(a__14149)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__14131 =
                                                      i__14137;
                                                    x10_long j__14132 =
                                                      j__14138;
                                                    ((j__14132) + (((i__14131) * (::x10aux::nullCheck(a__14149)->FMGL(numElems_2)))));
                                                }))
                                                , v__14139);
                                                
                                                //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14140 =
                                                  v__14139;
                                                
                                                //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__14140;
                                            }
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                    }
                    
                }
            }
            
            //#line 109 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            x10_long i__8277max__14174 = (((x10_long)(::x10aux::nullCheck(b)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__14175;
                for (i__14175 = ((x10_long)0ll); ((i__14175) <= (i__8277max__14174));
                     i__14175 = ((i__14175) + (((x10_long)1ll))))
                {
                    x10_long ip__14176 = i__14175;
                    
                    //#line 110 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                    ::x10::lang::Rail< x10_double >* a__14171 =
                      b;
                    x10_long i__14172 = ip__14176;
                    x10_double r__14173 = ((::x10aux::nullCheck(a__14171)->x10::lang::Rail< x10_double >::__apply(
                                              i__14172)) + (::x10aux::nullCheck(z)->x10::lang::Rail< x10_double >::__apply(
                                                              ip__14176)));
                    ::x10aux::nullCheck(a__14171)->x10::lang::Rail< x10_double >::__set(
                      i__14172, r__14173);
                    
                    //#line 111 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                    ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__set(
                      ip__14176, ::x10aux::nullCheck(b)->x10::lang::Rail< x10_double >::__apply(
                                   ip__14176));
                    
                    //#line 112 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                    ::x10aux::nullCheck(z)->x10::lang::Rail< x10_double >::__set(
                      ip__14176, 0.0);
                }
            }
            
        }
    }
    
    //#line 116 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    this->sortEigenValues();
    
    //#line 117 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    this->FMGL(eigenVectorsMat) = ::x10aux::nullCheck(this->FMGL(eigenVectorsMat))->transpose();
}

//#line 120 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
void x10x::xla::JacobiDiagonalizer::doRotate(::x10::array::Array_2<x10_double>* a,
                                             x10_long i, x10_long j,
                                             x10_long k, x10_long l,
                                             x10_double sin,
                                             x10_double tau) {
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_double g = (__extension__ ({
        
        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__13955 = i;
        x10_long j__13956 = j;
        x10_double ret__13957;
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__13957 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__14180 = i__13955;
            x10_long j__14181 = j__13956;
            ((j__14181) + (((i__14180) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
        }))
        );
        ret__13957;
    }))
    ;
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_double h = (__extension__ ({
        
        //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__13961 = k;
        x10_long j__13962 = l;
        x10_double ret__13963;
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__13963 = (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__14182 = i__13961;
            x10_long j__14183 = j__13962;
            ((j__14183) + (((i__14182) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
        }))
        );
        ret__13963;
    }))
    ;
    
    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    x10_long i__14188 = i;
    x10_long j__14189 = j;
    x10_double v__14190 = ((g) - (((sin) * (((h) + (((g) * (tau))))))));
    x10_double ret__14191;
    
    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_set((__extension__ ({
        
        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__14184 = i__14188;
        x10_long j__14185 = j__14189;
        ((j__14185) + (((i__14184) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
    }))
    , v__14190);
    
    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__14191 = v__14190;
    
    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__14191;
    x10_long i__14192 = k;
    x10_long j__14193 = l;
    x10_double v__14194 = ((h) + (((sin) * (((g) - (((h) * (tau))))))));
    x10_double ret__14195;
    
    //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    (::x10aux::nullCheck(a)->FMGL(raw))->unchecked_set((__extension__ ({
        
        //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__14186 = i__14192;
        x10_long j__14187 = j__14193;
        ((j__14187) + (((i__14186) * (::x10aux::nullCheck(a)->FMGL(numElems_2)))));
    }))
    , v__14194);
    
    //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__14195 = v__14194;
    
    //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
    ret__14195;
}

//#line 128 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
void x10x::xla::JacobiDiagonalizer::sortEigenValues() {
    
    //#line 129 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_long i;
    x10_long j;
    x10_long k;
    
    //#line 130 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_double p;
    
    //#line 131 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    x10_long n = ::x10aux::nullCheck(this->FMGL(eigenValuesVec))->getSize();
    
    //#line 132 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::lang::Rail< x10_double >* eigenValues = ::x10aux::nullCheck(this->FMGL(eigenValuesVec))->getVector();
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    ::x10::array::Array_2<x10_double>* eigenVectors = ::x10aux::nullCheck(this->FMGL(eigenVectorsMat))->getMatrix();
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (n)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 136 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            p = ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                  k = i);
            
            //#line 138 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (n));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 139 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                    if (((::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                            j)) <= (p))) {
                        p = ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                              k = j);
                    }
                    
                }
            }
            
            //#line 141 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
            if ((!::x10aux::struct_equals(k, i))) {
                
                //#line 142 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__set(
                  k, ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__apply(
                       i));
                
                //#line 143 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                ::x10aux::nullCheck(eigenValues)->x10::lang::Rail< x10_double >::__set(
                  i, p);
                
                //#line 145 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                {
                    for (j = ((x10_long)0ll); ((j) < (n));
                         j = ((j) + (((x10_long)1ll)))) {
                        
                        //#line 146 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
                        p = (__extension__ ({
                            
                            //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13981 = j;
                            x10_long j__13982 = i;
                            x10_double ret__13983;
                            
                            //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__13983 = (::x10aux::nullCheck(eigenVectors)->FMGL(raw))->unchecked_apply((__extension__ ({
                                
                                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__14196 = i__13981;
                                x10_long j__14197 = j__13982;
                                ((j__14197) + (((i__14196) * (::x10aux::nullCheck(eigenVectors)->FMGL(numElems_2)))));
                            }))
                            );
                            ret__13983;
                        }))
                        ;
                        
                        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__14204 = j;
                        x10_long j__14205 = i;
                        x10_double v__14206 = (__extension__ ({
                            
                            //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__14207 = j;
                            x10_long j__14208 = k;
                            x10_double ret__14209;
                            
                            //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__14209 = (::x10aux::nullCheck(eigenVectors)->FMGL(raw))->unchecked_apply((__extension__ ({
                                
                                //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__14198 = i__14207;
                                x10_long j__14199 = j__14208;
                                ((j__14199) + (((i__14198) * (::x10aux::nullCheck(eigenVectors)->FMGL(numElems_2)))));
                            }))
                            );
                            ret__14209;
                        }))
                        ;
                        x10_double ret__14210;
                        
                        //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(eigenVectors)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__14200 = i__14204;
                            x10_long j__14201 = j__14205;
                            ((j__14201) + (((i__14200) * (::x10aux::nullCheck(eigenVectors)->FMGL(numElems_2)))));
                        }))
                        , v__14206);
                        
                        //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__14210 = v__14206;
                        
                        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__14210;
                        x10_long i__14211 = j;
                        x10_long j__14212 = k;
                        x10_double v__14213 = p;
                        x10_double ret__14214;
                        
                        //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(eigenVectors)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__14202 = i__14211;
                            x10_long j__14203 = j__14212;
                            ((j__14203) + (((i__14202) * (::x10aux::nullCheck(eigenVectors)->FMGL(numElems_2)))));
                        }))
                        , v__14213);
                        
                        //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__14214 = v__14213;
                        
                        //#line 169 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__14214;
                    }
                }
                
            }
            
        }
    }
    
}

//#line 154 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
::x10x::vector::Vector* x10x::xla::JacobiDiagonalizer::getEigenValues(
  ) {
    return this->FMGL(eigenValuesVec);
    
}

//#line 156 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
::x10x::matrix::Matrix* x10x::xla::JacobiDiagonalizer::getEigenVectors(
  ) {
    return this->FMGL(eigenVectorsMat);
    
}

//#line 25 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/xla/JacobiDiagonalizer.x10"
::x10x::xla::JacobiDiagonalizer* x10x::xla::JacobiDiagonalizer::x10x__xla__JacobiDiagonalizer____this__x10x__xla__JacobiDiagonalizer(
  ) {
    return this;
    
}
void x10x::xla::JacobiDiagonalizer::_constructor() {
    ::x10x::xla::JacobiDiagonalizer* this__14215 = this;
    ::x10aux::nullCheck(this__14215)->FMGL(eigenValuesVec) =
      (::x10aux::class_cast_unchecked< ::x10x::vector::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14215)->FMGL(eigenVectorsMat) =
      (::x10aux::class_cast_unchecked< ::x10x::matrix::Matrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14215)->FMGL(maxIterations) =
      ((x10_int)100);
}
::x10x::xla::JacobiDiagonalizer* x10x::xla::JacobiDiagonalizer::_make(
  ) {
    ::x10x::xla::JacobiDiagonalizer* this_ = new (::x10aux::alloc_z< ::x10x::xla::JacobiDiagonalizer>()) ::x10x::xla::JacobiDiagonalizer();
    this_->_constructor();
    return this_;
}


void x10x::xla::JacobiDiagonalizer::__fieldInitializers_x10x_xla_JacobiDiagonalizer(
  ) {
    this->FMGL(eigenValuesVec) = (::x10aux::class_cast_unchecked< ::x10x::vector::Vector*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(eigenVectorsMat) = (::x10aux::class_cast_unchecked< ::x10x::matrix::Matrix*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(maxIterations) = ((x10_int)100);
}
const ::x10aux::serialization_id_t x10x::xla::JacobiDiagonalizer::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10x::xla::JacobiDiagonalizer::_deserializer);

void x10x::xla::JacobiDiagonalizer::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(eigenValuesVec));
    buf.write(this->FMGL(eigenVectorsMat));
    buf.write(this->FMGL(maxIterations));
    
}

::x10::lang::Reference* ::x10x::xla::JacobiDiagonalizer::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10x::xla::JacobiDiagonalizer* this_ = new (::x10aux::alloc_z< ::x10x::xla::JacobiDiagonalizer>()) ::x10x::xla::JacobiDiagonalizer();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10x::xla::JacobiDiagonalizer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(eigenValuesVec) = buf.read< ::x10x::vector::Vector*>();
    FMGL(eigenVectorsMat) = buf.read< ::x10x::matrix::Matrix*>();
    FMGL(maxIterations) = buf.read<x10_int>();
}

::x10aux::RuntimeType x10x::xla::JacobiDiagonalizer::rtt;
void x10x::xla::JacobiDiagonalizer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("x10x.xla.JacobiDiagonalizer",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of JacobiDiagonalizer */
/*************************************************/
