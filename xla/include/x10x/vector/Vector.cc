/*************************************************/
/* START of Vector */
#include <x10x/vector/Vector.h>

#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Unsafe.h>
#include <x10x/matrix/Matrix.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Array.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 24 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"

//#line 29 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
void x10x::vector::Vector::_constructor(x10_long siz) {
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* this__12725 = this;
    
    //#line 30 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    this->FMGL(vec) = ::x10::lang::Rail< x10_double >::_make(siz);
}
::x10x::vector::Vector* x10x::vector::Vector::_make(x10_long siz) {
    ::x10x::vector::Vector* this_ = new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector();
    this_->_constructor(siz);
    return this_;
}



//#line 36 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
void x10x::vector::Vector::_constructor(::x10::lang::Rail< x10_double >* vec) {
    
    //#line 23 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* this__12726 = this;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    this->FMGL(vec) = vec;
}
::x10x::vector::Vector* x10x::vector::Vector::_make(::x10::lang::Rail< x10_double >* vec)
{
    ::x10x::vector::Vector* this_ = new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector();
    this_->_constructor(vec);
    return this_;
}



//#line 40 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::makeUnsafe(x10_long size) {
    
    //#line 41 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10::lang::Rail< x10_double >* store = ::x10::lang::Rail< x10_double >::_makeUnsafe(size, false);
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* alloc__12728 =  (new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector());
    
    //#line 36 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10::lang::Rail< x10_double >* vec__12727 = store;
    
    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    alloc__12728->FMGL(vec) = vec__12727;
    
    //#line 42 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return alloc__12728;
    
}

//#line 48 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
void x10x::vector::Vector::_constructor(::x10x::matrix::Matrix* mat) {
    
    //#line 49 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    (this)->::x10x::vector::Vector::_constructor(((::x10aux::nullCheck(mat)->getRowCount()) * (::x10aux::nullCheck(mat)->getColCount())));
    
    //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long ii = ((x10_long)0ll);
    
    //#line 52 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10::array::Array_2<x10_double>* m = ::x10aux::nullCheck(mat)->getMatrix();
    
    //#line 54 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10::array::Array_2<x10_double>* p__12735 = m;
    x10_long j__8563max__12736 = ::x10aux::nullCheck(p__12735)->FMGL(numElems_2);
    x10_long i__8580max__12737 = ::x10aux::nullCheck(p__12735)->FMGL(numElems_1);
    {
        x10_long i__12738;
        for (i__12738 = ((x10_long)0ll); ((i__12738) < (i__8580max__12737));
             i__12738 = ((i__12738) + (((x10_long)1ll)))) {
            x10_long i__12739 = i__12738;
            {
                x10_long j__12740;
                for (j__12740 = ((x10_long)0ll); ((j__12740) < (j__8563max__12736));
                     j__12740 = ((j__12740) + (((x10_long)1ll))))
                {
                    x10_long j__12741 = j__12740;
                    
                    //#line 55 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
                    ::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__set(
                      (__extension__ ({
                          x10_long pre__12731 = ii;
                          ii = ((ii) + (((x10_long)1ll)));
                          pre__12731;
                      }))
                      , (__extension__ ({
                          
                          //#line 142 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__12732 = i__12739;
                          x10_long j__12733 = j__12741;
                          x10_double ret__12734;
                          
                          //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          ret__12734 = (::x10aux::nullCheck(m)->FMGL(raw))->unchecked_apply((__extension__ ({
                              
                              //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                              x10_long i__12729 = i__12732;
                              x10_long j__12730 = j__12733;
                              ((j__12730) + (((i__12729) * (::x10aux::nullCheck(m)->FMGL(numElems_2)))));
                          }))
                          );
                          ret__12734;
                      }))
                      );
                }
            }
            
        }
    }
    
}
::x10x::vector::Vector* x10x::vector::Vector::_make(::x10x::matrix::Matrix* mat)
{
    ::x10x::vector::Vector* this_ = new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector();
    this_->_constructor(mat);
    return this_;
}



//#line 61 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
x10_long x10x::vector::Vector::getSize() {
    return (x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size));
    
}

//#line 66 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10::lang::Rail< x10_double >* x10x::vector::Vector::getVector(
  ) {
    return this->FMGL(vec);
    
}

//#line 68 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
x10_double x10x::vector::Vector::__apply(x10_long i0) {
    
    //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return ::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
             i0);
    
}

//#line 72 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
x10_double x10x::vector::Vector::__set(x10_long i0, x10_double v) {
    
    //#line 73 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__set(
      i0, v);
    
    //#line 74 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return v;
    
}

//#line 80 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
void x10x::vector::Vector::makeZero() {
    
    //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::clear();
}

//#line 87 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
x10_double x10x::vector::Vector::dot(::x10x::vector::Vector* b) {
    
    //#line 88 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_double res = 0.0;
    
    //#line 89 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8598max__12742 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12743;
        for (i__12743 = ((x10_long)0ll); ((i__12743) <= (i__8598max__12742));
             i__12743 = ((i__12743) + (((x10_long)1ll))))
        {
            x10_long i__12744 = i__12743;
            
            //#line 90 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            res = ((res) + (((::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                i__12744)) * (::x10aux::nullCheck(::x10aux::nullCheck(b)->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                                i__12744)))));
        }
    }
    
    //#line 92 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return res;
    
}

//#line 98 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::add(::x10x::vector::Vector* b) {
    
    //#line 99 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* res = ::x10x::vector::Vector::makeUnsafe(
                                    (x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size)));
    
    //#line 100 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8616max__12745 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12746;
        for (i__12746 = ((x10_long)0ll); ((i__12746) <= (i__8616max__12745));
             i__12746 = ((i__12746) + (((x10_long)1ll))))
        {
            x10_long i__12747 = i__12746;
            
            //#line 101 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            res->__set(i__12747, ((::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                     i__12747)) + (::x10aux::nullCheck(::x10aux::nullCheck(b)->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                                     i__12747))));
        }
    }
    
    //#line 103 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return res;
    
}

//#line 109 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::sub(::x10x::vector::Vector* b) {
    
    //#line 110 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* res = ::x10x::vector::Vector::makeUnsafe(
                                    (x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size)));
    
    //#line 111 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8634max__12748 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12749;
        for (i__12749 = ((x10_long)0ll); ((i__12749) <= (i__8634max__12748));
             i__12749 = ((i__12749) + (((x10_long)1ll))))
        {
            x10_long i__12750 = i__12749;
            
            //#line 112 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            res->__set(i__12750, ((::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                     i__12750)) - (::x10aux::nullCheck(::x10aux::nullCheck(b)->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                                     i__12750))));
        }
    }
    
    //#line 115 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return res;
    
}

//#line 121 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
x10_double x10x::vector::Vector::magnitude() {
    
    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_double magSquared = 0.0;
    
    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8652max__12751 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12752;
        for (i__12752 = ((x10_long)0ll); ((i__12752) <= (i__8652max__12751));
             i__12752 = ((i__12752) + (((x10_long)1ll))))
        {
            x10_long i__12753 = i__12752;
            
            //#line 124 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            magSquared = ((magSquared) + (((::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                              i__12753)) * (::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                                              i__12753)))));
        }
    }
    
    //#line 126 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return ::x10::lang::MathNatives::sqrt(magSquared);
    
}

//#line 132 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::normalize() {
    
    //#line 133 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_double mag = this->magnitude();
    
    //#line 134 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* res = ::x10x::vector::Vector::makeUnsafe(
                                    (x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size)));
    
    //#line 135 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8670max__12754 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12755;
        for (i__12755 = ((x10_long)0ll); ((i__12755) <= (i__8670max__12754));
             i__12755 = ((i__12755) + (((x10_long)1ll))))
        {
            x10_long i__12756 = i__12755;
            
            //#line 136 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            res->__set(i__12756, ((::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                     i__12756)) / (mag)));
        }
    }
    
    //#line 138 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return res;
    
}

//#line 144 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::negate() {
    
    //#line 145 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* res = ::x10x::vector::Vector::makeUnsafe(
                                    (x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size)));
    
    //#line 146 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8688max__12757 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12758;
        for (i__12758 = ((x10_long)0ll); ((i__12758) <= (i__8688max__12757));
             i__12758 = ((i__12758) + (((x10_long)1ll))))
        {
            x10_long i__12759 = i__12758;
            
            //#line 147 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            res->__set(i__12759, (-(::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                      i__12759))));
        }
    }
    
    //#line 149 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return res;
    
}

//#line 155 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::mul(x10_double k) {
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10x::vector::Vector* res = ::x10x::vector::Vector::makeUnsafe(
                                    (x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size)));
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8706max__12760 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12761;
        for (i__12761 = ((x10_long)0ll); ((i__12761) <= (i__8706max__12760));
             i__12761 = ((i__12761) + (((x10_long)1ll))))
        {
            x10_long i__12762 = i__12761;
            
            //#line 158 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            res->__set(i__12762, ((::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                     i__12762)) * (k)));
        }
    }
    
    //#line 160 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return res;
    
}

//#line 166 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
x10_double x10x::vector::Vector::maxNorm() {
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_double max = 0.0;
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    x10_long i__8724max__12763 = (((x10_long)(::x10aux::nullCheck(this->FMGL(vec))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__12764;
        for (i__12764 = ((x10_long)0ll); ((i__12764) <= (i__8724max__12763));
             i__12764 = ((i__12764) + (((x10_long)1ll))))
        {
            x10_long i__12765 = i__12764;
            
            //#line 169 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            max = ::x10::lang::MathNatives::fmax(::fabs(::x10aux::nullCheck(this->FMGL(vec))->x10::lang::Rail< x10_double >::__apply(
                                                          i__12765)),max);
        }
    }
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return max;
    
}

//#line 174 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10::lang::String* x10x::vector::Vector::toString() {
    
    //#line 175 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10::lang::String* str = (&::x10x::vector::Vector_Strings::sl__14256);
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    ::x10::lang::Rail< x10_double >* rail__12766 = this->FMGL(vec);
    x10_long size__12767 = (x10_long)(::x10aux::nullCheck(rail__12766)->FMGL(size));
    {
        x10_long idx__12768;
        for (idx__12768 = ((x10_long)0ll); ((idx__12768) < (size__12767));
             idx__12768 = ((idx__12768) + (((x10_long)1ll))))
        {
            x10_double v__12769 = ::x10aux::nullCheck(rail__12766)->x10::lang::Rail< x10_double >::__apply(
                                    idx__12768);
            
            //#line 178 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
            str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10x::vector::Vector_Strings::sl__14256), v__12769), (&::x10x::vector::Vector_Strings::sl__14257)));
        }
    }
    
    //#line 181 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
    return str;
    
}

//#line 23 "/localdisk/qqiu/workspace/anuchem/xla/src/x10x/vector/Vector.x10"
::x10x::vector::Vector* x10x::vector::Vector::x10x__vector__Vector____this__x10x__vector__Vector(
  ) {
    return this;
    
}
void x10x::vector::Vector::__fieldInitializers_x10x_vector_Vector(
  ) {
 
}
const ::x10aux::serialization_id_t x10x::vector::Vector::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10x::vector::Vector::_deserializer);

void x10x::vector::Vector::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(vec));
    
}

::x10::lang::Reference* ::x10x::vector::Vector::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10x::vector::Vector* this_ = new (::x10aux::alloc_z< ::x10x::vector::Vector>()) ::x10x::vector::Vector();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10x::vector::Vector::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(vec) = buf.read< ::x10::lang::Rail< x10_double >*>();
}

::x10aux::RuntimeType x10x::vector::Vector::rtt;
void x10x::vector::Vector::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("x10x.vector.Vector",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String x10x::vector::Vector_Strings::sl__14256("");
::x10::lang::String x10x::vector::Vector_Strings::sl__14257(" ");

/* END of Vector */
/*************************************************/
