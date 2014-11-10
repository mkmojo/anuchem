/*************************************************/
/* START of PME */
#include <au/edu/anu/pme/PME.h>

#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10x/vector/Vector3d.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Complex.h>
#include <au/edu/anu/chem/PointCharge.h>
#include <au/edu/anu/util/Timer.h>
#include <x10/lang/Rail.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/Array.h>
#include <x10/regionarray/DistArray.h>
#include <au/edu/anu/chem/mm/MMAtom.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Math.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Point.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/regionarray/PeriodicDist.h>
#include <x10/regionarray/UniqueDist.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Fun_0_2.h>
#include <au/edu/anu/fft/DistributedReal3dFft.h>
#include <x10/util/ArrayList.h>
#include <x10x/vector/Point3d.h>
#include <au/edu/anu/chem/Atom.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/util/HashMap.h>
#include <x10/util/Map__Entry.h>
#include <x10/util/Map.h>
#include <x10/util/Set.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Reducible__SumReducer.h>
#include <x10/compiler/Inline.h>
#include <x10/regionarray/RectRegion1D.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__1_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_double>::itable<au_edu_anu_pme_PME__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(x10_long i){
        ::x10x::vector::Vector3d this__64063 = ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                 i);
        return ::x10::lang::MathNatives::sqrt(((((((this__64063->FMGL(i)) * (this__64063->FMGL(i)))) + (((this__64063->FMGL(j)) * (this__64063->FMGL(j)))))) + (((this__64063->FMGL(k)) * (this__64063->FMGL(k))))));
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edges;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__1* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edges = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        au_edu_anu_pme_PME__closure__1* this_ = new (storage) au_edu_anu_pme_PME__closure__1(that_edges);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__1(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges) : edges(edges) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:157";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__1_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__2_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d>::itable<au_edu_anu_pme_PME__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10x::vector::Vector3d __apply(x10_long i){
        ::x10x::vector::Vector3d this__64069 = ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                 i);
        
        //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d ret__64070;
        
        //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        x10_double l__64067 = ((((((this__64069->FMGL(i)) * (this__64069->FMGL(i)))) + (((this__64069->FMGL(j)) * (this__64069->FMGL(j)))))) + (((this__64069->FMGL(k)) * (this__64069->FMGL(k)))));
        
        //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ret__64070 = (__extension__ ({
            ::x10x::vector::Vector3d alloc__64068 =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double i__64064 = ((this__64069->FMGL(i)) / (l__64067));
            x10_double j__64065 = ((this__64069->FMGL(j)) / (l__64067));
            x10_double k__64066 = ((this__64069->FMGL(k)) / (l__64067));
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            alloc__64068->FMGL(i) = i__64064;
            alloc__64068->FMGL(j) = j__64065;
            alloc__64068->FMGL(k) = k__64066;
            alloc__64068;
        }))
        ;
        
        //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ret__64070;
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edges;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__2* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edges = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        au_edu_anu_pme_PME__closure__2* this_ = new (storage) au_edu_anu_pme_PME__closure__2(that_edges);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__2(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges) : edges(edges) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:158";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__2_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__3_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_pme_PME__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>::itable<au_edu_anu_pme_PME__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::Array< ::x10x::vector::Vector3d>* __apply(){
        
        //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array< ::x10x::vector::Vector3d>* alloc__64145 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10x::vector::Vector3d> >()) ::x10::regionarray::Array< ::x10x::vector::Vector3d>());
        
        //#line 172 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::Region* reg__64141 = (__extension__ ({
            
            //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
            ::x10::lang::LongRange r__64142 = ::x10::lang::LongRange::_make(((x10_long)-1ll), ((x10_long)1ll));
            ::x10::lang::LongRange r__64143 = ::x10::lang::LongRange::_make(((x10_long)-1ll), ((x10_long)1ll));
            ::x10::lang::LongRange r__64144 = ::x10::lang::LongRange::_make(((x10_long)-1ll), ((x10_long)1ll));
            ::x10::regionarray::Region::makeRectangular(r__64142, r__64143,
                                                        r__64144);
        }))
        ;
        
        //#line 174 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__64145->FMGL(region) = (reg__64141);
        alloc__64145->FMGL(rank) = ::x10aux::nullCheck(reg__64141)->FMGL(rank);
        alloc__64145->FMGL(rect) = ::x10aux::nullCheck(reg__64141)->FMGL(rect);
        alloc__64145->FMGL(zeroBased) = ::x10aux::nullCheck(reg__64141)->FMGL(zeroBased);
        alloc__64145->FMGL(rail) = ::x10aux::nullCheck(reg__64141)->FMGL(rail);
        alloc__64145->FMGL(size) = ::x10aux::nullCheck(reg__64141)->size();
        
        //#line 175 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh__64132 =  ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh__64132)->::x10::regionarray::Array__LayoutHelper::_constructor(
          reg__64141);
        
        //#line 176 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__64145->FMGL(layout_min0) = crh__64132->FMGL(min0);
        
        //#line 177 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__64145->FMGL(layout_stride1) = crh__64132->FMGL(stride1);
        
        //#line 178 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__64145->FMGL(layout_min1) = crh__64132->FMGL(min1);
        
        //#line 179 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__64145->FMGL(layout) = crh__64132->FMGL(layout);
        
        //#line 180 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        x10_long n__64133 = crh__64132->FMGL(size);
        
        //#line 181 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* r__64134 = ::x10::lang::Rail< ::x10x::vector::Vector3d >::_makeUnsafe(n__64133, false);
        
        //#line 182 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__64135;
            for (p__64135 = ::x10aux::nullCheck(reg__64141)->iterator(); ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__64135));
                 ) {
                ::x10::lang::Point* p__64136 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__64135));
                
                //#line 183 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                r__64134->x10::lang::Rail< ::x10x::vector::Vector3d >::__set(
                  (__extension__ ({
                      
                      //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      ::x10::lang::Point* pt__64137 = p__64136;
                      x10_long ret__64138;
                      
                      //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      x10_long offset__64098 = ((::x10aux::nullCheck(pt__64137)->x10::lang::Point::__apply(
                                                   ((x10_long)(((x10_int)0))))) - (alloc__64145->FMGL(layout_min0)));
                      
                      //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(pt__64137)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          offset__64098 = ((((((offset__64098) * (alloc__64145->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__64137)->x10::lang::Point::__apply(
                                                                                                             ((x10_long)1ll))))) - (alloc__64145->FMGL(layout_min1)));
                          
                          //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long i__36722max__64095 = ((::x10aux::nullCheck(pt__64137)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__64096;
                              for (i__64096 = ((x10_long)2ll);
                                   ((i__64096) <= (i__36722max__64095));
                                   i__64096 = ((i__64096) + (((x10_long)1ll))))
                              {
                                  x10_long i__64097 = i__64096;
                                  
                                  //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__64098 = ((((((offset__64098) * (::x10aux::nullCheck(alloc__64145->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                            ((((x10_long)2ll)) * (((i__64097) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__64137)->x10::lang::Point::__apply(
                                                                                                                                              i__64097)))) - (::x10aux::nullCheck(alloc__64145->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__64097) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      
                      //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                      ret__64138 = offset__64098;
                      ret__64138;
                  }))
                  , (__extension__ ({
                      
                      //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                      ::x10::lang::Point* t__64139 = p__64136;
                      ::x10x::vector::Vector3d ret__64140;
                      x10_long i__64114 = ::x10aux::nullCheck(t__64139)->x10::lang::Point::__apply(
                                            ((x10_long)(((x10_int)0))));
                      x10_long j__64115 = ::x10aux::nullCheck(t__64139)->x10::lang::Point::__apply(
                                            ((x10_long)(((x10_int)1))));
                      x10_long k__64116 = ::x10aux::nullCheck(t__64139)->x10::lang::Point::__apply(
                                            ((x10_long)(((x10_int)2))));
                      ret__64140 = (__extension__ ({
                          ::x10x::vector::Vector3d this__64117 =
                            (__extension__ ({
                              ::x10x::vector::Vector3d this__64118 =
                                (__extension__ ({
                                  ::x10x::vector::Vector3d this__64119 =
                                    ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                      ((x10_long)0ll));
                                  
                                  //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double c__64120 = ((x10_double) (i__64114));
                                  (__extension__ ({
                                      
                                      //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      ::x10x::vector::Vector3d alloc__64121 =
                                         ::x10x::vector::Vector3d::_alloc();
                                      
                                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      x10_double i__64099 =
                                        ((this__64119->FMGL(i)) * (c__64120));
                                      x10_double j__64100 =
                                        ((this__64119->FMGL(j)) * (c__64120));
                                      x10_double k__64101 =
                                        ((this__64119->FMGL(k)) * (c__64120));
                                      
                                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      alloc__64121->FMGL(i) =
                                        i__64099;
                                      alloc__64121->FMGL(j) =
                                        j__64100;
                                      alloc__64121->FMGL(k) =
                                        k__64101;
                                      alloc__64121;
                                  }))
                                  ;
                              }))
                              ;
                              
                              //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              ::x10x::vector::Vector3d b__64122 =
                                (__extension__ ({
                                  
                                  //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                  ::x10x::vector::Vector3d this__64123 =
                                    ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                      ((x10_long)1ll));
                                  
                                  //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double c__64124 = ((x10_double) (j__64115));
                                  (__extension__ ({
                                      
                                      //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      ::x10x::vector::Vector3d alloc__64125 =
                                         ::x10x::vector::Vector3d::_alloc();
                                      
                                      //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      x10_double i__64102 =
                                        ((this__64123->FMGL(i)) * (c__64124));
                                      x10_double j__64103 =
                                        ((this__64123->FMGL(j)) * (c__64124));
                                      x10_double k__64104 =
                                        ((this__64123->FMGL(k)) * (c__64124));
                                      
                                      //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                      alloc__64125->FMGL(i) =
                                        i__64102;
                                      alloc__64125->FMGL(j) =
                                        j__64103;
                                      alloc__64125->FMGL(k) =
                                        k__64104;
                                      alloc__64125;
                                  }))
                                  ;
                              }))
                              ;
                              (__extension__ ({
                                  
                                  //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  ::x10x::vector::Vector3d alloc__64126 =
                                     ::x10x::vector::Vector3d::_alloc();
                                  
                                  //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double i__64105 = ((this__64118->FMGL(i)) + (b__64122->FMGL(i)));
                                  x10_double j__64106 = ((this__64118->FMGL(j)) + (b__64122->FMGL(j)));
                                  x10_double k__64107 = ((this__64118->FMGL(k)) + (b__64122->FMGL(k)));
                                  
                                  //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  alloc__64126->FMGL(i) =
                                    i__64105;
                                  alloc__64126->FMGL(j) =
                                    j__64106;
                                  alloc__64126->FMGL(k) =
                                    k__64107;
                                  alloc__64126;
                              }))
                              ;
                          }))
                          ;
                          
                          //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                          ::x10x::vector::Vector3d b__64127 =
                            (__extension__ ({
                              
                              //#line 174 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                              ::x10x::vector::Vector3d this__64128 =
                                ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                  ((x10_long)2ll));
                              
                              //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              x10_double c__64129 = ((x10_double) (k__64116));
                              (__extension__ ({
                                  
                                  //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  ::x10x::vector::Vector3d alloc__64130 =
                                     ::x10x::vector::Vector3d::_alloc();
                                  
                                  //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  x10_double i__64108 = ((this__64128->FMGL(i)) * (c__64129));
                                  x10_double j__64109 = ((this__64128->FMGL(j)) * (c__64129));
                                  x10_double k__64110 = ((this__64128->FMGL(k)) * (c__64129));
                                  
                                  //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                  alloc__64130->FMGL(i) =
                                    i__64108;
                                  alloc__64130->FMGL(j) =
                                    j__64109;
                                  alloc__64130->FMGL(k) =
                                    k__64110;
                                  alloc__64130;
                              }))
                              ;
                          }))
                          ;
                          (__extension__ ({
                              
                              //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              ::x10x::vector::Vector3d alloc__64131 =
                                 ::x10x::vector::Vector3d::_alloc();
                              
                              //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              x10_double i__64111 = ((this__64117->FMGL(i)) + (b__64127->FMGL(i)));
                              x10_double j__64112 = ((this__64117->FMGL(j)) + (b__64127->FMGL(j)));
                              x10_double k__64113 = ((this__64117->FMGL(k)) + (b__64127->FMGL(k)));
                              
                              //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                              alloc__64131->FMGL(i) = i__64111;
                              alloc__64131->FMGL(j) = j__64112;
                              alloc__64131->FMGL(k) = k__64113;
                              alloc__64131;
                          }))
                          ;
                      }))
                      ;
                      ret__64140;
                  }))
                  );
            }
        }
        
        //#line 185 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        alloc__64145->FMGL(raw) = r__64134;
        
        //#line 173 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return alloc__64145;
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edges;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__3* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edges = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        au_edu_anu_pme_PME__closure__3* this_ = new (storage) au_edu_anu_pme_PME__closure__3(that_edges);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__3(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges) : edges(edges) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:173-174";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__3_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__5_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 189 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* mySubCellRegion = ::x10aux::nullCheck(subCells->FMGL(dist))->__apply(
                                                        ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 190 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        if (!(::x10aux::nullCheck(mySubCellRegion)->isEmpty())) {
            
            //#line 191 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::regionarray::Region* directRequiredRegion = (__extension__ ({
                
                //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
                ::x10::lang::LongRange r__63168 = ::x10::lang::LongRange::_make(((::x10aux::nullCheck(mySubCellRegion)->min(
                                                                                    ((x10_long)0ll))) - (((x10_long)2ll))), ((::x10aux::nullCheck(mySubCellRegion)->max(
                                                                                                                                ((x10_long)0ll))) + (((x10_long)2ll))));
                ::x10::lang::LongRange r__63169 = ::x10::lang::LongRange::_make(((::x10aux::nullCheck(mySubCellRegion)->min(
                                                                                    ((x10_long)1ll))) - (((x10_long)2ll))), ((::x10aux::nullCheck(mySubCellRegion)->max(
                                                                                                                                ((x10_long)1ll))) + (((x10_long)2ll))));
                ::x10::lang::LongRange r__63170 = ::x10::lang::LongRange::_make(((::x10aux::nullCheck(mySubCellRegion)->min(
                                                                                    ((x10_long)2ll))) - (((x10_long)2ll))), ((::x10aux::nullCheck(mySubCellRegion)->max(
                                                                                                                                ((x10_long)2ll))) + (((x10_long)2ll))));
                ::x10::regionarray::Region::makeRectangular(
                  r__63168, r__63169, r__63170);
            }))
            ;
            
            //#line 195 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            atomsCache->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__set(
              p, (__extension__ ({
                  ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* alloc__62211 =
                     (new (::x10aux::alloc_z< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >()) ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>());
                  
                  //#line 122 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  ::x10::regionarray::Region* reg__64148 =
                    directRequiredRegion;
                  
                  //#line 124 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__62211->FMGL(region) = (reg__64148);
                  alloc__62211->FMGL(rank) = ::x10aux::nullCheck(reg__64148)->FMGL(rank);
                  alloc__62211->FMGL(rect) = ::x10aux::nullCheck(reg__64148)->FMGL(rect);
                  alloc__62211->FMGL(zeroBased) = ::x10aux::nullCheck(reg__64148)->FMGL(zeroBased);
                  alloc__62211->FMGL(rail) = ::x10aux::nullCheck(reg__64148)->FMGL(rail);
                  alloc__62211->FMGL(size) = ::x10aux::nullCheck(reg__64148)->size();
                  
                  //#line 125 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  ::x10::regionarray::Array__LayoutHelper crh__64146 =
                     ::x10::regionarray::Array__LayoutHelper::_alloc();
                  (crh__64146)->::x10::regionarray::Array__LayoutHelper::_constructor(
                    reg__64148);
                  
                  //#line 126 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__62211->FMGL(layout_min0) = crh__64146->FMGL(min0);
                  
                  //#line 127 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__62211->FMGL(layout_stride1) = crh__64146->FMGL(stride1);
                  
                  //#line 128 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__62211->FMGL(layout_min1) = crh__64146->FMGL(min1);
                  
                  //#line 129 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__62211->FMGL(layout) = crh__64146->FMGL(layout);
                  
                  //#line 130 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  x10_long n__64147 = crh__64146->FMGL(size);
                  
                  //#line 131 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                  alloc__62211->FMGL(raw) = ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::_make(n__64147);
                  alloc__62211;
              }))
              );
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    ::x10::lang::Point* p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->atomsCache);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__5* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__5>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        au_edu_anu_pme_PME__closure__5* this_ = new (storage) au_edu_anu_pme_PME__closure__5(that_subCells, that_atomsCache, that_p);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__5(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::lang::Point* p) : subCells(subCells), atomsCache(atomsCache), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:188-197";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__5_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__4_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__64650;
            for (p__64650 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__64650));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__64650));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__5)))au_edu_anu_pme_PME__closure__5(subCells, atomsCache, p))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->atomsCache);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__4* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__4>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__4* this_ = new (storage) au_edu_anu_pme_PME__closure__4(that_subCells, that_atomsCache, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__4(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::regionarray::Dist* __lowerer__var__0__) : subCells(subCells), atomsCache(atomsCache), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:188-197";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__4_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__6_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class au_edu_anu_pme_PME__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double>::itable<au_edu_anu_pme_PME__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_double __apply(x10_double a, x10_double b){
        return ((a) * (b));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__6* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__6>();
        buf.record_reference(storage);
        au_edu_anu_pme_PME__closure__6* this_ = new (storage) au_edu_anu_pme_PME__closure__6();
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:225";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__6_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__8_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 250 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_double>* localBdotC = ::x10aux::nullCheck(BdotC)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 251 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_complex>* localThetaRecConvQ = ::x10aux::nullCheck(thetaRecConvQ)->x10::regionarray::DistArray<x10_complex>::getLocalPortion();
        
        //#line 252 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_complex>* localQinv = ::x10aux::nullCheck(Qinv)->x10::regionarray::DistArray<x10_complex>::getLocalPortion();
        
        //#line 253 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localBdotC)->FMGL(region);
        
        //#line 772 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_complex>* dst__64186 = localThetaRecConvQ;
        ::x10::regionarray::Array<x10_complex>* src__64187 = localQinv;
        ::x10::regionarray::Array<x10_complex>* ret__64188;
        goto __ret__64189; __ret__64189: {
        {
            
            //#line 774 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            if ((::x10aux::nullCheck(localBdotC)->FMGL(rect) && (::x10aux::struct_equals(::x10aux::nullCheck(localBdotC)->FMGL(size),
                                                                                         ::x10aux::nullCheck(src__64187)->FMGL(size)))))
            {
                
                //#line 173 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ::x10::lang::Rail< x10_double >* src__64155 =
                  ::x10aux::nullCheck(localBdotC)->FMGL(raw);
                ::x10::lang::Rail< x10_complex >* src__64156 =
                  ::x10aux::nullCheck(src__64187)->FMGL(raw);
                ::x10::lang::Rail< x10_complex >* dst__64157 =
                  ::x10aux::nullCheck(dst__64186)->FMGL(raw);
                ::x10::lang::Rail< x10_complex >* ret__64158;
                
                //#line 178 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ::x10::lang::Rail< x10_double >* rail__64151 =
                  src__64155;
                x10_long i__56659max__64152 = (x10_long)(::x10aux::nullCheck(rail__64151)->FMGL(size));
                {
                    x10_long i__64153;
                    for (i__64153 = ((x10_long)0ll); ((i__64153) < (i__56659max__64152));
                         i__64153 = ((i__64153) + (((x10_long)1ll))))
                    {
                        x10_long i__64154 = i__64153;
                        
                        //#line 179 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                        ::x10aux::nullCheck(dst__64157)->x10::lang::Rail< x10_complex >::__set(
                          i__64154, (__extension__ ({
                              
                              //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                              x10_double a__64149 = ::x10aux::nullCheck(src__64155)->x10::lang::Rail< x10_double >::__apply(
                                                      i__64154);
                              x10_complex b__64150 = ::x10aux::nullCheck(src__64156)->x10::lang::Rail< x10_complex >::__apply(
                                                       i__64154);
                              ::x10::lang::ComplexNatives::_times(a__64149, b__64150);
                          }))
                          );
                    }
                }
                
                //#line 181 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ret__64158 = dst__64157;
                
                //#line 173 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
                ret__64158;
                
                //#line 779 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__64188 = dst__64186;
                goto __ret__64189_end_;
            } else {
                
                //#line 781 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* p__64190;
                    for (p__64190 = ::x10aux::nullCheck(localBdotC)->FMGL(region)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__64190));
                         ) {
                        ::x10::lang::Point* p__64191 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__64190));
                        
                        //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ::x10::lang::Point* p__64177 = p__64191;
                        x10_complex v__64178 = (__extension__ ({
                            
                            //#line 254 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_double a__64179 = (__extension__ ({
                                
                                //#line 523 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ::x10::lang::Point* pt__64180 =
                                  p__64191;
                                x10_double ret__64181;
                                
                                //#line 527 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__64181 = ::x10aux::nullCheck(localBdotC)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ::x10::lang::Point* pt__64163 =
                                                     pt__64180;
                                                   x10_long ret__64164;
                                                   
                                                   //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__64162 =
                                                     ((::x10aux::nullCheck(pt__64163)->x10::lang::Point::__apply(
                                                         ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(localBdotC)->FMGL(layout_min0)));
                                                   
                                                   //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   if (((::x10aux::nullCheck(pt__64163)->FMGL(rank)) > (((x10_long)1ll))))
                                                   {
                                                       
                                                       //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64162 =
                                                         ((((((offset__64162) * (::x10aux::nullCheck(localBdotC)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__64163)->x10::lang::Point::__apply(
                                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(localBdotC)->FMGL(layout_min1)));
                                                       
                                                       //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__36722max__64159 =
                                                         ((::x10aux::nullCheck(pt__64163)->FMGL(rank)) - (((x10_long)1ll)));
                                                       {
                                                           x10_long i__64160;
                                                           for (i__64160 =
                                                                  ((x10_long)2ll);
                                                                ((i__64160) <= (i__36722max__64159));
                                                                i__64160 =
                                                                  ((i__64160) + (((x10_long)1ll))))
                                                           {
                                                               x10_long i__64161 =
                                                                 i__64160;
                                                               
                                                               //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                               offset__64162 =
                                                                 ((((((offset__64162) * (::x10aux::nullCheck(::x10aux::nullCheck(localBdotC)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                           ((((x10_long)2ll)) * (((i__64161) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__64163)->x10::lang::Point::__apply(
                                                                                                                                                             i__64161)))) - (::x10aux::nullCheck(::x10aux::nullCheck(localBdotC)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                               ((((((x10_long)2ll)) * (((i__64161) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                                           }
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__64164 =
                                                     offset__64162;
                                                   ret__64164;
                                               }))
                                               );
                                ret__64181;
                            }))
                            ;
                            x10_complex b__64182 = (__extension__ ({
                                
                                //#line 523 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ::x10::lang::Point* pt__64183 =
                                  p__64191;
                                x10_complex ret__64184;
                                
                                //#line 527 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                ret__64184 = ::x10aux::nullCheck(src__64187)->FMGL(raw)->x10::lang::Rail< x10_complex >::__apply(
                                               (__extension__ ({
                                                   
                                                   //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ::x10::lang::Point* pt__64169 =
                                                     pt__64183;
                                                   x10_long ret__64170;
                                                   
                                                   //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   x10_long offset__64168 =
                                                     ((::x10aux::nullCheck(pt__64169)->x10::lang::Point::__apply(
                                                         ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src__64187)->FMGL(layout_min0)));
                                                   
                                                   //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   if (((::x10aux::nullCheck(pt__64169)->FMGL(rank)) > (((x10_long)1ll))))
                                                   {
                                                       
                                                       //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64168 =
                                                         ((((((offset__64168) * (::x10aux::nullCheck(src__64187)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__64169)->x10::lang::Point::__apply(
                                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(src__64187)->FMGL(layout_min1)));
                                                       
                                                       //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__36722max__64165 =
                                                         ((::x10aux::nullCheck(pt__64169)->FMGL(rank)) - (((x10_long)1ll)));
                                                       {
                                                           x10_long i__64166;
                                                           for (i__64166 =
                                                                  ((x10_long)2ll);
                                                                ((i__64166) <= (i__36722max__64165));
                                                                i__64166 =
                                                                  ((i__64166) + (((x10_long)1ll))))
                                                           {
                                                               x10_long i__64167 =
                                                                 i__64166;
                                                               
                                                               //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                               offset__64168 =
                                                                 ((((((offset__64168) * (::x10aux::nullCheck(::x10aux::nullCheck(src__64187)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                           ((((x10_long)2ll)) * (((i__64167) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__64169)->x10::lang::Point::__apply(
                                                                                                                                                             i__64167)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src__64187)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                               ((((((x10_long)2ll)) * (((i__64167) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                                           }
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                   ret__64170 =
                                                     offset__64168;
                                                   ret__64170;
                                               }))
                                               );
                                ret__64184;
                            }))
                            ;
                            ::x10::lang::ComplexNatives::_times(a__64179, b__64182);
                        }))
                        ;
                        x10_complex ret__64185;
                        
                        //#line 640 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ::x10aux::nullCheck(dst__64186)->FMGL(raw)->x10::lang::Rail< x10_complex >::__set(
                          (__extension__ ({
                              
                              //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ::x10::lang::Point* pt__64175 =
                                p__64177;
                              x10_long ret__64176;
                              
                              //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long offset__64174 = ((::x10aux::nullCheck(pt__64175)->x10::lang::Point::__apply(
                                                           ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst__64186)->FMGL(layout_min0)));
                              
                              //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              if (((::x10aux::nullCheck(pt__64175)->FMGL(rank)) > (((x10_long)1ll))))
                              {
                                  
                                  //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  offset__64174 = ((((((offset__64174) * (::x10aux::nullCheck(dst__64186)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__64175)->x10::lang::Point::__apply(
                                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(dst__64186)->FMGL(layout_min1)));
                                  
                                  //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                  x10_long i__36722max__64171 =
                                    ((::x10aux::nullCheck(pt__64175)->FMGL(rank)) - (((x10_long)1ll)));
                                  {
                                      x10_long i__64172;
                                      for (i__64172 = ((x10_long)2ll);
                                           ((i__64172) <= (i__36722max__64171));
                                           i__64172 = ((i__64172) + (((x10_long)1ll))))
                                      {
                                          x10_long i__64173 =
                                            i__64172;
                                          
                                          //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                          offset__64174 =
                                            ((((((offset__64174) * (::x10aux::nullCheck(::x10aux::nullCheck(dst__64186)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                      ((((x10_long)2ll)) * (((i__64173) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__64175)->x10::lang::Point::__apply(
                                                                                                                                        i__64173)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst__64186)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                          ((((((x10_long)2ll)) * (((i__64173) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                      }
                                  }
                                  
                              }
                              
                              //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              ret__64176 = offset__64174;
                              ret__64176;
                          }))
                          , v__64178);
                        
                        //#line 641 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__64185 = v__64178;
                        
                        //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                        ret__64185;
                    }
                }
                
            }
            
            //#line 785 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__64188 = dst__64186;
        }goto __ret__64189_end_; __ret__64189_end_: ;
        }
        ret__64188;
        }
        
        // captured environment
        ::x10::regionarray::DistArray<x10_double>* BdotC;
        ::x10::regionarray::DistArray<x10_complex>* thetaRecConvQ;
        ::x10::regionarray::DistArray<x10_complex>* Qinv;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->BdotC);
            buf.write(this->thetaRecConvQ);
            buf.write(this->Qinv);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            au_edu_anu_pme_PME__closure__8* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__8>();
            buf.record_reference(storage);
            ::x10::regionarray::DistArray<x10_double>* that_BdotC = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
            ::x10::regionarray::DistArray<x10_complex>* that_thetaRecConvQ = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
            ::x10::regionarray::DistArray<x10_complex>* that_Qinv = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
            au_edu_anu_pme_PME__closure__8* this_ = new (storage) au_edu_anu_pme_PME__closure__8(that_BdotC, that_thetaRecConvQ, that_Qinv);
            return this_;
        }
        
        au_edu_anu_pme_PME__closure__8(::x10::regionarray::DistArray<x10_double>* BdotC, ::x10::regionarray::DistArray<x10_complex>* thetaRecConvQ, ::x10::regionarray::DistArray<x10_complex>* Qinv) : BdotC(BdotC), thetaRecConvQ(thetaRecConvQ), Qinv(Qinv) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:249-255";
        }
    
    };
    
    #endif // AU_EDU_ANU_PME_PME__CLOSURE__8_CLOSURE
    #ifndef AU_EDU_ANU_PME_PME__CLOSURE__7_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* placeId__64665;
            for (placeId__64665 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                            ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(placeId__64665));
                 ) {
                ::x10::lang::Point* placeId = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(placeId__64665));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__8)))au_edu_anu_pme_PME__closure__8(BdotC, thetaRecConvQ, Qinv))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* BdotC;
    ::x10::regionarray::DistArray<x10_complex>* thetaRecConvQ;
    ::x10::regionarray::DistArray<x10_complex>* Qinv;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->BdotC);
        buf.write(this->thetaRecConvQ);
        buf.write(this->Qinv);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__7* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__7>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_BdotC = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::DistArray<x10_complex>* that_thetaRecConvQ = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::DistArray<x10_complex>* that_Qinv = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__7* this_ = new (storage) au_edu_anu_pme_PME__closure__7(that_BdotC, that_thetaRecConvQ, that_Qinv, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__7(::x10::regionarray::DistArray<x10_double>* BdotC, ::x10::regionarray::DistArray<x10_complex>* thetaRecConvQ, ::x10::regionarray::DistArray<x10_complex>* Qinv, ::x10::regionarray::Dist* __lowerer__var__0__) : BdotC(BdotC), thetaRecConvQ(thetaRecConvQ), Qinv(Qinv), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:249-255";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__7_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__9_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::itable<au_edu_anu_pme_PME__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>* __apply(::x10::lang::Point* id__2060){
        
        //#line 283 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>* alloc__64192 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge> >()) ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>());
        (alloc__64192)->::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>::_constructor();
        return alloc__64192;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__9* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__9>();
        buf.record_reference(storage);
        au_edu_anu_pme_PME__closure__9* this_ = new (storage) au_edu_anu_pme_PME__closure__9();
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__9() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:283";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__9_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__12_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            
            //#line 297 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::CheckedThrowable* throwable__64919 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::lang::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(subCellsTemp->x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::__apply(
                                              i__64198, j__64199,
                                              k__64200))->add((__extension__ ({
                                                                  ::au::edu::anu::chem::PointCharge alloc__64201 =
                                                                    
                                                                  ::au::edu::anu::chem::PointCharge::_alloc();
                                                                  
                                                                  //#line 26 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/PointCharge.x10"
                                                                  ::x10x::vector::Point3d centre__64193 =
                                                                    centre__64196;
                                                                  x10_double charge__64194 =
                                                                    charge__64197;
                                                                  
                                                                  //#line 27 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/PointCharge.x10"
                                                                  alloc__64201->FMGL(centre) =
                                                                    centre__64193;
                                                                  
                                                                  //#line 28 "/localdisk/qqiu/workspace/anuchem/anu-chem/anuchem.jar:au/edu/anu/chem/PointCharge.x10"
                                                                  alloc__64201->FMGL(charge) =
                                                                    charge__64194;
                                                                  alloc__64201;
                                                              }))
                                                              );
                    }
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc47) {
                {
                    ::x10::lang::CheckedThrowable* formal__64920 =
                      __exc47;
                    {
                        throwable__64919 = formal__64920;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__64919,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__64919))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__64919));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__64919,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__64919)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__64919));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp;
    x10_long i__64198;
    x10_long j__64199;
    x10_long k__64200;
    ::x10x::vector::Point3d centre__64196;
    x10_double charge__64197;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCellsTemp);
        buf.write(this->i__64198);
        buf.write(this->j__64199);
        buf.write(this->k__64200);
        buf.write(this->centre__64196);
        buf.write(this->charge__64197);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__12* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__12>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        x10_long that_i__64198 = buf.read<x10_long>();
        x10_long that_j__64199 = buf.read<x10_long>();
        x10_long that_k__64200 = buf.read<x10_long>();
        ::x10x::vector::Point3d that_centre__64196 = buf.read< ::x10x::vector::Point3d>();
        x10_double that_charge__64197 = buf.read<x10_double>();
        au_edu_anu_pme_PME__closure__12* this_ = new (storage) au_edu_anu_pme_PME__closure__12(that_subCellsTemp, that_i__64198, that_j__64199, that_k__64200, that_centre__64196, that_charge__64197);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__12(::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp, x10_long i__64198, x10_long j__64199, x10_long k__64200, ::x10x::vector::Point3d centre__64196, x10_double charge__64197) : subCellsTemp(subCellsTemp), i__64198(i__64198), j__64199(j__64199), k__64200(k__64200), centre__64196(centre__64196), charge__64197(charge__64197) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:296-298";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__12_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__11_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 287 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >* localAtoms =
          ::x10aux::nullCheck(atoms)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>::__apply(
            p);
        {
            
            //#line 288 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::Runtime::ensureNotInAtomic();
            ::x10::lang::FinishState* fs__64681 = ::x10::lang::Runtime::startFinish();
            try {
                {
                    x10_long i__62222max__64202 = (((x10_long)(::x10aux::nullCheck(localAtoms)->FMGL(size))) - (((x10_long)1ll)));
                    {
                        x10_long i__64203;
                        for (i__64203 = ((x10_long)0ll); ((i__64203) <= (i__62222max__64202));
                             i__64203 = ((i__64203) + (((x10_long)1ll))))
                        {
                            x10_long l__64204 = i__64203;
                            
                            //#line 289 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            ::au::edu::anu::chem::mm::MMAtom* atom__64195 =
                              ::x10aux::nullCheck(localAtoms)->x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >::__apply(
                                l__64204);
                            
                            //#line 290 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            ::x10x::vector::Point3d centre__64196 =
                              ::x10aux::nullCheck(atom__64195)->FMGL(centre);
                            
                            //#line 291 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_double charge__64197 = ::x10aux::nullCheck(atom__64195)->FMGL(charge);
                            
                            //#line 293 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_long i__64198 = ((((x10_long)(::x10::lang::DoubleNatives::toInt(((centre__64196->FMGL(i)) / (halfCutoff)))))) + (halfNumSubCells));
                            
                            //#line 294 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_long j__64199 = ((((x10_long)(::x10::lang::DoubleNatives::toInt(((centre__64196->FMGL(j)) / (halfCutoff)))))) + (halfNumSubCells));
                            
                            //#line 295 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_long k__64200 = ((((x10_long)(::x10::lang::DoubleNatives::toInt(((centre__64196->FMGL(k)) / (halfCutoff)))))) + (halfNumSubCells));
                            
                            //#line 296 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            ::x10::lang::Runtime::runAsync(
                              ::x10aux::nullCheck(subCellsTemp->FMGL(dist))->__apply(
                                i__64198, j__64199, k__64200),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__12)))au_edu_anu_pme_PME__closure__12(subCellsTemp, i__64198, j__64199, k__64200, centre__64196, charge__64197))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc48) {
                {
                    ::x10::lang::CheckedThrowable* ct__64679 =
                      __exc48;
                    {
                        ::x10::lang::Runtime::pushException(
                          ct__64679);
                    }
                }
            }
            ::x10::lang::Runtime::stopFinish(fs__64681);
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    ::x10::lang::Point* p;
    x10_double halfCutoff;
    x10_long halfNumSubCells;
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atoms);
        buf.write(this->p);
        buf.write(this->halfCutoff);
        buf.write(this->halfNumSubCells);
        buf.write(this->subCellsTemp);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__11* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__11>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        ::x10::lang::Point* that_p = buf.read< ::x10::lang::Point*>();
        x10_double that_halfCutoff = buf.read<x10_double>();
        x10_long that_halfNumSubCells = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        au_edu_anu_pme_PME__closure__11* this_ = new (storage) au_edu_anu_pme_PME__closure__11(that_atoms, that_p, that_halfCutoff, that_halfNumSubCells, that_subCellsTemp);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__11(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, ::x10::lang::Point* p, x10_double halfCutoff, x10_long halfNumSubCells, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp) : atoms(atoms), p(p), halfCutoff(halfCutoff), halfNumSubCells(halfNumSubCells), subCellsTemp(subCellsTemp) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:286-300";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__11_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__10_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__64691;
            for (p__64691 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__64691));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__64691));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__11)))au_edu_anu_pme_PME__closure__11(atoms, p, halfCutoff, halfNumSubCells, subCellsTemp))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms;
    x10_double halfCutoff;
    x10_long halfNumSubCells;
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atoms);
        buf.write(this->halfCutoff);
        buf.write(this->halfNumSubCells);
        buf.write(this->subCellsTemp);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__10* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__10>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* that_atoms = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
        x10_double that_halfCutoff = buf.read<x10_double>();
        x10_long that_halfNumSubCells = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__10* this_ = new (storage) au_edu_anu_pme_PME__closure__10(that_atoms, that_halfCutoff, that_halfNumSubCells, that_subCellsTemp, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__10(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms, x10_double halfCutoff, x10_long halfNumSubCells, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp, ::x10::regionarray::Dist* __lowerer__var__0__) : atoms(atoms), halfCutoff(halfCutoff), halfNumSubCells(halfNumSubCells), subCellsTemp(subCellsTemp), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:286-300";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__10_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__14_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 303 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10aux::nullCheck(subCells)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::__set(
          i, j, k, ::x10aux::nullCheck(subCellsTemp->x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::__apply(
                                         i, j, k))->toRail());
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    x10_long i;
    x10_long j;
    x10_long k;
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->i);
        buf.write(this->j);
        buf.write(this->k);
        buf.write(this->subCellsTemp);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__14* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__14>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        x10_long that_i = buf.read<x10_long>();
        x10_long that_j = buf.read<x10_long>();
        x10_long that_k = buf.read<x10_long>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        au_edu_anu_pme_PME__closure__14* this_ = new (storage) au_edu_anu_pme_PME__closure__14(that_subCells, that_i, that_j, that_k, that_subCellsTemp);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__14(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, x10_long i, x10_long j, x10_long k, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp) : subCells(subCells), i(i), j(j), k(k), subCellsTemp(subCellsTemp) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:302-304";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__14_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__13_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* t__64745;
            for (t__64745 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(t__64745));
                 ) {
                ::x10::lang::Point* t__2061 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(t__64745));
                x10_long i = ::x10aux::nullCheck(t__2061)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)0))));
                x10_long j = ::x10aux::nullCheck(t__2061)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)1))));
                x10_long k = ::x10aux::nullCheck(t__2061)->x10::lang::Point::__apply(
                               ((x10_long)(((x10_int)2))));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__14)))au_edu_anu_pme_PME__closure__14(subCells, i, j, k, subCellsTemp))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->subCellsTemp);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__13* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__13>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* that_subCellsTemp = buf.read< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__13* this_ = new (storage) au_edu_anu_pme_PME__closure__13(that_subCells, that_subCellsTemp, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__13(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp, ::x10::regionarray::Dist* __lowerer__var__0__) : subCells(subCells), subCellsTemp(subCellsTemp), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:302-304";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__13_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__18_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class au_edu_anu_pme_PME__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::itable<au_edu_anu_pme_PME__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* __apply(){
        try {
            return ::au::edu::anu::pme::PME::getAtomsForSubcellList(subCells,
                                                                    haloListArray);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc52) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = __exc52;
                {
                    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::lang::Rail< ::x10::lang::Point* >* haloListArray;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->haloListArray);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__18* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__18>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::lang::Rail< ::x10::lang::Point* >* that_haloListArray = buf.read< ::x10::lang::Rail< ::x10::lang::Point* >*>();
        au_edu_anu_pme_PME__closure__18* this_ = new (storage) au_edu_anu_pme_PME__closure__18(that_subCells, that_haloListArray);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__18(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::lang::Rail< ::x10::lang::Point* >* haloListArray) : subCells(subCells), haloListArray(haloListArray) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:342";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__18_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__17_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 333 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_long placeId = ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>::getKey(::x10aux::nullCheck(placeEntry));
        
        //#line 334 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::util::ArrayList< ::x10::lang::Point*>* haloForPlace = ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>::getValue(::x10aux::nullCheck(placeEntry));
        
        //#line 335 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Rail< ::x10::lang::Point* >* haloListArray = ::x10aux::nullCheck(haloForPlace)->toRail();
        
        //#line 336 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        if ((::x10aux::struct_equals(placeId, ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))))
        {
            
            //#line 338 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long i__62307max__64217 = (((x10_long)(::x10aux::nullCheck(haloListArray)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__64218;
                for (i__64218 = ((x10_long)0ll); ((i__64218) <= (i__62307max__64217));
                     i__64218 = ((i__64218) + (((x10_long)1ll))))
                {
                    x10_long i__64219 = i__64218;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::lang::Point* p__64214 = ::x10aux::nullCheck(haloListArray)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                                                     i__64219);
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* v__64215 =
                      ::x10aux::nullCheck(subCells)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::__apply(
                        ::x10aux::nullCheck(haloListArray)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                          i__64219));
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__64216;
                    
                    //#line 640 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10aux::nullCheck(myAtomsCache)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__set(
                      (__extension__ ({
                          
                          //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ::x10::lang::Point* pt__64212 =
                            p__64214;
                          x10_long ret__64213;
                          
                          //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long offset__64211 = ((::x10aux::nullCheck(pt__64212)->x10::lang::Point::__apply(
                                                       ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min0)));
                          
                          //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(pt__64212)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              offset__64211 = ((((((offset__64211) * (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__64212)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min1)));
                              
                              //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long i__36722max__64208 =
                                ((::x10aux::nullCheck(pt__64212)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__64209;
                                  for (i__64209 = ((x10_long)2ll);
                                       ((i__64209) <= (i__36722max__64208));
                                       i__64209 = ((i__64209) + (((x10_long)1ll))))
                                  {
                                      x10_long i__64210 =
                                        i__64209;
                                      
                                      //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__64211 = ((((((offset__64211) * (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__64210) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__64212)->x10::lang::Point::__apply(
                                                                                                                                                  i__64210)))) - (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__64210) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          
                          //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ret__64213 = offset__64211;
                          ret__64213;
                      }))
                      , v__64215);
                    
                    //#line 641 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__64216 = v__64215;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__64216;
                }
            }
            
        } else {
            
            //#line 342 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* atomsForPlace =
              ::x10::lang::Runtime::evalAt< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* >(
                (__extension__ ({
                    ::x10::lang::Place alloc__62215 =  ::x10::lang::Place::_alloc();
                    (alloc__62215)->::x10::lang::Place::_constructor(
                      placeId);
                    alloc__62215;
                }))
                , reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >(sizeof(au_edu_anu_pme_PME__closure__18)))au_edu_anu_pme_PME__closure__18(subCells, haloListArray))),
                ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
            //#line 343 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long i__62325max__64229 = (((x10_long)(::x10aux::nullCheck(haloListArray)->FMGL(size))) - (((x10_long)1ll)));
            {
                x10_long i__64230;
                for (i__64230 = ((x10_long)0ll); ((i__64230) <= (i__62325max__64229));
                     i__64230 = ((i__64230) + (((x10_long)1ll))))
                {
                    x10_long i__64231 = i__64230;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10::lang::Point* p__64226 = ::x10aux::nullCheck(haloListArray)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                                                     i__64231);
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* v__64227 =
                      atomsForPlace->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                        i__64231);
                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__64228;
                    
                    //#line 640 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ::x10aux::nullCheck(myAtomsCache)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__set(
                      (__extension__ ({
                          
                          //#line 1221 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ::x10::lang::Point* pt__64224 =
                            p__64226;
                          x10_long ret__64225;
                          
                          //#line 1222 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          x10_long offset__64223 = ((::x10aux::nullCheck(pt__64224)->x10::lang::Point::__apply(
                                                       ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min0)));
                          
                          //#line 1223 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(pt__64224)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1224 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              offset__64223 = ((((((offset__64223) * (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt__64224)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min1)));
                              
                              //#line 1225 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                              x10_long i__36722max__64220 =
                                ((::x10aux::nullCheck(pt__64224)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__64221;
                                  for (i__64221 = ((x10_long)2ll);
                                       ((i__64221) <= (i__36722max__64220));
                                       i__64221 = ((i__64221) + (((x10_long)1ll))))
                                  {
                                      x10_long i__64222 =
                                        i__64221;
                                      
                                      //#line 1226 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                      offset__64223 = ((((((offset__64223) * (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__64222) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt__64224)->x10::lang::Point::__apply(
                                                                                                                                                  i__64222)))) - (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__64222) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          
                          //#line 1229 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                          ret__64225 = offset__64223;
                          ret__64225;
                      }))
                      , v__64227);
                    
                    //#line 641 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__64228 = v__64227;
                    
                    //#line 636 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                    ret__64228;
                }
            }
            
        }
        
    }
    
    // captured environment
    ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* placeEntry;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->placeEntry);
        buf.write(this->subCells);
        buf.write(this->myAtomsCache);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__17* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__17>();
        buf.record_reference(storage);
        ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* that_placeEntry = buf.read< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_myAtomsCache = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        au_edu_anu_pme_PME__closure__17* this_ = new (storage) au_edu_anu_pme_PME__closure__17(that_placeEntry, that_subCells, that_myAtomsCache);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__17(::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* placeEntry, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache) : placeEntry(placeEntry), subCells(subCells), myAtomsCache(myAtomsCache) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:332-347";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__17_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__16_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 316 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache =
          ::x10aux::nullCheck(atomsCache)->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__apply(
            ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
        
        //#line 317 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        if ((!::x10aux::struct_equals(myAtomsCache, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 318 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* haloPlaces =
               (new (::x10aux::alloc_z< ::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*> >()) ::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>());
            (haloPlaces)->::x10::util::HashMap<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>::_constructor(
              ((x10_long)8ll));
            
            //#line 321 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::Rail< x10_long >* boxIndex__64232 =
              (__extension__ ({
                ::x10::lang::Rail< x10_long >* t__66053 =
                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                ::x10aux::nullCheck(t__66053)->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)0ll), ((x10_long)0ll));
                ::x10aux::nullCheck(t__66053)->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)1ll), ((x10_long)0ll));
                ::x10aux::nullCheck(t__66053)->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)2ll), ((x10_long)0ll));
                t__66053;
            }))
            ;
            ::x10::regionarray::Region* boxIndex__64233 =
              ::x10aux::nullCheck(myAtomsCache)->FMGL(region);
            x10_long z__62242min__64234 = boxIndex__64233->min(
                                            ((x10_long)2ll));
            x10_long z__62242max__64235 = boxIndex__64233->max(
                                            ((x10_long)2ll));
            x10_long y__62264min__64236 = boxIndex__64233->min(
                                            ((x10_long)1ll));
            x10_long y__62264max__64237 = boxIndex__64233->max(
                                            ((x10_long)1ll));
            x10_long x__62285min__64238 = boxIndex__64233->min(
                                            ((x10_long)0ll));
            x10_long x__62285max__64239 = boxIndex__64233->max(
                                            ((x10_long)0ll));
            {
                x10_long x__64240;
                for (x__64240 = x__62285min__64238; ((x__64240) <= (x__62285max__64239));
                     x__64240 = ((x__64240) + (((x10_long)1ll))))
                {
                    x10_long x__64241 = x__64240;
                    ::x10aux::nullCheck(boxIndex__64232)->x10::lang::Rail< x10_long >::__set(
                      ((x10_long)0ll), x__64240);
                    {
                        x10_long y__64242;
                        for (y__64242 = y__62264min__64236;
                             ((y__64242) <= (y__62264max__64237));
                             y__64242 = ((y__64242) + (((x10_long)1ll))))
                        {
                            x10_long y__64243 = y__64242;
                            ::x10aux::nullCheck(boxIndex__64232)->x10::lang::Rail< x10_long >::__set(
                              ((x10_long)1ll), y__64242);
                            {
                                x10_long z__64244;
                                for (z__64244 = z__62242min__64234;
                                     ((z__64244) <= (z__62242max__64235));
                                     z__64244 = ((z__64244) + (((x10_long)1ll))))
                                {
                                    x10_long z__64245 = z__64244;
                                    ::x10aux::nullCheck(boxIndex__64232)->x10::lang::Rail< x10_long >::__set(
                                      ((x10_long)2ll), z__64244);
                                    ::x10::lang::Point* boxIndex__64246 =
                                      ::x10::lang::Point::make(
                                        boxIndex__64232);
                                    
                                    //#line 322 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    x10_long placeId__64205 =
                                      ::x10aux::nullCheck(::x10aux::nullCheck(subCells)->FMGL(dist))->__apply(
                                        x__64241, y__64243,
                                        z__64245)->FMGL(id);
                                    
                                    //#line 323 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10::util::ArrayList< ::x10::lang::Point*>* haloForPlace__64206 =
                                      haloPlaces->getOrElse(
                                        placeId__64205, ::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::lang::Point*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                    
                                    //#line 324 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    if ((::x10aux::struct_equals(haloForPlace__64206,
                                                                 reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                                    {
                                        
                                        //#line 325 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        haloForPlace__64206 =
                                          (__extension__ ({
                                            ::x10::util::ArrayList< ::x10::lang::Point*>* alloc__64207 =
                                               (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::lang::Point*> >()) ::x10::util::ArrayList< ::x10::lang::Point*>());
                                            (alloc__64207)->::x10::util::ArrayList< ::x10::lang::Point*>::_constructor();
                                            alloc__64207;
                                        }))
                                        ;
                                        
                                        //#line 326 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        haloPlaces->put(placeId__64205,
                                                        haloForPlace__64206);
                                    }
                                    
                                    //#line 328 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10aux::nullCheck(haloForPlace__64206)->add(
                                      boxIndex__64246);
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            {
                
                //#line 332 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::x10::lang::Runtime::ensureNotInAtomic();
                ::x10::lang::FinishState* fs__64798 = ::x10::lang::Runtime::startFinish();
                try {
                    {
                        {
                            ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>* placeEntry__62343;
                            for (placeEntry__62343 = ::x10::util::Set< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>::iterator(::x10aux::nullCheck(haloPlaces->entries()));
                                 ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>::hasNext(::x10aux::nullCheck(placeEntry__62343));
                                 ) {
                                ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>* placeEntry =
                                  ::x10::lang::Iterator< ::x10::util::Map__Entry<x10_long, ::x10::util::ArrayList< ::x10::lang::Point*>*>*>::next(::x10aux::nullCheck(placeEntry__62343));
                                ::x10::lang::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__17)))au_edu_anu_pme_PME__closure__17(placeEntry, subCells, myAtomsCache))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc53) {
                    {
                        ::x10::lang::CheckedThrowable* ct__64796 =
                          __exc53;
                        {
                            ::x10::lang::Runtime::pushException(
                              ct__64796);
                        }
                    }
                }
                ::x10::lang::Runtime::stopFinish(fs__64798);
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atomsCache);
        buf.write(this->subCells);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__16* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__16>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        au_edu_anu_pme_PME__closure__16* this_ = new (storage) au_edu_anu_pme_PME__closure__16(that_atomsCache, that_subCells);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__16(::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells) : atomsCache(atomsCache), subCells(subCells) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:315-349";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__16_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__15_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__64808;
            for (p__64808 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                      ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__64808));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__64808));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__16)))au_edu_anu_pme_PME__closure__16(atomsCache, subCells))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atomsCache);
        buf.write(this->subCells);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__15* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__15>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__15* this_ = new (storage) au_edu_anu_pme_PME__closure__15(that_atomsCache, that_subCells, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__15(::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::Dist* __lowerer__var__0__) : atomsCache(atomsCache), subCells(subCells), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:315-349";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__15_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__19_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class au_edu_anu_pme_PME__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::itable<au_edu_anu_pme_PME__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* __apply(x10_long i){
        
        //#line 361 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ::x10aux::nullCheck(subCells)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::__apply(
                 ::x10aux::nullCheck(boxList)->x10::lang::Rail< ::x10::lang::Point* >::__apply(
                   i));
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::lang::Rail< ::x10::lang::Point* >* boxList;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->boxList);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__19* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__19>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::lang::Rail< ::x10::lang::Point* >* that_boxList = buf.read< ::x10::lang::Rail< ::x10::lang::Point* >*>();
        au_edu_anu_pme_PME__closure__19* this_ = new (storage) au_edu_anu_pme_PME__closure__19(that_subCells, that_boxList);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__19(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::lang::Rail< ::x10::lang::Point* >* boxList) : subCells(subCells), boxList(boxList) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:361";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__19_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__22_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__22 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__22> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 379 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* thisCell__64308 =
          (__extension__ ({
            
            //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            x10_long i__64309 = x__64338;
            x10_long i__64310 = y__64340;
            x10_long i__64311 = z__64342;
            ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__64312;
            
            //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
            ret__64312 = ::x10aux::nullCheck(cachedAtoms)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                           (__extension__ ({
                               
                               //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               x10_long i__64248 = i__64309;
                               x10_long i__64249 = i__64310;
                               x10_long i__64250 = i__64311;
                               x10_long ret__64251;
                               
                               //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               x10_long offset__64247 = ((i__64248) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min0)));
                               
                               //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               offset__64247 = ((((((offset__64247) * (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_stride1)))) + (i__64249))) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min1)));
                               
                               //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               offset__64247 = ((((((offset__64247) * (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                         ((x10_long)0ll))))) + (i__64250))) - (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                 ((x10_long)1ll))));
                               
                               //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                               ret__64251 = offset__64247;
                               ret__64251;
                           }))
                           );
            ret__64312;
        }))
        ;
        
        //#line 380 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_double cellDirectEnergy__64313 = 0.0;
        
        //#line 381 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        {
            x10_long i__64314;
            for (i__64314 = ((x__64338) - (((x10_long)2ll)));
                 ((i__64314) <= (x__64338)); i__64314 = ((i__64314) + (((x10_long)1ll))))
            {
                
                //#line 382 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                x10_int n__64315 = ((x10_int)0);
                
                //#line 383 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                if (((i__64314) < (((x10_long)0ll)))) {
                    
                    //#line 384 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                    n__64315 = ((x10_int)-1);
                }
                
                //#line 386 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                {
                    x10_long j__64316;
                    for (j__64316 = ((y__64340) - (((x10_long)2ll)));
                         ((j__64316) <= (((y__64340) + (((x10_long)2ll)))));
                         j__64316 = ((j__64316) + (((x10_long)1ll))))
                    {
                        
                        //#line 387 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        x10_int n__64317 = ((x10_int)0);
                        
                        //#line 388 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        if (((j__64316) < (((x10_long)0ll))))
                        {
                            
                            //#line 389 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            n__64317 = ((x10_int)-1);
                        } else 
                        //#line 390 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        if (((j__64316) > (((numSubCells) - (((x10_long)1ll))))))
                        {
                            
                            //#line 391 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            n__64317 = ((x10_int)1);
                        }
                        
                        //#line 393 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        {
                            x10_long k__64318;
                            for (k__64318 = ((z__64342) - (((x10_long)2ll)));
                                 ((k__64318) <= (((z__64342) + (((x10_long)2ll)))));
                                 k__64318 = ((k__64318) + (((x10_long)1ll))))
                            {
                                
                                //#line 394 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_int n__64319 = ((x10_int)0);
                                
                                //#line 395 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                if (((k__64318) < (((x10_long)0ll))))
                                {
                                    
                                    //#line 396 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    n__64319 = ((x10_int)-1);
                                } else 
                                //#line 397 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                if (((k__64318) > (((numSubCells) - (((x10_long)1ll))))))
                                {
                                    
                                    //#line 398 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    n__64319 = ((x10_int)1);
                                }
                                
                                //#line 401 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                if (((((i__64314) < (x__64338)) ||
                                    ((::x10aux::struct_equals(i__64314,
                                                              x__64338)) &&
                                    ((j__64316) < (y__64340)))) ||
                                    (((::x10aux::struct_equals(i__64314,
                                                               x__64338)) &&
                                    (::x10aux::struct_equals(j__64316,
                                                             y__64340))) &&
                                    ((k__64318) < (z__64342)))))
                                {
                                    
                                    //#line 402 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10x::vector::Vector3d translation__64320 =
                                      (__extension__ ({
                                        
                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__64321 =
                                          ((x10_long)(n__64315));
                                        x10_long i__64322 =
                                          ((x10_long)(n__64317));
                                        x10_long i__64323 =
                                          ((x10_long)(n__64319));
                                        ::x10x::vector::Vector3d ret__64324;
                                        
                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__64324 = ::x10aux::nullCheck(translations)->FMGL(raw)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                       (__extension__ ({
                                                           
                                                           //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long i__64253 =
                                                             i__64321;
                                                           x10_long i__64254 =
                                                             i__64322;
                                                           x10_long i__64255 =
                                                             i__64323;
                                                           x10_long ret__64256;
                                                           
                                                           //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long offset__64252 =
                                                             ((i__64253) - (::x10aux::nullCheck(translations)->FMGL(layout_min0)));
                                                           
                                                           //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__64252 =
                                                             ((((((offset__64252) * (::x10aux::nullCheck(translations)->FMGL(layout_stride1)))) + (i__64254))) - (::x10aux::nullCheck(translations)->FMGL(layout_min1)));
                                                           
                                                           //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__64252 =
                                                             ((((((offset__64252) * (::x10aux::nullCheck(::x10aux::nullCheck(translations)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                       ((x10_long)0ll))))) + (i__64255))) - (::x10aux::nullCheck(::x10aux::nullCheck(translations)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                               ((x10_long)1ll))));
                                                           
                                                           //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           ret__64256 =
                                                             offset__64252;
                                                           ret__64256;
                                                       }))
                                                       );
                                        ret__64324;
                                    }))
                                    ;
                                    
                                    //#line 403 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* otherCell__64325 =
                                      (__extension__ ({
                                        
                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__64326 =
                                          i__64314;
                                        x10_long i__64327 =
                                          j__64316;
                                        x10_long i__64328 =
                                          k__64318;
                                        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__64329;
                                        
                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__64329 = ::x10aux::nullCheck(cachedAtoms)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                                       (__extension__ ({
                                                           
                                                           //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long i__64258 =
                                                             i__64326;
                                                           x10_long i__64259 =
                                                             i__64327;
                                                           x10_long i__64260 =
                                                             i__64328;
                                                           x10_long ret__64261;
                                                           
                                                           //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long offset__64257 =
                                                             ((i__64258) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min0)));
                                                           
                                                           //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__64257 =
                                                             ((((((offset__64257) * (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_stride1)))) + (i__64259))) - (::x10aux::nullCheck(cachedAtoms)->FMGL(layout_min1)));
                                                           
                                                           //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__64257 =
                                                             ((((((offset__64257) * (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                       ((x10_long)0ll))))) + (i__64260))) - (::x10aux::nullCheck(::x10aux::nullCheck(cachedAtoms)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                               ((x10_long)1ll))));
                                                           
                                                           //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           ret__64261 =
                                                             offset__64257;
                                                           ret__64261;
                                                       }))
                                                       );
                                        ret__64329;
                                    }))
                                    ;
                                    
                                    //#line 404 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    x10_long i__62363max__64286 =
                                      (((x10_long)(::x10aux::nullCheck(otherCell__64325)->FMGL(size))) - (((x10_long)1ll)));
                                    {
                                        x10_long i__64287;
                                        for (i__64287 = ((x10_long)0ll);
                                             ((i__64287) <= (i__62363max__64286));
                                             i__64287 = ((i__64287) + (((x10_long)1ll))))
                                        {
                                            x10_long otherAtomIndex__64288 =
                                              i__64287;
                                            
                                            //#line 405 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::au::edu::anu::chem::PointCharge otherAtom__64279 =
                                              ::x10aux::nullCheck(otherCell__64325)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                otherAtomIndex__64288);
                                            
                                            //#line 406 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10x::vector::Point3d imageLoc__64280 =
                                              (__extension__ ({
                                                ::x10x::vector::Point3d this__64281 =
                                                  otherAtom__64279->FMGL(centre);
                                                
                                                //#line 31 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                ::x10x::vector::Vector3d that__64282 =
                                                  translation__64320;
                                                (__extension__ ({
                                                    
                                                    //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Vector3d b__64283 =
                                                      that__64282;
                                                    (__extension__ ({
                                                        
                                                        //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ::x10x::vector::Point3d alloc__64284 =
                                                          
                                                        ::x10x::vector::Point3d::_alloc();
                                                        
                                                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double i__64262 =
                                                          ((this__64281->FMGL(i)) + (b__64283->FMGL(i)));
                                                        x10_double j__64263 =
                                                          ((this__64281->FMGL(j)) + (b__64283->FMGL(j)));
                                                        x10_double k__64264 =
                                                          ((this__64281->FMGL(k)) + (b__64283->FMGL(k)));
                                                        
                                                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        alloc__64284->FMGL(i) =
                                                          i__64262;
                                                        alloc__64284->FMGL(j) =
                                                          j__64263;
                                                        alloc__64284->FMGL(k) =
                                                          k__64264;
                                                        alloc__64284;
                                                    }))
                                                    ;
                                                }))
                                                ;
                                            }))
                                            ;
                                            
                                            //#line 407 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double otherAtomCharge__64285 =
                                              otherAtom__64279->FMGL(charge);
                                            
                                            //#line 408 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62345max__64276 =
                                              (((x10_long)(::x10aux::nullCheck(thisCell__64308)->FMGL(size))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__64277;
                                                for (i__64277 =
                                                       ((x10_long)0ll);
                                                     ((i__64277) <= (i__62345max__64276));
                                                     i__64277 =
                                                       ((i__64277) + (((x10_long)1ll))))
                                                {
                                                    x10_long thisAtomIndex__64278 =
                                                      i__64277;
                                                    
                                                    //#line 409 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::au::edu::anu::chem::PointCharge thisAtom__64268 =
                                                      ::x10aux::nullCheck(thisCell__64308)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                        thisAtomIndex__64278);
                                                    
                                                    //#line 410 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_double rSquared__64269 =
                                                      (__extension__ ({
                                                        ::x10x::vector::Point3d this__64270 =
                                                          thisAtom__64268->FMGL(centre);
                                                        
                                                        //#line 65 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ::x10x::vector::Point3d b__64271 =
                                                          imageLoc__64280;
                                                        x10_double ret__64272;
                                                        
                                                        //#line 66 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double di__64265 =
                                                          ((this__64270->FMGL(i)) - (b__64271->FMGL(i)));
                                                        
                                                        //#line 67 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double dj__64266 =
                                                          ((this__64270->FMGL(j)) - (b__64271->FMGL(j)));
                                                        
                                                        //#line 68 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double dk__64267 =
                                                          ((this__64270->FMGL(k)) - (b__64271->FMGL(k)));
                                                        
                                                        //#line 69 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ret__64272 =
                                                          ((((((di__64265) * (di__64265))) + (((dj__64266) * (dj__64266))))) + (((dk__64267) * (dk__64267))));
                                                        ret__64272;
                                                    }))
                                                    ;
                                                    
                                                    //#line 411 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    if (((rSquared__64269) < (cutoffSquared)))
                                                    {
                                                        
                                                        //#line 412 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                        x10_double r__64273 =
                                                          ::x10::lang::MathNatives::sqrt(rSquared__64269);
                                                        
                                                        //#line 413 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                        x10_double chargeProduct__64274 =
                                                          ((thisAtom__64268->FMGL(charge)) * (otherAtomCharge__64285));
                                                        
                                                        //#line 414 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                        x10_double imageDirectComponent__64275 =
                                                          ((((chargeProduct__64274) * (::x10::lang::MathNatives::erfc(((beta) * (r__64273)))))) / (r__64273));
                                                        
                                                        //#line 415 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                        cellDirectEnergy__64313 =
                                                          ((cellDirectEnergy__64313) + (imageDirectComponent__64275));
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
        
        //#line 425 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_long i__62399max__64305 = (((x10_long)(::x10aux::nullCheck(thisCell__64308)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__64306;
            for (i__64306 = ((x10_long)0ll); ((i__64306) <= (i__62399max__64305));
                 i__64306 = ((i__64306) + (((x10_long)1ll))))
            {
                x10_long i__64307 = i__64306;
                
                //#line 426 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::au::edu::anu::chem::PointCharge thisAtom__64304 =
                  ::x10aux::nullCheck(thisCell__64308)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                    i__64307);
                
                //#line 427 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                x10_long i__62381max__64301 = ((i__64307) - (((x10_long)1ll)));
                {
                    x10_long i__64302;
                    for (i__64302 = ((x10_long)0ll); ((i__64302) <= (i__62381max__64301));
                         i__64302 = ((i__64302) + (((x10_long)1ll))))
                    {
                        x10_long j__64303 = i__64302;
                        
                        //#line 428 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        ::au::edu::anu::chem::PointCharge otherAtom__64292 =
                          ::x10aux::nullCheck(thisCell__64308)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                            j__64303);
                        
                        //#line 429 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        ::x10x::vector::Vector3d rjri__64293 =
                          (__extension__ ({
                            ::x10x::vector::Point3d this__64294 =
                              otherAtom__64292->FMGL(centre);
                            
                            //#line 61 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                            ::x10x::vector::Point3d that__64295 =
                              thisAtom__64304->FMGL(centre);
                            (__extension__ ({
                                
                                //#line 57 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                ::x10x::vector::Point3d b__64296 =
                                  that__64295;
                                (__extension__ ({
                                    
                                    //#line 58 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                    ::x10x::vector::Vector3d alloc__64297 =
                                       ::x10x::vector::Vector3d::_alloc();
                                    
                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double i__64289 =
                                      ((this__64294->FMGL(i)) - (b__64296->FMGL(i)));
                                    x10_double j__64290 =
                                      ((this__64294->FMGL(j)) - (b__64296->FMGL(j)));
                                    x10_double k__64291 =
                                      ((this__64294->FMGL(k)) - (b__64296->FMGL(k)));
                                    
                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    alloc__64297->FMGL(i) =
                                      i__64289;
                                    alloc__64297->FMGL(j) =
                                      j__64290;
                                    alloc__64297->FMGL(k) =
                                      k__64291;
                                    alloc__64297;
                                }))
                                ;
                            }))
                            ;
                        }))
                        ;
                        
                        //#line 430 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        x10_double rSquared__64298 = ((((((rjri__64293->FMGL(i)) * (rjri__64293->FMGL(i)))) + (((rjri__64293->FMGL(j)) * (rjri__64293->FMGL(j)))))) + (((rjri__64293->FMGL(k)) * (rjri__64293->FMGL(k)))));
                        
                        //#line 431 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                        if (((rSquared__64298) < (cutoffSquared)))
                        {
                            
                            //#line 432 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_double r__64299 = ::x10::lang::MathNatives::sqrt(rSquared__64298);
                            
                            //#line 433 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            x10_double directComponent__64300 =
                              ((((((thisAtom__64304->FMGL(charge)) * (otherAtom__64292->FMGL(charge)))) * (::x10::lang::MathNatives::erfc(((beta) * (r__64299)))))) / (r__64299));
                            
                            //#line 434 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                            cellDirectEnergy__64313 = ((cellDirectEnergy__64313) + (directComponent__64300));
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 438 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(cellDirectEnergy__64313);
    }
    
    // captured environment
    x10_long x__64338;
    x10_long y__64340;
    x10_long z__64342;
    ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* cachedAtoms;
    x10_long numSubCells;
    ::x10::regionarray::Array< ::x10x::vector::Vector3d>* translations;
    x10_double cutoffSquared;
    x10_double beta;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->x__64338);
        buf.write(this->y__64340);
        buf.write(this->z__64342);
        buf.write(this->cachedAtoms);
        buf.write(this->numSubCells);
        buf.write(this->translations);
        buf.write(this->cutoffSquared);
        buf.write(this->beta);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__22* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__22>();
        buf.record_reference(storage);
        x10_long that_x__64338 = buf.read<x10_long>();
        x10_long that_y__64340 = buf.read<x10_long>();
        x10_long that_z__64342 = buf.read<x10_long>();
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_cachedAtoms = buf.read< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        x10_long that_numSubCells = buf.read<x10_long>();
        ::x10::regionarray::Array< ::x10x::vector::Vector3d>* that_translations = buf.read< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>();
        x10_double that_cutoffSquared = buf.read<x10_double>();
        x10_double that_beta = buf.read<x10_double>();
        au_edu_anu_pme_PME__closure__22* this_ = new (storage) au_edu_anu_pme_PME__closure__22(that_x__64338, that_y__64340, that_z__64342, that_cachedAtoms, that_numSubCells, that_translations, that_cutoffSquared, that_beta);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__22(x10_long x__64338, x10_long y__64340, x10_long z__64342, ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* cachedAtoms, x10_long numSubCells, ::x10::regionarray::Array< ::x10x::vector::Vector3d>* translations, x10_double cutoffSquared, x10_double beta) : x__64338(x__64338), y__64340(y__64340), z__64342(z__64342), cachedAtoms(cachedAtoms), numSubCells(numSubCells), translations(translations), cutoffSquared(cutoffSquared), beta(beta) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:378-439";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__22_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__21_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 375 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* cachedAtoms =
          ::x10aux::nullCheck(atomsCache)->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__apply(
            ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
        
        //#line 376 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array< ::x10x::vector::Vector3d>* translations =
          imageTranslations->x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>::__apply();
        
        //#line 377 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(subCellsDist)->__apply(
                                                    ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 378 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* p__64330 = localRegion;
        x10_long z__62418min__64331 = ::x10aux::nullCheck(p__64330)->min(
                                        ((x10_long)2ll));
        x10_long z__62418max__64332 = ::x10aux::nullCheck(p__64330)->max(
                                        ((x10_long)2ll));
        x10_long y__62437min__64333 = ::x10aux::nullCheck(p__64330)->min(
                                        ((x10_long)1ll));
        x10_long y__62437max__64334 = ::x10aux::nullCheck(p__64330)->max(
                                        ((x10_long)1ll));
        x10_long x__62456min__64335 = ::x10aux::nullCheck(p__64330)->min(
                                        ((x10_long)0ll));
        x10_long x__62456max__64336 = ::x10aux::nullCheck(p__64330)->max(
                                        ((x10_long)0ll));
        {
            x10_long x__64337;
            for (x__64337 = x__62456min__64335; ((x__64337) <= (x__62456max__64336));
                 x__64337 = ((x__64337) + (((x10_long)1ll))))
            {
                x10_long x__64338 = x__64337;
                {
                    x10_long y__64339;
                    for (y__64339 = y__62437min__64333; ((y__64339) <= (y__62437max__64334));
                         y__64339 = ((y__64339) + (((x10_long)1ll))))
                    {
                        x10_long y__64340 = y__64339;
                        {
                            x10_long z__64341;
                            for (z__64341 = z__62418min__64331;
                                 ((z__64341) <= (z__62418max__64332));
                                 z__64341 = ((z__64341) + (((x10_long)1ll))))
                            {
                                x10_long z__64342 = z__64341;
                                ::x10::lang::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__22)))au_edu_anu_pme_PME__closure__22(x__64338, y__64340, z__64342, cachedAtoms, numSubCells, translations, cutoffSquared, beta))));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> imageTranslations;
    ::x10::regionarray::Dist* subCellsDist;
    x10_long numSubCells;
    x10_double cutoffSquared;
    x10_double beta;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atomsCache);
        buf.write(this->imageTranslations);
        buf.write(this->subCellsDist);
        buf.write(this->numSubCells);
        buf.write(this->cutoffSquared);
        buf.write(this->beta);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__21* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__21>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> that_imageTranslations = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >();
        ::x10::regionarray::Dist* that_subCellsDist = buf.read< ::x10::regionarray::Dist*>();
        x10_long that_numSubCells = buf.read<x10_long>();
        x10_double that_cutoffSquared = buf.read<x10_double>();
        x10_double that_beta = buf.read<x10_double>();
        au_edu_anu_pme_PME__closure__21* this_ = new (storage) au_edu_anu_pme_PME__closure__21(that_atomsCache, that_imageTranslations, that_subCellsDist, that_numSubCells, that_cutoffSquared, that_beta);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__21(::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> imageTranslations, ::x10::regionarray::Dist* subCellsDist, x10_long numSubCells, x10_double cutoffSquared, x10_double beta) : atomsCache(atomsCache), imageTranslations(imageTranslations), subCellsDist(subCellsDist), numSubCells(numSubCells), cutoffSquared(cutoffSquared), beta(beta) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:374-440";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__21_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__20_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__64827;
            for (place__64827 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                          ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__64827));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__64827));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__21)))au_edu_anu_pme_PME__closure__21(atomsCache, imageTranslations, subCellsDist, numSubCells, cutoffSquared, beta))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> imageTranslations;
    ::x10::regionarray::Dist* subCellsDist;
    x10_long numSubCells;
    x10_double cutoffSquared;
    x10_double beta;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->atomsCache);
        buf.write(this->imageTranslations);
        buf.write(this->subCellsDist);
        buf.write(this->numSubCells);
        buf.write(this->cutoffSquared);
        buf.write(this->beta);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__20* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__20>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> that_imageTranslations = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >();
        ::x10::regionarray::Dist* that_subCellsDist = buf.read< ::x10::regionarray::Dist*>();
        x10_long that_numSubCells = buf.read<x10_long>();
        x10_double that_cutoffSquared = buf.read<x10_double>();
        x10_double that_beta = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__20* this_ = new (storage) au_edu_anu_pme_PME__closure__20(that_atomsCache, that_imageTranslations, that_subCellsDist, that_numSubCells, that_cutoffSquared, that_beta, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__20(::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> imageTranslations, ::x10::regionarray::Dist* subCellsDist, x10_long numSubCells, x10_double cutoffSquared, x10_double beta, ::x10::regionarray::Dist* __lowerer__var__0__) : atomsCache(atomsCache), imageTranslations(imageTranslations), subCellsDist(subCellsDist), numSubCells(numSubCells), cutoffSquared(cutoffSquared), beta(beta), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:374-440";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__20_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__24_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__24 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__24> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 456 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* localSubCells =
          ::x10aux::nullCheck(subCells)->x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::getLocalPortion();
        
        //#line 457 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localSubCells)->FMGL(region);
        
        //#line 458 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_double mySelfEnergy = 0.0;
        
        //#line 459 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* p__64356 = localRegion;
        x10_long k__62495min__64357 = ::x10aux::nullCheck(p__64356)->min(
                                        ((x10_long)2ll));
        x10_long k__62495max__64358 = ::x10aux::nullCheck(p__64356)->max(
                                        ((x10_long)2ll));
        x10_long j__62514min__64359 = ::x10aux::nullCheck(p__64356)->min(
                                        ((x10_long)1ll));
        x10_long j__62514max__64360 = ::x10aux::nullCheck(p__64356)->max(
                                        ((x10_long)1ll));
        x10_long i__62533min__64361 = ::x10aux::nullCheck(p__64356)->min(
                                        ((x10_long)0ll));
        x10_long i__62533max__64362 = ::x10aux::nullCheck(p__64356)->max(
                                        ((x10_long)0ll));
        {
            x10_long i__64363;
            for (i__64363 = i__62533min__64361; ((i__64363) <= (i__62533max__64362));
                 i__64363 = ((i__64363) + (((x10_long)1ll))))
            {
                x10_long i__64364 = i__64363;
                {
                    x10_long j__64365;
                    for (j__64365 = j__62514min__64359; ((j__64365) <= (j__62514max__64360));
                         j__64365 = ((j__64365) + (((x10_long)1ll))))
                    {
                        x10_long j__64366 = j__64365;
                        {
                            x10_long k__64367;
                            for (k__64367 = k__62495min__64357;
                                 ((k__64367) <= (k__62495max__64358));
                                 k__64367 = ((k__64367) + (((x10_long)1ll))))
                            {
                                x10_long k__64368 = k__64367;
                                
                                //#line 460 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* thisCell__64351 =
                                  (__extension__ ({
                                    
                                    //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__64352 = i__64364;
                                    x10_long i__64353 = j__64366;
                                    x10_long i__64354 = k__64368;
                                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__64355;
                                    
                                    //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__64355 = ::x10aux::nullCheck(localSubCells)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                                   (__extension__ ({
                                                       
                                                       //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__64344 =
                                                         i__64352;
                                                       x10_long i__64345 =
                                                         i__64353;
                                                       x10_long i__64346 =
                                                         i__64354;
                                                       x10_long ret__64347;
                                                       
                                                       //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long offset__64343 =
                                                         ((i__64344) - (::x10aux::nullCheck(localSubCells)->FMGL(layout_min0)));
                                                       
                                                       //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64343 =
                                                         ((((((offset__64343) * (::x10aux::nullCheck(localSubCells)->FMGL(layout_stride1)))) + (i__64345))) - (::x10aux::nullCheck(localSubCells)->FMGL(layout_min1)));
                                                       
                                                       //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64343 =
                                                         ((((((offset__64343) * (::x10aux::nullCheck(::x10aux::nullCheck(localSubCells)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                   ((x10_long)0ll))))) + (i__64346))) - (::x10aux::nullCheck(::x10aux::nullCheck(localSubCells)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)1ll))));
                                                       
                                                       //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       ret__64347 =
                                                         offset__64343;
                                                       ret__64347;
                                                   }))
                                                   );
                                    ret__64355;
                                }))
                                ;
                                
                                //#line 461 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_long i__62476max__64348 =
                                  (((x10_long)(::x10aux::nullCheck(thisCell__64351)->FMGL(size))) - (((x10_long)1ll)));
                                {
                                    x10_long i__64349;
                                    for (i__64349 = ((x10_long)0ll);
                                         ((i__64349) <= (i__62476max__64348));
                                         i__64349 = ((i__64349) + (((x10_long)1ll))))
                                    {
                                        x10_long thisAtom__64350 =
                                          i__64349;
                                        
                                        //#line 462 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        mySelfEnergy = ((mySelfEnergy) + (((::x10aux::nullCheck(thisCell__64351)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                                              thisAtom__64350)->FMGL(charge)) * (::x10aux::nullCheck(thisCell__64351)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                                                                                   thisAtom__64350)->FMGL(charge)))));
                                    }
                                }
                                
                            }
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 465 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(mySelfEnergy);
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__24* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__24>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        au_edu_anu_pme_PME__closure__24* this_ = new (storage) au_edu_anu_pme_PME__closure__24(that_subCells);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__24(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells) : subCells(subCells) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:455-466";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__24_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__23_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__23 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__23> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__64845;
            for (place__64845 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                          ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__64845));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__64845));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__24)))au_edu_anu_pme_PME__closure__24(subCells))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->subCells);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__23* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__23>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* that_subCells = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__23* this_ = new (storage) au_edu_anu_pme_PME__closure__23(that_subCells, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__23(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells, ::x10::regionarray::Dist* __lowerer__var__0__) : subCells(subCells), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:455-466";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__23_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__26_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__26 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__26> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 488 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_double>* qLocal = ::x10aux::nullCheck(Q)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 489 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* localGridRegion = ::x10aux::nullCheck(qLocal)->FMGL(region);
        
        //#line 490 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        if (!(::x10aux::nullCheck(localGridRegion)->isEmpty())) {
            
            //#line 491 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10aux::nullCheck(qLocal)->x10::regionarray::Array<x10_double>::clear();
            
            //#line 492 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long gridSize0 = ::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                   ((x10_long)0ll));
            
            //#line 493 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long gridSize1 = ::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                   ((x10_long)1ll));
            
            //#line 494 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long gridSize2 = ::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                   ((x10_long)2ll));
            
            //#line 495 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* myAtomsCache =
              ::x10aux::nullCheck(atomsCache)->x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::__apply(
                ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
            
            //#line 497 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::regionarray::Region* subCellHaloRegion =
              ::au::edu::anu::pme::PME::getSubcellHaloRegionForPlace(
                gridSize0, numSubCells, splineOrder, localGridRegion,
                subCellRegion);
            
            //#line 499 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::Rail< x10_double >* iSpline = ::x10::lang::Rail< x10_double >::_make(((x10_long)(splineOrder)));
            
            //#line 500 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::Rail< x10_double >* jSpline = ::x10::lang::Rail< x10_double >::_make(((x10_long)(splineOrder)));
            
            //#line 501 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::lang::Rail< x10_double >* kSpline = ::x10::lang::Rail< x10_double >::_make(((x10_long)(splineOrder)));
            
            //#line 503 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long qiMin = ::x10aux::nullCheck(localGridRegion)->min(
                               ((x10_long)0ll));
            
            //#line 504 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long qiMax = ::x10aux::nullCheck(localGridRegion)->max(
                               ((x10_long)0ll));
            
            //#line 505 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long qjMin = ::x10aux::nullCheck(localGridRegion)->min(
                               ((x10_long)1ll));
            
            //#line 506 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long qjMax = ::x10aux::nullCheck(localGridRegion)->max(
                               ((x10_long)1ll));
            
            //#line 508 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::regionarray::Region* p__64486 = subCellHaloRegion;
            x10_long z__62626min__64487 = ::x10aux::nullCheck(p__64486)->min(
                                            ((x10_long)2ll));
            x10_long z__62626max__64488 = ::x10aux::nullCheck(p__64486)->max(
                                            ((x10_long)2ll));
            x10_long y__62645min__64489 = ::x10aux::nullCheck(p__64486)->min(
                                            ((x10_long)1ll));
            x10_long y__62645max__64490 = ::x10aux::nullCheck(p__64486)->max(
                                            ((x10_long)1ll));
            x10_long x__62664min__64491 = ::x10aux::nullCheck(p__64486)->min(
                                            ((x10_long)0ll));
            x10_long x__62664max__64492 = ::x10aux::nullCheck(p__64486)->max(
                                            ((x10_long)0ll));
            {
                x10_long x__64493;
                for (x__64493 = x__62664min__64491; ((x__64493) <= (x__62664max__64492));
                     x__64493 = ((x__64493) + (((x10_long)1ll))))
                {
                    x10_long x__64494 = x__64493;
                    {
                        x10_long y__64495;
                        for (y__64495 = y__62645min__64489;
                             ((y__64495) <= (y__62645max__64490));
                             y__64495 = ((y__64495) + (((x10_long)1ll))))
                        {
                            x10_long y__64496 = y__64495;
                            {
                                x10_long z__64497;
                                for (z__64497 = z__62626min__64487;
                                     ((z__64497) <= (z__62626max__64488));
                                     z__64497 = ((z__64497) + (((x10_long)1ll))))
                                {
                                    x10_long z__64498 = z__64497;
                                    
                                    //#line 509 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* thisCell__64481 =
                                      (__extension__ ({
                                        
                                        //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        x10_long i__64482 =
                                          x__64494;
                                        x10_long i__64483 =
                                          y__64496;
                                        x10_long i__64484 =
                                          z__64498;
                                        ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* ret__64485;
                                        
                                        //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                        ret__64485 = ::x10aux::nullCheck(myAtomsCache)->FMGL(raw)->x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::__apply(
                                                       (__extension__ ({
                                                           
                                                           //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long i__64370 =
                                                             i__64482;
                                                           x10_long i__64371 =
                                                             i__64483;
                                                           x10_long i__64372 =
                                                             i__64484;
                                                           x10_long ret__64373;
                                                           
                                                           //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           x10_long offset__64369 =
                                                             ((i__64370) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min0)));
                                                           
                                                           //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__64369 =
                                                             ((((((offset__64369) * (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_stride1)))) + (i__64371))) - (::x10aux::nullCheck(myAtomsCache)->FMGL(layout_min1)));
                                                           
                                                           //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           offset__64369 =
                                                             ((((((offset__64369) * (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                       ((x10_long)0ll))))) + (i__64372))) - (::x10aux::nullCheck(::x10aux::nullCheck(myAtomsCache)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                               ((x10_long)1ll))));
                                                           
                                                           //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                           ret__64373 =
                                                             offset__64369;
                                                           ret__64373;
                                                       }))
                                                       );
                                        ret__64485;
                                    }))
                                    ;
                                    
                                    //#line 510 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    x10_long i__62607max__64478 =
                                      (((x10_long)(::x10aux::nullCheck(thisCell__64481)->FMGL(size))) - (((x10_long)1ll)));
                                    {
                                        x10_long i__64479;
                                        for (i__64479 = ((x10_long)0ll);
                                             ((i__64479) <= (i__62607max__64478));
                                             i__64479 = ((i__64479) + (((x10_long)1ll))))
                                        {
                                            x10_long atomIndex__64480 =
                                              i__64479;
                                            
                                            //#line 511 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::au::edu::anu::chem::PointCharge atom__64464 =
                                              ::x10aux::nullCheck(thisCell__64481)->x10::lang::Rail< ::au::edu::anu::chem::PointCharge >::__apply(
                                                atomIndex__64480);
                                            
                                            //#line 512 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double q__64465 =
                                              atom__64464->FMGL(charge);
                                            
                                            //#line 513 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10x::vector::Point3d u__64466 =
                                              (__extension__ ({
                                                ::x10x::vector::Point3d this__64467 =
                                                  (__extension__ ({
                                                    ::x10x::vector::Point3d this__64468 =
                                                      atom__64464->FMGL(centre);
                                                    
                                                    //#line 50 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Vector3d v__64469 =
                                                      scalingVector;
                                                    (__extension__ ({
                                                        
                                                        //#line 51 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ::x10x::vector::Point3d alloc__64470 =
                                                          
                                                        ::x10x::vector::Point3d::_alloc();
                                                        
                                                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double i__64374 =
                                                          ((this__64468->FMGL(i)) * (v__64469->FMGL(i)));
                                                        x10_double j__64375 =
                                                          ((this__64468->FMGL(j)) * (v__64469->FMGL(j)));
                                                        x10_double k__64376 =
                                                          ((this__64468->FMGL(k)) * (v__64469->FMGL(k)));
                                                        
                                                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        alloc__64470->FMGL(i) =
                                                          i__64374;
                                                        alloc__64470->FMGL(j) =
                                                          j__64375;
                                                        alloc__64470->FMGL(k) =
                                                          k__64376;
                                                        alloc__64470;
                                                    }))
                                                    ;
                                                }))
                                                ;
                                                
                                                //#line 31 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                ::x10x::vector::Vector3d that__64471 =
                                                  (__extension__ ({
                                                    
                                                    //#line 513 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10x::vector::Vector3d alloc__64472 =
                                                       ::x10x::vector::Vector3d::_alloc();
                                                    
                                                    //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    x10_double i__64377 =
                                                      saved_this->FMGL(K1);
                                                    x10_double j__64378 =
                                                      saved_this->FMGL(K2);
                                                    x10_double k__64379 =
                                                      saved_this->FMGL(K3);
                                                    
                                                    //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                    alloc__64472->FMGL(i) =
                                                      i__64377;
                                                    alloc__64472->FMGL(j) =
                                                      j__64378;
                                                    alloc__64472->FMGL(k) =
                                                      k__64379;
                                                    alloc__64472;
                                                }))
                                                ;
                                                (__extension__ ({
                                                    
                                                    //#line 27 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                    ::x10x::vector::Vector3d b__64473 =
                                                      that__64471;
                                                    (__extension__ ({
                                                        
                                                        //#line 28 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        ::x10x::vector::Point3d alloc__64474 =
                                                          
                                                        ::x10x::vector::Point3d::_alloc();
                                                        
                                                        //#line 10 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        x10_double i__64380 =
                                                          ((this__64467->FMGL(i)) + (b__64473->FMGL(i)));
                                                        x10_double j__64381 =
                                                          ((this__64467->FMGL(j)) + (b__64473->FMGL(j)));
                                                        x10_double k__64382 =
                                                          ((this__64467->FMGL(k)) + (b__64473->FMGL(k)));
                                                        
                                                        //#line 11 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Point3d.x10"
                                                        alloc__64474->FMGL(i) =
                                                          i__64380;
                                                        alloc__64474->FMGL(j) =
                                                          j__64381;
                                                        alloc__64474->FMGL(k) =
                                                          k__64382;
                                                        alloc__64474;
                                                    }))
                                                    ;
                                                }))
                                                ;
                                            }))
                                            ;
                                            
                                            //#line 514 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_int u1i__64475 =
                                              ::x10::lang::DoubleNatives::toInt(u__64466->FMGL(i));
                                            
                                            //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double offset__64452 =
                                              ((1.0) - (((u__64466->FMGL(i)) - (((x10_double) (u1i__64475))))));
                                            ::x10::lang::Rail< x10_double >* spline__64453 =
                                              iSpline;
                                            x10_int splineOrder__64454 =
                                              splineOrder;
                                            
                                            //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                              ((((x10_long)(splineOrder__64454))) - (((x10_long)1ll))),
                                              0.0);
                                            
                                            //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)1ll),
                                              offset__64452);
                                            
                                            //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)0ll),
                                              ((1.0) - (offset__64452)));
                                            
                                            //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62761max__64387 =
                                              ((((x10_long)(splineOrder__64454))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__64388;
                                                for (i__64388 =
                                                       ((x10_long)3ll);
                                                     ((i__64388) <= (i__62761max__64387));
                                                     i__64388 =
                                                       ((i__64388) + (((x10_long)1ll))))
                                                {
                                                    x10_long k__64389 =
                                                      i__64388;
                                                    
                                                    //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_double div__64386 =
                                                      ((1.0) / (((((x10_double) (k__64389))) - (1.0))));
                                                    
                                                    //#line 616 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                                      ((k__64389) - (((x10_long)1ll))),
                                                      ((((div__64386) * (offset__64452))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ((k__64389) - (((x10_long)2ll)))))));
                                                    
                                                    //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_long i__62743max__64383 =
                                                      ((k__64389) - (((x10_long)2ll)));
                                                    {
                                                        x10_long i__64384;
                                                        for (i__64384 =
                                                               ((x10_long)1ll);
                                                             ((i__64384) <= (i__62743max__64383));
                                                             i__64384 =
                                                               ((i__64384) + (((x10_long)1ll))))
                                                        {
                                                            x10_long l__64385 =
                                                              i__64384;
                                                            
                                                            //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                            ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                                              ((((k__64389) - (l__64385))) - (((x10_long)1ll))),
                                                              ((div__64386) * (((((((offset__64452) + (((x10_double) (l__64385))))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                         ((((k__64389) - (l__64385))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__64389) - (l__64385))))) - (offset__64452))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                           ((((k__64389) - (l__64385))) - (((x10_long)1ll)))))))))));
                                                        }
                                                    }
                                                    
                                                    //#line 620 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                                      ((x10_long)0ll),
                                                      ((((div__64386) * (((1.0) - (offset__64452))))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                                           ((x10_long)0ll)))));
                                                }
                                            }
                                            
                                            //#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double div__64393 =
                                              ((1.0) / (((x10_double) (((((x10_long)(splineOrder__64454))) - (((x10_long)1ll)))))));
                                            
                                            //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                              ((((x10_long)(splineOrder__64454))) - (((x10_long)1ll))),
                                              ((((div__64393) * (offset__64452))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                       ((((x10_long)(splineOrder__64454))) - (((x10_long)2ll)))))));
                                            
                                            //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62779max__64390 =
                                              ((((x10_long)(splineOrder__64454))) - (((x10_long)2ll)));
                                            {
                                                x10_long i__64391;
                                                for (i__64391 =
                                                       ((x10_long)1ll);
                                                     ((i__64391) <= (i__62779max__64390));
                                                     i__64391 =
                                                       ((i__64391) + (((x10_long)1ll))))
                                                {
                                                    x10_long l__64392 =
                                                      i__64391;
                                                    
                                                    //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                                      ((((((x10_long)(splineOrder__64454))) - (l__64392))) - (((x10_long)1ll))),
                                                      ((div__64393) * (((((((offset__64452) + (((x10_double) (l__64392))))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                 ((((((x10_long)(splineOrder__64454))) - (l__64392))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder__64454))) - (l__64392))))) - (offset__64452))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                                                                   ((((((x10_long)(splineOrder__64454))) - (l__64392))) - (((x10_long)1ll)))))))))));
                                                }
                                            }
                                            
                                            //#line 629 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)0ll),
                                              ((((div__64393) * (((1.0) - (offset__64452))))) * (::x10aux::nullCheck(spline__64453)->x10::lang::Rail< x10_double >::__apply(
                                                                                                   ((x10_long)0ll)))));
                                            
                                            //#line 516 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_int u2i__64476 =
                                              ::x10::lang::DoubleNatives::toInt(u__64466->FMGL(j));
                                            
                                            //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double offset__64455 =
                                              ((1.0) - (((u__64466->FMGL(j)) - (((x10_double) (u2i__64476))))));
                                            ::x10::lang::Rail< x10_double >* spline__64456 =
                                              jSpline;
                                            x10_int splineOrder__64457 =
                                              splineOrder;
                                            
                                            //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                              ((((x10_long)(splineOrder__64457))) - (((x10_long)1ll))),
                                              0.0);
                                            
                                            //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)1ll),
                                              offset__64455);
                                            
                                            //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)0ll),
                                              ((1.0) - (offset__64455)));
                                            
                                            //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62761max__64398 =
                                              ((((x10_long)(splineOrder__64457))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__64399;
                                                for (i__64399 =
                                                       ((x10_long)3ll);
                                                     ((i__64399) <= (i__62761max__64398));
                                                     i__64399 =
                                                       ((i__64399) + (((x10_long)1ll))))
                                                {
                                                    x10_long k__64400 =
                                                      i__64399;
                                                    
                                                    //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_double div__64397 =
                                                      ((1.0) / (((((x10_double) (k__64400))) - (1.0))));
                                                    
                                                    //#line 616 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                                      ((k__64400) - (((x10_long)1ll))),
                                                      ((((div__64397) * (offset__64455))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ((k__64400) - (((x10_long)2ll)))))));
                                                    
                                                    //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_long i__62743max__64394 =
                                                      ((k__64400) - (((x10_long)2ll)));
                                                    {
                                                        x10_long i__64395;
                                                        for (i__64395 =
                                                               ((x10_long)1ll);
                                                             ((i__64395) <= (i__62743max__64394));
                                                             i__64395 =
                                                               ((i__64395) + (((x10_long)1ll))))
                                                        {
                                                            x10_long l__64396 =
                                                              i__64395;
                                                            
                                                            //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                            ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                                              ((((k__64400) - (l__64396))) - (((x10_long)1ll))),
                                                              ((div__64397) * (((((((offset__64455) + (((x10_double) (l__64396))))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                         ((((k__64400) - (l__64396))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__64400) - (l__64396))))) - (offset__64455))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                           ((((k__64400) - (l__64396))) - (((x10_long)1ll)))))))))));
                                                        }
                                                    }
                                                    
                                                    //#line 620 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                                      ((x10_long)0ll),
                                                      ((((div__64397) * (((1.0) - (offset__64455))))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                                           ((x10_long)0ll)))));
                                                }
                                            }
                                            
                                            //#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double div__64404 =
                                              ((1.0) / (((x10_double) (((((x10_long)(splineOrder__64457))) - (((x10_long)1ll)))))));
                                            
                                            //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                              ((((x10_long)(splineOrder__64457))) - (((x10_long)1ll))),
                                              ((((div__64404) * (offset__64455))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                       ((((x10_long)(splineOrder__64457))) - (((x10_long)2ll)))))));
                                            
                                            //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62779max__64401 =
                                              ((((x10_long)(splineOrder__64457))) - (((x10_long)2ll)));
                                            {
                                                x10_long i__64402;
                                                for (i__64402 =
                                                       ((x10_long)1ll);
                                                     ((i__64402) <= (i__62779max__64401));
                                                     i__64402 =
                                                       ((i__64402) + (((x10_long)1ll))))
                                                {
                                                    x10_long l__64403 =
                                                      i__64402;
                                                    
                                                    //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                                      ((((((x10_long)(splineOrder__64457))) - (l__64403))) - (((x10_long)1ll))),
                                                      ((div__64404) * (((((((offset__64455) + (((x10_double) (l__64403))))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                 ((((((x10_long)(splineOrder__64457))) - (l__64403))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder__64457))) - (l__64403))))) - (offset__64455))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                                                                   ((((((x10_long)(splineOrder__64457))) - (l__64403))) - (((x10_long)1ll)))))))))));
                                                }
                                            }
                                            
                                            //#line 629 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)0ll),
                                              ((((div__64404) * (((1.0) - (offset__64455))))) * (::x10aux::nullCheck(spline__64456)->x10::lang::Rail< x10_double >::__apply(
                                                                                                   ((x10_long)0ll)))));
                                            
                                            //#line 518 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_int u3i__64477 =
                                              ::x10::lang::DoubleNatives::toInt(u__64466->FMGL(k));
                                            
                                            //#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double offset__64458 =
                                              ((1.0) - (((u__64466->FMGL(k)) - (((x10_double) (u3i__64477))))));
                                            ::x10::lang::Rail< x10_double >* spline__64459 =
                                              kSpline;
                                            x10_int splineOrder__64460 =
                                              splineOrder;
                                            
                                            //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                              ((((x10_long)(splineOrder__64460))) - (((x10_long)1ll))),
                                              0.0);
                                            
                                            //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)1ll),
                                              offset__64458);
                                            
                                            //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)0ll),
                                              ((1.0) - (offset__64458)));
                                            
                                            //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62761max__64409 =
                                              ((((x10_long)(splineOrder__64460))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__64410;
                                                for (i__64410 =
                                                       ((x10_long)3ll);
                                                     ((i__64410) <= (i__62761max__64409));
                                                     i__64410 =
                                                       ((i__64410) + (((x10_long)1ll))))
                                                {
                                                    x10_long k__64411 =
                                                      i__64410;
                                                    
                                                    //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_double div__64408 =
                                                      ((1.0) / (((((x10_double) (k__64411))) - (1.0))));
                                                    
                                                    //#line 616 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                                      ((k__64411) - (((x10_long)1ll))),
                                                      ((((div__64408) * (offset__64458))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                               ((k__64411) - (((x10_long)2ll)))))));
                                                    
                                                    //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_long i__62743max__64405 =
                                                      ((k__64411) - (((x10_long)2ll)));
                                                    {
                                                        x10_long i__64406;
                                                        for (i__64406 =
                                                               ((x10_long)1ll);
                                                             ((i__64406) <= (i__62743max__64405));
                                                             i__64406 =
                                                               ((i__64406) + (((x10_long)1ll))))
                                                        {
                                                            x10_long l__64407 =
                                                              i__64406;
                                                            
                                                            //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                            ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                                              ((((k__64411) - (l__64407))) - (((x10_long)1ll))),
                                                              ((div__64408) * (((((((offset__64458) + (((x10_double) (l__64407))))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                         ((((k__64411) - (l__64407))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__64411) - (l__64407))))) - (offset__64458))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                           ((((k__64411) - (l__64407))) - (((x10_long)1ll)))))))))));
                                                        }
                                                    }
                                                    
                                                    //#line 620 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                                      ((x10_long)0ll),
                                                      ((((div__64408) * (((1.0) - (offset__64458))))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                                           ((x10_long)0ll)))));
                                                }
                                            }
                                            
                                            //#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_double div__64415 =
                                              ((1.0) / (((x10_double) (((((x10_long)(splineOrder__64460))) - (((x10_long)1ll)))))));
                                            
                                            //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                              ((((x10_long)(splineOrder__64460))) - (((x10_long)1ll))),
                                              ((((div__64415) * (offset__64458))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                       ((((x10_long)(splineOrder__64460))) - (((x10_long)2ll)))))));
                                            
                                            //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62779max__64412 =
                                              ((((x10_long)(splineOrder__64460))) - (((x10_long)2ll)));
                                            {
                                                x10_long i__64413;
                                                for (i__64413 =
                                                       ((x10_long)1ll);
                                                     ((i__64413) <= (i__62779max__64412));
                                                     i__64413 =
                                                       ((i__64413) + (((x10_long)1ll))))
                                                {
                                                    x10_long l__64414 =
                                                      i__64413;
                                                    
                                                    //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                                      ((((((x10_long)(splineOrder__64460))) - (l__64414))) - (((x10_long)1ll))),
                                                      ((div__64415) * (((((((offset__64458) + (((x10_double) (l__64414))))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                 ((((((x10_long)(splineOrder__64460))) - (l__64414))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder__64460))) - (l__64414))))) - (offset__64458))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                                                                                                   ((((((x10_long)(splineOrder__64460))) - (l__64414))) - (((x10_long)1ll)))))))))));
                                                }
                                            }
                                            
                                            //#line 629 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__set(
                                              ((x10_long)0ll),
                                              ((((div__64415) * (((1.0) - (offset__64458))))) * (::x10aux::nullCheck(spline__64459)->x10::lang::Rail< x10_double >::__apply(
                                                                                                   ((x10_long)0ll)))));
                                            
                                            //#line 520 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            x10_long i__62589max__64461 =
                                              ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
                                            {
                                                x10_long i__64462;
                                                for (i__64462 =
                                                       ((x10_long)0ll);
                                                     ((i__64462) <= (i__62589max__64461));
                                                     i__64462 =
                                                       ((i__64462) + (((x10_long)1ll))))
                                                {
                                                    x10_long i__64463 =
                                                      i__64462;
                                                    
                                                    //#line 521 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_long k__64450 =
                                                      ((((((((x10_long)(u1i__64475))) - (i__64463))) + (gridSize0))) % ::x10aux::zeroCheck(gridSize0));
                                                    
                                                    //#line 522 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    x10_double iVal__64451 =
                                                      ((q__64465) * (iSpline->x10::lang::Rail< x10_double >::__apply(
                                                                       i__64463)));
                                                    
                                                    //#line 523 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                    if ((((k__64450) >= (qiMin)) &&
                                                        ((k__64450) <= (qiMax))))
                                                    {
                                                        
                                                        //#line 524 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                        x10_long i__62571max__64447 =
                                                          ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
                                                        {
                                                            x10_long i__64448;
                                                            for (i__64448 =
                                                                   ((x10_long)0ll);
                                                                 ((i__64448) <= (i__62571max__64447));
                                                                 i__64448 =
                                                                   ((i__64448) + (((x10_long)1ll))))
                                                            {
                                                                x10_long j__64449 =
                                                                  i__64448;
                                                                
                                                                //#line 525 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                x10_long k__64445 =
                                                                  ((((((((x10_long)(u2i__64476))) - (j__64449))) + (gridSize1))) % ::x10aux::zeroCheck(gridSize1));
                                                                
                                                                //#line 526 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                x10_double jVal__64446 =
                                                                  ((iVal__64451) * (jSpline->x10::lang::Rail< x10_double >::__apply(
                                                                                      j__64449)));
                                                                
                                                                //#line 527 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                if ((((k__64445) >= (qjMin)) &&
                                                                    ((k__64445) <= (qjMax))))
                                                                {
                                                                    
                                                                    //#line 528 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                    x10_long i__62553max__64442 =
                                                                      ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
                                                                    {
                                                                        x10_long i__64443;
                                                                        for (i__64443 =
                                                                               ((x10_long)0ll);
                                                                             ((i__64443) <= (i__62553max__64442));
                                                                             i__64443 =
                                                                               ((i__64443) + (((x10_long)1ll))))
                                                                        {
                                                                            x10_long k__64444 =
                                                                              i__64443;
                                                                            
                                                                            //#line 529 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                            x10_long k__64440 =
                                                                              ((((((((x10_long)(u3i__64477))) - (k__64444))) + (gridSize2))) % ::x10aux::zeroCheck(gridSize2));
                                                                            
                                                                            //#line 530 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                            x10_double kVal__64441 =
                                                                              ((jVal__64446) * (kSpline->x10::lang::Rail< x10_double >::__apply(
                                                                                                  k__64444)));
                                                                            
                                                                            //#line 531 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                                                            ::x10::regionarray::Array<x10_double>* a__64431 =
                                                                              qLocal;
                                                                            x10_long i__64432 =
                                                                              k__64450;
                                                                            x10_long i__64433 =
                                                                              k__64445;
                                                                            x10_long i__64434 =
                                                                              k__64440;
                                                                            x10_double r__64435 =
                                                                              (((__extension__ ({
                                                                                
                                                                                //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                x10_long i__64436 =
                                                                                  i__64432;
                                                                                x10_long i__64437 =
                                                                                  i__64433;
                                                                                x10_long i__64438 =
                                                                                  i__64434;
                                                                                x10_double ret__64439;
                                                                                
                                                                                //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                ret__64439 =
                                                                                  ::x10aux::nullCheck(a__64431)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                                                    (__extension__ ({
                                                                                        
                                                                                        //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                        x10_long i__64417 =
                                                                                          i__64436;
                                                                                        x10_long i__64418 =
                                                                                          i__64437;
                                                                                        x10_long i__64419 =
                                                                                          i__64438;
                                                                                        x10_long ret__64420;
                                                                                        
                                                                                        //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                        x10_long offset__64416 =
                                                                                          ((i__64417) - (::x10aux::nullCheck(a__64431)->FMGL(layout_min0)));
                                                                                        
                                                                                        //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                        offset__64416 =
                                                                                          ((((((offset__64416) * (::x10aux::nullCheck(a__64431)->FMGL(layout_stride1)))) + (i__64418))) - (::x10aux::nullCheck(a__64431)->FMGL(layout_min1)));
                                                                                        
                                                                                        //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                        offset__64416 =
                                                                                          ((((((offset__64416) * (::x10aux::nullCheck(::x10aux::nullCheck(a__64431)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                    ((x10_long)0ll))))) + (i__64419))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__64431)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                            ((x10_long)1ll))));
                                                                                        
                                                                                        //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                        ret__64420 =
                                                                                          offset__64416;
                                                                                        ret__64420;
                                                                                    }))
                                                                                    );
                                                                                ret__64439;
                                                                            }))
                                                                            ) + (kVal__64441));
                                                                            
                                                                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                            x10_long i__64426 =
                                                                              i__64432;
                                                                            x10_long i__64427 =
                                                                              i__64433;
                                                                            x10_long i__64428 =
                                                                              i__64434;
                                                                            x10_double v__64429 =
                                                                              r__64435;
                                                                            x10_double ret__64430;
                                                                            
                                                                            //#line 598 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                            ::x10aux::nullCheck(a__64431)->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                                                                              (__extension__ ({
                                                                                  
                                                                                  //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                  x10_long i__64422 =
                                                                                    i__64426;
                                                                                  x10_long i__64423 =
                                                                                    i__64427;
                                                                                  x10_long i__64424 =
                                                                                    i__64428;
                                                                                  x10_long ret__64425;
                                                                                  
                                                                                  //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                  x10_long offset__64421 =
                                                                                    ((i__64422) - (::x10aux::nullCheck(a__64431)->FMGL(layout_min0)));
                                                                                  
                                                                                  //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                  offset__64421 =
                                                                                    ((((((offset__64421) * (::x10aux::nullCheck(a__64431)->FMGL(layout_stride1)))) + (i__64423))) - (::x10aux::nullCheck(a__64431)->FMGL(layout_min1)));
                                                                                  
                                                                                  //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                  offset__64421 =
                                                                                    ((((((offset__64421) * (::x10aux::nullCheck(::x10aux::nullCheck(a__64431)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                              ((x10_long)0ll))))) + (i__64424))) - (::x10aux::nullCheck(::x10aux::nullCheck(a__64431)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                      ((x10_long)1ll))));
                                                                                  
                                                                                  //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                                  ret__64425 =
                                                                                    offset__64421;
                                                                                  ret__64425;
                                                                              }))
                                                                              ,
                                                                              v__64429);
                                                                            
                                                                            //#line 599 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                            ret__64430 =
                                                                              v__64429;
                                                                            
                                                                            //#line 594 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                                            ret__64430;
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
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* Q;
    ::x10::lang::Rail< x10_long >* gridSize;
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    x10_long numSubCells;
    x10_int splineOrder;
    ::x10::regionarray::Region* subCellRegion;
    ::x10x::vector::Vector3d scalingVector;
    ::au::edu::anu::pme::PME* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->Q);
        buf.write(this->gridSize);
        buf.write(this->atomsCache);
        buf.write(this->numSubCells);
        buf.write(this->splineOrder);
        buf.write(this->subCellRegion);
        buf.write(this->scalingVector);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__26* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__26>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_Q = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::lang::Rail< x10_long >* that_gridSize = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        x10_long that_numSubCells = buf.read<x10_long>();
        x10_int that_splineOrder = buf.read<x10_int>();
        ::x10::regionarray::Region* that_subCellRegion = buf.read< ::x10::regionarray::Region*>();
        ::x10x::vector::Vector3d that_scalingVector = buf.read< ::x10x::vector::Vector3d>();
        ::au::edu::anu::pme::PME* that_saved_this = buf.read< ::au::edu::anu::pme::PME*>();
        au_edu_anu_pme_PME__closure__26* this_ = new (storage) au_edu_anu_pme_PME__closure__26(that_Q, that_gridSize, that_atomsCache, that_numSubCells, that_splineOrder, that_subCellRegion, that_scalingVector, that_saved_this);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__26(::x10::regionarray::DistArray<x10_double>* Q, ::x10::lang::Rail< x10_long >* gridSize, ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, x10_long numSubCells, x10_int splineOrder, ::x10::regionarray::Region* subCellRegion, ::x10x::vector::Vector3d scalingVector, ::au::edu::anu::pme::PME* saved_this) : Q(Q), gridSize(gridSize), atomsCache(atomsCache), numSubCells(numSubCells), splineOrder(splineOrder), subCellRegion(subCellRegion), scalingVector(scalingVector), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:487-540";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__26_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__25_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__25 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__25> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place1__64860;
            for (place1__64860 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place1__64860));
                 ) {
                ::x10::lang::Point* place1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place1__64860));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__26)))au_edu_anu_pme_PME__closure__26(Q, gridSize, atomsCache, numSubCells, splineOrder, subCellRegion, scalingVector, saved_this))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* Q;
    ::x10::lang::Rail< x10_long >* gridSize;
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache;
    x10_long numSubCells;
    x10_int splineOrder;
    ::x10::regionarray::Region* subCellRegion;
    ::x10x::vector::Vector3d scalingVector;
    ::au::edu::anu::pme::PME* saved_this;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->Q);
        buf.write(this->gridSize);
        buf.write(this->atomsCache);
        buf.write(this->numSubCells);
        buf.write(this->splineOrder);
        buf.write(this->subCellRegion);
        buf.write(this->scalingVector);
        buf.write(this->saved_this);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__25* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__25>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_Q = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::lang::Rail< x10_long >* that_gridSize = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* that_atomsCache = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
        x10_long that_numSubCells = buf.read<x10_long>();
        x10_int that_splineOrder = buf.read<x10_int>();
        ::x10::regionarray::Region* that_subCellRegion = buf.read< ::x10::regionarray::Region*>();
        ::x10x::vector::Vector3d that_scalingVector = buf.read< ::x10x::vector::Vector3d>();
        ::au::edu::anu::pme::PME* that_saved_this = buf.read< ::au::edu::anu::pme::PME*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__25* this_ = new (storage) au_edu_anu_pme_PME__closure__25(that_Q, that_gridSize, that_atomsCache, that_numSubCells, that_splineOrder, that_subCellRegion, that_scalingVector, that_saved_this, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__25(::x10::regionarray::DistArray<x10_double>* Q, ::x10::lang::Rail< x10_long >* gridSize, ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache, x10_long numSubCells, x10_int splineOrder, ::x10::regionarray::Region* subCellRegion, ::x10x::vector::Vector3d scalingVector, ::au::edu::anu::pme::PME* saved_this, ::x10::regionarray::Dist* __lowerer__var__0__) : Q(Q), gridSize(gridSize), atomsCache(atomsCache), numSubCells(numSubCells), splineOrder(splineOrder), subCellRegion(subCellRegion), scalingVector(scalingVector), saved_this(saved_this), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:487-540";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__25_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__28_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__28 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__28> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 594 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_double myReciprocalEnergy = 0.0;
        
        //#line 595 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_double>* localQ = ::x10aux::nullCheck(Q)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 596 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_double>* localThetaRecConvQ = ::x10aux::nullCheck(thetaRecConvQ)->x10::regionarray::DistArray<x10_double>::getLocalPortion();
        
        //#line 597 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* localRegion = ::x10aux::nullCheck(localQ)->FMGL(region);
        
        //#line 598 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* p__64517 = localRegion;
        x10_long k__62685min__64518 = ::x10aux::nullCheck(p__64517)->min(
                                        ((x10_long)2ll));
        x10_long k__62685max__64519 = ::x10aux::nullCheck(p__64517)->max(
                                        ((x10_long)2ll));
        x10_long j__62704min__64520 = ::x10aux::nullCheck(p__64517)->min(
                                        ((x10_long)1ll));
        x10_long j__62704max__64521 = ::x10aux::nullCheck(p__64517)->max(
                                        ((x10_long)1ll));
        x10_long i__62723min__64522 = ::x10aux::nullCheck(p__64517)->min(
                                        ((x10_long)0ll));
        x10_long i__62723max__64523 = ::x10aux::nullCheck(p__64517)->max(
                                        ((x10_long)0ll));
        {
            x10_long i__64524;
            for (i__64524 = i__62723min__64522; ((i__64524) <= (i__62723max__64523));
                 i__64524 = ((i__64524) + (((x10_long)1ll)))) {
                x10_long i__64525 = i__64524;
                {
                    x10_long j__64526;
                    for (j__64526 = j__62704min__64520; ((j__64526) <= (j__62704max__64521));
                         j__64526 = ((j__64526) + (((x10_long)1ll))))
                    {
                        x10_long j__64527 = j__64526;
                        {
                            x10_long k__64528;
                            for (k__64528 = k__62685min__64518;
                                 ((k__64528) <= (k__62685max__64519));
                                 k__64528 = ((k__64528) + (((x10_long)1ll))))
                            {
                                x10_long k__64529 = k__64528;
                                
                                //#line 599 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                myReciprocalEnergy = ((myReciprocalEnergy) + ((((__extension__ ({
                                    
                                    //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__64509 = i__64525;
                                    x10_long i__64510 = j__64527;
                                    x10_long i__64511 = k__64529;
                                    x10_double ret__64512;
                                    
                                    //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__64512 = ::x10aux::nullCheck(localQ)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                   (__extension__ ({
                                                       
                                                       //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__64500 =
                                                         i__64509;
                                                       x10_long i__64501 =
                                                         i__64510;
                                                       x10_long i__64502 =
                                                         i__64511;
                                                       x10_long ret__64503;
                                                       
                                                       //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long offset__64499 =
                                                         ((i__64500) - (::x10aux::nullCheck(localQ)->FMGL(layout_min0)));
                                                       
                                                       //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64499 =
                                                         ((((((offset__64499) * (::x10aux::nullCheck(localQ)->FMGL(layout_stride1)))) + (i__64501))) - (::x10aux::nullCheck(localQ)->FMGL(layout_min1)));
                                                       
                                                       //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64499 =
                                                         ((((((offset__64499) * (::x10aux::nullCheck(::x10aux::nullCheck(localQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                   ((x10_long)0ll))))) + (i__64502))) - (::x10aux::nullCheck(::x10aux::nullCheck(localQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)1ll))));
                                                       
                                                       //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       ret__64503 =
                                                         offset__64499;
                                                       ret__64503;
                                                   }))
                                                   );
                                    ret__64512;
                                }))
                                ) * ((__extension__ ({
                                    
                                    //#line 487 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    x10_long i__64513 = i__64525;
                                    x10_long i__64514 = j__64527;
                                    x10_long i__64515 = k__64529;
                                    x10_double ret__64516;
                                    
                                    //#line 491 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                    ret__64516 = ::x10aux::nullCheck(localThetaRecConvQ)->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                   (__extension__ ({
                                                       
                                                       //#line 1206 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long i__64505 =
                                                         i__64513;
                                                       x10_long i__64506 =
                                                         i__64514;
                                                       x10_long i__64507 =
                                                         i__64515;
                                                       x10_long ret__64508;
                                                       
                                                       //#line 1207 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       x10_long offset__64504 =
                                                         ((i__64505) - (::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout_min0)));
                                                       
                                                       //#line 1208 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64504 =
                                                         ((((((offset__64504) * (::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout_stride1)))) + (i__64506))) - (::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout_min1)));
                                                       
                                                       //#line 1209 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       offset__64504 =
                                                         ((((((offset__64504) * (::x10aux::nullCheck(::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                   ((x10_long)0ll))))) + (i__64507))) - (::x10aux::nullCheck(::x10aux::nullCheck(localThetaRecConvQ)->FMGL(layout))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                           ((x10_long)1ll))));
                                                       
                                                       //#line 1210 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                                       ret__64508 =
                                                         offset__64504;
                                                       ret__64508;
                                                   }))
                                                   );
                                    ret__64516;
                                }))
                                ))));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 601 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::makeOffer< x10_double >(myReciprocalEnergy);
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* Q;
    ::x10::regionarray::DistArray<x10_double>* thetaRecConvQ;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->Q);
        buf.write(this->thetaRecConvQ);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__28* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__28>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_Q = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::DistArray<x10_double>* that_thetaRecConvQ = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        au_edu_anu_pme_PME__closure__28* this_ = new (storage) au_edu_anu_pme_PME__closure__28(that_Q, that_thetaRecConvQ);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__28(::x10::regionarray::DistArray<x10_double>* Q, ::x10::regionarray::DistArray<x10_double>* thetaRecConvQ) : Q(Q), thetaRecConvQ(thetaRecConvQ) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:593-602";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__28_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__27_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__27 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__27> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__64878;
            for (place__64878 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                          ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__64878));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__64878));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__28)))au_edu_anu_pme_PME__closure__28(Q, thetaRecConvQ))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* Q;
    ::x10::regionarray::DistArray<x10_double>* thetaRecConvQ;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->Q);
        buf.write(this->thetaRecConvQ);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__27* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__27>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_Q = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::DistArray<x10_double>* that_thetaRecConvQ = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__27* this_ = new (storage) au_edu_anu_pme_PME__closure__27(that_Q, that_thetaRecConvQ, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__27(::x10::regionarray::DistArray<x10_double>* Q, ::x10::regionarray::DistArray<x10_double>* thetaRecConvQ, ::x10::regionarray::Dist* __lowerer__var__0__) : Q(Q), thetaRecConvQ(thetaRecConvQ), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:593-602";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__27_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__30_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__30_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__30 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__30> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 643 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Array<x10_double>* splines =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_double> >()) ::x10::regionarray::Array<x10_double>());
        
        //#line 268 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        x10_long size__64568 = ((x10_long)(splineOrder));
        
        //#line 270 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        ::x10::regionarray::RectRegion1D* myReg__64540 =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
        (myReg__64540)->::x10::regionarray::RectRegion1D::_constructor(((size__64568) - (((x10_long)1ll))));
        
        //#line 271 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg__64540);
        splines->FMGL(rank) = ((x10_long)1ll);
        splines->FMGL(rect) = true;
        splines->FMGL(zeroBased) = true;
        splines->FMGL(rail) = true;
        splines->FMGL(size) = size__64568;
        
        //#line 273 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(layout_min0) = splines->FMGL(layout_stride1) = splines->FMGL(layout_min1) =
          ((x10_long)0ll);
        
        //#line 274 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 275 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
        splines->FMGL(raw) = ::x10::lang::Rail< x10_double >::_make(size__64568);
        
        //#line 644 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_long i__62797max__64569 = ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
        {
            x10_long i__64570;
            for (i__64570 = ((x10_long)1ll); ((i__64570) <= (i__62797max__64569));
                 i__64570 = ((i__64570) + (((x10_long)1ll))))
            {
                x10_long k__64571 = i__64570;
                
                //#line 544 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_long i__64541 = k__64571;
                x10_double v__64542 = ::au::edu::anu::pme::PME::bSpline(
                                        splineOrder, ((x10_double) (k__64571)));
                
                //#line 543 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                x10_double ret__64543;
                
                //#line 547 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                splines->FMGL(raw)->x10::lang::Rail< x10_double >::__set(
                  i__64541, v__64542);
                
                //#line 554 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__64543 = v__64542;
                
                //#line 543 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                ret__64543;
            }
        }
        
        //#line 647 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* regionHere = ::x10aux::nullCheck(::x10aux::nullCheck(B)->FMGL(dist))->__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 648 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* p__64572 = regionHere;
        x10_long m3__62870min__64573 = ::x10aux::nullCheck(p__64572)->min(
                                         ((x10_long)2ll));
        x10_long m3__62870max__64574 = ::x10aux::nullCheck(p__64572)->max(
                                         ((x10_long)2ll));
        x10_long m2__62889min__64575 = ::x10aux::nullCheck(p__64572)->min(
                                         ((x10_long)1ll));
        x10_long m2__62889max__64576 = ::x10aux::nullCheck(p__64572)->max(
                                         ((x10_long)1ll));
        x10_long m1__62908min__64577 = ::x10aux::nullCheck(p__64572)->min(
                                         ((x10_long)0ll));
        x10_long m1__62908max__64578 = ::x10aux::nullCheck(p__64572)->max(
                                         ((x10_long)0ll));
        {
            x10_long m__64579;
            for (m__64579 = m1__62908min__64577; ((m__64579) <= (m1__62908max__64578));
                 m__64579 = ((m__64579) + (((x10_long)1ll))))
            {
                x10_long m__64580 = m__64579;
                {
                    x10_long m__64581;
                    for (m__64581 = m2__62889min__64575; ((m__64581) <= (m2__62889max__64576));
                         m__64581 = ((m__64581) + (((x10_long)1ll))))
                    {
                        x10_long m__64582 = m__64581;
                        {
                            x10_long m__64583;
                            for (m__64583 = m3__62870min__64573;
                                 ((m__64583) <= (m3__62870max__64574));
                                 m__64583 = ((m__64583) + (((x10_long)1ll))))
                            {
                                x10_long m__64584 = m__64583;
                                
                                //#line 649 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double m1D__64559 = ((x10_double) (m__64580));
                                
                                //#line 650 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_complex sumK__64560 =
                                  x10_complex(0.0,0.0);
                                
                                //#line 651 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_long i__62815max__64550 =
                                  ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
                                {
                                    x10_long i__64551;
                                    for (i__64551 = ((x10_long)0ll);
                                         ((i__64551) <= (i__62815max__64550));
                                         i__64551 = ((i__64551) + (((x10_long)1ll))))
                                    {
                                        x10_long k__64552 =
                                          i__64551;
                                        
                                        //#line 652 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        sumK__64560 = ::x10::lang::ComplexNatives::_plus(sumK__64560, ::x10::lang::ComplexNatives::_times((__extension__ ({
                                            
                                            //#line 443 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__64544 =
                                              ((k__64552) + (((x10_long)1ll)));
                                            
                                            //#line 442 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_double ret__64545;
                                            
                                            //#line 446 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__64545 = splines->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                           i__64544);
                                            ret__64545;
                                        }))
                                        , ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (m1D__64559))) * (((x10_double) (k__64552))))) / (K1)), x10_complex(0.0,1.0)))));
                                    }
                                }
                                
                                //#line 654 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double b__64561 = std::abs(::x10::lang::ComplexNatives::_divide(::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))))) * (m1D__64559))) / (K1)), x10_complex(0.0,1.0))), sumK__64560));
                                
                                //#line 656 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double m2D__64562 = ((x10_double) (m__64582));
                                
                                //#line 657 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_complex sumK__64563 =
                                  x10_complex(0.0,0.0);
                                
                                //#line 658 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_long i__62833max__64553 =
                                  ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
                                {
                                    x10_long i__64554;
                                    for (i__64554 = ((x10_long)0ll);
                                         ((i__64554) <= (i__62833max__64553));
                                         i__64554 = ((i__64554) + (((x10_long)1ll))))
                                    {
                                        x10_long k__64555 =
                                          i__64554;
                                        
                                        //#line 659 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        sumK__64563 = ::x10::lang::ComplexNatives::_plus(sumK__64563, ::x10::lang::ComplexNatives::_times((__extension__ ({
                                            
                                            //#line 443 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__64546 =
                                              ((k__64555) + (((x10_long)1ll)));
                                            
                                            //#line 442 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_double ret__64547;
                                            
                                            //#line 446 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__64547 = splines->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                           i__64546);
                                            ret__64547;
                                        }))
                                        , ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (m2D__64562))) * (((x10_double) (k__64555))))) / (K2)), x10_complex(0.0,1.0)))));
                                    }
                                }
                                
                                //#line 661 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double b__64564 = std::abs(::x10::lang::ComplexNatives::_divide(::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))))) * (m2D__64562))) / (K2)), x10_complex(0.0,1.0))), sumK__64563));
                                
                                //#line 663 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double m3D__64565 = ((x10_double) (m__64584));
                                
                                //#line 664 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_complex sumK__64566 =
                                  x10_complex(0.0,0.0);
                                
                                //#line 665 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_long i__62851max__64556 =
                                  ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
                                {
                                    x10_long i__64557;
                                    for (i__64557 = ((x10_long)0ll);
                                         ((i__64557) <= (i__62851max__64556));
                                         i__64557 = ((i__64557) + (((x10_long)1ll))))
                                    {
                                        x10_long k__64558 =
                                          i__64557;
                                        
                                        //#line 666 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        sumK__64566 = ::x10::lang::ComplexNatives::_plus(sumK__64566, ::x10::lang::ComplexNatives::_times((__extension__ ({
                                            
                                            //#line 443 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_long i__64548 =
                                              ((k__64558) + (((x10_long)1ll)));
                                            
                                            //#line 442 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            x10_double ret__64549;
                                            
                                            //#line 446 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Array.x10"
                                            ret__64549 = splines->FMGL(raw)->x10::lang::Rail< x10_double >::__apply(
                                                           i__64548);
                                            ret__64549;
                                        }))
                                        , ::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (m3D__64565))) * (((x10_double) (k__64558))))) / (K3)), x10_complex(0.0,1.0)))));
                                    }
                                }
                                
                                //#line 668 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double b__64567 = std::abs(::x10::lang::ComplexNatives::_divide(::x10::lang::MathNatives::exp(::x10::lang::ComplexNatives::_times(((((((6.283185307179586) * (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))))) * (m3D__64565))) / (K3)), x10_complex(0.0,1.0))), sumK__64566));
                                
                                //#line 670 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                ::x10aux::nullCheck(B)->x10::regionarray::DistArray<x10_double>::__set(
                                  m__64580, m__64582, m__64584,
                                  ((((((((((b__64561) * (b__64561))) * (b__64564))) * (b__64564))) * (b__64567))) * (b__64567)));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10_int splineOrder;
    ::x10::regionarray::DistArray<x10_double>* B;
    x10_double K1;
    x10_double K2;
    x10_double K3;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->splineOrder);
        buf.write(this->B);
        buf.write(this->K1);
        buf.write(this->K2);
        buf.write(this->K3);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__30* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__30>();
        buf.record_reference(storage);
        x10_int that_splineOrder = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_double>* that_B = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        au_edu_anu_pme_PME__closure__30* this_ = new (storage) au_edu_anu_pme_PME__closure__30(that_splineOrder, that_B, that_K1, that_K2, that_K3);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__30(x10_int splineOrder, ::x10::regionarray::DistArray<x10_double>* B, x10_double K1, x10_double K2, x10_double K3) : splineOrder(splineOrder), B(B), K1(K1), K2(K2), K3(K3) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:642-673";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__30_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__29_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__29_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__29 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__29> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place1__64893;
            for (place1__64893 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place1__64893));
                 ) {
                ::x10::lang::Point* place1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place1__64893));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__30)))au_edu_anu_pme_PME__closure__30(splineOrder, B, K1, K2, K3))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    x10_int splineOrder;
    ::x10::regionarray::DistArray<x10_double>* B;
    x10_double K1;
    x10_double K2;
    x10_double K3;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->splineOrder);
        buf.write(this->B);
        buf.write(this->K1);
        buf.write(this->K2);
        buf.write(this->K3);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__29* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__29>();
        buf.record_reference(storage);
        x10_int that_splineOrder = buf.read<x10_int>();
        ::x10::regionarray::DistArray<x10_double>* that_B = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__29* this_ = new (storage) au_edu_anu_pme_PME__closure__29(that_splineOrder, that_B, that_K1, that_K2, that_K3, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__29(x10_int splineOrder, ::x10::regionarray::DistArray<x10_double>* B, x10_double K1, x10_double K2, x10_double K3, ::x10::regionarray::Dist* __lowerer__var__0__) : splineOrder(splineOrder), B(B), K1(K1), K2(K2), K3(K3), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:642-673";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__29_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__32_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__32_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__32 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__32> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 690 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* regionHere = ::x10aux::nullCheck(::x10aux::nullCheck(C)->FMGL(dist))->__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 691 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::regionarray::Region* p__64621 = regionHere;
        x10_long m3__62929min__64622 = ::x10aux::nullCheck(p__64621)->min(
                                         ((x10_long)2ll));
        x10_long m3__62929max__64623 = ::x10aux::nullCheck(p__64621)->max(
                                         ((x10_long)2ll));
        x10_long m2__62948min__64624 = ::x10aux::nullCheck(p__64621)->min(
                                         ((x10_long)1ll));
        x10_long m2__62948max__64625 = ::x10aux::nullCheck(p__64621)->max(
                                         ((x10_long)1ll));
        x10_long m1__62967min__64626 = ::x10aux::nullCheck(p__64621)->min(
                                         ((x10_long)0ll));
        x10_long m1__62967max__64627 = ::x10aux::nullCheck(p__64621)->max(
                                         ((x10_long)0ll));
        {
            x10_long m__64628;
            for (m__64628 = m1__62967min__64626; ((m__64628) <= (m1__62967max__64627));
                 m__64628 = ((m__64628) + (((x10_long)1ll))))
            {
                x10_long m__64629 = m__64628;
                {
                    x10_long m__64630;
                    for (m__64630 = m2__62948min__64624; ((m__64630) <= (m2__62948max__64625));
                         m__64630 = ((m__64630) + (((x10_long)1ll))))
                    {
                        x10_long m__64631 = m__64630;
                        {
                            x10_long m__64632;
                            for (m__64632 = m3__62929min__64622;
                                 ((m__64632) <= (m3__62929max__64623));
                                 m__64632 = ((m__64632) + (((x10_long)1ll))))
                            {
                                x10_long m__64633 = m__64632;
                                
                                //#line 692 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double m1prime__64600 =
                                  ((((x10_double) (m__64629))) <= (((K1) / (((x10_double) (((x10_long)2ll)))))))
                                  ? (((x10_double) (m__64629)))
                                  : (((((x10_double) (m__64629))) - (K1)));
                                
                                //#line 693 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double m2prime__64601 =
                                  ((((x10_double) (m__64631))) <= (((K2) / (((x10_double) (((x10_long)2ll)))))))
                                  ? (((x10_double) (m__64631)))
                                  : (((((x10_double) (m__64631))) - (K2)));
                                
                                //#line 694 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double m3prime__64602 =
                                  ((((x10_double) (m__64633))) <= (((K3) / (((x10_double) (((x10_long)2ll)))))))
                                  ? (((x10_double) (m__64633)))
                                  : (((((x10_double) (m__64633))) - (K3)));
                                
                                //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                ::x10x::vector::Vector3d mVec__64603 =
                                  (__extension__ ({
                                    ::x10x::vector::Vector3d this__64604 =
                                      (__extension__ ({
                                        ::x10x::vector::Vector3d this__64605 =
                                          (__extension__ ({
                                            ::x10x::vector::Vector3d this__64606 =
                                              ::x10aux::nullCheck(edgeReciprocals)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                ((x10_long)0ll));
                                            
                                            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double c__64607 =
                                              m1prime__64600;
                                            (__extension__ ({
                                                
                                                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                ::x10x::vector::Vector3d alloc__64608 =
                                                   ::x10x::vector::Vector3d::_alloc();
                                                
                                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double i__64585 =
                                                  ((this__64606->FMGL(i)) * (c__64607));
                                                x10_double j__64586 =
                                                  ((this__64606->FMGL(j)) * (c__64607));
                                                x10_double k__64587 =
                                                  ((this__64606->FMGL(k)) * (c__64607));
                                                
                                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                alloc__64608->FMGL(i) =
                                                  i__64585;
                                                alloc__64608->FMGL(j) =
                                                  j__64586;
                                                alloc__64608->FMGL(k) =
                                                  k__64587;
                                                alloc__64608;
                                            }))
                                            ;
                                        }))
                                        ;
                                        
                                        //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        ::x10x::vector::Vector3d b__64609 =
                                          (__extension__ ({
                                            
                                            //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                            ::x10x::vector::Vector3d this__64610 =
                                              ::x10aux::nullCheck(edgeReciprocals)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                ((x10_long)1ll));
                                            
                                            //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double c__64611 =
                                              m2prime__64601;
                                            (__extension__ ({
                                                
                                                //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                ::x10x::vector::Vector3d alloc__64612 =
                                                   ::x10x::vector::Vector3d::_alloc();
                                                
                                                //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                x10_double i__64588 =
                                                  ((this__64610->FMGL(i)) * (c__64611));
                                                x10_double j__64589 =
                                                  ((this__64610->FMGL(j)) * (c__64611));
                                                x10_double k__64590 =
                                                  ((this__64610->FMGL(k)) * (c__64611));
                                                
                                                //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                                alloc__64612->FMGL(i) =
                                                  i__64588;
                                                alloc__64612->FMGL(j) =
                                                  j__64589;
                                                alloc__64612->FMGL(k) =
                                                  k__64590;
                                                alloc__64612;
                                            }))
                                            ;
                                        }))
                                        ;
                                        (__extension__ ({
                                            
                                            //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d alloc__64613 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__64591 =
                                              ((this__64605->FMGL(i)) + (b__64609->FMGL(i)));
                                            x10_double j__64592 =
                                              ((this__64605->FMGL(j)) + (b__64609->FMGL(j)));
                                            x10_double k__64593 =
                                              ((this__64605->FMGL(k)) + (b__64609->FMGL(k)));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__64613->FMGL(i) =
                                              i__64591;
                                            alloc__64613->FMGL(j) =
                                              j__64592;
                                            alloc__64613->FMGL(k) =
                                              k__64593;
                                            alloc__64613;
                                        }))
                                        ;
                                    }))
                                    ;
                                    
                                    //#line 37 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d b__64614 =
                                      (__extension__ ({
                                        
                                        //#line 695 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                        ::x10x::vector::Vector3d this__64615 =
                                          ::x10aux::nullCheck(edgeReciprocals)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                            ((x10_long)2ll));
                                        
                                        //#line 81 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double c__64616 =
                                          m3prime__64602;
                                        (__extension__ ({
                                            
                                            //#line 82 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            ::x10x::vector::Vector3d alloc__64617 =
                                               ::x10x::vector::Vector3d::_alloc();
                                            
                                            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            x10_double i__64594 =
                                              ((this__64615->FMGL(i)) * (c__64616));
                                            x10_double j__64595 =
                                              ((this__64615->FMGL(j)) * (c__64616));
                                            x10_double k__64596 =
                                              ((this__64615->FMGL(k)) * (c__64616));
                                            
                                            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                            alloc__64617->FMGL(i) =
                                              i__64594;
                                            alloc__64617->FMGL(j) =
                                              j__64595;
                                            alloc__64617->FMGL(k) =
                                              k__64596;
                                            alloc__64617;
                                        }))
                                        ;
                                    }))
                                    ;
                                    (__extension__ ({
                                        
                                        //#line 38 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        ::x10x::vector::Vector3d alloc__64618 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__64597 =
                                          ((this__64604->FMGL(i)) + (b__64614->FMGL(i)));
                                        x10_double j__64598 =
                                          ((this__64604->FMGL(j)) + (b__64614->FMGL(j)));
                                        x10_double k__64599 =
                                          ((this__64604->FMGL(k)) + (b__64614->FMGL(k)));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__64618->FMGL(i) =
                                          i__64597;
                                        alloc__64618->FMGL(j) =
                                          j__64598;
                                        alloc__64618->FMGL(k) =
                                          k__64599;
                                        alloc__64618;
                                    }))
                                    ;
                                }))
                                ;
                                
                                //#line 696 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                x10_double mSquared__64619 =
                                  (__extension__ ({
                                    
                                    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d vec__64620 =
                                      mVec__64603;
                                    ((((((mVec__64603->FMGL(i)) * (vec__64620->FMGL(i)))) + (((mVec__64603->FMGL(j)) * (vec__64620->FMGL(j)))))) + (((mVec__64603->FMGL(k)) * (vec__64620->FMGL(k)))));
                                }))
                                ;
                                
                                //#line 697 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                ::x10aux::nullCheck(C)->x10::regionarray::DistArray<x10_double>::__set(
                                  m__64629, m__64631, m__64633,
                                  ((::x10::lang::MathNatives::exp(((((-9.869604401089358) * (mSquared__64619))) / (((beta) * (beta)))))) / (((((mSquared__64619) * (3.141592653589793))) * (V)))));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* C;
    x10_double K1;
    x10_double K2;
    x10_double K3;
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals;
    x10_double beta;
    x10_double V;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->C);
        buf.write(this->K1);
        buf.write(this->K2);
        buf.write(this->K3);
        buf.write(this->edgeReciprocals);
        buf.write(this->beta);
        buf.write(this->V);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__32* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__32>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_C = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edgeReciprocals = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        x10_double that_beta = buf.read<x10_double>();
        x10_double that_V = buf.read<x10_double>();
        au_edu_anu_pme_PME__closure__32* this_ = new (storage) au_edu_anu_pme_PME__closure__32(that_C, that_K1, that_K2, that_K3, that_edgeReciprocals, that_beta, that_V);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__32(::x10::regionarray::DistArray<x10_double>* C, x10_double K1, x10_double K2, x10_double K3, ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals, x10_double beta, x10_double V) : C(C), K1(K1), K2(K2), K3(K3), edgeReciprocals(edgeReciprocals), beta(beta), V(V) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:689-699";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__32_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__31_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__31_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__31 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__31> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place1__64908;
            for (place1__64908 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place1__64908));
                 ) {
                ::x10::lang::Point* place1 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place1__64908));
                ::x10::lang::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__32)))au_edu_anu_pme_PME__closure__32(C, K1, K2, K3, edgeReciprocals, beta, V))),
                                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* C;
    x10_double K1;
    x10_double K2;
    x10_double K3;
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals;
    x10_double beta;
    x10_double V;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->C);
        buf.write(this->K1);
        buf.write(this->K2);
        buf.write(this->K3);
        buf.write(this->edgeReciprocals);
        buf.write(this->beta);
        buf.write(this->V);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__31* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__31>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_C = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        x10_double that_K1 = buf.read<x10_double>();
        x10_double that_K2 = buf.read<x10_double>();
        x10_double that_K3 = buf.read<x10_double>();
        ::x10::lang::Rail< ::x10x::vector::Vector3d >* that_edgeReciprocals = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
        x10_double that_beta = buf.read<x10_double>();
        x10_double that_V = buf.read<x10_double>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        au_edu_anu_pme_PME__closure__31* this_ = new (storage) au_edu_anu_pme_PME__closure__31(that_C, that_K1, that_K2, that_K3, that_edgeReciprocals, that_beta, that_V, that___lowerer__var__0__);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__31(::x10::regionarray::DistArray<x10_double>* C, x10_double K1, x10_double K2, x10_double K3, ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals, x10_double beta, x10_double V, ::x10::regionarray::Dist* __lowerer__var__0__) : C(C), K1(K1), K2(K2), K3(K3), edgeReciprocals(edgeReciprocals), beta(beta), V(V), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:689-699";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__31_CLOSURE
#ifndef AU_EDU_ANU_PME_PME__CLOSURE__33_CLOSURE
#define AU_EDU_ANU_PME_PME__CLOSURE__33_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class au_edu_anu_pme_PME__closure__33 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__33> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        try {
            
            //#line 701 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10aux::nullCheck(C)->x10::regionarray::DistArray<x10_double>::__set(
              ((x10_long)0ll), ((x10_long)0ll), ((x10_long)0ll), 0.0);
        }
        catch (::x10::lang::CheckedThrowable* __exc70) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc70;
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            }
        }
    }
    
    // captured environment
    ::x10::regionarray::DistArray<x10_double>* C;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->C);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        au_edu_anu_pme_PME__closure__33* storage = ::x10aux::alloc_z<au_edu_anu_pme_PME__closure__33>();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<x10_double>* that_C = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
        au_edu_anu_pme_PME__closure__33* this_ = new (storage) au_edu_anu_pme_PME__closure__33(that_C);
        return this_;
    }
    
    au_edu_anu_pme_PME__closure__33(::x10::regionarray::DistArray<x10_double>* C) : C(C) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10:700-702";
    }

};

#endif // AU_EDU_ANU_PME_PME__CLOSURE__33_CLOSURE

//#line 40 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 41 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 42 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 43 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 44 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 45 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 46 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 47 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 48 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** A multi-timer for the several segments of a single getEnergy invocation, indexed by the constants above. */

//#line 53 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The number of grid lines in each dimension of the simulation unit cell. */

//#line 56 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** Double representations of the various grid dimensions */

//#line 57 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 58 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 61 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The edges of the unit cell. */

//#line 62 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 65 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The conjugate reciprocal vectors for each dimension. */

//#line 71 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** 
     * Scaling vector for scaled fractional coordinates.
     * Assumes unit rectangular cell. 
     */

//#line 73 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 76 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The order of B-spline interpolation */

//#line 79 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The Ewald coefficient beta */

//#line 82 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The direct sum cutoff distance in Angstroms */

//#line 93 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** 
     * Translation vectors for neighbouring unit cells 
     * (the 26 cells surrounding the origin cell).
     * These are replicated across all places using a PlaceLocalHandle.
     * Dimensions of the enclosed array are:
     * 0: x translation (difference between x-coordinate of sub-cells
     * 1: y translation
     * 2: z translation
     */

//#line 96 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The atoms in the simulation, divided up into a distributed array of Arrays, one for each place. */

//#line 98 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 99 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 100 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 103 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The gridded charge array Q as defined in Eq. 4.6 */

//#line 106 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The inverse DFT of the Q array.  TODO this should be a scoped local variable in getEnergy() XTENLANG-??? */

//#line 109 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** thetaRecConvQ as used in Eq. 4.7.  TODO this should be a scoped local variable in getEnergy() XTENLANG-??? */

//#line 110 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 113 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** Scratch array for use during 3D FFT.  TODO this should be a scoped local variable in getEnergy() XTENLANG-??? */

//#line 114 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"

//#line 127 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** 
     * An array of box divisions within the unit cell, with a side length
     * equal to half the direct sum cutoff distance.  (N.B. if the unit cell
     * side length is not an exact multiple of the subcell side length, the
     * last box in each dimension will be smaller than the cutoff distance, 
     * resulting in anisotropy in the direct potential.)
     * Direct sums are only calculated between particles in the same box and
     * the 26 neighbouring boxes.
     * Dimensions of the array region are (x,y,z)
     * TODO assumes cubic unit cell
     */

//#line 129 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** The number of sub-cells per side of the unit cell. */

//#line 135 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
/** 
     * A cache of atoms from subcells stored at other places.  
     * This is used to prefetch atom data for direct energy calculation.
     */

//#line 146 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::_constructor(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges,
                                          ::x10::lang::Rail< x10_long >* gridSize,
                                          ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                                          x10_int splineOrder,
                                          x10_double beta,
                                          x10_double cutoff) {
    
    //#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::au::edu::anu::pme::PME* this__64062 = this;
    ::x10aux::nullCheck(this__64062)->FMGL(timer) = (__extension__ ({
        
        //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::au::edu::anu::util::Timer* alloc__64061 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__64061)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)9ll));
        alloc__64061;
    }))
    ;
    
    //#line 152 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(gridSize) = gridSize;
    
    //#line 153 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K1 = ((x10_double) (::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll))));
    
    //#line 154 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K2 = ((x10_double) (::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll))));
    
    //#line 155 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K3 = ((x10_double) (::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)2ll))));
    
    //#line 156 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(edges) = edges;
    
    //#line 157 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(edgeLengths) = ::x10::lang::Rail< x10_double >::_make(((x10_long)3ll),
                                                                     reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(au_edu_anu_pme_PME__closure__1)))au_edu_anu_pme_PME__closure__1(edges))));
    
    //#line 158 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(edgeReciprocals) = ::x10::lang::Rail< ::x10x::vector::Vector3d >::_make(((x10_long)3ll),
                                                                                       reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >(sizeof(au_edu_anu_pme_PME__closure__2)))au_edu_anu_pme_PME__closure__2(edges))));
    
    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(scalingVector) = (__extension__ ({
        ::x10x::vector::Vector3d alloc__62208 =  ::x10x::vector::Vector3d::_alloc();
        
        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        x10_double i__64086 = (((__extension__ ({
                                    
                                    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10x::vector::Vector3d this__64087 =
                                      ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                        ((x10_long)0ll));
                                    
                                    //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d ret__64088;
                                    
                                    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double l__64074 =
                                      ((((((this__64087->FMGL(i)) * (this__64087->FMGL(i)))) + (((this__64087->FMGL(j)) * (this__64087->FMGL(j)))))) + (((this__64087->FMGL(k)) * (this__64087->FMGL(k)))));
                                    
                                    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ret__64088 = (__extension__ ({
                                        ::x10x::vector::Vector3d alloc__64075 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__64071 =
                                          ((this__64087->FMGL(i)) / (l__64074));
                                        x10_double j__64072 =
                                          ((this__64087->FMGL(j)) / (l__64074));
                                        x10_double k__64073 =
                                          ((this__64087->FMGL(k)) / (l__64074));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__64075->FMGL(i) =
                                          i__64071;
                                        alloc__64075->FMGL(j) =
                                          j__64072;
                                        alloc__64075->FMGL(k) =
                                          k__64073;
                                        alloc__64075;
                                    }))
                                    ;
                                    ret__64088;
                                }))
                                ->FMGL(i)) * (K1));
        x10_double j__64089 = (((__extension__ ({
                                    
                                    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10x::vector::Vector3d this__64090 =
                                      ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d ret__64091;
                                    
                                    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double l__64079 =
                                      ((((((this__64090->FMGL(i)) * (this__64090->FMGL(i)))) + (((this__64090->FMGL(j)) * (this__64090->FMGL(j)))))) + (((this__64090->FMGL(k)) * (this__64090->FMGL(k)))));
                                    
                                    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ret__64091 = (__extension__ ({
                                        ::x10x::vector::Vector3d alloc__64080 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__64076 =
                                          ((this__64090->FMGL(i)) / (l__64079));
                                        x10_double j__64077 =
                                          ((this__64090->FMGL(j)) / (l__64079));
                                        x10_double k__64078 =
                                          ((this__64090->FMGL(k)) / (l__64079));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__64080->FMGL(i) =
                                          i__64076;
                                        alloc__64080->FMGL(j) =
                                          j__64077;
                                        alloc__64080->FMGL(k) =
                                          k__64078;
                                        alloc__64080;
                                    }))
                                    ;
                                    ret__64091;
                                }))
                                ->FMGL(j)) * (K2));
        x10_double k__64092 = (((__extension__ ({
                                    
                                    //#line 159 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                                    ::x10x::vector::Vector3d this__64093 =
                                      ::x10aux::nullCheck(edges)->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                        ((x10_long)2ll));
                                    
                                    //#line 121 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ::x10x::vector::Vector3d ret__64094;
                                    
                                    //#line 122 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    x10_double l__64084 =
                                      ((((((this__64093->FMGL(i)) * (this__64093->FMGL(i)))) + (((this__64093->FMGL(j)) * (this__64093->FMGL(j)))))) + (((this__64093->FMGL(k)) * (this__64093->FMGL(k)))));
                                    
                                    //#line 123 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                    ret__64094 = (__extension__ ({
                                        ::x10x::vector::Vector3d alloc__64085 =
                                           ::x10x::vector::Vector3d::_alloc();
                                        
                                        //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        x10_double i__64081 =
                                          ((this__64093->FMGL(i)) / (l__64084));
                                        x10_double j__64082 =
                                          ((this__64093->FMGL(j)) / (l__64084));
                                        x10_double k__64083 =
                                          ((this__64093->FMGL(k)) / (l__64084));
                                        
                                        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
                                        alloc__64085->FMGL(i) =
                                          i__64081;
                                        alloc__64085->FMGL(j) =
                                          j__64082;
                                        alloc__64085->FMGL(k) =
                                          k__64083;
                                        alloc__64085;
                                    }))
                                    ;
                                    ret__64094;
                                }))
                                ->FMGL(k)) * (K3));
        
        //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        alloc__62208->FMGL(i) = i__64086;
        alloc__62208->FMGL(j) = j__64089;
        alloc__62208->FMGL(k) = k__64092;
        alloc__62208;
    }))
    ;
    
    //#line 160 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(K1) = K1;
    
    //#line 161 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(K2) = K2;
    
    //#line 162 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(K3) = K3;
    
    //#line 164 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(atoms) = atoms;
    
    //#line 165 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Region* gridRegion = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__63041 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                                                                             ((x10_long)0ll))) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__63042 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                                                                             ((x10_long)1ll))) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__63043 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((::x10aux::nullCheck(gridSize)->x10::lang::Rail< x10_long >::__apply(
                                                                                             ((x10_long)2ll))) - (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__63041,
                                                    r__63042,
                                                    r__63043);
    }))
    ;
    
    //#line 166 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Dist* gridDist = ::x10::regionarray::Dist::makeBlockBlock(
                                           gridRegion, ((x10_long)0ll),
                                           ((x10_long)1ll));
    
    //#line 167 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(gridDist) = gridDist;
    
    //#line 168 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(splineOrder) = splineOrder;
    
    //#line 169 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(beta) = beta;
    
    //#line 170 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(cutoff) = cutoff;
    
    //#line 171 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(imageTranslations) = ::x10::lang::PlaceLocalHandle<void>::make< ::x10::regionarray::Array< ::x10x::vector::Vector3d>* >(
                                      ::x10::lang::Place::places(),
                                      reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >(sizeof(au_edu_anu_pme_PME__closure__3)))au_edu_anu_pme_PME__closure__3(edges))));
    
    //#line 177 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((!::x10aux::struct_equals(::x10::lang::DoubleNatives::mod(::x10aux::nullCheck(this->FMGL(edgeLengths))->x10::lang::Rail< x10_double >::__apply(
                                                                    ((x10_long)0ll)), ((cutoff) / (2.0))),
                                  0.0))) {
        
        //#line 178 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::au::edu::anu::pme::PME_Strings::sl__66060), ::x10aux::nullCheck(this->FMGL(edgeLengths))->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                     ((x10_long)0ll))), (&::au::edu::anu::pme::PME_Strings::sl__66061)), ((cutoff) / (2.0)))));
    }
    
    //#line 180 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long numSubCells = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((::x10aux::nullCheck(this->FMGL(edgeLengths))->x10::lang::Rail< x10_double >::__apply(
                                                                                                 ((x10_long)0ll))) / (((cutoff) / (2.0))))));
    
    //#line 181 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Region* subCellRegion = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__63159 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((numSubCells) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__63160 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((numSubCells) - (((x10_long)1ll))));
        ::x10::lang::LongRange r__63161 = ::x10::lang::LongRange::_make(((x10_long)0ll), ((numSubCells) - (((x10_long)1ll))));
        ::x10::regionarray::Region::makeRectangular(r__63159,
                                                    r__63160,
                                                    r__63161);
    }))
    ;
    
    //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells =
      (__extension__ ({
        
        //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__63162 = reinterpret_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 182 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10::regionarray::PeriodicDist* alloc__62210 =
               (new (::x10aux::alloc_z< ::x10::regionarray::PeriodicDist>()) ::x10::regionarray::PeriodicDist());
            (alloc__62210)->::x10::regionarray::PeriodicDist::_constructor(
              ::x10::regionarray::Dist::makeBlockBlock(subCellRegion,
                                                       ((x10_long)0ll),
                                                       ((x10_long)1ll)));
            alloc__62210;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* alloc__63163 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >()) ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>());
            (alloc__63163)->::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::_constructor(
              dist__63162);
            alloc__63163;
        }))
        ;
    }))
    ;
    
    //#line 184 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(subCells) = subCells;
    
    //#line 185 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(numSubCells) = numSubCells;
    
    //#line 187 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache =
      (__extension__ ({
        
        //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__63166 = ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
            
            //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
            ::x10::regionarray::UniqueDist* alloc__63164 =
               (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
            
            //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
            (alloc__63164)->::x10::regionarray::UniqueDist::_constructor(
              ::x10::lang::Place::places());
            alloc__63164;
        }))
        );
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* alloc__63167 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*> >()) ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>());
            (alloc__63167)->::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>::_constructor(
              dist__63166);
            alloc__63167;
        }))
        ;
    }))
    ;
    {
        
        //#line 188 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64655 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      atomsCache->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64652;
                        for (__lowerer__var__1____64652 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64652));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64652));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__4)))au_edu_anu_pme_PME__closure__4(subCells, atomsCache, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc41) {
            {
                ::x10::lang::CheckedThrowable* ct__64653 =
                  __exc41;
                {
                    ::x10::lang::Runtime::pushException(ct__64653);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64655);
    }
    
    //#line 198 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(atomsCache) = atomsCache;
    
    //#line 202 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(Q) = ((__extension__ ({
                         
                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                         ::x10::regionarray::Dist* dist__63177 =
                           gridDist;
                         (__extension__ ({
                             ::x10::regionarray::DistArray<x10_double>* alloc__63178 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                             (alloc__63178)->::x10::regionarray::DistArray<x10_double>::_constructor(
                               dist__63177);
                             alloc__63178;
                         }))
                         ;
                     }))
                     );
    
    //#line 203 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(BdotC) = ((__extension__ ({
                             
                             //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                             ::x10::regionarray::Dist* dist__63179 =
                               gridDist;
                             (__extension__ ({
                                 ::x10::regionarray::DistArray<x10_double>* alloc__63180 =
                                    (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                                 (alloc__63180)->::x10::regionarray::DistArray<x10_double>::_constructor(
                                   dist__63179);
                                 alloc__63180;
                             }))
                             ;
                         }))
                         );
    
    //#line 206 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(Qinv) = ((__extension__ ({
                            
                            //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                            ::x10::regionarray::Dist* dist__63181 =
                              gridDist;
                            (__extension__ ({
                                ::x10::regionarray::DistArray<x10_complex>* alloc__63182 =
                                   (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_complex> >()) ::x10::regionarray::DistArray<x10_complex>());
                                (alloc__63182)->::x10::regionarray::DistArray<x10_complex>::_constructor(
                                  dist__63181);
                                alloc__63182;
                            }))
                            ;
                        }))
                        );
    
    //#line 207 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(thetaRecConvQ) = ((__extension__ ({
                                     
                                     //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                                     ::x10::regionarray::Dist* dist__63183 =
                                       gridDist;
                                     (__extension__ ({
                                         ::x10::regionarray::DistArray<x10_complex>* alloc__63184 =
                                            (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_complex> >()) ::x10::regionarray::DistArray<x10_complex>());
                                         (alloc__63184)->::x10::regionarray::DistArray<x10_complex>::_constructor(
                                           dist__63183);
                                         alloc__63184;
                                     }))
                                     ;
                                 }))
                                 );
    
    //#line 208 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(thetaRecConvQReal) = ((__extension__ ({
                                         
                                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                                         ::x10::regionarray::Dist* dist__63185 =
                                           gridDist;
                                         (__extension__ ({
                                             ::x10::regionarray::DistArray<x10_double>* alloc__63186 =
                                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                                             (alloc__63186)->::x10::regionarray::DistArray<x10_double>::_constructor(
                                               dist__63185);
                                             alloc__63186;
                                         }))
                                         ;
                                     }))
                                     );
    
    //#line 209 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(temp) = ((__extension__ ({
                            
                            //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                            ::x10::regionarray::Dist* dist__63187 =
                              gridDist;
                            (__extension__ ({
                                ::x10::regionarray::DistArray<x10_complex>* alloc__63188 =
                                   (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_complex> >()) ::x10::regionarray::DistArray<x10_complex>());
                                (alloc__63188)->::x10::regionarray::DistArray<x10_complex>::_constructor(
                                  dist__63187);
                                alloc__63188;
                            }))
                            ;
                        }))
                        );
    
    //#line 210 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(temp2) = ((__extension__ ({
                             
                             //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                             ::x10::regionarray::Dist* dist__63189 =
                               gridDist;
                             (__extension__ ({
                                 ::x10::regionarray::DistArray<x10_double>* alloc__63190 =
                                    (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                                 (alloc__63190)->::x10::regionarray::DistArray<x10_double>::_constructor(
                                   dist__63189);
                                 alloc__63190;
                             }))
                             ;
                         }))
                         );
    
    //#line 211 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(B) = ((__extension__ ({
                         
                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                         ::x10::regionarray::Dist* dist__63191 =
                           gridDist;
                         (__extension__ ({
                             ::x10::regionarray::DistArray<x10_double>* alloc__63192 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                             (alloc__63192)->::x10::regionarray::DistArray<x10_double>::_constructor(
                               dist__63191);
                             alloc__63192;
                         }))
                         ;
                     }))
                     );
    
    //#line 212 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(C) = ((__extension__ ({
                         
                         //#line 116 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
                         ::x10::regionarray::Dist* dist__63193 =
                           gridDist;
                         (__extension__ ({
                             ::x10::regionarray::DistArray<x10_double>* alloc__63194 =
                                (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<x10_double> >()) ::x10::regionarray::DistArray<x10_double>());
                             (alloc__63194)->::x10::regionarray::DistArray<x10_double>::_constructor(
                               dist__63193);
                             alloc__63194;
                         }))
                         ;
                     }))
                     );
}
::au::edu::anu::pme::PME* au::edu::anu::pme::PME::_make(::x10::lang::Rail< ::x10x::vector::Vector3d >* edges,
                                                        ::x10::lang::Rail< x10_long >* gridSize,
                                                        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms,
                                                        x10_int splineOrder,
                                                        x10_double beta,
                                                        x10_double cutoff)
{
    ::au::edu::anu::pme::PME* this_ = new (::x10aux::alloc_z< ::au::edu::anu::pme::PME>()) ::au::edu::anu::pme::PME();
    this_->_constructor(edges, gridSize, atoms, splineOrder,
    beta, cutoff);
    return this_;
}



//#line 221 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::setup() {
    
    //#line 222 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)8))));
    
    //#line 223 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->initBArray();
    
    //#line 224 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->initCArray();
    
    //#line 225 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10aux::nullCheck(this->FMGL(B))->map< x10_double, x10_double >(
      this->FMGL(BdotC), this->FMGL(C), reinterpret_cast< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >(sizeof(au_edu_anu_pme_PME__closure__6)))au_edu_anu_pme_PME__closure__6())));
    
    //#line 226 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->divideAtomsIntoSubCells();
    
    //#line 227 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)8))));
}

//#line 230 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::getEnergy() {
    
    //#line 231 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)0))));
    {
        
        //#line 233 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64674 = ::x10::lang::Runtime::startFinish();
        try {
            {
                
                //#line 234 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                this->prefetchRemoteAtoms();
                
                //#line 236 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                this->gridCharges();
                
                //#line 238 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                this->FMGL(timer)->au::edu::anu::util::Timer::start(
                  ((x10_long)(((x10_int)2))));
                
                //#line 239 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::au::edu::anu::fft::DistributedReal3dFft::doFFT3d(
                  this->FMGL(Q), this->FMGL(Qinv), this->FMGL(temp));
                
                //#line 240 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                this->FMGL(timer)->au::edu::anu::util::Timer::stop(
                  ((x10_long)(((x10_int)2))));
                
                //#line 242 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                this->FMGL(timer)->au::edu::anu::util::Timer::start(
                  ((x10_long)(((x10_int)3))));
                
                //#line 246 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::x10::regionarray::DistArray<x10_double>* BdotC =
                  this->FMGL(BdotC);
                
                //#line 247 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::x10::regionarray::DistArray<x10_complex>* thetaRecConvQ =
                  this->FMGL(thetaRecConvQ);
                
                //#line 248 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::x10::regionarray::DistArray<x10_complex>* Qinv =
                  this->FMGL(Qinv);
                {
                    
                    //#line 249 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::lang::FinishState* fs__64670 =
                      ::x10::lang::Runtime::startFinish();
                    try {
                        {
                            {
                                ::x10::lang::Runtime::ensureNotInAtomic();
                                ::x10::regionarray::Dist* __lowerer__var__0__ =
                                  ::x10::regionarray::Dist::makeUnique(
                                    ::x10aux::nullCheck(this->FMGL(gridDist))->places());
                                {
                                    ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64667;
                                    for (__lowerer__var__1____64667 =
                                           ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64667));
                                         ) {
                                        ::x10::lang::Place __lowerer__var__1__ =
                                          ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64667));
                                        ::x10::lang::Runtime::runAsync(
                                          __lowerer__var__1__,
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__7)))au_edu_anu_pme_PME__closure__7(BdotC, thetaRecConvQ, Qinv, __lowerer__var__0__))),
                                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                    }
                                }
                                
                            }
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc44) {
                        {
                            ::x10::lang::CheckedThrowable* ct__64668 =
                              __exc44;
                            {
                                ::x10::lang::Runtime::pushException(
                                  ct__64668);
                            }
                        }
                    }
                    ::x10::lang::Runtime::stopFinish(fs__64670);
                }
                
                //#line 258 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                ::au::edu::anu::fft::DistributedReal3dFft::doFFT3d(
                  thetaRecConvQ, this->FMGL(thetaRecConvQReal),
                  this->FMGL(temp), this->FMGL(temp2));
                
                //#line 259 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                this->FMGL(timer)->au::edu::anu::util::Timer::stop(
                  ((x10_long)(((x10_int)3))));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc45) {
            {
                ::x10::lang::CheckedThrowable* ct__64672 =
                  __exc45;
                {
                    ::x10::lang::Runtime::pushException(ct__64672);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64674);
    }
    
    //#line 262 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double reciprocalEnergy = this->getReciprocalEnergy(
                                    this->FMGL(thetaRecConvQReal));
    
    //#line 263 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double selfEnergy = this->getSelfEnergy();
    
    //#line 264 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double directEnergy = this->getDirectEnergy();
    
    //#line 271 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double totalEnergy = ((((directEnergy) + (reciprocalEnergy))) + (((0.0) + (selfEnergy))));
    
    //#line 273 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)0))));
    
    //#line 274 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return totalEnergy;
    
}

//#line 281 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::divideAtomsIntoSubCells() {
    
    //#line 282 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double halfCutoff = ((this->FMGL(cutoff)) / (2.0));
    
    //#line 283 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* subCellsTemp =
      (__extension__ ({
        
        //#line 147 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/DistArray.x10"
        ::x10::regionarray::Dist* dist__63720 = ::x10aux::nullCheck(this->FMGL(subCells))->FMGL(dist);
        (__extension__ ({
            ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>* alloc__63722 =
               (new (::x10aux::alloc_z< ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >()) ::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>());
            (alloc__63722)->::x10::regionarray::DistArray< ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::_constructor(
              dist__63720, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >(sizeof(au_edu_anu_pme_PME__closure__9)))au_edu_anu_pme_PME__closure__9())));
            alloc__63722;
        }))
        ;
    }))
    ;
    
    //#line 284 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>* atoms =
      this->FMGL(atoms);
    
    //#line 285 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long halfNumSubCells = ((this->FMGL(numSubCells)) / ::x10aux::zeroCheck(((x10_long)2ll)));
    {
        
        //#line 286 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64696 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(atoms)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64693;
                        for (__lowerer__var__1____64693 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64693));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64693));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__10)))au_edu_anu_pme_PME__closure__10(atoms, halfCutoff, halfNumSubCells, subCellsTemp, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc49) {
            {
                ::x10::lang::CheckedThrowable* ct__64694 =
                  __exc49;
                {
                    ::x10::lang::Runtime::pushException(ct__64694);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64696);
    }
    
    //#line 301 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells =
      this->FMGL(subCells);
    {
        
        //#line 302 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64789 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(subCells)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64786;
                        for (__lowerer__var__1____64786 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64786));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64786));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__13)))au_edu_anu_pme_PME__closure__13(subCells, subCellsTemp, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc50) {
            {
                ::x10::lang::CheckedThrowable* ct__64787 =
                  __exc50;
                {
                    ::x10::lang::Runtime::pushException(ct__64787);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64789);
    }
}

//#line 311 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::prefetchRemoteAtoms() {
    
    //#line 312 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)7))));
    
    //#line 313 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells =
      this->FMGL(subCells);
    
    //#line 314 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache =
      this->FMGL(atomsCache);
    {
        
        //#line 315 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64813 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::nullCheck(atomsCache)->FMGL(dist);
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64810;
                        for (__lowerer__var__1____64810 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64810));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64810));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__15)))au_edu_anu_pme_PME__closure__15(atomsCache, subCells, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc54) {
            {
                ::x10::lang::CheckedThrowable* ct__64811 =
                  __exc54;
                {
                    ::x10::lang::Runtime::pushException(ct__64811);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64813);
    }
    
    //#line 350 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)7))));
}

//#line 359 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*
  au::edu::anu::pme::PME::getAtomsForSubcellList(::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells,
                                                 ::x10::lang::Rail< ::x10::lang::Point* >* boxList) {
    
    //#line 360 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >* atoms =
      ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >::_make((x10_long)(::x10aux::nullCheck(boxList)->FMGL(size)),
                                                                                          reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >(sizeof(au_edu_anu_pme_PME__closure__19)))au_edu_anu_pme_PME__closure__19(subCells, boxList))));
    
    //#line 362 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return atoms;
    
}

//#line 365 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::getDirectEnergy() {
    
    //#line 366 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)6))));
    
    //#line 367 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double cutoffSquared = ((this->FMGL(cutoff)) * (this->FMGL(cutoff)));
    
    //#line 368 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Dist* subCellsDist = ::x10aux::nullCheck(this->FMGL(subCells))->FMGL(dist);
    
    //#line 369 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long numSubCells = this->FMGL(numSubCells);
    
    //#line 370 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache =
      this->FMGL(atomsCache);
    
    //#line 371 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> imageTranslations =
      this->FMGL(imageTranslations);
    
    //#line 372 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double beta = this->FMGL(beta);
    
    //#line 373 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double directEnergy;
    {
        ::x10::lang::FinishState* fs__64831 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double> alloc__62216 =
                                                                                                                 
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double>::_alloc();
                                                                                                               alloc__62216;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 374 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__63755 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__63755)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__63755;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64829;
                        for (__lowerer__var__1____64829 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64829));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64829));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__20)))au_edu_anu_pme_PME__closure__20(atomsCache, imageTranslations, subCellsDist, numSubCells, cutoffSquared, beta, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc57) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc57;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        directEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                         fs__64831);
    }
    
    //#line 442 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)6))));
    
    //#line 443 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return directEnergy;
    
}

//#line 451 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::getSelfEnergy() {
    
    //#line 452 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)5))));
    
    //#line 453 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* subCells =
      this->FMGL(subCells);
    
    //#line 454 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double selfEnergy;
    {
        ::x10::lang::FinishState* fs__64849 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double> alloc__62217 =
                                                                                                                 
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double>::_alloc();
                                                                                                               alloc__62217;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 455 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__63820 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__63820)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__63820;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64847;
                        for (__lowerer__var__1____64847 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64847));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64847));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__23)))au_edu_anu_pme_PME__closure__23(subCells, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc59) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc59;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        selfEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                       fs__64849);
    }
    
    //#line 468 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)5))));
    
    //#line 469 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return ((((selfEnergy) * ((-(this->FMGL(beta)))))) / (::x10::lang::MathNatives::sqrt(3.141592653589793)));
    
}

//#line 477 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::gridCharges() {
    
    //#line 478 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)1))));
    
    //#line 480 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::lang::Rail< x10_long >* gridSize = this->FMGL(gridSize);
    
    //#line 481 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long numSubCells = this->FMGL(numSubCells);
    
    //#line 482 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_int splineOrder = this->FMGL(splineOrder);
    
    //#line 483 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10x::vector::Vector3d scalingVector = this->FMGL(scalingVector);
    
    //#line 484 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray<x10_double>* Q = this->FMGL(Q);
    
    //#line 485 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>* atomsCache =
      this->FMGL(atomsCache);
    
    //#line 486 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Region* subCellRegion = (__extension__ ({
        ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>* this__63833 =
          this->FMGL(subCells);
        ::x10aux::nullCheck(::x10aux::nullCheck(this__63833)->FMGL(dist))->FMGL(region);
    }))
    ;
    {
        
        //#line 487 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64865 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__63834 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__63834)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__63834;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64862;
                        for (__lowerer__var__1____64862 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64862));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64862));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__25)))au_edu_anu_pme_PME__closure__25(Q, gridSize, atomsCache, numSubCells, splineOrder, subCellRegion, scalingVector, this, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc61) {
            {
                ::x10::lang::CheckedThrowable* ct__64863 =
                  __exc61;
                {
                    ::x10::lang::Runtime::pushException(ct__64863);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64865);
    }
    
    //#line 542 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)1))));
}

//#line 551 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
::x10::regionarray::Region* au::edu::anu::pme::PME::getSubcellHaloRegionForPlace(
  x10_long gridSize, x10_long numSubCells, x10_int splineOrder,
  ::x10::regionarray::Region* gridRegion, ::x10::regionarray::Region* subCellRegion) {
    
    //#line 552 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double gridPointsPerSubCell = ((((x10_double) (gridSize))) / (((x10_double) (numSubCells))));
    
    //#line 554 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_int subCellMinX = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::floor(((((x10_double) (::x10aux::nullCheck(gridRegion)->min(
                                                                                                               ((x10_long)0ll))))) / (gridPointsPerSubCell))));
    
    //#line 556 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_boolean fullX = ((::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->min(
                                                    ((x10_long)0ll)),
                                                  ((x10_long)0ll))) &&
    (::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->max(
                               ((x10_long)0ll)), ((gridSize) - (((x10_long)1ll))))));
    
    //#line 557 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long subCellMaxX;
    
    //#line 558 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if (fullX) {
        
        //#line 559 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        subCellMaxX = ::x10aux::nullCheck(subCellRegion)->max(
                        ((x10_long)0ll));
    } else {
        
        //#line 561 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_long maxX = ((::x10aux::nullCheck(gridRegion)->max(
                            ((x10_long)0ll))) + (((((x10_long)(splineOrder))) - (((x10_long)1ll)))));
        
        //#line 562 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        subCellMaxX = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((((x10_double) (maxX))) / (gridPointsPerSubCell))));
    }
    
    //#line 565 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long subCellMinY = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::floor(((((x10_double) (::x10aux::nullCheck(gridRegion)->min(
                                                                                                                 ((x10_long)1ll))))) / (gridPointsPerSubCell))));
    
    //#line 566 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_boolean fullY = ((::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->min(
                                                    ((x10_long)1ll)),
                                                  ((x10_long)0ll))) &&
    (::x10aux::struct_equals(::x10aux::nullCheck(gridRegion)->max(
                               ((x10_long)1ll)), ((gridSize) - (((x10_long)1ll))))));
    
    //#line 567 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long subCellMaxY;
    
    //#line 568 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if (fullY) {
        
        //#line 569 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        subCellMaxY = ::x10aux::nullCheck(subCellRegion)->max(
                        ((x10_long)1ll));
    } else {
        
        //#line 571 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        x10_long maxY = ((::x10aux::nullCheck(gridRegion)->max(
                            ((x10_long)1ll))) + (((((x10_long)(splineOrder))) - (((x10_long)1ll)))));
        
        //#line 572 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        subCellMaxY = ::x10::lang::DoubleNatives::toLong(::x10::lang::MathNatives::ceil(((((x10_double) (maxY))) / (gridPointsPerSubCell))));
    }
    
    //#line 575 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Region* subCellHaloRegion = (__extension__ ({
        
        //#line 236 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Region.x10"
        ::x10::lang::LongRange r__63952 = ::x10::lang::LongRange::_make(((x10_long)(subCellMinX)), subCellMaxX);
        ::x10::lang::LongRange r__63953 = ::x10::lang::LongRange::_make(subCellMinY, subCellMaxY);
        ::x10::lang::LongRange r__63954 = ::x10::lang::LongRange::_make(::x10aux::nullCheck(subCellRegion)->min(
                                                                          ((x10_long)2ll)), ::x10aux::nullCheck(subCellRegion)->max(
                                                                                              ((x10_long)2ll)));
        ::x10::regionarray::Region::makeRectangular(r__63952,
                                                    r__63953,
                                                    r__63954);
    }))
    ;
    
    //#line 579 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return subCellHaloRegion;
    
}

//#line 585 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::getReciprocalEnergy(::x10::regionarray::DistArray<x10_double>* thetaRecConvQ) {
    
    //#line 586 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::start(((x10_long)(((x10_int)4))));
    
    //#line 588 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::Dist* gridDist = this->FMGL(gridDist);
    
    //#line 589 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray<x10_double>* Q = this->FMGL(Q);
    
    //#line 591 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double scale = ((1.0) / (((((this->FMGL(K1)) * (this->FMGL(K2)))) * (this->FMGL(K3)))));
    
    //#line 592 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double reciprocalEnergy;
    {
        ::x10::lang::FinishState* fs__64882 = ::x10aux::class_cast_unchecked< ::x10::lang::FinishState*>(::x10::lang::Runtime::startCollectingFinish< x10_double >(
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Reducible<x10_double>*>((__extension__ ({
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double> alloc__62219 =
                                                                                                                 
                                                                                                               ::x10::lang::Reducible__SumReducer<x10_double>::_alloc();
                                                                                                               alloc__62219;
                                                                                                           }))
                                                                                                           )));
        try {
            {
                {
                    
                    //#line 593 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__63958 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__63958)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__63958;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64880;
                        for (__lowerer__var__1____64880 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64880));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64880));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__27)))au_edu_anu_pme_PME__closure__27(Q, thetaRecConvQ, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc64) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc64;
                {
                    ::x10::lang::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        reciprocalEnergy = ::x10::lang::Runtime::stopCollectingFinish< x10_double >(
                             fs__64882);
    }
    
    //#line 605 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    this->FMGL(timer)->au::edu::anu::util::Timer::stop(((x10_long)(((x10_int)4))));
    
    //#line 606 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return ((((scale) * (reciprocalEnergy))) / (2.0));
    
}

//#line 609 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::fillSpline(x10_double offset,
                                        ::x10::lang::Rail< x10_double >* spline,
                                        x10_int splineOrder) {
    
    //#line 610 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((((x10_long)(splineOrder))) - (((x10_long)1ll))), 0.0);
    
    //#line 611 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((x10_long)1ll), offset);
    
    //#line 612 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((x10_long)0ll), ((1.0) - (offset)));
    
    //#line 614 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long i__62761max__64534 = ((((x10_long)(splineOrder))) - (((x10_long)1ll)));
    {
        x10_long i__64535;
        for (i__64535 = ((x10_long)3ll); ((i__64535) <= (i__62761max__64534));
             i__64535 = ((i__64535) + (((x10_long)1ll))))
        {
            x10_long k__64536 = i__64535;
            
            //#line 615 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_double div__64533 = ((1.0) / (((((x10_double) (k__64536))) - (1.0))));
            
            //#line 616 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
              ((k__64536) - (((x10_long)1ll))), ((((div__64533) * (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                  ((k__64536) - (((x10_long)2ll)))))));
            
            //#line 617 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            x10_long i__62743max__64530 = ((k__64536) - (((x10_long)2ll)));
            {
                x10_long i__64531;
                for (i__64531 = ((x10_long)1ll); ((i__64531) <= (i__62743max__64530));
                     i__64531 = ((i__64531) + (((x10_long)1ll))))
                {
                    x10_long l__64532 = i__64531;
                    
                    //#line 618 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
                    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
                      ((((k__64536) - (l__64532))) - (((x10_long)1ll))),
                      ((div__64533) * (((((((offset) + (((x10_double) (l__64532))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                          ((((k__64536) - (l__64532))) - (((x10_long)2ll))))))) + (((((((x10_double) (((k__64536) - (l__64532))))) - (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                     ((((k__64536) - (l__64532))) - (((x10_long)1ll)))))))))));
                }
            }
            
            //#line 620 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
              ((x10_long)0ll), ((((div__64533) * (((1.0) - (offset))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                             ((x10_long)0ll)))));
        }
    }
    
    //#line 623 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double div = ((1.0) / (((x10_double) (((((x10_long)(splineOrder))) - (((x10_long)1ll)))))));
    
    //#line 624 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((((x10_long)(splineOrder))) - (((x10_long)1ll))), ((((div) * (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                    ((((x10_long)(splineOrder))) - (((x10_long)2ll)))))));
    
    //#line 625 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_long i__62779max__64537 = ((((x10_long)(splineOrder))) - (((x10_long)2ll)));
    {
        x10_long i__64538;
        for (i__64538 = ((x10_long)1ll); ((i__64538) <= (i__62779max__64537));
             i__64538 = ((i__64538) + (((x10_long)1ll))))
        {
            x10_long l__64539 = i__64538;
            
            //#line 626 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
            ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
              ((((((x10_long)(splineOrder))) - (l__64539))) - (((x10_long)1ll))),
              ((div) * (((((((offset) + (((x10_double) (l__64539))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                           ((((((x10_long)(splineOrder))) - (l__64539))) - (((x10_long)2ll))))))) + (((((((x10_double) (((((x10_long)(splineOrder))) - (l__64539))))) - (offset))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                                                                                                                                                                                                        ((((((x10_long)(splineOrder))) - (l__64539))) - (((x10_long)1ll)))))))))));
        }
    }
    
    //#line 629 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__set(
      ((x10_long)0ll), ((((div) * (((1.0) - (offset))))) * (::x10aux::nullCheck(spline)->x10::lang::Rail< x10_double >::__apply(
                                                              ((x10_long)0ll)))));
}

//#line 636 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::initBArray() {
    
    //#line 637 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray<x10_double>* B = this->FMGL(B);
    
    //#line 638 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_int splineOrder = this->FMGL(splineOrder);
    
    //#line 639 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K1 = this->FMGL(K1);
    
    //#line 640 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K2 = this->FMGL(K2);
    
    //#line 641 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K3 = this->FMGL(K3);
    {
        
        //#line 642 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64898 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__63982 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__63982)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__63982;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64895;
                        for (__lowerer__var__1____64895 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64895));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64895));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__29)))au_edu_anu_pme_PME__closure__29(splineOrder, B, K1, K2, K3, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc67) {
            {
                ::x10::lang::CheckedThrowable* ct__64896 =
                  __exc67;
                {
                    ::x10::lang::Runtime::pushException(ct__64896);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64898);
    }
}

//#line 680 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
void au::edu::anu::pme::PME::initCArray() {
    
    //#line 681 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double V = this->getVolume();
    
    //#line 683 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::regionarray::DistArray<x10_double>* C = this->FMGL(C);
    
    //#line 684 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K1 = this->FMGL(K1);
    
    //#line 685 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K2 = this->FMGL(K2);
    
    //#line 686 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double K3 = this->FMGL(K3);
    
    //#line 687 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10::lang::Rail< ::x10x::vector::Vector3d >* edgeReciprocals =
      this->FMGL(edgeReciprocals);
    
    //#line 688 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    x10_double beta = this->FMGL(beta);
    {
        
        //#line 689 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* fs__64913 = ::x10::lang::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Runtime::ensureNotInAtomic();
                    ::x10::regionarray::Dist* __lowerer__var__0__ =
                      ::x10aux::class_cast< ::x10::regionarray::Dist*>((__extension__ ({
                        
                        //#line 52 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/Dist.x10"
                        ::x10::regionarray::UniqueDist* alloc__64002 =
                           (new (::x10aux::alloc_z< ::x10::regionarray::UniqueDist>()) ::x10::regionarray::UniqueDist());
                        
                        //#line 51 "/u/qqiu/workspace/x10-trunk/x10.dist/stdlib/x10.jar:x10/regionarray/UniqueDist.x10"
                        (alloc__64002)->::x10::regionarray::UniqueDist::_constructor(
                          ::x10::lang::Place::places());
                        alloc__64002;
                    }))
                    );
                    {
                        ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____64910;
                        for (__lowerer__var__1____64910 =
                               ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____64910));
                             ) {
                            ::x10::lang::Place __lowerer__var__1__ =
                              ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____64910));
                            ::x10::lang::Runtime::runAsync(
                              __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__31)))au_edu_anu_pme_PME__closure__31(C, K1, K2, K3, edgeReciprocals, beta, V, __lowerer__var__0__))),
                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc69) {
            {
                ::x10::lang::CheckedThrowable* ct__64911 =
                  __exc69;
                {
                    ::x10::lang::Runtime::pushException(ct__64911);
                }
            }
        }
        ::x10::lang::Runtime::stopFinish(fs__64913);
    }
    {
        
        //#line 700 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::x10::lang::Runtime::runAt(::x10aux::nullCheck(::x10aux::nullCheck(C)->FMGL(dist))->__apply(
                                      ((x10_long)0ll), ((x10_long)0ll),
                                      ((x10_long)0ll)), reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(au_edu_anu_pme_PME__closure__33)))au_edu_anu_pme_PME__closure__33(C))),
                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 708 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::bSpline(x10_int n, x10_double u) {
    
    //#line 709 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((::x10aux::struct_equals(n, ((x10_int)4)))) {
        
        //#line 710 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ::au::edu::anu::pme::PME::bSpline4(u);
        
    } else 
    //#line 711 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((((u) < (0.0)) || ((u) > (((x10_double) (n)))))) {
        
        //#line 712 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return 0.0;
        
    } else 
    //#line 713 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((::x10aux::struct_equals(n, ((x10_int)2)))) {
        
        //#line 714 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ((1.0) - (::fabs(((u) - (1.0)))));
        
    } else {
        
        //#line 716 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ((((((u) / (((x10_double) (((n) - (((x10_int)1)))))))) * (::au::edu::anu::pme::PME::bSpline(
                                                                           ((n) - (((x10_int)1))),
                                                                           u)))) + (((((((((x10_double) (n))) - (u))) / (((x10_double) (((n) - (((x10_int)1)))))))) * (::au::edu::anu::pme::PME::bSpline(
                                                                                                                                                                         ((n) - (((x10_int)1))),
                                                                                                                                                                         ((u) - (1.0)))))));
        
    }
    
}

//#line 723 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::bSpline4(x10_double u) {
    
    //#line 724 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((((u) <= (0.0)) || ((u) >= (((x10_double) (((x10_long)4ll)))))))
    {
        
        //#line 725 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return 0.0;
        
    } else {
        
        //#line 727 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ((((((u) / (((x10_double) (((x10_long)3ll)))))) * (::au::edu::anu::pme::PME::bSpline3(
                                                                    u)))) + (((((((((x10_double) (((x10_long)4ll)))) - (u))) / (((x10_double) (((x10_long)3ll)))))) * (::au::edu::anu::pme::PME::bSpline3(
                                                                                                                                                                         ((u) - (1.0)))))));
        
    }
    
}

//#line 734 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::bSpline3(x10_double u) {
    
    //#line 735 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((((u) <= (0.0)) || ((u) >= (((x10_double) (((x10_long)3ll)))))))
    {
        
        //#line 736 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return 0.0;
        
    } else {
        
        //#line 738 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ((((((u) / (((x10_double) (((x10_long)2ll)))))) * (::au::edu::anu::pme::PME::bSpline2(
                                                                    u)))) + (((((((((x10_double) (((x10_long)3ll)))) - (u))) / (((x10_double) (((x10_long)2ll)))))) * (::au::edu::anu::pme::PME::bSpline2(
                                                                                                                                                                         ((u) - (1.0)))))));
        
    }
    
}

//#line 745 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::bSpline2(x10_double u) {
    
    //#line 746 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    if ((((u) <= (0.0)) || ((u) >= (((x10_double) (((x10_long)2ll)))))))
    {
        
        //#line 747 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return 0.0;
        
    } else {
        
        //#line 749 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        return ((1.0) - (::fabs(((u) - (1.0)))));
        
    }
    
}

//#line 756 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
x10_double au::edu::anu::pme::PME::getVolume() {
    
    //#line 757 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    ::x10x::vector::Vector3d this__64637 = (__extension__ ({
        ::x10x::vector::Vector3d this__64638 = ::x10aux::nullCheck(this->FMGL(edges))->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                 ((x10_long)0ll));
        
        //#line 63 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
        ::x10x::vector::Vector3d vec__64639 = ::x10aux::nullCheck(this->FMGL(edges))->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                                ((x10_long)1ll));
        (__extension__ ({
            
            //#line 64 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            ::x10x::vector::Vector3d alloc__64640 =  ::x10x::vector::Vector3d::_alloc();
            
            //#line 16 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            x10_double i__64634 = ((((this__64638->FMGL(j)) * (vec__64639->FMGL(k)))) - (((this__64638->FMGL(k)) * (vec__64639->FMGL(j)))));
            x10_double j__64635 = ((((this__64638->FMGL(k)) * (vec__64639->FMGL(i)))) - (((this__64638->FMGL(i)) * (vec__64639->FMGL(k)))));
            x10_double k__64636 = ((((this__64638->FMGL(i)) * (vec__64639->FMGL(j)))) - (((this__64638->FMGL(j)) * (vec__64639->FMGL(i)))));
            
            //#line 17 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
            alloc__64640->FMGL(i) = i__64634;
            alloc__64640->FMGL(j) = j__64635;
            alloc__64640->FMGL(k) = k__64636;
            alloc__64640;
        }))
        ;
    }))
    ;
    
    //#line 59 "/localdisk/qqiu/workspace/anuchem/xla/xla.jar:x10x/vector/Vector3d.x10"
    ::x10x::vector::Vector3d vec__64641 = ::x10aux::nullCheck(this->FMGL(edges))->x10::lang::Rail< ::x10x::vector::Vector3d >::__apply(
                                            ((x10_long)2ll));
    
    //#line 757 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
    return ((((((this__64637->FMGL(i)) * (vec__64641->FMGL(i)))) + (((this__64637->FMGL(j)) * (vec__64641->FMGL(j)))))) + (((this__64637->FMGL(k)) * (vec__64641->FMGL(k)))));
    
}

//#line 38 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
::au::edu::anu::pme::PME* au::edu::anu::pme::PME::au__edu__anu__pme__PME____this__au__edu__anu__pme__PME(
  ) {
    return this;
    
}
void au::edu::anu::pme::PME::__fieldInitializers_au_edu_anu_pme_PME(
  ) {
    this->FMGL(timer) = (__extension__ ({
        
        //#line 50 "/localdisk/qqiu/workspace/anuchem/apps/pme/src/au/edu/anu/pme/PME.x10"
        ::au::edu::anu::util::Timer* alloc__62220 =  (new (::x10aux::alloc_z< ::au::edu::anu::util::Timer>()) ::au::edu::anu::util::Timer());
        (alloc__62220)->::au::edu::anu::util::Timer::_constructor(
          ((x10_long)9ll));
        alloc__62220;
    }))
    ;
}
const ::x10aux::serialization_id_t au::edu::anu::pme::PME::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::au::edu::anu::pme::PME::_deserializer);

void au::edu::anu::pme::PME::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(timer));
    buf.write(this->FMGL(gridSize));
    buf.write(this->FMGL(K1));
    buf.write(this->FMGL(K2));
    buf.write(this->FMGL(K3));
    buf.write(this->FMGL(edges));
    buf.write(this->FMGL(edgeLengths));
    buf.write(this->FMGL(edgeReciprocals));
    buf.write(this->FMGL(scalingVector));
    buf.write(this->FMGL(gridDist));
    buf.write(this->FMGL(splineOrder));
    buf.write(this->FMGL(beta));
    buf.write(this->FMGL(cutoff));
    buf.write(this->FMGL(imageTranslations));
    buf.write(this->FMGL(atoms));
    buf.write(this->FMGL(B));
    buf.write(this->FMGL(C));
    buf.write(this->FMGL(BdotC));
    buf.write(this->FMGL(Q));
    buf.write(this->FMGL(Qinv));
    buf.write(this->FMGL(thetaRecConvQ));
    buf.write(this->FMGL(thetaRecConvQReal));
    buf.write(this->FMGL(temp));
    buf.write(this->FMGL(temp2));
    buf.write(this->FMGL(subCells));
    buf.write(this->FMGL(numSubCells));
    buf.write(this->FMGL(atomsCache));
    
}

::x10::lang::Reference* ::au::edu::anu::pme::PME::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::au::edu::anu::pme::PME* this_ = new (::x10aux::alloc_z< ::au::edu::anu::pme::PME>()) ::au::edu::anu::pme::PME();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void au::edu::anu::pme::PME::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(timer) = buf.read< ::au::edu::anu::util::Timer*>();
    FMGL(gridSize) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(K1) = buf.read<x10_double>();
    FMGL(K2) = buf.read<x10_double>();
    FMGL(K3) = buf.read<x10_double>();
    FMGL(edges) = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
    FMGL(edgeLengths) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(edgeReciprocals) = buf.read< ::x10::lang::Rail< ::x10x::vector::Vector3d >*>();
    FMGL(scalingVector) = buf.read< ::x10x::vector::Vector3d>();
    FMGL(gridDist) = buf.read< ::x10::regionarray::Dist*>();
    FMGL(splineOrder) = buf.read<x10_int>();
    FMGL(beta) = buf.read<x10_double>();
    FMGL(cutoff) = buf.read<x10_double>();
    FMGL(imageTranslations) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >();
    FMGL(atoms) = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::mm::MMAtom* >*>*>();
    FMGL(B) = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
    FMGL(C) = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
    FMGL(BdotC) = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
    FMGL(Q) = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
    FMGL(Qinv) = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
    FMGL(thetaRecConvQ) = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
    FMGL(thetaRecConvQReal) = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
    FMGL(temp) = buf.read< ::x10::regionarray::DistArray<x10_complex>*>();
    FMGL(temp2) = buf.read< ::x10::regionarray::DistArray<x10_double>*>();
    FMGL(subCells) = buf.read< ::x10::regionarray::DistArray< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>();
    FMGL(numSubCells) = buf.read<x10_long>();
    FMGL(atomsCache) = buf.read< ::x10::regionarray::DistArray< ::x10::regionarray::Array< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>*>*>();
}

::x10aux::RuntimeType au::edu::anu::pme::PME::rtt;
void au::edu::anu::pme::PME::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("au.edu.anu.pme.PME",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String au::edu::anu::pme::PME_Strings::sl__66061(" is not an exact multiple of (cutoff/2.0) ");
::x10::lang::String au::edu::anu::pme::PME_Strings::sl__66060("warning: edge length ");

::x10::lang::Fun_0_1<x10_long, x10_double>::itable<au_edu_anu_pme_PME__closure__1>au_edu_anu_pme_PME__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__1::__apply, &au_edu_anu_pme_PME__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_double> >, &au_edu_anu_pme_PME__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__1::_deserialize);

::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d>::itable<au_edu_anu_pme_PME__closure__2>au_edu_anu_pme_PME__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__2::__apply, &au_edu_anu_pme_PME__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10x::vector::Vector3d> >, &au_edu_anu_pme_PME__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__2::_deserialize);

::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*>::itable<au_edu_anu_pme_PME__closure__3>au_edu_anu_pme_PME__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__3::__apply, &au_edu_anu_pme_PME__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::Array< ::x10x::vector::Vector3d>*> >, &au_edu_anu_pme_PME__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__3::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__5>au_edu_anu_pme_PME__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__5::__apply, &au_edu_anu_pme_PME__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__5::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__4>au_edu_anu_pme_PME__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__4::__apply, &au_edu_anu_pme_PME__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__4::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_2<x10_double, x10_double, x10_double>::itable<au_edu_anu_pme_PME__closure__6>au_edu_anu_pme_PME__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__6::__apply, &au_edu_anu_pme_PME__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_double, x10_double> >, &au_edu_anu_pme_PME__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__6::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__8>au_edu_anu_pme_PME__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__8::__apply, &au_edu_anu_pme_PME__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__8::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__8::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__8::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__7>au_edu_anu_pme_PME__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__7::__apply, &au_edu_anu_pme_PME__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__7::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*>::itable<au_edu_anu_pme_PME__closure__9>au_edu_anu_pme_PME__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__9::__apply, &au_edu_anu_pme_PME__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::util::ArrayList< ::au::edu::anu::chem::PointCharge>*> >, &au_edu_anu_pme_PME__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__9::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__12>au_edu_anu_pme_PME__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__12::__apply, &au_edu_anu_pme_PME__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__12::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__11>au_edu_anu_pme_PME__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__11::__apply, &au_edu_anu_pme_PME__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__11::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__11::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__11::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__10>au_edu_anu_pme_PME__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__10::__apply, &au_edu_anu_pme_PME__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__10::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__10::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__10::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__14>au_edu_anu_pme_PME__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__14::__apply, &au_edu_anu_pme_PME__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__14::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__14::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__14::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__13>au_edu_anu_pme_PME__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__13::__apply, &au_edu_anu_pme_PME__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__13::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__13::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__13::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*>::itable<au_edu_anu_pme_PME__closure__18>au_edu_anu_pme_PME__closure__18::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__18::__apply, &au_edu_anu_pme_PME__closure__18::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__18::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Rail< ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >* >*> >, &au_edu_anu_pme_PME__closure__18::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__18::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__18::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__17>au_edu_anu_pme_PME__closure__17::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__17::__apply, &au_edu_anu_pme_PME__closure__17::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__17::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__17::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__17::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__17::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__17::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__17::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__16>au_edu_anu_pme_PME__closure__16::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__16::__apply, &au_edu_anu_pme_PME__closure__16::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__16::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__16::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__16::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__16::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__16::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__16::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__15>au_edu_anu_pme_PME__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__15::__apply, &au_edu_anu_pme_PME__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__15::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__15::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__15::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*>::itable<au_edu_anu_pme_PME__closure__19>au_edu_anu_pme_PME__closure__19::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__19::__apply, &au_edu_anu_pme_PME__closure__19::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__19::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< ::au::edu::anu::chem::PointCharge >*> >, &au_edu_anu_pme_PME__closure__19::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__19::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__19::_deserialize);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__22>au_edu_anu_pme_PME__closure__22::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__22::__apply, &au_edu_anu_pme_PME__closure__22::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__22::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__22::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__22::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__22::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__22::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__22::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__21>au_edu_anu_pme_PME__closure__21::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__21::__apply, &au_edu_anu_pme_PME__closure__21::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__21::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__21::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__21::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__21::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__21::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__21::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__20>au_edu_anu_pme_PME__closure__20::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__20::__apply, &au_edu_anu_pme_PME__closure__20::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__20::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__20::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__20::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__20::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__20::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__20::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__24>au_edu_anu_pme_PME__closure__24::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__24::__apply, &au_edu_anu_pme_PME__closure__24::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__24::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__24::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__24::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__24::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__24::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__24::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__23>au_edu_anu_pme_PME__closure__23::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__23::__apply, &au_edu_anu_pme_PME__closure__23::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__23::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__23::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__23::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__23::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__23::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__23::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__26>au_edu_anu_pme_PME__closure__26::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__26::__apply, &au_edu_anu_pme_PME__closure__26::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__26::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__26::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__26::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__26::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__26::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__26::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__25>au_edu_anu_pme_PME__closure__25::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__25::__apply, &au_edu_anu_pme_PME__closure__25::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__25::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__25::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__25::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__25::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__25::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__25::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__28>au_edu_anu_pme_PME__closure__28::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__28::__apply, &au_edu_anu_pme_PME__closure__28::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__28::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__28::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__28::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__28::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__28::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__28::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__27>au_edu_anu_pme_PME__closure__27::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__27::__apply, &au_edu_anu_pme_PME__closure__27::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__27::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__27::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__27::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__27::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__27::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__27::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__30>au_edu_anu_pme_PME__closure__30::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__30::__apply, &au_edu_anu_pme_PME__closure__30::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__30::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__30::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__30::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__30::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__30::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__30::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__29>au_edu_anu_pme_PME__closure__29::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__29::__apply, &au_edu_anu_pme_PME__closure__29::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__29::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__29::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__29::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__29::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__29::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__29::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__32>au_edu_anu_pme_PME__closure__32::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__32::__apply, &au_edu_anu_pme_PME__closure__32::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__32::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__32::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__32::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__32::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__32::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__32::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__31>au_edu_anu_pme_PME__closure__31::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__31::__apply, &au_edu_anu_pme_PME__closure__31::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__31::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__31::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__31::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__31::_deserialize);
const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__31::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(au_edu_anu_pme_PME__closure__31::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<au_edu_anu_pme_PME__closure__33>au_edu_anu_pme_PME__closure__33::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &au_edu_anu_pme_PME__closure__33::__apply, &au_edu_anu_pme_PME__closure__33::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry au_edu_anu_pme_PME__closure__33::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &au_edu_anu_pme_PME__closure__33::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t au_edu_anu_pme_PME__closure__33::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(au_edu_anu_pme_PME__closure__33::_deserialize);

/* END of PME */
/*************************************************/
